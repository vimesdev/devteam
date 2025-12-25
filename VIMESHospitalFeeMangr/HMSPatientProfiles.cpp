#include "MainFrm.h"
#include "HMSPatientProfiles.h"
#include "ReportDocument.h"

#include "HMSPaymentReceiptDialog.h"
#include "HMSFeeDepositDialog.h"
#include "HMSFeeRefundDialog.h"
#include "HMSFeeDiscountDialog.h"
#include "HMSInsuranceApprovalDialog.h"
#include "HMSModifyItemDialog.h"
#include "HMSPrintSheet.h"
#include "HMSFeeRefundDetailDialog.h"
#include "HMSDepositAdmissionDialog.h"
#include "HMSDischargePaymentDialog.h"
#include "FMDrugRefundDialog.h"
#include "HMSCashVoucherDialog.h"
//#include "HMSPrescriptionApproveDialog.h"
#include "HMSPatientPaymentOrderDialog.h"
#include "HMSUpdateOver5YearInformation.h"
#include "HMSEelectronicDialog.h"
#include "JSON.h"
#include "FMFeeRefundOrderDialog.h"
#include "FMUpdateQrPaymentMethodDialog.h"
#include "BankCustomer.h"


static int _OnInvoiceListPrintAdiaphanousOrderFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPrintAdiaphanousOrder();
	return 0;
}
static int _CreateDepositReceiptFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->CreateDepositReceipt();
	return 0;
} 
static int _CreatePaymentQROnlineFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnBankInvoiceInfo();
	return 0;
}
static int _CreatePaymentQROnline2Fnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnBankInvoiceInfo2();
	return 0;
}

static int _CreateRefundReceiptFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->CreateRefundReceipt();
	return 0;
}

static int _CreatePaymentVoucherFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->CreatePaymentVoucher();
	return 0;
}
static int _CreateOtherReceiptVoucherFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->CreateOtherReceiptVoucher();
	return 0;
}

static int _OnCreateRemissionReceiptFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->CreateRemissionReceipt();
	return 0;
}
static int _OnEditCardInformationFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnEditCardInformation();
}


static int _OnTerminateDocumentInformationFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd)->OnTerminateDocumentInformation();
}

static int _OnUpdateOver5YearsInformationFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd)->OnUpdateOver5YearsInformation();
}

static int _OnCreateRefundFeeReceiptFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->CreateRefundFeeReceipt();
	return 0;
}

static int _OnPrintPrescriptionFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPrintPrescription();
	return 0;
}

static int _OnPrintSummarizeFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPrintSummarizeExaminationSheet();
	return 0;
}

static int _OnPrintHemaReceiptFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPrintHemaReceipt();
	return 0;
} 

static int _OnReceiptFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnReceipt();
	return 0;
} 
static int _OnPrintReceiptReceiptFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPrintReceiptReceipt();
	return 0;
} 



static int _OnCreatePoliciesPayableFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->CreatePoliciesPayable();
	return 0;
}


static int _OnPrintSummaryCostFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->PrintSummaryCost();
	return 0;
}


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
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnTreatmentListLoadData();
}
static void _OnTreatmentListDblClickFnc(CWnd *pWnd){
	((CHMSPatientProfiles*)pWnd->GetParent())->OnTreatmentListDblClick();
} 
static void _OnTreatmentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientProfiles*)pWnd->GetParent())->OnTreatmentListSelectChange(nOldItem, nNewItem);
} 
static int _OnTreatmentListDeleteItemFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnTreatmentListDeleteItem();
} 

static int _OnTreatmentListChangeFnc(CWnd *pWnd){
	((CHMSPatientProfiles*)pWnd->GetParent())->OnTreatmentListDblClick();
	return 0;
} 
static int _OnTreatmentListPrintExaminationCostFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnTreatmentListPrintExaminationCost();
} 


static long _OnInvoiceListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListLoadData();
}
static int _OnInvoiceListLoadDataDetailFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListLoadDataDetail();
} 
static void _OnInvoiceListDblClickFnc(CWnd *pWnd){
	((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListDblClick();
} 
static void _OnInvoiceListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListSelectChange(nOldItem, nNewItem);
} 
static int _OnInvoiceListEditEletronicItemFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnEditInvoiceEletronicItem();
}


static int _OnInvoiceListUpdateMasterCardItemFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnUpdateMasterCardItem();
}

static int _OnInvoiceListDeleteItemFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListDeleteItem();
} 
static int _OnInvoiceListPrintReceiptFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListPrintReceipt();
} 

static int _OnInvoiceListPrintFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListPrint();
} 
static int _OnInvoiceListPrintGeneralExaminationCostFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListPrintGeneralExaminationCost();
}

static int _OnInvoiceListPrintGeneralExaminationCostA11Fnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListPrintGeneralExaminationCostA11();
}

static int _OnInvoiceListPrintInPackageCostFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListPrintInPackageCost();
}
static int _OnInvoiceListPrintDischargeReceiptFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListPrintDischargeReceipt();
}
static int _OnInvoiceListRefundDrugFeeFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListRefundDrugFee();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPatientProfiles*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientProfiles*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnListDeleteItem();
} 

static int _OnListRecalcFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnListRecalc();
}

static int _OnModifyItemFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnModifyItem();
}

static int _OnUpdateExtInsInfoFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnUpdateExtInsInfo();
}

static int _OnListAddOtherFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnListAddOtherFee();
} 
static int _OnListDeleteOtherFnc(CWnd *pWnd){
	 return ((CHMSPatientProfiles*)pWnd)->OnListDeleteOtherFee();
} 

static void _OnPaymentSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnPaymentSelect();
} 
static void _OnApprovalSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnApprovalSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnPrintReceiptSelect();
}
static int _OnPrintTreatmentFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnPrintTreatment();
}
static int _OnKethucHSFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd)->OnKethucHS();
}
static int _OnCreateRefundInvoiceFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles *)pWnd->GetParent())->CreateRefundInvoice();
}
static void _OnInsApproveSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnInsApproveSelect();
} 


static void _OnPrescriptionApproveSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnPrescriptionApproveSelect();
}

static void _OnElectronicFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnEletronic();
	
}

static void _OnPaymentVoucherFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnPaymentVoucher();
}

static void _OnReceiptVoucherFnc(CWnd *pWnd){
	((CHMSPatientProfiles *)pWnd)->OnReceiptVoucher();
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

static void _OnNoteSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnNoteSelect();
}

static void _OnInPackageSelectFnc(CWnd *pWnd){
	CHMSPatientProfiles *pVw = (CHMSPatientProfiles *)pWnd;
	pVw->OnInPackageSelect();
}

static int _OnRollBackFeeRefundFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnRollBackFeeRefund();
}

static int _OnUpdateHealthObjectFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd)->OnUpdateHealthObject();
}

static long _OnRoomListLoadDataFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnRoomListLoadData();
}

static int _OnChangePaymentMethodFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnChangePaymentMethod();
}

static int _OnInvoiceListRefundFeeFnc(CWnd *pWnd){
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnInvoiceListRefundFee();
}

static int _OnChangeQrPaymentMethodFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnChangeQrPaymentMethod();
}

static int _OnCreateNewQrOnlineFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnCreateNewQrOnline();
}

static int _OnViewRelativeFnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd)->OnViewRelative();
}

static int _OnRollBackFeeRefund2Fnc(CWnd *pWnd)
{
	return ((CHMSPatientProfiles*)pWnd->GetParent())->OnRollBackFeeRefund2();
}


CHMSPatientProfiles::CHMSPatientProfiles()
{
	m_nDlgWidth = 1025;
	m_nDlgHeight = 625;
	SetDefaultValues();
	m_nTreattime = 0;
}
CHMSPatientProfiles::~CHMSPatientProfiles(){
}
void CHMSPatientProfiles::OnCreateComponents(){	
	//m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 375, 300);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 375, 330);
//	m_wndPaymentReceiptInformation.Create(this, _T("Payment receipt information"), 5, 440, 375, 590);
//	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 305, 375, 435);
	m_wndGeneralCostInformation.Create(this, _T("General Cost Information"), 380, 5, 1015, 590);
	m_wndInPackage.Create(this, _T("In Package"), 900, 5, 1010, 25);
	m_wndInPackage.ModifyStyle(WS_TABSTOP, 0);
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

	m_wndMobileLabel.Create(this, _T("Mobile/CCCD"), 10, 300, 110, 325);	
	m_wndMobileLabel.SetTextColor(RGB(255,0,0));
	m_wndMobile.Create(this,115, 300, 237, 325); 
	m_wndIDNumber.Create(this,242, 300, 370, 325); 

	//m_wndTab.Create(this, 10, 305, 370, 585);
	m_wndTab.Create(this,10, 340, 372, 590); 
	m_wndTreatmentList.Create(this, 0,0,0,0); 
	m_wndInvoiceList.Create(this, 0, 0, 0, 0);
	m_wndRoomList.Create(this, 0, 0, 0, 0);
	
	m_wndList.Create(this,385, 30, 1010, 435); 	
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 385, 441, 485, 466);
	m_wndTotalCost.Create(this,490, 441, 590, 466); 
	m_wndTotalInsCostLabel.Create(this, _T("Policy/Ins Cost"), 595, 441, 690, 466);
	m_wndTotalInsCost.Create(this,695, 441, 795, 466); 
	m_wndTotalInsPaidLabel.Create(this, _T("Policy/Ins Paid"), 800, 440, 905, 465);
	m_wndTotalInsPaid.Create(this,910, 440, 1010, 465); 
	m_wndTotalPatPaidLabel.Create(this, _T("Patient Paid"), 385, 470, 485, 495);
	m_wndTotalPatPaid.Create(this,490, 470, 590, 495); 
	m_wndTotalDiffPaidLabel.Create(this, _T("Difference Pay"), 595, 470, 690, 495);
	m_wndTotalDiffPaid.Create(this,695, 470, 795, 495); 
	m_wndTotalPayableLabel.Create(this, _T("Total Payable"), 800, 470, 905, 495);
	m_wndTotalPayable.Create(this,910, 470, 1010, 495); 
	m_wndTotalDepositLabel.Create(this, _T("Total Deposit(A)"), 385, 500, 485, 525);
	m_wndTotalDeposit.Create(this,490, 500, 590, 525); 
	m_wndTotalPolicyLabel.Create(this, _T("Total Policy(B)"), 595, 500, 690, 525);
	m_wndTotalPolicy.Create(this,695, 500, 795, 525); 
	m_wndSumABLabel.Create(this, _T("Sum (A+B)"), 800, 500, 905, 525);
	m_wndSumAB.Create(this,910, 500, 1010, 525); 
	m_wndTotalDiscountLabel.Create(this, _T("Discount_OtherPaid"), 800, 530, 905, 555);
	m_wndTotalDiscount.Create(this,910, 530, 1010, 555); 
	m_wndTotalPaymentLabel.Create(this, _T("Payment Amount"), 800, 560, 905, 585);
	m_wndTotalPayment.Create(this,910, 560, 1010, 585); 
	m_wndStatusLabel.Create(this, _T("Status"), 385, 529, 485, 554);
	m_wndStatus.Create(this,490, 529, 795, 554); 
	m_wndNoteLabel.Create(this, _T("Note"), 385, 559, 485, 584);
	m_wndNote.Create(this,490, 559, 765, 585); 
	m_wndNoteButton.Create(this, _T("..."), 770, 559, 795, 585);
	m_wndDesc.Create(this, _T("Description"), 380, 595, 690, 620);

	m_wndPayment.Create(this, _T("&Receipt(F2)"), 5, 595, 90, 620);
	m_wndApproval.Create(this, _T("&Approval(F3)"), 95, 595, 185, 620);
	m_wndPrint.Create(this, _T("&Print"), 190, 595, 280, 620);	
	m_wndElectronic.Create(this, _T("&E-Invoice"), 285, 595, 375, 620);

	m_wndReceiptVoucher.Create(this, _T("Phiếu thu khác"), 805, 595, 900, 620);
	m_wndPaymentVoucher.Create(this, _T("Phiếu chi khác"), 905, 595, 1000, 620);
	
	//m_wndPrescriptionApprove.Create(this, _T("Pres. Approve"), 700, 595, 800, 620);
//	m_wndInsApprove.Create(this, _T("Ins Approve"), 910, 595, 1015, 620);
}

void CHMSPatientProfiles::OnInitializeComponents(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableButtons(false, -1);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetNotEmpty(false);
	m_wndPID.SetLimitText(16);
	//m_wndPID.SetCheckValue(true);
	//m_wndPID.SetNotEmpty(false);
	//m_wndPID.SetReadOnly(true);
	m_wndPatientName.SetLimitText(35);
//	m_wndPatientName.SetCheckValue(true);
//	m_wndPatientName.SetNotEmpty(false);
	m_wndAge.SetLimitText(35);
//	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
//	m_wndSex.SetCheckValue(true);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(true);
	m_wndWorkingPlace.SetLimitText(128);
//	m_wndWorkingPlace.SetCheckValue(true);
	m_wndObject.SetLimitText(35);
	//m_wndObject.SetCheckValue(true);
	m_wndCardNo.SetLimitText(20);
	//m_wndCardNo.SetCheckValue(true);
	m_wndCardCode.SetLimitText(35);
	m_wndCardCode.ModifyStyle(0, ES_CENTER);
	//m_wndCardCode.SetCheckValue(true);
	m_wndCardDiscount.SetLimitText(35);
	m_wndCardDiscount.ModifyStyle(0, ES_CENTER);
	//m_wndCardDiscount.SetCheckValue(true);
	//m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndRegistrationDate.SetCheckValue(true);
	//m_wndExpiryDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetLimitText(35);
	//m_wndRegistrationPlace.SetCheckValue(true);
	m_wndRegistrationDate.ModifyStyle(0, ES_CENTER);
	m_wndExpiryDate.ModifyStyle(0, ES_CENTER);

	m_wndTotalCost.SetLimitText(35);
	m_wndTotalCost.SetCurrencyFormat(true);

	m_wndTotalInsCost.SetLimitText(35);
	m_wndTotalInsCost.SetCurrencyFormat(true);

	m_wndTotalInsPaid.SetLimitText(16);
	m_wndTotalInsPaid.SetCheckValue(true);

	m_wndTotalDiscount.SetLimitText(35);
	m_wndTotalDiscount.SetCurrencyFormat(true);

	m_wndTotalDiffPaid.SetLimitText(35);
	m_wndTotalDiffPaid.SetCurrencyFormat(true);

	m_wndTotalPayable.SetLimitText(35);
	m_wndTotalPayable.SetCurrencyFormat(true);

	m_wndTotalPatPaid.SetLimitText(35);
	m_wndTotalPatPaid.SetCurrencyFormat(true);

	m_wndTotalDeposit.SetLimitText(16);
	m_wndTotalDeposit.SetCheckValue(true);

	m_wndTotalPolicy.SetLimitText(16);
	m_wndTotalPolicy.SetCheckValue(true);

	m_wndSumAB.SetLimitText(16);
	m_wndSumAB.SetCheckValue(true);

	m_wndTotalPayment.SetLimitText(16);
	m_wndTotalPayment.SetCheckValue(true);

	m_wndTreatmentList.SetCheckBox(true);

	m_wndSumAB.SetCurrencyFormat(true);
	m_wndTotalPayment.SetCurrencyFormat(true);
	m_wndTotalDeposit.SetCurrencyFormat(true);
	m_wndTotalPolicy.SetCurrencyFormat(true);
	m_wndTotalInsPaid.SetCurrencyFormat(true);

	m_wndPaymentVoucher.ModifyStyle(WS_TABSTOP, 0);
	m_wndReceiptVoucher.ModifyStyle(WS_TABSTOP, 0);
	m_wndNoteButton.ModifyStyle(WS_TABSTOP, 0);


	m_wndTreatmentList.InsertColumn(0, _T("Department"), CFMT_TEXT, 250);
	m_wndTreatmentList.InsertColumn(1, _T("From Date"), CFMT_DATE, 85);
	m_wndTreatmentList.InsertColumn(2, _T("To Date"), CFMT_DATE, 85);
	m_wndTreatmentList.InsertColumn(3, _T("Sts"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndTreatmentList.InsertColumn(4, _T(""), CFMT_TEXT, 0); //deptid
	m_wndTreatmentList.ModifyStyle(0, LVS_NOSORTHEADER);


	m_wndRoomList.InsertColumn(0, _T("Khoa"), CFMT_TEXT, 50);
	m_wndRoomList.InsertColumn(1, _T("Phòng khám"), CFMT_TEXT, 250);
	m_wndRoomList.InsertColumn(2, _T("T/G khám"), CFMT_TEXT, 125);
	m_wndRoomList.InsertColumn(3, _T("T/G kết thúc"), CFMT_TEXT, 125);	
	m_wndRoomList.InsertColumn(4, _T("Trạng thái"), CFMT_TEXT, 125);	
	m_wndRoomList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndInvoiceList.InsertColumn(0, _T("id"), CFMT_TEXT, 0);
	m_wndInvoiceList.InsertColumn(1, _T("Type"), CFMT_TEXT, 35);
	m_wndInvoiceList.InsertColumn(2, _T("Invoice No"), CFMT_TEXT, 65);
	m_wndInvoiceList.InsertColumn(3, _T("Date"), CFMT_DATE, 80);
	m_wndInvoiceList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 120);
	m_wndInvoiceList.InsertColumn(5, _T("Staff"), CFMT_TEXT, 65);
	m_wndInvoiceList.InsertColumn(6, _T("invoicetype"), CFMT_TEXT, 0);
	m_wndInvoiceList.InsertColumn(7, _T("status"), CFMT_TEXT, 0);
	m_wndInvoiceList.InsertColumn(8, _T("class"), CFMT_TEXT, 50);
	m_wndInvoiceList.InsertColumn(9, _T("Lượt điều trị"), CFMT_TEXT | CFMT_CENTER, 50);
	m_wndInvoiceList.InsertColumn(10, _T("EInvoice_Time"), CFMT_TEXT, 120);
	m_wndInvoiceList.InsertColumn(11, _T("EInvoice_Pkey"), CFMT_TEXT, 100);
	m_wndInvoiceList.InsertColumn(12, _T("EInvoice_key"), CFMT_TEXT, 100);
	m_wndInvoiceList.InsertColumn(13, _T("Loại"), CFMT_TEXT, 50);
	m_wndInvoiceList.InsertColumn(14, _T("Mã Giao dịch QR"), CFMT_TEXT, 100);
	m_wndInvoiceList.ModifyStyle(0, LVS_NOSORTHEADER);

	//m_wndList.SetSortHeader(false);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 35);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);
	
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 87);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 87);
	m_wndList.InsertColumn(6, _T("Ins Paid"), CFMT_MONEY, 87);
	m_wndList.InsertColumn(7, _T("Diff Paid"), CFMT_MONEY, 87);
	m_wndList.InsertColumn(8, _T("Pat Paid"), CFMT_MONEY, 87);
	m_wndList.InsertColumn(9, _T("type"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("item"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("feetype"), CFMT_TEXT, 0);
//	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
//	m_wndList.GetHeaderControl()->SetItemHeight(2);
//	m_wndList.GetHeaderControl()->MergeCell(_T("Payment Resource"), 0, 6, 1, 8, true);

	m_nDocumentNo=0;
	m_nPID=0;

	m_wndDesc.SetTextColor(RGB(0, 64, 192));

	
	m_wndStatus.SetReadOnly(TRUE);
	m_wndNote.SetReadOnly(TRUE);

	m_hms_electronicTbl.SetTableName(_T("HMS_FEE_ELECTRONICLINE"));	
	m_hms_electronicTbl.AddField(_T("HFE_ORDERID"), dfInteger);
	m_hms_electronicTbl.AddField(_T("HFE_KEY"), dfDouble);
	m_hms_electronicTbl.AddField(_T("HFE_PKEY"), dfDouble);
	m_hms_electronicTbl.AddField(_T("HFE_STATUS"), dfText, 1);
	m_hms_electronicTbl.AddField(_T("HFE_SEND_ITT"), dfText, 1);
	m_hms_electronicTbl.AddField(_T("HFE_GET_PKEY_TIME"), dfDateTime);

	//Sau 1h quét 1 lần để đảm bảo tiến trình lần trước được thực hiện xong
	if (pMF->GetCurrentUser() == _T("hathuybh"))
		{	
		SetTimer(1, 3600000, NULL);
		//SetTimer(1, 360000, NULL);
		}
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
	
	m_wndTreatmentList.SetWindowText(_T("Treatment Information"));
	m_wndRoomList.SetWindowText(_T("Phòng khám"));
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	//m_wndTreatmentList.AddEvent(1, _T("Print Treatment"), _OnPrintTreatmentFnc);
	//m_wndTreatmentList.AddEvent(2, _T("K?t thúc HS d? t?o HÐ"), _OnKethucHSFnc);

	m_wndElectronic.SetEvent(WE_CLICK, _OnElectronicFnc);
	m_wndPaymentVoucher.SetEvent(WE_CLICK, _OnPaymentVoucherFnc);
	m_wndReceiptVoucher.SetEvent(WE_CLICK, _OnReceiptVoucherFnc);

	m_wndInvoiceList.SetEvent(WE_SELCHANGE, _OnInvoiceListSelectChangeFnc);
	m_wndInvoiceList.SetEvent(WE_LOADDATA, _OnInvoiceListLoadDataFnc);
	m_wndInvoiceList.SetEvent(WE_DBLCLICK, _OnInvoiceListDblClickFnc);
	m_wndInvoiceList.SetWindowText(_T("Receipt Information"));
	
	m_wndInvoiceList.SetWindowText(_T("Invoice List"));
	m_wndInvoiceList.AddEvent(1, _T("In phiếu thu / phiếu chi"), _OnInvoiceListPrintReceiptFnc);
	m_wndInvoiceList.AddEvent(2, _T("In biên lai thu tiền"), _OnInvoiceListPrintFnc);
	m_wndInvoiceList.AddEvent(3, _T("Print General Examination Cost"), _OnInvoiceListPrintGeneralExaminationCostFnc);
	m_wndInvoiceList.AddEvent(4, _T("Print Discharge Receipt"), _OnInvoiceListPrintDischargeReceiptFnc);
	m_wndInvoiceList.AddEvent(5, _T("Print Adiaphanous Order"), _OnInvoiceListPrintAdiaphanousOrderFnc);
//	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
//	m_wndInvoiceList.AddEvent(5, _T("Create Refund Receipt"), _OnCreateRefundInvoiceFnc);
	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
	m_wndInvoiceList.AddEvent(6, _T("Refund Drug Fee"), _OnInvoiceListRefundDrugFeeFnc);
	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
	m_wndInvoiceList.AddEvent(7, _T("Delete Invoice"), _OnInvoiceListDeleteItemFnc);
	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
	m_wndInvoiceList.AddEvent(8, _T("Edit Invoice Eletronic"), _OnInvoiceListEditEletronicItemFnc);


	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
	m_wndInvoiceList.AddEvent(9, _T("Cập nhật thông tin thanh toán thẻ tín dụng, ATM, CK"), _OnInvoiceListUpdateMasterCardItemFnc);
	m_wndInvoiceList.AddEvent(10, _T("Thông tin chi tiết các lần thanh toán"), _OnInvoiceListLoadDataDetailFnc);

	m_wndInvoiceList.AddEvent(11, _T("In bảng kê thuốc, vật tư trong gói"), _OnInvoiceListPrintInPackageCostFnc);
	if(pMF->CheckPermission(_T("20.14")))
	{
		m_wndInvoiceList.AddEvent(12, _T("In bảng kê thuốc, vật tư A11"), _OnInvoiceListPrintGeneralExaminationCostA11Fnc);		
	}
	
	m_wndInvoiceList.AddEvent(14, _T("Khôi phục phiếu chi nhầm TYC khi chưa khóa sổ"), _OnRollBackFeeRefundFnc);
	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
	
	m_wndInvoiceList.AddEvent(15, _T("Chuyển hình thức thanh toán CK <-> ATM"), _OnChangePaymentMethodFnc);
	
	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
	m_wndInvoiceList.AddEvent(20, _T("Phiếu yêu cầu trả lại dịch vụ"), _OnInvoiceListRefundFeeFnc);

	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
	m_wndInvoiceList.AddEvent(21, _T("Cập nhật hình thức thanh toán qronline"), _OnChangeQrPaymentMethodFnc);

	m_wndInvoiceList.AddEvent(22, _T("Cấp mới qrcode cho bệnh nhân"), _OnCreateNewQrOnlineFnc);
	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);

	m_wndInvoiceList.AddEvent(23, _T("Cập nhật lại phiếu chi trả lại từ phòng khám"), _OnRollBackFeeRefund2Fnc);
	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);

//	m_wndInsApprove.SetEvent(WE_CLICK, _OnInsApproveSelectFnc);
//	m_wndPrescriptionApprove.SetEvent(WE_CLICK, _OnPrescriptionApproveSelectFnc);



	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndNoteButton.SetEvent(WE_CLICK, _OnNoteSelectFnc);

	m_wndInPackage.SetEvent(WE_CLICK, _OnInPackageSelectFnc);

/*
	
	if(pMF->m_szPrintHemaReceipt == _T("Y")){
		m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
		m_wndInvoiceList.AddEvent(6, _T("Print Hema Receipt\tCtrl+H"), _OnPrintHemaReceiptFnc, 0, 'H', VK_CONTROL);
	}
*/
	
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);


	
	m_wndList.SetWindowText(_T("Fee Items"));
	m_wndList.AddEvent(1, _T("Add Other Fee"), _OnListAddOtherFnc, 0, VK_F3);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Delete Other Fee"), _OnListDeleteItemFnc, 0, VK_DELETE);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Recalculate Fee"), _OnListRecalcFnc, 0, VK_F5);
	//m_wndList.AddEvent(2, _T("Delete Entry"), _OnListDeleteItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Modify Fee Items"), _OnModifyItemFnc);

	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("Cập nhật chi phí thẻ bảo lãnh thanh toán"), _OnUpdateExtInsInfoFnc);

	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	
	m_wndTab.Add(_T("Hóa đơn"), &m_wndInvoiceList);
	m_wndTab.Add(_T("Khoa"), &m_wndTreatmentList);
	m_wndTab.Add(_T("Phòng khám"), &m_wndRoomList);
	m_wndTab.SetCurSel(0);
	

	//AddLayoutControl(&m_wndTotalCostLabel, WS_REPOSY, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndTotalCost, WS_RESIZEX|WS_REPOSY, 100, 100, 40, 100);
	//AddLayoutControl(&m_wndTotalInsCostLabel, WS_REPOSX|WS_REPOSY, 40, 100, 100, 100);
	//AddLayoutControl(&m_wndTotalInsCost, WS_REPOSX|WS_REPOSY|WS_RESIZEX, 40, 100, 40, 100);
	//AddLayoutControl(&m_wndTotalDiscountLabel, WS_REPOSX|WS_REPOSY, 80, 100, 100, 100);
	//AddLayoutControl(&m_wndTotalDiscount, WS_REPOSX|WS_REPOSY|WS_RESIZEX, 80, 100, 20, 100);
	//AddLayoutControl(&m_wndTotalDiffPaidLabel, WS_REPOSY, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndTotalDiffPaid, WS_RESIZEX|WS_REPOSY, 100, 100, 40, 100);
	//AddLayoutControl(&m_wndTotalPayableLabel, WS_REPOSX|WS_REPOSY, 40, 100, 100, 100);
	//AddLayoutControl(&m_wndTotalPayable, WS_REPOSX|WS_REPOSY|WS_RESIZEX, 40, 100, 40, 100);
	//AddLayoutControl(&m_wndTotalPatPaidLabel, WS_REPOSX|WS_REPOSY, 80, 100, 100, 100);
	//AddLayoutControl(&m_wndTotalPatPaid, WS_REPOSX|WS_REPOSY|WS_RESIZEX, 80, 100, 20, 100);

	//m_wndList.SetAutoColumnSize(true);

	
