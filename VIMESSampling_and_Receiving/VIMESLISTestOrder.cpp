#include "VIMESLISTestOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "ASTMProtocolDialog.h"
#include "HMSTestResultListDialog.h"

static long _OnSpecimemListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder*)pWnd)->OnSpecimemListLoadData();
} 
static void _OnSpecimemListDblClickFnc(CWnd *pWnd){
	((CVIMESLISTestOrder*)pWnd)->OnSpecimemListDblClick();
} 
static void _OnSpecimemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESLISTestOrder*)pWnd)->OnSpecimemListSelectChange(nOldItem, nNewItem);
} 
static int _OnSpecimemListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnSpecimemListDeleteItem();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnOrderIDCheckValue();
} 
/*static void _OnInstPIDChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnInstPIDChange();
} */
/*static void _OnInstPIDSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnInstPIDSetfocus();} */ 
/*static void _OnInstPIDKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnInstPIDKillfocus();
} */
static int _OnInstPIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnInstPIDCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnPaymentStateChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnPaymentStateChange();
} */
/*static void _OnPaymentStateSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnPaymentStateSetfocus();} */ 
/*static void _OnPaymentStateKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnPaymentStateKillfocus();
} */
static int _OnPaymentStateCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnPaymentStateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnAddressCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CVIMESLISTestOrder *pVw = (CVIMESLISTestOrder *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESLISTestOrder *pVw = (CVIMESLISTestOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnViewResultSelectFnc(CWnd *pWnd){
	CVIMESLISTestOrder *pVw = (CVIMESLISTestOrder *)pWnd;
	pVw->OnViewResultSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CVIMESLISTestOrder *pVw = (CVIMESLISTestOrder *)pWnd;
	pVw->OnPrintSelect();
} 

static void _OnReadResultSelectFnc(CWnd *pWnd){
	CVIMESLISTestOrder *pVw = (CVIMESLISTestOrder *)pWnd;
	pVw->OnReadResultSelect();
} 

static int _OnAddTestOrderFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnAddTestOrder();
} 

static int _OnViewTestOrderResultFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnViewTestOrderResult();
} 

static int _OnEditTestOrderFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnEditTestOrder();
} 
static int _OnDeleteTestOrderFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnDeleteTestOrder();
} 
static int _OnSaveTestOrderFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnSaveTestOrder();
} 
static int _OnCancelTestOrderFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnCancelTestOrder();
} 

static int _OnConfigurationPortFnc(CWnd *pWnd){
	 ((CVIMESLISTestOrder*)pWnd)->OnConfigurationPort();
	 return 0;
} 
CVIMESLISTestOrder::CVIMESLISTestOrder(){

	m_nDlgWidth = 625;
	m_nDlgHeight = 655;
	SetDefaultValues();
	m_devinterface = NULL;
	
	
}
CVIMESLISTestOrder::~CVIMESLISTestOrder(){
	if(m_devinterface ) delete m_devinterface;
}
void CVIMESLISTestOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 610, 605);
	m_wndSpecimemList.Create(this,11, 180, 606, 600); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 100, 55);
	m_wndDocumentNo.Create(this,105, 30, 205, 55); 
	m_wndOrderIDLabel.Create(this, _T("Order No"), 210, 30, 280, 55);
	m_wndOrderID.Create(this,285, 30, 385, 55); 
	m_wndInstPIDLabel.Create(this, _T("Ins OID"), 390, 30, 480, 55);
	m_wndInstPID.Create(this,486, 28, 546, 50); 
	m_wndSave.Create(this, _T("&Save"), 550, 28, 606, 50);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 100, 85);
	m_wndPatientName.Create(this,105, 60, 385, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 390, 60, 480, 85);
	m_wndAge.Create(this,485, 60, 605, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 100, 115);
	m_wndAddress.Create(this,105, 90, 605, 115); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 120, 100, 145);
	m_wndDoctor.Create(this,105, 120, 385, 145); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 390, 120, 480, 145);
	m_wndOrderDate.Create(this,485, 120, 605, 145); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 150, 100, 175);
	m_wndObject.Create(this,105, 150, 385, 175); 
	m_wndPaymentStateLabel.Create(this, _T("Payment Fee"), 390, 150, 480, 175);
	m_wndPaymentState.Create(this,485, 150, 605, 175); 
//	m_wndUpdate.Create(this, _T("&Update"), 275, 610, 355, 635);
	m_wndViewResult.Create(this, _T("&View"), 360, 610, 440, 635);
	m_wndUpdate.Create(this, _T("&Update"), 445, 610, 525, 635);
	m_wndPrint.Create(this, _T("&Print"), 530, 610, 610, 635);


	/*
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 610, 620);
	m_wndSpecimemList.Create(this,11, 163, 606, 613); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 11, 28, 101, 50);
	m_wndDocumentNo.Create(this,106, 28, 206, 50); 
	m_wndOrderIDLabel.Create(this, _T("Order No"), 211, 28, 281, 50);
	m_wndOrderID.Create(this,286, 28, 386, 50); 
	m_wndInstPIDLabel.Create(this, _T("Inst PID"), 391, 28, 481, 50);
	m_wndInstPID.Create(this,486, 28, 546, 50); 
	m_wndSave.Create(this, _T("&Save"), 550, 28, 606, 50);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 11, 55, 101, 77);
	m_wndPatientName.Create(this,106, 55, 386, 77); 
	m_wndAgeLabel.Create(this, _T("Age"), 391, 55, 481, 77);
	m_wndAge.Create(this,486, 55, 606, 77); 
	m_wndAddressLabel.Create(this, _T("Address"), 11, 82, 101, 104);
	m_wndAddress.Create(this,106, 82, 606, 104); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 11, 109, 101, 131);
	m_wndDoctor.Create(this,106, 109, 386, 131); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 391, 109, 481, 131);
	m_wndOrderDate.Create(this,486, 109, 606, 131); 
	m_wndObjectLabel.Create(this, _T("Object"), 11, 136, 101, 158);
	m_wndObject.Create(this,106, 136, 386, 158); 
	m_wndPaymentStateLabel.Create(this, _T("Payment Fee"), 391, 136, 481, 158);
	m_wndPaymentState.Create(this,486, 136, 606, 158); 
	m_wndViewResult.Create(this, _T("&View Result"), 360, 625, 440, 650);
	m_wndUpdate.Create(this, _T("&Update"), 445, 625, 525, 650);
	m_wndPrint.Create(this, _T("&Print"), 530, 625, 610, 650);
*/
}


void CVIMESLISTestOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_NONE);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOrderID.SetLimitText(13);
	m_wndOrderID.SetCheckValue(true);
	m_wndInstPID.SetLimitText(35);
	m_wndInstPID.SetCheckValue(true);
	m_wndInstPID.SetNotEmpty(false);
//	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndDoctor.SetLimitText(15);
	m_wndDoctor.SetCheckValue(true);
	m_wndObject.SetLimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndPaymentState.SetLimitText(35);
	m_wndPaymentState.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));
	
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);

	m_wndSpecimemList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndSpecimemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndSpecimemList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndSpecimemList.InsertColumn(3, _T("Result"), CFMT_TEXT|CFMT_RIGHT, 65);
	m_wndSpecimemList.InsertColumn(4, _T("Normal Index"), CFMT_TEXT|CFMT_CENTER, 85);
	m_wndSpecimemList.InsertColumn(5, _T("Max Index"), CFMT_TEXT|CFMT_CENTER, 85);
	m_wndSpecimemList.InsertColumn(6, _T("Min Index"), CFMT_TEXT|CFMT_CENTER, 85);
	m_wndSpecimemList.InsertColumn(7, _T("Code"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndSpecimemList.InsertColumn(8, _T("Code In"), CFMT_TEXT|CFMT_CENTER, 60);

	m_hms_pcorderTbl.SetTableName(_T("hms_pcorder"));
	m_hms_pcorderTbl.AddField(_T("hpo_createdby"), dfText, 15); 
	m_hms_pcorderTbl.AddField(_T("hpo_createddate"), dfDateTime); 
	m_hms_pcorderTbl.AddField(_T("hpo_updatedby"), dfText, 15); 
	m_hms_pcorderTbl.AddField(_T("hpo_updateddate"), dfDateTime); 
	m_hms_pcorderTbl.AddField(_T("hpo_group"), dfText, 3); 
	m_hms_pcorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pcorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pcorderTbl.AddField(_T("hpo_OrderID"), dfText, 13); 
	m_hms_pcorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pcorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pcorderTbl.AddField(_T("hpo_fdeptid"), dfText, 7); 
	m_hms_pcorderTbl.AddField(_T("hpo_froomid"), dfLong); 
	m_hms_pcorderTbl.AddField(_T("hpo_fbedid"), dfLong); 
	m_hms_pcorderTbl.AddField(_T("hpo_freceptidx"), dfLong); 
	m_hms_pcorderTbl.AddField(_T("hpo_pdeptid"), dfText, 7); 
	m_hms_pcorderTbl.AddField(_T("hpo_proomid"), dfLong); 
	m_hms_pcorderTbl.AddField(_T("hpo_practitioner"), dfText, 15); 
	m_hms_pcorderTbl.AddField(_T("hpo_performdate"), dfDateTime); 
	m_hms_pcorderTbl.AddField(_T("hpo_status"), dfText, 1); 
	m_hms_pcorderTbl.AddField(_T("hpo_payment"), dfText, 1); 
	m_hms_pcorderTbl.AddField(_T("hpo_hasfee"), dfText, 1); 
	m_hms_pcorderTbl.AddField(_T("hpo_note"), dfText, 81); 
	m_hms_pcorderTbl.AddField(_T("hpo_result"), dfText, 512); 
	m_hms_pcorderTbl.AddField(_T("hpo_desc"), dfText, 254); 
	m_hms_pcorderTbl.AddField(_T("hpo_remark"), dfText, 81); 

	m_lims_orderTbl.SetTableName(_T("lims_order"));
	m_lims_orderTbl.AddField(_T("limso_createdby"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_createddate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_updatedby"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_updateddate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_instid"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_machine"), dfText, 35); 
	m_lims_orderTbl.AddField(_T("limso_oid"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_docno"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_refid"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_barcode"), dfText, 35); 
	m_lims_orderTbl.AddField(_T("limso_tray"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_cup"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_rack"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_typeid"), dfText, 7); 
	m_lims_orderTbl.AddField(_T("limso_groupid"), dfText, 3); 
	m_lims_orderTbl.AddField(_T("limso_status"), dfText, 1); 
	m_lims_orderTbl.AddField(_T("limso_pid"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_pname"), dfText, 65); 
	m_lims_orderTbl.AddField(_T("limso_birthdate"), dfDate); 
	m_lims_orderTbl.AddField(_T("limso_age"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_sex"), dfText, 1); 
	m_lims_orderTbl.AddField(_T("limso_doctorid"), dfText, 15); 
	m_lims_orderTbl.AddField(_T("limso_orderdate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_orderdept"), dfText, 7); 
	m_lims_orderTbl.AddField(_T("limso_orderroom"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_performdate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_performdept"), dfText, 7); 
	m_lims_orderTbl.AddField(_T("limso_performroom"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_performerid"), dfText, 15); 


	m_devinterface = new CDeviceInterface(pMF);
	//ConnectRS232();
}
void CVIMESLISTestOrder::OnSetWindowEvents(){
	m_wndSpecimemList.SetEvent(WE_SELCHANGE, _OnSpecimemListSelectChangeFnc);
	m_wndSpecimemList.SetEvent(WE_LOADDATA, _OnSpecimemListLoadDataFnc);
	m_wndSpecimemList.SetEvent(WE_DBLCLICK, _OnSpecimemListDblClickFnc);
	m_wndSpecimemList.AddEvent(1, _T("Delete"), _OnSpecimemListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndOrderID.SetEvent(WE_CHANGE, _OnOrderIDChangeFnc);
	//m_wndOrderID.SetEvent(WE_SETFOCUS, _OnOrderIDSetfocusFnc);
	//m_wndOrderID.SetEvent(WE_KILLFOCUS, _OnOrderIDKillfocusFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	//m_wndInstPID.SetEvent(WE_CHANGE, _OnInstPIDChangeFnc);
	//m_wndInstPID.SetEvent(WE_SETFOCUS, _OnInstPIDSetfocusFnc);
	//m_wndInstPID.SetEvent(WE_KILLFOCUS, _OnInstPIDKillfocusFnc);
	m_wndInstPID.SetEvent(WE_CHECKVALUE, _OnInstPIDCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndDoctor.SetEvent(WE_CHANGE, _OnDoctorChangeFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_CHECKVALUE, _OnDoctorCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndPaymentState.SetEvent(WE_CHANGE, _OnPaymentStateChangeFnc);
	//m_wndPaymentState.SetEvent(WE_SETFOCUS, _OnPaymentStateSetfocusFnc);
	//m_wndPaymentState.SetEvent(WE_KILLFOCUS, _OnPaymentStateKillfocusFnc);
	m_wndPaymentState.SetEvent(WE_CHECKVALUE, _OnPaymentStateCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndReadResult.SetEvent(WE_CLICK, _OnReadResultSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndViewResult.SetEvent(WE_CLICK, _OnViewResultSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Preview Results\tF3"), _OnViewTestOrderResultFnc, 0, VK_F3, 0);
	AddEvent(0, _T("-"));
	AddEvent(2, _T("Configuration Ports"), _OnConfigurationPortFnc);
/*
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditTestOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteTestOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveTestOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("ViewResult	Ctrl+T"), _OnCancelTestOrderFnc, 0, 'T', VK_CONTROL);
*/
}
void CVIMESLISTestOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_Text(pDX, m_wndInstPID.GetDlgCtrlID(), m_szInstPID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndPaymentState.GetDlgCtrlID(), m_szPaymentState);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);

}
void CVIMESLISTestOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	if(m_nOrderID > 0){
		szSQL.Format(_T(" SELECT ") \
				_T(" hto_orderno, ") \
				_T(" hto_orderdte, ") \
				_T(" hto_docno,") \
				_T(" hto_status,") \
				_T(" trim(hp_surname||' '||hp_midname||' '||hp_fstname) as hto_patientname, ") \
				_T(" hms_getage(hp_birthdte) as hto_age,") \
				_T(" hp_sex as hto_sex, ") \
				_T(" hms_getvnaddr(hp_vnaddrcde) as hto_address,") \
				_T(" (select lnme||' '||mnme||' '||fnme from rsde_usrlst where usrid=hto_treatdoctor) as hto_treatdoctor,") \
				_T(" (SELECT distinct hpo_desc FROM hms_patientobj WHERE hpo_idx=hd_policy) as hto_policy, ") \
				_T(" (SELECT distinct hpo_policy FROM hms_patientobj WHERE hpo_idx=hd_policy) as hto_policyid ") \
				_T(" FROM hms_patient ") \
				_T(" LEFT JOIN hms_doc ON(hd_patno=hp_patientno) ") \
				_T(" LEFT JOIN hms_testorder ON(hd_no=hto_docno)") \
				_T(" WHERE hto_orderno=%ld") , m_nOrderID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hto_docno"), m_nDocumentNo);
			rs.GetValue(_T("hto_orderdte"), m_szOrderDate);
			rs.GetValue(_T("hto_treatdoctor"), m_szDoctor);
			rs.GetValue(_T("hto_patientname"), m_szPatientName);
			rs.GetValue(_T("hto_age"), m_szAge);
			rs.GetValue(_T("hto_sex"), m_szSex);
			rs.GetValue(_T("hto_policy"), m_szObject);
			rs.GetValue(_T("hto_status"), m_szStatus);
			rs.GetValue(_T("hto_address"), m_szAddress);
			int object;
			
			rs.GetValue(_T("hto_policyid"), object);
			if(object == 2)
			{
				szSQL.Format(_T("select count(*) from hms_testorderln where htol_orderno = %ld and htol_joable='Y' and htol_isjo<>'P'"), m_nOrderID);
				CRecord rs2(&pMF->m_db);
				rs2.ExecSQL(szSQL);
				m_bPaidFlag = false;
				if(rs2.GetIntValue() > 0)
					TranslateString(_T("Unpaid"), m_szPaymentState);
				else
				{
					TranslateString(_T("Paid"), m_szPaymentState);
					m_bPaidFlag = true;
				}
			}
			else
				m_bPaidFlag = true;
			
			SetMode(VM_VIEW);
			CRecord rsf(&pMF->m_db);
			CString szSQL;
			szSQL.Format(_T("SELECT * FROM lims_order WHERE limso_refid=%ld"), m_nOrderID);

			rsf.ExecSQL(szSQL);
			if(!rsf.IsEOF())
			{
				rsf.GetValue(_T("limso_oid"), m_nOID);
				rsf.GetValue(_T("limso_pid"), m_szInstPID);
			}
			else
			{
				m_nOID = -1;
			//	CreateWorkingOrder();
				m_szInstPID.Empty();
			}
			OnSpecimemListLoadData();
			UpdateData(false);
			m_wndInstPID.SetSel(0, m_wndInstPID.GetWindowTextLength());
			
		}
	}
	else
		SetMode(VM_NONE);

}
void CVIMESLISTestOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pcorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pcorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_pcorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
	m_hms_pcorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());
	m_hms_pcorderTbl.SetValue(_T("hpo_OrderID"), m_nOrderID);
	m_hms_pcorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pcorderTbl.SetValue(_T("hpo_doctor"), m_szDoctor);

}
void CVIMESLISTestOrder::SetDefaultValues(){

	m_nDocumentNo=0;
	m_nOrderID=0;
	m_nInstrumentID = 0;
	m_szInstPID.Empty();
	m_szOrderDate.Empty();
	m_szDoctor.Empty();
	m_szObject.Empty();
	m_szPaymentState.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szAddress.Empty();

}
int CVIMESLISTestOrder::SetMode(int nMode){ 
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
		m_wndDocumentNo.EnableWindow(true);
		m_wndInstPID.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CVIMESLISTestOrder::OnSpecimemListDblClick(){
	
} 
void CVIMESLISTestOrder::OnSpecimemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESLISTestOrder::OnSpecimemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESLISTestOrder::OnSpecimemListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSpecimemList.BeginLoad(); 
	int nCount = 0;
	int nItem= 1;
	CString tmpStr;
	if(m_szStatus != _T("T"))
	{
		szSQL.Format(_T("SELECT hproc_desc as name, hproc_unit as unit, htol_result as result, htol_idx as index, htol_testid as itemid ") \
			_T("FROM hms_testorderln  ") \
			_T("LEFT JOIN hms_procedures ON(htol_testid=hproc_id) ") \
			_T("WHERE htol_orderno=%ld ORDER BY htol_idx"), m_nOrderID);

		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			tmpStr.Format(_T("%d"), nItem++);
			m_wndSpecimemList.AddItems(
				tmpStr, 
				rs.GetValue(_T("name")), 
				rs.GetValue(_T("unit")),
				rs.GetValue(_T("result")), 
				_T(""), 
				_T(""),
				_T(""), 
				_T(""), 
				_T(""),
				NULL);
			rs.MoveNext();
		}
	}
	else
	{
		szSQL.Format(_T("SELECT limsid_index, limsid_code, limsid_codein, limsid_name, limsid_unit, limsid_fnorm, limsid_mnorm, limsid_min, limsid_max, limsr_result, limsr_exresult ") \
			_T(" FROM lims_result ") \
			_T(" LEFT JOIN lims_instrument_data ON(limsr_code=limsid_code and limsr_index=limsid_index) ") \
			_T(" WHERE limsr_oid=%ld AND limsid_instid=%ld ORDER BY limsr_index "), m_nOID, m_nInstrumentID);
//	_fmsg(_T("%s"), szSQL);
		nCount = rs.ExecSQL(szSQL);

		while(!rs.IsEOF()){ 
			if(m_szSex == _T("F"))
				tmpStr = rs.GetValue(_T("limsid_fnorm"));
			else
				tmpStr = rs.GetValue(_T("limsid_mnorm"));

			m_wndSpecimemList.AddItems(
				rs.GetValue(_T("limsid_index")), 
				rs.GetValue(_T("limsid_Name")), 
				rs.GetValue(_T("limsid_Unit")), 
				rs.GetValue(_T("limsr_Result")), 
				tmpStr,
				rs.GetValue(_T("limsid_min")), 
				rs.GetValue(_T("limsid_max")), 
				rs.GetValue(_T("limsid_Code")), 
				rs.GetValue(_T("limsid_CodeIn")),
				NULL);
			rs.MoveNext();
		}

	}
	m_wndSpecimemList.EndLoad(); 
	return nCount;
}
/*void CVIMESLISTestOrder::OnDocumentNoChange(){
	
} */
/*void CVIMESLISTestOrder::OnDocumentNoSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnDocumentNoKillfocus(){
	
} */
int CVIMESLISTestOrder::OnDocumentNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select hto_orderno from hms_testorder where hto_docno =%ld and hto_testtype='%s' order by hto_orderno DESC limit 1 "), m_nDocumentNo, pMF->m_wndPatientList.m_szTypeKey);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		m_nOrderID = rs.GetIntValue();
		GetDataToScreen();
		m_wndInstPID.SetFocus();
	}
	else
	{
		//ShowMessageBox(_T("Can not find test order id"), MB_OK);
		m_wndDocumentNo.SetToolTipMessage(_T("Can not find test order id"));
		return -1;
	}

	return 1;
} 
/*void CVIMESLISTestOrder::OnOrderIDChange(){
	
} */
/*void CVIMESLISTestOrder::OnOrderIDSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnOrderIDKillfocus(){
	
} */
int CVIMESLISTestOrder::OnOrderIDCheckValue(){
	return 0;
} 
/*void CVIMESLISTestOrder::OnInstPIDChange(){
	
} */
/*void CVIMESLISTestOrder::OnInstPIDSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnInstPIDKillfocus(){
	
} */
int CVIMESLISTestOrder::OnInstPIDCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	bool bAllowUpdae=false;
	long nOldOrderID;
	UpdateData(true);
	m_bAllowLoad = false;
	if(!m_szInstPID.IsEmpty())
	{
//Kiem tra xem co benh nhan trong ngay duoc cap PID chua
		szSQL.Format(_T("SELECT * FROM lims_order WHERE trim(limso_pid)=trim('%s') AND date(limso_performdate)=current_date "), m_szInstPID);
		rs.ExecSQL(szSQL);
_msg(_T("%s"), szSQL);
//Neu co benh nhan duoc cap PID roi ma Order ID <> Order ID hien tai thi ko cho phep cap nhat
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("limso_refid"),nOldOrderID);
			if(nOldOrderID != m_nOrderID)
			{
			//	m_wndInstPID.SetToolTipMessage(_T("This PID is issue for other patient. Can not update it!"));
				szSQL.Format(_T("DELETE FROM lims_order SET limso_refid=%ld"), m_nOrderID);
				pMF->ExecSQL(szSQL);
				m_lims_orderTbl.SetValue(_T("limso_updatedby"), pMF->GetCurrentUser());
				m_lims_orderTbl.SetValue(_T("limso_updateddate"), pMF->GetSysDateTime());
				m_lims_orderTbl.SetValue(_T("limso_instid"), m_devinterface->m_nInstID);
				m_lims_orderTbl.SetValue(_T("limso_machile"), m_devinterface->m_szMachine);
				m_lims_orderTbl.SetValue(_T("limso_typeid"), pMF->m_wndPatientList.m_szTypeKey);
				m_lims_orderTbl.SetValue(_T("limso_refid"), m_nOrderID);
				m_lims_orderTbl.SetValue(_T("limso_pname"), m_szPatientName);
				m_lims_orderTbl.SetValue(_T("limso_age"), m_szAge);
				m_lims_orderTbl.SetValue(_T("limso_sex"), m_szSex);
				m_lims_orderTbl.SetValue(_T("limso_orderdate"), m_szOrderDate);
				m_lims_orderTbl.SetValue(_T("limso_doctor"), m_szDoctor);
				szSQL = m_lims_orderTbl.GetUpdateSQL(_T("limso_createdby,limso_createddate,limso_pid,limso_performdate,limso_oid"));
				szSQL.AppendFormat(_T(" WHERE limso_oid=%ld "), ToLong(rs.GetValue(_T("limso_oid"))));
				pMF->ExecSQL(szSQL);


				return -1;
			}
			

/*
				m_lims_orderTbl.SetValue(_T("limso_updatedby"), pMF->GetCurrentUser());
				m_lims_orderTbl.SetValue(_T("limso_updateddate"), pMF->GetSysDateTime());
				m_lims_orderTbl.SetValue(_T("limso_instid"), m_devinterface->m_nInstID);
				m_lims_orderTbl.SetValue(_T("limso_machile"), m_devinterface->m_szMachine);
				m_lims_orderTbl.SetValue(_T("limso_typeid"), pMF->m_wndPatientList.m_szTypeKey);
				m_lims_orderTbl.SetValue(_T("limso_refid"), m_nOrderID);
				m_lims_orderTbl.SetValue(_T("limso_pname"), m_szPatientName);
				m_lims_orderTbl.SetValue(_T("limso_age"), m_szAge);
				m_lims_orderTbl.SetValue(_T("limso_sex"), m_szSex);
				m_lims_orderTbl.SetValue(_T("limso_orderdate"), m_szOrderDate);
				m_lims_orderTbl.SetValue(_T("limso_doctor"), m_szDoctor);
				szSQL = m_lims_orderTbl.GetUpdateSQL(_T("limso_createdby,limso_createddate,limso_pid,limso_performdate,limso_oid"));
				szSQL.AppendFormat(_T(" WHERE limso_oid=%ld "), m_nOID);
				pMF->ExecSQL(szSQL);
*/
		}
		
//		pMF->SetStatusText(_T("Updated Patient Information."));
/*

//Kiem tra neu ton tai lims_order thi update ko thi insert
		szSQL.Format(_T("SELECT * FROM lims_order WHERE limso_refid=%ld"), m_nOrderID);
		rs.ExecSQL(szSQL);
		
		if(!rs.IsEOF()){
			rs.GetValue(_T("lims_orderid"), m_nOID);
			m_bAllowLoad = true;
		}
		else{

			

			if(!rs.IsEOF()){
				int nOldOrderID;
				m_bAllowLoad = true;
				rs.GetValue(_T("limso_oid"), m_nOID);
				rs.GetValue(_T("limso_refid"), nOldOrderID);
				if(nOldOrderID != m_nOrderID)
				{
					CString szMsg;
					szMsg.Format(_T("This PID using by other test order[%ld]. Do you want to merge order id?(Y/N) "), nOldOrderID);
					int nMsg = ShowMessageBox(szMsg, MB_YESNO|MB_DEFBUTTON2);
					if(nMsg == IDNO)
						return -1;
				}
				
			}
			else
			{

				m_lims_orderTbl.SetValue(_T("limso_createdby"), pMF->GetCurrentUser());
				m_lims_orderTbl.SetValue(_T("limso_createddate"), pMF->GetSysDateTime());
				m_lims_orderTbl.SetValue(_T("limso_updatedby"), pMF->GetCurrentUser());
				m_lims_orderTbl.SetValue(_T("limso_updateddate"), pMF->GetSysDateTime());
				m_lims_orderTbl.SetValue(_T("limso_instid"), m_devinterface->m_nInstID);
				m_lims_orderTbl.SetValue(_T("limso_machile"), m_devinterface->m_szMachine);
				m_lims_orderTbl.SetValue(_T("limso_typeid"), pMF->m_wndPatientList.m_szTypeKey);
				m_lims_orderTbl.SetValue(_T("limso_refid"), m_nOrderID);
				m_lims_orderTbl.SetValue(_T("limso_pid"), nPID);
				m_lims_orderTbl.SetValue(_T("limso_pname"), m_szPatientName);
				m_lims_orderTbl.SetValue(_T("limso_age"), m_szAge);
				m_lims_orderTbl.SetValue(_T("limso_sex"), m_szSex);
				m_lims_orderTbl.SetValue(_T("limso_orderdate"), m_szOrderDate);
				m_lims_orderTbl.SetValue(_T("limso_doctor"), m_szDoctor);
				m_lims_orderTbl.SetValue(_T("limso_performdate"), pMF->GetSysDateTime());
				szSQL = m_lims_orderTbl.GetInsertSQL(_T("limso_oid"));
				pMF->ExecSQL(szSQL);
	//Lay so order loi nhat
				szSQL.Format(_T("SELECT last_value FROM lims_order_limso_oid_seq "));
				rs.ExecSQL(szSQL);
			}
		}
*/
	}
	else
	{
		return -1;
	}
	return 0;
} 
/*void CVIMESLISTestOrder::OnOrderDateChange(){
	
} */
/*void CVIMESLISTestOrder::OnOrderDateSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnOrderDateKillfocus(){
	
} */
int CVIMESLISTestOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CVIMESLISTestOrder::OnDoctorChange(){
	
} */
/*void CVIMESLISTestOrder::OnDoctorSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnDoctorKillfocus(){
	
} */
int CVIMESLISTestOrder::OnDoctorCheckValue(){
	return 0;
} 
/*void CVIMESLISTestOrder::OnObjectChange(){
	
} */
/*void CVIMESLISTestOrder::OnObjectSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnObjectKillfocus(){
	
} */
int CVIMESLISTestOrder::OnObjectCheckValue(){
	return 0;
} 
/*void CVIMESLISTestOrder::OnPaymentStateChange(){
	
} */
/*void CVIMESLISTestOrder::OnPaymentStateSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnPaymentStateKillfocus(){
	
} */
int CVIMESLISTestOrder::OnPaymentStateCheckValue(){
	return 0;
} 
/*void CVIMESLISTestOrder::OnPatientNameChange(){
	
} */
/*void CVIMESLISTestOrder::OnPatientNameSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnPatientNameKillfocus(){
	
} */
int CVIMESLISTestOrder::OnPatientNameCheckValue(){
	return 0;
} 
/*void CVIMESLISTestOrder::OnAgeChange(){
	
} */
/*void CVIMESLISTestOrder::OnAgeSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnAgeKillfocus(){
	
} */
int CVIMESLISTestOrder::OnAgeCheckValue(){
	return 0;
} 
/*void CVIMESLISTestOrder::OnAddressChange(){
	
} */
/*void CVIMESLISTestOrder::OnAddressSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnAddressKillfocus(){
	
} */
int CVIMESLISTestOrder::OnAddressCheckValue(){
	return 0;
} 


void CVIMESLISTestOrder::OnReadResultSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CVIMESLISTestOrder::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISTestOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	if(m_nOrderID <= 0)
		return;
	UpdateData(true);
//	szSQL.Format(_T("UPDATE lims_order SET limso_pid='%s' WHERE limso_refid=%ld AND limso_status='O' "), m_szInstPID, m_nOrderID);
//	pMF->ExecSQL(szSQL);
	CreateWorkingOrder();
	m_wndDocumentNo.SetFocus();
	m_wndDocumentNo.SetSel(0, m_wndDocumentNo.GetWindowTextLength());
} 
void CVIMESLISTestOrder::OnViewResultSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnViewTestOrderResult();
} 
void CVIMESLISTestOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

void CVIMESLISTestOrder::OnConfigurationPort(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	ConnectRS232();
	//CASTMProtocolDialog dlg(this);
//	dlg.DoModal();
//	m_devinterface->TestMain();
} 
int CVIMESLISTestOrder::OnAddTestOrder(){
 	if(GetMode() != VM_VIEW)
		return -1;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT lims_instrument_inputdata(%ld, %d, '%s') "), m_nInstrumentID, m_nOrderID, m_szInstPID);
	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	m_nInstOrderID = rs.GetIntValue();
	m_wndInstPID.SetFocus();
	return 0;
} 
int CVIMESLISTestOrder::OnEditTestOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit TestOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CVIMESLISTestOrder::OnDeleteTestOrder(){
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
 		OnCancelTestOrder(); 
 	}
return 0;
 } 
int CVIMESLISTestOrder::OnSaveTestOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_pcorderTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_pcorderTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnTestOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESLISTestOrder::OnCancelTestOrder(){
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
int CVIMESLISTestOrder::OnTestOrderListLoadData(){
	return 0;
}


int CVIMESLISTestOrder::OnViewTestOrderResult(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CLIMSTestResultListDialog dlg(pMF);
	dlg.m_nInstrumentID = m_devinterface->m_nInstID;
	dlg.DoModal();
	return 0;
}
void CVIMESLISTestOrder::LoadData(long nOrderID){
	m_nOrderID = nOrderID;
	GetDataToScreen();
}

BEGIN_MESSAGE_MAP(CVIMESLISTestOrder, CGuiView)
ON_WM_TIMER()
ON_WM_DESTROY()
END_MESSAGE_MAP()

void CVIMESLISTestOrder::OnTimer(UINT nIDEvent)
{
	if(nIDEvent == 1){
		KillTimer(1);
		for (int i =0; i < m_arrayPort.GetCount(); i++){
//			CDeviceInterface *serial = m_arrayPort[i];
//			if(serial->IsOpen())
//				serial->Write(_T("Send Data"), 10);
		}
	}

	CGuiView::OnTimer(nIDEvent);
}

void CVIMESLISTestOrder::OnDestroy()
{
	CGuiView::OnDestroy();

	for (int i = m_arrayPort.GetCount()-1; i>=0; i--){
		CDeviceInterface *serial = m_arrayPort[i];
//		serial->Close();
		delete serial;
	}
	m_arrayPort.RemoveAll();

}




BOOL CDeviceInterface::SaveSettings()
{
	HKEY hKey = NULL;  
		       
	CString sPreferenceKey( PREFERENCES_KEY );

	sPreferenceKey += _T("\\");
	sPreferenceKey += m_szPortName;

	DWORD dwDisposition;


	
	CString szKey;
	int nActive = 0;
	for (int i =0; i < 6; i++){
		szKey.Format(_T("%s\\COM%d"), PREFERENCES_KEY, i+1);
		if ( RegCreateKeyEx( HKEY_LOCAL_MACHINE, szKey, 0, 0, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS,
							NULL, &hKey, &dwDisposition ) == ERROR_SUCCESS )
		{
			RegSetValueEx( hKey, _T("Active"), 0, REG_DWORD,(BYTE*)&nActive, 4 );	
		} 

	}
	hKey = NULL;

	if ( RegCreateKeyEx( HKEY_LOCAL_MACHINE, sPreferenceKey, 0, 0, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS,
							NULL, &hKey, &dwDisposition ) != ERROR_SUCCESS )
	{
		return FALSE; 
	} 

	nActive = 1;
	RegSetValueEx( hKey, _T("Machine"), 0, REG_SZ, (BYTE*)(LPCTSTR)m_szMachine, m_szMachine.GetLength() * sizeof (TCHAR) ); 
	RegSetValueEx( hKey, _T("Active"), 0, REG_DWORD,(BYTE*)&nActive, 4 );
	// port options
	RegSetValueEx( hKey, _T("Baudrate"), 0, REG_DWORD,(BYTE*)&m_dwBaudrate, 4 );
	RegSetValueEx( hKey, _T("Databits"), 0, REG_DWORD,(BYTE*)&m_nDataBits, 4 );
	RegSetValueEx( hKey, _T("Parity"), 0, REG_DWORD,(BYTE*)&m_nParity, 4 );
	RegSetValueEx( hKey, _T("Stopbits"), 0, REG_DWORD,(BYTE*)&m_nStopBits, 4 );
	RegSetValueEx( hKey, _T("Flowctrl"), 0, REG_DWORD,(BYTE*)&m_nFlowControl, 4 );

	return TRUE; 
}

BOOL  CDeviceInterface::LoadSettings ( )
{
	HKEY hKey = NULL;  
	
	DWORD cValues;              // number of values for key 
    DWORD cchMaxValue;          // longest value name 
    DWORD cbMaxValueData;       // longest value data 
 	BYTE  bData [1024];
	DWORD dwDataLen = 1024;
 
	DWORD retCode;
	TCHAR achValue[254]; 
	DWORD cchValue = 255; //16383; 
	int nActive=0;

	m_szPortName.Empty();
	m_szPortName = _T("COM1");
	m_dwBaudrate = 9600;
	m_nDataBits = 8;
	m_nStopBits = 1;
	m_nParity = 0;
	m_nFlowControl = 0;

	for (int i = 0; i < 6; i++)
	{
		CString sPreferenceKey( PREFERENCES_KEY );
		sPreferenceKey += _T("\\");
		m_szPortName.Format(_T("COM%d"), i+1);
		sPreferenceKey += m_szPortName;
		
		if ( RegOpenKeyEx( HKEY_LOCAL_MACHINE, sPreferenceKey, 0, KEY_ALL_ACCESS, &hKey ) == ERROR_SUCCESS )
		{
			// Get the class name and the value count. 
			retCode = RegQueryInfoKey( hKey, NULL, NULL, NULL, NULL, NULL, NULL, 
										&cValues, &cchMaxValue, &cbMaxValueData, NULL, NULL); 
			

			//  search values of keys 
			if (cValues) 
			{
				for (DWORD i=0, retCode=ERROR_SUCCESS; i<cValues; i++) 
				{ 
		            
					cchValue = 255; //16383; 
					memset ( bData, 0, 1024 );
					dwDataLen = 1024;
					DWORD dwType = 0;
					retCode = RegEnumValue(hKey, i,	achValue, &cchValue, NULL, &dwType, bData, &dwDataLen );
					
					if (retCode == ERROR_SUCCESS ) 
					{ 
						if ( (dwType == REG_SZ) && (_tcscmp( _T("Machine"), achValue) == 0) )
						{
							int len = (int)_tcslen( (LPCTSTR)bData );
							LPTSTR lpStrData = m_szMachine.GetBufferSetLength( len );
							_tcscpy( lpStrData, (LPCTSTR)bData );
						}

						if ( (dwType == REG_DWORD) && ( _tcscmp( _T("Active"), achValue) == 0) )
						{
							memcpy ( &nActive, bData, 4 ); 
						}


						if ( (dwType == REG_DWORD) && ( _tcscmp( _T("Baudrate"), achValue) == 0) )
						{
							memcpy ( &m_dwBaudrate, bData, 4 ); 
						}

						if ( (dwType == REG_DWORD) && ( _tcscmp( _T("Databits"), achValue) == 0) )
						{
							memcpy ( &m_nDataBits, bData, 4 ); 
						}

						if ( (dwType == REG_DWORD) && ( _tcscmp( _T("Parity"), achValue) == 0) )
						{
							memcpy ( &m_nParity, bData, 4 ); 
						}

						if ( (dwType == REG_DWORD) && ( _tcscmp( _T("Stopbits"), achValue) == 0) )
						{
							memcpy ( &m_nStopBits, bData, 4 ); 
						}

						if ( (dwType == REG_DWORD) && ( _tcscmp( _T("Flowctrl"), achValue) == 0) )
						{
							memcpy ( &m_nFlowControl, bData, 4 ); 
						}
						
					}
					

				} // for 
				if(nActive == 1)
					break;
			} 
		}
	}
	if(nActive == 0)
	{
		m_szPortName.Empty();
		return FALSE;
	}
	return TRUE;
}

bool CVIMESLISTestOrder::ConnectRS232(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(m_devinterface && m_devinterface->IsOpen())
		m_devinterface->Close();

	if(!m_devinterface->Open())
		return false;

	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM lims_instrument WHERE limsi_active='Y' AND limsi_name='%s' "), m_devinterface->m_szMachine);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("limsi_id"), m_devinterface->m_nInstID);
		m_nInstrumentID = m_devinterface->m_nInstID;
		rs.GetValue(_T("limsid_typeid"), m_devinterface->m_szTestType);
		m_devinterface->SetMachine(rs.GetValue(_T("limsi_protocol")));
		m_devinterface->InitializeData();	
		CString szStatus;
		szStatus.Format(_T("%s, %d, %d, %d, %d, %d [Connected]"), m_devinterface->m_szPortName, 
			m_devinterface->m_dwBaudrate, m_devinterface->m_nDataBits, m_devinterface->m_nStopBits, m_devinterface->m_nParity, m_devinterface->m_nFlowControl);
		pMF->SetStatusText(szStatus);
	}
	else
	{
		m_devinterface->Close();
		pMF->SetStatusText(_T("Disconnected"));

	}
	return true;
}

void CVIMESLISTestOrder::CreateWorkingOrder(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	pMF->BeginTransaction();
	m_lims_orderTbl.SetValue(_T("limso_createdby"), pMF->GetCurrentUser());
	m_lims_orderTbl.SetValue(_T("limso_createddate"), pMF->GetSysDateTime());
	m_lims_orderTbl.SetValue(_T("limso_updatedby"), pMF->GetCurrentUser());
	m_lims_orderTbl.SetValue(_T("limso_updateddate"), pMF->GetSysDateTime());
	m_lims_orderTbl.SetValue(_T("limso_instid"), m_devinterface->m_nInstID);
	m_lims_orderTbl.SetValue(_T("limso_machile"), m_devinterface->m_szMachine);
	m_lims_orderTbl.SetValue(_T("limso_typeid"), pMF->m_wndPatientList.m_szTypeKey);
	m_lims_orderTbl.SetValue(_T("limso_docno"), m_nDocumentNo);
	m_lims_orderTbl.SetValue(_T("limso_refid"), m_nOrderID);
	m_lims_orderTbl.SetValue(_T("limso_pid"), m_szInstPID);
	m_lims_orderTbl.SetValue(_T("limso_pname"), m_szPatientName);
	m_lims_orderTbl.SetValue(_T("limso_age"), m_szAge);
	m_lims_orderTbl.SetValue(_T("limso_sex"), m_szSex);
	m_lims_orderTbl.SetValue(_T("limso_orderdate"), m_szOrderDate);
	m_lims_orderTbl.SetValue(_T("limso_doctor"), m_szDoctor);
	m_lims_orderTbl.SetValue(_T("limso_performdate"), pMF->GetSysDateTime());
	m_lims_orderTbl.SetValue(_T("limso_status"), _T("O"));
	if(m_nOID <= 0)
	{
		szSQL = m_lims_orderTbl.GetInsertSQL(_T("limso_oid"));
_fmsg(_T("%s"), szSQL);
		int ret = pMF->ExecSQL(szSQL);
		if(ret < 0)
		{
			pMF->Rollback();
			return;
		}

		szSQL.Format(_T("SELECT last_value FROM lims_order_limso_oid_seq "));
		rs.ExecSQL(szSQL);
		m_nOID = rs.GetIntValue();
	}
	else
	{
		CString szWhere;
		szSQL = m_lims_orderTbl.GetUpdateSQL(_T("limso_oid,limso_createddate,limso_createdby,limsi_updateddate,limso_updatedby,limso_status"));
		szWhere.Format(_T(" WHERE limso_oid=%ld"), m_nOID);
		szSQL += szWhere;
		int ret = pMF->ExecSQL(szSQL);
		if(ret < 0)
		{
			pMF->Rollback();
			return;
		}
	}

/*
	szSQL.Format(_T("select limsid_index, limsid_code, limsid_codein,limsid_testid ") \
				_T(" from lims_instrument_data ") \
				_T(" left join hms_testorderln on(htol_testid=limsid_testid) ") \
				_T(" where limsid_active='Y' AND limsid_instid=%d and htol_orderno=%ld "), m_nInstrumentID, m_nOrderID);
	rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){
		szSQL.Format(_T("INSERT INTO lims_result( ") \
            _T(" limsr_orderid, limsr_index, limsr_code, limsr_codein, limsr_result, limsr_exresult, limsr_refid, limsr_testid) ") \
			_T(" VALUES (%ld, %d, '%s', '%s', '%s', '%s', %ld, '%s') "), 
			m_nOID, ToInt(rs.GetValue(_T("limsid_index"))), rs.GetValue(_T("limsid_code")), rs.GetValue(_T("limsid_codein")), _T(""), _T(""), m_nOrderID, rs.GetValue(_T("limsid_testid")));
		pMF->ExecSQL(szSQL);
		rs.MoveNext();
	}
*/
	pMF->Commit();

}