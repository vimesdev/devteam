#include "HMSMedicalCabinetOrder.h"
#include "MainFrm.h"
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetOrder* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrder *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnFromStorageAddNew();
}*/
static void _OnToCabinetSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetOrder* )pWnd)->OnToCabinetSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToCabinetSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnToCabinetSelendok();
}
/*static void _OnToCabinetSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnToCabinetKillfocus();
}*/
/*static void _OnToCabinetKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnToCabinetKillfocus();
}*/
static long _OnToCabinetLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrder *)pWnd)->OnToCabinetLoadData();
}
/*static void _OnToCabinetAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnToCabinetAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrder *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrder *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrder *)pWnd)->OnApprovedDateCheckValue();
} 
/*static void _OnSubTotalChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnSubTotalChange();
} */
/*static void _OnSubTotalSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnSubTotalSetfocus();} */ 
/*static void _OnSubTotalKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnSubTotalKillfocus();
} */
static int _OnSubTotalCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrder *)pWnd)->OnSubTotalCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrder *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrder *pVw = (CHMSMedicalCabinetOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrder *pVw = (CHMSMedicalCabinetOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrder *pVw = (CHMSMedicalCabinetOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrder *pVw = (CHMSMedicalCabinetOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrder *pVw = (CHMSMedicalCabinetOrder *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrder *pVw = (CHMSMedicalCabinetOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrder *pVw = (CHMSMedicalCabinetOrder *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrder *pVw = (CHMSMedicalCabinetOrder *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetOrder *pVw = (CHMSMedicalCabinetOrder *)pWnd;
	pVw->OnAddLineSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetOrder*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSMedicalCabinetOrder*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMedicalCabinetOrder*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrder*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSMedicalCabinetOrderFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrder*)pWnd)->OnAddHMSMedicalCabinetOrder();
} 
static int _OnEditHMSMedicalCabinetOrderFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrder*)pWnd)->OnEditHMSMedicalCabinetOrder();
} 
static int _OnDeleteHMSMedicalCabinetOrderFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrder*)pWnd)->OnDeleteHMSMedicalCabinetOrder();
} 
static int _OnSaveHMSMedicalCabinetOrderFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrder*)pWnd)->OnSaveHMSMedicalCabinetOrder();
} 
static int _OnCancelHMSMedicalCabinetOrderFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetOrder*)pWnd)->OnCancelHMSMedicalCabinetOrder();
} 
CHMSMedicalCabinetOrder::CHMSMedicalCabinetOrder(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 665;
	SetDefaultValues();
}
CHMSMedicalCabinetOrder::~CHMSMedicalCabinetOrder(){
}
void CHMSMedicalCabinetOrder::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 510, 120);
	m_wndOrderInformation.Create(this, _T("Order Information"), 515, 5, 800, 120);
	m_wndFromStorageLabel.Create(this, _T("Storage"), 10, 32, 135, 57);
	m_wndFromStorage.Create(this,140, 32, 504, 57); 
	m_wndToCabinet.Create(this,140, 60, 504, 85); 
	m_wndToStorageLabel.Create(this, _T("Cabinet"), 10, 60, 135, 85);
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 90, 135, 115);
	m_wndDescription.Create(this,140, 90, 504, 115); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 521, 30, 641, 55);
	m_wndOrderNo.Create(this,646, 30, 796, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 521, 60, 641, 85);
	m_wndOrderDate.Create(this,646, 60, 796, 85); 
	m_wndApprovedDateLabel.Create(this, _T("Approved Date"), 521, 90, 641, 115);
	m_wndApprovedDate.Create(this,646, 90, 796, 115); 
	m_wndSubTotalLabel.Create(this, _T("Sub Total"), 10, 545, 135, 570);
	m_wndSubTotal.Create(this,140, 545, 220, 570); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 517, 545, 639, 570);
	m_wndTotalAmount.Create(this,644, 545, 794, 570); 
	m_wndAdd.Create(this, _T("&Add"), 125, 575, 205, 600);
	m_wndEdit.Create(this, _T("&Edit"), 210, 575, 290, 600);
	m_wndDelete.Create(this, _T("&Delete"), 295, 575, 375, 600);
	m_wndSave.Create(this, _T("&Save"), 380, 575, 460, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 465, 575, 545, 600);
	m_wndPrint.Create(this, _T("&Print"), 550, 575, 630, 600);
	m_wndSend.Create(this, _T("&Send"), 635, 575, 715, 600);
	m_wndClose.Create(this, _T("&Close"), 720, 575, 800, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	m_wndList.Create(this,5, 125, 800, 540); 

}
void CHMSMedicalCabinetOrder::OnInitializeComponents(){

	SetWindowText(_T("Delivery to department"));

	//	m_wndOrderNo.SetMask(_T("&&########"));
	m_wndOrderNo.SetLimitText(10);
	m_wndOrderNo.SetCheckValue(true);
//	m_wndOrderNo.SetReadOnly(pMF->m_bSheetReatOnly);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);

	//m_wndOrderDate.SetCheckValue(true);
	m_wndOrderDate.SetReadOnly(TRUE);
	m_wndAccountingDate.SetReadOnly(TRUE);
	//m_wndOrderDate.ModifyStyle(WS_TABSTOP, 0);
	m_wndFromStorage.SetCheckValue(true);
	m_wndToDepartment.SetCheckValue(true);
//	m_wndDeliverer.SetInitCap(true);
//	m_wndDeliverer.SetCheckValue(true);
//	m_wndReceiver.SetCheckValue(true);
	m_wndDescription.SetLimitText(81);
//	m_wndDescription.SetCheckValue(true);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.ModifyStyle(0, ES_RIGHT);


	m_wndTotalLines.SetLimitText(16);
	m_wndTotalLines.SetReadOnly(TRUE);
//	m_wndTotalLines.SetCheckValue(true);
	m_wndTotalLines.SetCurrencyFormat(true);
	m_wndTotalLines.SetTextColor(RGB(0, 128, 192));
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetReadOnly(TRUE);
	m_wndTotalAmount.SetCurrencyFormat(true);
	m_wndTotalAmount.SetTextColor(RGB(0, 128, 255));
//	m_wndTotalAmount.SetCheckValue(true);

//	m_wndTransactionType.SetCheckValue(TRUE);
	m_wndTransactionType.SetReadOnly(TRUE);
	m_wndApprovedDate.SetReadOnly(TRUE);

	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndFromStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndToDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndToDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	
	m_wndDeliverer.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndDeliverer.InsertColumn(1, _T("Name"), CFMT_TEXT, 310);

	m_wndReceiver.InsertColumn(0, _T("User ID"), CFMT_TEXT, 100);
	m_wndReceiver.InsertColumn(1, _T("Name"), CFMT_TEXT, 310);


	m_wndTransactionType.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndTransactionType.InsertColumn(1, _T("Description"), CFMT_TEXT, 310);

	m_transactionTbl.SetTableName(_T("m_transaction"));
	m_transactionTbl.AddField(_T("mt_transaction_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_createdby"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_createddate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_updatedby"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_updateddate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_storage_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_orderno"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_orderdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_acctdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_deliveryby"), dfText, 65); 
	m_transactionTbl.AddField(_T("mt_department_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_department_to_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_receiveby"), dfText, 65); 
	m_transactionTbl.AddField(_T("mt_description"), dfText, 254); 
	m_transactionTbl.AddField(_T("mt_note"), dfText, 2000); 
	m_transactionTbl.AddField(_T("mt_status"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_doctype"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_org_id"), dfText, 3);

	m_wndLines.Create(&m_wndTab);
	m_wndTab.Add(_T("Items"), &m_wndLines);
	m_wndLines.m_pWndOrder = this;
	m_wndLines.OnInitDialog();
	m_wndTab.SetCurSel(0);

	
}

void CHMSMedicalCabinetOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
	m_wndToCabinet.SetEvent(WE_SELENDOK, _OnToCabinetSelendokFnc);
	//m_wndToCabinet.SetEvent(WE_SETFOCUS, _OnToCabinetSetfocusFnc);
	//m_wndToCabinet.SetEvent(WE_KILLFOCUS, _OnToCabinetKillfocusFnc);
	m_wndToCabinet.SetEvent(WE_SELCHANGE, _OnToCabinetSelectChangeFnc);
	m_wndToCabinet.SetEvent(WE_LOADDATA, _OnToCabinetLoadDataFnc);
	//m_wndToCabinet.SetEvent(WE_ADDNEW, _OnToCabinetAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndApprovedDate.SetEvent(WE_CHANGE, _OnApprovedDateChangeFnc);
	//m_wndApprovedDate.SetEvent(WE_SETFOCUS, _OnApprovedDateSetfocusFnc);
	//m_wndApprovedDate.SetEvent(WE_KILLFOCUS, _OnApprovedDateKillfocusFnc);
	m_wndApprovedDate.SetEvent(WE_CHECKVALUE, _OnApprovedDateCheckValueFnc);
	//m_wndSubTotal.SetEvent(WE_CHANGE, _OnSubTotalChangeFnc);
	//m_wndSubTotal.SetEvent(WE_SETFOCUS, _OnSubTotalSetfocusFnc);
	//m_wndSubTotal.SetEvent(WE_KILLFOCUS, _OnSubTotalKillfocusFnc);
	m_wndSubTotal.SetEvent(WE_CHECKVALUE, _OnSubTotalCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSMedicalCabinetOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSMedicalCabinetOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSMedicalCabinetOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSMedicalCabinetOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSMedicalCabinetOrderFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSMedicalCabinetOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_TextEx(pDX, m_wndToCabinet.GetDlgCtrlID(), m_szToCabinetKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_Text(pDX, m_wndSubTotal.GetDlgCtrlID(), m_nSubTotal);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CHMSMedicalCabinetOrder::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	szWhere.AppendFormat(_T(" and mt_org_id in('GL', '%s') "), pMF->GetModuleID());
	if(pMF->m_szStoragePerm.IsEmpty())
		pMF->m_szStoragePerm = _T("-1");
	
	//szWhere.AppendFormat(_T(" and mt_storage_id in(%s) "), pMF->m_szStoragePerm);

	szSQL.Format(_T("SELECT mt_org_id, mt_createdby, ") \
		_T("mt_doctype, ") \
		_T("mt_transaction_id, ") \
		_T("mt_storage_id, ") \
		_T("mt_orderno, ") \
		_T("mt_orderdate, ") \
		_T("mt_acctdate, ") \
		_T("mt_approveddate, ") \
		_T("mt_deliverydate, ") \
		_T("mt_deliveryby, ") \
		_T("mt_department_to_id, ") \
		_T("mt_receiveby, ") \
		_T("mt_description, ") \
		_T("mt_status, ") \
		_T("mt_netamount, ") \
		_T("mt_taxamount, ") \
		_T("mt_totalamount ") \
		_T("FROM m_transaction ") \
		_T("WHERE mt_transaction_id=%ld  ") \
		_T(" %s "), m_nID,  szWhere);
	rs.ExecSQL(szSQL);

	Notice(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mt_org_id"), m_szOrgID);
		
		rs.GetValue(_T("mt_createdby"), m_szCreatedBy);
		rs.GetValue(_T("mt_transaction_id"), m_nID);
		rs.GetValue(_T("mt_storage_id"), m_szFromStorageKey);
		rs.GetValue(_T("mt_orderno"), m_szOrderNo);
		rs.GetValue(_T("mt_orderdate"), m_szOrderDate);
		rs.GetValue(_T("mt_acctdate"), m_szAccountingDate);
		rs.GetValue(_T("mt_approveddate"), m_szApprovedDate);

		rs.GetValue(_T("mt_deliveryby"), m_szDelivererKey);
		rs.GetValue(_T("mt_department_to_id"), m_szToDepartmentKey);
		rs.GetValue(_T("mt_receiveby"), m_szReceiverKey);
		rs.GetValue(_T("mt_description"), m_szDescription);
		rs.GetValue(_T("mt_status"), m_szStatus);
		rs.GetValue(_T("mt_netamount"), m_nTotalLines);
		rs.GetValue(_T("mt_totalamount"), m_nTotalAmount);
		rs.GetValue(_T("mt_doctype"), m_szTransactionTypeKey);
		m_wndLines.m_nStorageID = str2int(m_szFromStorageKey);
		m_wndLines.m_nStorageToID = str2int(m_szToDepartmentKey);
		m_wndLines.m_nOrderID = m_nID;
		m_wndLines.Refresh(m_nID);
		if(m_szStatus != _T("A"))
			m_szApprovedDate.Empty();
		
	}
}

void CHMSMedicalCabinetOrder::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(GetMode() == VM_EDIT)
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE mt_transaction_id=%ld "), m_nID);
		m_transactionTbl.Open(&pMF->m_db, szWhere);
	}
	m_transactionTbl.SetValue(_T("mt_createdby"), pMF->GetCurrentUser());
	m_transactionTbl.SetValue(_T("mt_createddate"), pMF->GetSysDateTime());
	m_transactionTbl.SetValue(_T("mt_updatedby"), pMF->GetCurrentUser());
	m_transactionTbl.SetValue(_T("mt_updateddate"), pMF->GetSysDateTime());
	m_transactionTbl.SetValue(_T("mt_storage_id"), m_szFromStorageKey);
	m_transactionTbl.SetValue(_T("mt_department_to_id"), m_szToDepartmentKey);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_acctdate"), m_szAccountingDate);
	m_transactionTbl.SetValue(_T("mt_deliveryby"), m_szDelivererKey);
	m_transactionTbl.SetValue(_T("mt_receiveby"), m_szReceiverKey);
	m_transactionTbl.SetValue(_T("mt_description"), m_szDescription);
	m_transactionTbl.SetValue(_T("mt_status"), m_szStatus);
	m_transactionTbl.SetValue(_T("mt_doctype"), m_szTransactionTypeKey);
	m_transactionTbl.SetValue(_T("mt_org_id"), pMF->GetModuleID());


}

void CHMSMedicalCabinetOrder::SetDefaultValues(){

	m_szFromStorageKey.Empty();
	m_szToDepartmentKey.Empty();
	m_szDelivererKey.Empty();
	m_szReceiverKey.Empty();
	m_szDescription.Empty();
	m_szOrderDate.Empty();
	m_szStatus.Empty();
	m_nTotalAmount=0;
	m_nTotalLines = 0;

}

int CHMSMedicalCabinetOrder::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 

  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_szOrderDate =  pMF->GetSysDateTime();
			szSQL.Format(_T("AD_GETNEXTVAL('STORAGETRANSACTION_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szAccountingDate= m_szOrderDate;
			m_szApprovedDate = pMF->GetSysDateTime();
			m_wndFromStorage.SetFocus();		
			m_szStatus = _T("O");
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndToDepartment.SetFocus();
//			m_wndTransactionType.EnableWindow(FALSE);
			m_wndFromStorage.EnableWindow(FALSE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 7, -1); 
 			SetDefaultValues(); 
			m_szOrderNo.Empty();
 			break; 
 		};

		if(m_szStatus == _T("O"))
		{
			
		}
		else
		{
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}
		if(m_szTransactionTypeKey == _T("DMO"))
		{
			if(m_szStatus != _T("S"))
			{
				m_wndPost.EnableWindow(FALSE);
			}
		}
		else
		{
			if(m_szStatus != _T("O"))
			{
				m_wndPost.EnableWindow(FALSE);
			}

		}

		if(m_szOrgID != pMF->GetModuleID())
		{
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}

		m_wndTransactionType.EnableWindow(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 


}

void CHMSMedicalCabinetOrder::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CHMSMedicalCabinetOrder::OnFromStorageSelendok(){
	 
}

/*void CHMSMedicalCabinetOrder::OnFromStorageSetfocus(){
	
}*/
/*void CHMSMedicalCabinetOrder::OnFromStorageKillfocus(){
	
}*/
long CHMSMedicalCabinetOrder::OnFromStorageLoadData(){
	
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndFromStorage, m_szFromStorageKey);
}

/*void CHMSMedicalCabinetOrder::OnFromStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSMedicalCabinetOrder::OnToCabinetSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnToCabinetSelendok(){
	 
}
/*void CHMSMedicalCabinetOrder::OnToCabinetSetfocus(){
	
}*/
/*void CHMSMedicalCabinetOrder::OnToCabinetKillfocus(){
	
}*/
long CHMSMedicalCabinetOrder::OnToCabinetLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToCabinet.IsSearchKey() && !m_szToCabinetKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szToCabinetKey
};
	m_wndToCabinet.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToCabinet.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSMedicalCabinetOrder::OnToCabinetAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSMedicalCabinetOrder::OnDescriptionChange(){
	
} */
/*void CHMSMedicalCabinetOrder::OnDescriptionSetfocus(){
	
} */
/*void CHMSMedicalCabinetOrder::OnDescriptionKillfocus(){
	
} */
int CHMSMedicalCabinetOrder::OnDescriptionCheckValue(){
	return 0;
}
 