////Phieu tam thu cua benh nhan
//	AddEvent(1, _T("Create Deposit Receipt\tCtrl+A"), _CreateDepositReceiptFnc, 0, 'A', VK_CONTROL);
//	AddEvent(0, _T("-"), NULL);
////Phieu hoan tra lai tien cho benh nhan
//	
////	AddEvent(2, _T("Create Refund Receipt\tCtrl+R"), _CreateRefundReceiptFnc, 0, 'R', VK_CONTROL);
////Phieu mien giam cho benh nhan
//	AddEvent(3, _T("Create Remission Receipt\tCtrl+D"), _OnCreateRemissionReceiptFnc, 0, 'D', VK_CONTROL);
//	
//			
//	if(pMF->IsInPatient() == 0)
//	{
//		if(pMF->m_bPrintSummarize)
//		{
//			AddEvent(0, _T("-"), NULL);
//			AddEvent(4, _T("Print Summarize Examination Sheet\tF6"), _OnPrintSummarizeFnc);
//
//			AddEvent(0, _T("-"), NULL);
//			AddEvent(5, _T("Print Prescription\tF5"), _OnPrintPrescriptionFnc, 0, VK_F5);
//
//	//		AddEvent(0, _T("-"), NULL);
//	//		AddEvent(4, _T("Print Prescription\tCtrl+P"), _OnPrintPrescriptionFnc, 0, 'P', VK_CONTROL);
//		}
//		else
//		{
//			AddEvent(0, _T("-"), NULL);
//			AddEvent(6, _T("Create Pharma Refund Receipt\tCtrl+R"), _OnCreateRefundFeeReceiptFnc, 0, 'R', VK_CONTROL);
//		}
//
//		AddEvent(0, _T("-"));
//		AddEvent(7, _T("Print Treatment"), _OnPrintTreatmentFnc);
//
//		AddEvent(0, _T("-"));
//		AddEvent(8, _T("Edit insurance information"), _OnEditCardInformationFnc);
//		AddEvent(0, _T("-"));
//		AddEvent(9, _T("Terminate Document"), _OnTerminateDocumentInformationFnc);
//	}
//	else
//	{
//
//	//	AddEvent(6, _T("Create Pharma Refund Receipt\tCtrl+R"), _OnCreateRefundFeeReceiptFnc, 0, 'R', VK_CONTROL);
//	//	AddEvent(0, _T("-"));
//		AddEvent(8, _T("Edit insurance information"), _OnEditCardInformationFnc);
//		AddEvent(0, _T("-"));
//		AddEvent(10, _T("Create policies payable sheet"), _OnCreatePoliciesPayableFnc);
//
//		AddEvent(0, _T("-"));
//		AddEvent(11, _T("Print summary cost"), _OnPrintSummaryCostFnc);
//		
//	}
//
//	//if(!pMF->CheckPermission(_T("15.10")))
//	//{
//	//	m_wndPrescriptionApprove.ShowWindow(SW_HIDE);
//	//}


	CreatePopupMenus();

	///
	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));
	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));
	

	m_wndTotalCost.SetTextColor(RGB(0, 0, 255));
	m_wndTotalInsCost.SetTextColor(RGB(0, 0, 255));
	m_wndTotalInsPaid.SetTextColor(RGB(0, 0, 255));

	m_wndTotalPatPaid.SetTextColor(RGB(0, 64, 128));
	m_wndTotalDiffPaid.SetTextColor(RGB(0, 64, 128));
	m_wndTotalPayable.SetTextColor(RGB(0, 64, 128));

	m_wndTotalDeposit.SetTextColor(RGB(0, 128, 192));
	m_wndTotalPolicy.SetTextColor(RGB(0, 128, 192));
	m_wndSumAB.SetTextColor(RGB(0, 128, 192));

	m_wndTotalDiscount.SetTextColor(RGB(255, 128, 64));
	m_wndTotalPayment.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndTotalCost, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalInsCost, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalInsPaid, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalPatPaid, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalDiffPaid, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalPayable, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalDeposit, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalPolicy, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndSumAB, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalDiscount, GetFaceName(), GetFaceSize(), TRUE);
	SetWindowFont(&m_wndTotalPayment, GetFaceName(), GetFaceSize(), TRUE);
	
	SetMode(VM_VIEW);
	m_wndDocumentNo.SetFocus();


	//KIEM TRA NEU BENH NHAN NGOAI TRU DA DUYET CHI PHI THI CHO PHEP THU
	
	
//	SetMenuState(2, false);
/*
	AddLayoutControl(&m_wndPaymentInvoiceInformation, WS_RESIZEY, 100, 100, 100, 80);
//	AddLayoutControl(&m_wndTreatmentInformation, WS_RESIZEY, 100, 100, 100, 50);
	AddLayoutControl(&m_wndGeneralCost, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 80);
//	AddLayoutControl(&m_wndTreatmentList, WS_RESIZEY, 100, 100, 100, 50);
	AddLayoutControl(&m_wndInvoiceList, WS_RESIZEY, 100, 100, 100, 80);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPayment, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndApproval, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPrint, WS_REPOSY, 100, 100, 100, 100);
*/

}
void CHMSPatientProfiles::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPID.GetDlgCtrlID(), m_nPID);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndWorkingPlace.GetDlgCtrlID(), m_szWorkingPlace);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectDesc);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCardCode.GetDlgCtrlID(), m_szCardCode);
	DDX_Text(pDX, m_wndCardDiscount.GetDlgCtrlID(), m_szCardDiscount);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_Text(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlace);

	DDX_Text(pDX, m_wndMobile.GetDlgCtrlID(), m_szMobile);
	DDX_Text(pDX, m_wndIDNumber.GetDlgCtrlID(), m_szIDNumber);

	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndTotalInsCost.GetDlgCtrlID(), m_nTotalInsCost);
	DDX_Text(pDX, m_wndTotalInsPaid.GetDlgCtrlID(), m_nTotalInsPaid);
	DDX_Text(pDX, m_wndTotalPatPaid.GetDlgCtrlID(), m_nTotalPatPaid);
	DDX_Text(pDX, m_wndTotalDiffPaid.GetDlgCtrlID(), m_nTotalDiffPaid);
	DDX_Text(pDX, m_wndTotalPayable.GetDlgCtrlID(), m_nTotalPayable);
	

	DDX_Text(pDX, m_wndTotalDeposit.GetDlgCtrlID(), m_nTotalDeposit);
	DDX_Text(pDX, m_wndTotalPolicy.GetDlgCtrlID(), m_nTotalPolicy);
	DDX_Text(pDX, m_wndSumAB.GetDlgCtrlID(), m_nSumAB);
	DDX_Text(pDX, m_wndTotalDiscount.GetDlgCtrlID(), m_nTotalDiscount);
	DDX_Text(pDX, m_wndTotalPayment.GetDlgCtrlID(), m_nTotalPayment);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szInvoiceStatus);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Check(pDX, m_wndInPackage.GetDlgCtrlID(), m_bInPackage);

}
void CHMSPatientProfiles::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL, tmpStr, szStatus, m_szInfertilityEX, szphanloaicovid, szcardno_2;
	int	n_number_expdate = 0;

	//_msg(_T("Tính lại tạm gửi"));

	if (m_nDocumentNo <= 0)
	{
		SetMode(VM_NONE);
		m_bRankNotice = false;
		return;
	}
	if(m_nDocumentNo != pMF->m_nDocumentNo)
	{
		m_bRankNotice = false;
	}	

	szSQL.Format(_T(" SELECT hp_patientno AS patientno,") \
			
			_T("      GET_PATIENTNAME(hd_docno)											AS pname,") \
			_T("      hms_getage(trunc_date(hd_admitdate), hp_birthdate)                AS age,") \
			_T("      HMS_GETSEX(hp_sex)                                AS sex,") \
			_T("      hms_getoccupatient(hp_occupation) AS occupation,") \
			_T("      hp_workplace                                                      AS workplace,") \
			_T("      hp_dtladdr                                                        AS detailaddress,") \
			_T("      hms_getaddress(hp_provid,hp_distid,hp_villid)                     AS address,") \
			_T("      hd_object                                                         AS objectid,") \
			_T("      hms_getobjecttype(hd_object)             AS object_type,") \
			_T("      trunc_date(hd_insregdate) AS insapplydate,") \
			_T("      hd_cardno     AS cardno,") \
			_T("      substr(hd_cardno, 1, 2) as cardno_2,") \
			_T("      hd_cardidx    AS cardidx,") \
			_T("	  hd_rank as rank, ") \
			_T("	  get_selection_desc('hms_rank', hd_rank) as rankname, ") \
			_T("      trunc_date(hc_regdate)    AS insregdate,") \
			_T("      trunc_date(hc_expdate)    AS insexpdate,") \
			_T("      trunc(sysdate)-hc_expdate as number_expdate,") \
			_T("      hms_gethospitalname(hc_regcode)             AS insregplace,") \
			_T("      hd_disrate    AS disrate,") \
			_T("      hc_discount   AS discount,") \
			_T("      hc_code       AS inscode,") \
			_T("      hc_regcode    AS regcode,") \
			_T("      hd_insline    AS insline,") \
			_T("      hd_outpatient AS outpatient,") \
			_T("      hd_emergency  AS emergency, ") \
			_T("	  hd_status, hd_admitdept, hd_suggestion as suggestion, hd_isinpatient, ") \
			_T(" hfe_deposit_amount, hfe_eat_amount, hd_infertility, HCR_DISCHARGEDEPT, hd_healthexam, hd_recordno, hd_is_extins, hd_object, HD_OVER5YEAR, IVF_ISDISCOUNT, ") \
			_T(" NVL(HCR_PHANLOAIBENHCOVID19, '03') as phanloaicovid,") \
			
			_T(" hd_telephone as mobile, ") \
			_T(" hp_sin as idnumber ") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN RM_IVF_DISCOUNT_INFOR ON (hd_docno=IVF_DOCNO)") \
			_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (hd_patientno=HCR_PATIENTNO AND hd_docno=hcr_docno)") \
			_T(" LEFT JOIN hms_card") \
			_T(" ON(hc_patientno=hd_patientno") \
			_T("      AND hc_idx=hd_cardidx)") \
			_T(" WHERE hd_docno =%ld "), m_nDocumentNo);

	//_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);

	
	SetDefaultValues();
	if(rs.IsEOF())
	{
		SetMode(VM_NONE);
		return;
	}
	pMF->m_szExtIns = _T("N");

	CString szObjectType;
	rs.GetValue(_T("object_type"), szObjectType);
	pMF->m_szObjectType = szObjectType;

//	rs.GetValue(_T("hfe_eat_amount"), m_nEatAmount);

	if(!pMF->CheckPermission(_T("01.17")))
	{
		if(pMF->m_szObjectTypeGroup.Find(szObjectType) == -1)
		{
		//	ShowMessageBox(_T("Patient not found"));
		//	return;
		}
	}

	pMF->m_nDocumentNo = m_nDocumentNo;
	rs.GetValue(_T("patientno"), m_nPID);
	pMF->m_nPID = m_nPID;
	pMF->m_nPatientNo = m_nPID;
	rs.GetValue(_T("pname"), tmpStr);
	pMF->m_szPatientName = tmpStr;
	StringUpper(tmpStr, m_szPatientName);
	

	rs.GetValue(_T("age"), m_szAge); 
	rs.GetValue(_T("sex"), m_szSex); 
	rs.GetValue(_T("workplace"), m_szWorkingPlace); 
	rs.GetValue(_T("detailaddress"), tmpStr);
	m_szAddress  = tmpStr;
	if(!m_szAddress.IsEmpty())
		m_szAddress += _T(" - ");
	rs.GetValue(_T("address"), tmpStr);
	m_szAddress += tmpStr;
	rs.GetValue(_T("objectid"), tmpStr); 
	pMF->m_szObject = tmpStr;
	rs.GetValue(_T("hd_status"), szStatus);
	pMF->m_szStatus = szStatus;
	
	m_szObjectDesc = pMF->GetObjectString(tmpStr);


	rs.GetValue(_T("cardno"), m_szCardNo); 
	rs.GetValue(_T("cardno_2"), szcardno_2);
	rs.GetValue(_T("insregdate"), tmpStr);

	m_szRegistrationDate = tmpStr;
	rs.GetValue(_T("insexpdate"), tmpStr);
	m_szExpiryDate = tmpStr;
	rs.GetValue(_T("insregplace"), m_szRegistrationPlace);
	int nInsRate;
	rs.GetValue(_T("disrate"), nInsRate);
	m_szCardDiscount.Format(_T("%d"), nInsRate);
	rs.GetValue(_T("emergency"), m_szEmergency);
	m_nInsRate = nInsRate;
	m_wndCardCode.SetTextColor(RGB(0 ,0, 255));
	m_wndCardNo.SetTextColor(RGB(0, 0, 255));
	m_wndCardDiscount.SetTextColor(RGB(0, 0, 255));


	rs.GetValue(_T("insline"), tmpStr); 
	pMF->m_szOutLine = tmpStr;
	pMF->m_szEmergency = m_szEmergency;
	if(tmpStr == _T("Y"))
	{
	//	float percent;
	//	int discount;
	//	rs.GetValue(_T("discount"), discount);
		m_szObjectDesc += _T("[Trái tuyến]");
	//	percent = ToInt(m_szCardDiscount)*discount/100.0;
	//	m_szCardDiscount.Format(_T("%.1f"), percent);
		m_wndCardCode.SetTextColor(RGB(255 ,0, 0));
		m_wndCardNo.SetTextColor(RGB(255, 0, 0));
		m_wndCardDiscount.SetTextColor(RGB(255, 0, 0));		
	}	
	m_bInsTreatment = FALSE;
	m_bPrintAppExam = false;

	pMF->m_szCardNo = m_szCardNo;
	pMF->m_szObjectID = m_szObjectID;

	

	rs.GetValue(_T("hd_isinpatient"), tmpStr);
	if(tmpStr == _T("Y"))
	{
		m_bInpatient = true;
	}
	else
	{
		m_bInpatient = false;
	}

	pMF->m_nInpatient = (int)m_bInpatient;
	
	if (!pMF->IsInPatient())
	{
		rs.GetValue(_T("hd_admitdept"), tmpStr);
		pMF->m_szReceiptDeptID = tmpStr;
	}

	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
	{
		if(rs.GetValue(_T("regcode")) != _T("01014") && tmpStr == _T("N"))
		{
			ShowMessageBox(_T("Bệnh nhân đăng ký ngoại viện"), MB_OK | MB_ICONWARNING);
		}
		
		if(!pMF->IsInPatient())
		{
			rs.GetValue(_T("suggestion"), tmpStr);		
			if(tmpStr == _T("D") && rs.GetValue(_T("hd_status")) == _T("T")){
				m_bInsTreatment = TRUE;			
			}

			CString szOutPatient, szRecordNo;
			rs.GetValue(_T("outpatient"), szOutPatient);
			rs.GetValue(_T("hd_recordno"), szRecordNo);
			if(szOutPatient == _T("Y") && !szRecordNo.IsEmpty())
			{
				CRecord rso(&pMF->m_db);
				CString szMsg, tmpStr, szRecordType;
				szSQL.Format(_T("SELECT hop_record_type FROM hms_outpatient WHERE hop_patientno=%ld and hop_recordno='%s' "), pMF->m_nPatientNo, szRecordNo);
				rso.ExecSQL(szSQL);
				rso.GetValue(_T("hop_record_type"), szRecordType);
				tmpStr = pMF->GetSelectionString(_T("OBA_RECORDTYPE"), szRecordType);
				szMsg.Format(_T("Bệnh nhân  điều trị ngoại trú (%s) có số bệnh án [%s]"), tmpStr, szRecordNo);
				ShowMessageBox(szMsg);
			}
			
			rs.GetValue(_T("insapplydate"), tmpStr);
			//m_szObjectDesc.AppendFormat(_T(" [%s]"), CDate::Convert(tmpStr));	
//Kham huyet ap, tieu duong
			szSQL.Format(_T(" select count(*) as roomcount") \
						_T(" from hms_exam") \
						_T(" where he_docno=%ld") \
						_T("       and (he_roomid=39 or he_hatd='Y')"), m_nDocumentNo);

			rss.ExecSQL(szSQL);

			if (rss.GetIntValue() > 0)
			{
				/*rss.GetValue(_T("roomcount"), tmpStr);
				if (str2int(tmpStr) == 39)
				{*/
				m_bPrintAppExam = true;
				ShowMessageBox(_T("Bệnh nhân khám tiểu đường - huyết áp"),
							MB_OK | MB_ICONWARNING);
				//}
			}
		}
	}
	if(pMF->GetObjectType() == _T("D")){
		m_szObjectDesc.AppendFormat(_T(" [%d %s]"), nInsRate, _T("%"));
	}


	rs.GetValue(_T("inscode"), m_szCardCode);

	//Kiem tra benh nhan cap tuong
	int  rank;
	rs.GetValue(_T("rank"), rank);
	
	//if (!m_bRankNotice &&rank >= 15 && rank <= 23 && rank != 19 && szcardno_2 == _T("QN"))
	if (!m_bRankNotice &&rank >= 15 && rank <= 23 && rank != 19)
	{
		tmpStr.Format(_T("Bệnh nhân cấp [%s]"), rs.GetValue(_T("rankname")));
		ShowMessageBox(tmpStr, MB_ICONINFORMATION);
		//m_bRankNotice = true;
	}
//
	if(!m_szCardNo.IsEmpty() )
		{
			int priority = (int)m_szCardNo[2];
			if(priority == 1 || priority == 2 && priority == 3)
			{
				ShowMessageBox(_T("Bệnh nhân là đối tượng thẻ ưu tiên"));
			}
		}
	CString szObjectID, szOver5year, szDiscount;
	//Benh nhan hiem muon
	rs.GetValue(_T("hd_infertility"), m_szInfertility);

	rs.GetValue(_T("HCR_DISCHARGEDEPT"), m_szInfertilityEX);
	//Benh nhan kham suc khoe
	rs.GetValue(_T("hd_healthexam"), m_szHealthExam); 
	//Benh nhan co the bao viet
	rs.GetValue(_T("hd_is_extins"), m_szIsExtIns); 
	//Bệnh nhân quân nhân có thẻ QN
	rs.GetValue(_T("hd_object"), szObjectID);
	rs.GetValue(_T("number_expdate"), n_number_expdate);

	rs.GetValue(_T("mobile"), m_szMobile);
	rs.GetValue(_T("idnumber"), m_szIDNumber);

	m_szObjectID = szObjectID;
	if (szObjectID == _T("11"))
	{
		ShowMessageBox(_T("Bệnh nhân là đối tượng BHYT quân nhân, lưu ý chọn nguồn thanh toán!"));
	}
	
	if (szObjectID == _T("11") && n_number_expdate > 0)
	{
		ShowMessageBox(_T("Bệnh nhân là đối tượng BHYT quân nhân đã hết hạn thẻ, cần thông báo cập nhật lại hạn thẻ cho bệnh nhân!"), MB_ICONERROR);
	}

	//Bệnh nhân có giấy hưởng 5 năm liên tục
	rs.GetValue(_T("HD_OVER5YEAR"), szOver5year);
	if (szOver5year == _T("Y"))
	{
		ShowMessageBox(_T("Bệnh nhân được tích được hưởng 5 năm liên tục, lưu ý thời gian được hưởng và giấy miễn cùng chi trả!"));
	}
	//Bệnh nhân thuộc trung tâm IVF được miễn giảm % thanh toán 

	rs.GetValue(_T("IVF_ISDISCOUNT"), szDiscount);
	if (szDiscount == _T("1"))
	{
		ShowMessageBox(_T("Bệnh nhân thuộc diện miễn giảm của trung tâm IVF, lưu ý khi thanh toán và thực hiện 5K nha!"));
	}

	//Bệnh nhân điều trị covid 19 khi thanh toán ra viện thì thông báo để tài chính thực hiện đúng chế độ
	rs.GetValue(_T("phanloaicovid"), szphanloaicovid);

	if (szphanloaicovid == _T("01"))
	{
		ShowMessageBox(_T("Bệnh nhân covid 19 được kết luận có bệnh lý nền, lưu ý khi thanh toán!"),MB_ICONERROR | MB_OK);
	}
	
	else if (szphanloaicovid == _T("02"))
	{
		ShowMessageBox(_T("Bệnh nhân covid 19 được kết luận không có bệnh lý nền, lưu ý khi thanh toán!"),MB_ICONERROR | MB_OK);
	}	


	pMF->m_isInfertility = false;
	pMF->m_isPregnancy = false;
	pMF->m_szExtIns = m_szIsExtIns;
	if(m_szIsExtIns == _T("Y"))
	{
		m_wndList.SetMenuState(5, TRUE);
	}
	else
	{
		m_wndList.SetMenuState(5, FALSE);
	}

	if(m_szInfertility == _T("Y"))
	{	
		//if (m_szInfertilityEX == _T("Y"))
		{
			pMF->m_isInfertility = true;
		}
		ShowMessageBox(_T("Bệnh nhân có bệnh án hiếm muộn. Chú ý thanh toán đúng quy trình"));
	}
	if(pMF->IsInPatient())
	{
		szSQL.Format(_T("SELECT hcr_pregnancy FROM hms_clinical_record WHERE hcr_docno=%ld"), m_nDocumentNo);
		CRecord rsx(&pMF->m_db);
		rsx.ExecSQL(szSQL);
		CString szPregnancy;
		rsx.GetValue(_T("hcr_pregnancy"), szPregnancy);
		if(szPregnancy == _T("Y"))
		{
			pMF->m_isPregnancy = true;
			if(pMF->IsInPatient())
				ShowMessageBox(_T("Bệnh nhân có đăng ký mổ đẻ. Chú ý thanh toán đúng quy trình"));
			else
				ShowMessageBox(_T("Bệnh nhân có đăng ký mổ đẻ. Thanh toán viện phí và thu tiền đặt cược"));
		}
		else
			m_wndInPackage.ShowWindow(SW_HIDE);
	}

	if(pMF->m_szStatus == _T("T") && m_szInfertility == _T("Y"))
	{
		if(!pMF->IsInPatient())
		{
			m_bInPackage = TRUE;
		}
	}

	//Bệnh nhân dịch vụ có hóa đơn duyệt phí = 'A' thì thông báo lên để thu	
	
	szSQL.Format(_T("SELECT count(*) FROM hms_fee_invoice WHERE hfe_docno = %ld and hfe_status='A' and hfe_class='E' and hfe_type='S' and hfe_org_id ='EM' "), m_nDocumentNo);
	rs.ExecSQL(szSQL);

	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Bệnh nhân có hóa đơn dịch vụ được duyệt ở phòng khám, lưu ý khi thanh toán!"));
	}	

	SetMode(VM_VIEW);
	pMF->CreateFees();
	CreatePopupMenus();
	///
	OnInvoiceListLoadData();
	OnTreatmentListLoadData();
	OnRoomListLoadData();
	OnListLoadData();

	
	szSQL.Format(_T("HMS_GETPAYMENT_DEPT(%ld, %d) "), m_nDocumentNo, pMF->m_nInpatient);
	pMF->m_szReceiptDeptID = pMF->ExecDML(szSQL);
	
	
	if (m_bInsTreatment && pMF->m_nInpatient == 0)
	{
		m_wndApproval.EnableWindow(false);
		ShowMessageBox(_T("Bác sĩ kết luận bệnh nhân vào viện. Không thể duyệt phí!"),
			           MB_OK | MB_ICONWARNING);
	}
	
	if(pMF->IsInPatient() == 0)
	{
		rs.GetValue(_T("objectid"), tmpStr);
		if(tmpStr != _T("7"))
			pMF->IsCheckDrugExist(m_nDocumentNo);
	}
	else
	{
		m_bAllowDischaregPayment = true;
		szSQL.Format(_T("SELECT hcr_status, hcrf_acceptedfee, hcr_treattime FROM hms_clinical_record WHERE hcr_docno=%ld "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			CString szAcceptedFee;
			rs.GetValue(_T("hcr_status"), tmpStr);
			rs.GetValue(_T("hcrf_acceptedfee"), szAcceptedFee);
			rs.GetValue(_T("hcr_treattime"), m_nTreattime);
			
			if(tmpStr != _T("T"))
			{
				m_wndApproval.EnableWindow(FALSE);
//				m_wndInsApprove.EnableWindow(FALSE);
				m_bAllowDischaregPayment = false;
			}
			if(szAcceptedFee != _T("Y"))
			{
				m_wndApproval.EnableWindow(FALSE);
				m_bAllowDischaregPayment = false;
			}

			m_bDepositRefundFlag = false;
			if(m_bAllowDischaregPayment)
			{
				if(pMF->GetObjectType() == _T("S"))
				{
					szSQL.Format(_T("SELECT sum(hfe_amount-hfe_patpaid) as deposit_amount ") \
						_T("FROM hms_fee_deposit ") \
						_T("WHERE hfe_docno=%ld and hfe_status ='P' and hfe_refidx=0 and hfe_objectid<>7 "),
						m_nDocumentNo);
				}
				else
				{
					szSQL.Format(_T("SELECT sum(hfe_amount-hfe_patpaid) as deposit_amount ") \
						_T("FROM hms_fee_deposit ") \
						_T("WHERE hfe_docno=%ld and hfe_status ='P' and hfe_refidx=0 and hfe_objectid=7 and hfe_deptid <> 'PTTYC'  "),
						m_nDocumentNo);

				}
				
				rs.ExecSQL(szSQL);
				//_msg(_T("%s"),szSQL);
				double nDepositAmount = 0;
				rs.GetValue(_T("deposit_amount"), nDepositAmount);
			
				if(nDepositAmount > 0)
				{
					m_bDepositRefundFlag = true;
					
				}
			}

		}

		
		GetApproveInformation();

		szSQL.Format(_T("SELECT case when NVL(HD_INSLINE, 'N') = 'Y' AND NVL(HD_EMERGENCY,'N')='N' and NVL(hc_area, 'X') NOT IN ('K1', 'K2', 'K3') THEN HC_DISCOUNT*(select HMS_INSOFFLINE from hms_config)/100 else cast(hd_disrate as integer) end as disrate FROM hms_doc LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) WHERE hd_docno = %ld"), m_nDocumentNo);

		rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
		if(!rs.IsEOF())
		{
			int nDisrate;
			rs.GetValue(_T("disrate"), nDisrate);
			m_szCardDiscount.Format(_T("%d"), nDisrate);
			m_wndCardDiscount.SetWindowText(m_szCardDiscount);
		}
	
	}

	
	if (pMF->GetObjectType() == _T("S") && !pMF->IsDischarge())
	{
		if(!pMF->IsInPatient())
		{
			m_wndPayment.EnableWindow(TRUE);
		}
	}
	_tprintf(_T("\r\n%d: %s"), pMF->IsInPatient(), pMF->GetObjectType());

	
	if(pMF->IsInPatient() && (szObjectType == _T("D") || szObjectType == _T("P")))
	{
		m_wndPaymentVoucher.ShowWindow(SW_SHOW);
		m_wndPaymentVoucher.EnableWindow(true);
		m_wndReceiptVoucher.ShowWindow(SW_SHOW);
		m_wndReceiptVoucher.EnableWindow(true);
	}
	else
	{
		m_wndPaymentVoucher.ShowWindow(SW_HIDE);
		m_wndPaymentVoucher.EnableWindow(false);
		m_wndReceiptVoucher.ShowWindow(SW_HIDE);
		m_wndReceiptVoucher.EnableWindow(false);

	}

	if(!m_bAllowDischaregPayment)
	{
//		m_wndPaymentVoucher.EnableWindow(false);
//		m_wndReceiptVoucher.EnableWindow(false);

	}

	
}	
void CHMSPatientProfiles::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientProfiles::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szAddress.Empty();
	m_szWorkingPlace.Empty();
	m_szObjectDesc.Empty();
	m_szCardNo.Empty();
	m_szCardCode.Empty();
	m_szCardDiscount.Empty();
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlace.Empty();
	m_nTotalCost = m_nTotalInsCost = m_nTotalInsPaid = m_nTotalDiscount = m_nTotalPatPaid = m_nTotalDiffPaid = m_nTotalPayable = m_nSumAB = m_nTotalPayment = 0;
    m_nTotalDeposit = m_nTotalPolicy = 0;
	m_nEatAmount = 0;
	m_bInpatient = false;
	m_bMultiInvoice = false;
	m_bAllowDischaregPayment = false;
	m_szNote.Empty();
	m_szInvoiceStatus.Empty();
	m_szObjectID.Empty();

	m_bInPackage = FALSE;
	m_szInfertility = _T("N");
	m_szHealthExam = _T("N");
	m_szIsExtIns = _T("N");
	
	
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, 2, 3, -1); 
 			SetDefaultValues(); 
			m_wndTreatmentList.DeleteAllItems();
			m_wndInvoiceList.DeleteAllItems();
			m_wndRoomList.DeleteAllItems();
			m_wndList.DeleteAllItems();
 			break; 
 		}; 
 		UpdateData(FALSE); 
		m_wndDocumentNo.EnableWindow(TRUE);
		
		m_wndDocumentNo.SetFocus();
		
		if (pMF->IsInPatient() == 0)
		{
			if (!pMF->CheckPermission(_T("01.15"))  && !pMF->CheckPermission(_T("01.16")))
			{
			//	m_wndApproval.EnableWindow(FALSE);
			}

			if(pMF->m_szStatus != _T("T")){
				m_wndApproval.EnableWindow(FALSE);
			}

		}
		else
		{

			/*if (!pMF->CheckPermission(_T("02.15"))  && !pMF->CheckPermission(_T("02.16")))
			{
				m_wndApproval.EnableWindow(FALSE);
			}*/
			
	//		m_wndPayment.EnableWindow(FALSE);
		}


		if(pMF->GetObjectType() == _T("S") && !pMF->IsInPatient())
		{
            if (m_wndInsApprove.GetSafeHwnd())
				m_wndInsApprove.EnableWindow(FALSE);
		}
		if(m_nDocumentNo <= 0){
			//m_wndPrescriptionApprove.EnableWindow(FALSE);
			m_wndApproval.EnableWindow(FALSE);
			m_wndPayment.EnableWindow(FALSE);
			m_wndPrint.EnableWindow(FALSE);
			m_wndElectronic.EnableWindow(FALSE);
		}

		m_wndNoteButton.EnableWindow(TRUE);
 		return nOldMode; 
}
/*void CHMSPatientProfiles::OnDocumentNoChange(){
	
} */
/*void CHMSPatientProfiles::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientProfiles::OnDocumentNoCheckValue()
{
	LoadData(m_nDocumentNo);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(m_wndDocumentNo.GetWindowTextLength() > 4)
	{
		m_wndDocumentNo.SetFocus();
		if (pMF->CheckPermission(_T("01.17")))
		{
			m_wndDocumentNo.SetSel(0, -1);
		}
		else
		{
			m_wndDocumentNo.SetSel(4, m_wndDocumentNo.GetWindowTextLength());
		}
	}
	return 1;
} 
/*void CHMSPatientProfiles::OnPIDChange(){
	
} */
/*void CHMSPatientProfiles::OnPIDSetfocus(){
	
} */
/*void CHMSPatientProfiles::OnPIDKillfocus(){
	
} */
int CHMSPatientProfiles::OnPIDCheckValue(){
	m_wndPID.UpdateData(true);
	GetDataToScreen();
	return 1;
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
void CHMSPatientProfiles::OnTreatmentListDblClick()
{
	int nSel = m_wndTreatmentList.GetCurSel();
	if (nSel < 0)
		return;

	BOOL bCheck = m_wndTreatmentList.GetCheck(nSel);
	m_wndTreatmentList.SetCheck(nSel, !bCheck);
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	OnListLoadData();
} 
void CHMSPatientProfiles::OnTreatmentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nCheckMax = 0;
	if(nNewItem < 0) return;
	int nSel = m_wndTreatmentList.GetCurSel();
	if(nSel < 0)
		return;

} 
int CHMSPatientProfiles::OnTreatmentListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientProfiles::OnTreatmentListLoadData()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	CString szSQL, szDept, szQuery;
	CString tmpStr, szRoom;
	CString szOutpatient;
	
	m_wndTreatmentList.BeginLoad(); 
	int nCount = 0;
	int nItem;


	szSQL.Format(_T("SELECT DISTINCT he_deptid as deptid, hd_admitdate, hd_enddate, hd_status, hd_outpatient as outpatient ") \
		_T("FROM hms_doc ") \
		_T("LEFT JOIN hms_exam ON(he_docno=hd_docno) ") \
		_T("WHERE hd_docno=%ld"), m_nDocumentNo);

	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("deptid"), szDept);
		pMF->m_szReceiptDeptID = szDept;
		rs.GetValue(_T("outpatient"), szOutpatient);
		szRoom.Empty();

		szQuery.Format(_T(" select 'P'||substr(hrl_name, 1, instr(hrl_name, ' ')) as roomid,") \
					_T("        case when he_status='T' then 1 ") \
					_T("             when he_status='P' then 2") \
					_T("             when he_status='O' then 3") \
					_T("        else 4 end as idx") \
					_T(" from hms_exam") \
					_T(" left join hms_roomlist ON (he_deptid = hrl_deptid AND he_roomid = hrl_id)") \
					_T(" where he_docno=%ld and he_deptid='%s'") \
					_T(" order by idx, he_receptidx desc"),
			        m_nDocumentNo, szDept);

		rss.ExecSQL(szQuery);

		while (!rss.IsEOF())
		{
			if (!szRoom.IsEmpty())
				szRoom += _T(",");
			szRoom.AppendFormat(_T("%s"), rss.GetValue(_T("roomid")));
			rss.MoveNext();
		}

		if (!szRoom.IsEmpty())
			tmpStr.Format(_T("%s[%s]"), szDept, szRoom);
		else
			tmpStr.Format(_T("%s"), szDept);

		nItem = m_wndTreatmentList.AddItems(
			tmpStr, 
			rs.GetValue(_T("hd_admitdate")), 
			rs.GetValue(_T("hd_enddate")),
			rs.GetValue(_T("hd_status")),
			szDept,
			NULL);

		
		m_wndTreatmentList.SetCheck(nItem, TRUE);
		rs.MoveNext();
	}
	
	if (pMF->IsInPatient())
	{
		szSQL.Format(_T("SELECT htr_deptid, htr_outpatient, htr_admitdate, htr_dischargedate, htr_status, htr_zone FROM hms_treatment_record WHERE htr_docno=%ld ORDER BY htr_idx"), m_nDocumentNo);
		nCount = rs.ExecSQL(szSQL);

		rs.GetValue(_T("htr_outpatient"), szOutpatient);

		CString szZone, tmpStr;
_tprintf(_T("\r\n%s"), szSQL);
		if (szOutpatient == _T("Y"))
		{
			szSQL.Format(_T("SELECT DISTINCT htr_deptid, htr_admitdate, htr_dischargedate, htr_status, htr_zone ") \
				_T("FROM hms_treatment_record ") \
				_T("WHERE htr_docno=%ld and htr_outpatient='Y' "), m_nDocumentNo);
			nCount = rs.ExecSQL(szSQL);
			
			while (!rs.IsEOF())
			{ 
				rs.GetValue(_T("htr_deptid"), szDept);
				rs.GetValue(_T("htr_zone"), szZone);
				if(szZone == _T("DTTN"))
					tmpStr.Format(_T("%s [%s]"), szDept, szZone);
				else
					tmpStr = szDept;

				nItem = m_wndTreatmentList.AddItems(
					tmpStr,
					rs.GetValue(_T("htr_admitdate")), 
					rs.GetValue(_T("htr_dischargedate")), 
					rs.GetValue(_T("htr_status")),
					szDept,
					NULL);

				pMF->m_szReceiptDeptID = szDept;
				m_wndTreatmentList.SetCheck(nItem, TRUE);
				rs.MoveNext();
			}
		}
		else
		{
			while(!rs.IsEOF())
			{ 
				rs.GetValue(_T("htr_deptid"), szDept);
				rs.GetValue(_T("htr_zone"), szZone);
				if(szZone == _T("DTTN"))
					tmpStr.Format(_T("%s [%s]"), szDept, szZone);
				else
					tmpStr = szDept;

				nItem = m_wndTreatmentList.AddItems
					(
					tmpStr, 
					rs.GetValue(_T("htr_admitdate")), 
					rs.GetValue(_T("htr_dischargedate")), 
					rs.GetValue(_T("htr_status")),
					szDept,
					NULL);

				pMF->m_szReceiptDeptID = szDept;

				m_wndTreatmentList.SetCheck(nItem, TRUE);
				rs.MoveNext();
			}
		}
		//m_wndTreatmentList.SetCheck(0, false);		
	}

	
	
	m_wndTreatmentList.EndLoad(); 

	

	return nCount;
}

