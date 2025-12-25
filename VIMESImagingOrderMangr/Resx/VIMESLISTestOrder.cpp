#include "VIMESLISTestOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
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
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnInsOIDChangeFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnInsOIDChange();
} */
/*static void _OnInsOIDSetfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnInsOIDSetfocus();} */ 
/*static void _OnInsOIDKillfocusFnc(CWnd *pWnd){
	((CVIMESLISTestOrder *)pWnd)->OnInsOIDKillfocus();
} */
static int _OnInsOIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISTestOrder *)pWnd)->OnInsOIDCheckValue();
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
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CVIMESLISTestOrder *pVw = (CVIMESLISTestOrder *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESLISTestOrder *pVw = (CVIMESLISTestOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESLISTestOrder *pVw = (CVIMESLISTestOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CVIMESLISTestOrder *pVw = (CVIMESLISTestOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddVIMESLISTestOrderFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnAddVIMESLISTestOrder();
} 
static int _OnEditVIMESLISTestOrderFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnEditVIMESLISTestOrder();
} 
static int _OnDeleteVIMESLISTestOrderFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnDeleteVIMESLISTestOrder();
} 
static int _OnSaveVIMESLISTestOrderFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnSaveVIMESLISTestOrder();
} 
static int _OnCancelVIMESLISTestOrderFnc(CWnd *pWnd){
	 return ((CVIMESLISTestOrder*)pWnd)->OnCancelVIMESLISTestOrder();
} 
CVIMESLISTestOrder::CVIMESLISTestOrder(){

	m_nDlgWidth = 620;
	m_nDlgHeight = 640;
	SetDefaultValues();
}
CVIMESLISTestOrder::~CVIMESLISTestOrder(){
}
void CVIMESLISTestOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 610, 605);
	m_wndSpecimemList.Create(this,11, 180, 606, 600); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 100, 55);
	m_wndDocumentNo.Create(this,105, 30, 205, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 210, 30, 280, 55);
	m_wndOrderNo.Create(this,285, 30, 385, 55); 
	m_wndInsOIDLabel.Create(this, _T("Ins OID"), 390, 30, 480, 55);
	m_wndInsOID.Create(this,485, 30, 605, 55); 
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
	m_wndUpdate.Create(this, _T("&Update"), 275, 610, 355, 635);
	m_wndSave.Create(this, _T("&Save"), 360, 610, 440, 635);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 610, 525, 635);
	m_wndPrint.Create(this, _T("&Print"), 530, 610, 610, 635);

}
void CVIMESLISTestOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(13);
	m_wndOrderNo.SetCheckValue(true);
	m_wndInsOID.SetLimitText(35);
	m_wndInsOID.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndDoctor.SetLimitText(15);
	m_wndDoctor.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndObject.SetLimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndPaymentState.SetLimitText(35);
	m_wndPaymentState.SetCheckValue(true);


	m_wndSpecimemList.InsertColumn(0, _T("Index"), CFMT_TEXT, 30);
	m_wndSpecimemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndSpecimemList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndSpecimemList.InsertColumn(3, _T("Result"), CFMT_TEXT, 70);
	m_wndSpecimemList.InsertColumn(4, _T("Norm Index"), CFMT_TEXT, 80);
	m_wndSpecimemList.InsertColumn(5, _T("Min"), CFMT_TEXT, 80);
	m_wndSpecimemList.InsertColumn(6, _T("Max"), CFMT_TEXT, 80);
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
void CVIMESLISTestOrder::OnSetWindowEvents(){
	m_wndSpecimemList.SetEvent(WE_SELCHANGE, _OnSpecimemListSelectChangeFnc);
	m_wndSpecimemList.SetEvent(WE_LOADDATA, _OnSpecimemListLoadDataFnc);
	m_wndSpecimemList.SetEvent(WE_DBLCLICK, _OnSpecimemListDblClickFnc);
	m_wndSpecimemList.AddEvent(1, _T("Delete"), _OnSpecimemListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndInsOID.SetEvent(WE_CHANGE, _OnInsOIDChangeFnc);
	//m_wndInsOID.SetEvent(WE_SETFOCUS, _OnInsOIDSetfocusFnc);
	//m_wndInsOID.SetEvent(WE_KILLFOCUS, _OnInsOIDKillfocusFnc);
	m_wndInsOID.SetEvent(WE_CHECKVALUE, _OnInsOIDCheckValueFnc);
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
	//m_wndDoctor.SetEvent(WE_CHANGE, _OnDoctorChangeFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_CHECKVALUE, _OnDoctorCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	//m_wndPaymentState.SetEvent(WE_CHANGE, _OnPaymentStateChangeFnc);
	//m_wndPaymentState.SetEvent(WE_SETFOCUS, _OnPaymentStateSetfocusFnc);
	//m_wndPaymentState.SetEvent(WE_KILLFOCUS, _OnPaymentStateKillfocusFnc);
	m_wndPaymentState.SetEvent(WE_CHECKVALUE, _OnPaymentStateCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESLISTestOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESLISTestOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESLISTestOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESLISTestOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESLISTestOrderFnc, 0, 'T', VK_CONTROL);

}
void CVIMESLISTestOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Text(pDX, m_wndInsOID.GetDlgCtrlID(), m_szInsOID);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndPaymentState.GetDlgCtrlID(), m_szPaymentState);

}
void CVIMESLISTestOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderno"), m_szOrderNo);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_doctor"), m_szDoctor);

}
void CVIMESLISTestOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pcorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pcorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_pcorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
	m_hms_pcorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());
	m_hms_pcorderTbl.SetValue(_T("hpo_orderno"), m_szOrderNo);
	m_hms_pcorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pcorderTbl.SetValue(_T("hpo_doctor"), m_szDoctor);

}
void CVIMESLISTestOrder::SetDefaultValues(){

	m_nDocumentNo=0;
	m_szOrderNo.Empty();
	m_szInsOID.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szAddress.Empty();
	m_szDoctor.Empty();
	m_szOrderDate.Empty();
	m_szObject.Empty();
	m_szPaymentState.Empty();

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
			rs.GetValue(_T("Result")), 
			rs.GetValue(_T("NormIndex")), 
			rs.GetValue(_T("Min")), 
			rs.GetValue(_T("Max")), NULL);
		rs.MoveNext();
	}
	m_wndSpecimemList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CVIMESLISTestOrder::OnDocumentNoChange(){
	
} */
/*void CVIMESLISTestOrder::OnDocumentNoSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnDocumentNoKillfocus(){
	
} */
int CVIMESLISTestOrder::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CVIMESLISTestOrder::OnOrderNoChange(){
	
} */
/*void CVIMESLISTestOrder::OnOrderNoSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnOrderNoKillfocus(){
	
} */
int CVIMESLISTestOrder::OnOrderNoCheckValue(){
	return 0;
} 
/*void CVIMESLISTestOrder::OnInsOIDChange(){
	
} */
/*void CVIMESLISTestOrder::OnInsOIDSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnInsOIDKillfocus(){
	
} */
int CVIMESLISTestOrder::OnInsOIDCheckValue(){
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
/*void CVIMESLISTestOrder::OnDoctorChange(){
	
} */
/*void CVIMESLISTestOrder::OnDoctorSetfocus(){
	
} */
/*void CVIMESLISTestOrder::OnDoctorKillfocus(){
	
} */
int CVIMESLISTestOrder::OnDoctorCheckValue(){
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
void CVIMESLISTestOrder::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISTestOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISTestOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISTestOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESLISTestOrder::OnAddVIMESLISTestOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add VIMESLISTestOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CVIMESLISTestOrder::OnEditVIMESLISTestOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit VIMESLISTestOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CVIMESLISTestOrder::OnDeleteVIMESLISTestOrder(){
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
 		OnCancelVIMESLISTestOrder(); 
 	}
return 0;
 } 
int CVIMESLISTestOrder::OnSaveVIMESLISTestOrder(){
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
 		//OnVIMESLISTestOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESLISTestOrder::OnCancelVIMESLISTestOrder(){
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
int CVIMESLISTestOrder::OnVIMESLISTestOrderListLoadData(){
	return 0;
}
