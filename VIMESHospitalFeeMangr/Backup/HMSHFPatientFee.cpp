#include "HMSHFPatientFee.h"
#include "MainFrm.h"
#include "HMSHFReceiptDialog.h"
#include "HMSPaymentInvoiceDialog.h"
#include "HMSAcceptInsuranceDialog.h"
#include "ReportDocument.h"
#include ".\hmshfpatientfee.h"

static int _OnCreateAdvanceReceiptFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCreateAdvanceReceipt();
	return 0;
} 
static int _OnCreateRefundReceiptFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCreateRefundReceipt();
	return 0;
} 
static int _OnCreateRemissionReceiptFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCreateRemissionReceipt();
	return 0;
} 


static int _OnPrintPrescriptionFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnPrintPrescription();
	return 0;
} 

static int _OnPrintHemaReceiptFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnPrintHemaReceipt();
	return 0;
} 

static int _OnPaymentFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnPayment();
	return 0;
} 
static int _OnPrintPaymentReceiptFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnPrintPaymentReceipt();
	return 0;
} 


/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPIDChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnPIDChange();
} */
/*static void _OnPIDSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnPIDSetfocus();} */ 
/*static void _OnPIDKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnPIDKillfocus();
} */
static int _OnPIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnPIDCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnWorkingPlaceChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnWorkingPlaceChange();
} */
/*static void _OnWorkingPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnWorkingPlaceSetfocus();} */ 
/*static void _OnWorkingPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnWorkingPlaceKillfocus();
} */
static int _OnWorkingPlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnWorkingPlaceCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnCardCodeChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCardCodeChange();
} */
/*static void _OnCardCodeSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCardCodeSetfocus();} */ 
/*static void _OnCardCodeKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCardCodeKillfocus();
} */
static int _OnCardCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnCardCodeCheckValue();
} 
/*static void _OnCardDiscountChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCardDiscountChange();
} */
/*static void _OnCardDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCardDiscountSetfocus();} */ 
/*static void _OnCardDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnCardDiscountKillfocus();
} */
static int _OnCardDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnCardDiscountCheckValue();
} 
/*static void _OnRegistrationDateChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnRegistrationDateChange();
} */
/*static void _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnRegistrationDateSetfocus();} */ 
/*static void _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static void _OnExpiryDateChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnExpiryDateChange();
} */
/*static void _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnExpiryDateSetfocus();} */ 
/*static void _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnExpiryDateCheckValue();
} 
/*static void _OnRegistrationPlaceChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnRegistrationPlaceChange();
} */
/*static void _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnRegistrationPlaceSetfocus();} */ 
/*static void _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientFee *)pWnd)->OnRegistrationPlaceKillfocus();
} */
static int _OnRegistrationPlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee *)pWnd)->OnRegistrationPlaceCheckValue();
} 
static long _OnTreatmentListLoadDataFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee*)pWnd)->OnTreatmentListLoadData();
} 
static void _OnTreatmentListDblClickFnc(CWnd *pWnd){
	((CHMSHFPatientFee*)pWnd)->OnTreatmentListDblClick();
} 
static void _OnTreatmentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSHFPatientFee*)pWnd)->OnTreatmentListSelectChange(nOldItem, nNewItem);
} 
static int _OnTreatmentListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSHFPatientFee*)pWnd)->OnTreatmentListDeleteItem();
} 

static int _OnTreatmentListChangeFnc(CWnd *pWnd){
	((CHMSHFPatientFee*)pWnd)->OnTreatmentListDblClick();
	return 0;
} 
static int _OnTreatmentListPrintExaminationCostFnc(CWnd *pWnd){
	 return ((CHMSHFPatientFee*)pWnd)->OnTreatmentListPrintExaminationCost();
} 


static long _OnInvoiceListLoadDataFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee*)pWnd)->OnInvoiceListLoadData();
} 
static void _OnInvoiceListDblClickFnc(CWnd *pWnd){
	((CHMSHFPatientFee*)pWnd)->OnInvoiceListDblClick();
} 
static void _OnInvoiceListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSHFPatientFee*)pWnd)->OnInvoiceListSelectChange(nOldItem, nNewItem);
} 
static int _OnInvoiceListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSHFPatientFee*)pWnd)->OnInvoiceListDeleteItem();
} 
static int _OnInvoiceListPrintReceiptFnc(CWnd *pWnd){
	 return ((CHMSHFPatientFee*)pWnd)->OnInvoiceListPrintReceipt();
} 

static int _OnInvoiceListPrintInvoiceFnc(CWnd *pWnd){
	 return ((CHMSHFPatientFee*)pWnd)->OnInvoiceListPrintInvoice();
} 
static int _OnInvoiceListPrintGeneralExaminationCostFnc(CWnd *pWnd){
	 return ((CHMSHFPatientFee*)pWnd)->OnInvoiceListPrintGeneralExaminationCost();
} 
static int _OnInvoiceListPrintDischargePaymentFnc(CWnd *pWnd){
	 return ((CHMSHFPatientFee*)pWnd)->OnInvoiceListPrintDischargePayment();
} 



static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSHFPatientFee*)pWnd)->OnFeeListLoadData();
} 
static void _OnFeeListDblClickFnc(CWnd *pWnd){
	((CHMSHFPatientFee*)pWnd)->OnFeeListDblClick();
} 
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSHFPatientFee*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSHFPatientFee*)pWnd)->OnFeeListDeleteItem();
} 

static int _OnFeeListRecalcFnc(CWnd *pWnd){
	 return ((CHMSHFPatientFee*)pWnd)->OnFeeListRecalc();
} 

static void _OnPaymentSelectFnc(CWnd *pWnd){
	CHMSHFPatientFee *pVw = (CHMSHFPatientFee *)pWnd;
	pVw->OnPaymentSelect();
} 
static void _OnAcceptFeeSelectFnc(CWnd *pWnd){
	CHMSHFPatientFee *pVw = (CHMSHFPatientFee *)pWnd;
	pVw->OnAcceptFeeSelect();
} 
static void _OnPrintInvoiceSelectFnc(CWnd *pWnd){
	CHMSHFPatientFee *pVw = (CHMSHFPatientFee *)pWnd;
	pVw->OnPrintReceiptSelect();
} 

