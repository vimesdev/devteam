#include "HMSDialyDrugOrderDialog.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDialyDrugOrderDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDialyDrugOrderDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDialyDrugOrderDialog*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDialyDrugOrderDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDialyDrugOrderDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDialyDrugOrderDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDialyDrugOrderDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDialyDrugOrderDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDialyDrugOrderDialog*)pWnd)->OnDrugListDeleteItem();
} 
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSDialyDrugOrderDialog *)pWnd)->OnOrderIDCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSDialyDrugOrderDialog *pVw = (CHMSDialyDrugOrderDialog *)pWnd;
	pVw->OnFindSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDialyDrugOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAcceptDateChangeFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnAcceptDateChange();
} */
/*static void _OnAcceptDateSetfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnAcceptDateSetfocus();} */ 
/*static void _OnAcceptDateKillfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnAcceptDateKillfocus();
} */
static int _OnAcceptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDialyDrugOrderDialog *)pWnd)->OnAcceptDateCheckValue();
} 
/*static void _OnStockChangeFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnStockChange();
} */
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnStockSetfocus();} */ 
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnStockKillfocus();
} */
static int _OnStockCheckValueFnc(CWnd *pWnd){
	return ((CHMSDialyDrugOrderDialog *)pWnd)->OnStockCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSDialyDrugOrderDialog *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnPrintedChangeFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnPrintedChange();
} */
/*static void _OnPrintedSetfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnPrintedSetfocus();} */ 
/*static void _OnPrintedKillfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnPrintedKillfocus();
} */
static int _OnPrintedCheckValueFnc(CWnd *pWnd){
	return ((CHMSDialyDrugOrderDialog *)pWnd)->OnPrintedCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDialyDrugOrderDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDialyDrugOrderDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDialyDrugOrderDialog *pVw = (CHMSDialyDrugOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDialyDrugOrderDialog *pVw = (CHMSDialyDrugOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDialyDrugOrderDialog *pVw = (CHMSDialyDrugOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDialyDrugOrderDialog *pVw = (CHMSDialyDrugOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDialyDrugOrderDialog *pVw = (CHMSDialyDrugOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSDialyDrugOrderDialog *pVw = (CHMSDialyDrugOrderDialog *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDialyDrugOrderDialog *pVw = (CHMSDialyDrugOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSDialyDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSDialyDrugOrderDialog*)pWnd)->OnAddHMSDialyDrugOrderDialog();
} 
static int _OnEditHMSDialyDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSDialyDrugOrderDialog*)pWnd)->OnEditHMSDialyDrugOrderDialog();
} 
static int _OnDeleteHMSDialyDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSDialyDrugOrderDialog*)pWnd)->OnDeleteHMSDialyDrugOrderDialog();
} 
static int _OnSaveHMSDialyDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSDialyDrugOrderDialog*)pWnd)->OnSaveHMSDialyDrugOrderDialog();
} 
static int _OnCancelHMSDialyDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSDialyDrugOrderDialog*)pWnd)->OnCancelHMSDialyDrugOrderDialog();
} 
CHMSDialyDrugOrderDialog::CHMSDialyDrugOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1025;
	m_nDlgHeight = 655;
	SetDefaultValues();
}
CHMSDialyDrugOrderDialog::~CHMSDialyDrugOrderDialog(){
}
void CHMSDialyDrugOrderDialog::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 3, 410, 640);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 415, 5, 975, 175);
	m_wndDrugInformation.Create(this, _T("Drug Informations"), 415, 179, 975, 610);
	m_wndOrderList.Create(this,10, 180, 405, 635); 
	m_wndPatientList.Create(this,420, 30, 970, 170); 
	m_wndDrugList.Create(this,420, 205, 970, 605); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 10, 30, 110, 55);
	m_wndOrderID.Create(this,115, 30, 215, 55); 
	m_wndFind.Create(this, _T("&Find"), 220, 30, 295, 55);
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 60, 110, 85);
	m_wndOrderDate.Create(this,115, 60, 215, 85); 
	m_wndAcceptDateLabel.Create(this, _T("Issue Date"), 220, 60, 295, 85);
	m_wndAcceptDate.Create(this,300, 60, 405, 85); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 90, 110, 115);
	m_wndStock.Create(this,115, 90, 405, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 120, 110, 145);
	m_wndStatus.Create(this,115, 120, 215, 145); 
	m_wndPrintedLabel.Create(this, _T("Printed"), 220, 120, 295, 145);
	m_wndPrinted.Create(this,300, 120, 405, 145); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 150, 110, 175);
	m_wndNote.Create(this,115, 150, 405, 175); 
	m_wndAdd.Create(this, _T("&Add"), 415, 615, 490, 640);
	m_wndEdit.Create(this, _T("&Edit"), 495, 615, 570, 640);
	m_wndDelete.Create(this, _T("&Delete"), 575, 615, 650, 640);
	m_wndSave.Create(this, _T("&Save"), 655, 615, 730, 640);
	m_wndCancel.Create(this, _T("&Cancel"), 735, 615, 810, 640);
	m_wndSend.Create(this, _T("&Send"), 815, 615, 890, 640);
	m_wndPrint.Create(this, _T("&Print"), 895, 615, 970, 640);

}
void CHMSDialyDrugOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOrderID.SetLimitText(35);
	m_wndOrderID.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndAcceptDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAcceptDate.SetCheckValue(true);
	m_wndStock.SetLimitText(35);
	m_wndStock.SetCheckValue(true);
	m_wndStatus.SetLimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndPrinted.SetCheckValue(true);
	m_wndNote.SetLimitText(81);
	m_wndNote.SetCheckValue(true);


	m_wndOrderList.InsertColumn(0, _T("Drug Name/ Cnt"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(1, _T("Unit"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(2, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndOrderList.InsertColumn(3, _T("Issue Qty"), CFMT_NUMBER, 80);


	m_wndPatientList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndPatientList.InsertColumn(2, _T("Bed"), CFMT_TEXT, 70);
	m_wndPatientList.InsertColumn(3, _T("Order Date"), CFMT_DATE, 85);
	m_wndPatientList.InsertColumn(4, _T("Status"), CFMT_TEXT, 100);


	m_wndDrugList.InsertColumn(0, _T("Name /Cnt"), CFMT_TEXT, 150);
	m_wndDrugList.InsertColumn(1, _T("Unit"), CFMT_TEXT, 50);
	m_wndDrugList.InsertColumn(2, _T("Price"), CFMT_NUMBER, 70);
	m_wndDrugList.InsertColumn(3, _T("Order Qty"), CFMT_NUMBER, 80);
	m_wndDrugList.InsertColumn(4, _T("Issue Qty"), CFMT_NUMBER, 80);
	m_wndDrugList.InsertColumn(5, _T("Product country"), CFMT_TEXT, 110);
	m_pms_dailydrug_orderTbl.SetTableName(_T("pms_dailydrug_order"));
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_createdby"), dfText, 15); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_createddate"), dfDateTime); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_updatedby"), dfText, 15); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_updateddate"), dfDateTime); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_id"), dfText, 15); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_fstockid"), dfLong); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_orderdate"), dfDateTime); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_senderby"), dfText, 15); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_deliverrer"), dfText, 65); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_tstockid"), dfLong); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_deptid"), dfText, 7); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_acceptdate"), dfDateTime); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_accepterby"), dfText, 15); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_receiver"), dfText, 65); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_desc"), dfText, 81); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_status"), dfText, 1); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_type"), dfText, 1); 
	m_pms_dailydrug_orderTbl.AddField(_T("pmdo_printed"), dfLong); 

}
void CHMSDialyDrugOrderDialog::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndOrderID.SetEvent(WE_CHANGE, _OnOrderIDChangeFnc);
	//m_wndOrderID.SetEvent(WE_SETFOCUS, _OnOrderIDSetfocusFnc);
	//m_wndOrderID.SetEvent(WE_KILLFOCUS, _OnOrderIDKillfocusFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndAcceptDate.SetEvent(WE_CHANGE, _OnAcceptDateChangeFnc);
	//m_wndAcceptDate.SetEvent(WE_SETFOCUS, _OnAcceptDateSetfocusFnc);
	//m_wndAcceptDate.SetEvent(WE_KILLFOCUS, _OnAcceptDateKillfocusFnc);
	m_wndAcceptDate.SetEvent(WE_CHECKVALUE, _OnAcceptDateCheckValueFnc);
	//m_wndStock.SetEvent(WE_CHANGE, _OnStockChangeFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_CHECKVALUE, _OnStockCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndPrinted.SetEvent(WE_CHANGE, _OnPrintedChangeFnc);
	//m_wndPrinted.SetEvent(WE_SETFOCUS, _OnPrintedSetfocusFnc);
	//m_wndPrinted.SetEvent(WE_KILLFOCUS, _OnPrintedKillfocusFnc);
	m_wndPrinted.SetEvent(WE_CHECKVALUE, _OnPrintedCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

}
void CHMSDialyDrugOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_szOrderID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndAcceptDate.GetDlgCtrlID(), m_szAcceptDate);
	DDX_Text(pDX, m_wndStock.GetDlgCtrlID(), m_szStock);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_Text(pDX, m_wndPrinted.GetDlgCtrlID(), m_nPrinted);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSDialyDrugOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("pmdo_acceptdate"), m_szAcceptDate);
	rs.GetValue(_T("pmdo_desc"), m_szNote);
	rs.GetValue(_T("pmdo_printed"), m_nPrinted);

}
void CHMSDialyDrugOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_createdby"), pMF->GetCurrentUser());
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_createddate"), pMF->GetSysDateTime());
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_updatedby"), pMF->GetCurrentUser());
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_updateddate"), pMF->GetSysDateTime());
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_acceptdate"), m_szAcceptDate);
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_desc"), m_szNote);
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_printed"), m_nPrinted);

}
void CHMSDialyDrugOrderDialog::SetDefaultValues(){

	m_szOrderID.Empty();
	m_szOrderDate.Empty();
	m_szAcceptDate.Empty();
	m_szStock.Empty();
	m_szStatus.Empty();
	m_nPrinted=0;
	m_szNote.Empty();

}
int CHMSDialyDrugOrderDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
void CHMSDialyDrugOrderDialog::OnOrderListDblClick(){
	
} 
void CHMSDialyDrugOrderDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDialyDrugOrderDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDialyDrugOrderDialog::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	m_wndOrderList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("DrugName/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("IssueQty")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSDialyDrugOrderDialog::OnPatientListDblClick(){
	
} 
void CHMSDialyDrugOrderDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDialyDrugOrderDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDialyDrugOrderDialog::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	m_wndPatientList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Bed")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("Status")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSDialyDrugOrderDialog::OnDrugListDblClick(){
	
} 
void CHMSDialyDrugOrderDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDialyDrugOrderDialog::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDialyDrugOrderDialog::OnDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	m_wndDrugList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
			rs.GetValue(_T("Name/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("OrderQty")), 
			rs.GetValue(_T("IssueQty")), 
			rs.GetValue(_T("Productcountry")), NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSDialyDrugOrderDialog::OnOrderIDChange(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnOrderIDSetfocus(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnOrderIDKillfocus(){
	
} */
int CHMSDialyDrugOrderDialog::OnOrderIDCheckValue(){
	return 0;
} 
void CHMSDialyDrugOrderDialog::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSDialyDrugOrderDialog::OnOrderDateChange(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnOrderDateKillfocus(){
	
} */
int CHMSDialyDrugOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CHMSDialyDrugOrderDialog::OnAcceptDateChange(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnAcceptDateSetfocus(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnAcceptDateKillfocus(){
	
} */
int CHMSDialyDrugOrderDialog::OnAcceptDateCheckValue(){
	return 0;
} 
/*void CHMSDialyDrugOrderDialog::OnStockChange(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnStockSetfocus(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnStockKillfocus(){
	
} */
int CHMSDialyDrugOrderDialog::OnStockCheckValue(){
	return 0;
} 
/*void CHMSDialyDrugOrderDialog::OnStatusChange(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnStatusSetfocus(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnStatusKillfocus(){
	
} */
int CHMSDialyDrugOrderDialog::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSDialyDrugOrderDialog::OnPrintedChange(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnPrintedSetfocus(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnPrintedKillfocus(){
	
} */
int CHMSDialyDrugOrderDialog::OnPrintedCheckValue(){
	return 0;
} 
/*void CHMSDialyDrugOrderDialog::OnNoteChange(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnNoteSetfocus(){
	
} */
/*void CHMSDialyDrugOrderDialog::OnNoteKillfocus(){
	
} */
int CHMSDialyDrugOrderDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSDialyDrugOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDialyDrugOrderDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDialyDrugOrderDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDialyDrugOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDialyDrugOrderDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDialyDrugOrderDialog::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDialyDrugOrderDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDialyDrugOrderDialog::OnAddHMSDialyDrugOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDialyDrugOrderDialog::OnEditHMSDialyDrugOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDialyDrugOrderDialog::OnDeleteHMSDialyDrugOrderDialog(){
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
 		OnCancelHMSDialyDrugOrderDialog(); 
 	}
	return 0;
}
int CHMSDialyDrugOrderDialog::OnSaveHMSDialyDrugOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_pms_dailydrug_orderTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_pms_dailydrug_orderTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSDialyDrugOrderDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDialyDrugOrderDialog::OnCancelHMSDialyDrugOrderDialog(){
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
int CHMSDialyDrugOrderDialog::OnHMSDialyDrugOrderDialogListLoadData(){
	return 0;
}