long CHMSPatientProfiles::OnRoomListLoadData()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	CString szSQL, szDept, szQuery;
	CString tmpStr, szRoom;
	CString szOutpatient;
	
	m_wndRoomList.BeginLoad(); 
	int nCount = 0;
	int nItem;

	szSQL.Format(_T(" SELECT") \
	_T(" he_deptid as khoa,") \
	_T(" hrl_name as phongkham,") \
	_T(" to_char(HE_EXAMDATE, 'hh24:mi dd/mm/yyyy') as tgkham,") \
	_T(" CASE WHEN hd_status='T' THEN to_char(hd_enddate, 'hh24:mi dd/mm/yyyy') else NULL END as tgketthuc,") \
	_T(" (select ss_desc from sys_sel ") \
	_T(" where ss_id='hms_doc_status'") \
	_T(" and ss_code=he_status) as examstatus ") \
	_T(" from HMS_EXAM") \
	_T(" left join hms_doc ON (he_docno=hd_docno)") \
	_T(" LEFT JOIN hms_roomlist ON (he_deptid = hrl_deptid AND he_roomid = hrl_id)") \
	_T(" where he_docno=%ld") \
	_T(" order by HE_RECEPTIDX"), m_nDocumentNo);

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	while(!rs.IsEOF())
	{ 
		nItem = m_wndRoomList.AddItems(
			rs.GetValue(_T("khoa")),
			rs.GetValue(_T("phongkham")), 
			rs.GetValue(_T("tgkham")),
			rs.GetValue(_T("tgketthuc")),			
			rs.GetValue(_T("examstatus")),
			NULL);

		rs.MoveNext();
	}	
	m_wndRoomList.EndLoad(); 

	return nCount;
}

int CHMSPatientProfiles::OnTreatmentListPrintExaminationCost(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndTreatmentList.GetCurSel();

	if (nSel < 0)
		return 0;

	int nIndex = -1;
	CString szDeptID;

	szDeptID = m_wndTreatmentList.GetItemText(nSel, 4);
	pMF->PrintDischargeReceipt(szDeptID, true);
	return 0;
} 

#include "HMSDiscountVoucherDialog.h"

void CHMSPatientProfiles::OnInvoiceListDblClick()
{
	//_msg(_T("Chào Lộc"));
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0)
		return;

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long	nInvoiceNo = str2long(m_wndInvoiceList.GetItemText(nSel, 0));
	CString szType = m_wndInvoiceList.GetItemText(nSel, 6);
	CString szStatus = m_wndInvoiceList.GetItemText(nSel, 7);
	CString szClass = m_wndInvoiceList.GetItemText(nSel, 8);
	CString szOrgID = m_wndInvoiceList.GetItemText(nSel, 13);
	m_szOrgID = szOrgID;

	if(szStatus == _T("C") && szClass != _T("I"))
	{
		szType = _T("S");
	}

	//A,B, C: Tam gui vao vien
	if(szType == _T("A") || szType == _T("B") || szType == _T("C"))
	{
		CHMSFeeDepositDialog dlg(this, VM_ADD);
		//dlg.SetWindowText(_T("Deposit receipt"));
		dlg.m_nInvoiceNo = nInvoiceNo;

		dlg.SetMode(VM_EDIT);
		if(dlg.DoModal() == IDOK){
			OnInvoiceListLoadData();
			
		}
	}
	//E, F: Hoan tra
	else if(szType == _T("E") || szType == _T("F") || szType == _T("G"))
	{

		if(szType == _T("E"))
		{
			CHMSFeeRefundDetailDialog dlg(this, VM_VIEW);
			dlg.m_nDocumentNo = m_nDocumentNo;
			
			dlg.SetWindowText(_T("Payment Order"));
			dlg.m_nInvoiceNo = nInvoiceNo;
			dlg.SetMode(VM_EDIT);
			if(dlg.DoModal() == IDOK)
			{
				OnInvoiceListLoadData();
			}
		}
		else
		{
			CHMSFeeRefundDialog dlg(this);
			dlg.m_nDocumentNo = m_nDocumentNo;
			dlg.SetWindowText(_T("Payment Order"));
			dlg.m_nInvoiceNo = nInvoiceNo;
			dlg.SetMode(VM_EDIT);
			if(dlg.DoModal() == IDOK){
				OnInvoiceListLoadData();
			}

		}
	}
	//D: Mien giam
	else if(szType == _T("D"))
	{
		/*
		CHMSFeeDiscountDialog dlg(this);
		dlg.SetWindowText(_T("Discount receipt"));
		dlg.m_nInvoiceNo = nInvoiceNo;
		dlg.SetMode(VM_EDIT);
		if(dlg.DoModal() == IDOK){
			OnInvoiceListLoadData();
		}
		*/
		CHMSDiscountVoucherDialog dlg(this);
		dlg.m_nDocumentNo = m_nDocumentNo;
		dlg.m_nInvoiceNo = nInvoiceNo;
		if(dlg.DoModal() == IDOK)
		{

		}
		OnInvoiceListLoadData();
	}
	//I:S
	else if(szType == _T("P") || szType == _T("I"))
	{
	
		CHMSDischargePaymentDialog dlg(pMF);		
		dlg.m_nDocumentNo = m_nDocumentNo;
		dlg.m_nInvoiceNo = nInvoiceNo;
		dlg.m_nInsRate = m_nInsRate;
		if(dlg.DoModal() ==IDOK){
			GetDataToScreen();
		}
	}
	else if(szType == _T("O"))
	{
		CHMSCashVoucherDialog dlg(pMF, m_nDocumentNo, VM_VIEW);
		dlg.m_nInvoiceNo = nInvoiceNo;
		dlg.DoModal();
	}
	else if(szType == _T("V"))
	{
		CHMSPatientPaymentOrderDialog dlg(pMF, m_nDocumentNo, VM_VIEW);
		dlg.m_nInvoiceNo = nInvoiceNo;
		if(dlg.DoModal() == IDOK)
		{

		}
		if(dlg.m_bRefresh)
		{
			OnInvoiceListLoadData();
		}

	}
	else
	{

		CHMSPaymentReceiptDialog dlg(pMF);
		dlg.m_nDocumentNo = m_nDocumentNo;
		dlg.m_nInvoiceNo = nInvoiceNo;
		dlg.m_szOrgID = m_szOrgID;
		//_msg(_T("%s"), m_szInvoiceStatus);

		if(dlg.DoModal() ==IDOK)
		{
			GetDataToScreen();
		}
	}
} 

void CHMSPatientProfiles::OnInvoiceListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return;
	CString szType  = m_wndInvoiceList.GetItemText(nSel, 6);
	if(szType == _T("P"))
		m_wndInvoiceList.SetMenuState(5, false);
	else
		m_wndInvoiceList.SetMenuState(5, true);
	
	GetInvoiceInformation();
} 

#include "HMSEditInvoiceEletronicDialog.h"
int CHMSPatientProfiles::OnEditInvoiceEletronicItem(){
	CHMSEditInvoiceEletronicDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.DoModal();
	return 0;
}

int CHMSPatientProfiles::OnInvoiceListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;
	CString szSQL;
	CRecord rs(&pMF->m_db);

	CString szType = m_wndInvoiceList.GetItemText(nSel, 6);
	
	if(szType == _T("	"))
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return 0;
	}
	if(!pMF->IsInPatient())
	{
		if( (szType == _T("A") || szType == _T("B") || szType == _T("C")) && !pMF->CheckPermission(_T("01.07")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

		if(szType == _T("D") && !pMF->CheckPermission(_T("01.08")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

		if((szType == _T("E") || szType == _T("F") || szType == _T("G")) && !pMF->CheckPermission(_T("01.09")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}
	}
	else
	{
		if((szType == _T("A") || szType == _T("B") || szType == _T("C")) && !pMF->CheckPermission(_T("02.07")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

		if(szType == _T("D") && !pMF->CheckPermission(_T("02.08")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

		if((szType == _T("E") || szType == _T("F") || szType == _T("G")) && !pMF->CheckPermission(_T("02.09")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

	}
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	
	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));

	
	if(pMF->IsInPatient())
	{
		if(szType == _T("A") || szType == _T("B") || szType == _T("C"))
		{
		//	szSQL.Format(_T("UPDATE hms_fee_deposit SET hfe_status='C', hfe_updatedby='%s', hfe_updateddate=systimestamp ") \
		//	_T("WHERE hfe_invoiceno=%ld and hfe_staff='%s' and hfe_locked<>'Y' and hfe_patpaid=0"), pMF->GetCurrentUser(), nInvoiceNo, pMF->GetCurrentUser());
			int ret = ShowMessageBox(_T("Do you want to delete invoice?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
			if (ret != IDYES)
				return -1;

			szSQL.Format(_T("HMS_FEE_DEPOSIT_DELETE(%ld, %ld, '%s') "), m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
			ret = str2int(pMF->ExecDML(szSQL));
			if(ret <= 0)
			{
				switch(ret){
				case -1:
					ShowMessageBox(_T("Bệnh nhân đã được xác nhận viện phí. Không cho phép xóa phiếu tạm gửi."));
					break;
				case -2:
					ShowMessageBox(_T("Bệnh nhân đã thanh toán viện phí. Không cho phép xóa phiếu tạm gửi."));
					break;
				case -3:
					ShowMessageBox(_T("Phiếu tạm gửi đã được khóa sổ. Không cho phép xóa."));
					break;
				default:
					ShowMessageBox(_T("Cannot process with current status"));
				}
				return -1;
			}
			return 0;
		}
		else if(szType == _T("E") || szType == _T("F") || szType == _T("G"))
		{
			szSQL.Format(_T("HMS_FEE_REFUND_DELETE(%ld, %ld, '%s') "), m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
		}
		else if(szType == _T("D"))
			szSQL.Format(_T("HMS_FEE_DISCOUNT_DELETE(%ld, %ld, '%s') "), m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
		else if(szType == _T("O"))
			szSQL.Format(_T("HMS_FEE_INVOICE_DELETE_OV2(%ld, %ld, '%s') "), m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());

		else
			szSQL.Empty();
	}
	else
	{
		if(szType == _T("A") || szType == _T("B") || szType == _T("C"))
		{
		//	szSQL.Format(_T("UPDATE hms_fee_deposit SET hfe_status='C', hfe_updatedby='%s', hfe_updateddate=systimestamp ") \
		//	_T("WHERE hfe_invoiceno=%ld and hfe_patpaid=0 and hfe_staff='%s' and hfe_locked<>'Y' and hfe_refidx=0 "), pMF->GetCurrentUser(), nInvoiceNo, pMF->GetCurrentUser());
			int ret = ShowMessageBox(_T("Do you want to delete invoice?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
			if (ret != IDYES)
				return -1;

			szSQL.Format(_T("HMS_FEE_DEPOSIT_DELETE(%ld, %ld, '%s') "), m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
			ret = str2int(pMF->ExecDML(szSQL));
			if(ret <= 0)
			{
				switch(ret){
				case -1:
					ShowMessageBox(_T("Bệnh nhân đã được xác nhận viện phí. Không cho phép xóa phiếu tạm gửi."));
					break;
				case -2:
					ShowMessageBox(_T("Bệnh nhân đã thanh toán viện phí. Không cho phép xóa phiếu tạm gửi."));
					break;
				case -3:
					ShowMessageBox(_T("Phiếu tạm gửi đã được khóa sổ. Không cho phép xóa."));
					break;
				default:
					ShowMessageBox(_T("Cannot process with current status"));
				}
				return -1;
			}
			return 0;
		}
		else if(szType == _T("E") || szType == _T("F") || szType == _T("G"))
			szSQL.Format(_T("HMS_FEE_REFUND_DELETE(%ld, %ld, '%s') "), m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
		else if(szType == _T("D"))
			szSQL.Format(_T("HMS_FEE_DISCOUNT_DELETE(%ld, %ld, '%s') "), m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
		else if(szType == _T("O"))
			szSQL.Format(_T("HMS_FEE_INVOICE_DELETE_OV2(%ld, %ld, '%s') "), m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
		else
			szSQL.Empty();

	}
	if(szSQL.IsEmpty())
		return 0;

	pMF->BeginTransaction();

	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		pMF->Commit();
		OnInvoiceListLoadData();
		RecalcAmount();
	}
	else
		pMF->Rollback();
	return 0;
} 
long CHMSPatientProfiles::OnInvoiceListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szInvoiceNo, szSerialNo, szType, tmpStr, szDesc, szAmount;
	CString szWhere;
	m_wndInvoiceList.BeginLoad(); 
	int nCount = 0;
	long recvno;	
	int nItem;

	if (pMF->IsInPatient())
	{
		szWhere.Format(_T(" and l2.hfe_class IN('A','E','I','X','R') "));
	}
	else
	{
		szWhere.Format(_T(" and l2.hfe_class IN ('E','X','I','A') "));
	}

	szSQL.Format(_T(" SELECT l2.*, to_char(ev.HFE_GET_PKEY_TIME, 'DD/MM/YYYY HH24:MI') as einvoicetime, ") \
		_T(" ev.hfe_pkey as pkey ") \
		_T(" FROM HMS_FEE_INVOICE_VIEW_L2 l2 ") \
		_T(" left join HMS_FEE_ELECTRONICLINE ev ON (l2.hfe_docno = ev.hfe_docno AND l2.hfe_elekey = ev.hfe_key) ") \
		_T(" WHERE l2.hfe_docno=%ld and (l2.hfe_status in('P','R','C') or (l2.hfe_type='D' and l2.hfe_status='O') OR (l2.hfe_status='A' and l2.hfe_org_id IN ('EM','FM') )) %s  ") \
		_T(" ORDER BY l2.hfe_date, l2.hfe_invoiceno "), m_nDocumentNo, szWhere);

	
	CString szCategory;
	CString szReceiptDesc, m_szDescription;
	CString szStatus;
	CString szReceiptType;
	CString szInvoiceNoStr;
	CString	sztreattime;
	CString szclass, szeinvoicetime, szpkey, szkey, szInvoiceType, szOrgID;
	

	nCount = rs.ExecSQL(szSQL);

    //_msg(_T("%s"), szSQL);



	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hfe_serialno"), szSerialNo);
		rs.GetValue(_T("hfe_receiptno"), recvno);
		rs.GetValue(_T("hfe_type"), szType);
		rs.GetValue(_T("hfe_status"), szStatus);		
		rs.GetValue(_T("hfe_patpaid"), szAmount);
		rs.GetValue(_T("hfe_invoiceno"), szInvoiceNoStr);		
		rs.GetValue(_T("hfe_class"), szclass);
		rs.GetValue(_T("hfe_treattime"), sztreattime);
		rs.GetValue(_T("einvoicetime"), szeinvoicetime);
		rs.GetValue(_T("pkey"), szpkey);
		rs.GetValue(_T("HFE_ELEKEY"), szkey);
		rs.GetValue(_T("hfe_org_id"), szOrgID);
		rs.GetValue(_T("hfb_key"));		

		if(szStatus == _T("C"))
		{
			szInvoiceNoStr.Format(_T("Đã hủy"));
		}

	/*	if(str2double(szAmount) <= 0)
			rs.GetValue(_T("hfe_amount"), szAmount);*/

		//Phieu tam ung
		if(szType == _T("A") || szType == _T("B") || szType == _T("C"))
		{
			szReceiptDesc.Format(_T("[TU]%ld"), recvno);
			szReceiptType = _T("TU");
			rs.GetValue(_T("hfe_amount"), szAmount);
		}
		//Phieu hoan tra
		else if(szType == _T("E") || szType == _T("F") )
		{
			szReceiptDesc.Format(_T("[PT]%ld"), recvno);
			szReceiptType = _T("PC");
			rs.GetValue(_T("hfe_amount"), szAmount);
		}
		else if(szType == _T("V"))
		{
			szReceiptDesc.Format(_T("[PC]%ld"), recvno);
			szReceiptType = _T("PC");
			rs.GetValue(_T("hfe_amount"), szAmount);
		}
		else if(szType == _T("G"))
		{
			szReceiptDesc.Format(_T("[%s]%ld"), szSerialNo, recvno);
			szReceiptType = _T("PC");
			rs.GetValue(_T("hfe_amount"), szAmount);
		}
		//Phieu mien giam
		else if(szType == _T("D"))
		{
			szReceiptDesc.Format(_T("[MG]%ld"), recvno);
			szReceiptType = _T("MG");
			rs.GetValue(_T("hfe_amount"), szAmount);
		}
		else
		{
			szReceiptDesc.Format(_T("[PT]%ld"), recvno);
			szReceiptType = _T("PT");
		}

		rs.GetValue(_T("hfe_desc"), tmpStr);

		if (tmpStr.GetLength() >= 2)
			m_szDescription = tmpStr;
		else
			m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), tmpStr);

		
		if(szStatus == _T("C"))
		{
			szReceiptDesc.AppendFormat(_T("(Đã hủy)"));
		}

		if(szOrgID == _T("EM"))
		{
			szReceiptDesc.Format(_T("Hóa đơn phòng khám tạo"));
		}

		nItem = m_wndInvoiceList.AddItems(
			rs.GetValue(_T("hfe_invoiceno")),
			szReceiptType,
			szInvoiceNoStr,
			rs.GetValue(_T("hfe_date")), 
			szAmount,
			rs.GetValue(_T("hfe_staff")),
			rs.GetValue(_T("hfe_type")),
			rs.GetValue(_T("hfe_status")),			
			szclass,			
			sztreattime,
			szeinvoicetime,
			szpkey,
			szkey,
			szOrgID,
			rs.GetValue(_T("hfb_key")),
			NULL);
		//_msg(_T("%s"), sztreattime);
		//Phieu tam ung
		if(szType == _T("A") || szType == _T("B") || szType == _T("C"))
		{
			m_wndInvoiceList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndInvoiceList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			if(szStatus == _T("R"))
			{
				m_wndInvoiceList.SetSubItemBkColor(nItem, 2, RGB(255, 128, 64), FALSE);
				m_wndInvoiceList.SetSubItemTextColor(nItem, 2, RGB(255, 255, 255), FALSE);
			}
		}

		if(szType == _T("E") || szType == _T("F") || szType == _T("G"))
		{
			m_wndInvoiceList.SetItemTextColor(nItem, RGB(255, 0, 0), FALSE);
		}
		//Phieu mien giam
		if(szType == _T("D"))
		{
			m_wndInvoiceList.SetItemBkColor(nItem, RGB(200, 200, 255), FALSE);
		}

		if(szType == _T("G"))
		{
			m_wndInvoiceList.SetSubItemBkColor(nItem, 0, RGB(64, 128, 192), FALSE);
			m_wndInvoiceList.SetSubItemTextColor(nItem, 0, RGB(255, 255, 255), FALSE);
		}

		if(szStatus == _T("C"))
		{
			m_wndInvoiceList.SetSubItemBkColor(nItem, 2, RGB(255, 0, 0), FALSE);
			m_wndInvoiceList.SetSubItemTextColor(nItem, 2, RGB(255, 255, 255), FALSE);
		}
		
		if (sztreattime != _T("0") && szclass == _T("E") && szType == _T("P"))
		{
			m_wndInvoiceList.SetSubItemBkColor(nItem, 1, RGB(202, 255, 112), FALSE);
			m_wndInvoiceList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);

			m_wndInvoiceList.SetSubItemBkColor(nItem, 2, RGB(202, 255, 112), FALSE);
			m_wndInvoiceList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);

			m_wndInvoiceList.SetSubItemBkColor(nItem, 3, RGB(202, 255, 112), FALSE);
			m_wndInvoiceList.SetSubItemTextColor(nItem, 3, RGB(0, 0, 0), FALSE);

			m_wndInvoiceList.SetSubItemBkColor(nItem, 4, RGB(202, 255, 112), FALSE);
			m_wndInvoiceList.SetSubItemTextColor(nItem, 4, RGB(0, 0, 0), FALSE);

			m_wndInvoiceList.SetSubItemBkColor(nItem, 5, RGB(202, 255, 112), FALSE);
			m_wndInvoiceList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);
		}

		if((szOrgID == _T("EM") || szOrgID == _T("FM")) && szStatus == _T("A"))
		{
			m_wndInvoiceList.SetSubItemBkColor(nItem, 0, RGB(0, 255, 127), FALSE);
			m_wndInvoiceList.SetSubItemTextColor(nItem, 0, RGB(0, 0, 0), FALSE);

			m_wndInvoiceList.SetSubItemBkColor(nItem, 1, RGB(0, 255, 127), FALSE);
			m_wndInvoiceList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);

			m_wndInvoiceList.SetSubItemBkColor(nItem, 2, RGB(0, 255, 127), FALSE);
			m_wndInvoiceList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);		
		}

		rs.MoveNext();
	}
	m_wndInvoiceList.EndLoad();

	return nCount;
}
#include "FMInvoiceListDetailDialog.h"
int CHMSPatientProfiles::OnInvoiceListLoadDataDetail()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CFMInvoiceListDetailDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.DoModal();
	return 0;
}

int CHMSPatientProfiles::OnInvoiceListPrintReceipt(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;
	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));
	CString szType = m_wndInvoiceList.GetItemText(nSel, 6);
	if(szType == _T("A") || szType == _T("B") || szType == _T("C"))
	{
		pMF->PrintDeposit(nInvoiceNo, TRUE);
	}
	else if(szType == _T("D"))
	{
		pMF->PrintDiscount(nInvoiceNo, TRUE);
	}
	else if(szType == _T("E") || szType == _T("F") || szType == _T("G") || szType == _T("V"))
	{
		pMF->PrintRefund(nInvoiceNo, TRUE);
	}
	else
		pMF->PrintReceipt(nInvoiceNo, TRUE);
	return 0;
}

int CHMSPatientProfiles::OnInvoiceListPrint()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;
	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));

	pMF->PrintInvoice_V2(nInvoiceNo, true);
	return 0;
}

int CHMSPatientProfiles::OnInvoiceListPrintGeneralExaminationCost()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;

	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));
	pMF->PrintGeneralExaminationCost(nInvoiceNo);
	return 0;
}

int CHMSPatientProfiles::OnInvoiceListPrintGeneralExaminationCostA11()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;

	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));
	pMF->PrintGeneralExaminationCostA11(nInvoiceNo);
	return 0;
}

int CHMSPatientProfiles::OnInvoiceListPrintInPackageCost()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;

	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));
	pMF->PrintGeneralInPackageCost(nInvoiceNo);
	return 0;
}


int CHMSPatientProfiles::OnInvoiceListPrintDischargeReceipt(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//pMF->PrintDischargeReceipt(pMF->m_szReceiptDeptID);
	
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0)
		return 0;
	long nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));
	//_msg(_T("%s"), m_wndInvoiceList.GetItemText(nSel, 6));
	pMF->PrintDischargeReceiptFromInvoice(nInvoiceNo, true);
	return 0;
}

int CHMSPatientProfiles::OnInvoiceListRefundDrugFee()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFMDrugRefundDialog dlg(&m_wndList);
	dlg.m_nDocNo = m_nDocumentNo;
	dlg.m_pWnd = this;
	dlg.DoModal();
	return 0;
}

void CHMSPatientProfiles::OnListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	
} 
void CHMSPatientProfiles::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientProfiles::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szItemID;
	int nSel  = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;

	szItemID = m_wndList.GetItemText(nSel, 10);
	//_msg(_T("%s"),szItemID); 
	int ret = ShowMessageBox(_T("Do you want to delete item selected(Y/N)?"), MB_YESNO|MB_DEFBUTTON2);
	if(ret == IDNO)
		return -1;

	szSQL.Format(_T("DELETE FROM hms_fee WHERe hfe_docno=%ld and hfe_itemid='%s' and hfe_group IN('F0000','E0000') and hfe_status='O' "), m_nDocumentNo, szItemID);
_tprintf(_T("\r\n%s"), szSQL);
	pMF->ExecSQL(szSQL);
	OnListLoadData();
	return 0;
} 

int CHMSPatientProfiles::OnListRecalc(){
	if(m_nDocumentNo <= 0)
		return 0;

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->CreateFees();
	OnListLoadData();
	return 0;
} 

#include "HMSAdditionFeeDialog.h"

int CHMSPatientProfiles::OnListAddOtherFee(){
	if(m_nDocumentNo <= 0)
		return 0;

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CString szDept = pMF->m_szDept;

	if(!pMF->CheckPermission(_T("01.01.X")))
	{
		ShowMessageBox(_T("Permission Denied."));
		return -1;
	}
	if(pMF->m_nInpatient == 0){
		szSQL.Format(_T("SELECT hd_admitdept  as deptid FROM hms_doc WHERE hd_docno=%ld"), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("deptid"), pMF->m_szDept);
		}
	}
	else
	{
		szSQL.Format(_T("SELECT htr_deptid  as deptid FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("deptid"), pMF->m_szDept);
		}
	}

	CHMSAdditionFeeDialog dlg(this);

	if(pMF->m_nInpatient == 0)
		dlg.m_szDeptType = _T("E");
	else
		dlg.m_szDeptType = _T("I");

	dlg.m_szDate = pMF->m_szRecvDate;
	dlg.m_szDept = pMF->m_szReceiptDeptID;
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}

	pMF->m_szDept = szDept;
	return 0;
}