/*void CHMSMedicalCabinetOrder::OnOrderNoChange(){
	
} */
/*void CHMSMedicalCabinetOrder::OnOrderNoSetfocus(){
	
} */
/*void CHMSMedicalCabinetOrder::OnOrderNoKillfocus(){
	
} */
int CHMSMedicalCabinetOrder::OnOrderNoCheckValue(){
	return 0;
}
 
/*void CHMSMedicalCabinetOrder::OnOrderDateChange(){
	
} */
/*void CHMSMedicalCabinetOrder::OnOrderDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetOrder::OnOrderDateKillfocus(){
	
} */
int CHMSMedicalCabinetOrder::OnOrderDateCheckValue(){
	return 0;
}
 
/*void CHMSMedicalCabinetOrder::OnApprovedDateChange(){
	
} */
/*void CHMSMedicalCabinetOrder::OnApprovedDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetOrder::OnApprovedDateKillfocus(){
	
} */
int CHMSMedicalCabinetOrder::OnApprovedDateCheckValue(){
	return 0;
} 
/*void CHMSMedicalCabinetOrder::OnSubTotalChange(){
	
} */
/*void CHMSMedicalCabinetOrder::OnSubTotalSetfocus(){
	
} */
/*void CHMSMedicalCabinetOrder::OnSubTotalKillfocus(){
	
} */
int CHMSMedicalCabinetOrder::OnSubTotalCheckValue(){
	return 0;
} 
/*void CHMSMedicalCabinetOrder::OnTotalAmountChange(){
	
} */
/*void CHMSMedicalCabinetOrder::OnTotalAmountSetfocus(){
	
} */
/*void CHMSMedicalCabinetOrder::OnTotalAmountKillfocus(){
	
} */
int CHMSMedicalCabinetOrder::OnTotalAmountCheckValue(){
	return 0;
}
 