CHMSHFPatientFee::CHMSHFPatientFee(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 655;
	SetDefaultValues();
}
CHMSHFPatientFee::~CHMSHFPatientFee(){
}
void CHMSHFPatientFee::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 375, 325);
	m_wndPaymentInvoiceInformation.Create(this, _T("Payment Invoice Information"), 5, 450, 375, 595);
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 5, 330, 375, 445);
	m_wndGeneralCost.Create(this, _T("General Cost"), 380, 5, 1000, 625);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 110, 55);
	m_wndDocumentNo.Create(this,115, 30, 210, 55); 
	m_wndPIDLabel.Create(this, _T("PID"), 215, 30, 285, 55);
	m_wndPID.Create(this,290, 30, 370, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 370, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 110, 115);
	m_wndAge.Create(this,115, 90, 210, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 215, 90, 285, 115);
	m_wndSex.Create(this,290, 90, 370, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 110, 145);
	m_wndAddress.Create(this,115, 120, 370, 170, TRUE, FALSE, TRUE); 
	m_wndWorkingPlaceLabel.Create(this, _T("Working Place"), 10, 175, 110, 200);
	m_wndWorkingPlace.Create(this,115, 175, 370, 200); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 205, 110, 230);
	m_wndObject.Create(this,115, 205, 370, 230); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 235, 110, 260);
	m_wndCardNo.Create(this,115, 235, 285, 260); 
	m_wndCardCode.Create(this,290, 235, 330, 260); 
	m_wndCardDiscount.Create(this,335, 235, 370, 260); 
	m_wndRegistrationDateLabel.Create(this, _T("Reg.Date"), 10, 265, 110, 290);
	m_wndRegistrationDate.Create(this,115, 265, 200, 290); 
	m_wndExpiryDateLabel.Create(this, _T("Exp.Date"), 205, 265, 285, 290);
	m_wndExpiryDate.Create(this,290, 265, 370, 290); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Reg.Place"), 10, 295, 110, 320);
	m_wndRegistrationPlace.Create(this,115, 295, 370, 320); 
	m_wndTreatmentList.Create(this,10, 355, 370, 440); 
	m_wndInvoiceList.Create(this,10, 475, 370, 590); 
	m_wndFeeList.Create(this,385, 30, 995, 620); 
	m_wndPayment.Create(this, _T("&Collect Fee"), 65, 600, 165, 625);
	m_wndAcceptFee.Create(this, _T("Discharge Payment"), 170, 600, 270, 625);
	m_wndPrintInvoice.Create(this, _T("&Print Receipt"), 275, 600, 375, 625);
}
void CHMSHFPatientFee::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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

	m_wndTreatmentList.SetCheckBox(true);
	m_wndTreatmentList.InsertColumn(0, _T("Dept No"), CFMT_TEXT, 70);
	m_wndTreatmentList.InsertColumn(1, _T("From Date"), CFMT_DATE, 90);
	m_wndTreatmentList.InsertColumn(2, _T("To Date"), CFMT_DATE, 90);
	m_wndTreatmentList.InsertColumn(3, _T("Status"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndTreatmentList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndInvoiceList.InsertColumn(0, _T("Description"), CFMT_TEXT, 200);
	m_wndInvoiceList.InsertColumn(1, _T("Amount"), CFMT_MONEY, 90);
	m_wndInvoiceList.InsertColumn(2, _T("Invoice Date"), CFMT_DATETIME, 120);
	m_wndInvoiceList.InsertColumn(3, _T("Invoice No"), CFMT_TEXT, 180);
	m_wndInvoiceList.InsertColumn(4, _T("Clerk"), CFMT_TEXT, 70);
	m_wndInvoiceList.InsertColumn(5, _T("Receive No"), CFMT_NUMBER, 70);
	m_wndInvoiceList.InsertColumn(6, _T("serialno"), CFMT_TEXT, 0);
	m_wndInvoiceList.InsertColumn(7, _T("bookno"), CFMT_NUMBER, 0);
	m_wndInvoiceList.InsertColumn(8, _T("recvno"), CFMT_NUMBER, 0);
	m_wndInvoiceList.InsertColumn(9, _T("type"), CFMT_TEXT, 0);
	m_wndInvoiceList.InsertColumn(10, _T("Printed"), CFMT_NUMBER, 60);
	m_wndInvoiceList.InsertColumn(11, _T("category"), CFMT_TEXT, 0);
	m_wndInvoiceList.ModifyStyle(0, LVS_NOSORTHEADER);

	
	m_wndFeeList.InsertColumn(0, _T("Idx"), CFMT_TEXT|CFMT_CENTER, 30);
	m_wndFeeList.InsertColumn(1, _T("Description"), CFMT_TEXT, 140);
	m_wndFeeList.InsertColumn(2, _T("Qty"), CFMT_MONEY, 50);
	m_wndFeeList.InsertColumn(3, _T("Price"), CFMT_MONEY, 80);
	m_wndFeeList.InsertColumn(4, _T("Ins/Dis Cost"), CFMT_MONEY, 90);
	m_wndFeeList.InsertColumn(5, _T("Pat Paid"), CFMT_MONEY, 90);
	m_wndFeeList.InsertColumn(6, _T("Cost"), CFMT_MONEY, 90);
	
/*
	if(pMF->m_szViewInsurancePaid == _T("Y")){
		CString szLabel;
		TranslateString(_T("Service"), szLabel);

		m_wndFeeList.GetHeaderControl()->SetItemHeight(2);
		m_wndFeeList.InsertColumn(3, _T("Price"), CFMT_MONEY, 70);
		m_wndFeeList.InsertColumn(4, _T("Money"), CFMT_MONEY, 90);
		m_wndFeeList.GetHeaderControl()->MergeCell(szLabel, 0, 3, 1, 4);

		m_wndFeeList.InsertColumn(5, _T("Price"), CFMT_MONEY, 70);
		m_wndFeeList.InsertColumn(6, _T("Money"), CFMT_MONEY, 90);
		TranslateString(_T("Insurance /Remission"), szLabel);
		m_wndFeeList.GetHeaderControl()->MergeCell(szLabel, 0, 5, 1, 6);
		m_wndFeeList.InsertColumn(7, _T("Ins Unpaid"), CFMT_MONEY, 70);
		
	}
	else
	{
		m_wndFeeList.InsertColumn(3, _T("Price"), CFMT_MONEY, 70);
		m_wndFeeList.InsertColumn(4, _T("Cost"), CFMT_MONEY, 80);
		m_wndFeeList.InsertColumn(5, _T("Discount"), CFMT_MONEY, 75);
		m_wndFeeList.InsertColumn(6, _T("Payment"), CFMT_MONEY, 75);
		m_wndFeeList.InsertColumn(7, _T("Unpaid"), CFMT_MONEY, 75);
	}
*/
	m_wndFeeList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_nDocumentNo=0;
	m_nPID=0;
	
}
void CHMSHFPatientFee::OnSetWindowEvents(){
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
//	m_wndTreatmentList.SetCallChange(true);
//	m_wndTreatmentList.SetEvent(WE_CHANGE, _OnTreatmentListChangeFnc);
	
	m_wndTreatmentList.SetWindowText(_T("Treatment Information"));
	//m_wndTreatmentList.AddEvent(1, _T("Print General Examintaion Cost For Department"), _OnTreatmentListPrintExaminationCostFnc);

	m_wndInvoiceList.SetEvent(WE_SELCHANGE, _OnInvoiceListSelectChangeFnc);
	m_wndInvoiceList.SetEvent(WE_LOADDATA, _OnInvoiceListLoadDataFnc);
	m_wndInvoiceList.SetEvent(WE_DBLCLICK, _OnInvoiceListDblClickFnc);
	m_wndInvoiceList.SetWindowText(_T("Payment Information"));
	
	m_wndInvoiceList.SetWindowText(_T("Invoice List"));
	m_wndInvoiceList.AddEvent(1, _T("Print Receipt Fee"), _OnInvoiceListPrintReceiptFnc);
	m_wndInvoiceList.AddEvent(2, _T("Print Invoice Fee"), _OnInvoiceListPrintInvoiceFnc);
	m_wndInvoiceList.AddEvent(3, _T("Print General Examination Cost"), _OnInvoiceListPrintGeneralExaminationCostFnc);
	m_wndInvoiceList.AddEvent(4, _T("Print Discharge Payment"), _OnInvoiceListPrintDischargePaymentFnc);
	m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
	m_wndInvoiceList.AddEvent(5, _T("Delete Invoice"), _OnInvoiceListDeleteItemFnc);


	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->m_szPrintHemaReceipt == _T("Y")){
		m_wndInvoiceList.AddEvent(0, _T("-"), NULL);
		m_wndInvoiceList.AddEvent(6, _T("Print Hema Receipt\tCtrl+H"), _OnPrintHemaReceiptFnc, 0, 'H', VK_CONTROL);
	}

	
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
	
	m_wndFeeList.SetWindowText(_T("Fee Items"));
	m_wndFeeList.AddEvent(1, _T("Recalculate Fee"), _OnFeeListRecalcFnc, 0, VK_F5);
	//m_wndFeeList.AddEvent(2, _T("Delete Entry"), _OnFeeListDeleteItemFnc);

	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndAcceptFee.SetEvent(WE_CLICK, _OnAcceptFeeSelectFnc);
	m_wndPrintInvoice.SetEvent(WE_CLICK, _OnPrintInvoiceSelectFnc);

//Phieu tam thu cua benh nhan
	AddEvent(1, _T("Create Advance Receipt\tCtrl+A"), _OnCreateAdvanceReceiptFnc, 0, 'A', VK_CONTROL);
//Phieu hoan tra lai tien cho benh nhan
	
	AddEvent(2, _T("Create Refund Receipt\tCtrl+R"), _OnCreateRefundReceiptFnc, 0, 'R', VK_CONTROL);
//Phieu mien giam cho benh nhan
	AddEvent(3, _T("Create Remission Receipt\tCtrl+D"), _OnCreateRemissionReceiptFnc, 0, 'D', VK_CONTROL);
	AddEvent(0, _T("-"), NULL);
	AddEvent(4, _T("Print Prescription\tCtrl+P"), _OnPrintPrescriptionFnc, 0, 'P', VK_CONTROL);

	

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));
	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));
	SetMode(VM_NONE);
	SetMenuState(2, false);

}
void CHMSHFPatientFee::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_Text(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_Text(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_Text(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlace);

}
void CHMSHFPatientFee::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	if(m_nDocumentNo <= 0)
	{
		SetMode(VM_NONE);
		return;
	}

	szSQL.Format(_T(" SELECT 	hp_patientno as patientno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	sys_sel_getname('sys_occupation', cast(hp_occupation as text)) as occupation,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
				_T(" 	hd_object as objectid,") \
				_T(" 	(SELECT ho_type FROM hms_object WHERE ho_id=hd_object) as objecttype,") \
				_T("	hd_insregdate as insregdate, ") \
				_T(" 	hd_cardno as cardno,") \
				_T(" 	hd_cardidx as cardidx,") \
				_T("	hc_regdate as insregdate, ") \
				_T("	hc_expdate as insexpdate, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as insregplace, ") \
				_T("	hd_disrate as disrate, ") \
				_T("	hc_discount as discount, ") \
				_T("	hc_code as inscode, ") \
				_T("	hd_insline as insline, ") \
				_T("	hd_emergency as emergency ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hd_docno=%ld ") , m_nDocumentNo);

	rs.ExecSQL(szSQL);
	SetDefaultValues();
	if(rs.IsEOF())
	{
		SetMode(VM_NONE);
		return;
	}
	pMF->m_nDocumentNo = m_nDocumentNo;
	rs.GetValue(_T("patientno"), m_nPID);
	pMF->m_nPID = m_nPID;
	rs.GetValue(_T("pname"), tmpStr);
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
	m_szObject = pMF->GetObjectString(tmpStr);
	rs.GetValue(_T("objecttype"), pMF->m_szObjectType); 	

	rs.GetValue(_T("cardno"), m_szCardNo); 
	rs.GetValue(_T("insregdate"), tmpStr);
	m_szRegistrationDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
	rs.GetValue(_T("insexpdate"), tmpStr);
	m_szExpiryDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
	rs.GetValue(_T("insregplace"), m_szRegistrationPlace);
	rs.GetValue(_T("insline"), tmpStr); 
	int nInsRate;
	rs.GetValue(_T("disrate"), nInsRate);
	m_szCardDiscount.Format(_T("%d"), nInsRate);
	rs.GetValue(_T("emergency"), m_szEmergency);
	if(tmpStr == _T("Y"))
	{
	//	float percent;
	//	int discount;
	//	rs.GetValue(_T("discount"), discount);
		m_szObject += _T("[Trái tuy\x1EBFn]");
	//	percent = ToInt(m_szCardDiscount)*discount/100.0;
	//	m_szCardDiscount.Format(_T("%.1f"), percent);
		
	}
	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C")){
		rs.GetValue(_T("insregdate"), tmpStr);
		m_szObject.AppendFormat(_T(" [%s]"), CDate::Convert(tmpStr));
	}
	if(pMF->GetObjectType() == _T("D")){
		m_szObject.AppendFormat(_T(" [%d %s]"), nInsRate, _T("%"));
	}

	
	rs.GetValue(_T("inscode"), m_szCardCode);
	szSQL.Format(_T("SELECT hms_fee_create('%s', %ld) "), pMF->GetCurrentUser(), m_nDocumentNo);
	pMF->ExecSQL(szSQL);
	SetMode(VM_VIEW);

	if(pMF->GetObjectType() == _T("S") && pMF->m_nInpatient == 0)
	{
		szSQL.Format(_T("select count(*) from hms_exam where he_docno=%ld and he_emergency='Y' "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <= 0)
			m_wndAcceptFee.EnableWindow(false);
	}

	if(pMF->m_szPrintHemaReceipt == _T("Y")){
		if(m_szCardNo.Find(_T("HN")) != -1){
			m_wndInvoiceList.SetMenuState(6, true);
		}
		else
			m_wndInvoiceList.SetMenuState(6, false);
	}
/*
	if(pMF->GetObjectType() == _T("S")){
		m_wndFeeList.SetColumnWidth(1, 350);
		m_wndFeeList.SetColumnWidth(5, 0);
		m_wndFeeList.SetColumnWidth(6, 0);
		m_wndFeeList.SetColumnWidth(7, 0);
	}
	else
	{
		m_wndFeeList.SetColumnWidth(1, 130);
		m_wndFeeList.SetColumnWidth(5, 70);
		m_wndFeeList.SetColumnWidth(6, 90);
		m_wndFeeList.SetColumnWidth(7, 70);
	}
  */
	OnInvoiceListLoadData();
	OnTreatmentListLoadData();
	OnFeeListLoadData();

}
void CHMSHFPatientFee::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSHFPatientFee::SetDefaultValues(){

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

}
int CHMSHFPatientFee::SetMode(int nMode){
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
 			EnableButtons(FALSE, 0, 1, 2, -1); 
 			SetDefaultValues(); 
			m_wndTreatmentList.DeleteAllItems();
			m_wndInvoiceList.DeleteAllItems();
 			break; 
 		}; 
 		UpdateData(FALSE); 
		m_wndDocumentNo.EnableWindow(TRUE);
		//m_wndPID.EnableWindow(TRUE);
		m_wndDocumentNo.SetFocus();
 		return nOldMode; 
}
/*void CHMSHFPatientFee::OnDocumentNoChange(){
	
} */
/*void CHMSHFPatientFee::OnDocumentNoSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnDocumentNoKillfocus(){
	
} */
int CHMSHFPatientFee::OnDocumentNoCheckValue(){
	m_wndDocumentNo.UpdateData(true);
	GetDataToScreen();
	return 1;
} 
/*void CHMSHFPatientFee::OnPIDChange(){
	
} */
/*void CHMSHFPatientFee::OnPIDSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnPIDKillfocus(){
	
} */
int CHMSHFPatientFee::OnPIDCheckValue(){
	m_wndPID.UpdateData(true);
	GetDataToScreen();
	return 1;
} 
/*void CHMSHFPatientFee::OnPatientNameChange(){
	
} */
/*void CHMSHFPatientFee::OnPatientNameSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnPatientNameKillfocus(){
	
} */
int CHMSHFPatientFee::OnPatientNameCheckValue(){
	
	return 0;
} 
/*void CHMSHFPatientFee::OnAgeChange(){
	
} */
/*void CHMSHFPatientFee::OnAgeSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnAgeKillfocus(){
	
} */
int CHMSHFPatientFee::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSHFPatientFee::OnSexChange(){
	
} */
/*void CHMSHFPatientFee::OnSexSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnSexKillfocus(){
	
} */
int CHMSHFPatientFee::OnSexCheckValue(){
	return 0;
} 
/*void CHMSHFPatientFee::OnAddressChange(){
	
} */
/*void CHMSHFPatientFee::OnAddressSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnAddressKillfocus(){
	
} */
int CHMSHFPatientFee::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSHFPatientFee::OnWorkingPlaceChange(){
	
} */
/*void CHMSHFPatientFee::OnWorkingPlaceSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnWorkingPlaceKillfocus(){
	
} */
int CHMSHFPatientFee::OnWorkingPlaceCheckValue(){
	return 0;
} 
/*void CHMSHFPatientFee::OnObjectChange(){
	
} */
/*void CHMSHFPatientFee::OnObjectSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnObjectKillfocus(){
	
} */
int CHMSHFPatientFee::OnObjectCheckValue(){
	return 0;
} 
/*void CHMSHFPatientFee::OnCardNoChange(){
	
} */
/*void CHMSHFPatientFee::OnCardNoSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnCardNoKillfocus(){
	
} */
int CHMSHFPatientFee::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSHFPatientFee::OnCardCodeChange(){
	
} */
/*void CHMSHFPatientFee::OnCardCodeSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnCardCodeKillfocus(){
	
} */
int CHMSHFPatientFee::OnCardCodeCheckValue(){
	return 0;
} 
/*void CHMSHFPatientFee::OnCardDiscountChange(){
	
} */
/*void CHMSHFPatientFee::OnCardDiscountSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnCardDiscountKillfocus(){
	
} */
int CHMSHFPatientFee::OnCardDiscountCheckValue(){
	return 0;
} 
/*void CHMSHFPatientFee::OnRegistrationDateChange(){
	
} */
/*void CHMSHFPatientFee::OnRegistrationDateSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnRegistrationDateKillfocus(){
	
} */
int CHMSHFPatientFee::OnRegistrationDateCheckValue(){
	return 0;
} 
/*void CHMSHFPatientFee::OnExpiryDateChange(){
	
} */
/*void CHMSHFPatientFee::OnExpiryDateSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnExpiryDateKillfocus(){
	
} */
int CHMSHFPatientFee::OnExpiryDateCheckValue(){
	return 0;
} 
/*void CHMSHFPatientFee::OnRegistrationPlaceChange(){
	
} */
/*void CHMSHFPatientFee::OnRegistrationPlaceSetfocus(){
	
} */
/*void CHMSHFPatientFee::OnRegistrationPlaceKillfocus(){
	
} */
int CHMSHFPatientFee::OnRegistrationPlaceCheckValue(){
	return 0;
} 
void CHMSHFPatientFee::OnTreatmentListDblClick(){
	int nSel = m_wndTreatmentList.GetCurSel();
	if(nSel < 0)
		return;

	BOOL bCheck = m_wndTreatmentList.GetCheck(nSel);
	m_wndTreatmentList.SetCheck(nSel, !bCheck);
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_szDepartments.Empty();
	for (int i = 0; i < m_wndTreatmentList.GetItemCount(); i++){
		if(m_wndTreatmentList.GetCheck(i))
		{
			if(!pMF->m_szDepartments.IsEmpty())
				pMF->m_szDepartments += _T(",");
			pMF->m_szDepartments.AppendFormat(_T("[%s]"), m_wndTreatmentList.GetItemText(i, 0));
		}
	}
	if(pMF->m_szDepartments.IsEmpty())
		pMF->m_szDepartments = _T("[]");
	
	OnFeeListLoadData();
} 
void CHMSHFPatientFee::OnTreatmentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nCheckMax = 0;
	if(nNewItem < 0) return;
	int nSel = m_wndTreatmentList.GetCurSel();
	if(nSel < 0)
		return;
	return;
	BOOL bCheck = m_wndTreatmentList.GetCheck(nSel);
	m_wndTreatmentList.SetCheck(nSel, !bCheck);
	
	pMF->m_szDepartments.Empty();
	for (int i = 0; i < m_wndTreatmentList.GetItemCount(); i++){
		if(m_wndTreatmentList.GetCheck(i))
		{
			if(!pMF->m_szDepartments.IsEmpty())
				pMF->m_szDepartments += _T(",");
			pMF->m_szDepartments.AppendFormat(_T("[%s]"), m_wndTreatmentList.GetItemText(i, 0));
			pMF->m_szPaymentDept = m_wndTreatmentList.GetItemText(i, 0);
			nCheckMax = i;
		}
	}