int CHMSPatientProfiles::OnListDeleteOtherFee(){
	return 0;
}
long CHMSPatientProfiles::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szFilter;
	CString szChapter;
	CString szDesc;
	CString tmpStr;
	CRecord rs(&pMF->m_db);

	UpdateData(TRUE);
	CString szDeptIDs = pMF->m_szDepartments;
	pMF->m_szDepartments = _T("'B5'");

	double nTotalCost, nTotalInsCost, nTotalInsPaid, nTotalDiffPaid, nTotalPatPaid, nTotalPayable;


	m_nTotalCost = m_nTotalInsCost = m_nTotalInsPaid = m_nTotalDiffPaid = m_nTotalPatPaid = m_nTotalInsPaid = m_nTotalDeposit = m_nTotalPayable = m_nTotalPayment = m_nTotalPolicy = 0;
	m_nSumAB = 0;
	m_nTotalPayment = 0;
	m_nTotalPayable = 0;
	m_nTotalDiscount = 0;

	for (int i =0; i < m_wndTreatmentList.GetItemCount(); i++)
	{
		if(m_wndTreatmentList.GetCheck(i))
		{
			pMF->m_szDepartments.AppendFormat(_T(",'%s'"), m_wndTreatmentList.GetItemText(i, 4));
		}
	}


	szFilter.Format(_T(" and hfe_status in('O','X','A') "));

	m_wndList.BeginLoad();

/*
	
	tmpStr.Format(_T("%s and hfe_object <> 7 "), szFilter);
		
		nTotalCost = nTotalInsCost = nTotalInsPaid = nTotalDiffPaid = nTotalPatPaid = nTotalPayable = 0;
		szChapter = _T("A");
		szDesc.Format(_T("BẢNG KÊ CHI PHÍ BHYT"));
		int nItem = m_wndList.AddItems(szChapter, szDesc, NULL);
		m_wndList.SetItemBkColor(nItem, RGB(0, 64, 192), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);


		pMF->LoadFeeList(&m_wndList, pMF->m_nDocumentNo, 0, 
			nTotalCost, nTotalInsCost, nTotalInsPaid, nTotalDiffPaid, 
			nTotalPatPaid, nTotalPayable, tmpStr);
		


		if(nTotalCost <= 0)
		{
			m_wndList.DeleteAllItems();
		}
		else
		{
			szChapter = _T("B");
			m_wndList.AddItems(_T(""), NULL);
		}
		m_nTotalCost = nTotalCost+nTotalDiffPaid;
		m_nTotalInsCost = nTotalInsCost;
		m_nTotalInsPaid = nTotalInsPaid;
		m_nTotalDiffPaid = nTotalDiffPaid;
		m_nTotalPatPaid = nTotalPatPaid;
		m_nTotalPayable = nTotalPayable;


		nTotalCost = nTotalInsCost = nTotalInsPaid = nTotalDiffPaid = nTotalPatPaid = nTotalPayable = 0;

		
		
		szDesc.Format(_T("BẢNG KÊ CHI PHÍ DỊCH VỤ"));
		
		nItem = m_wndList.AddItems(szChapter, szDesc, NULL);
		m_wndList.SetItemBkColor(nItem, RGB(0, 64, 192), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);

		tmpStr.Format(_T("%s and hfe_object = 7 "), szFilter);
		pMF->LoadFeeList(&m_wndList, pMF->m_nDocumentNo, 0, nTotalCost, nTotalInsCost, 
		nTotalInsPaid, nTotalDiffPaid, nTotalPatPaid, nTotalPayable, tmpStr);

		m_nTotalCost += nTotalCost;
		m_nTotalPayable += nTotalPayable;


		if(nTotalCost <= 0)
		{
			for (int i = nItem; i < m_wndList.GetItemCount(); i++)
			{
				m_wndList.DeleteItem(i);
			}
		}
*/


		nTotalCost = nTotalInsCost = nTotalInsPaid = nTotalDiffPaid = nTotalPatPaid = nTotalPayable = 0;

		if(pMF->IsInPatient())
		{
			pMF->LoadFeeList(&m_wndList, pMF->m_nDocumentNo, 0, 
				nTotalCost, nTotalInsCost, nTotalInsPaid, nTotalDiffPaid, 
				nTotalPatPaid, nTotalPayable, szFilter, 0, false, false);
		}
		else
		{
			bool bInPackage = m_bInPackage;

			pMF->LoadFeeList(&m_wndList, pMF->m_nDocumentNo, 0, 
				nTotalCost, nTotalInsCost, nTotalInsPaid, nTotalDiffPaid, 
				nTotalPatPaid, nTotalPayable, szFilter, 0, false, bInPackage);
		}


		
		m_nTotalCost = nTotalCost;
		m_nTotalInsCost = nTotalInsCost;
		m_nTotalInsPaid = nTotalInsPaid;
		m_nTotalDiffPaid = nTotalDiffPaid;
		m_nTotalPatPaid = nTotalPatPaid;
		m_nTotalPayable = ceil(nTotalPatPaid+nTotalDiffPaid);
		//_msg(_T("%.2f"), m_nTotalPayable);



		m_wndList.EndLoad();


		
	
		UpdateData(FALSE);
//	pMF->m_szDepartments = szDeptIDs;
	RecalcAmount();
	return 0;
}
void CHMSPatientProfiles::OnLoadServiceList()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord grs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szFeeID, szID, szDepts, szWhere;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex = -1, nChapterID=0;

	double nTtlCost=0, nTtlInsCost=0, nTtlDiscount=0, 
			nTtlPayable=0,nTtlDiffPaid=0, nTtlInsUnpaid =0,
			nGroup0Cost = 0,
			nGroup1Cost = 0,
			nGroup2Cost = 0,
			nCost=0, nDiscount=0, nPayable=0;


	int nItem = 0, nOldItem = 0, nItem2;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup, szType;
	long nOrderId;

	

	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index,hfg_id"));
	grs.ExecSQL(szSQL);

	szDepts = GetPaymentDepartments();

	szWhere.Empty();

	if(szDepts.IsEmpty())
		return;

	if (pMF->IsInPatient())
	{
		if (pMF->m_szOutpatient != _T("Y"))
			szWhere.Format(_T(" and hfe_group <>'D0000' "));
		szWhere.AppendFormat(_T(" and hfe_class IN('I','X') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfe_class  in('E','X')  "));
	}

	if (!pMF->m_szFeeTypes.IsEmpty())
		szWhere.AppendFormat(_T(" and hfe_type in(%s) "), pMF->m_szFeeTypes);

	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" and hfe_deptid in(%s) "), szDepts);


	szSQL.Format(_T(" SELECT ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		sum(hfe_cost) as cost, ") \
		_T(" 		sum(hfe_inspaid) as inscost, ") \
		_T(" 		sum(hfe_discount) as discount, ") \
		_T(" 		sum(hfe_DiffPaid) as DiffPaid ") \
		_T(" FROM hms_fee ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld AND hfe_status in('O','X','C') and hfe_cost > 0 and hfe_invoiceno<=0  %s ") \
		_T(" GROUP BY hfe_type, hfe_group, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice ") \
		_T(" ORDER BY groupid, feetype, name, unit, unitprice"), m_nDocumentNo, szWhere);
	

	rs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);

	nIndex = 0;
	CString szSubItem;
	int nSubItem = 1;
	nChapterID = 0;
	

	while(!grs.IsEOF()){
		grs.GetValue(_T("xlevel"), nLevel);
		grs.GetValue(_T("id"), szParentGroup);
		grs.GetValue(_T("feeid"), szSubItem);
		szParentGroup.Trim();
		bool bAdd = false;
		
		rs.MoveFirst();
		while(!rs.IsEOF()){
			rs.GetValue(_T("groupid"), tmpStr);
			if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
				bAdd = true;
				break;
			}
			rs.MoveNext();
		}
		if(!bAdd)
		{
			grs.MoveNext();
			continue;
		}
		if(nLevel == 0)
		{
			//if(nGroup0Cost > 0 && nChapterID > 0){
			//	CString szLabel;
			//	TranslateString(_T("Sum"), szLabel);
			//	tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID-1]);
			//	nItem = m_wndList.AddItems(_T(""), szLabel+tmpStr, NULL);
			//	//m_wndList.SetItemBkColor(nItem, RGB(240, 240, 240), FALSE);
			//	//m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
			//	m_wndList.SetItemText(nItem, 4, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));
			//	//m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
			//	nGroup1Cost = 0;
			//}
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);			
			m_wndList.SetItemBkColor(nItem, RGB(124, 159, 205), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 5, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			nIndex = 0;
			nGroup0Cost=0;
			szNewGroup.Empty();
			szOldGroup.Empty();
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			//m_wndList.SetItemBkColor(nItem, RGB(64, 128, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_BLUE, FALSE);
			//m_wndList.MergeCell(nItem, 1, nItem, 5);
			nGroup1Cost;

			szOldGroup = szNewGroup;

		}
	
		if(szSubItem == _T("Y"))
		{
			nSubItem = 0;
			while(!rs.IsEOF())
			{

				rs.GetValue(_T("feetype"), szType);
				rs.GetValue(_T("groupid"), szNewGroup);
					
				szNewGroup.Trim();
					if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
							

							szOldGroup = szNewGroup;
/*
							if(nGroup2Cost > 0 && nOldItem > 0){
								m_wndList.SetItemText(nOldItem, 4, nGroup2Cost>0?ToString((double)nGroup2Cost):_T(""));

								szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_productuomprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_productuomprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid ='%ld' and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), pMF->m_nDocumentNo, nOrderId, szWhere);

								rsl.ExecSQL(szSQL);
								double nTtlCost = 0;
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("amount"), tmpStr);
									nTtlCost += str2double(tmpStr);
									rsl.GetValue(_T("name"), tmpStr);
									int n = m_wndList.AddItems(_T(""), 
										_T("  +  ")+ tmpStr,
										_T(""), 
										rsl.GetValue(_T("qty")),
										rsl.GetValue(_T("price")),
										rsl.GetValue(_T("amount")),
										NULL);
									m_wndList.SetItemTextColor(n, RGB(0, 128, 128), FALSE);
									rsl.MoveNext();
								}
								if(nTtlCost > 0){
									TranslateString(_T("Amount"), tmpStr);
									int n = m_wndList.AddItems(_T(""), 
										_T("     ")+ tmpStr,
										_T(""), 
										_T(""),
										ToString(nTtlCost),
										NULL);
									m_wndList.SetItemTextColor(n, RGB(0, 128, 255), FALSE);

								}

							}



*/
							rs.GetValue(_T("orderid"), nOrderId);

							szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&pMF->m_db);
							rs2.ExecSQL(szSQL);
							
							nItem2 = m_wndList.AddItems(_T("*"), rs2.GetValue(_T("hfg_name")), NULL);
							nOldItem = nItem2;
							//m_wndList.SetItemBkColor(nItem2, RGB(200, 200, 228), FALSE);
							m_wndList.SetItemTextColor(nItem2, COLOR_BLUE, FALSE);
							//m_wndList.MergeCell(nItem2, 1, nItem2, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
							nGroup2Cost;
							
						}

					nSubItem++;
					nCost = nDiscount = nPayable = 0;
					double nDiffPaid=0, nInsCost=0;
					rs.GetValue(_T("cost"), nCost);
					rs.GetValue(_T("inscost"), nInsCost);
					rs.GetValue(_T("discount"), nDiscount);
					rs.GetValue(_T("DiffPaid"), nDiffPaid);

					nTtlCost += nCost;
					nGroup0Cost += nCost;
					nGroup1Cost += nCost;
					nGroup2Cost += nCost;
					
					
					nPayable = nCost - nDiscount;
					nTtlInsCost += nInsCost;
					nTtlDiscount += nDiscount;
					nTtlPayable += nPayable;
					nTtlDiffPaid += nDiffPaid;
					if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C") || pMF->GetObjectType() == _T("D") || pMF->GetObjectType() == _T("P"))
					{
						if(nDiscount == 0)
							nTtlInsUnpaid += nCost;
					}
						
					m_wndList.AddItems(_T(""), 
							rs.GetValue(_T("name")),
							rs.GetValue(_T("qty")),
							rs.GetValue(_T("unitprice")),
							rs.GetValue(_T("cost")),
							rs.GetValue(_T("itemid")),
							NULL);
					
							
						if(szNewGroup.Left(2) == _T("B2") || szNewGroup.Left(2) == _T("B3") || szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
							CString szItemID;
							rs.GetValue(_T("itemid"), szItemID);
/*
							szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_productuomprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_productuomprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' and ho_deptid in(%s) ) and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo, szItemID, szDepts);
							rsl.ExecSQL(szSQL);
							double nAmount = 0;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("amount"), tmpStr);
								nAmount += str2double(tmpStr);
								rsl.GetValue(_T("name"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("  +  ")+ tmpStr,
									rsl.GetValue(_T("qty")),
									rsl.GetValue(_T("price")),
									rsl.GetValue(_T("amount")),
									_T(""),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 128), FALSE);
								rsl.MoveNext();
							}
							if(nAmount > 0){
								TranslateString(_T("Total Amount"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("    ")+ tmpStr,
									_T(""),
									_T(""),
									ToString(nAmount),
									_T(""),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 255), FALSE);
							}
*/

						}
						bDeleteParent = false;
					}
					else
						break;
					rs.MoveNext();

			}
			if (nGroup1Cost > 0)
			{
				
				if (nGroup2Cost > 0)
				{
					m_wndList.SetItemText(nOldItem, 4, nGroup2Cost > 0?ToString((double)nGroup2Cost):_T(""));
				}
				
				/*
				if(nOrderId > 0 && szType == _T("P") && nOldItem > 0)
				{
					szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_productuomprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_productuomprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid ='%ld' and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), pMF->m_nDocumentNo, nOrderId, szWhere);

							rsl.ExecSQL(szSQL);
							double nTtlCost = 0;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("amount"), tmpStr);
								nTtlCost += str2double(tmpStr);
								rsl.GetValue(_T("name"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("  +  ")+ tmpStr,
									_T(""), 
									rsl.GetValue(_T("qty")),
									rsl.GetValue(_T("price")),
									rsl.GetValue(_T("amount")),
									rsl.GetValue(_T("amount")),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 128), FALSE);
								rsl.MoveNext();
							}
							if(nTtlCost > 0){
								TranslateString(_T("Amount"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("     ")+ tmpStr,
									_T(""), 
									_T(""),
									_T(""),
									ToString(nTtlCost),
									ToString(nTtlCost),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 255), FALSE);

							}
				}
				*/

				nGroup2Cost =  0;
				nOldItem = 0;
				CString szLabel;
				TranslateString(_T("Sub Amount"), szLabel);
				nItem = m_wndList.AddItems(_T(""), szLabel, NULL);
				//m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 4, nGroup1Cost > 0?ToString((double)nGroup1Cost):_T(""));

				//m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
				nGroup1Cost =  0;
			}

		}

		grs.MoveNext();
	
	}

/*	if(nGroup0Cost > 0 && nChapterID > 0){
		CString szLabel;
		TranslateString(_T("Sum"), szLabel);
		tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID-1]);
		nItem = m_wndList.AddItems(_T(""), szLabel+tmpStr, NULL);
		//m_wndList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
		m_wndList.SetItemText(nItem, 4, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));
		m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
		nGroup1Cost = 0;
	}	
*/	
	if(nTtlCost > 0){
	
		CString szLabel, szAmount;

		//In phan tong so nhom.
		//m_wndList.AddItems(_T(""), NULL);
			
			TranslateString(_T("Total Amount"), szLabel);
			tmpStr.Format(_T("%s ("), szLabel);
			for (int i =0; i < nChapterID; i++)
			{
				if(i > 0)
					tmpStr += _T("+");
				tmpStr.AppendFormat(_T("%s"), lpszChapter[i]);
			}
			tmpStr += _T(")");
			nItem = m_wndList.AddItems(_T(""), 
			tmpStr,
			_T(""),
			_T(""),
			nTtlCost>0?ToString((double)nTtlCost):_T(""),
			NULL);
			m_wndList.SetItemBkColor(nItem, RGB(80, 85, 255), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
	}
/*
		//In phan tong tien
		//m_wndList.AddItems(_T(" "), NULL);

		TranslateString(_T("Total Cost"), szLabel);
		nItem = m_wndList.AddItems(_T(""), szLabel, _T(""), _T(""),  ToString((double)nTtlCost), NULL);
		m_wndList.SetItemBkColor(nItem,  RGB(0, 128, 192), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);
		

		if(nTtlInsCost > 0)
		{
			TranslateString(_T("Insurance Cost"), szLabel);
			nItem = m_wndList.AddItems(_T(""), szLabel, _T(""), _T(""),  ToString((double)nTtlInsCost), NULL);
			m_wndList.SetItemBkColor(nItem,  RGB(28, 94, 166), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);
		}	

		if(nTtlDiscount > 0){
			if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
				TranslateString(_T("Inspaid"), szLabel);
			else
				TranslateString(_T("Discount"), szLabel);
			nItem = m_wndList.AddItems(_T(""), szLabel, _T(""), _T(""),  ToString((double)nTtlDiscount), NULL);
			m_wndList.SetItemBkColor(nItem,  RGB(28, 94, 166), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);
		}
		if(nTtlDiffPaid > 0){
			
			TranslateString(_T("Difference pay"), szLabel);
			nItem = m_wndList.AddItems(_T(""), szLabel, _T(""), _T(""),  ToString((double)nTtlDiffPaid), NULL);
			m_wndList.SetItemBkColor(nItem,  RGB(28, 94, 166), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);

		}

		TranslateString(_T("Patient Pay"), szLabel);
		szAmount = ToString(nTtlPayable);
		nItem = m_wndList.AddItems(_T(""), szLabel,  _T(""), _T(""), szAmount, NULL);
		m_wndList.SetItemBkColor(nItem,  RGB(28, 94, 166), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		//m_wndList.SetSubItemTextColor(nItem, 6, COLOR_RED, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);


		if(nTtlInsUnpaid >0)
		{
			TranslateString(_T("Insurance Unpaid"), szLabel);
			szAmount = ToString(nTtlInsUnpaid);
			nItem = m_wndList.AddItems(_T(""), szLabel,  _T(""), _T(""), szAmount, NULL);
			m_wndList.SetItemBkColor(nItem,  RGB(28, 94, 166), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			//m_wndList.SetSubItemTextColor(nItem, 6, COLOR_RED, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);
		}

	}
	*/
	m_nTotalCost = nTtlCost;
	m_nTotalDiscount = nTtlDiscount;
	m_nTotalPayable = nTtlPayable;
	m_nTotalInsCost = nTtlInsCost;
	m_nTotalDiffPaid = nTtlDiffPaid;
	m_nTotalPatPaid=nTtlInsUnpaid;
	

	m_wndList.EndLoad();
	m_wndList.EnsureVisible(m_wndList.GetItemCount()-1, FALSE);
	if(nTtlInsUnpaid > 0 || nTtlCost == nTtlPayable){
//		m_wndPayment.EnableWindow(true);
		//m_wndApproval.EnableWindow(FALSE);
	}
	else
	{
		m_wndPayment.EnableWindow(false);
	}
		
	UpdateData(false);

}

void CHMSPatientProfiles::OnLoadInsuranceList(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord grs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szFeeID, szID, szDepts, szWhere;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex, nChapterID=0;

	double nTtlCost=0,
			nTtlDiscount=0,
			nTtlPayable=0,
			nTtlFree=0,
			nGroup0Cost = 0,
			nGroup0Discount=0,
			nGroup0Payable=0,
			nGroup1Cost = 0,
			nGroup1Discount=0,
			nGroup1Payable=0,
			nGroup2Cost = 0,
			nGroup2Discount=0,
			nGroup2Payable=0,
			nCost=0, nDiscount=0, nPayable=0, nDiffPaid=0, nFreeAmount=0;

	int nItem=0, nOldItem=0, nItem2;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup, szType;
	long nOrderId;

	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index,hfg_id"));
	grs.ExecSQL(szSQL);

	szDepts = pMF->m_szDepartments;
	szDepts.Replace(_T("["), _T("\'"));
	szDepts.Replace(_T("]"), _T("\'"));

	szWhere.Empty();
	if(pMF->IsInPatient()){
		if (pMF->m_szOutpatient != _T("Y")) szWhere.Format(_T(" and hfe_group <>'D0000' "));
		szWhere.AppendFormat(_T(" and hfe_class='I' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfe_class ='E'  "));
	}

	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
	{

	szSQL.Format(_T(" SELECT ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_insprice+hfe_DiffPaid as unitprice,") \
		_T(" 		hfe_insprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_inspaid) as inscost,") \
		_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patdebt) as patdebt ") \
		_T(" FROM hms_fee ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld  AND hfe_status in('O','X','C') and hfe_cost > 0 and hfe_invoiceno<=0 AND hfe_deptid in(%s) %s ") \
		_T(" GROUP BY hfe_type, hfe_group, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_insprice ") \
		_T(" ORDER BY groupid, feetype, name, unit, unitprice"), m_nDocumentNo, szDepts, szWhere);
	}
	else if(pMF->GetObjectType() == _T("D") || pMF->GetObjectType() == _T("P"))
	{
	szSQL.Format(_T(" SELECT ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_polprice+hfe_DiffPaid as unitprice,") \
		_T(" 		hfe_polprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_polprice*hfe_quantity) as inscost,") \
		_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patdebt) as patdebt ") \
		_T(" FROM hms_fee ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld  AND hfe_status in('O','X','C') and hfe_cost > 0 and hfe_invoiceno<=0 AND hfe_deptid in(%s) %s ") \
		_T(" GROUP BY hfe_type, hfe_group, hfe_itemid, hfe_desc, hfe_unit, hfe_polprice ") \
		_T(" ORDER BY groupid, feetype, name, unit, unitprice"),  m_nDocumentNo, szDepts, szWhere);
	}
	else
	{
	szSQL.Format(_T(" SELECT ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		hfe_unitprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		0 as inscost,") \
		_T(" 		0 as DiffPaid,") \
		_T(" 		0 as discount,") \
		_T(" 		sum(hfe_patdebt) as patdebt ") \
		_T(" FROM hms_fee ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld  AND hfe_status in('O','X','C') and hfe_cost > 0 and hfe_invoiceno<=0 AND hfe_deptid in(%s) %s ") \
		_T(" GROUP BY hfe_type, hfe_group, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_insprice ") \
		_T(" ORDER BY groupid, feetype, name, unit, unitprice"),  m_nDocumentNo, szDepts, szWhere);
	}

	rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
	nIndex = 0;
	CString szSubItem;
	int nSubItem = 1;
	nChapterID = 0;
	

	while(!grs.IsEOF()){
		grs.GetValue(_T("xlevel"), nLevel);
		grs.GetValue(_T("id"), szParentGroup);
		grs.GetValue(_T("feeid"), szSubItem);
		szParentGroup.Trim();
		bool bAdd = false;
		
		rs.MoveFirst();
		while(!rs.IsEOF()){
			rs.GetValue(_T("groupid"), tmpStr);
			if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
				bAdd = true;
				break;
			}
			rs.MoveNext();
		}
		if(!bAdd)
		{
			grs.MoveNext();
			continue;
		}
		if(nLevel == 0)
		{
			if(nGroup0Cost > 0 && nChapterID > 0){
				CString szLabel;
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID-1]);
				nItem = m_wndList.AddItems(_T(""), szLabel+tmpStr, NULL);
				m_wndList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 4, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));
				m_wndList.SetItemText(nItem, 5, nGroup0Discount > 0?ToString((double)nGroup0Discount):_T(""));
				m_wndList.SetItemText(nItem, 6, nGroup0Payable > 0?ToString((double)nGroup0Payable):_T(""));
				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
				nGroup1Cost = 0;
			}
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 6, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			nIndex = 0;
			nGroup0Cost = nGroup0Discount = nGroup0Payable=0;
			szNewGroup.Empty();
			szOldGroup.Empty();
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
		//	m_wndList.SetItemBkColor(nItem, RGB(0, 128, 128), FALSE);
		//	m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.SetItemBkColor(nItem, RGB(64, 128, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 6);
			nGroup1Cost = nGroup1Discount=nGroup1Payable=0;

			szOldGroup = szNewGroup;

		}
	
		if(szSubItem == _T("Y"))
		{
			nSubItem = 0;
			while(!rs.IsEOF())
			{

				rs.GetValue(_T("feetype"), szType);
					rs.GetValue(_T("groupid"), szNewGroup);
					
					szNewGroup.Trim();
					if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
							

							szOldGroup = szNewGroup;
							if(nGroup2Cost > 0 && nOldItem > 0){
								m_wndList.SetItemText(nOldItem, 4, nGroup2Cost>0?ToString((double)nGroup2Cost):_T(""));
								m_wndList.SetItemText(nOldItem, 5, nGroup2Discount>0?ToString((double)nGroup2Discount):_T(""));
								m_wndList.SetItemText(nOldItem, 6, nGroup2Payable>0?ToString((double)nGroup2Payable):_T(""));
								

								szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_productuomprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_productuomprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid ='%ld' and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), pMF->m_nDocumentNo, nOrderId, szWhere);

								rsl.ExecSQL(szSQL);
								double nTtlCost = 0;
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("amount"), tmpStr);
									nTtlCost += str2double(tmpStr);
									rsl.GetValue(_T("name"), tmpStr);
									int n = m_wndList.AddItems(_T(""), 
										_T("  +  ")+ tmpStr,
										_T(""), 
										rsl.GetValue(_T("qty")),
										rsl.GetValue(_T("price")),
										rsl.GetValue(_T("amount")),
										rsl.GetValue(_T("amount")),
										NULL);
									m_wndList.SetItemTextColor(n, RGB(0, 128, 128), FALSE);
									rsl.MoveNext();
								}
								if(nTtlCost > 0){
									TranslateString(_T("Amount"), tmpStr);
									int n = m_wndList.AddItems(_T(""), 
										_T("     ")+ tmpStr,
										_T(""), 
										_T(""),
										_T(""),
										ToString(nTtlCost),
										ToString(nTtlCost),
										NULL);
									m_wndList.SetItemTextColor(n, RGB(0, 128, 255), FALSE);

								}

							}



							rs.GetValue(_T("orderid"), nOrderId);

							szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&pMF->m_db);
							rs2.ExecSQL(szSQL);
							
							nItem2 = m_wndList.AddItems(_T("*"), rs2.GetValue(_T("hfg_name")), NULL);
							nOldItem = nItem2;
							m_wndList.SetItemBkColor(nItem2, RGB(200, 200, 228), FALSE);
							m_wndList.SetItemTextColor(nItem2, COLOR_BLUE, FALSE);
							m_wndList.MergeCell(nItem2, 1, nItem2, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
							nGroup2Cost = nGroup2Discount = nGroup2Payable= 0;
							
						}

					nSubItem++;
					nCost = nDiscount = nPayable = 0;
					rs.GetValue(_T("cost"), nCost);
					nTtlCost += nCost;
					nGroup0Cost += nCost;
					nGroup1Cost += nCost;
					nGroup2Cost += nCost;
					
					rs.GetValue(_T("discount"), nFreeAmount);
					nPayable = nCost - nDiscount;

					nTtlDiscount += nDiscount;
					nGroup0Discount += nDiscount;
					nGroup1Discount += nDiscount;
					nGroup2Discount += nDiscount;
						
					nTtlPayable += nPayable;
					nGroup0Payable += nPayable;
					nGroup1Payable += nPayable;
					nGroup2Payable += nPayable;

						
					m_wndList.AddItems(_T(""), 
							rs.GetValue(_T("name")),
							rs.GetValue(_T("qty")),
							rs.GetValue(_T("unitprice")),
							rs.GetValue(_T("cost")),
							ToString(nDiscount),
							ToString(nPayable),
							rs.GetValue(_T("itemid")),
							NULL);
					
							
						if(szNewGroup.Left(2) == _T("B2") || szNewGroup.Left(2) == _T("B3") || szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
							CString szItemID;
							rs.GetValue(_T("itemid"), szItemID);

							szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_productuomprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_productuomprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' and ho_deptid in(%s) ) and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo, szItemID, szDepts);
							rsl.ExecSQL(szSQL);
							double nAmount = 0;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("amount"), tmpStr);
								nAmount += str2double(tmpStr);
								rsl.GetValue(_T("name"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("  +  ")+ tmpStr,
									rsl.GetValue(_T("qty")),
									rsl.GetValue(_T("price")),
									rsl.GetValue(_T("amount")),
									_T(""),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 128), FALSE);
								rsl.MoveNext();
							}
							if(nAmount > 0){
								TranslateString(_T("Total Amount"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("    ")+ tmpStr,
									_T(""),
									_T(""),
									ToString(nAmount),
									_T(""),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 255), FALSE);
							}

						}
						bDeleteParent = false;
					}
					else
						break;
					rs.MoveNext();

			}
			if(nGroup1Cost > 0)
			{
				
				if(nGroup2Cost  > 0){
					m_wndList.SetItemText(nOldItem, 4, nGroup2Cost > 0?ToString((double)nGroup2Cost):_T(""));
					m_wndList.SetItemText(nOldItem, 5, nGroup2Discount > 0?ToString((double)nGroup2Discount):_T(""));
					m_wndList.SetItemText(nOldItem, 6, nGroup2Payable> 0?ToString((double)nGroup2Payable):_T(""));
					
				}
				
				/*
				if(nOrderId > 0 && szType == _T("P") && nOldItem > 0)
				{
					szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_productuomprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_productuomprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid ='%ld' and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), pMF->m_nDocumentNo, nOrderId, szWhere);

							rsl.ExecSQL(szSQL);
							double nTtlCost = 0;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("amount"), tmpStr);
								nTtlCost += str2double(tmpStr);
								rsl.GetValue(_T("name"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("  +  ")+ tmpStr,
									_T(""), 
									rsl.GetValue(_T("qty")),
									rsl.GetValue(_T("price")),
									rsl.GetValue(_T("amount")),
									rsl.GetValue(_T("amount")),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 128), FALSE);
								rsl.MoveNext();
							}
							if(nTtlCost > 0){
								TranslateString(_T("Amount"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("     ")+ tmpStr,
									_T(""), 
									_T(""),
									_T(""),
									ToString(nTtlCost),
									ToString(nTtlCost),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 255), FALSE);

							}
				}
				*/

				nGroup2Discount = nGroup2Payable = nGroup2Cost =  0;
				nOldItem = 0;
				CString szLabel;
				TranslateString(_T("Sub Amount"), szLabel);
				nItem = m_wndList.AddItems(_T(""), szLabel, NULL);
				m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 4, nGroup1Cost > 0?ToString((double)nGroup1Cost):_T(""));
				m_wndList.SetItemText(nItem, 5, nGroup1Discount > 0?ToString((double)nGroup1Discount):_T(""));
				m_wndList.SetItemText(nItem, 6, nGroup1Payable > 0?ToString((double)nGroup1Payable):_T(""));
				

				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
				nGroup1Discount = nGroup1Payable = nGroup1Cost =  0;
			}

		}

		grs.MoveNext();
	
	}

	if(nGroup0Cost > 0 && nChapterID > 0){
				CString szLabel;
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID-1]);
				nItem = m_wndList.AddItems(_T(""), szLabel+tmpStr, NULL);
				m_wndList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 4, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));
				m_wndList.SetItemText(nItem, 5, nGroup0Discount > 0?ToString((double)nGroup0Discount):_T(""));
				m_wndList.SetItemText(nItem, 6, nGroup0Payable > 0?ToString((double)nGroup0Payable):_T(""));
				
				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
				nGroup1Cost = 0;
	}

	
	if(nTtlCost > 0){
			CString szLabel;
			m_wndList.AddItems(_T(""), NULL);
			
			TranslateString(_T("Total Amount"), szLabel);
			tmpStr.Format(_T("%s ("), szLabel);
			for (int i =0; i < nChapterID; i++)
			{
				if(i > 0)
					tmpStr += _T("+");
				tmpStr.AppendFormat(_T("%s"), lpszChapter[i]);
			}
			tmpStr += _T(")");
			nItem = m_wndList.AddItems(_T(""), 
			tmpStr,
			_T(""),
			_T(""),
			nTtlCost>0?ToString((double)nTtlCost):_T(""),
			nTtlDiscount>0?ToString((double)nTtlDiscount):_T(""),
			nTtlPayable>0?ToString((double)nTtlPayable):_T(""),
			
			NULL);
			m_wndList.SetItemBkColor(nItem, RGB(80, 85, 255), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
	}

	if (nTtlCost > 0)
	{
		CString szLabel, szAmount;

		m_wndList.AddItems(_T(" "), NULL);

		TranslateString(_T("Total Cost"), szLabel);
		nItem = m_wndList.AddItems(_T(""), szLabel, _T(""), _T(""), _T(""), _T(""), ToString((double)nTtlCost), NULL);
		m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);

		nFreeAmount = 0;

		if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C") || pMF->GetObjectType() == _T("D"))
		{
			
			if(nTtlDiscount > 0)
			{

				if(pMF->GetObjectType() == _T("D"))
					TranslateString(_T("Total Discount"), szLabel);
				else
					TranslateString(_T("Total Insurance Paid"), szLabel);

				if(nTtlFree == nTtlDiscount)
					nFreeAmount = nTtlFree;
				else
					nFreeAmount = str2int(m_szCardDiscount)*nTtlDiscount/100;

				nItem = m_wndList.AddItems(_T(""), szLabel,  _T(""), _T(""), _T(""), _T(""), ToString(nFreeAmount), NULL);
				m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
				m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);
			}
		}


		TranslateString(_T("Co-Payment"), szLabel);
		double nPayable = nTtlCost-nFreeAmount;
		szAmount = ToString(nPayable);
		nItem = m_wndList.AddItems(_T(""), szLabel,  _T(""), _T(""), _T(""), _T(""), szAmount, NULL);
		m_wndList.SetItemBkColor(nItem, RGB(64, 128, 255), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		//m_wndList.SetSubItemTextColor(nItem, 6, COLOR_RED, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);


		TranslateString(_T("Patient Pay"), szLabel);
		szAmount = ToString(nTtlPayable);
		nItem = m_wndList.AddItems(_T(""), szLabel,  _T(""), _T(""), _T(""), _T(""), szAmount, NULL);
		m_wndList.SetItemBkColor(nItem, RGB(255, 128, 0), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		//m_wndList.SetSubItemTextColor(nItem, 6, COLOR_RED, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);

		if(nPayable <= 0){
			m_wndPayment.EnableWindow(false);
		}
		else
		{
			if(!pMF->IsInPatient())
				m_wndPayment.EnableWindow(true);
		}

	}
	m_nTotalCost = nTtlCost;
	m_nTotalDiscount = nFreeAmount;
	m_nTotalInsCost = nTtlDiscount;
	m_nTotalPayable = nTtlPayable;


	m_wndList.EndLoad();
	m_wndList.EnsureVisible(m_wndList.GetItemCount()-1, TRUE);


}

