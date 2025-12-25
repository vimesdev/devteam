#include "TestOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnSpecimemListLoadDataFnc(CWnd *pWnd){
	return ((CTestOrder*)pWnd)->OnSpecimemListLoadData();
} 
static void _OnSpecimemListDblClickFnc(CWnd *pWnd){
	((CTestOrder*)pWnd)->OnSpecimemListDblClick();
} 
static void _OnSpecimemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTestOrder*)pWnd)->OnSpecimemListSelectChange(nOldItem, nNewItem);
} 
static int _OnSpecimemListDeleteItemFnc(CWnd *pWnd){
	 return ((CTestOrder*)pWnd)->OnSpecimemListDeleteItem();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CTestOrder *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CTestOrder *)pWnd)->OnOrderIDCheckValue();
} 
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CTestOrder *)pWnd)->OnBarcodeCheckValue();
} 
static long _OnInputListLoadDataFnc(CWnd *pWnd){
	return ((CTestOrder*)pWnd)->OnInputListLoadData();
} 
static void _OnInputListDblClickFnc(CWnd *pWnd){
	((CTestOrder*)pWnd)->OnInputListDblClick();
} 
static void _OnInputListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTestOrder*)pWnd)->OnInputListSelectChange(nOldItem, nNewItem);
} 
static int _OnInputListDeleteItemFnc(CWnd *pWnd){
	 return ((CTestOrder*)pWnd)->OnInputListDeleteItem();
} 
static void _OnInputDataSelectFnc(CWnd *pWnd){
	CTestOrder *pVw = (CTestOrder *)pWnd;
	pVw->OnInputDataSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CTestOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CTestOrder *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CTestOrder *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnPaymentStateChangeFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnPaymentStateChange();
} */
/*static void _OnPaymentStateSetfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnPaymentStateSetfocus();} */ 
/*static void _OnPaymentStateKillfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnPaymentStateKillfocus();
} */
static int _OnPaymentStateCheckValueFnc(CWnd *pWnd){
	return ((CTestOrder *)pWnd)->OnPaymentStateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CTestOrder *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CTestOrder *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CTestOrder *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CTestOrder *)pWnd)->OnAddressCheckValue();
} 
static void _OnReadResultSelectFnc(CWnd *pWnd){
	CTestOrder *pVw = (CTestOrder *)pWnd;
	pVw->OnReadResultSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CTestOrder *pVw = (CTestOrder *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTestOrder *pVw = (CTestOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTestOrder *pVw = (CTestOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTestOrder *pVw = (CTestOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddTestOrderFnc(CWnd *pWnd){
	 return ((CTestOrder*)pWnd)->OnAddTestOrder();
} 
static int _OnEditTestOrderFnc(CWnd *pWnd){
	 return ((CTestOrder*)pWnd)->OnEditTestOrder();
} 
static int _OnDeleteTestOrderFnc(CWnd *pWnd){
	 return ((CTestOrder*)pWnd)->OnDeleteTestOrder();
} 
static int _OnSaveTestOrderFnc(CWnd *pWnd){
	 return ((CTestOrder*)pWnd)->OnSaveTestOrder();
} 
static int _OnCancelTestOrderFnc(CWnd *pWnd){
	 return ((CTestOrder*)pWnd)->OnCancelTestOrder();
} 
CTestOrder::CTestOrder(){

	m_nDlgWidth = 625;
	m_nDlgHeight = 655;
	SetDefaultValues();
}
CTestOrder::~CTestOrder(){
}
void CTestOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 3, 610, 618);
	m_wndSpecimemList.Create(this,10, 163, 605, 315); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 28, 100, 50);
	m_wndDocumentNo.Create(this,105, 28, 205, 50); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 210, 28, 280, 50);
	m_wndOrderID.Create(this,285, 28, 385, 50); 
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 390, 28, 480, 50);
	m_wndBarcode.Create(this,485, 28, 605, 50); 
	m_wndInputList.Create(this,10, 320, 605, 613); 
	m_wndInputData.Create(this, _T("&Input Data - F2"), 5, 623, 105, 647);
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 390, 55, 480, 77);
	m_wndOrderDate.Create(this,485, 55, 605, 77); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 55, 100, 77);
	m_wndDoctor.Create(this,105, 55, 385, 77); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 82, 100, 104);
	m_wndObject.Create(this,105, 82, 385, 104); 
	m_wndPaymentStateLabel.Create(this, _T("Payment Fee"), 390, 82, 480, 104);
	m_wndPaymentState.Create(this,485, 82, 605, 104); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 109, 100, 131);
	m_wndPatientName.Create(this,105, 109, 385, 131); 
	m_wndAgeLabel.Create(this, _T("Age"), 390, 109, 480, 131);
	m_wndAge.Create(this,485, 109, 605, 131); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 136, 100, 158);
	m_wndAddress.Create(this,105, 136, 605, 158); 
	m_wndReadResult.Create(this, _T("&Read Result"), 110, 623, 210, 647);
	m_wndUpdate.Create(this, _T("&Update"), 305, 623, 375, 649);
	m_wndSave.Create(this, _T("&Save"), 380, 623, 450, 649);
	m_wndCancel.Create(this, _T("&Cancel"), 455, 623, 525, 649);
	m_wndPrint.Create(this, _T("&Print"), 530, 623, 610, 649);

}
void CTestOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOrderID.SetLimitText(13);
	m_wndOrderID.SetCheckValue(true);
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
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);


	m_wndSpecimemList.InsertColumn(0, _T("Index"), CFMT_TEXT, 30);
	m_wndSpecimemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndSpecimemList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndSpecimemList.InsertColumn(3, _T("Result"), CFMT_TEXT, 70);


	m_wndInputList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndInputList.InsertColumn(1, _T("Code"), CFMT_TEXT, 70);
	m_wndInputList.InsertColumn(2, _T("Code In"), CFMT_TEXT, 70);
	m_wndInputList.InsertColumn(3, _T("Name"), CFMT_TEXT, 150);
	m_wndInputList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 70);
	m_wndInputList.InsertColumn(5, _T("Result"), CFMT_TEXT, 80);
	m_wndInputList.InsertColumn(6, _T("Norm Index"), CFMT_TEXT, 80);
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
void CTestOrder::OnSetWindowEvents(){
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
	//m_wndBarcode.SetEvent(WE_CHANGE, _OnBarcodeChangeFnc);
	//m_wndBarcode.SetEvent(WE_SETFOCUS, _OnBarcodeSetfocusFnc);
	//m_wndBarcode.SetEvent(WE_KILLFOCUS, _OnBarcodeKillfocusFnc);
	m_wndBarcode.SetEvent(WE_CHECKVALUE, _OnBarcodeCheckValueFnc);
	m_wndInputList.SetEvent(WE_SELCHANGE, _OnInputListSelectChangeFnc);
	m_wndInputList.SetEvent(WE_LOADDATA, _OnInputListLoadDataFnc);
	m_wndInputList.SetEvent(WE_DBLCLICK, _OnInputListDblClickFnc);
	m_wndInputList.AddEvent(1, _T("Delete"), _OnInputListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndInputData.SetEvent(WE_CLICK, _OnInputDataSelectFnc);
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
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddTestOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditTestOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteTestOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveTestOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelTestOrderFnc, 0, 'T', VK_CONTROL);

}
void CTestOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_szBarcode);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndPaymentState.GetDlgCtrlID(), m_szPaymentState);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);

}
void CTestOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderno"), m_nOrderID);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_doctor"), m_szDoctor);

}
void CTestOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pcorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pcorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_pcorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
	m_hms_pcorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());
	m_hms_pcorderTbl.SetValue(_T("hpo_orderno"), m_nOrderID);
	m_hms_pcorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pcorderTbl.SetValue(_T("hpo_doctor"), m_szDoctor);

}
void CTestOrder::SetDefaultValues(){

	m_nDocumentNo=0;
	m_nOrderID=0;
	m_szBarcode.Empty();
	m_szOrderDate.Empty();
	m_szDoctor.Empty();
	m_szObject.Empty();
	m_szPaymentState.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szAddress.Empty();

}
int CTestOrder::SetMode(int nMode){ 
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
void CTestOrder::OnSpecimemListDblClick(){
	
} 
void CTestOrder::OnSpecimemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTestOrder::OnSpecimemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTestOrder::OnSpecimemListLoadData(){
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
/*void CTestOrder::OnDocumentNoChange(){
	
} */
/*void CTestOrder::OnDocumentNoSetfocus(){
	
} */
/*void CTestOrder::OnDocumentNoKillfocus(){
	
} */
int CTestOrder::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CTestOrder::OnOrderIDChange(){
	
} */
/*void CTestOrder::OnOrderIDSetfocus(){
	
} */
/*void CTestOrder::OnOrderIDKillfocus(){
	
} */
int CTestOrder::OnOrderIDCheckValue(){
	return 0;
} 
/*void CTestOrder::OnBarcodeChange(){
	
} */
/*void CTestOrder::OnBarcodeSetfocus(){
	
} */
/*void CTestOrder::OnBarcodeKillfocus(){
	
} */
int CTestOrder::OnBarcodeCheckValue(){
	return 0;
} 
void CTestOrder::OnInputListDblClick(){
	
} 
void CTestOrder::OnInputListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTestOrder::OnInputListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTestOrder::OnInputListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndInputList.BeginLoad(); 
	m_wndInputList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInputList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("CodeIn")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Result")), 
			rs.GetValue(_T("NormIndex")), NULL);
		rs.MoveNext();
	}
	m_wndInputList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CTestOrder::OnInputDataSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CTestOrder::OnOrderDateChange(){
	
} */
/*void CTestOrder::OnOrderDateSetfocus(){
	
} */
/*void CTestOrder::OnOrderDateKillfocus(){
	
} */
int CTestOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CTestOrder::OnDoctorChange(){
	
} */
/*void CTestOrder::OnDoctorSetfocus(){
	
} */
/*void CTestOrder::OnDoctorKillfocus(){
	
} */
int CTestOrder::OnDoctorCheckValue(){
	return 0;
} 
/*void CTestOrder::OnObjectChange(){
	
} */
/*void CTestOrder::OnObjectSetfocus(){
	
} */
/*void CTestOrder::OnObjectKillfocus(){
	
} */
int CTestOrder::OnObjectCheckValue(){
	return 0;
} 
/*void CTestOrder::OnPaymentStateChange(){
	
} */
/*void CTestOrder::OnPaymentStateSetfocus(){
	
} */
/*void CTestOrder::OnPaymentStateKillfocus(){
	
} */
int CTestOrder::OnPaymentStateCheckValue(){
	return 0;
} 
/*void CTestOrder::OnPatientNameChange(){
	
} */
/*void CTestOrder::OnPatientNameSetfocus(){
	
} */
/*void CTestOrder::OnPatientNameKillfocus(){
	
} */
int CTestOrder::OnPatientNameCheckValue(){
	return 0;
} 
/*void CTestOrder::OnAgeChange(){
	
} */
/*void CTestOrder::OnAgeSetfocus(){
	
} */
/*void CTestOrder::OnAgeKillfocus(){
	
} */
int CTestOrder::OnAgeCheckValue(){
	return 0;
} 
/*void CTestOrder::OnAddressChange(){
	
} */
/*void CTestOrder::OnAddressSetfocus(){
	
} */
/*void CTestOrder::OnAddressKillfocus(){
	
} */
int CTestOrder::OnAddressCheckValue(){
	return 0;
} 
void CTestOrder::OnReadResultSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTestOrder::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTestOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTestOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTestOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTestOrder::OnAddTestOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add TestOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CTestOrder::OnEditTestOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit TestOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CTestOrder::OnDeleteTestOrder(){
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
int CTestOrder::OnSaveTestOrder(){
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
int CTestOrder::OnCancelTestOrder(){
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
int CTestOrder::OnTestOrderListLoadData(){
	return 0;
}