void CHMSMedicalCabinetOrder::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddHMSMedicalCabinetOrder();
}
 
void CHMSMedicalCabinetOrder::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditHMSMedicalCabinetOrder();

}
 
void CHMSMedicalCabinetOrder::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteHMSMedicalCabinetOrder();
}
 
void CHMSMedicalCabinetOrder::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveHMSMedicalCabinetOrder();
}
 
void CHMSMedicalCabinetOrder::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDiscardHMSMedicalCabinetOrder();
}
 
void CHMSMedicalCabinetOrder::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//if(!pMF->CheckPermission(_T("02.05")))
	//{
	//	ShowMessageBox(_T("Permission denined"), MB_OK);
	//	return;
	//}
	CPrintForms printer;
	printer.PrintDDO(m_nID);

}
 
void CHMSMedicalCabinetOrder::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_bRefresh)
		CGuiDialog::OnOK();
	else
		CGuiDialog::OnCancel();
}
 
void CHMSMedicalCabinetOrder::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.m_nOrderID = m_nID;
	m_wndLines.OnListAddItem();

}
 
void CHMSMedicalCabinetOrder::OnListDblClick(){
	
} 
void CHMSMedicalCabinetOrder::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMedicalCabinetOrder::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSMedicalCabinetOrder::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSMedicalCabinetOrder::OnAddHMSMedicalCabinetOrder(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 

	if(!pMF->CheckPermission(_T("02.01")))
	{
		//ShowMessageBox(_T("Permission denined"), MB_OK);
		//return 0;
	}
 	SetMode(VM_ADD);
	m_szOrderDate = pMF->GetSysDateTime();
	m_wndFromStorage.SetFocus();
	m_szStatus = _T("O");
	UpdateData(false);
	return 0;
}