void CHMSPatientProfiles::OnLoadPolicyList()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord grs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szFeeID, szID, szDepts, szWhere;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex, nChapterID=0;

	double nTtlCost=0,
			nTtlDiscount=0,
			nTtlPayable=0,
			nTtlFree=0,
			nGroup0Cost = 0,
			nGroup0Discount=0,
			nGroup0Payable=0,
			nGroup1Cost = 0,
			nGroup1Discount=0,
			nGroup1Payable=0,
			nGroup2Cost = 0,
			nGroup2Discount=0,
			nGroup2Payable=0,
			nCost=0, nDiscount=0, nPayable=0, nDiffPaid=0, nFreeAmount=0;

	int nItem=0, nOldItem=0, nItem2;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup, szType;
	long nOrderId;

	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index,hfg_id"));
	grs.ExecSQL(szSQL);

	szDepts = pMF->m_szDepartments;
	szDepts.Replace(_T("["), _T("\'"));
	szDepts.Replace(_T("]"), _T("\'"));

	szWhere.Empty();
	if(pMF->IsInPatient()){
		if (pMF->m_szOutpatient != _T("Y")) szWhere.Format(_T(" and hfe_group <>'D0000' "));
		szWhere.AppendFormat(_T(" and hfe_class='I' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfe_class ='E'  "));
	}

	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
	{

	szSQL.Format(_T(" SELECT ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_insprice+hfe_DiffPaid as unitprice,") \
		_T(" 		hfe_insprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_inspaid) as inscost,") \
		_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patdebt) as patdebt ") \
		_T(" FROM hms_fee ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld  AND hfe_status in('O','X','C') and hfe_cost > 0 and hfe_invoiceno<=0 AND hfe_deptid in(%s) %s ") \
		_T(" GROUP BY hfe_type, hfe_group, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_insprice ") \
		_T(" ORDER BY groupid, feetype, name, unit, unitprice"), m_nDocumentNo, szDepts, szWhere);
	}
	else if(pMF->GetObjectType() == _T("D") || pMF->GetObjectType() == _T("P"))
	{
	szSQL.Format(_T(" SELECT ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_polprice+hfe_DiffPaid as unitprice,") \
		_T(" 		hfe_polprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_polprice*hfe_quantity) as inscost,") \
		_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patdebt) as patdebt ") \
		_T(" FROM hms_fee ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld  AND hfe_status in('O','X','C') and hfe_cost > 0 and hfe_invoiceno<=0 AND hfe_deptid in(%s) %s ") \
		_T(" GROUP BY hfe_type, hfe_group, hfe_itemid, hfe_desc, hfe_unit, hfe_polprice ") \
		_T(" ORDER BY groupid, feetype, name, unit, unitprice"),  m_nDocumentNo, szDepts, szWhere);
	}
	else
	{
	szSQL.Format(_T(" SELECT ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		hfe_unitprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		0 as inscost,") \
		_T(" 		0 as DiffPaid,") \
		_T(" 		0 as discount,") \
		_T(" 		sum(hfe_patdebt) as patdebt ") \
		_T(" FROM hms_fee ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld  AND hfe_status in('O','X','C') and hfe_cost > 0 and hfe_invoiceno<=0 AND hfe_deptid in(%s) %s ") \
		_T(" GROUP BY hfe_type, hfe_group, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_insprice") \
		_T(" ORDER BY groupid, feetype, name, unit, unitprice"),  m_nDocumentNo, szDepts, szWhere);
	}

	rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
	nIndex = 0;
	CString szSubItem;
	int nSubItem = 1;
	nChapterID = 0;
	

	while(!grs.IsEOF()){
		grs.GetValue(_T("xlevel"), nLevel);
		grs.GetValue(_T("id"), szParentGroup);
		grs.GetValue(_T("feeid"), szSubItem);
		szParentGroup.Trim();
		bool bAdd = false;
		
		rs.MoveFirst();
		while(!rs.IsEOF()){
			rs.GetValue(_T("groupid"), tmpStr);
			if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
				bAdd = true;
				break;
			}
			rs.MoveNext();
		}
		if(!bAdd)
		{
			grs.MoveNext();
			continue;
		}
		if(nLevel == 0)
		{
			if(nGroup0Cost > 0 && nChapterID > 0){
				CString szLabel;
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID-1]);
				nItem = m_wndList.AddItems(_T(""), szLabel+tmpStr, NULL);
				m_wndList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 4, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));
				m_wndList.SetItemText(nItem, 5, nGroup0Discount > 0?ToString((double)nGroup0Discount):_T(""));
				m_wndList.SetItemText(nItem, 6, nGroup0Payable > 0?ToString((double)nGroup0Payable):_T(""));
				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
				nGroup1Cost = 0;
			}
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 6, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			nIndex = 0;
			nGroup0Cost = nGroup0Discount = nGroup0Payable=0;
			szNewGroup.Empty();
			szOldGroup.Empty();
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
		//	m_wndList.SetItemBkColor(nItem, RGB(0, 128, 128), FALSE);
		//	m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.SetItemBkColor(nItem, RGB(64, 128, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 6);
			nGroup1Cost = nGroup1Discount=nGroup1Payable=0;

			szOldGroup = szNewGroup;

		}
	
		if(szSubItem == _T("Y"))
		{
			nSubItem = 0;
			while(!rs.IsEOF())
			{

				rs.GetValue(_T("feetype"), szType);
					rs.GetValue(_T("groupid"), szNewGroup);
					
					szNewGroup.Trim();
					if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
							

							szOldGroup = szNewGroup;
							if(nGroup2Cost > 0 && nOldItem > 0){
								m_wndList.SetItemText(nOldItem, 4, nGroup2Cost>0?ToString((double)nGroup2Cost):_T(""));
								m_wndList.SetItemText(nOldItem, 5, nGroup2Discount>0?ToString((double)nGroup2Discount):_T(""));
								m_wndList.SetItemText(nOldItem, 6, nGroup2Payable>0?ToString((double)nGroup2Payable):_T(""));
								

								szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_productuomprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_productuomprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid ='%ld' and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), pMF->m_nDocumentNo, nOrderId, szWhere);

								rsl.ExecSQL(szSQL);
								double nTtlCost = 0;
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("amount"), tmpStr);
									nTtlCost += str2double(tmpStr);
									rsl.GetValue(_T("name"), tmpStr);
									int n = m_wndList.AddItems(_T(""), 
										_T("  +  ")+ tmpStr,
										_T(""), 
										rsl.GetValue(_T("qty")),
										rsl.GetValue(_T("price")),
										rsl.GetValue(_T("amount")),
										rsl.GetValue(_T("amount")),
										NULL);
									m_wndList.SetItemTextColor(n, RGB(0, 128, 128), FALSE);
									rsl.MoveNext();
								}
								if(nTtlCost > 0){
									TranslateString(_T("Amount"), tmpStr);
									int n = m_wndList.AddItems(_T(""), 
										_T("     ")+ tmpStr,
										_T(""), 
										_T(""),
										_T(""),
										ToString(nTtlCost),
										ToString(nTtlCost),
										NULL);
									m_wndList.SetItemTextColor(n, RGB(0, 128, 255), FALSE);

								}

							}



							rs.GetValue(_T("orderid"), nOrderId);

							szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&pMF->m_db);
							rs2.ExecSQL(szSQL);
							
							nItem2 = m_wndList.AddItems(_T("*"), rs2.GetValue(_T("hfg_name")), NULL);
							nOldItem = nItem2;
							m_wndList.SetItemBkColor(nItem2, RGB(200, 200, 228), FALSE);
							m_wndList.SetItemTextColor(nItem2, COLOR_BLUE, FALSE);
							m_wndList.MergeCell(nItem2, 1, nItem2, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
							nGroup2Cost = nGroup2Discount = nGroup2Payable= 0;
							
						}

					nSubItem++;
					nCost = nDiscount = nPayable = 0;
					rs.GetValue(_T("cost"), nCost);
					nTtlCost += nCost;
					nGroup0Cost += nCost;
					nGroup1Cost += nCost;
					nGroup2Cost += nCost;
					
					rs.GetValue(_T("discount"), nFreeAmount);
					nPayable = nCost - nDiscount;

					nTtlDiscount += nDiscount;
					nGroup0Discount += nDiscount;
					nGroup1Discount += nDiscount;
					nGroup2Discount += nDiscount;
						
					nTtlPayable += nPayable;
					nGroup0Payable += nPayable;
					nGroup1Payable += nPayable;
					nGroup2Payable += nPayable;

						
					m_wndList.AddItems(_T(""), 
							rs.GetValue(_T("name")),
							rs.GetValue(_T("qty")),
							rs.GetValue(_T("unitprice")),
							rs.GetValue(_T("cost")),
							ToString(nDiscount),
							ToString(nPayable),
							rs.GetValue(_T("itemid")),
							NULL);
					
							
						if(szNewGroup.Left(2) == _T("B2") || szNewGroup.Left(2) == _T("B3") || szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
							CString szItemID;
							rs.GetValue(_T("itemid"), szItemID);

							szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_productuomprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_productuomprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' and ho_deptid in(%s) ) and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo, szItemID, szDepts);
							rsl.ExecSQL(szSQL);
							double nAmount = 0;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("amount"), tmpStr);
								nAmount += str2double(tmpStr);
								rsl.GetValue(_T("name"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("  +  ")+ tmpStr,
									rsl.GetValue(_T("qty")),
									rsl.GetValue(_T("price")),
									rsl.GetValue(_T("amount")),
									_T(""),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 128), FALSE);
								rsl.MoveNext();
							}
							if(nAmount > 0){
								TranslateString(_T("Total Amount"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("    ")+ tmpStr,
									_T(""),
									_T(""),
									ToString(nAmount),
									_T(""),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 255), FALSE);
							}

						}
						bDeleteParent = false;
					}
					else
						break;
					rs.MoveNext();

			}
			if(nGroup1Cost > 0)
			{
				
				if(nGroup2Cost  > 0){
					m_wndList.SetItemText(nOldItem, 4, nGroup2Cost > 0?ToString((double)nGroup2Cost):_T(""));
					m_wndList.SetItemText(nOldItem, 5, nGroup2Discount > 0?ToString((double)nGroup2Discount):_T(""));
					m_wndList.SetItemText(nOldItem, 6, nGroup2Payable> 0?ToString((double)nGroup2Payable):_T(""));
					
				}
				
				/*
				if(nOrderId > 0 && szType == _T("P") && nOldItem > 0)
				{
					szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_productuomprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_productuomprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid ='%ld' and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), pMF->m_nDocumentNo, nOrderId, szWhere);

							rsl.ExecSQL(szSQL);
							double nTtlCost = 0;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("amount"), tmpStr);
								nTtlCost += str2double(tmpStr);
								rsl.GetValue(_T("name"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("  +  ")+ tmpStr,
									_T(""), 
									rsl.GetValue(_T("qty")),
									rsl.GetValue(_T("price")),
									rsl.GetValue(_T("amount")),
									rsl.GetValue(_T("amount")),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 128), FALSE);
								rsl.MoveNext();
							}
							if(nTtlCost > 0){
								TranslateString(_T("Amount"), tmpStr);
								int n = m_wndList.AddItems(_T(""), 
									_T("     ")+ tmpStr,
									_T(""), 
									_T(""),
									_T(""),
									ToString(nTtlCost),
									ToString(nTtlCost),
									NULL);
								m_wndList.SetItemTextColor(n, RGB(0, 128, 255), FALSE);

							}
				}
				*/

				nGroup2Discount = nGroup2Payable = nGroup2Cost =  0;
				nOldItem = 0;
				CString szLabel;
				TranslateString(_T("Sub Amount"), szLabel);
				nItem = m_wndList.AddItems(_T(""), szLabel, NULL);
				m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 4, nGroup1Cost > 0?ToString((double)nGroup1Cost):_T(""));
				m_wndList.SetItemText(nItem, 5, nGroup1Discount > 0?ToString((double)nGroup1Discount):_T(""));
				m_wndList.SetItemText(nItem, 6, nGroup1Payable > 0?ToString((double)nGroup1Payable):_T(""));
				

				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
				nGroup1Discount = nGroup1Payable = nGroup1Cost =  0;
			}

		}

		grs.MoveNext();
	
	}

	if(nGroup0Cost > 0 && nChapterID > 0){
				CString szLabel;
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID-1]);
				nItem = m_wndList.AddItems(_T(""), szLabel+tmpStr, NULL);
				m_wndList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 4, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));
				m_wndList.SetItemText(nItem, 5, nGroup0Discount > 0?ToString((double)nGroup0Discount):_T(""));
				m_wndList.SetItemText(nItem, 6, nGroup0Payable > 0?ToString((double)nGroup0Payable):_T(""));
				
				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
				nGroup1Cost = 0;
	}

	
	if(nTtlCost > 0){
			CString szLabel;
			m_wndList.AddItems(_T(""), NULL);
			
			TranslateString(_T("Total Amount"), szLabel);
			tmpStr.Format(_T("%s ("), szLabel);
			for (int i =0; i < nChapterID; i++)
			{
				if(i > 0)
					tmpStr += _T("+");
				tmpStr.AppendFormat(_T("%s"), lpszChapter[i]);
			}
			tmpStr += _T(")");
			nItem = m_wndList.AddItems(_T(""), 
			tmpStr,
			_T(""),
			_T(""),
			nTtlCost>0?ToString((double)nTtlCost):_T(""),
			nTtlDiscount>0?ToString((double)nTtlDiscount):_T(""),
			nTtlPayable>0?ToString((double)nTtlPayable):_T(""),
			
			NULL);
			m_wndList.SetItemBkColor(nItem, RGB(80, 85, 255), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
	}

	if(nTtlCost > 0){
		CString szLabel, szAmount;

		m_wndList.AddItems(_T(" "), NULL);

		TranslateString(_T("Total Cost"), szLabel);
		nItem = m_wndList.AddItems(_T(""), szLabel, _T(""), _T(""), _T(""), _T(""), ToString((double)nTtlCost), NULL);
		m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);

		nFreeAmount = 0;

		if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C") || pMF->GetObjectType() == _T("D"))
		{
			
			if(nTtlDiscount > 0)
			{

				if(pMF->GetObjectType() == _T("D"))
					TranslateString(_T("Total Discount"), szLabel);
				else
					TranslateString(_T("Total Insurance Paid"), szLabel);

				if(nTtlFree == nTtlDiscount)
					nFreeAmount = nTtlFree;
				else
					nFreeAmount = str2int(m_szCardDiscount)*nTtlDiscount/100;

				nItem = m_wndList.AddItems(_T(""), szLabel,  _T(""), _T(""), _T(""), _T(""), ToString(nFreeAmount), NULL);
				m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
				m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);
			}
		}


		TranslateString(_T("Co-Payment"), szLabel);
		double nPayable = nTtlCost-nFreeAmount;
		szAmount = ToString(nPayable);
		nItem = m_wndList.AddItems(_T(""), szLabel,  _T(""), _T(""), _T(""), _T(""), szAmount, NULL);
		m_wndList.SetItemBkColor(nItem, RGB(64, 128, 255), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		//m_wndList.SetSubItemTextColor(nItem, 6, COLOR_RED, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);


		TranslateString(_T("Patient Pay"), szLabel);
		szAmount = ToString(nTtlPayable);
		nItem = m_wndList.AddItems(_T(""), szLabel,  _T(""), _T(""), _T(""), _T(""), szAmount, NULL);
		m_wndList.SetItemBkColor(nItem, RGB(255, 128, 0), FALSE);
		m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		//m_wndList.SetSubItemTextColor(nItem, 6, COLOR_RED, FALSE);
		m_wndList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true, false);

		if(nPayable <= 0){
			m_wndPayment.EnableWindow(false);
		}
		else if(!pMF->IsInPatient())
			m_wndPayment.EnableWindow(true);

	}
	m_nTotalCost = nTtlCost;
	m_nTotalDiscount = nFreeAmount;
	m_nTotalInsCost = nTtlDiscount;
	m_nTotalPayable = nTtlPayable;


	m_wndList.EndLoad();
	m_wndList.EnsureVisible(m_wndList.GetItemCount()-1, TRUE);
	
}
#include "HMSDetailEletronicDialog.h"
void CHMSPatientProfiles::OnEletronic()
{	
	CHMSDetailEletronicDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.DoModal();
}
void CHMSPatientProfiles::OnPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnReceipt();
} 
void CHMSPatientProfiles::OnApprovalSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!CheckBeforeApprove())
	{
		return;
	}
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select get_objectname(d.hfe_objectid) as deposit_object ") \
				_T(" from hms_doc  ") \
				_T(" left join hms_fee_deposit d on (hd_docno = hfe_docno)") \
				_T(" where hd_docno = %ld and d.hfe_class = 'E' and d.hfe_patpaid = 0 ") \
				_T(" and hd_object <> d.hfe_objectid") \
				, pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		CString tmpStr, szMessage;
		tmpStr.Empty();
		while (!rs.IsEOF())
		{
			if (!tmpStr.IsEmpty())
			{
				tmpStr += _T(", ");
			}
			tmpStr.Format(_T("%s"), rs.GetStringValue());
			rs.MoveNext();
		}
		szMessage.Format(_T("Bệnh nhân thuộc đối tượng %s, có phiếu tạm gửi của đối tượng %s. Cần chú ý khi thanh toán.")
			, pMF->GetObjectString(pMF->m_szObject), tmpStr);
		ShowMessageBox(szMessage);
	}
		//Đối tượng nợ thẻ thì không cho thanh toán
		szSQL.Format(_T("select HD_OBJECT as objecttype ") \
					_T(" from hms_doc  ") \
					_T(" where hd_docno = %ld ") \
					, pMF->m_nDocumentNo);
		rsl.ExecSQL(szSQL);
		CString tmpStr1;
		rsl.GetValue(_T("objecttype"), tmpStr1);
		if (tmpStr1 == _T("12"))
		{
		ShowMessageBox(_T("Bệnh nhân là đối tượng nợ thẻ, không cho phép thanh toán!, vui lòng kiểm tra lại!"));
		return;
		}

	//Thêm phần thông báo số đơn thuốc mua về của bệnh nhân mà chưa thanh toán để dễ kiểm soát
	szSQL.Format(_T("HMS_COUNT_PHARMAORDER(%ld) "), m_nDocumentNo);
	int vcount = str2int(pMF->ExecDML(szSQL));
	if(vcount > 0)
	{
		CString szMsg, tmpStr;
		TranslateString(_T("Bệnh nhân có [%d] đơn ngoại trú mang về, cần chú ý thu tiền và in đơn thuốc"), tmpStr);
		szMsg.Format(tmpStr, vcount);
		ShowMessageBox(szMsg, MB_OK);		
	}
	//Thêm phần thông báo khi thanh toán ra viện ở tài chính mà bị lệch chân trang thì cảnh bảo (sau đó fix không cho thanh toán)
	double nTotalByInvoice, nTotalByDept, nTotalDiff = 0;
	double ntotalinsbyinvoice, ntotalinsbydept, nTotalInsDiff = 0;

	int vtmp = 10;
	szSQL.Format(_T("HMS_FIND_DIFF_TOTALCOST(%ld) "), m_nDocumentNo);
	vtmp = str2int(pMF->ExecDML(szSQL));	
	if(vtmp <= 0)
	{
		szSQL.Format(_T(" SELECT") \
		_T(" ROUND(fi.hfe_amount) as  totalinvoice,") \
		_T(" ROUND(SUM(fe.hfe_cost)) as totalbydept,") \
		_T(" ROUND (fi.hfe_inspaid) as totalinsbyinvoice,") \
		_T(" Round(sum(fe.hfe_inspaid)) as totalinsbydept") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice fi ") \
		_T(" ON (fe.hfe_docno = fi.hfe_docno AND fe.hfe_invoiceno = fi.hfe_invoiceno)") \
		_T(" LEFT JOIN hms_object ON (fi.hfe_objectid = ho_id)") \
		_T(" WHERE 1=1") \
		_T(" AND fi.hfe_docno=%ld") \
		_T(" AND fi.hfe_status IN  ('A')") \
		_T(" AND fe.hfe_category <> 'Y'") \
		_T(" AND fe.hfe_status IN ('A')") \
		_T(" AND fe.hfe_type NOT IN ('V')") \
		_T(" AND fi.HFE_CLASS = 'I'") \
		_T(" GROUP BY fi.hfe_invoiceno,") \
		_T(" fi.hfe_amount, fi.hfe_inspaid"),m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("totalinvoice"), nTotalByInvoice);
			rs.GetValue(_T("totalbydept"), nTotalByDept);		

			rs.GetValue(_T("totalinsbyinvoice"), ntotalinsbyinvoice);
			rs.GetValue(_T("totalinsbydept"), ntotalinsbydept);	
		}
		nTotalDiff = nTotalByInvoice - nTotalByDept;
		CString szMsg, tmpStr;
		TranslateString(_T("Tổng chi phí trên phơi thanh toán = %.2f đồng, Tổng chi phí theo khoa = %.2f đồng, đang bị lệch nhau %.2f đồng, Anh/Chị hãy kiểm tra lại!"), tmpStr);
		szMsg.Format(tmpStr, nTotalByInvoice, nTotalByDept, nTotalDiff);
		ShowMessageBox(szMsg, MB_ICONERROR);
		return;

		nTotalInsDiff = ntotalinsbyinvoice - ntotalinsbydept;
		CString szMsg2, tmpStr2;
		TranslateString(_T("Tổng chi phí bảo hiếm trên phơi thanh toán = %.2f đồng, Tổng chi phí bảo hiểm theo khoa = %.2f đồng, đang bị lệch nhau %.2f đồng, Anh/Chị hãy kiểm tra lại!"), tmpStr2);
		szMsg2.Format(tmpStr2, ntotalinsbyinvoice, ntotalinsbydept, nTotalInsDiff);
		ShowMessageBox(szMsg2, MB_ICONERROR);
		return;
		//Thêm đoạn check tổng bảo hiểm nữa cho chắc để fix lỗi chân trang!
	}
	//Cảnh báo và chặn 1 số trường hợp sai thẻ và quyền lợi hưởng của bệnh nhân bảo hiểm
	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
	{
	int retval = 10;
	szSQL.Format(_T("HMS_CARD_CHECK_INFOR_FM(%ld) "), m_nDocumentNo);
	retval = str2int(pMF->ExecDML(szSQL));

	switch(retval)
		{
		case -1:
			ShowMessageBox(_T("Độ dài thẻ phải từ 15 ký tự trở lên!"),MB_ICONERROR);		
			return;
			break;

		case -2:
			ShowMessageBox(_T("Thẻ trái tuyến không được tích 5 năm liên tục!"),MB_ICONERROR);		
			return;
			break;

		case -3:
			ShowMessageBox(_T("Bệnh nhân trái tuyến không được tích có giấy miễn!"),MB_ICONERROR);		
			return;
			break;
		
		case -4:
			ShowMessageBox(_T("Bệnh nhân trái tuyến không cần tích cấp cứu"),MB_ICONERROR);		
			return;
			break;

		case -5:
			ShowMessageBox(_T("Bệnh nhân có giấy miễn, Thời gian bắt đầu hưởng 5 năm không được để trống!"),MB_ICONERROR);		
			return;
			break;

		case -6:
			ShowMessageBox(_T("Thời gian được miễn trên giấy không cùng chi trả không được để trống!"),MB_ICONERROR);		
			return;
			break;

		case -7:
			ShowMessageBox(_T("Phần trăm bảo hiểm thanh toán không đúng!"),MB_ICONERROR);		
			return;
			break;

		case -8:
			ShowMessageBox(_T("Ngày đăng ký hoặc ngày hết hạn thẻ không hợp lệ!"),MB_ICONERROR);		
			return;
			break;
		}
	
	}
	//Check nếu bệnh nhân có kết quả chưa thanh toán
	if((pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C")))
	{
		int vcount = 0;

		if(!pMF->IsInPatient())
		{
			szSQL.Format(_T("HMS_CHECK_INS_BEFORE_PAID(%ld) "), m_nDocumentNo);
		}
		else
		{
			szSQL.Format(_T("HMS_CHECK_INS_BEFORE_PAID_I(%ld, %d) "), m_nDocumentNo, m_nTreattime);
		}
		vcount = str2int(pMF->ExecDML(szSQL));

		if(vcount > 0)
		{
			ShowMessageBox(_T("Bệnh nhân có đề mục cận lâm sàng chưa trả kết quả, không thể kết thúc hồ sơ!"), MB_ICONERROR);
			return ;
		}
		
	}

	CHMSDischargePaymentDialog dlg(pMF);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInsRate = m_nInsRate;
	
	if (dlg.DoModal() == IDOK)
	{
		if(!pMF->IsInPatient())
		{
			CHMSPrintSheet dlg(this);
			if(dlg.DoModal() == IDOK)
			{
				//pMF->SetStatusText(_T("Print Sheet"), 0);
			}
		}
		else
		{
			/*if(dlg.m_nTotalPayable > 0)
				pMF->PrintReceipt(dlg.m_nInvoiceNo);	
			else
			pMF->PrintRefund(dlg.m_nInvoiceNo+1);*/

		}
	}
	
	OnInvoiceListLoadData();
	OnListLoadData();

	if (m_wndDocumentNo.IsWindowEnabled())
	{
		m_wndDocumentNo.SetFocus();
		if (pMF->CheckPermission(_T("01.17")))
		{
			m_wndDocumentNo.SetSel(0, -1);
		}
		else
		{
			m_wndDocumentNo.SetSel(4, m_wndDocumentNo.GetWindowTextLength());
		}
	}
} 
void CHMSPatientProfiles::OnPrintReceiptSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nInvoiceNo;
	int nSel = m_wndInvoiceList.GetCurSel();
	if (nSel < 0)
		return;
	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));
	pMF->PrintReceipt(nInvoiceNo);	
} 