/*
	if(nCheckMax == 0){
		pMF->m_nInpatient = 0;
	}
	else
		pMF->m_nInpatient = 1;
*/
	
	if(pMF->m_szDepartments.IsEmpty())
		pMF->m_szDepartments = _T("[]");

	OnFeeListLoadData();

} 
int CHMSHFPatientFee::OnTreatmentListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSHFPatientFee::OnTreatmentListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDept;
	
	m_wndTreatmentList.BeginLoad(); 
	int nCount = 0;
	int nItem;
	szSQL.Format(_T("SELECT * FROM hms_doc WHERE hd_docno=%ld"), m_nDocumentNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hd_admitdept"), szDept);
		nItem = m_wndTreatmentList.AddItems(
			rs.GetValue(_T("hd_admitdept")), 
			rs.GetValue(_T("hd_admitdate")), 
			rs.GetValue(_T("hd_enddate")), 
			rs.GetValue(_T("hd_status")),
			NULL);

		if(pMF->m_szPaymentMethod == _T("G") || pMF->m_szPaymentMethod == _T("A") || (pMF->m_szPaymentDept == szDept))
			m_wndTreatmentList.SetCheck(nItem, TRUE);
		if(pMF->m_szPaymentDept.IsEmpty())
			pMF->m_szPaymentDept = szDept;

		rs.MoveNext();
	}

	if(pMF->m_nInpatient > 0)
	{
		szSQL.Format(_T("SELECT * FROM hms_treatment_record WHERE htr_docno=%ld ORDER BY htr_idx"), m_nDocumentNo);
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			rs.GetValue(_T("htr_deptid"), szDept);
			nItem = m_wndTreatmentList.AddItems(
				rs.GetValue(_T("htr_deptid")), 
				rs.GetValue(_T("htr_admitdate")), 
				rs.GetValue(_T("htr_dischargedate")), 
				rs.GetValue(_T("htr_status")),
				NULL);
			m_wndTreatmentList.SetCheck(nItem, TRUE);
			rs.MoveNext();
		}
		//m_wndTreatmentList.SetCheck(0, false);
	}

	

	m_wndTreatmentList.EndLoad(); 

	pMF->m_szDepartments.Empty();
	CString tmpStr;
	for (int i = 0; i < m_wndTreatmentList.GetItemCount(); i++){
		if(m_wndTreatmentList.GetCheck(i))
		{
			if(!pMF->m_szDepartments.IsEmpty())
				pMF->m_szDepartments += _T(",");
			pMF->m_szDepartments.AppendFormat(_T("[%s]"), m_wndTreatmentList.GetItemText(i, 0));
			pMF->m_szPaymentDept = m_wndTreatmentList.GetItemText(i, 0);
		}
			
	}
	if(pMF->m_szDepartments.IsEmpty())
		pMF->m_szDepartments = _T("[]");

	if(m_wndTreatmentList.GetItemCount() > 1){
		pMF->m_nInpatient = 1;
	}
	else
	{
		pMF->m_nInpatient = 0;
		m_wndTreatmentList.SetCurSel(0);
		m_wndTreatmentList.SetCheck(0, false);
		OnTreatmentListDblClick();
	}


	return nCount;
}


