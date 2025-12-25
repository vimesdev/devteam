#include "HMSDailyDrugOrderDialog.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyDrugOrderDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderDialog*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyDrugOrderDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyDrugOrderDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderDialog*)pWnd)->OnDrugListDeleteItem();
} 
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderDialog *)pWnd)->OnOrderIDCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderDialog *pVw = (CHMSDailyDrugOrderDialog *)pWnd;
	pVw->OnFindSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnIssueDateChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnIssueDateChange();
} */
/*static void _OnIssueDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnIssueDateSetfocus();} */ 
/*static void _OnIssueDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnIssueDateKillfocus();
} */
static int _OnIssueDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderDialog *)pWnd)->OnIssueDateCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderDialog *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnPrintedChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnPrintedChange();
} */
/*static void _OnPrintedSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnPrintedSetfocus();} */ 
/*static void _OnPrintedKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnPrintedKillfocus();
} */
static int _OnPrintedCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderDialog *)pWnd)->OnPrintedCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyDrugOrderDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyDrugOrderDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSDailyDrugOrderDialog *)pWnd)->OnStockAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderDialog *pVw = (CHMSDailyDrugOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderDialog *pVw = (CHMSDailyDrugOrderDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderDialog *pVw = (CHMSDailyDrugOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderDialog *pVw = (CHMSDailyDrugOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderDialog *pVw = (CHMSDailyDrugOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderDialog *pVw = (CHMSDailyDrugOrderDialog *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderDialog *pVw = (CHMSDailyDrugOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintDeliveryDrugsSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderDialog *pVw = (CHMSDailyDrugOrderDialog *)pWnd;
	pVw->OnPrintDeliveryDrugsSelect();
} 
static void _OnAddDrugSelectFnc(CWnd *pWnd){
	CHMSDailyDrugOrderDialog *pVw = (CHMSDailyDrugOrderDialog *)pWnd;
	pVw->OnAddDrugSelect();
} 
static int _OnAddHMSDailyDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderDialog*)pWnd)->OnAddHMSDailyDrugOrderDialog();
} 
static int _OnEditHMSDailyDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderDialog*)pWnd)->OnEditHMSDailyDrugOrderDialog();
} 
static int _OnDeleteHMSDailyDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderDialog*)pWnd)->OnDeleteHMSDailyDrugOrderDialog();
} 
static int _OnSaveHMSDailyDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderDialog*)pWnd)->OnSaveHMSDailyDrugOrderDialog();
} 
static int _OnCancelHMSDailyDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugOrderDialog*)pWnd)->OnCancelHMSDailyDrugOrderDialog();
} 
CHMSDailyDrugOrderDialog::CHMSDailyDrugOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 985;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSDailyDrugOrderDialog::~CHMSDailyDrugOrderDialog(){
}
void CHMSDailyDrugOrderDialog::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 410, 570);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 415, 5, 975, 175);
	m_wndDrugInformation.Create(this, _T("Drug Informations"), 415, 180, 975, 570);
	m_wndOrderList.Create(this,10, 180, 405, 565); 
	m_wndPatientList.Create(this,420, 30, 970, 170); 
	m_wndDrugList.Create(this,420, 205, 970, 565); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 10, 30, 110, 55);
	m_wndOrderID.Create(this,115, 30, 215, 55); 
	m_wndFind.Create(this, _T("&Find"), 220, 30, 295, 55);
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 60, 110, 85);
	m_wndOrderDate.Create(this,115, 60, 215, 85); 
	m_wndIssueDateLabel.Create(this, _T("Issue Date"), 220, 60, 295, 85);
	m_wndIssueDate.Create(this,300, 60, 405, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 120, 110, 145);
	m_wndStatus.Create(this,115, 120, 215, 145); 
	m_wndPrintedLabel.Create(this, _T("Printed"), 220, 120, 295, 145);
	m_wndPrinted.Create(this,300, 120, 405, 145); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 90, 110, 115);
	m_wndNote.Create(this,115, 90, 405, 115); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 150, 110, 175);
	m_wndStock.Create(this,115, 150, 405, 175); 
	m_wndAdd.Create(this, _T("&Add Sheet"), 5, 575, 90, 600);
	m_wndEdit.Create(this, _T("&Edit"), 95, 575, 180, 600);
	m_wndDelete.Create(this, _T("&Delete"), 185, 575, 270, 600);
	m_wndSave.Create(this, _T("&Save"), 275, 575, 360, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 365, 575, 450, 600);
	m_wndSend.Create(this, _T("&Send"), 455, 575, 540, 600);
	m_wndPrint.Create(this, _T("&Print Daily Drug"), 545, 575, 686, 600);
	m_wndPrintDeliveryDrugs.Create(this, _T("Print Delivery Drugs"), 691, 575, 832, 600);
	m_wndAddDrug.Create(this, _T("Add Drug"), 880, 575, 980, 600);

}
void CHMSDailyDrugOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderID.SetLimitText(35);
	m_wndOrderID.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndIssueDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndIssueDate.SetCheckValue(true);
	m_wndStatus.SetLimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndPrinted.SetCheckValue(true);
	m_wndNote.SetLimitText(81);
	m_wndNote.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);


	m_wndOrderList.InsertColumn(0, _T("Drug Name/ Cnt"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(1, _T("Unit"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(2, _T("Quantity"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(3, _T("Issue Qty"), CFMT_TEXT, 80);


	m_wndPatientList.InsertColumn(0, _T("Document No"), CFMT_TEXT, 80);
	m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndPatientList.InsertColumn(2, _T("Bed"), CFMT_TEXT, 70);
	m_wndPatientList.InsertColumn(3, _T("Order Date"), CFMT_TEXT, 85);
	m_wndPatientList.InsertColumn(4, _T("Status"), CFMT_TEXT, 100);


	m_wndDrugList.InsertColumn(0, _T("Name /Cnt"), CFMT_TEXT, 150);
	m_wndDrugList.InsertColumn(1, _T("Unit"), CFMT_TEXT, 50);
	m_wndDrugList.InsertColumn(2, _T("Price"), CFMT_TEXT, 70);
	m_wndDrugList.InsertColumn(3, _T("Order Qty"), CFMT_TEXT, 80);
	m_wndDrugList.InsertColumn(4, _T("Issue Qty"), CFMT_TEXT, 80);
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
void CHMSDailyDrugOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndIssueDate.SetEvent(WE_CHANGE, _OnIssueDateChangeFnc);
	//m_wndIssueDate.SetEvent(WE_SETFOCUS, _OnIssueDateSetfocusFnc);
	//m_wndIssueDate.SetEvent(WE_KILLFOCUS, _OnIssueDateKillfocusFnc);
	m_wndIssueDate.SetEvent(WE_CHECKVALUE, _OnIssueDateCheckValueFnc);
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
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPrintDeliveryDrugs.SetEvent(WE_CLICK, _OnPrintDeliveryDrugsSelectFnc);
	m_wndAddDrug.SetEvent(WE_CLICK, _OnAddDrugSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDailyDrugOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_szOrderID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_Text(pDX, m_wndPrinted.GetDlgCtrlID(), m_nPrinted);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);

}
void CHMSDailyDrugOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("pmdo_acceptdate"), m_szIssueDate);
	rs.GetValue(_T("pmdo_desc"), m_szNote);
	rs.GetValue(_T("pmdo_printed"), m_nPrinted);

}
void CHMSDailyDrugOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_createdby"), pMF->GetCurrentUser());
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_createddate"), pMF->GetSysDateTime());
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_updatedby"), pMF->GetCurrentUser());
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_updateddate"), pMF->GetSysDateTime());
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_acceptdate"), m_szIssueDate);
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_desc"), m_szNote);
	m_pms_dailydrug_orderTbl.SetValue(_T("pmdo_printed"), m_nPrinted);

}
void CHMSDailyDrugOrderDialog::SetDefaultValues(){

	m_szOrderID.Empty();
	m_szOrderDate.Empty();
	m_szIssueDate.Empty();
	m_szStatus.Empty();
	m_nPrinted=0;
	m_szNote.Empty();
	m_szStockKey.Empty();

}
int CHMSDailyDrugOrderDialog::SetMode(int nMode){
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
void CHMSDailyDrugOrderDialog::OnOrderListDblClick(){
	
} 
void CHMSDailyDrugOrderDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyDrugOrderDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyDrugOrderDialog::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
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
void CHMSDailyDrugOrderDialog::OnPatientListDblClick(){
	
} 
void CHMSDailyDrugOrderDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyDrugOrderDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyDrugOrderDialog::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
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
void CHMSDailyDrugOrderDialog::OnDrugListDblClick(){
	
} 
void CHMSDailyDrugOrderDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyDrugOrderDialog::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyDrugOrderDialog::OnDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
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
/*void CHMSDailyDrugOrderDialog::OnOrderIDChange(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnOrderIDSetfocus(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnOrderIDKillfocus(){
	
} */
int CHMSDailyDrugOrderDialog::OnOrderIDCheckValue(){
	return 0;
} 
void CHMSDailyDrugOrderDialog::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSDailyDrugOrderDialog::OnOrderDateChange(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnOrderDateKillfocus(){
	
} */
int CHMSDailyDrugOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CHMSDailyDrugOrderDialog::OnIssueDateChange(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnIssueDateSetfocus(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnIssueDateKillfocus(){
	
} */
int CHMSDailyDrugOrderDialog::OnIssueDateCheckValue(){
	return 0;
} 
/*void CHMSDailyDrugOrderDialog::OnStatusChange(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnStatusSetfocus(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnStatusKillfocus(){
	
} */
int CHMSDailyDrugOrderDialog::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSDailyDrugOrderDialog::OnPrintedChange(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnPrintedSetfocus(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnPrintedKillfocus(){
	
} */
int CHMSDailyDrugOrderDialog::OnPrintedCheckValue(){
	return 0;
} 
/*void CHMSDailyDrugOrderDialog::OnNoteChange(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnNoteSetfocus(){
	
} */
/*void CHMSDailyDrugOrderDialog::OnNoteKillfocus(){
	
} */
int CHMSDailyDrugOrderDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSDailyDrugOrderDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyDrugOrderDialog::OnStockSelendok(){
	 
}
/*void CHMSDailyDrugOrderDialog::OnStockSetfocus(){
	
}*/
/*void CHMSDailyDrugOrderDialog::OnStockKillfocus(){
	
}*/
long CHMSDailyDrugOrderDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStockKey
};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDailyDrugOrderDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDailyDrugOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyDrugOrderDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyDrugOrderDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyDrugOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyDrugOrderDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyDrugOrderDialog::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyDrugOrderDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyDrugOrderDialog::OnPrintDeliveryDrugsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyDrugOrderDialog::OnAddDrugSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyDrugOrderDialog::OnAddHMSDailyDrugOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDailyDrugOrderDialog::OnEditHMSDailyDrugOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyDrugOrderDialog::OnDeleteHMSDailyDrugOrderDialog(){
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
 		OnCancelHMSDailyDrugOrderDialog();
 	}
	return 0;
}
int CHMSDailyDrugOrderDialog::OnSaveHMSDailyDrugOrderDialog(){
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
 		//OnHMSDailyDrugOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDailyDrugOrderDialog::OnCancelHMSDailyDrugOrderDialog(){
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
int CHMSDailyDrugOrderDialog::OnHMSDailyDrugOrderDialogListLoadData(){
	return 0;
}