int CHMSMedicalCabinetOrder::OnEditHMSMedicalCabinetOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}



	if(!pMF->CheckPermission(_T("02.02")))
	{/*
		ShowMessageBox(_T("Permission denined"), MB_OK);
		return 0;*/
	}
		if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not edit it"), 0);
		return 0;
	}
 	
 	SetMode(VM_EDIT);
	return 0;  

}

int CHMSMedicalCabinetOrder::OnDeleteHMSMedicalCabinetOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 

	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}



	if(!pMF->CheckPermission(_T("02.03")))
	{
//		ShowMessageBox(_T("Permission denined"), MB_OK);
//		return 0;
	}

	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not delete it"), 0);
		return 0;
	}

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szSQL.Format(_T("M_TRANSACTION_DELETE(%ld, '%s') "), m_nID, pMF->GetCurrentUser()); 

 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret >= 0){ 
		m_bRefresh = true;
 		SetMode(VM_NONE); 
 		OnDiscardHMSMedicalCabinetOrder(); 
 	}
	return 0;

}

int CHMSMedicalCabinetOrder::OnSaveHMSMedicalCabinetOrder(){
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	
	CString szSQL;
	

	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
 	if(!IsValidateData()) 
 		return -1; 

 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("AD_NEXTSEQUENCE('M_TRANSACTION_ID_ASQ') "));
		m_nID = str2long(pMF->ExecDML(szSQL));	
		if(m_nID <=0) return -1;		
		m_transactionTbl.SetValue(_T("mt_transaction_id"), m_nID);
 		szSQL = m_transactionTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE mt_transaction_id=%ld and mt_status in('O','S', 'A','I') "), m_nID); 
 		szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_approveddate,mt_status,mt_doctype,mt_ordertype,,mt_storage_id")); 
 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		m_bRefresh = true;
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW); 
		}
		else
		{
			GetDataToScreen();
			SetMode(VM_VIEW); 
			m_wndAddLine.SetFocus();
		}
 		
		
 	} 
 	return ret; 

}

int CHMSMedicalCabinetOrder::OnCancelHMSMedicalCabinetOrder(){
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
int CHMSMedicalCabinetOrder::OnHMSMedicalCabinetOrderListLoadData(){
	return 0;
}