int CHMSHFPatientFee::OnTreatmentListPrintExaminationCost(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndTreatmentList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString szDeptID = m_wndTreatmentList.GetItemText(nSel, 0);
	pMF->PrintDischargePayment(szDeptID, true);
	return 0;
} 

void CHMSHFPatientFee::OnInvoiceListDblClick(){
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0)
		return;

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));
	CString szType = m_wndInvoiceList.GetItemText(nSel, 9);
	
//Neu la hoa don thu phi
	if(szType == _T("P")){
			CHMSPaymentInvoiceDialog dlg(this);
			dlg.m_nDocumentNo = m_nDocumentNo;
			dlg.m_nInvoiceNo = nInvoiceNo;
			dlg.SetMode(VM_EDIT);
			if(dlg.DoModal() == IDOK)
			{
				OnInvoiceListLoadData();
				OnFeeListLoadData();
			}
	}
	else
//Hoa don tam ung A, Hoan ung R, Mien giam D 
	{
		CHMSHFReceiptDialog dlg(this, szType);
		dlg.m_nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));
		dlg.m_szSerialNoKey.Format(_T("%s-%ld"), 
			m_wndInvoiceList.GetItemText(nSel, 6), 
			ToLong(m_wndInvoiceList.GetItemText(nSel, 7)));
		dlg.m_szReceiveDate = m_wndInvoiceList.GetItemText(nSel, 2);
		dlg.m_nAmount = ToLong(m_wndInvoiceList.GetItemText(nSel, 1));
		dlg.m_nReceiveNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 9));
		dlg.m_szDescriptionKey = m_wndInvoiceList.GetItemText(nSel, 3);
		dlg.m_nPID = m_nPID;
		dlg.m_nDocumentNo = m_nDocumentNo;
		dlg.SetMode(VM_EDIT);
		if(dlg.DoModal() == IDOK){
			m_wndInvoiceList.SetFocus();
		}
	}
} 
void CHMSHFPatientFee::OnInvoiceListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return;
	CString szType  = m_wndInvoiceList.GetItemText(nSel, 9);
	if(szType == _T("P"))
		m_wndInvoiceList.SetMenuState(5, false);
	else
		m_wndInvoiceList.SetMenuState(5, true);
	

} 