void CHMSPatientProfiles::CreateDepositReceipt(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	

	if(m_nDocumentNo <= 0)
		return;


	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.04"))){
		ShowMessageBox(_T("Permission Denined."), 0);
	//	return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.04"))){
		ShowMessageBox(_T("Permission Denined."), 0);
	//	return;
	}


	if(m_nDocumentNo < 0)
		return;
//Neu la ngoai tru thi kiem tra benh nhan cap cuu thi cho phep tao phieu tam ung
	if(pMF->m_nInpatient == 0 && pMF->m_szDepositEmergency == _T("Y"))
	{

		if(m_szEmergency != _T("Y"))
		{
			CString szOutpatient;
			szSQL.Format(_T("SELECT hd_outpatient FROM hms_doc WHERE hd_docno=%ld"), m_nDocumentNo);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("hd_outpatient"), szOutpatient);
			/*if(szOutpatient != _T("Y"))
			{
				ShowMessageBox(_T("Do not allow create deposit fee"), MB_OK);
				return;
			}*/
		}
	}	
	//// Neu benh nhan noi tru da thanh toan ra vien thi khong cho tam ung.	
	//if(pMF->m_nInpatient==1 && pMF->IsAllowPaymentFees(m_nDocumentNo))
	//{	
	//	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld  and (htrf_acceptedfee is null or htrf_acceptedfee = 'N') "), m_nDocumentNo);
	//	rs.ExecSQL(szSQL);

	//	if (rs.GetIntValue() == 0){
	//		ShowMessageBox(_T("Do not allow create deposit fee. This patient discharge Receipt."), 0);
	//		return;
	//	}
	//}
	CString tmpStr;
	szSQL.Format(_T("SELECT hd_admitdept, hdf_acceptedfee, hd_isinpatient, hd_suggestion FROM hms_doc WHERE hd_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hdf_acceptedfee"), tmpStr);
	if (tmpStr == _T("Y")){
			ShowMessageBox(_T("Bệnh nhân đã xác nhận chi phí trong khoa. Không cho phép tạo phiếu tạm gửi"));
			return;
	}

	if (tmpStr == _T("P")){
		ShowMessageBox(_T("Bệnh nhân đã thanh toán viện phí. Không cho phép tạo phiếu tạm gửi"), 0);
		return;
	}

	CString szSuggestion, szDeptID;
	rs.GetValue(_T("hd_suggestion"), szSuggestion);
	rs.GetValue(_T("hd_admitdept"), szDeptID);
	//if(szSuggestion == _T("C") || szSuggestion == _T("D"))
	{

		CHMSDepositAdmissionDialog dlg(this, VM_ADD);
		dlg.m_bEnableRefund = false;
		dlg.m_nDocumentNo = m_nDocumentNo;
		dlg.m_nPatientNo = m_nPID;
		if(dlg.DoModal() == IDOK)
		{
			if (dlg.m_nDepositInvoice > 0)
				pMF->PrintDeposit(dlg.m_nDepositInvoice);

			OnInvoiceListLoadData();
			RecalcAmount();
		}

	}
	/*
	else
	{
		CHMSFeeDepositDialog dlg(this, VM_ADD);
		dlg.m_nPID = m_nPID;
		dlg.m_nDocumentNo = m_nDocumentNo;
		dlg.m_nReceiptNo = 0;
		dlg.m_szDeptID = szDeptID;
		dlg.SetMode(VM_ADD);
		if(dlg.DoModal() == IDOK){
			if(dlg.m_bPrintReceipt){
				
			}
			OnInvoiceListLoadData();

			RecalcAmount();
		}
	}
	*/
}

#include "HMSBankInvoiceInfoDialog.h"
void CHMSPatientProfiles::OnBankInvoiceInfo()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
    CRecord rs(&pMF->m_db);
    // Check hồ sơ kết thúc thì thôi
    CString vEStatus, vIStatus, vsuggestion;

    szSQL.Format(
        _T("  SELECT NVL(hd_status, 'X') as vEStatus, NVL(hcr_status, 'X') as ")
        _T("vIStatus,  NVL(HD_SUGGESTION, 'N') as vsuggestion")
        _T("   from hms_doc")
        _T("   left join hms_clinical_record ON (hd_docno=hcr_docno)")
        _T("   WHERE hd_docno=%ld"),
        m_nDocumentNo);

    rs.ExecSQL(szSQL);
    rs.GetValue(_T("vEStatus"), vEStatus);
    rs.GetValue(_T("vIStatus"), vIStatus);
    rs.GetValue(_T("vsuggestion"), vsuggestion);

    if (vEStatus == _T("T") && (vsuggestion != _T("C")) &&
        (vsuggestion != _T("D")) && !pMF->CheckPermission(_T("FM.100.100")))

    {
        ShowMessageBox(_T("Bệnh nhân đã kết thúc hồ sơ phòng khám, không tạo ")
                       _T("được phiếu QR"));
        return;
    }

    if (vIStatus == _T("T") && !pMF->CheckPermission(_T("FM.100.100")))

    {
        ShowMessageBox(_T("Bệnh nhân đã kết thúc hồ sơ tại khoa, không tạo ")
                       _T("được phiếu QR"));
        return;
    }

    CHMSBankInvoiceInfoDialog dlg(this, VM_NONE);
    if (m_nDocumentNo <= 0)
        return;

    dlg.m_nDocumentNo = m_nDocumentNo;
    dlg.m_szDepartmentKey = pMF->m_szDept;
    if (dlg.DoModal() == IDOK)
    {
    }

    OnInvoiceListLoadData();
}

#include "HMSApprovalReceiptDialog.h"
void CHMSPatientProfiles::OnBankInvoiceInfo2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();	
	if(m_nDocumentNo <=0)
		return;

	CHMSApprovalReceiptDialog dlg(this);		
	dlg.m_nDocumentNo = pMF->m_nDocumentNo;
		//dlg.m_nInvoiceNo = nInvoiceNo;
		if(dlg.DoModal() ==IDOK)
		{
			//GetDataToScreen();
		}
	
}





void CHMSPatientProfiles::CreateRefundReceipt(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	
	if(m_nDocumentNo < 0)
		return;

	/*if(IsDischargePayment())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return;
	}*/
	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.06"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.06"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}


	CHMSFeeRefundDialog dlg(this);
	dlg.m_nPID = m_nPID;
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nPaymentNo = 0;
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK){
		OnInvoiceListLoadData();
	}
}


void CHMSPatientProfiles::CreatePaymentVoucher(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(m_nDocumentNo < 0)
		return;

	//if(IsDischargePayment())
	//	return;


	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.06"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.06"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	
	/*

	CHMSFeeRefundDialog dlg(this);
	dlg.m_nPID = m_nPID;
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nPaymentNo = 0;
	dlg.SetMode(VM_ADD);
	dlg.m_bSalaryInput = true;
	if(dlg.DoModal() == IDOK){
		OnInvoiceListLoadData();
	}
	*/
	bool bRefund = false;
	if(!pMF->IsInPatient() && pMF->m_szStatus == _T("T"))
	{
			double nDeposit;
			CString szSQL;
			CRecord rs(&pMF->m_db);
			szSQL.Format(_T("SELECT sum(hfe_amount-hfe_patpaid) as deposit ") \
				_T("FROM hms_fee_deposit ") \
				_T("WHERE hfe_docno=%ld and hfe_status in('O','P') "), m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("deposit"), nDeposit);
				if(nDeposit > 0)
				{
					bRefund = true;
					CHMSFeeRefundDialog dlg(this);
					dlg.m_nPID = pMF->m_nPatientNo;
					dlg.m_nDocumentNo = m_nDocumentNo;
					dlg.m_nAmount = nDeposit;
					dlg.m_szPaymentTypeKey = _T("06");
					dlg.m_bTerminated = true;
					dlg.m_szType = _T("F");
					dlg.m_szDescription.Format(_T("Chi tiền khám bệnh theo yêu cầu"));
					if(dlg.DoModal() == IDOK)
					{

						szSQL.Format(_T("HMS_FEE_REFINVOICE_CREATE(%ld, %ld) "), m_nDocumentNo, dlg.m_nInvoiceNo);
						int ret = str2int(pMF->ExecDML(szSQL));
						if(ret > 0)
						{
							OnInvoiceListLoadData();
							pMF->PrintRefund(dlg.m_nInvoiceNo, false);

						}
					}
					
				}

			}
	}
	
	
	if(!bRefund)
	{

		_tprintf(_T("\r\n%s"), pMF->GetObjectType());	
		
			if(!pMF->CheckPermission(_T("FM.100.09")))
		{
			ShowMessageBox(_T("Liên hệ phòng tài chính để sử dụng chức năng này!"), 0);
			return;
		}
		CHMSPatientPaymentOrderDialog dlg(this, m_nDocumentNo, VM_ADD);
		if(dlg.DoModal() == IDOK)
		{
			OnInvoiceListLoadData();
		}
	}

}

void CHMSPatientProfiles::CreateRemissionReceipt(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	if(m_nDocumentNo <= 0)
		return;

	if(IsDischargePayment())
		return;

	/*if(m_nTotalPayable <= 0)
		return;*/

	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.05"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.05"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}	
	CHMSFeeDiscountDialog dlg(this);	
	dlg.m_nPID = m_nPID;
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nReceiptNo = 0;	
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK){
		if(dlg.m_bPrintReceipt){
			
		}
		OnInvoiceListLoadData();
	}
}

void CHMSPatientProfiles::CreateRefundFeeReceipt()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hfe_invoiceno FROM hms_fee_refund WHERE hfe_docno=%ld and hfe_status='O' "), 
		m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("Refund receipt not found"));
		return;
	}
	long nInvoiceNo;
	rs.GetValue(_T("hfe_invoiceno"), nInvoiceNo);
	CHMSFeeRefundDetailDialog dlg(this, VM_ADD);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = nInvoiceNo;
	if (dlg.DoModal() == IDOK)
	{
		OnInvoiceListLoadData();
	}
}
void CHMSPatientProfiles::OnPrintPrescription(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(m_nDocumentNo <= 0)
		return;

	szSQL.Format(_T("SELECT hpo_orderid, hpo_roomid ") \
		_T("FROM hms_pharmaorder ") \
		_T("WHERE hpo_docno=%ld AND hpo_ordertype in('P','M') ") \
		_T(" and hpo_orderstatus in('S','A') ") \
		_T(" and hpo_doctype='PPO' ") \
		_T(" and hpo_payment='P' ") \
		_T("ORDER BY hpo_orderid "), m_nDocumentNo);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if(rs.IsEOF())
	{		
		//ShowMessageBox(_T("Vào đấy"));
		return;
	}

	//if(pMF->m_szPrintDrugDelivery == _T("Y"))
	{
		while(!rs.IsEOF()){
			long nOrderID;
			rs.GetValue(_T("hpo_orderid"), nOrderID);
			pMF->PrintDrugDelivery(nOrderID, pMF->m_bAutoPrint);
			//pMF->PrintDrugDelivery(nOrderID, true, false);
			rs.MoveNext();
		}

	}
	/*else
	{		
		while(!rs.IsEOF()){
			long nOrderID;
			rs.GetValue(_T("hpo_orderid"), nOrderID);
			pMF->PrintPrescription(nOrderID, false, pMF->m_bAutoPrint);		
			rs.MoveNext();
		}
	}*/
}

void CHMSPatientProfiles::OnPrintHemaReceipt(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return;
	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));
	pMF->PrintHemaReceipt(nInvoiceNo);

}

#include "HMSReceiptDialog.h"

void CHMSPatientProfiles::OnReceipt(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, hd_status, hcr_status, hd_outpatient;


	//1. Kiem tra quyen duoc phep thanh toan
	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.01"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.01"))){
	//	ShowMessageBox(_T("Permission Denined."), 0);
	//	return;
	}


	
	if(m_nTotalPayable <= 0)
	{
	
		if(pMF->m_szStatus == _T("T"))
		{
			double nDeposit = 0;
			szSQL.Format(_T("SELECT sum(hfe_amount-hfe_patpaid) as deposit ") \
					_T("FROM hms_fee_deposit ") \
					_T("WHERE hfe_docno=%ld and hfe_status in('O','P') "), m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("deposit"), nDeposit);
			}

			if(nDeposit > 0)
			{
				CString tmpStr;
				tmpStr.Format(_T("Số dư tạm gửi = [%.2f]. Click chuột phải tạo phiếu chi khác để trả lại tiền thừa cho bệnh nhân"), nDeposit);
				ShowMessageBox(tmpStr);
			}
			else
			{
				ShowMessageBox(_T("Không có mục phí nào để thu"));
			}
		}
		else
		{
			ShowMessageBox(_T("Không có mục phí nào để thu"));

		}

		return;
	}
	szSQL.Format(_T("SELECT su_deptid as deptid ") \
		_T("FROM sys_user WHERE su_userid = '%s' "), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("deptid"), tmpStr);
	if(tmpStr != _T("PTTYC"))
	{

		//KIEM TRA NEU BENH NHAN CO THẺ CHƯA THU HỒI SẼ HIỆN LÊN CÂU THÔNG BÁO
		szSQL.Format(_T(" select count(*)") \
					_T("        from Hms_Fee_Extra e") \
					_T("        left join hms_fee f ON (e.hfe_docno=f.hfe_docno AND e.Hfe_Fee_Extra_Id=f.hfe_orderid)") \
					_T("        where e.Hfe_Docno=%ld") \
					_T("        and e.hfe_treattime =%ld") \
					_T("        and hfe_itemid in (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE' and  ss_vndesc in ('GNLT','GNNOLPB'))") \
					_T("        and f.hfe_status <> 'P'") \
					_T("        and e.hfe_status not in  ('R', 'M', 'C')") \
					_T("        and f.hfe_deptid <> 'CTXH'") \
					_T("        order by e.Hfe_Orderdate"), m_nDocumentNo, m_nTreattime);
		rs.ExecSQL(szSQL);
		//_msg(_T("%s"),szSQL);
		if(rs.GetIntValue() > 0)
		{
			ShowMessageBox(_T("Bệnh nhân có gói dịch vụ chưa trả thẻ, vui lòng trả thẻ trước khi thanh toán"));
			return;
		}
	}
	//Nếu có phiếu lĩnh máu của khoa C1.3 chưa duyệt không cho phép thu tiền hoặc duyệt thanh toán

	szSQL.Format(_T(" SELECT count(*) from HMS_TESTORDERLINE") \
		_T(" LEFT JOIN hms_testorder ON (hpcl_docno=hpc_docno AND hpcl_orderid=hpc_orderid)") \
		_T(" LEFT JOIN hms_fee_list ON (hpcl_itemid = hfl_feeid)") \
		_T(" where hpcl_docno=%ld ") \
		_T(" and hpc_status <> 'T' AND HPC_DEPTID = 'C1.3' ") \
		_T(" and NVL(hfl_bloodfee, 'X')='Y' AND hpc_payment NOT IN ('P', 'C') AND HFE_REFSTATUS NOT IN ('P', 'C')"), pMF->m_nDocumentNo);

		rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);

		if (rs.GetIntValue() > 0)
		{
			ShowMessageBox(_T("Bệnh nhân có phiếu lĩnh chế phẩm máu được chỉ định tại khoa C1.3 chưa được duyệt, không thể thu phí của bệnh nhân! "), MB_ICONERROR | MB_OK);
			return;	
		}

	//Thêm phần thông báo số đơn thuốc mua về của bệnh nhân mà chưa thanh toán để dễ kiểm soát
	szSQL.Format(_T("HMS_COUNT_PHARMAORDER(%ld) "), m_nDocumentNo);
	int vcount = str2int(pMF->ExecDML(szSQL));
	if(vcount > 0)
	{
		CString szMsg, tmpStr;
		TranslateString(_T("Bệnh nhân có [%d] đơn ngoại trú mang về, cần chú ý thu tiền và in đơn thuốc"), tmpStr);
		szMsg.Format(tmpStr, vcount);
		ShowMessageBox(szMsg, MB_OK);
		
	}
	//Phân loại bệnh nhân được hưởng 5 năm liên tục

	/*CString szIsover5yearpat;
	
	szSQL.Format(_T("SELECT ISOVER5YEARPATIENT(%ld) as Isover5yearpat FROM dual"), m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("Isover5yearpat"), szIsover5yearpat);
	
	if (szIsover5yearpat == _T("Y"))
	{
		ShowMessageBox(_T("Đối tượng có thời gian tham gia bảo hiểm y tế 05 năm liên tục trở lên! Lưu ý check lại giấy miễn cùng chi trả"));	
	}*/

	//THEM FUNCTION CHECK TRUOC KHI THU PHI
	szSQL.Format(_T("HMS_CHECKBF_PAYMENT(%ld, %d, '%s') "),
		m_nDocumentNo, pMF->m_nInpatient, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("Không cho phép thu phí. "));
		return;
	}

	CHMSPaymentReceiptDialog dlg(pMF);
			
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = 0;
	dlg.SetMode(VM_ADD);

	if(dlg.DoModal() == IDOK)
	{
		pMF->m_nInvoiceNo = dlg.m_nInvoiceNo;
		//	pMF->PrintInvoice(dlg.m_nInvoiceNo);
		if(!pMF->IsInPatient())
		{
			if(pMF->m_szStatus == _T("T"))
			{
				CHMSPrintSheet dlg(this);
				dlg.DoModal();
			}
		}
		GetDataToScreen();
	}
	


	//2. Kiem tra neu benh nhan co tien tam ung
		//a. Neu ho so da ket thuc thi tao phieu hoan ung
		//b. Tao phieu thu phi
		//Neu ho so kham chua ket thuc thi khong cho phep thu.
	//3. Thu phi
	//4. In phieu thu


	/*
	// Kiem tra neu benh nhan Ngoai tru co tam ung va hd_status <> T thi ko cho thanh toan
	szSQL.Format(_T("SELECT hd_status FROM hms_doc WHERE hd_docno=%ld"), m_nDocumentNo);	
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{			
		long nDepositamt;
		rs.GetValue(_T("hd_status"), hd_status);
		szSQL.Format(_T("SELECT hfe_amount-hfe_patpaid as deposit ") \
			_T("FROM hms_fee_deposit ") \
			_T("WHERE hfe_docno = %d and hfe_type ='A' and hfe_status<>'C' "), m_nDocumentNo); 
		rs.ExecSQL(szSQL);

		rs.GetValue(_T("deposit"), nDepositamt);
		if (hd_status != _T("T") && nDepositamt > 0 )
		{
			ShowMessageBox(_T("Do not allow discharge Receipt. This patient file not terminated."), 0);
			return;
		}
	}

	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C") || pMF->GetObjectType() == _T("D"))
	{		
		szSQL.Format(_T("SELECT hd_status, hcr_status, hd_outpatient FROM hms_doc LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) WHERE hd_docno=%ld"), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return;
		rs.GetValue(_T("hd_status"), hd_status);
		rs.GetValue(_T("hd_outpatient"), hd_outpatient);
		rs.GetValue(_T("hcr_status"), hcr_status);
		
		if(hd_status != _T("T") && pMF->m_nInpatient == 0)
		{
			ShowMessageBox(_T("Do not allow discharge Receipt. This patient file not terminated."), 0);
			return;
		}
		if(hcr_status != _T("T") && pMF->m_nInpatient == 1)
		{
			ShowMessageBox(_T("Do not allow discharge Receipt. This patient file not terminated."), 0);
			return;
		}
	}
	

	if(m_wndList.GetItemCount() <= 0)
	{		

		szSQL.Format(_T("SELECT sum(hfe_amount-hfe_patpaid) as deposit ") \
			_T("FROM hms_fee_deposit ") \
			_T("WHERE hfe_docno=%ld and hfe_type='A' and hfe_status<>'C' "), m_nDocumentNo);

		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return;
		double nDeposit;
		rs.GetValue(_T("deposit"), nDeposit);
		if(nDeposit > 0)
		{
		
				CHMSFeeRefundDialog dlg(this);
				dlg.m_nPID = pMF->m_nPID;
				dlg.m_nDocumentNo = m_nDocumentNo;
				dlg.m_nInvoiceNo = 0;
				dlg.m_nAmount = nDeposit;
				dlg.SetMode(VM_ADD);
				if(dlg.DoModal() == IDOK){
					OnInvoiceListLoadData();
				}
				return;
		}
	}

	else
	{
			CHMSPaymentReceiptDialog dlg(pMF);
			dlg.m_nDocumentNo = m_nDocumentNo;
			dlg.m_nInvoiceNo = -1;
			dlg.SetMode(VM_ADD);
			if(dlg.DoModal() == IDOK)
			{
				OnInvoiceListLoadData();
				OnListLoadData();
			}
	}
*/
}

void CHMSPatientProfiles::OnPrintReceiptReceipt(){
}




void CHMSPatientProfiles::LoadData(long nDoc)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_nDocumentNo = nDoc;
	pMF->m_szServiceCode.Empty();
	GetDataToScreen();
	pMF->SetActivePane(0);

	if(pMF->IsInPatient())
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT count(*) FROM hms_fee_approve WHERE hfe_docno = %ld and hfe_status='A' "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			m_wndApproval.EnableWindow(TRUE);
		}
		m_wndApproval.EnableWindow(TRUE);
	}

	OnWarning();
	OnRecacDeposit();
	
}

BOOL CHMSPatientProfiles::PreTranslateMessage(MSG* pMsg)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F2)
	{
		if(m_wndPayment.IsWindowEnabled())
			OnPaymentSelect();
		return TRUE;
	}

	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F3)
	{
		if(m_wndApproval.IsWindowEnabled())
			OnApprovalSelect();
		return TRUE;
	}

	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F6)
	{
		
		OnPrintSummarizeExaminationSheet();
		if (m_wndDocumentNo.IsWindowEnabled())
		{
			if (pMF->CheckPermission(_T("01.17")))
			{
				m_wndDocumentNo.SetSel(0, -1);
			}
			else
			{
				m_wndDocumentNo.SetSel(4, m_wndDocumentNo.GetWindowTextLength());
			}
		}
		return TRUE;
	}

	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F7)
	{
		OnPrintTreatment();
		if (m_wndDocumentNo.IsWindowEnabled())
		{
			//m_wndDocumentNo.SetFocus();
			if (pMF->CheckPermission(_T("01.17")))
			{
				m_wndDocumentNo.SetSel(0, -1);
			}
			else
			{
				m_wndDocumentNo.SetSel(4, m_wndDocumentNo.GetWindowTextLength());
			}
		}
		return TRUE;
	}

	return CGuiView::PreTranslateMessage(pMsg);
}


void CHMSPatientProfiles::OnPrintSummarizeExaminationSheet(bool bPreview)
{
	if(m_nDocumentNo <= 0)
		return;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();	
	
	pMF->PrintSummarizeExaminationSheet(m_nDocumentNo, bPreview, true, false);
}

int CHMSPatientProfiles::OnPrintTreatment()
{
	if (m_nDocumentNo <= 0)
		return -1;
	if (!m_bPrintAppExam)
		return 0;

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->PrintTreatment(m_nDocumentNo);

	return 1;
}

// Ket thuc ho so de tao duc lieu hoa don dien tu( Bn  mua thuoc tai quay, tao phi khac)
int CHMSPatientProfiles::OnKethucHS()
{
	if (m_nDocumentNo <= 0)
		return -1;
	

	int nSel = m_wndTreatmentList.GetCurSel();
	if (nSel < 0)
		return -1;

	CString szDeptID;

	szDeptID = m_wndTreatmentList.GetItemText(nSel, 4);

	if(szDeptID.GetLength() > 0)
		return -1;

	if(ShowMessageBox(_T("Tác vụ này sẽ kết thúc hồ sơ để tạo hóa đơn điện tử?. Bạn có chắc chắn muốn thực hiện không?"), MB_ICONWARNING|MB_YESNO) == IDNO)
		return -1;		

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_doc SET hd_status = 'T' WHERE hd_docno = %ld AND hd_status ='O' "), m_nDocumentNo);
	pMF->ExecSQL(szSQL);

	OnTreatmentListLoadData();
	OnRoomListLoadData();

	return 1;
}


int CHMSPatientProfiles::OnModifyItem()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	/*if(m_wndList.GetItemCount() <= 0)
		return 0;*/
	if(!pMF->CheckPermission(_T("20.11")))
	{
		ShowMessageBox(_T("Không có quyền thao tác. Liên hệ admin cấp quyền 20.11 để được sử dụng chức năng này"), 0);
		return 0;
	}
	else
	{
	CHMSModifyItemDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();	
	}}
	
	return 0;
}

int CHMSPatientProfiles::OnUpdateExtInsUnpaid()
{
	/*if(m_wndList.GetItemCount() <= 0)
		return 0;*/
	if(m_szIsExtIns != _T("Y"))
		return 0;

	
	
	return 0;
}

void CHMSPatientProfiles::CreateList()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(pMF->m_szObjectTypeGroup == _T("S"))
	{
		m_wndList.SetColumnWidth(1, 250);
		m_wndList.SetColumnWidth(4, 80);
		m_wndList.SetColumnWidth(5, 80);
		m_wndList.SetColumnWidth(6, 0);
		m_wndList.SetColumnWidth(7, 0);
		m_wndList.SetColumnWidth(8, 0);
		m_wndList.SetColumnWidth(9, 0);
		m_wndList.SetColumnWidth(10, 0);
		m_wndList.SetColumnWidth(11, 0);
	}
	else
	{
		m_wndList.SetColumnWidth(1, 215);
		m_wndList.SetColumnWidth(4, 0);
		m_wndList.SetColumnWidth(5, 0);
		m_wndList.SetColumnWidth(6, 80);
		m_wndList.SetColumnWidth(7, 80);
		m_wndList.SetColumnWidth(8, 80);
		m_wndList.SetColumnWidth(9, 80);
		m_wndList.SetColumnWidth(10, 80);
		m_wndList.SetColumnWidth(11, 80);
	}
}
#include "HMSTerminateDocument.h"
int CHMSPatientProfiles::OnTerminateDocumentInformation(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->GetObjectType() != _T("S"))
	{
		return 0;
	}

	CHMSTerminateDocument dlg(this);
	dlg.DoModal();
	
	return 0;
}
int CHMSPatientProfiles::OnUpdateOver5YearsInformation()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szDepartmentKey = pMF->m_UserInfo.su_deptid;
	ShowMessageBox(_T("Chức năng này đã chuyển về các để các khoa thực hiện. Xin cảm ơn!"));
	return 0;
	/*if(!pMF->CheckPermission(_T("20.13")))
	{
		ShowMessageBox(_T("Không có quyền thao tác. Liên hệ admin cấp quyền 20.13 để được sử dụng chức năng này"), 0);
		return 0;
	}*/
	if (szDepartmentKey != _T("PTC"))
	{
		ShowMessageBox(_T("User không thuộc phòng tài chính!"), 0);
		return 0;
	}
	else if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
	{	
		CHMSUpdateOver5Year dlg(this);
		dlg.DoModal();	
	}
	else
	{
	
	}
	return 0;
}
int CHMSPatientProfiles::OnUpdateHealthObject()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	UpdateData(true);

	if(m_nDocumentNo <= 0)
		return 0;

	if(!pMF->CheckPermission(_T("40.02")))
	{
		ShowMessageBox(_T("Không có quyền thao tác. Liên hệ admin cấp quyền 40.02 ở viện phí để được sử dụng chức năng này"), 0);
		return 0;
	}

	szSQL.Format(_T(" SELECT hee_contract_id") \
	_T("       FROM hms_exm_employee left join hms_doc ON (hee_docno=hd_docno)") \
	_T("       WHERE hee_docno = %ld"), pMF->m_nDocumentNo);

	/*szSQL.Format(_T(" SELECT count(*)") \
	_T("       FROM hms_doc") \
	_T("       WHERE hd_docno = %ld AND NVL(HD_HEALTHEXAM, 'N') = 'Y' "), pMF->m_nDocumentNo);*/

	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() <= 0)
	{
		ShowMessageBox(_T(" Bệnh nhân không thuộc gói hợp đồng nào cả, không cập nhật được!"));
		return 0;
	}
	
	int ret = ShowMessageBox(_T(" Chức năng này sẽ cập nhật lại thành bệnh nhân khám sức khỏe tương ứng với gói, bạn chắc chắn chứ? "),MB_YESNO);
		if(ret == IDNO)
		return -1;
		else
	pMF->BeginTransaction();
	{
		szSQL.Format(_T("UPDATE hms_doc SET HD_HEALTHEXAM ='Y', HD_UPDATEDBY = '%s',  HD_UPDATEDDATE = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') where hd_docno = %ld AND HD_OBJECT='7' "), pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->m_nDocumentNo );
	    pMF->ExecSQL(szSQL);
		
		szSQL.Format(_T("UPDATE hms_testorder set HPC_INPACKAGE='Y', HPC_UPDATEDBY = '%s',  HPC_UPDATEDDATE = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') where hpc_docno = %ld AND HPC_OBJECT='7' and hpc_class='E' AND HPC_DEPTID='TYC' "), pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->m_nDocumentNo );
	    pMF->ExecSQL(szSQL);

		szSQL.Format(_T("UPDATE HMS_PACSORDER set HPC_INPACKAGE='Y', HPC_UPDATEDBY = '%s',  HPC_UPDATEDDATE = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') where hpc_docno = %ld AND HPC_OBJECT='7' AND HPC_DEPTID='TYC' and hpc_class='E' "), pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->m_nDocumentNo );
	    pMF->ExecSQL(szSQL);
	}
	pMF->Commit();
	ShowMessageBox(_T(" Đã cập nhật, Vui lòng kiểm tra lại!"));
	SetMode(VM_VIEW);	
	return 0;	
}

