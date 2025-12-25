#include "PACSOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnSpecimemListLoadDataFnc(CWnd *pWnd){
	return ((CPACSOrder*)pWnd)->OnSpecimemListLoadData();
} 
static void _OnSpecimemListDblClickFnc(CWnd *pWnd){
	((CPACSOrder*)pWnd)->OnSpecimemListDblClick();
} 
static void _OnSpecimemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSOrder*)pWnd)->OnSpecimemListSelectChange(nOldItem, nNewItem);
} 
static int _OnSpecimemListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSOrder*)pWnd)->OnSpecimemListDeleteItem();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnBarcodeCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnPaymentStateChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnPaymentStateChange();
} */
/*static void _OnPaymentStateSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnPaymentStateSetfocus();} */ 
/*static void _OnPaymentStateKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnPaymentStateKillfocus();
} */
static int _OnPaymentStateCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnPaymentStateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnAgeCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CPACSOrder *pVw = (CPACSOrder *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPACSOrder *pVw = (CPACSOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSOrder *pVw = (CPACSOrder *)pWnd;
	pVw->OnPrintSelect();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnRemarkChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnRemarkChange();
} */
/*static void _OnRemarkSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnRemarkSetfocus();} */ 
/*static void _OnRemarkKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnRemarkKillfocus();
} */
static int _OnRemarkCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnRemarkCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CPACSOrder *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CPACSOrder *)pWnd)->OnConclusionCheckValue();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPACSOrder *pVw = (CPACSOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnImagePreviewSelectFnc(CWnd *pWnd){
	CPACSOrder *pVw = (CPACSOrder *)pWnd;
	pVw->OnImagePreviewSelect();
} 
static int _OnAddPACSOrderFnc(CWnd *pWnd){
	 return ((CPACSOrder*)pWnd)->OnAddPACSOrder();
} 
static int _OnEditPACSOrderFnc(CWnd *pWnd){
	 return ((CPACSOrder*)pWnd)->OnEditPACSOrder();
} 
static int _OnDeletePACSOrderFnc(CWnd *pWnd){
	 return ((CPACSOrder*)pWnd)->OnDeletePACSOrder();
} 
static int _OnSavePACSOrderFnc(CWnd *pWnd){
	 return ((CPACSOrder*)pWnd)->OnSavePACSOrder();
} 
static int _OnCancelPACSOrderFnc(CWnd *pWnd){
	 return ((CPACSOrder*)pWnd)->OnCancelPACSOrder();
} 
CPACSOrder::CPACSOrder(){

	m_nDlgWidth = 625;
	m_nDlgHeight = 655;
	SetDefaultValues();
}
CPACSOrder::~CPACSOrder(){
}
void CPACSOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 610, 620);
	m_wndSpecimemList.Create(this,11, 163, 606, 253); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 211, 28, 281, 50);
	m_wndOrderNo.Create(this,286, 28, 386, 50); 
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 391, 28, 481, 50);
	m_wndBarcode.Create(this,486, 28, 606, 50); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 391, 55, 481, 77);
	m_wndOrderDate.Create(this,486, 55, 606, 77); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 11, 55, 101, 77);
	m_wndDoctor.Create(this,106, 55, 386, 77); 
	m_wndObjectLabel.Create(this, _T("Object"), 11, 82, 101, 104);
	m_wndObject.Create(this,106, 82, 386, 104); 
	m_wndPaymentStateLabel.Create(this, _T("Payment Fee"), 391, 82, 481, 104);
	m_wndPaymentState.Create(this,486, 82, 606, 104); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 11, 109, 101, 131);
	m_wndPatientName.Create(this,106, 109, 386, 131); 
	m_wndAgeLabel.Create(this, _T("Age"), 391, 109, 481, 131);
	m_wndAge.Create(this,486, 109, 606, 131); 
	m_wndUpdate.Create(this, _T("&Update"), 275, 625, 355, 649);
	m_wndSave.Create(this, _T("&Save"), 360, 625, 440, 649);
	m_wndPrint.Create(this, _T("&Print"), 530, 625, 610, 649);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 11, 28, 101, 50);
	m_wndDocumentNo.Create(this,106, 28, 206, 50); 
	m_wndAddressLabel.Create(this, _T("Address"), 11, 136, 101, 158);
	m_wndAddress.Create(this,106, 136, 606, 158); 
	m_wndRemarkLabel.Create(this, _T("Remark"), 11, 258, 101, 280);
	m_wndRemark.Create(this,106, 258, 606, 538); 
	m_wndConclusionLabel.Create(this, _T("Conclusion"), 11, 543, 101, 565);
	m_wndConclusion.Create(this,106, 543, 606, 615); 
	m_wndCancel.Create(this, _T("&Cancel"), 445, 625, 525, 649);
	m_wndImagePreview.Create(this, _T("Image Preview"), 5, 625, 105, 647);

}
void CPACSOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOrderNo.SetLimitText(13);
	m_wndOrderNo.SetCheckValue(true);
	m_wndBarcode.SetLimitText(35);
	m_wndBarcode.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndDoctor.SetLimitText(15);
	m_wndDoctor.SetCheckValue(true);
	m_wndObject.SetLimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndPaymentState.SetLimitText(35);
	m_wndPaymentState.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndRemark.SetLimitText(35);
	m_wndRemark.SetCheckValue(true);
	m_wndConclusion.SetLimitText(35);
	m_wndConclusion.SetCheckValue(true);


	m_wndSpecimemList.InsertColumn(0, _T("Index"), CFMT_TEXT, 30);
	m_wndSpecimemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndSpecimemList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndSpecimemList.InsertColumn(3, _T("Result"), CFMT_TEXT, 70);
	m_hms_pcorderTbl.SetTableName(_T("hms_pcorder"));
	m_hms_pcorderTbl.AddField(_T("hpo_createdby"), dfText, 15); 
	m_hms_pcorderTbl.AddField(_T("hpo_createddate"), dfDateTime); 
	m_hms_pcorderTbl.AddField(_T("hpo_updatedby"), dfText, 15); 
	m_hms_pcorderTbl.AddField(_T("hpo_updateddate"), dfDateTime); 
	m_hms_pcorderTbl.AddField(_T("hpo_group"), dfText, 3); 
	m_hms_pcorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pcorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pcorderTbl.AddField(_T("hpo_orderno"), dfText, 13); 
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

}
void CPACSOrder::OnSetWindowEvents(){
	m_wndSpecimemList.SetEvent(WE_SELCHANGE, _OnSpecimemListSelectChangeFnc);
	m_wndSpecimemList.SetEvent(WE_LOADDATA, _OnSpecimemListLoadDataFnc);
	m_wndSpecimemList.SetEvent(WE_DBLCLICK, _OnSpecimemListDblClickFnc);
	m_wndSpecimemList.AddEvent(1, _T("Delete"), _OnSpecimemListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndBarcode.SetEvent(WE_CHANGE, _OnBarcodeChangeFnc);
	//m_wndBarcode.SetEvent(WE_SETFOCUS, _OnBarcodeSetfocusFnc);
	//m_wndBarcode.SetEvent(WE_KILLFOCUS, _OnBarcodeKillfocusFnc);
	m_wndBarcode.SetEvent(WE_CHECKVALUE, _OnBarcodeCheckValueFnc);
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
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndRemark.SetEvent(WE_CHANGE, _OnRemarkChangeFnc);
	//m_wndRemark.SetEvent(WE_SETFOCUS, _OnRemarkSetfocusFnc);
	//m_wndRemark.SetEvent(WE_KILLFOCUS, _OnRemarkKillfocusFnc);
	m_wndRemark.SetEvent(WE_CHECKVALUE, _OnRemarkCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndImagePreview.SetEvent(WE_CLICK, _OnImagePreviewSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPACSOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPACSOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePACSOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePACSOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPACSOrderFnc, 0, 'T', VK_CONTROL);

}
void CPACSOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_szBarcode);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndPaymentState.GetDlgCtrlID(), m_szPaymentState);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndRemark.GetDlgCtrlID(), m_szRemark);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);

}
void CPACSOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderno"), m_szOrderNo);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_doctor"), m_szDoctor);

}
void CPACSOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pcorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pcorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_pcorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
	m_hms_pcorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());
	m_hms_pcorderTbl.SetValue(_T("hpo_orderno"), m_szOrderNo);
	m_hms_pcorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pcorderTbl.SetValue(_T("hpo_doctor"), m_szDoctor);

}
void CPACSOrder::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szBarcode.Empty();
	m_szOrderDate.Empty();
	m_szDoctor.Empty();
	m_szObject.Empty();
	m_szPaymentState.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_nDocumentNo=0;
	m_szAddress.Empty();
	m_szRemark.Empty();
	m_szConclusion.Empty();

}
int CPACSOrder::SetMode(int nMode){ 
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
void CPACSOrder::OnSpecimemListDblClick(){
	
} 
void CPACSOrder::OnSpecimemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSOrder::OnSpecimemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSOrder::OnSpecimemListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSpecimemList.BeginLoad(); 
	m_wndSpecimemList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSpecimemList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Result")), NULL);
		rs.MoveNext();
	}
	m_wndSpecimemList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CPACSOrder::OnOrderNoChange(){
	
} */
/*void CPACSOrder::OnOrderNoSetfocus(){
	
} */
/*void CPACSOrder::OnOrderNoKillfocus(){
	
} */
int CPACSOrder::OnOrderNoCheckValue(){
	return 0;
} 
/*void CPACSOrder::OnBarcodeChange(){
	
} */
/*void CPACSOrder::OnBarcodeSetfocus(){
	
} */
/*void CPACSOrder::OnBarcodeKillfocus(){
	
} */
int CPACSOrder::OnBarcodeCheckValue(){
	return 0;
} 
/*void CPACSOrder::OnOrderDateChange(){
	
} */
/*void CPACSOrder::OnOrderDateSetfocus(){
	
} */
/*void CPACSOrder::OnOrderDateKillfocus(){
	
} */
int CPACSOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CPACSOrder::OnDoctorChange(){
	
} */
/*void CPACSOrder::OnDoctorSetfocus(){
	
} */
/*void CPACSOrder::OnDoctorKillfocus(){
	
} */
int CPACSOrder::OnDoctorCheckValue(){
	return 0;
} 
/*void CPACSOrder::OnObjectChange(){
	
} */
/*void CPACSOrder::OnObjectSetfocus(){
	
} */
/*void CPACSOrder::OnObjectKillfocus(){
	
} */
int CPACSOrder::OnObjectCheckValue(){
	return 0;
} 
/*void CPACSOrder::OnPaymentStateChange(){
	
} */
/*void CPACSOrder::OnPaymentStateSetfocus(){
	
} */
/*void CPACSOrder::OnPaymentStateKillfocus(){
	
} */
int CPACSOrder::OnPaymentStateCheckValue(){
	return 0;
} 
/*void CPACSOrder::OnPatientNameChange(){
	
} */
/*void CPACSOrder::OnPatientNameSetfocus(){
	
} */
/*void CPACSOrder::OnPatientNameKillfocus(){
	
} */
int CPACSOrder::OnPatientNameCheckValue(){
	return 0;
} 
/*void CPACSOrder::OnAgeChange(){
	
} */
/*void CPACSOrder::OnAgeSetfocus(){
	
} */
/*void CPACSOrder::OnAgeKillfocus(){
	
} */
int CPACSOrder::OnAgeCheckValue(){
	return 0;
} 
void CPACSOrder::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CPACSOrder::OnDocumentNoChange(){
	
} */
/*void CPACSOrder::OnDocumentNoSetfocus(){
	
} */
/*void CPACSOrder::OnDocumentNoKillfocus(){
	
} */
int CPACSOrder::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CPACSOrder::OnAddressChange(){
	
} */
/*void CPACSOrder::OnAddressSetfocus(){
	
} */
/*void CPACSOrder::OnAddressKillfocus(){
	
} */
int CPACSOrder::OnAddressCheckValue(){
	return 0;
} 
/*void CPACSOrder::OnRemarkChange(){
	
} */
/*void CPACSOrder::OnRemarkSetfocus(){
	
} */
/*void CPACSOrder::OnRemarkKillfocus(){
	
} */
int CPACSOrder::OnRemarkCheckValue(){
	return 0;
} 
/*void CPACSOrder::OnConclusionChange(){
	
} */
/*void CPACSOrder::OnConclusionSetfocus(){
	
} */
/*void CPACSOrder::OnConclusionKillfocus(){
	
} */
int CPACSOrder::OnConclusionCheckValue(){
	return 0;
} 
void CPACSOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSOrder::OnImagePreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSOrder::OnAddPACSOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add PACSOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CPACSOrder::OnEditPACSOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit PACSOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CPACSOrder::OnDeletePACSOrder(){
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
 		OnCancelPACSOrder(); 
 	}
return 0;
 } 
int CPACSOrder::OnSavePACSOrder(){
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
 		//OnPACSOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSOrder::OnCancelPACSOrder(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CPACSOrder::OnPACSOrderListLoadData(){
	return 0;
}