int CHMSHFPatientFee::OnInvoiceListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;
	CString szSQL;
	CRecord rs(&pMF->m_db);

	CString szType = m_wndInvoiceList.GetItemText(nSel, 9);
	CString szCategory = m_wndInvoiceList.GetItemText(nSel, 11);
	
	if(szType == _T("P"))
		return 0;
	if(pMF->m_nInpatient == 0)
	{
		if(szType == _T("A") && !pMF->CheckPermission(_T("01.07")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

		if(szType == _T("D") && !pMF->CheckPermission(_T("01.08")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

		if(szType == _T("R") && !pMF->CheckPermission(_T("01.09")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}
	}
	else
	{
		if(szType == _T("A") && !pMF->CheckPermission(_T("02.07")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

		if(szType == _T("D") && !pMF->CheckPermission(_T("02.08")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

		if(szType == _T("R") && !pMF->CheckPermission(_T("02.09")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return 0;
		}

	}
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	
	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));

	if(szCategory == _T("D"))
	{
		szSQL.Format(_T("SELECT count(*) FROM hms_fee_invoice \
		WHERE 	hfi_docno=%ld \
		and hfi_type='P' \
		and hfi_invoiceno  \
		in(select hfi_refinvoice from hms_fee_invoice where hfi_docno=%ld and hfi_invoiceno=%ld "), m_nDocumentNo, m_nDocumentNo, nInvoiceNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
			return 0;
	}



	szSQL.Format(_T("DELETE FROM hms_fee_invoice WHERE hfi_invoiceno=%ld and hfi_type<>'P' ") \
		_T(" and ((hfi_type='A' and hfi_cost=0) or (hfi_type='R' and hfi_patpaid=0) or (hfi_type='D' and hfi_cost=0 and hfi_patpaid=0)) "), nInvoiceNo);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		OnInvoiceListLoadData();
	}
	return 0;
} 
long CHMSHFPatientFee::OnInvoiceListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szInvoiceNo, szSerialNo, szType, tmpStr, szDesc;
	m_wndInvoiceList.BeginLoad(); 
	int nCount = 0;
	long bookno, recvno;
	int nItem;
	szSQL.Format(_T("SELECT * FROM hms_fee_invoice WHERE hfi_docno=%ld ORDER BY hfi_invoiceno "), m_nDocumentNo);
		
	CString szCategory;

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hfi_serialno"), szSerialNo);
		rs.GetValue(_T("hfi_bookno"), bookno);
		rs.GetValue(_T("hfi_recvno"), recvno);
		rs.GetValue(_T("hfi_type"), szType);
		rs.GetValue(_T("hfi_category"), szCategory);
		szInvoiceNo.Format(_T("%s-%ld-%ld"), szSerialNo, bookno, recvno);
		if(szType == _T("A"))
			rs.GetValue(_T("hfi_patpaid"), tmpStr);
		else if(szType == _T("R"))
			rs.GetValue(_T("hfi_cost"), tmpStr);
		else if(szType == _T("D"))
			rs.GetValue(_T("hfi_discount"), tmpStr);
		else
			rs.GetValue(_T("hfi_patpaid"), tmpStr);
//Neu truong hop mien giam hoac bao hiem tra 100% thi hien tong chi phi
		if(str2double(tmpStr) == 0)
		{
			rs.GetValue(_T("hfi_cost"), tmpStr);
		}
		if(szType == _T("A") && szCategory == _T("D"))
			szDesc.Format(_T("[%7s]%s (RV)"), rs.GetValue(_T("hfi_deptid")), rs.GetValue(_T("hfi_desc")));
		else if(szType == _T("A"))
			szDesc.Format(_T("[%7s]%s (VV)"), rs.GetValue(_T("hfi_deptid")), rs.GetValue(_T("hfi_desc")));
		else
			szDesc.Format(_T("[%7s] %s"), rs.GetValue(_T("hfi_deptid")), rs.GetValue(_T("hfi_desc")));

		nItem = m_wndInvoiceList.AddItems(
			szDesc,
			tmpStr,
			rs.GetValue(_T("hfi_recvdate")), 
			szInvoiceNo, 
			rs.GetValue(_T("hfi_receiver")),
			rs.GetValue(_T("hfi_invoiceno")),
			rs.GetValue(_T("hfi_serialno")),
			rs.GetValue(_T("hfi_bookno")),
			rs.GetValue(_T("hfi_recvno")),
			rs.GetValue(_T("hfi_type")),
			rs.GetValue(_T("hfi_printed")),
			rs.GetValue(_T("hfi_category")),
			NULL);
		if(szType == _T("A"))
		{
			m_wndInvoiceList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndInvoiceList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}
		if(szType == _T("R"))
		{
			m_wndInvoiceList.SetItemTextColor(nItem, RGB(255, 0, 0), FALSE);
		}
		if(szType == _T("D"))
		{
			m_wndInvoiceList.SetItemBkColor(nItem, RGB(200, 200, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndInvoiceList.EndLoad(); 
	
	return nCount;
}



int CHMSHFPatientFee::OnInvoiceListPrintReceipt(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;
	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));
	pMF->PrintReceipt(nInvoiceNo);
	return 0;
}

int CHMSHFPatientFee::OnInvoiceListPrintInvoice(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;
	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));
	pMF->PrintInvoice(nInvoiceNo);
	return 0;
}

int CHMSHFPatientFee::OnInvoiceListPrintGeneralExaminationCost(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
   /*
	if(!pMF->IsAllowDischargePayment(m_nDocumentNo))
	{
		ShowMessageBox(_T("Do not allow discharge payment. This patient file not terminated."), 0);
		return 0;
	}
	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.02"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}
*/
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;

	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));
	pMF->PrintGeneralExaminationCost(nInvoiceNo);
	return 0;
}
int CHMSHFPatientFee::OnInvoiceListPrintDischargePayment(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//pMF->PrintDischargePayment(pMF->m_szPaymentDept);
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return 0;
	
	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.02"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}
	if(pMF->m_nInpatient == 0){
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT hd_status  as status FROM hms_doc WHERE hd_docno=%ld "), m_nDocumentNo);

		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return -1;

		CString szStatus;
		rs.GetValue(_T("status"), szStatus);
		if(szStatus != _T("T") && szStatus != _T("A")){
			ShowMessageBox(_T("This document not end. Can not print it"), MB_OK);
			return -1;
		}
	}


	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));
	pMF->PrintDischargePaymentFromInvoice(nInvoiceNo);
	return 0;
}
void CHMSHFPatientFee::OnFeeListDblClick(){
	
} 
void CHMSHFPatientFee::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSHFPatientFee::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 

int CHMSHFPatientFee::OnFeeListRecalc(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("SELECT hms_fee_create('%s', %ld) "), pMF->GetCurrentUser(), m_nDocumentNo);
	pMF->ExecSQL(szSQL);
	OnFeeListLoadData();
	return 0;
} 
long CHMSHFPatientFee::OnFeeListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord grs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szFeeID, szID, szDepts, szWhere;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	m_wndFeeList.BeginLoad(); 
	int nCount = 0, nIndex, nChapterID=0;

	double nTotalCost=0,
			nTotalDiscount=0,
			nTotalPayable=0,
			nTotalFree,
			nGroup1Cost = 0,
			nGroup1Discount=0,
			nGroup1Payable=0,
			nGroup2Cost = 0,
			nGroup2Discount=0,
			nGroup2Payable=0,
			nCost=0, nDiscount=0, nPayable=0, nDiffCost=0, nFreeAmount=0;

	int nItem=0, nOldItem=0, nItem2;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup;


	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_index, hfg_id "));
	grs.ExecSQL(szSQL);

	szDepts = pMF->m_szDepartments;
	szDepts.Replace(_T("["), _T("\'"));
	szDepts.Replace(_T("]"), _T("\'"));

	szWhere.Empty();
	if(pMF->m_nInpatient == 1){
		szWhere.Format(_T(" and hfe_group <>'D0000' "));
	}
	else
		szWhere.AppendFormat(_T(" and hfe_deptid in(select sd_id from sys_dept where sd_type='KB') "));

	szSQL.Format(_T(" SELECT ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_qty) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		hfe_insprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_inspaid) as inspaid,") \
		_T(" 		sum(hfe_difcost) as diffcost,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_cost-hfe_inspaid) as ins_patdebt, ") \
		_T(" 		sum(hfe_cost-hfe_discount) as dis_patdebt ") \
		_T(" FROM hmsv_fee") \
		_T(" WHERE hfe_docno=%ld  AND hfe_status in('O','C') and hfe_cost > 0 AND hfe_deptid in(%s) %s ") \
		_T(" GROUP BY groupid, feetype, itemid, name, unit, unitprice, insprice") \
		_T(" ORDER BY groupid, feetype, name, unit, unitprice"), m_nDocumentNo, szDepts, szWhere);
	rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
	nIndex = 0;
	CString szSubItem;
	int nSubItem = 1;
	nChapterID = 0;
	

	while(!grs.IsEOF()){
		grs.GetValue(_T("level"), nLevel);
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
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			nItem = m_wndFeeList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			m_wndFeeList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndFeeList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndFeeList.MergeCell(nItem, 1, nItem, 6, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			nIndex = 0;
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			nItem = m_wndFeeList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
		//	m_wndFeeList.SetItemBkColor(nItem, RGB(0, 128, 128), FALSE);
		//	m_wndFeeList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndFeeList.SetItemBkColor(nItem, RGB(64, 128, 128), FALSE);
			m_wndFeeList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndFeeList.MergeCell(nItem, 1, nItem, 6);
			nGroup1Cost = nGroup1Discount=nGroup1Payable=0;
		}
		
		if(szSubItem == _T("Y"))
		{
			nSubItem = 0;
			while(!rs.IsEOF())
			{

					rs.GetValue(_T("groupid"), szNewGroup);
					szNewGroup.Trim();
					if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
							szOldGroup = szNewGroup;
							if(nGroup2Cost > 0 && nOldItem > 0){
								m_wndFeeList.SetItemText(nOldItem, 4, nGroup2Discount>0?ToString((double)nGroup2Discount):_T(""));
								m_wndFeeList.SetItemText(nOldItem, 5, nGroup2Payable>0?ToString((double)nGroup2Payable):_T(""));
								m_wndFeeList.SetItemText(nOldItem, 6, nGroup2Cost>0?ToString((double)nGroup2Cost):_T(""));
							}
							szSQL.Format(_T("SELECT hfg_name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&pMF->m_db);
							rs2.ExecSQL(szSQL);
							
							nItem2 = m_wndFeeList.AddItems(_T("*"), rs2.GetValue(_T("hfg_name")), NULL);
							nOldItem = nItem2;
							m_wndFeeList.SetItemBkColor(nItem2, RGB(200, 200, 228), FALSE);
							m_wndFeeList.SetItemTextColor(nItem2, COLOR_BLUE, FALSE);
							m_wndFeeList.MergeCell(nItem2, 1, nItem2, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
							nGroup2Cost = nGroup2Discount = nGroup2Payable= 0;
							
						}

					nSubItem++;
					nCost = nDiscount = nPayable = 0;
					rs.GetValue(_T("cost"), nCost);
					nTotalCost += nCost;
					nGroup1Cost += nCost;
					nGroup2Cost += nCost;
					
					rs.GetValue(_T("discount"), nFreeAmount);
					nTotalFree += nFreeAmount;
					
					if(pMF->m_szViewInsurancePaid == _T("Y") )
					{
						if(pMF->GetObjectType() == _T("D"))
							rs.GetValue(_T("discount"), nDiscount);
						else
							rs.GetValue(_T("inspaid"), nDiscount);
					}												 
					else
					{
						rs.GetValue(_T("discount"), nDiscount);
					}
					nPayable = nCost - nDiscount;

					nTotalDiscount += nDiscount;
					nGroup1Discount += nDiscount;
					nGroup2Discount += nDiscount;
						
					nTotalPayable += nPayable;
					nGroup1Payable += nPayable;
					nGroup2Payable += nPayable;

						
						m_wndFeeList.AddItems(_T(""), 
							rs.GetValue(_T("name")),
							rs.GetValue(_T("qty")),
							rs.GetValue(_T("unitprice")),
							ToString(nDiscount),
							ToString(nPayable),
							rs.GetValue(_T("cost")),
							NULL);
					
						if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
							CString szItemID;
							rs.GetValue(_T("itemid"), szItemID);
							szSQL.Format(_T(" SELECT 	hpol_name as name, ") \
							_T(" 	hpol_unit as unit, ") \
							_T(" 	hpol_unitprice as price, ") \
							_T(" 	sum(hpol_orderqty) as qty, ") \
							_T(" 	sum(hpol_orderqty*hpol_unitprice) as amount ") \
							_T(" FROM hms_pharmacyorder") \
							_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
							_T(" WHERE 	hpo_docno=%ld ") \
							_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' and ho_deptid in(%s) ) and hpo_type='M' and hpo_status<>'O'  ") \
							_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo, szItemID, szDepts);
							rsl.ExecSQL(szSQL);
							double nAmount = 0;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("amount"), tmpStr);
								nAmount += str2double(tmpStr);
								rsl.GetValue(_T("name"), tmpStr);
								int n = m_wndFeeList.AddItems(_T(""), 
									_T("  +  ")+ tmpStr,
									rsl.GetValue(_T("qty")),
									rsl.GetValue(_T("price")),
									rsl.GetValue(_T("amount")),
									_T(""),
									NULL);
								m_wndFeeList.SetItemTextColor(n, RGB(0, 128, 128), FALSE);
								rsl.MoveNext();
							}
							if(nAmount > 0){
								TranslateString(_T("Total Amount"), tmpStr);
								int n = m_wndFeeList.AddItems(_T(""), 
									_T("    ")+ tmpStr,
									_T(""),
									_T(""),
									ToString(nAmount),
									_T(""),
									NULL);
								m_wndFeeList.SetItemTextColor(n, RGB(0, 128, 255), FALSE);
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
					m_wndFeeList.SetItemText(nOldItem, 4, nGroup2Discount > 0?ToString((double)nGroup2Discount):_T(""));
					m_wndFeeList.SetItemText(nOldItem, 5, nGroup2Payable> 0?ToString((double)nGroup2Payable):_T(""));
					m_wndFeeList.SetItemText(nOldItem, 6, nGroup2Cost > 0?ToString((double)nGroup2Cost):_T(""));
				}
				
				nGroup2Discount = nGroup2Payable = nGroup2Cost =  0;
				nOldItem = 0;
				CString szLabel;
				TranslateString(_T("Sub Amount"), szLabel);
				nItem = m_wndFeeList.AddItems(_T(""), szLabel, NULL);
				m_wndFeeList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
				m_wndFeeList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndFeeList.SetItemText(nItem, 4, nGroup1Discount > 0?ToString((double)nGroup1Discount):_T(""));
				m_wndFeeList.SetItemText(nItem, 5, nGroup1Payable > 0?ToString((double)nGroup1Payable):_T(""));
				m_wndFeeList.SetItemText(nItem, 6, nGroup1Cost > 0?ToString((double)nGroup1Cost):_T(""));

				m_wndFeeList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
				nGroup1Discount = nGroup1Payable = nGroup1Cost =  0;
			}

		}

		grs.MoveNext();
	
	}
	
	if(nTotalCost > 0){
			TranslateString(_T("Total Amount"), tmpStr);
			nItem = m_wndFeeList.AddItems(_T(""), 
			tmpStr,
			_T(""),
			_T(""),
			nTotalDiscount>0?ToString((double)nTotalDiscount):_T(""),
			nTotalPayable>0?ToString((double)nTotalPayable):_T(""),
			nTotalCost>0?ToString((double)nTotalCost):_T(""),
			NULL);
			m_wndFeeList.SetItemBkColor(nItem, RGB(80, 85, 255), FALSE);
			m_wndFeeList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndFeeList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
	}

	if(nTotalCost > 0){
		CString szLabel, szAmount;

		m_wndFeeList.AddItems(_T(" "), NULL);

		TranslateString(_T("Total Cost"), szLabel);
		nItem = m_wndFeeList.AddItems(_T(""), szLabel, _T(""), _T(""), _T(""), _T(""), ToString((double)nTotalCost), NULL);
		m_wndFeeList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
		m_wndFeeList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndFeeList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

		nFreeAmount = 0;

		if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C") || pMF->GetObjectType() == _T("D"))
		{
			
			if(nTotalDiscount > 0)
			{

				if(pMF->GetObjectType() == _T("D"))
					TranslateString(_T("Total Discount"), szLabel);
				else
					TranslateString(_T("Total Insurance Paid"), szLabel);

				if(nTotalFree == nTotalDiscount)
					nFreeAmount = nTotalFree;
				else
					nFreeAmount = str2int(m_szCardDiscount)*nTotalDiscount/100;

				nItem = m_wndFeeList.AddItems(_T(""), szLabel,  _T(""), _T(""), _T(""), _T(""), ToString(nFreeAmount), NULL);
				m_wndFeeList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
				m_wndFeeList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
				m_wndFeeList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
			}
		}


		TranslateString(_T("Total Payable"), szLabel);
		szAmount = ToString(nTotalCost-nFreeAmount);
		nItem = m_wndFeeList.AddItems(_T(""), szLabel,  _T(""), _T(""), _T(""), _T(""), szAmount, NULL);
		m_wndFeeList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
		m_wndFeeList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndFeeList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
	}
	m_wndFeeList.EndLoad();
	m_wndFeeList.EnsureVisible(m_wndFeeList.GetItemCount()-1, TRUE);

	return 0;
}
void CHMSHFPatientFee::OnPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPayment();
} 
void CHMSHFPatientFee::OnAcceptFeeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = 0;

	if(!pMF->IsAllowDischargePayment(m_nDocumentNo))
	{
		ShowMessageBox(_T("Do not allow discharge payment. This patient file not terminated."), 0);
		return;
	}
	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.02"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}


	CString szSQL, szDept, szType;
	CRecord rs(&pMF->m_db);
	long nInvoiceNo;
	int ret;

	int retMsg = ShowMessageBox(_T("Do you want to terminate document and print discharge payment?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(retMsg == IDNO)
		return;
	
	
	if(pMF->m_nInpatient == 0 && pMF->m_szPrintGeneralExamCostSheetType == _T("Y"))
	{

		szSQL.Format(_T("SELECT hms_fee_dischargepayment(%ld, %ld, %d) "), pMF->m_nDocumentNo, nInvoiceNo, 0);
		ret = pMF->ExecSQL(szSQL);
		if(ret > 0)
		{
			long nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));
			nSel = m_wndInvoiceList.GetCurSel();
			if(nSel < 0)
			{
				ShowMessageBox(_T("Yeu cau chon so phieu thu."), 0);
				return;
			}
			pMF->PrintGeneralExaminationCost(nInvoiceNo);
		}
	}
	else
	{
		nSel = m_wndInvoiceList.GetCurSel();
		if(nSel < 0)
		{
			ShowMessageBox(_T("Yeu cau chon so phieu thu."), 0);
			return;
		}

		szType = m_wndInvoiceList.GetItemText(nSel, 9);
		if(szType != _T("P"))
		{
			return; 
		}
		long nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));
		szSQL.Format(_T("SELECT hms_fee_dischargepayment(%ld, %ld, %d) "), pMF->m_nDocumentNo, nInvoiceNo, 1);
		ret = pMF->ExecSQL(szSQL);

		pMF->PrintDischargePaymentFromInvoice(nInvoiceNo);

	}