#include "HMSInsuranceCardSettingDialog.h"
int CHMSPatientProfiles::OnEditCardInformation()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szCurrentUser;
	szCurrentUser = pMF->GetCurrentUser();
	if (m_szCardNo.IsEmpty())
		return -1;	

	if (!pMF->CheckPermission(_T("01.10")))
	{
		ShowMessageBox(_T("Permission Denined."),MB_ICONWARNING);
		return -1;
	}
	if (szCurrentUser.CompareNoCase(_T("admin")) != 0 )
	{
		ShowMessageBox(_T("Only a system administrator perform new tasks on"),MB_ICONWARNING);
		return -1;
	}

	if(pMF->IsInPatient())
	{
		szSQL.Format(_T("SELECT count(*) ") \
			_T("FROM hms_fee_approve ") \
			_T("WHERE hfe_docno=%ld and hfe_status in('A','P') and hfe_treattime =0 "), m_nDocumentNo);
		
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			ShowMessageBox(_T("Bệnh nhân đã xác nhận viện phí trong khoa. Không cho phép sửa thông tin"));
			return -1;
		}
	}
	
	//CHMSInsregDateDialog dlg(this);
	CHMSInsuranceCardSettingDialog dlg(this);
	//dlg.m_szApplyDate = m_szExamDate.Left(10);
	dlg.m_nPatientNo = pMF->m_nPatientNo;
	dlg.m_nDocumentNo = m_nDocumentNo;
	//dlg.m_nCardIdx = m_nCardIdx;
	/*if(m_szOffLine == _T("Y"))
		dlg.m_bOffLine = TRUE;
	else
		dlg.m_bOffLine = FALSE;*/
	szSQL.Format(_T("SELECT hd_insregdate FROM hms_doc WHERE hd_docno =%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if( !rs.IsEOF())
	{
		rs.GetValue(_T("hd_insregdate"), dlg.m_szApplyDate);
	}
	if(dlg.DoModal() == IDOK)
	{
		CString szEvent, szDesc;
		//szEvent.Format(_T(""));
		//szDesc.Format(_T(""));
		pMF->SystemLog(szEvent, szDesc);
		GetDataToScreen();
		
	}
	
	return 0;
}


CString CHMSPatientProfiles::GetPaymentDepartments(){
	CString szDeptID, szDepts;

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_szDepartments.Empty();
	pMF->m_szDeptPayment.Empty();

	for(int i =0; i < m_wndTreatmentList.GetItemCount(); i++)
	{
		if (m_wndTreatmentList.GetCheck(i))
		{
			szDeptID = m_wndTreatmentList.GetItemText(i, 4);
			if (!szDepts.IsEmpty())
				szDepts += _T(",");

			szDepts.AppendFormat(_T("'%s'"), szDeptID);	

			if(!pMF->m_szDepartments.IsEmpty())
				pMF->m_szDepartments += _T(",");

			pMF->m_szDepartments.AppendFormat(_T("[%s]"), szDeptID);
			pMF->m_szReceiptDeptID = szDeptID;
		}
	}

	szDepts.Replace(_T("["), _T("\'"));
	szDepts.Replace(_T("]"), _T("\'"));
	pMF->m_szDeptPayment = szDepts;
	return szDepts;
}

#include "HMSSetupRegimeFeeDialog.h"

void CHMSPatientProfiles::CreatePoliciesPayable()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	long nInvoiceNo = 0;
	bool bCheck = false;
	if(pMF->GetObjectType() == _T("S") ||  pMF->GetObjectType() == _T("C") 
		|| (pMF->GetObjectType() == _T("I") && pMF->m_szCardNo.Left(2)!=_T("QN")))
	{
		return;
	}


	CHMSSetupRegimeFeeDialog dlg(this);

	dlg.m_nDocumentNo = m_nDocumentNo;
	
	dlg.m_nPatientNo = pMF->m_nPatientNo;
	dlg.m_szDate = pMF->GetSysDateTime();
	dlg.m_szStaff = pMF->GetCurrentUser();
	if (dlg.DoModal() == IDOK)
	{
		
		
	}
	RecalcAmount();
}

void CHMSPatientProfiles::OnInsApproveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (pMF->m_nInpatient == 0)
	{
		ShowMessageBox(_T("Permission Denied."));
		return;
	}
	

	CHMSInsuranceApprovalDialog dlg(pMF);
	dlg.m_nDocumentNo = m_nDocumentNo;
	if (dlg.DoModal() == IDOK)
	{
		GetApproveInformation();
	}
	
	OnInvoiceListLoadData();
	OnListLoadData();

	if (m_wndDocumentNo.IsWindowEnabled())
	{
		m_wndDocumentNo.SetFocus();
		if (pMF->CheckPermission(_T("01.17")))
		{
			m_wndDocumentNo.SetSel(0, -1);
		}
		else
		{
			m_wndDocumentNo.SetSel(4, m_wndDocumentNo.GetWindowTextLength());
		}
	}
	
} 

int CHMSPatientProfiles::CreateRefundInvoice()
{
	int nSel = m_wndInvoiceList.GetCurSel();
	if (nSel < 0)
		return -1;

	CString szType;
	szType = m_wndInvoiceList.GetItemText(nSel, 0);

	if (szType != _T("A"))
		return -2;

	CreateRefundReceipt();

	return 0;
}

void CHMSPatientProfiles::RecalcAmount(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_nOtherPaid = 0;
	if(m_wndList.GetItemCount() <= 1)
		return;
	if(pMF->IsInPatient())
	{
		szSQL.Format(_T("SELECT max(htr_treattime) FROM hms_treatment_record WHERE htr_docno=%ld"), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		m_nTreattime = rs.GetIntValue();
	}
	if(m_bInPackage && m_szInfertility == _T("Y"))
	{
		szSQL.Format(_T("SELECT sum(hfe_amount-hfe_patpaid)  as deposit ") \
			_T(" FROM hms_fee_deposit ") \
			_T(" WHERE hfe_docno=%ld and hfe_status in('O','P')  and nvl(hfe_infertility,'N') in('I','P') "), m_nDocumentNo);
	}
	else
	{
		szSQL.Format(_T("SELECT sum(hfe_amount-hfe_patpaid)  as deposit ") \
			_T(" FROM hms_fee_deposit ") \
			_T(" WHERE hfe_docno=%ld and hfe_status in('O','P')  and nvl(hfe_infertility,'N') not in('I','P') "), m_nDocumentNo);
	}
_tprintf(_T("\r\n%s"), szSQL);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("deposit"), m_nTotalDeposit);
	}
	
	szSQL.Format(_T("SELECT sum(hfe_total_amount)  as policy, sum(hfe_eat_amount) as eat_amount ") \
		_T("FROM hms_fee_sold WHERE hfe_docno=%ld  and (hfe_treattime=0 or hfe_treattime=%d)"), m_nDocumentNo, m_nTreattime);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("policy"), m_nTotalPolicy);
		rs.GetValue(_T("eat_amount"), m_nEatAmount);
	}
	m_nTotalPolicy -= m_nEatAmount;
	m_nTotalDeposit += m_nEatAmount;

	szSQL.Format(_T("SELECT sum(hfe_amount)  as discount ") \
		_T("FROM hms_fee_discount ") \
		_T("WHERE hfe_docno=%ld and hfe_status='O'  and (hfe_treattime=0 or hfe_treattime=%d)"), m_nDocumentNo, m_nTreattime);
	rs.ExecSQL(szSQL);

	m_nTotalDiscount = 0;
	if(!rs.IsEOF()){
		rs.GetValue(_T("discount"), m_nTotalDiscount);
	}

	m_nSumAB = m_nTotalDeposit+m_nTotalPolicy;


	long nInvoiceNo;
	if(pMF->IsInPatient())
	{
		szSQL.Format(_T("SELECT hfe_invoiceno FROM hms_fee_approve ") \
				_T("WHERE hfe_docno=%ld and hfe_status ='A' "),
		m_nDocumentNo);
		rs.ExecSQL(szSQL); 
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hfe_invoiceno"), nInvoiceNo);
		}
		if(nInvoiceNo > 0)
		{
		szSQL.Format(_T("SELECT * " ) \
			_T("FROM hms_fee_invoice " ) \
			_T("WHERE hfe_docno=%ld and hfe_invoiceno=%ld "), 
			m_nDocumentNo, nInvoiceNo);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				double nOtherPaid = 0;
				rs.GetValue(_T("hfe_otherpaid"), nOtherPaid);
				m_nTotalDiscount += nOtherPaid;
				m_nOtherPaid = nOtherPaid;

			}

		}


	}
	if(m_szIsExtIns == _T("Y"))
	{
		szSQL.Format(_T("HMS_EXTINS_GET_AVAIABLE_AMOUNT(%ld,'%s') "), pMF->m_nDocumentNo,  pMF->IsInPatient()?_T("N"):_T("Y"));
		double extins_limit_amount = str2double(pMF->ExecDML(szSQL));
	//Tinh so tien bao viet chi tra
		szSQL.Format(_T("HMS_EXTINS_GET_PATDEBT_AMOUNT(%ld,'%s') "), pMF->m_nDocumentNo,  pMF->IsInPatient()?_T("N"):_T("Y"));
		double extins_patdebt = str2double(pMF->ExecDML(szSQL));
		m_nTotalPayment = extins_patdebt;
		m_nTotalDiscount += extins_limit_amount;
		
	////////////////////////////////////////////
		
		m_nTotalPayment -= (m_nSumAB);
	}
	else
	{
		m_nTotalPayment = m_nTotalPayable + m_nOtherPaid -(m_nTotalDiscount+m_nSumAB);
	}
	//if(m_nTotalPayment <= 0)
	//{
	//	//check permission
	//	m_wndPrescriptionApprove.EnableWindow(TRUE);
	//}
	//else
	//{
	//	m_wndPrescriptionApprove.EnableWindow(FALSE);
	//}
	UpdateData(FALSE);
}


void CHMSPatientProfiles::GetApproveInformation(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	m_szApproveStatus.Empty();

	szSQL.Format(_T("SELECT * FROM hms_fee_approve WHERE hfe_docno=%ld and hfe_status IN('A','P')  "), m_nDocumentNo);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		long nInsInvoiceNo;
		CString szDesc, szLabel;
		rs.GetValue(_T("hfe_invoiceno"), nInsInvoiceNo);
		TranslateString(_T("Invoice No"), szLabel);

		szDesc.Format(_T("%s: [%ld] "), szLabel, nInsInvoiceNo);
		rs.GetValue(_T("hfe_approvedate"), tmpStr);

		TranslateString(_T("Date"), szLabel);
		szDesc.AppendFormat(_T("%s: [%s] "), szLabel, CDate::Convert(tmpStr.Left(10), yyyymmdd, ddmmyyyy));

		rs.GetValue(_T("hfe_approveby"), tmpStr);
		TranslateString(_T("Approved By"), szLabel);
		szDesc.AppendFormat(_T("%s: [%s] "), szLabel, tmpStr);
		m_wndDesc.SetWindowText(szDesc);
		rs.GetValue(_T("hfe_status"), m_szApproveStatus);

		rs.GetValue(_T("hfe_ismultiinvoice"), tmpStr);

		if(tmpStr == _T("Y"))
		{
			m_bMultiInvoice = true;
			m_wndPayment.EnableWindow(TRUE);
		}
		
	}
	else
	{
		if(pMF->IsInPatient())
		{
			//ShowMessageBox(_T("Bệnh nhân chưa được xác nhận chi phí trong khoa"));
			m_wndDesc.SetWindowText(_T("Chưa xác nhận chi phí tại khoa"));
		}
	
	}
}


void CHMSPatientProfiles::OnPrescriptionApproveSelect()
{
}


void CHMSPatientProfiles::PrintSummaryCost()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->PrintAllServiceDischargeReceipt(m_nDocumentNo);
}


void CHMSPatientProfiles::CreatePopupMenus()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_arEvent.RemoveAll();
	

	//Phieu tam thu cua benh nhan
	AddEvent(1, _T("Create Deposit Receipt\tCtrl+A"), _CreateDepositReceiptFnc, 0, 'A', VK_CONTROL);
	AddEvent(0, _T("-"), NULL);
    AddEvent(16, _T("Tạo phiếu thanh toán QR (tạm gửi, thanh toán ra viện)"),
             _CreatePaymentQROnlineFnc);
	AddEvent(0, _T("-"), NULL);
    AddEvent(17,
             _T("Tạo phiếu QR TT dịch vụ (đối tượng DV ngoại trú, IVF, nhà ")
             _T("lưu trú, thuốc mua ngoài)"),
             _CreatePaymentQROnline2Fnc);
    AddEvent(0, _T("-"), NULL);
	//AddEvent(0, _T("-"), NULL);
//Phieu hoan tra lai tien cho benh nhan
	
//	AddEvent(2, _T("Create Refund Receipt\tCtrl+R"), _CreateRefundReceiptFnc, 0, 'R', VK_CONTROL);

//Phieu mien giam cho benh nhan
	AddEvent(3, _T("Tạo phiếu miễn giảm tổng\tCtrl+D"), _OnCreateRemissionReceiptFnc, 0, 'D', VK_CONTROL);
	AddEvent(0, _T("-"), NULL);

	AddEvent(15, _T("Tạo phiếu thu khác"), _CreateOtherReceiptVoucherFnc);
	AddEvent(0, _T("-"), NULL);
	AddEvent(20, _T("Tạo phiếu chi khác"), _CreatePaymentVoucherFnc);
	AddEvent(0, _T("-"), NULL);
	AddEvent(12, _T("Cập nhật thẻ BH đủ 5 năm"), _OnUpdateOver5YearsInformationFnc);
	AddEvent(0, _T("-"), NULL);
	AddEvent(13, _T("Cập nhật lại thành bệnh nhân khám sức khỏe "), _OnUpdateHealthObjectFnc);
	AddEvent(0, _T("-"), NULL);	
	

	if(pMF->IsInPatient() == 0)
	{
		if(pMF->m_bPrintSummarize)
		{
//			AddEvent(0, _T("-"), NULL);
			AddEvent(4, _T("Print Summarize Examination Sheet\tF6"), _OnPrintSummarizeFnc);

			AddEvent(0, _T("-"), NULL);
			AddEvent(5, _T("Print Prescription\tF5"), _OnPrintPrescriptionFnc, 0, VK_F5);

		}
		else
		{
//			AddEvent(0, _T("-"), NULL);
			AddEvent(6, _T("Create Pharma Refund Receipt\tCtrl+R"), _OnCreateRefundFeeReceiptFnc, 0, 'R', VK_CONTROL);
		}

		AddEvent(0, _T("-"));
		AddEvent(7, _T("Print Treatment"), _OnPrintTreatmentFnc);

		AddEvent(0, _T("-"));
		AddEvent(8, _T("Edit insurance information"), _OnEditCardInformationFnc);
		AddEvent(0, _T("-"));
		AddEvent(9, _T("Terminate Document"), _OnTerminateDocumentInformationFnc);
	}
	else
	{

	//	AddEvent(6, _T("Create Pharma Refund Receipt\tCtrl+R"), _OnCreateRefundFeeReceiptFnc, 0, 'R', VK_CONTROL);
	//	AddEvent(0, _T("-"));
		AddEvent(8, _T("Edit insurance information"), _OnEditCardInformationFnc);
		AddEvent(0, _T("-"));
		AddEvent(10, _T("Create policies payable sheet"), _OnCreatePoliciesPayableFnc);

		AddEvent(0, _T("-"));
		AddEvent(11, _T("Print summary cost"), _OnPrintSummaryCostFnc);

		AddEvent(0, _T("-"));
		AddEvent(40, _T("Xem thông tin người nhà"), _OnViewRelativeFnc);
				
		
	}

	//if(!pMF->CheckPermission(_T("15.10")))
	//{
	//	m_wndPrescriptionApprove.ShowWindow(SW_HIDE);
	//}

}


void CHMSPatientProfiles::OnPaymentVoucher()
{
	CreatePaymentVoucher();

}


void CHMSPatientProfiles::OnReceiptVoucher()
{
	CreatePoliciesPayable();
}

bool CHMSPatientProfiles::IsDischargePayment()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szPaymentState;

	if(pMF->IsInPatient())
	{
		szSQL.Format(_T("SELECT hcrf_acceptedfee as payment_state FROM hms_clinical_record WHERE hcr_docno = %ld"), m_nDocumentNo);
	}
	else
	{
		szSQL.Format(_T("SELECT hdf_acceptedfee  as payment_state  FROM hms_doc WHERE hd_docno = %ld"), m_nDocumentNo);

	}
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("payment_state"), szPaymentState);
	if(szPaymentState == _T("P"))
		return true;
	return false;
}

#include "HMSCashVoucherDialog.h"
void CHMSPatientProfiles::CreateOtherReceiptVoucher()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(m_nDocumentNo < 0)
		return;

	/*if(IsDischargePayment())
		return;*/


	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.06")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.06")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	//if(pMF->GetObjectType() == _T("D") || pMF->GetObjectType() == _T("P"))
	//{
	//	
	//}
	//else
	//Chỉ user được thiết lập mới được phép tạo phiếu thu khác / chi khác
	if(!pMF->CheckPermission(_T("FM.100.08")))
	{
		ShowMessageBox(_T("Liên hệ phòng tài chính để sử dụng chức năng này!"), 0);
		return;
	}


	{
		CHMSCashVoucherDialog dlg(this, m_nDocumentNo, VM_ADD);
		if(dlg.DoModal() == IDOK){
			OnInvoiceListLoadData();
		}
	}

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

void CHMSPatientProfiles::GetInvoiceInformation()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	long nInvoiceNo;
	int nSel  = m_wndInvoiceList.GetCurSel();
	if(nSel < 0)
		return;
	nInvoiceNo = str2long(m_wndInvoiceList.GetItemText(nSel, 0));
	m_nInvoiceNo = nInvoiceNo;
	UpdateData(TRUE);
	szSQL.Format(_T("SELECT * FROM hms_fee_invoice_view2 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	rs.ExecSQL(szSQL);
	
	CString szLocked, szPosted, szPostedDate;
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_locked"), szLocked);
		rs.GetValue(_T("hfe_posted"), szPosted);
		rs.GetValue(_T("hfe_posteddate"), szPostedDate);
		m_szInvoiceStatus.Format(_T("Khóa sổ[%s], Ghi sổ[%s] - %s"), szLocked, szPosted, szPostedDate);
	}
	UpdateData(FALSE);
}

#include "HMSNoteDialog.h"
#include "HMS_FEE_NOTE.h"

void CHMSPatientProfiles::OnNoteSelect()
{

	if(m_nDocumentNo <= 0)
		return;

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*CHMSNoteDialog dlg(this, VM_EDIT);
	if(dlg.DoModal() == IDOK)
	{
		UpdateData(TRUE);
		CString szSQL;
		szSQL.Format(_T("HMS_FEE_NOTE_CREATE(%ld,'%s','%s') "), m_nDocumentNo, dlg.m_szNote, pMF->GetCurrentUser());
		pMF->ExecDML(szSQL);
		m_szNote = dlg.m_szNote;
		UpdateData(FALSE);
	}*/

	CHMS_Fee_Note dlg(this);
	dlg.DoModal();
}

void CHMSPatientProfiles::OnInPackageSelect()
{
	OnListLoadData();

}

void CHMSPatientProfiles::OnPrintAdiaphanousOrder(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szOrderId = HaveAdiaphanousItem();
	long nOrderId = str2long(szOrderId);
	if (szOrderId.IsEmpty())
		AfxMessageBox(_T("No Adiaphanous Item!"));
	else
		pMF->PrintDrugDelivery(nOrderId);
}

CString CHMSPatientProfiles::HaveAdiaphanousItem(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	//szSQL.Format(_T("select listagg(hpo_orderid, ',') within group (order by null) from hms_pharmaorder where hpo_org_id = 'PACS' and hpo_invoiceno = %ld"), m_nInvoiceNo);
	szSQL.Format(_T("select hpo_orderid from hms_pharmaorder where hpo_org_id = 'PACS' and hpo_invoiceno = %ld"), m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	return rs.GetStringValue();
}

//Ham kiem tra va thong bao thong tin ve benh nhna
void CHMSPatientProfiles::OnWarning()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	if(pMF->IsInPatient())
	{
		szSQL.Format(_T("SELECT hcr_pregnancy FROM hms_clinical_record  WHERE hcr_docno = %ld "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("hcr_pregnancy"), tmpStr);
		if(tmpStr == _T("Y"))
		{
			ShowMessageBox(_T("Bệnh nhân mổ đẻ theo yêu cầu."));
		}
	}
	else
	{
		szSQL.Format(_T("SELECT count(*) FROM hms_pregnancy  WHERE hp_docno = %ld "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			ShowMessageBox(_T("Bệnh nhân cáo phiếu hẹn đăng ký mổ đẻ"));
		}
	}
}
//Tính lại tạm gửi của bệnh nhân trong khoảng 0.01 đồng -> nhỏ hơn 2 đồng

void CHMSPatientProfiles::OnRecacDeposit()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	int vcount = 0;
	if (pMF->IsInPatient())
	{
		szSQL.Format(_T("HMS_RECACULATE_DEPOSIT(%ld) "), m_nDocumentNo);
		vcount = str2int(pMF->ExecDML(szSQL));
		if(vcount > 0)
		{
			//ShowMessageBox(_T("Tính lại tạm gửi bị lẻ!"));
		}
	}
	
}

//#include "HMSBankPaymentInfoDialog.h"

int CHMSPatientProfiles::OnUpdateMasterCardItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CString szStatus, szPaymentMethod, szType, szLocked;

	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0)
		return 0;

	CRecord rs(&pMF->m_db);

	long nInvoiceNo = str2long(m_wndInvoiceList.GetItemText(nSel, 0));
	szType = m_wndInvoiceList.GetItemText(nSel, 6);
	bool isDeposit = false;
	if(szType == _T("A") || szType == _T("B") || szType == _T("C"))
	{
		szSQL.Format(_T("SELECT hfe_type, hfe_status, hfe_payment_method, hfe_locked, hfe_cash_id, hfe_amount as amount, 0 as refund ") \
		_T("FROM hms_fee_deposit WHERE hfe_docno=%ld and hfe_invoiceno = %ld "), m_nDocumentNo, nInvoiceNo);
		isDeposit = true;
	}
	else
		szSQL.Format(_T("SELECT hfe_type, hfe_status, hfe_payment_method, hfe_locked, hfe_cash_id, hfe_payment as amount, hfe_refund as refund ") \
		_T("FROM hms_fee_invoice WHERE hfe_docno=%ld and hfe_invoiceno = %ld "), m_nDocumentNo, nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;

	long nCashId;
	rs.GetValue(_T("hfe_type"), szType);
	rs.GetValue(_T("hfe_status"), szStatus);
	rs.GetValue(_T("hfe_locked"), szLocked);
	rs.GetValue(_T("hfe_cash_id"), nCashId);
	
	rs.GetValue(_T("hfe_payment_method"), szPaymentMethod);
	if(szStatus == _T("C"))
		return -1;
	/*if(nCashId > 0)
	{
		ShowMessageBox(_T("Phiếu thu đã được tổng hợp số liệu. Không cho phép cập nhật"));
		return 0;
	}*/

	if(isDeposit)
	{
		if(szPaymentMethod 	== _T("TM1"))
			szPaymentMethod = _T("TTD");
	}

	double amount, refund;
	rs.GetValue(_T("amount"), amount);
	rs.GetValue(_T("refund"), refund);
	if(refund > 0)
	{
		ShowMessageBox(_T("Tồn tại phiếu chi. Không cho phép cập nhật thông tin."));
		return -1;
	}

//	if(szPaymentMethod != _T("ATM") && szPaymentMethod != _T("TTD") && szPaymentMethod != _T("CK"))
//		return 0;
	int nMode = VM_EDIT;

	if ((((szLocked == _T("Y")) || nCashId > 0)) && (!pMF->CheckPermission(_T("40.01"))))

		nMode = VM_VIEW;

	CHMSBankPaymentInfoDialog dlg(this, nMode);
	dlg.m_nInvoiceNo = nInvoiceNo;
	dlg.m_szPaymentMethod = szPaymentMethod;
	dlg.m_bDeposit = isDeposit;
	dlg.m_nAmount = amount;

	if(dlg.m_nAmount <= 0)
	{
		return 0;
	}
	if(dlg.DoModal() == IDOK)
	{
		
	}

	return 0;
}



void CHMSPatientProfiles::OnResizeLayout()
{
    
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndGeneralCostInformation, 100, 100);
	AddResize(&m_wndTab, 100, 100);

	AddLayoutControl(&m_wndPaymentReceiptInformation, WS_REPOSY|WS_RESIZEY, 100, 50, 100, 50);
	AddLayoutControl(&m_wndTreatmentInformation, WS_RESIZEY, 100, 100, 100, 50);
	AddLayoutControl(&m_wndGeneralCostInformation, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTreatmentList, WS_RESIZEY, 100, 100, 100, 50);
	AddLayoutControl(&m_wndInvoiceList, WS_REPOSY|WS_RESIZEY, 100, 50, 100, 50);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPayment, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndApproval, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPrint, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndElectronic, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPaymentVoucher, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndReceiptVoucher, WS_REPOSY, 100, 100, 100, 100);


	AddLayoutControl(&m_wndTotalCostLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalCost, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalInsCostLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalInsCost, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalInsPaidLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalInsPaid, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalPatPaidLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalPatPaid, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalDiffPaidLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalDiffPaid, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalPayableLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalPayable, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalDepositLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalDeposit, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalPolicyLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalPolicy, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndSumABLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndSumAB, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalDiscountLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalDiscount, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalPaymentLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndTotalPayment, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndStatusLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndStatus, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndNoteLabel, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndNote, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndNoteButton, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDesc, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPaymentVoucher, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndReceiptVoucher, WS_REPOSY, 100, 100, 100, 100);
}

