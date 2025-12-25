#include "LabTestOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnSpecimemListLoadDataFnc(CWnd *pWnd){
	return ((CLabTestOrder*)pWnd)->OnSpecimemListLoadData();
} 
static void _OnSpecimemListDblClickFnc(CWnd *pWnd){
	((CLabTestOrder*)pWnd)->OnSpecimemListDblClick();
} 
static void _OnSpecimemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLabTestOrder*)pWnd)->OnSpecimemListSelectChange(nOldItem, nNewItem);
} 
static int _OnSpecimemListDeleteItemFnc(CWnd *pWnd){
	 return ((CLabTestOrder*)pWnd)->OnSpecimemListDeleteItem();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CLabTestOrder *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CLabTestOrder *)pWnd)->OnBarcodeCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CLabTestOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CLabTestOrder *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnPerformedDateChangeFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPerformedDateChange();
} */
/*static void _OnPerformedDateSetfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPerformedDateSetfocus();} */ 
/*static void _OnPerformedDateKillfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPerformedDateKillfocus();
} */
static int _OnPerformedDateCheckValueFnc(CWnd *pWnd){
	return ((CLabTestOrder *)pWnd)->OnPerformedDateCheckValue();
} 
static void _OnPerformerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLabTestOrder* )pWnd)->OnPerformerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformerSelendokFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPerformerSelendok();
}
/*static void _OnPerformerSetfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPerformerKillfocus();
}*/
/*static void _OnPerformerKillfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPerformerKillfocus();
}*/
static long _OnPerformerLoadDataFnc(CWnd *pWnd){
	return ((CLabTestOrder *)pWnd)->OnPerformerLoadData();
}
/*static void _OnPerformerAddNewFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPerformerAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CLabTestOrder *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CLabTestOrder *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnOrderStatusChangeFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnOrderStatusChange();
} */
/*static void _OnOrderStatusSetfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnOrderStatusSetfocus();} */ 
/*static void _OnOrderStatusKillfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnOrderStatusKillfocus();
} */
static int _OnOrderStatusCheckValueFnc(CWnd *pWnd){
	return ((CLabTestOrder *)pWnd)->OnOrderStatusCheckValue();
} 
/*static void _OnPaymentStateChangeFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPaymentStateChange();
} */
/*static void _OnPaymentStateSetfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPaymentStateSetfocus();} */ 
/*static void _OnPaymentStateKillfocusFnc(CWnd *pWnd){
	((CLabTestOrder *)pWnd)->OnPaymentStateKillfocus();
} */
static int _OnPaymentStateCheckValueFnc(CWnd *pWnd){
	return ((CLabTestOrder *)pWnd)->OnPaymentStateCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CLabTestOrder *pVw = (CLabTestOrder *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CLabTestOrder *pVw = (CLabTestOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CLabTestOrder *pVw = (CLabTestOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddLabTestOrderFnc(CWnd *pWnd){
	 return ((CLabTestOrder*)pWnd)->OnAddLabTestOrder();
} 
static int _OnEditLabTestOrderFnc(CWnd *pWnd){
	 return ((CLabTestOrder*)pWnd)->OnEditLabTestOrder();
} 
static int _OnDeleteLabTestOrderFnc(CWnd *pWnd){
	 return ((CLabTestOrder*)pWnd)->OnDeleteLabTestOrder();
} 
static int _OnSaveLabTestOrderFnc(CWnd *pWnd){
	 return ((CLabTestOrder*)pWnd)->OnSaveLabTestOrder();
} 
static int _OnCancelLabTestOrderFnc(CWnd *pWnd){
	 return ((CLabTestOrder*)pWnd)->OnCancelLabTestOrder();
} 
CLabTestOrder::CLabTestOrder(){

	m_nDlgWidth = 445;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
CLabTestOrder::~CLabTestOrder(){
}
void CLabTestOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 435, 521);
	m_wndSpecimemList.Create(this,9, 162, 431, 516); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 27, 100, 49);
	m_wndOrderNo.Create(this,105, 27, 225, 49); 
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 230, 26, 300, 48);
	m_wndBarcode.Create(this,305, 26, 431, 48); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 53, 100, 75);
	m_wndOrderDate.Create(this,105, 53, 225, 75); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 230, 53, 300, 75);
	m_wndDoctor.Create(this,305, 53, 431, 75); 
	m_wndPerformedDateLabel.Create(this, _T("Performed Date"), 10, 81, 100, 103);
	m_wndPerformedDate.Create(this,105, 81, 225, 103); 
	m_wndPerformerLabel.Create(this, _T("Performer"), 230, 81, 300, 103);
	m_wndPerformer.Create(this,305, 81, 431, 103); 
	m_wndPatientName.Create(this,105, 108, 299, 130); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 108, 100, 130);
	m_wndAgeLabel.Create(this, _T("Age"), 304, 108, 347, 130);
	m_wndAge.Create(this,352, 108, 431, 130); 
	m_wndOrderStatusLabel.Create(this, _T("Order Status"), 10, 135, 100, 157);
	m_wndOrderStatus.Create(this,105, 135, 225, 157); 
	m_wndPaymentStateLabel.Create(this, _T("Payment"), 230, 135, 300, 157);
	m_wndPaymentState.Create(this,305, 135, 431, 157); 
	m_wndUpdate.Create(this, _T("&Update"), 215, 526, 285, 548);
	m_wndSave.Create(this, _T("&Save"), 290, 526, 360, 548);
	m_wndCancel.Create(this, _T("&Cancel"), 365, 526, 435, 548);

}
void CLabTestOrder::OnInitializeComponents(){
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
	m_wndPerformedDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPerformedDate.SetCheckValue(true);
	m_wndPerformer.SetCheckValue(true);
	m_wndPerformer.LimitText(35);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);
	m_wndOrderStatus.SetLimitText(35);
	m_wndOrderStatus.SetCheckValue(true);
	m_wndPaymentState.SetLimitText(35);
	m_wndPaymentState.SetCheckValue(true);


	m_wndSpecimemList.InsertColumn(0, _T("Index"), CFMT_TEXT, 30);
	m_wndSpecimemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndSpecimemList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndSpecimemList.InsertColumn(3, _T("Result"), CFMT_TEXT, 80);


	m_wndPerformer.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPerformer.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
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
void CLabTestOrder::OnSetWindowEvents(){
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
	//m_wndPerformedDate.SetEvent(WE_CHANGE, _OnPerformedDateChangeFnc);
	//m_wndPerformedDate.SetEvent(WE_SETFOCUS, _OnPerformedDateSetfocusFnc);
	//m_wndPerformedDate.SetEvent(WE_KILLFOCUS, _OnPerformedDateKillfocusFnc);
	m_wndPerformedDate.SetEvent(WE_CHECKVALUE, _OnPerformedDateCheckValueFnc);
	m_wndPerformer.SetEvent(WE_SELENDOK, _OnPerformerSelendokFnc);
	//m_wndPerformer.SetEvent(WE_SETFOCUS, _OnPerformerSetfocusFnc);
	//m_wndPerformer.SetEvent(WE_KILLFOCUS, _OnPerformerKillfocusFnc);
	m_wndPerformer.SetEvent(WE_SELCHANGE, _OnPerformerSelectChangeFnc);
	m_wndPerformer.SetEvent(WE_LOADDATA, _OnPerformerLoadDataFnc);
	//m_wndPerformer.SetEvent(WE_ADDNEW, _OnPerformerAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndOrderStatus.SetEvent(WE_CHANGE, _OnOrderStatusChangeFnc);
	//m_wndOrderStatus.SetEvent(WE_SETFOCUS, _OnOrderStatusSetfocusFnc);
	//m_wndOrderStatus.SetEvent(WE_KILLFOCUS, _OnOrderStatusKillfocusFnc);
	m_wndOrderStatus.SetEvent(WE_CHECKVALUE, _OnOrderStatusCheckValueFnc);
	//m_wndPaymentState.SetEvent(WE_CHANGE, _OnPaymentStateChangeFnc);
	//m_wndPaymentState.SetEvent(WE_SETFOCUS, _OnPaymentStateSetfocusFnc);
	//m_wndPaymentState.SetEvent(WE_KILLFOCUS, _OnPaymentStateKillfocusFnc);
	m_wndPaymentState.SetEvent(WE_CHECKVALUE, _OnPaymentStateCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLabTestOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLabTestOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLabTestOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLabTestOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLabTestOrderFnc, 0, 'T', VK_CONTROL);

}
void CLabTestOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_szBarcode);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_TextEx(pDX, m_wndPerformedDate.GetDlgCtrlID(), m_szPerformedDate);
	DDX_TextEx(pDX, m_wndPerformer.GetDlgCtrlID(), m_szPerformerKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndOrderStatus.GetDlgCtrlID(), m_szOrderStatus);
	DDX_Text(pDX, m_wndPaymentState.GetDlgCtrlID(), m_szPaymentState);

}
void CLabTestOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderno"), m_szOrderNo);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_doctor"), m_szDoctor);

}
void CLabTestOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pcorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser();
	m_hms_pcorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime();
	m_hms_pcorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser();
	m_hms_pcorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime();
	m_hms_pcorderTbl.SetValue(_T("hpo_orderno"), m_szOrderNo);
	m_hms_pcorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pcorderTbl.SetValue(_T("hpo_doctor"), m_szDoctor);

}
void CLabTestOrder::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szBarcode.Empty();
	m_szOrderDate.Empty();
	m_szDoctor.Empty();
	m_szPerformedDate.Empty();
	m_szPerformerKey.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szOrderStatus.Empty();
	m_szPaymentState.Empty();

}
int CLabTestOrder::SetMode(int nMode){ 
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
void CLabTestOrder::OnSpecimemListDblClick(){
	
} 
void CLabTestOrder::OnSpecimemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLabTestOrder::OnSpecimemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLabTestOrder::OnSpecimemListLoadData(){
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
/*void CLabTestOrder::OnOrderNoChange(){
	
} */
/*void CLabTestOrder::OnOrderNoSetfocus(){
	
} */
/*void CLabTestOrder::OnOrderNoKillfocus(){
	
} */
int CLabTestOrder::OnOrderNoCheckValue(){
	return 0;
} 
/*void CLabTestOrder::OnBarcodeChange(){
	
} */
/*void CLabTestOrder::OnBarcodeSetfocus(){
	
} */
/*void CLabTestOrder::OnBarcodeKillfocus(){
	
} */
int CLabTestOrder::OnBarcodeCheckValue(){
	return 0;
} 
/*void CLabTestOrder::OnOrderDateChange(){
	
} */
/*void CLabTestOrder::OnOrderDateSetfocus(){
	
} */
/*void CLabTestOrder::OnOrderDateKillfocus(){
	
} */
int CLabTestOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CLabTestOrder::OnDoctorChange(){
	
} */
/*void CLabTestOrder::OnDoctorSetfocus(){
	
} */
/*void CLabTestOrder::OnDoctorKillfocus(){
	
} */
int CLabTestOrder::OnDoctorCheckValue(){
	return 0;
} 
/*void CLabTestOrder::OnPerformedDateChange(){
	
} */
/*void CLabTestOrder::OnPerformedDateSetfocus(){
	
} */
/*void CLabTestOrder::OnPerformedDateKillfocus(){
	
} */
int CLabTestOrder::OnPerformedDateCheckValue(){
	return 0;
} 
void CLabTestOrder::OnPerformerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLabTestOrder::OnPerformerSelendok(){
	 
}
/*void CLabTestOrder::OnPerformerSetfocus(){
	
}*/
/*void CLabTestOrder::OnPerformerKillfocus(){
	
}*/
long CLabTestOrder::OnPerformerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformer.IsSearchKey()){
	};
	m_wndPerformer.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformer.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLabTestOrder::OnPerformerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CLabTestOrder::OnPatientNameChange(){
	
} */
/*void CLabTestOrder::OnPatientNameSetfocus(){
	
} */
/*void CLabTestOrder::OnPatientNameKillfocus(){
	
} */
int CLabTestOrder::OnPatientNameCheckValue(){
	return 0;
} 
/*void CLabTestOrder::OnAgeChange(){
	
} */
/*void CLabTestOrder::OnAgeSetfocus(){
	
} */
/*void CLabTestOrder::OnAgeKillfocus(){
	
} */
int CLabTestOrder::OnAgeCheckValue(){
	return 0;
} 
/*void CLabTestOrder::OnOrderStatusChange(){
	
} */
/*void CLabTestOrder::OnOrderStatusSetfocus(){
	
} */
/*void CLabTestOrder::OnOrderStatusKillfocus(){
	
} */
int CLabTestOrder::OnOrderStatusCheckValue(){
	return 0;
} 
/*void CLabTestOrder::OnPaymentStateChange(){
	
} */
/*void CLabTestOrder::OnPaymentStateSetfocus(){
	
} */
/*void CLabTestOrder::OnPaymentStateKillfocus(){
	
} */
int CLabTestOrder::OnPaymentStateCheckValue(){
	return 0;
} 
void CLabTestOrder::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLabTestOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLabTestOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLabTestOrder::OnAddLabTestOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add LabTestOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CLabTestOrder::OnEditLabTestOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit LabTestOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CLabTestOrder::OnDeleteLabTestOrder(){
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
 		OnCancelLabTestOrder(); 
 	}
return 0;
 } 
int CLabTestOrder::OnSaveLabTestOrder(){
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
 		//OnLabTestOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLabTestOrder::OnCancelLabTestOrder(){
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
int CLabTestOrder::OnLabTestOrderListLoadData(){
	return 0;
}
