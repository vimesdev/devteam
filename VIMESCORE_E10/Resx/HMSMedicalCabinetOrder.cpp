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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(35);
	m_wndToCabinet.SetCheckValue(true);
	m_wndToCabinet.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndApprovedDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApprovedDate.SetCheckValue(true);
	m_wndSubTotal.SetLimitText(16);
	m_wndSubTotal.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetCheckValue(true);


	m_wndFromStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFromStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndToCabinet.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndToCabinet.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_m_transactionTbl.SetTableName(_T("m_transaction"));
	m_m_transactionTbl.AddField(_T("MT_TRANSACTION_ID"), dfLong); 
	m_m_transactionTbl.AddField(_T("MT_CLIENT_ID"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_ORG_ID"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_ISACTIVE"), dfText, 1); 
	m_m_transactionTbl.AddField(_T("MT_CREATEDDATE"), dfDateTime); 
	m_m_transactionTbl.AddField(_T("MT_CREATEDBY"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_UPDATEDBY"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_UPDATEDDATE"), dfDateTime); 
	m_m_transactionTbl.AddField(_T("MT_NAME"), dfText, 60); 
	m_m_transactionTbl.AddField(_T("MT_DESCRIPTION"), dfText, 255); 
	m_m_transactionTbl.AddField(_T("MT_ORDERDATE"), dfDateTime); 
	m_m_transactionTbl.AddField(_T("MT_ACCTDATE"), dfDateTime); 
	m_m_transactionTbl.AddField(_T("MT_POSTED"), dfText, 60); 
	m_m_transactionTbl.AddField(_T("MT_POSTEDDATE"), dfDateTime); 
	m_m_transactionTbl.AddField(_T("MT_STATUS"), dfText, 1); 
	m_m_transactionTbl.AddField(_T("MT_ORGTRX_ID"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_PROJECT_ID"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_ACTIVITY_ID"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_USER1_ID"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_USER2_ID"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_DOCUMENTNO"), dfText, 30); 
	m_m_transactionTbl.AddField(_T("MT_ASSET_ID"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_STORAGE_ID"), dfLong); 
	m_m_transactionTbl.AddField(_T("MT_STORAGE_TO_ID"), dfLong); 
	m_m_transactionTbl.AddField(_T("MT_DEPARTMENT_ID"), dfText, 7); 
	m_m_transactionTbl.AddField(_T("MT_DEPARTMENT_TO_ID"), dfText, 7); 
	m_m_transactionTbl.AddField(_T("MT_DELIVERYBY"), dfText, 65); 
	m_m_transactionTbl.AddField(_T("MT_RECEIVEBY"), dfText, 65); 
	m_m_transactionTbl.AddField(_T("MT_APPROVEDDATE"), dfDateTime); 
	m_m_transactionTbl.AddField(_T("MT_APPROVEDBY"), dfText, 15); 
	m_m_transactionTbl.AddField(_T("MT_ISPRINTED"), dfText, 1); 
	m_m_transactionTbl.AddField(_T("MT_CATEGORY"), dfText, 1); 
	m_m_transactionTbl.AddField(_T("MT_ORDERTYPE"), dfText, 1); 
	m_m_transactionTbl.AddField(_T("MT_DOCTYPE"), dfText, 3); 
	m_m_transactionTbl.AddField(_T("MT_PARTNER_ID"), dfText, 32); 
	m_m_transactionTbl.AddField(_T("MT_EXPTYPE"), dfText, 1); 
	m_m_transactionTbl.AddField(_T("MT_NETAMOUNT"), dfLong); 
	m_m_transactionTbl.AddField(_T("MT_TAXAMOUNT"), dfLong); 
	m_m_transactionTbl.AddField(_T("MT_DISAMOUNT"), dfLong); 
	m_m_transactionTbl.AddField(_T("MT_TOTALAMOUNT"), dfLong); 

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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMedicalCabinetOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMedicalCabinetOrder::SetDefaultValues(){

	m_szFromStorageKey.Empty();
	m_szToCabinetKey.Empty();
	m_szDescription.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szApprovedDate.Empty();
	m_nSubTotal=0;
	m_nTotalAmount=0;

}
int CHMSMedicalCabinetOrder::SetMode(int nMode){
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
void CHMSMedicalCabinetOrder::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnFromStorageSelendok(){
	 
}
/*void CHMSMedicalCabinetOrder::OnFromStorageSetfocus(){
	
}*/
/*void CHMSMedicalCabinetOrder::OnFromStorageKillfocus(){
	
}*/
long CHMSMedicalCabinetOrder::OnFromStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromStorage.IsSearchKey() && !m_szFromStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFromStorageKey
};
	m_wndFromStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetOrder::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSMedicalCabinetOrder::OnEditHMSMedicalCabinetOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMedicalCabinetOrder::OnDeleteHMSMedicalCabinetOrder(){
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
 		OnCancelHMSMedicalCabinetOrder();
 	}
	return 0;
}
int CHMSMedicalCabinetOrder::OnSaveHMSMedicalCabinetOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_m_transactionTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_m_transactionTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSMedicalCabinetOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
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