bool CHMSPatientProfiles::CheckBeforeApprove()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szGroup, szisCovidPat;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);

	//Bệnh nhân người nhà ở TYC thì cho nhấn nút duyệt//

	szSQL.Format(_T(" SELECT hrl_group FROM hms_exam") \
	_T(" LEFT JOIN hms_roomlist ON (he_deptid=hrl_deptid AND he_roomid=hrl_id)") \
	_T(" LEFT JOIN hms_doc ON (he_docno=hd_docno)") \
	_T(" WHERE he_docno=%ld AND HD_OBJECT='7'") \
	_T(" AND rownum<=1"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hrl_group"), szGroup);

	szSQL.Format(_T(" SELECT count(*) FROM hms_exam") \
	_T(" LEFT JOIN hms_doc ON (he_docno=hd_docno)") \
	_T(" WHERE he_docno=%ld AND HD_OBJECT='7' AND he_roomid=162") \
	_T(" AND rownum<=1"), m_nDocumentNo);
	rsl.ExecSQL(szSQL);
	if(rsl.GetIntValue() > 0)

		{
			szisCovidPat = _T("Y");
		}

	if (pMF->m_nInpatient == 0)
	{
		if (!pMF->CheckPermission(_T("01.02")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return false;
		}
		
		if(pMF->m_szReceiptDeptID == _T("TYC") )
		{
			if(pMF->m_szStatus !=  _T("T") )
			{
				ShowMessageBox(_T("Hồ sơ chưa kết thúc. Không duyệt được"));
				return false;
			}
			bool flag = false;
			//Kiem tra dieu kien benh nhan hiem muon, benh nhan kham suc khoe, 
			//benh nhan co the bao viet thi cho phep duyetj chi phi
			_tprintf(_T("\r\n%s: %s: %s"), m_szInfertility, m_szHealthExam, m_szIsExtIns);
			if(m_szInfertility == _T("Y") || m_szHealthExam == _T("Y") || m_szIsExtIns == _T("Y") || szGroup ==_T("XNNN") || szisCovidPat == _T("Y"))
				flag = true;
			if(pMF->GetObjectType() == _T("I"))
				flag = true;
			if(!flag)
			{
				printf("\r\nBenh nhan kham suc khoe");
				
				return false;
			}
				
		}

	}
	else
	{
		if(m_bDepositRefundFlag)
		{
			szSQL.Format(_T("SELECT count(*) FROM hms_fee_invoice WHERE hfe_docno=%ld and hfe_class IN('R') and hfe_deptid='PTTYC' "), m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() <= 0)
			{
				ShowMessageBox(_T("Bệnh nhân có phát sinh phí tạm gửi của hộ khác. Yêu cầu hoàn trả lại trước khi thanh toán"));
				return false;
			}
		}
		if(m_bMultiInvoice)
		{
			szSQL.Format(_T("SELECT count(*) FROM hms_fee WHERE hfe_docno=%ld and hfe_class IN('I') and hfe_status IN('O','X','A') and hfe_object=7 and (hfe_category <>'Y' or hfe_category is null)"), m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() > 0 ) {
				ShowMessageBox(_T("Bệnh nhân có phát sinh chi phí dịch vụ. Yêu cầu thanh toán chi phí dịch vụ trước khi duyệt"));
				return false;
			}
		}

	}

	//KIEM TRA NEU BENH NHAN CO PHIEU TAM GUI VAO VIEN MA CHUA KHOA SO THI THONG BAO
	szSQL.Format(_T("SELECT count(hfe_amount) as unlock ") \
		_T("FROM hms_fee_deposit WHERE hfe_docno=%ld and hfe_locked<>'Y' and hfe_status IN('O','P') "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Bệnh nhân đang có phiếu tạm gửi chưa được khóa sổ."));
	}

	szSQL.Format(_T("SELECT su_deptid as deptid ") \
		_T("FROM sys_user WHERE su_userid = '%s' "), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("deptid"), tmpStr);
	if(tmpStr != _T("PTTYC"))
	{

		//KIEM TRA NEU BENH NHAN CO THẺ CHƯA THU HỒI SẼ HIỆN LÊN CÂU THÔNG BÁO
		szSQL.Format(_T(" select count(*)") \
					_T("        from Hms_Fee_Extra e") \
					_T("        left join hms_fee f ON (e.hfe_docno=f.hfe_docno AND e.Hfe_Fee_Extra_Id=f.hfe_orderid)") \
					_T("        where e.Hfe_Docno=%ld") \
					_T("        and e.hfe_treattime =%ld") \
					_T("        and hfe_itemid in (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE' and  ss_vndesc in ('GNLT','GNNOLPB'))") \
					_T("        and f.hfe_status <> 'P'") \
					_T("        and e.hfe_status not in  ('R', 'M', 'C')") \
					_T("        order by e.Hfe_Orderdate"), m_nDocumentNo, m_nTreattime);
		rs.ExecSQL(szSQL);
		//_msg(_T("%s"),szSQL);
		if(rs.GetIntValue() > 0)
		{
			ShowMessageBox(_T("Bệnh nhân có gói dịch vụ chưa trả thẻ, vui lòng trả thẻ trước khi thanh toán"));
			return false;
		}
	}
	//Bệnh nhân có phiếu lĩnh máu của khoa C1.3 chưa duyệt thì không cho phép duyệt
	szSQL.Format(_T(" SELECT count(*) from HMS_TESTORDERLINE") \
		_T(" LEFT JOIN hms_testorder ON (hpcl_docno=hpc_docno AND hpcl_orderid=hpc_orderid)") \
		_T(" LEFT JOIN hms_fee_list ON (hpcl_itemid = hfl_feeid)") \
		_T(" where hpcl_docno=%ld ") \
		_T(" and hpc_status <> 'T' AND HPC_DEPTID = 'C1.3'") \
		_T(" and NVL(hfl_bloodfee, 'X')='Y' AND hpc_payment NOT IN ('P', 'C') AND HFE_REFSTATUS NOT IN ('P', 'C')"), pMF->m_nDocumentNo);

		rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
		if (rs.GetIntValue() > 0)
		{
			ShowMessageBox(_T("Bệnh nhân có phiếu lĩnh máu của khoa tiếp huyết chưa được duyệt, không thể duyệt phí của bệnh nhân! "), MB_ICONERROR | MB_OK);
			return false;	
		}

	//Kiểm tra lúc duyệt phí, nếu có chi phí của người nhà được xét nghiệm covid19 thì yêu cầu phải thanh toán trước
	long nDocumentNo = 0;
	CString szPatname;

	szSQL.Format(_T(" SELECT re_patientno AS docno, GET_PATIENTNAME(re_patientno) as patname ") \
	_T(" FROM RM_RELATIVE_INFOR") \
	_T(" WHERE re_relativeno =%ld") \
	_T(" AND (SELECT COUNT(*) FROM hms_fee") \
	_T(" WHERE hfe_docno=re_patientno AND hfe_status='O')>0") \
	_T(" AND (select count(*) FROM hms_testorder WHERE hpc_docno=re_patientno and hpc_status='T')>0"), m_nDocumentNo);

	rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
			{
				rs.GetValue(_T("docno"), nDocumentNo);
				rs.GetValue(_T("patname"), szPatname);
				if(rs.GetIntValue() > 0)
				{
					_msg(_T("Người nhà bệnh nhân có số hồ sơ [%ld - Họ và tên: %s] có mục phí xét nghiệm covid 19 đã có kết quả nhưng chưa thanh toán, Bạn cần duyệt phí người nhà trước theo số hồ sơ trên"), nDocumentNo, szPatname);
					//return false;
				}							
				rs.MoveNext();
			}	
	return true;
}

#include "HMSUpdateExtInsUnpaidDialog.h"
int CHMSPatientProfiles::OnUpdateExtInsInfo()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CHMSUpdateExtInsUnpaidDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	return 0;
}
int CHMSPatientProfiles::OnRollBackFeeRefund()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	long nSel = m_wndInvoiceList.GetCurSel();
	
	if(nSel < 0) return 0;

	long nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));

	if(!pMF->CheckPermission(_T("40.07")))
	{
		ShowMessageBox(_T("Không có quyền thao tác. Liên hệ admin cấp quyền 40.07 ở viện phí để được sử dụng chức năng này"), 0);
		return 0;
	}
	//Trả lại do thanh toán ra viện hoặc trả lại tạm gửi không được phép
	szSQL.Format(_T(" SELECT count(*)") \
	_T("       FROM HMS_FEE_REFUNDLINE") \
	_T("       WHERE hfe_deptid ='TYC' AND hfe_docno = %ld AND hfe_invoiceno= %ld "), pMF->m_nDocumentNo, nInvoiceNo);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.GetIntValue() <= 0)
	{
		ShowMessageBox(_T(" Không hỗ trợ trường hợp này! Phiếu chi này của bệnh nhân thanh toán ra viện hoặc trả lại tạm gửi"));
		return 0;
	}
	//Trả lại thuốc, vật tư không được phép
	szSQL.Format(_T(" SELECT count(*)") \
	_T("       FROM HMS_FEE_REFUNDLINE") \
	_T("       WHERE hfe_deptid ='TYC' AND substr(hfe_group, 1, 1) = 'A' AND hfe_docno = %ld AND hfe_invoiceno= %ld "), pMF->m_nDocumentNo, nInvoiceNo);

	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T(" Phiếu chi này có thuốc hoặc vật tư trả lại, không hỗ trợ!"));
		return 0;
	}

	
	int ques = ShowMessageBox(_T(" Chức năng này sẽ cập nhật lại phiếu chi đề mục, bạn chắc chắn chứ? "),MB_YESNO);
		if(ques == IDNO)
		return -1;
		else
	szSQL.Format(_T("HMS_ROLLBACK_FEEREFUND(%ld, %ld, '%s') "), pMF->m_nDocumentNo, nInvoiceNo , pMF->GetCurrentUser());
		int ret = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
	if(ret > 0)
	{
		CString szEvent, szDesc;
		szEvent.Format(_T("Khôi phục lại trạng thái phiếu chi"));	
		szDesc.Format(_T("SHS: %ld So phieu chi: %ld User :%s "),pMF->m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
		pMF->SystemLog(szEvent, szDesc);		
	}
	OnInvoiceListLoadData();
	SetMode(VM_VIEW);	
	return 0;	
}
BEGIN_MESSAGE_MAP(CHMSPatientProfiles, CGuiView)
	
ON_WM_TIMER()
ON_WM_SIZE()
END_MESSAGE_MAP()

void CHMSPatientProfiles::OnTimer(UINT nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
	if (nIDEvent == 1)
	{
		OnAutoPostSelect();
	}	
	CGuiView::OnTimer(nIDEvent);
}
void CHMSPatientProfiles::OnAutoPostSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nCount =0, nPayment=0, nDrug=0, nRefund=0, nLimit =0,nPost=0;
	CString szSQL, szMsg, tmpStr;
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T("HMS_CHECK_EINVOICE_STATUS()"));
		int nRet = str2long(pMF->ExecDML(szSQL));	

		if (nRet <=0)
		{
			return;			
		}
		else
		m_neorderid = nRet;
		//_msg(_T("%ld"), m_neorderid);

	m_szInvUserID = _T("hathuybh");
	m_szInvPassword = _T("2004");
	
			
	szSQL.Format(_T(" SELECT SUM(Payment) AS Payment,") \
	_T("   SUM(Drug)         AS Drug,") \
	_T("   SUM(Refund)       AS Refund") \
	_T(" FROM") \
	_T("   (SELECT") \
	_T("     CASE") \
	_T("       WHEN hfe_depttype = 'A'") \
	_T("       THEN COUNT(*)") \
	_T("       ELSE 0") \
	_T("     END AS Payment,") \
	_T("     CASE") \
	_T("       WHEN hfe_depttype = 'D'") \
	_T("       THEN COUNT(*)") \
	_T("       ELSE 0") \
	_T("     END AS Drug,") \
	_T("     CASE") \
	_T("       WHEN hfe_depttype = 'R'") \
	_T("       THEN COUNT(*)") \
	_T("       ELSE 0") \
	_T("     END AS Refund") \
	_T("   FROM HMS_FEE_ELECTRONICLINE") \
	_T("   WHERE hfe_orderid = %ld") \
	_T("   AND hfe_status    = 'O'") \
	_T("   AND (hfe_pkey      =0 OR (hfe_pkey > 0 AND hfe_depttype = 'R')) ") \
	_T("   GROUP BY hfe_depttype") \
	_T(" ) "), m_neorderid);

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("Payment"), nPayment);
		rs.GetValue(_T("Drug"), nDrug);
		rs.GetValue(_T("Refund"), nRefund);
	}

	pMF->BeginWaitCursor();

	//_tprintf(_T("\r\nPayment:%d, Drug:%d, Refund:%d"), nPayment, nDrug, nRefund);
			
	// Gioi han so luong ban ghi moi lan post
	 nLimit =300;

	if(nPayment > nLimit)
		nPost = ceil((double)nPayment/nLimit);
	else
		nPost = 1;

	//Post Hoa don thu phi benh nhan
	for(int n = 0; n < nPost; n++)
	{
		//_tprintf(_T("\r\nOnPostPayment:%d"), n);
		//szMsg.Format(_T("POST \x43hi ph\xED kh\xE1m \x62\x1EC7nh l\x1EA7n: %d"), n);
		//ShowMessageBox(szMsg, MB_ICONERROR|MB_OK);
		nCount = OnAutoPostPayment(nLimit);
	}
	//Post hoa don thu phi tien thuoc ngoai tru

	if(nDrug > nLimit)
		nPost = ceil((double)nDrug/nLimit);
	else
		nPost = 1;

	for(int n = 0; n < nPost; n++)
	{
		//_tprintf(_T("\r\nOnPostDrug:%d"), n);
		//szMsg.Format(_T("POST \x43hi ph\xED thu\x1ED1\x63 l\x1EA7n: %d"), n);
		//ShowMessageBox(szMsg, MB_ICONERROR|MB_OK);
		nCount += OnAutoPostDrug(nLimit);
	}
	
	
	//Post phieu dieu chinh
	if(nRefund > nLimit)
		nPost = ceil((double)nRefund/nLimit);
	else
		nPost = 1;

	for(int n = 0; n < nPost; n++)
	{
		//_tprintf(_T("\r\nOnPostRefund:%d"), n);
		nCount += OnAutoPostRefund(nLimit);
	}
		
	pMF->EndWaitCursor();

	if(nCount > 0)
	{
		szSQL.Format(_T("SELECT COUNT(*) FROM HMS_FEE_ELECTRONICLINE  WHERE hfe_orderid = %ld AND hfe_status = 'O' AND hfe_pkey =0 "), m_neorderid);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <=0 )
		{
			szSQL.Format(_T("UPDATE hms_fee_electronic SET hfe_status = 'P', HFE_POSTEDBY='%s', HFE_AUTO_POST='Y' WHERE hfe_orderid =%ld AND hfe_status ='O'"), pMF->GetCurrentUser(), m_neorderid);
			pMF->ExecSQL(szSQL);
		}	
		//GetDataToScreen();
		//OnListLoadData();
	}
	else
	{
		//ShowMessageBox(_T("No data"), MB_OK);
		return;
	}
	//ShowMessageBox(_T("Job Done!"), MB_OK);
}
int CHMSPatientProfiles::OnAutoPostPayment(int nLimit)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
	
	szWhere.Format(_T(" AND ROWNUM <= %d"), nLimit);

	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_orderid = %d ") \
	_T(" AND hfe_type ='P' ") \
	_T(" AND hfe_depttype ='A'") \
	_T(" AND hfe_status = 'O'") \
	_T(" AND hfe_pkey =0") \
	_T(" %s") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_neorderid, szWhere);
	
	//_msg(_T("%ld"), m_neorderid);
	szDataJson.Format(_T("["));

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("idkey"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
		
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;		
				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;
				
		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CStringA szResponse;
	
	szPatter = _T("02GTTT0/001");
	szSerial = _T("KB/17E");
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("%s/republish?username=%s&password=%s&pattern=%s&serial=%s"), pMF->m_szInvUrl, m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern, pMF->m_szInvSerial);

	//_msg(_T("\r\n%s%s"), szURL, szDataJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);
		session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 900000);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		//printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{		
			char szBuff[1025];
			int nread = 0;
			memset(szBuff, '\0', 1024);
			while ((nread = pFile->Read(szBuff, 1024)) > 0)
			{
				szBuff[nread] = '\0';
				szResponse.AppendFormat("%s", szBuff);
			}
			
			JSONVALUE j;
			CString szKey, szFKey;	
			CString szResponse1;
			szResponse1 = (LPCSTR)szResponse;
			if(!szResponse1.IsEmpty())
			{	
				j.Parse(szResponse1);				
				JSONVALUE  j2, j3, j4;		
				std::wstring strData;
				CString tmpStr, tmpStr1;		

				for(int i = 0; i< j.Size(); i++){
					
					j2 = j.At(i);
					
					j3 = j2["Key"];
					j3.ToString(strData);
					tmpStr = strData.c_str();
					tmpStr1.Format(_T("%c"), 34);
					tmpStr.Replace(tmpStr1, _T(""));
					szKey = tmpStr;

					j3 = j2["Fkey"];
					j3.ToString(strData);
					tmpStr = strData.c_str();
					tmpStr1.Format(_T("%c"), 34);
					tmpStr.Replace(tmpStr1, _T(""));
					szFKey = tmpStr;
					
					if(str2double(szFKey) > 0)
					{
						//m_hms_electronicTbl.SetValue(_T("hfe_key"), szKey); 
						m_hms_electronicTbl.SetValue(_T("hfe_pkey"), szFKey);
						m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
						m_hms_electronicTbl.SetValue(_T("hfe_get_pkey_time"), pMF->GetSysDateTime());
						
						szWhere.Format(_T("WHERE hfe_orderid = %ld AND hfe_key=%s"), m_neorderid, szKey);
						szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key"));				
						szSQL += szWhere;
						//_msg(_T("%s"), szSQL);
						pMF->ExecSQL(szSQL);

						nRow ++;
					}
					
					//_tprintf(_T("\r\n%d, Key:%s, Fkey:%s"), i, szKey, szFKey);			
					//m_szTitle.Format(_T("Key = %s, FKey = %s"), szKey, szFKey);
				}		
			}
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}	

	return nRow;
}
int CHMSPatientProfiles::OnAutoPostDrug(int nLimit){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;	
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
	
	szWhere.Format(_T(" AND ROWNUM <= %d"), nLimit);

	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_orderid = %d ") \
	_T(" AND hfe_type ='P' ") \
	_T(" AND hfe_depttype ='D'") \
	_T(" AND hfe_status = 'O'") \
	_T(" AND hfe_pkey =0") \
	_T(" %s ") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_neorderid, szWhere);
	
	rs.ExecSQL(szSQL);

	szDataJson.Format(_T("["));
	
	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("idkey"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);		
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
					
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;		
				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CStringA szResponse;
	
	
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("%s/republish?username=%s&password=%s&pattern=%s&serial=%s"), pMF->m_szInvUrl, m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern1, pMF->m_szInvSerial1);
	//_msg(_T("\r\n%s%s"), szURL, szDataJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);
		session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 900000);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{			
			char szBuff[1025];
			int nread = 0;
			memset(szBuff, '\0', 1024);
			while ((nread = pFile->Read(szBuff, 1024)) > 0)
			{
				szBuff[nread] = '\0';
				szResponse.AppendFormat("%s", szBuff);
			}
		
			JSONVALUE j;
			CString szKey, szFKey;	
			CString szResponse1;

			szResponse1 = (LPCSTR)szResponse;
			if(!szResponse1.IsEmpty())
			{	
				_tprintf(_T("\r\n%s"), szResponse1);	
				j.Parse(szResponse1);				
				JSONVALUE  j2, j3, j4;		
				std::wstring strData;
				CString tmpStr, tmpStr1;		

				for(int i = 0; i< j.Size(); i++){
					
					j2 = j.At(i);
					
					j3 = j2["Key"];
					j3.ToString(strData);
					tmpStr = strData.c_str();
					tmpStr1.Format(_T("%c"), 34);
					tmpStr.Replace(tmpStr1, _T(""));
					szKey = tmpStr;

					j3 = j2["Fkey"];
					j3.ToString(strData);
					tmpStr = strData.c_str();
					tmpStr1.Format(_T("%c"), 34);
					tmpStr.Replace(tmpStr1, _T(""));
					szFKey = tmpStr;
					
					if(str2double(szFKey) > 0)
					{
						//m_hms_electronicTbl.SetValue(_T("hfe_key"), szKey); 
						m_hms_electronicTbl.SetValue(_T("hfe_pkey"), szFKey);
						m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
						m_hms_electronicTbl.SetValue(_T("hfe_get_pkey_time"), pMF->GetSysDateTime());
						szWhere.Format(_T("WHERE hfe_orderid = %ld AND hfe_key=%s"), m_neorderid, szKey);
						szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key"));				
						szSQL += szWhere;
						//_msg(_T("%s"), szSQL);
						pMF->ExecSQL(szSQL);
						
						nRow ++;
					}
					
					_tprintf(_T("\r\n%d, Key:%s, Fkey:%s"), i, szKey, szFKey);
					//m_szTitle.Format(_T("Key:%s, Fkey:%s"), szKey, szFKey);
				}
			}
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}

	return nRow;
}
int CHMSPatientProfiles::OnAutoPostRefund(int nLimit)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;	
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
	szWhere.Format(_T(" AND ROWNUM <= %d"), nLimit);
	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS newkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_pkey AS idpkey,") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_buyer as buyer, ") \
	_T("   hfe_custaxcode as custaxcode, ") \
	_T("   hfe_depttype, HFE_KEY_REF AS keyref") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_orderid = %d ") \
	_T(" AND hfe_type ='R'") \
	_T(" AND hfe_status = 'O' %s ") \
	//_T(" AND hfe_pkey =0") \//
	_T(" ORDER BY hfe_type,") \
	_T(" hfe_depttype,") \
	_T(" hfe_docno"), m_nInvoiceNo, szWhere);
	
	rs.ExecSQL(szSQL);
	//msg(_T("%s"), szSQL);
	szDataJson.Format(_T("["));

	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("keyref"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;
		
		rs.GetValue(_T("newkey"), tmpStr);
		jbuilder[_T("NewKey")]= tmpStr;

		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;
				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
	
	
	CString szURL;
	
	//szURL.Format(_T("%s/proceed?username=%s&password=%s"), pMF->m_szInvUrl, m_szInvUserID, m_szInvPassword);
	//szURL.Format(_T("%s"), _T(" http://10.0.0.199:9005/api/businessInv/adjustinv"), m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern, pMF->m_szInvSerial);
	szURL.Format(_T("%s?username=%s&password=%s"), _T("http://10.0.0.199/api/businessInv/adjustinv"), m_szInvUserID, m_szInvPassword);
	
	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);
		session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 900000);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;
        //_msg(_T("%s, %s"), szDataJson, szURL);
		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
	        char szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
					break;
			    
				str += szBuff;			    
			}

			WCHAR* wcString = new WCHAR[str.length()];
			memset(wcString, L'\0', str.length());
			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
			::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);
			wcString[nbyte] = L'\0';
			tmpStr.Format(_T("%s"), wcString);
			szResponse += tmpStr;
			delete wcString;
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}	
	
	JSONVALUE j;
	double nKey = 0, nFKey = 0;	
	if(!szResponse.IsEmpty())
	{	
		_tprintf(_T("\r\n%s"), szResponse);	
		j.Parse(szResponse);				
		JSONVALUE  j2, j3, j4;		
		std::wstring strData;
		CString tmpStr, tmpStr1;		

		for(int i = 0; i< j.Size(); i++){
			
			j2 = j.At(i);
			
			j3 = j2["Key"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nKey = str2double(tmpStr);

			j3 = j2["Fkey"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nFKey = str2double(tmpStr);
			
			if(nFKey > 0)
			{
				m_hms_electronicTbl.SetValue(_T("hfe_key"), nKey); 
				m_hms_electronicTbl.SetValue(_T("hfe_pkey"), nFKey);
				m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
				m_hms_electronicTbl.SetValue(_T("hfe_get_pkey_time"), pMF->GetSysDateTime());
				szWhere.Format(_T(" WHERE hfe_orderid = %ld AND hfe_key=%.0f"), m_nInvoiceNo, nKey);
				szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key"));				
				szSQL += szWhere;
				//_msg(_T("%s"), szSQL);
				pMF->ExecSQL(szSQL);
			//	OnPostRefund_ITT(nKey);

				nRow ++;
			}
			else
			{
				ShowMessageBox(_T("Không post được hóa đơn. Hệ thống hóa đơn không trả lại Pkey"), MB_OK);
			}
		}
	}

	return nRow;

}
int CHMSPatientProfiles::OnChangePaymentMethod()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szWhochangepaymentmethod;
	CRecord rs(&pMF->m_db);

	long nSel = m_wndInvoiceList.GetCurSel();
	
	if(nSel < 0) return 0;

	szSQL.Format(_T("SELECT hc_whochangepaymentmethod FROM hms_config"));

		rs.ExecSQL(szSQL);		
		if(!rs.IsEOF())
		{
			
			rs.GetValue(_T("hc_whochangepaymentmethod"), szWhochangepaymentmethod);

		}	
	long nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));

	if (pMF->GetCurrentUser() != _T("vimes") && pMF->GetCurrentUser() != szWhochangepaymentmethod)
	//if (pMF->GetCurrentUser() != _T("vimes"))
	{
		ShowMessageBox(_T(" Không hỗ trợ trường hợp này!"),MB_ICONERROR);
		return 0;
	}
	//Nếu hình thức thanh toán không phải là CK hoặc ATM thì không cho thực hiện

	szSQL.Format(_T(" SELECT count(*)") \
	_T("       FROM hms_fee_deposit") \
	_T("       WHERE NVL(hfe_cash_id,0) > 0 AND HFE_PAYMENT_METHOD IN ('ATM', 'TTD', 'CK') AND hfe_docno = %ld AND hfe_invoiceno= %ld "), pMF->m_nDocumentNo, nInvoiceNo);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.GetIntValue() <= 0)
	{
		ShowMessageBox(_T("Không hỗ trợ trường hợp này! hóa đơn phải là ATM hoặc CK và đã tổng hợp số liệu!"));
		return 0;
	}	
	
	int ques = ShowMessageBox(_T("Chức năng này sẽ cập nhật phiếu thu thành chưa khóa sổ, sau đó giảm trừ số tiền ở phiếu tổng, hệ thống sẽ ghi log lại? "),MB_YESNO);
		if(ques == IDNO)
		return -1;
		else
	szSQL.Format(_T("HMS_CHANGE_PAYMENT_METHOD(%ld, %ld, '%s') "), pMF->m_nDocumentNo, nInvoiceNo , pMF->GetCurrentUser());
		int ret = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
	if(ret > 0)
	{
		CString szEvent, szDesc;
		szEvent.Format(_T("Khôi phục lại phiếu CK / ATM"));	
		szDesc.Format(_T("SHS: %ld Số hóa đơn: %ld User :%s "),pMF->m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
		pMF->SystemLog(szEvent, szDesc);		
	}
	OnInvoiceListLoadData();
	SetMode(VM_VIEW);	
	return 0;	
}

void CHMSPatientProfiles::OnInvoiceListSelectCurrent(int nOldItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nIdx =0 ;
	for(int i = 0; i < m_wndInvoiceList.GetItemCount(); i++){
		long nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(i, 0));
		if(nOldItem == nInvoiceNo)
		{
			nIdx = i;
		}
	}

	m_wndInvoiceList.SetCurSel(nIdx);
	OnInvoiceListDblClick();
}

int CHMSPatientProfiles::OnInvoiceListRefundFee()
{
	//return 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFMFeeRefundOrderDialog dlg(&m_wndList);
	dlg.m_nDocNo = m_nDocumentNo;
	dlg.m_pWnd = this;
	dlg.DoModal();
	return 0;
}

int CHMSPatientProfiles::OnChangeQrPaymentMethod()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szWhochangepaymentmethod, szLocked;
	CRecord rs(&pMF->m_db);

	long nSel = m_wndInvoiceList.GetCurSel();
	
	if(nSel < 0) 
		return 0;

	szSQL.Format(_T("SELECT hc_whochangepaymentmethod FROM hms_config"));

		rs.ExecSQL(szSQL);		
		if(!rs.IsEOF())
		{
			
			rs.GetValue(_T("hc_whochangepaymentmethod"), szWhochangepaymentmethod);

		}

	long nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));

	if (pMF->GetCurrentUser() != _T("vimes") && pMF->GetCurrentUser() != _T("qronline"))	
	{
		ShowMessageBox(_T(" Không hỗ trợ trường hợp này!"),MB_ICONERROR);
		return 0;
	}

	szSQL.Format(_T(" SELECT hfe_locked from HMS_FEE_INVOICE_VIEW_L5") \
	_T(" where hfe_docno=%ld") \
	_T(" and hfe_invoiceno=%ld"), pMF->m_nDocumentNo, nInvoiceNo);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;

	rs.GetValue(_T("hfe_locked"), szLocked);

	if(szLocked == _T("Y"))
	{
		ShowMessageBox(_T("Phiếu đã khóa sổ, không thao tác được!"));
		return 0;
	}

	CFMUpdateQrPaymentDialog dlg(this);
	dlg.m_nInvoiceNo = nInvoiceNo;
	if(dlg.DoModal() == IDOK)
	{		
		CString szEvent, szDesc;
		szEvent.Format(_T("Khôi phục lại phiếu CK / ATM"));	
		szDesc.Format(_T("SHS: %ld Số hóa đơn: %ld User :%s "),pMF->m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
		pMF->SystemLog(szEvent, szDesc);		
		
		OnInvoiceListLoadData();
		SetMode(VM_VIEW);	
		return 0;	
	}
	return 0;
}


int CHMSPatientProfiles::OnCreateNewQrOnline()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szMID, szTID, szBillNumber, szDescription, szDeptID, szUserID, szType, tmpStr, szWhochangepaymentmethod, szPaid;
	szDeptID = pMF->m_szDept;
	szUserID = pMF->GetCurrentUser();
	long nAmount = 0, nOrderID = 0;
	szType = _T("P");	
	
	long nSel = m_wndInvoiceList.GetCurSel();
	
	if(nSel < 0) return 0;
	long nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 0));

	szSQL.Format(_T("SELECT hc_whochangepaymentmethod FROM hms_config"));

		rs.ExecSQL(szSQL);		
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hc_whochangepaymentmethod"), szWhochangepaymentmethod);
		}	

	/*if (pMF->GetCurrentUser() != _T("vimes") && pMF->GetCurrentUser() != _T("qronline"))	
	{
		ShowMessageBox(_T(" Không hỗ trợ trường hợp này!"),MB_ICONERROR);
		return 0;
	}*/

	szSQL.Format(_T(" SELECT hfe_status from HMS_FEE_INVOICE_VIEW_L5") \
	_T(" where hfe_docno=%ld") \
	_T(" and hfe_invoiceno=%ld"), pMF->m_nDocumentNo, nInvoiceNo);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;
	rs.GetValue(_T("hfe_status"), szPaid);

	if(szPaid == _T("P"))
	{
		ShowMessageBox(_T("Phiếu đã thanh toán, không thao tác được!"), MB_ICONERROR);
		return 0;
	}
	
	int ques = ShowMessageBox(_T(" Chức năng này sẽ cấp lại số QR cho phiếu thu hiện thời? "),MB_YESNO);
		if(ques == IDNO)
		return -1;
		else
	szSQL.Format(_T("HMS_RECREATE_QRONLINE(%ld, %ld, '%s') "), pMF->m_nDocumentNo, nInvoiceNo , pMF->GetCurrentUser());
		int ret = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
	if(ret > 0)
	{
		//Tạo lại qrcode cho bệnh nhân
		pMF->OnBankGenQRpay( nInvoiceNo, pMF->m_nDocumentNo, szMID, szTID, szBillNumber, szDescription, szDeptID, szUserID, szType, nAmount);		
		pMF->PrintQRCodeSheet(pMF->m_nDocumentNo, nInvoiceNo, szType);

		//Ghi lại log
		CString szEvent, szDesc;
		szEvent.Format(_T("Cấp lại qrcode cho bệnh nhân"));	
		szDesc.Format(_T("SHS: %ld So phieu: %ld User :%s "),pMF->m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
		pMF->SystemLog(szEvent, szDesc);
	}
	OnInvoiceListLoadData();
	SetMode(VM_VIEW);	
	return 0;	
}

int CHMSPatientProfiles::OnViewRelative()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	UpdateData(true);

	if(m_nDocumentNo <= 0)
		return 0;	
	
	CBankCustomer dlg(this);
	dlg.m_nDocumentNo = pMF->m_nDocumentNo;	
	if(dlg.DoModal() == IDOK)
	{
		
	}	
	return 0;	
}

int CHMSPatientProfiles::OnRollBackFeeRefund2()
{
	return 0;
}

void CHMSPatientProfiles::OnSize(UINT nType, int cx, int cy)
{
	CGuiView::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
}