/*

	szSQL.Format(_T("SELECT hd_enddept as deptid FROM hms_doc WHERE hd_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	else
	{
		rs.GetValue(_T("deptid"), szDept);
		szSQL.Format(_T("SELECT hms_fee_dischargepayment(%ld, '%s', %d) "), pMF->m_nDocumentNo, szDept, 0);
		int ret = pMF->ExecSQL(szSQL);
		if(pMF->m_nInpatient == 0){
			pMF->m_nRefIndex = 0;
		}
		if(pMF->m_szPrintGeneralExamCostSheetType == _T("Y"))
		{
			pMF->PrintGeneralExaminationCost(szDept);
		}
		else
		{
			int nSel = m_wndInvoiceList.GetCurSel();
			if(nSel < 0)
				return;
			long nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));

			pMF->PrintDischargePaymentFromInvoice(nInvoiceNo);
		}
	}

	szSQL.Format(_T("SELECT distinct htr_deptid as deptid FROM hms_treatment_record WHERE htr_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("deptid"), szDept);
		szSQL.Format(_T("SELECT hms_fee_dischargepayment(%ld, '%s', %d) "), pMF->m_nDocumentNo, szDept, 1);
		int ret = pMF->ExecSQL(szSQL);
		rs.MoveNext();
	}
*/
	

} 
void CHMSHFPatientFee::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nInvoiceNo;
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0)
		return;
	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));
	pMF->PrintReceipt(nInvoiceNo);	
} 

