#include "LabOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnSpecimemListLoadDataFnc(CWnd *pWnd){
	return ((CLabOrder*)pWnd)->OnSpecimemListLoadData();
} 
static void _OnSpecimemListDblClickFnc(CWnd *pWnd){
	((CLabOrder*)pWnd)->OnSpecimemListDblClick();
} 
static void _OnSpecimemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLabOrder*)pWnd)->OnSpecimemListSelectChange(nOldItem, nNewItem);
} 
static int _OnSpecimemListDeleteItemFnc(CWnd *pWnd){
	 return ((CLabOrder*)pWnd)->OnSpecimemListDeleteItem();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CLabOrder *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CLabOrder *)pWnd)->OnBarcodeCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CLabOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnDoctorChangeFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnDoctorChange();
} */
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnDoctorSetfocus();} */ 
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CLabOrder *)pWnd)->OnDoctorCheckValue();
} 
/*static void _OnPerformedDateChangeFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPerformedDateChange();
} */
/*static void _OnPerformedDateSetfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPerformedDateSetfocus();} */ 
/*static void _OnPerformedDateKillfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPerformedDateKillfocus();
} */
static int _OnPerformedDateCheckValueFnc(CWnd *pWnd){
	return ((CLabOrder *)pWnd)->OnPerformedDateCheckValue();
} 
static void _OnPerformerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLabOrder* )pWnd)->OnPerformerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformerSelendokFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPerformerSelendok();
}
/*static void _OnPerformerSetfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPerformerKillfocus();
}*/
/*static void _OnPerformerKillfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPerformerKillfocus();
}*/
static long _OnPerformerLoadDataFnc(CWnd *pWnd){
	return ((CLabOrder *)pWnd)->OnPerformerLoadData();
}
/*static void _OnPerformerAddNewFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPerformerAddNew();
}*/
/*static void _OnObjectChangeFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnObjectChange();
} */
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnObjectSetfocus();} */ 
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CLabOrder *)pWnd)->OnObjectCheckValue();
} 
/*static void _OnPaymentStateChangeFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPaymentStateChange();
} */
/*static void _OnPaymentStateSetfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPaymentStateSetfocus();} */ 
/*static void _OnPaymentStateKillfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPaymentStateKillfocus();
} */
static int _OnPaymentStateCheckValueFnc(CWnd *pWnd){
	return ((CLabOrder *)pWnd)->OnPaymentStateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CLabOrder *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CLabOrder *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CLabOrder *)pWnd)->OnAgeCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CLabOrder *pVw = (CLabOrder *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CLabOrder *pVw = (CLabOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CLabOrder *pVw = (CLabOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CLabOrder *pVw = (CLabOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddLabOrderFnc(CWnd *pWnd){
	 return ((CLabOrder*)pWnd)->OnAddLabOrder();
} 
static int _OnEditLabOrderFnc(CWnd *pWnd){
	 return ((CLabOrder*)pWnd)->OnEditLabOrder();
} 
static int _OnDeleteLabOrderFnc(CWnd *pWnd){
	 return ((CLabOrder*)pWnd)->OnDeleteLabOrder();
} 
static int _OnSaveLabOrderFnc(CWnd *pWnd){
	 return ((CLabOrder*)pWnd)->OnSaveLabOrder();
} 
static int _OnCancelLabOrderFnc(CWnd *pWnd){
	 return ((CLabOrder*)pWnd)->OnCancelLabOrder();
} 
CLabOrder::CLabOrder(){

	m_nDlgWidth = 410;
	m_nDlgHeight = 505;
	SetDefaultValues();
}
CLabOrder::~CLabOrder(){
}
void CLabOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 405, 473);
	m_wndSpecimemList.Create(this,10, 161, 400, 467); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 26, 100, 48);
	m_wndOrderNo.Create(this,105, 26, 202, 48); 
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 207, 26, 278, 48);
	m_wndBarcode.Create(this,283, 26, 401, 48); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 53, 100, 75);
	m_wndOrderDate.Create(this,105, 53, 202, 75); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 207, 53, 278, 75);
	m_wndDoctor.Create(this,283, 53, 401, 75); 
	m_wndPerformedDateLabel.Create(this, _T("Performed Date"), 10, 80, 100, 102);
	m_wndPerformedDate.Create(this,105, 80, 202, 102); 
	m_wndPerformerLabel.Create(this, _T("Performer"), 207, 80, 278, 102);
	m_wndPerformer.Create(this,283, 80, 401, 102); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 107, 100, 129);
	m_wndObject.Create(this,105, 107, 202, 129); 
	m_wndPaymentStateLabel.Create(this, _T("Payment Fee"), 207, 107, 278, 129);
	m_wndPaymentState.Create(this,283, 107, 400, 129); 
	m_wndPatientName.Create(this,105, 134, 278, 156); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 134, 100, 156);
	m_wndAgeLabel.Create(this, _T("Age"), 283, 134, 326, 156);
	m_wndAge.Create(this,331, 134, 400, 156); 
	m_wndUpdate.Create(this, _T("&Update"), 110, 478, 180, 500);
	m_wndSave.Create(this, _T("&Save"), 185, 478, 255, 500);
	m_wndCancel.Create(this, _T("&Cancel"), 260, 478, 330, 500);
	m_wndPrint.Create(this, _T("&Print"), 335, 478, 405, 500);

}
void CLabOrder::OnInitializeComponents(){
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
	m_wndObject.SetLimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndPaymentState.SetLimitText(35);
	m_wndPaymentState.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);


	m_wndSpecimemList.InsertColumn(0, _T("Index"), CFMT_TEXT, 30);
	m_wndSpecimemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndSpecimemList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndSpecimemList.InsertColumn(3, _T("Result"), CFMT_TEXT, 60);


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
void CLabOrder::OnSetWindowEvents(){
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
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLabOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLabOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLabOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLabOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLabOrderFnc, 0, 'T', VK_CONTROL);

}
void CLabOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_nOrderNo);
	DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_szBarcode);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_TextEx(pDX, m_wndPerformedDate.GetDlgCtrlID(), m_szPerformedDate);
	DDX_TextEx(pDX, m_wndPerformer.GetDlgCtrlID(), m_szPerformerKey);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndPaymentState.GetDlgCtrlID(), m_szPaymentState);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);

}
void CLabOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderno"), m_nOrderNo);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_doctor"), m_szDoctor);

}
void CLabOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pcorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser();
	m_hms_pcorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime();
	m_hms_pcorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser();
	m_hms_pcorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime();
	m_hms_pcorderTbl.SetValue(_T("hpo_orderno"), m_nOrderNo);
	m_hms_pcorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pcorderTbl.SetValue(_T("hpo_doctor"), m_szDoctor);

}
void CLabOrder::SetDefaultValues(){

	m_nOrderNo=0;
	m_szBarcode.Empty();
	m_szOrderDate.Empty();
	m_szDoctor.Empty();
	m_szPerformedDate.Empty();
	m_szPerformerKey.Empty();
	m_szObject.Empty();
	m_szPaymentState.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();

}
int CLabOrder::SetMode(int nMode){ 
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
void CLabOrder::OnSpecimemListDblClick(){
	
} 
void CLabOrder::OnSpecimemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLabOrder::OnSpecimemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLabOrder::OnSpecimemListLoadData(){
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
/*void CLabOrder::OnOrderNoChange(){
	
} */
/*void CLabOrder::OnOrderNoSetfocus(){
	
} */
/*void CLabOrder::OnOrderNoKillfocus(){
	
} */
int CLabOrder::OnOrderNoCheckValue(){
	return 0;
} 
/*void CLabOrder::OnBarcodeChange(){
	
} */
/*void CLabOrder::OnBarcodeSetfocus(){
	
} */
/*void CLabOrder::OnBarcodeKillfocus(){
	
} */
int CLabOrder::OnBarcodeCheckValue(){
	return 0;
} 
/*void CLabOrder::OnOrderDateChange(){
	
} */
/*void CLabOrder::OnOrderDateSetfocus(){
	
} */
/*void CLabOrder::OnOrderDateKillfocus(){
	
} */
int CLabOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CLabOrder::OnDoctorChange(){
	
} */
/*void CLabOrder::OnDoctorSetfocus(){
	
} */
/*void CLabOrder::OnDoctorKillfocus(){
	
} */
int CLabOrder::OnDoctorCheckValue(){
	return 0;
} 
/*void CLabOrder::OnPerformedDateChange(){
	
} */
/*void CLabOrder::OnPerformedDateSetfocus(){
	
} */
/*void CLabOrder::OnPerformedDateKillfocus(){
	
} */
int CLabOrder::OnPerformedDateCheckValue(){
	return 0;
} 
void CLabOrder::OnPerformerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLabOrder::OnPerformerSelendok(){
	 
}
/*void CLabOrder::OnPerformerSetfocus(){
	
}*/
/*void CLabOrder::OnPerformerKillfocus(){
	
}*/
long CLabOrder::OnPerformerLoadData(){
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
/*void CLabOrder::OnPerformerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CLabOrder::OnObjectChange(){
	
} */
/*void CLabOrder::OnObjectSetfocus(){
	
} */
/*void CLabOrder::OnObjectKillfocus(){
	
} */
int CLabOrder::OnObjectCheckValue(){
	return 0;
} 
/*void CLabOrder::OnPaymentStateChange(){
	
} */
/*void CLabOrder::OnPaymentStateSetfocus(){
	
} */
/*void CLabOrder::OnPaymentStateKillfocus(){
	
} */
int CLabOrder::OnPaymentStateCheckValue(){
	return 0;
} 
/*void CLabOrder::OnPatientNameChange(){
	
} */
/*void CLabOrder::OnPatientNameSetfocus(){
	
} */
/*void CLabOrder::OnPatientNameKillfocus(){
	
} */
int CLabOrder::OnPatientNameCheckValue(){
	return 0;
} 
/*void CLabOrder::OnAgeChange(){
	
} */
/*void CLabOrder::OnAgeSetfocus(){
	
} */
/*void CLabOrder::OnAgeKillfocus(){
	
} */
int CLabOrder::OnAgeCheckValue(){
	return 0;
} 
void CLabOrder::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLabOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLabOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLabOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLabOrder::OnAddLabOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add LabOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CLabOrder::OnEditLabOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit LabOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CLabOrder::OnDeleteLabOrder(){
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
 		OnCancelLabOrder(); 
 	}
return 0;
 } 
int CLabOrder::OnSaveLabOrder(){
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
 		//OnLabOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLabOrder::OnCancelLabOrder(){
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
int CLabOrder::OnLabOrderListLoadData(){
	return 0;
}