void CHMSHFPatientFee::OnCreateAdvanceReceipt(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.04"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.04"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}


	if(m_nDocumentNo < 0)
		return;
//Neu la ngoai tru thi kiem tra benh nhan cap cuu thi cho phep tao phieu tam ung
	if(pMF->m_nInpatient == 0 && pMF->m_szAdvanceEmergency == _T("Y")){

		if(m_szEmergency != _T("Y"))
		{
			CString szOutpatient;
			szSQL.Format(_T("SELECT hd_outpatient FROM hms_doc WHERE hd_docno=%ld"), m_nDocumentNo);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("hd_outpatient"), szOutpatient);
			if(szOutpatient != _T("Y"))
			{
				ShowMessageBox(_T("Do not allow create advance fee"), MB_OK);
				return;
			}
		}
	}

	CHMSHFReceiptDialog dlg(this, _T("A"));
	dlg.m_nPID = m_nPID;
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = 0;
	dlg.SetMode(VM_CREATEADVANCE);
	if(dlg.DoModal() == IDOK){
		if(dlg.m_bPrintReceipt){
			
		}
		OnInvoiceListLoadData();
	}
}

void CHMSHFPatientFee::OnCreateRefundReceipt(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.06"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.06"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(m_nDocumentNo < 0)
		return;

	CHMSHFReceiptDialog dlg(this, _T("R"));
	dlg.m_nPID = m_nPID;
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = 0;
	dlg.SetMode(VM_CREATEREFUND);
	if(dlg.DoModal() == IDOK){
		if(dlg.m_bPrintReceipt){
			
		}
		OnInvoiceListLoadData();
	}
}
void CHMSHFPatientFee::OnCreateRemissionReceipt(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.05"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.05"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(m_nDocumentNo < 0)
		return;
	CHMSHFReceiptDialog dlg(this, _T("D"));
	dlg.m_nPID = m_nPID;
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nInvoiceNo = 0;
	dlg.SetMode(VM_CREATEREMISSION);
	if(dlg.DoModal() == IDOK){
		if(dlg.m_bPrintReceipt){
			
		}
		OnInvoiceListLoadData();
	}
}

void CHMSHFPatientFee::OnPrintPrescription(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT hpo_orderid FROM hms_pharmacyorder WHERE hpo_docno=%ld and hpo_status in('S','I') and hpo_payment='P' and hpo_type='P' and (hpo_feeid is null or length(hpo_feeid)=0) "), 
		m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No prescription"));
		return;
	}
	if(pMF->m_szPrintDrugDelivery == _T("Y"))
	{
		while(!rs.IsEOF()){
			long nOrderID;
			rs.GetValue(_T("hpo_orderid"), nOrderID);
			pMF->PrintDrugDelivery(nOrderID, false);
			rs.MoveNext();
		}

	}
	else
	{
		while(!rs.IsEOF()){
			long nOrderID;
			rs.GetValue(_T("hpo_orderid"), nOrderID);
			pMF->PrintPrescription(nOrderID);			
			rs.MoveNext();
		}
	}
}

void CHMSHFPatientFee::OnPrintHemaReceipt(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndInvoiceList.GetCurSel();
	if(nSel < 0) return;
	long	nInvoiceNo = ToLong(m_wndInvoiceList.GetItemText(nSel, 5));
	pMF->PrintHemaReceipt(nInvoiceNo);

}
void CHMSHFPatientFee::OnPayment(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.01"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_nInpatient==1 && !pMF->CheckPermission(_T("02.01"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->m_szPaymentDept.IsEmpty()){
		ShowMessageBox(_T("Ban phai chon khoa thanh toan."), 0);
		return ;
	}
	if(!pMF->IsAllowDischargePayment(m_nDocumentNo))
	{
		ShowMessageBox(_T("Do not allow discharge payment. This patient file not terminated."), 0);
		return;
	}

	if(m_wndFeeList.GetItemCount() <= 0)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL, hd_status, hcr_status;
		szSQL.Format(_T("SELECT hd_status, hcr_status FROM hms_doc LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) WHERE hd_docno=%ld"), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return;
		rs.GetValue(_T("hd_status"), hd_status);
		rs.GetValue(_T("hcr_status"), hcr_status);
		if(hd_status != _T("T") && pMF->m_nInpatient == 0)
			return;
		if(hcr_status != _T("T") && pMF->m_nInpatient == 1)
			return;

		szSQL.Format(_T("SELECT sum(hfi_patpaid-hfi_cost) as advance FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_type='A' and hfi_category='A' "), m_nDocumentNo);

		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return;
		double nAdvance;
		rs.GetValue(_T("advance"), nAdvance);
		if(nAdvance > 0)
		{
		
				CHMSHFReceiptDialog dlg(this, _T("R"));
				dlg.m_nPID = pMF->m_nPID;
				dlg.m_nDocumentNo = m_nDocumentNo;
				dlg.m_nInvoiceNo = 0;
				dlg.m_szCategory = _T("D"); //Discharge 
				dlg.m_nAmount = nAdvance;
				dlg.SetMode(VM_CREATEREFUND);
				if(dlg.DoModal() == IDOK){
					OnInvoiceListLoadData();
				}
				return;
		}
	}

	else
	{
			CHMSPaymentInvoiceDialog dlg(pMF);
			dlg.m_nDocumentNo = m_nDocumentNo;
			dlg.m_nInvoiceNo = -1;
			dlg.SetMode(VM_ADD);
			if(dlg.DoModal() == IDOK)
			{
				OnInvoiceListLoadData();
				OnFeeListLoadData();
			}
	}
}

void CHMSHFPatientFee::OnPrintPaymentReceipt(){
}

void CHMSHFPatientFee::LoadData(long nDoc){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_nDocumentNo = nDoc;
	GetDataToScreen();
	pMF->SetActivePanel(1);

}

BOOL CHMSHFPatientFee::PreTranslateMessage(MSG* pMsg)
{
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F2){
		bool bCheck = true;
		for (int i =0; i < m_wndTreatmentList.GetItemCount(); i++){
			if(m_wndTreatmentList.GetCheck(i)){
				bCheck = false;
				break;
			}
		}
		
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		pMF->m_szDepartments.Empty();
		for (int i =0; i < m_wndTreatmentList.GetItemCount(); i++){
			m_wndTreatmentList.SetCheck(i, bCheck);
			if(bCheck)
				pMF->m_szDepartments.AppendFormat(_T("[%s]"), m_wndTreatmentList.GetItemText(i, 0));
		}
		if(pMF->m_szDepartments.IsEmpty())
			pMF->m_szDepartments = _T("[]");
		OnFeeListLoadData();
	}

	return CGuiView::PreTranslateMessage(pMsg);
}
