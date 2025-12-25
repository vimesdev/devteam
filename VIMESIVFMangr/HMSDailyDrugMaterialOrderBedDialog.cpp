#include "HMSDailyDrugMaterialOrderBedDialog.h"
#include "MainFrm.h"
#include "HMSDailyDrugMaterialOrderListBedDialog.h"
#include "HMSConfirmDialog.h"
#include "ReportDocument.h"
#include "HMSReturnDrugDialog.h"
#include "HMSDailyOrderDate.h"
#include "Excel.h"
#include "HMSPatientDrugMaterialBedEntry.h"
#include "HMSReportForms/PrintForms.h"

static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnOrderListDeleteItem();
} 

static int _OnOrderListPrintDeliveryDrugFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnOrderListPrintDeliveryDrug();
}
static int	_OnExportOrderDeliveryDrugFnc(CWnd *pWnd){
	return	((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnExportOrderDeliveryDrug();
}
static int _OnOrderListPrintSheetDateFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnOrderListPrintSheetDate();
}
static int _OnOrderListPrintSheetpublicityFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnOrderListPrintSheetPublicity();
}

static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 

static int _OnPatientListIssueAllFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnPatientListIssueAll();
} 

static int _OnPatientListIssueFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnPatientListIssue();
} 

static int _OnPatientListRollbackFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnPatientListRollback();
} 

static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListAddEntryFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnDrugListAddEntry();
} 

static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnDrugListReturnFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnDrugListReturnDrug();
} 

/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSDailyDrugMaterialOrderBedDialog *pVw = (CHMSDailyDrugMaterialOrderBedDialog *)pWnd;
	pVw->OnFindSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnIssueDateChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnIssueDateChange();
} */
/*static void _OnIssueDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnIssueDateSetfocus();} */ 
/*static void _OnIssueDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnIssueDateKillfocus();
} */
static int _OnIssueDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnIssueDateCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnPrintedChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnPrintedChange();
} */
/*static void _OnPrintedSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnPrintedSetfocus();} */ 
/*static void _OnPrintedKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnPrintedKillfocus();
} */
static int _OnPrintedCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnPrintedCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyDrugMaterialOrderBedDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyDrugMaterialOrderBedDialog *pVw = (CHMSDailyDrugMaterialOrderBedDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDailyDrugMaterialOrderBedDialog *pVw = (CHMSDailyDrugMaterialOrderBedDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDailyDrugMaterialOrderBedDialog *pVw = (CHMSDailyDrugMaterialOrderBedDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDailyDrugMaterialOrderBedDialog *pVw = (CHMSDailyDrugMaterialOrderBedDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyDrugMaterialOrderBedDialog *pVw = (CHMSDailyDrugMaterialOrderBedDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSDailyDrugMaterialOrderBedDialog *pVw = (CHMSDailyDrugMaterialOrderBedDialog *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDailyDrugMaterialOrderBedDialog *pVw = (CHMSDailyDrugMaterialOrderBedDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintDeliveryDrugsSelectFnc(CWnd *pWnd){
	CHMSDailyDrugMaterialOrderBedDialog *pVw = (CHMSDailyDrugMaterialOrderBedDialog *)pWnd;
	pVw->OnPrintDeliveryDrugsSelect();
} 
static void _OnAddDrugSelectFnc(CWnd *pWnd){
	CHMSDailyDrugMaterialOrderBedDialog *pVw = (CHMSDailyDrugMaterialOrderBedDialog *)pWnd;
	pVw->OnAddDrugSelect();
} 
static int _OnAddHMSDailyDrugMaterialOrderBedDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnAddHMSDailyDrugMaterialOrderBedDialog();
} 
static int _OnEditHMSDailyDrugMaterialOrderBedDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnEditHMSDailyDrugMaterialOrderBedDialog();
} 
static int _OnDeleteHMSDailyDrugMaterialOrderBedDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnDeleteHMSDailyDrugMaterialOrderBedDialog();
} 
static int _OnSaveHMSDailyDrugMaterialOrderBedDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnSaveHMSDailyDrugMaterialOrderBedDialog();
} 
static int _OnCancelHMSDailyDrugMaterialOrderBedDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyDrugMaterialOrderBedDialog*)pWnd)->OnCancelHMSDailyDrugMaterialOrderBedDialog();
} 

CHMSDailyDrugMaterialOrderBedDialog::CHMSDailyDrugMaterialOrderBedDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 985;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szOrderNo.Empty();
}
CHMSDailyDrugMaterialOrderBedDialog::~CHMSDailyDrugMaterialOrderBedDialog(){
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 410, 570);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 415, 5, 1005, 175);
	m_wndDrugInformation.Create(this, _T("Drug Informations"), 415, 180, 1005, 570);
	m_wndOrderList.Create(this,10, 150, 405, 565); 
	m_wndPatientList.Create(this,420, 30, 1000, 170); 
	m_wndDrugList.Create(this,420, 205, 1000, 565); 
	m_wndOrderNoLabel.Create(this, _T("Order ID"), 10, 30, 110, 55);
	m_wndOrderNo.Create(this,115, 30, 215, 55); 
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
	m_wndAdd.Create(this, _T("&Add Sheet"), 5, 575, 90, 600);
	m_wndEdit.Create(this, _T("&Edit"), 95, 575, 180, 600);
	m_wndDelete.Create(this, _T("&Delete"), 185, 575, 270, 600);
	m_wndSave.Create(this, _T("&Save"), 275, 575, 360, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 365, 575, 450, 600);
	m_wndSend.Create(this, _T("&Send"), 455, 575, 540, 600);
	m_wndPrint.Create(this, _T("&Print Daily Drug"), 575, 575, 705, 600);
	m_wndPrintDeliveryDrugs.Create(this, _T("Print Delivery Drugs"), 710, 575, 860, 600);
	m_wndAddDrug.Create(this, _T("Add Drug"), 880, 575, 1000, 600);	
}
void CHMSDailyDrugMaterialOrderBedDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFind.ModifyStyle(WS_TABSTOP, 0);
	m_wndOrderNo.SetLimitText(9);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderNo.ModifyStyle(0, ES_UPPERCASE);
	//m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	//m_wndOrderDate.SetToolTipMessage(_T("Ngay yeu cau khong hop le"));
	m_wndIssueDate.SetReadOnly(TRUE);
	m_wndStatus.SetLimitText(35);
	m_wndNote.SetLimitText(81);
	//m_wndNote.SetCheckValue(true);
	m_wndStatus.SetReadOnly(true);
	m_wndPrinted.SetReadOnly(true);

//	m_wndOrderNo.ModifyStyle(0, ES_NUMBER);

	m_wndOrderList.GetHeaderControl()->SetItemHeight(2);
	m_wndOrderList.InsertColumn(0, _T(""), CFMT_TEXT, 0);	//identify
	m_wndOrderList.InsertColumn(1, _T("Drug Name/ Cnt"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndOrderList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 60);
	m_wndOrderList.InsertColumn(4, _T("Issue Qty"), CFMT_MONEY, 60);
	m_wndOrderList.InsertColumn(5, _T("Price"), CFMT_MONEY, 70);
	m_wndOrderList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 80);
	m_wndOrderList.InsertColumn(7, _T("StorageID"), CFMT_MONEY, 0);
	m_wndOrderList.SetSortHeader(false);

	m_wndPatientList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);	//orderid
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 90);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndPatientList.InsertColumn(3, _T("Bed"), CFMT_TEXT, 70);
	m_wndPatientList.InsertColumn(4, _T("Date"), CFMT_DATE, 100);
	m_wndPatientList.InsertColumn(5, _T("Status"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndPatientList.InsertColumn(6, _T("OrderNo"), CFMT_NUMBER, 0);
	m_wndPatientList.InsertColumn(7, _T("Doctor"), CFMT_TEXT, 120);
	m_wndPatientList.InsertColumn(8, _T("Created By"), CFMT_TEXT, 0);

	m_wndDrugList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);	//order_id
	m_wndDrugList.InsertColumn(1, _T(""), CFMT_NUMBER, 0);	//product_id
	m_wndDrugList.InsertColumn(2, _T("Name /Cnt"), CFMT_TEXT, 160);
	m_wndDrugList.InsertColumn(3, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndDrugList.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndDrugList.InsertColumn(5, _T("Quantity"), CFMT_MONEY, 60);
	m_wndDrugList.InsertColumn(6, _T("Issue Qty"), CFMT_MONEY, 70);
	m_wndDrugList.InsertColumn(7, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndDrugList.InsertColumn(8, _T("Amount"), CFMT_MONEY, 80);
	m_wndDrugList.InsertColumn(9, _T("Status"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndDrugList.GetHeaderControl()->SetItemHeight(2);
	
	
	m_transactionTbl.SetTableName(_T("m_transaction"));
/*
	m_transactionTbl.AddField(_T("mt_transaction_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_createdby"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_createddate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_updatedby"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_updateddate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_storage_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_storage_to_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_orderno"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_orderdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_acctdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_deliveryby"), dfText, 65); 
	m_transactionTbl.AddField(_T("mt_deliverydate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_department_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_department_to_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_partner_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_receiveby"), dfText, 65); 
	m_transactionTbl.AddField(_T("mt_description"), dfText, 254); 
	m_transactionTbl.AddField(_T("mt_note"), dfText, 2000); 
	m_transactionTbl.AddField(_T("mt_status"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_doctype"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_org_id"), dfText, 3);
	m_transactionTbl.AddField(_T("mt_ordertype"), dfText, 1);
*/


	m_transactionTbl.AddField(_T("mt_org_id"), dfText, 3);
	m_transactionTbl.AddField(_T("mt_client_id"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_user_id"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_orderno"), dfText, 15); 
	m_transactionTbl.AddField(_T("mt_orderdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_department_id"), dfText, 7); 
	m_transactionTbl.AddField(_T("mt_description"), dfText, 254);
	m_transactionTbl.AddField(_T("mt_ordertype"), dfText, 1);

	CString szSQL;
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T("SELECT * FROM hms_config "));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hi_autoprint_deliveryvote"), m_szAutoPrintDeliveryVote);
		rs.GetValue(_T("hi_deliveryvote_printtype"), m_szPrintType);
	}


}
void CHMSDailyDrugMaterialOrderBedDialog::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.SetWindowText(_T("Order Information"));
	m_wndOrderList.AddEvent(1, _T("Print Delivery Drugs"), _OnOrderListPrintDeliveryDrugFnc);
	//m_wndOrderList.AddEvent(2, _T("Export Delivery Drugs"), _OnExportOrderDeliveryDrugFnc);
	//m_wndOrderList.AddEvent(3, _T("Print Sheet By Date"), _OnOrderListPrintSheetDateFnc);
	//m_wndOrderList.AddEvent(4, _T("Print shelt publicity drugs"), _OnOrderListPrintSheetpublicityFnc);
	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(5, _T("View Detail"), _OnOrderListDeleteItemFnc);

	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	
	m_wndPatientList.SetWindowText(_T("Patient List"));
	m_wndPatientList.AddEvent(1, _T("Preview patient daily drug"), _OnPatientListIssueAllFnc);
/*
	m_wndPatientList.AddEvent(1, _T("Issue All"), _OnPatientListIssueAllFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(2, _T("Issue"), _OnPatientListIssueFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(3, _T("DMO_Rollback"), _OnPatientListRollbackFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(4, _T("Delete Patient"), _OnPatientListDeleteItemFnc);
*/

	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.SetWindowText(_T("Drug List"));
	m_wndDrugList.AddEvent(1, _T("Add Drug"), _OnDrugListAddEntryFnc, 0, VK_F2);
	m_wndDrugList.AddEvent(0, _T("-"), NULL);
	m_wndDrugList.AddEvent(2, _T("Delete Drug"), _OnDrugListDeleteItemFnc, 0, VK_DELETE);
//	m_wndDrugList.AddEvent(0, _T("-"), NULL);
//	m_wndDrugList.AddEvent(3, _T("Return Drug"), _OnDrugListReturnFnc);
	
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
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
void CHMSDailyDrugMaterialOrderBedDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusDesc);
	DDX_Text(pDX, m_wndPrinted.GetDlgCtrlID(), m_nPrinted);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
}
void CHMSDailyDrugMaterialOrderBedDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT  ") \
		_T("mtb_orderno as orderno, ") \
		_T("mtb_orderdate as orderdate, ") \
		_T("mtb_updateddate as issuedate, ") \
		_T("mtb_description as description, ") \
		_T("mtb_status as status, ") \
		_T("mtb_createdby as createdby ") \
		_T("FROM m_transaction_batch ") \
		_T("WHERE mtb_transaction_batch_id=%ld and mtb_department_to_id='%s' and mtb_ordertype ='B' "), 
		m_nOID, pMF->GetDepartmentID());
	rs.ExecSQL(szSQL);

	m_transaction_orders.RemoveAll();
	m_storages.RemoveAll();

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("createdby"), m_szCreatedBy);
		rs.GetValue(_T("orderdate"), m_szOrderTime);
		m_szOrderDate = m_szOrderTime.Left(10);
		rs.GetValue(_T("description"), m_szNote);
		rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("orderno"), m_szBatchNo);
		m_szOrderNo = m_szBatchNo;
		m_szStatusDesc = pMF->GetStatusString(m_szStatus);
		if(m_szStatus == _T("O") || m_szStatus==_T("S"))
			m_szIssueDate.Empty();


		m_szTransactionString  = _T("-100");
		m_szStorageString = _T("-100");
		CRecord rsx(&pMF->m_db);
		szSQL.Format(_T("SELECT mt_transaction_id, mt_storage_id ") \
			_T("FROM m_transaction WHERE mt_orderno='%s' and mt_transaction_id > %ld and mt_ordertype = 'B'"),
			m_szBatchNo, m_nOID);
		rsx.ExecSQL(szSQL);
		while(!rsx.IsEOF())
		{
			long nOrderID;
			int nStorageID;
			rsx.GetValue(_T("mt_transaction_id"), nOrderID);
			rsx.GetValue(_T("mt_storage_id"), nStorageID);
			m_transaction_orders.Add(nOrderID);
			m_storages.Add(nStorageID);
			m_szTransactionString.AppendFormat(_T(",%ld"), nOrderID);
			m_szStorageString.AppendFormat(_T(",%d"), nStorageID);
			rsx.MoveNext();
		}

		SetMode(VM_VIEW);


		
		OnOrderListLoadData();
		OnPatientListLoadData();

		m_wndDrugList.DeleteAllItems();
		CString szLabel;
		m_wndSend.EnableWindow(true);
		if(m_szStatus == _T("O")){
			TranslateString(_T("&Confirm"), szLabel);
			m_wndSend.SetWindowText(szLabel);
		}
		else if(m_szStatus ==_T("S"))
		{
			TranslateString(_T("&Disconfirm"), szLabel);
			m_wndSend.SetWindowText(szLabel);
			m_wndPrint.EnableWindow(true);
			m_wndPrintDeliveryDrugs.EnableWindow(true);

		}
		else
			m_wndSend.EnableWindow(false);

		szSQL.Format(_T("SELECT count(*) FROM m_transaction WHERE mt_orderno='%s' and mt_status='O' "), m_szBatchNo);
		rs.ExecSQL(szSQL);
		
		if(rs.GetIntValue() > 0){
			m_wndDrugList.SetMenuState(1, true);
			m_wndDrugList.SetMenuState(2, true);
		//	m_wndDrugList.SetMenuState(3, false);
		}
		else
		{
			m_wndDrugList.SetMenuState(1, false);
			m_wndDrugList.SetMenuState(2, false);
		//	m_wndDrugList.SetMenuState(3, true);
		}
	}
	else
	{
		SetMode(VM_NONE);
	}


	

	if(m_wndOrderList.GetItemCount() <= 0){
		m_wndSend.EnableWindow(false);
		m_wndPrint.EnableWindow(false);
		m_wndPrintDeliveryDrugs.EnableWindow(false);
	}

}
void CHMSDailyDrugMaterialOrderBedDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	m_transactionTbl.SetValue(_T("mt_user_id"), pMF->GetCurrentUser());
	m_transactionTbl.SetValue(_T("mt_department_id"), pMF->m_szDept);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_description"), m_szNote);	
	m_transactionTbl.SetValue(_T("mt_org_id"), _T("GL"));	
	m_transactionTbl.SetValue(_T("mt_ordertype"), _T("B"));


	//CRecord rs(&pMF->m_db);
	//CString szSQL, szIssueDeptID;
	//szSQL.Format(_T("select msl_dept_id from m_storagelist where msl_storage_id=%ld"), str2int(m_szStockKey));
	//rs.ExecSQL(szSQL);
	//rs.GetValue(_T("msl_dept_id"), szIssueDeptID);
	//m_transactionTbl.SetValue(_T("mt_department_id"), szIssueDeptID);	
	
}
void CHMSDailyDrugMaterialOrderBedDialog::SetDefaultValues(){

	
	m_szOrderDate.Empty();
	m_szIssueDate.Empty();
	m_szStatus.Empty();
	m_nPrinted=0;
	m_szNote.Empty();
	m_szTitle = _T("Daily drug - material order bed");

}
int CHMSDailyDrugMaterialOrderBedDialog::SetMode(int nMode){
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
			m_wndOrderNo.EnableWindow(false);
			m_szOrderDate = pMF->GetSysDate();
			m_wndOrderDate.SetFocus();
			m_wndOrderList.DeleteAllItems();
			m_wndPatientList.DeleteAllItems();
			m_wndDrugList.DeleteAllItems();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndOrderNo.EnableWindow(false);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
			m_wndOrderNo.EnableWindow(true);
			m_wndOrderNo.SetNotEmpty(false);
			if(m_szStatus != _T("O")){
				m_wndPrint.EnableWindow(true);
				m_wndPrintDeliveryDrugs.EnableWindow(true);
			}
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
			m_wndOrderNo.SetNotEmpty(false);
			m_wndOrderNo.EnableWindow(true);
			m_wndOrderList.DeleteAllItems();
			m_wndPatientList.DeleteAllItems();
			m_wndDrugList.DeleteAllItems();
 			break; 
 		}; 
		if(m_szStatus == _T("O")){
			m_wndAddDrug.EnableWindow(true);
		}
		else
		{
			m_wndAddDrug.EnableWindow(false);
			m_wndDelete.EnableWindow(FALSE);
		}

 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSDailyDrugMaterialOrderBedDialog::OnOrderListDblClick(){
	OnPreviewDeliveryDetail();
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
int CHMSDailyDrugMaterialOrderBedDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPreviewDeliveryDetail();
	 return 0;
} 
long CHMSDailyDrugMaterialOrderBedDialog::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderBy, szWhere;
	int nOldStorageID=-1, nStorageID;
	
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hpo_storage_id as storage_id, product_id, product_name as product_name, ") \
				_T(" 	product_uomname as product_unit,") \
				_T(" 	hpol_unitprice as product_unitprice,") \
				_T(" 	sum(hpol_qtyorder) as product_qtyorder,") \
				_T(" 	sum(hpol_qtyissue) as product_qtyissue,") \
				_T(" 	sum(hpol_qtyissue*hpol_unitprice) as product_amount ") \
				_T(" FROM hms_ipharmaorder") \
				_T(" LEFT JOIN hms_ipharmaorderline ON(hpo_orderid=hpol_orderid)") \
				_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
				_T(" WHERE hpo_ordertype ='B' and hpo_transaction_id in(%s)  %s ") \
				_T(" GROUP BY hpo_storage_id, product_id, product_name, product_uomname, hpol_unitprice ") \
				_T(" ORDER BY hpo_storage_id, product_name, product_unit, product_unitprice  ") , m_szTransactionString, szWhere);

_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nIndex = 1;
	int nItem = 0;
	CString tmpStr, szStorageName, szProductName;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("storage_id"), nStorageID);
		if(nStorageID != nOldStorageID)
		{
			nOldStorageID = nStorageID;
			szStorageName.Format(_T("%s [%d]"), pMF->GetStorageName(nStorageID),nStorageID);
			nItem = m_wndOrderList.AddItems(_T(""), szStorageName, NULL);
			m_wndOrderList.SetItemBkColor(nItem, RGB(0, 128, 192), FALSE);
			m_wndOrderList.SetItemTextColor(nItem, RGB(255,255, 255), FALSE);
			m_wndOrderList.MergeCell(nItem, 1, nItem, 5, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			nItem = 0;
		}
		
		nItem++;
		szProductName.Format(_T("%d. %s"), nItem, rs.GetValue(_T("product_name")));
		m_wndOrderList.AddItems(
			rs.GetValue(_T("product_id")),
			szProductName,
			rs.GetValue(_T("product_unit")), 
			rs.GetValue(_T("product_qtyorder")), 
			rs.GetValue(_T("product_qtyissue")), 
			rs.GetValue(_T("product_unitPrice")), 
			rs.GetValue(_T("product_amount")), 
			rs.GetValue(_T("storage_id")), 
			NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;

}
void CHMSDailyDrugMaterialOrderBedDialog::OnPatientListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderNo, szOrderDate, tmpStr;
	
	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		if(!szOrderNo.IsEmpty())
			tmpStr.Format(_T("%s"), _T(","));
		szOrderNo.AppendFormat(_T("%s%d"), tmpStr, m_transaction_orders[i]);		
	}

	OnPrintPatientSummeryDrug(m_nDocumentNo, szOrderNo);	
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szIssueState = m_wndPatientList.GetItemText(nNewItem, 5);
	m_szDoctor = m_wndPatientList.GetItemText(nNewItem, 7);
	m_nDocumentNo = str2long(m_wndPatientList.GetItemText(nNewItem, 1));
	m_szPatientOrderDate = m_wndPatientList.GetItemText(nNewItem, 4);
	OnDrugListLoadData();
} 

int CHMSDailyDrugMaterialOrderBedDialog::OnPatientListIssueAll(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderNo, szOrderDate, tmpStr;
	
	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		if(!szOrderNo.IsEmpty())
			tmpStr.Format(_T("%s"), _T(","));
		szOrderNo.AppendFormat(_T("%s%d"), tmpStr, m_transaction_orders[i]);		
	}

	OnPrintPatientSummeryDrug(m_nDocumentNo, szOrderNo);
	return 0;
}


int CHMSDailyDrugMaterialOrderBedDialog::OnPatientListIssue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	int nMsg = ShowMessage(15);
	if(nMsg == IDNO)
		return 0;

	szSQL.Format(_T("SELECT mt_status as status ") \
		_T("FROM m_transaction ") \
		_T("WHERE mt_transaction_id=%ld and mt_ordertype='T' "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);


	if(m_szStatus != _T("A"))
		return -1;



	//szSQL.Format(_T("UPDATE hms_ipharmaorder ") \
	//	_T("SET hpo_orderstatus='I', hpo_updatedby='%s', hpo_updateddate=systimestamp ") \
	//	_T("WHERE hpo_orderid=%ld AND hpo_orderstatus in('O','S','A') "),
	//	pMF->GetCurrentUser(), m_nPharmaOID);
	//int ret = pMF->ExecSQL(szSQL);
	//if(ret >= 0){
	//	OnPatientListLoadData();
	//	pMF->CreateFees(_T("D"));
	//}
	return 0;
}

int CHMSDailyDrugMaterialOrderBedDialog::OnPatientListRollback(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	if(m_szStatus != _T("A"))
		return -1;
	int nMsg = ShowMessage(16);
	if(nMsg == IDNO)
		return 0;

	//szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_orderstatus='A', hpo_updatedby='%s', hpo_updateddate=systimestamp ") \
	//	_T("WHERE hpo_orderid=%ld AND hpo_orderstatus='I' AND hpo_payment<>'P'"),
	//	pMF->GetCurrentUser(), m_nPharmaOID);
	//int ret = pMF->ExecSQL(szSQL);
	//if(ret >= 0){
	//	OnPatientListLoadData();
	//}
	return 0;
}
int CHMSDailyDrugMaterialOrderBedDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	
	
	if(m_wndDrugList.GetItemCount() > 0){
		ShowMessageBox(_T("Ban phai xoa thuoc truoc khi xoa benh nhan"));
		return 0;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return -1;
	m_nOID = ToLong(m_wndPatientList.GetItemText(nSel, 6));	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("SELECT mt_status as status FROM m_transaction WHERE mt_transaction_id=%ld and mt_doctype='DMO' "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);

	if(m_szStatus != _T("O"))
		return -1;

	szSQL.Format(_T("HMS_IPHARMAORDER_DELETE(%ld, '%s') "), m_nOID, pMF->GetCurrentUser()); 
	//_fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
		OnPatientListLoadData();
		OnOrderListLoadData();
 	}
	
	return 0;
} 
long CHMSDailyDrugMaterialOrderBedDialog::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere;
	
	szWhere.Format(_T(" and hpo_transaction_id in(%s) "), m_szTransactionString);
	m_wndPatientList.BeginLoad(); 
	
	int nCount = 0, nIndex =1;
	szSQL.Format(_T(" SELECT distinct hpo_docno as docno,") \
_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
_T(" 	hpo_roomid||'.'||hpo_bedid as bedid,") \
_T(" 	 trunc_date(hpo_orderdate) as orderdate, hpo_createdby ") \
_T(" FROM hms_ipharmaorder ") \
_T(" LEFT JOIN hms_doc ON(hd_docno=hpo_docno) ") \
_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
_T(" WHERE hpo_ordertype ='B' %s ORDER BY docno,orderdate "), szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	long nDocumentNo;
	int n = -1;
	while(!rs.IsEOF()){
		rs.GetValue(_T("docno"), nDocumentNo);
		tmpStr.Format(_T("%d"), nIndex++);
		int nItem = m_wndPatientList.AddItems(
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("bedid")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("Status")), 
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("doctor")), 
			rs.GetValue(_T("createdby")), 
			NULL);

		if(nDocumentNo == m_nDocumentNo)
		{
			m_wndPatientList.SetItemBkColor(nItem, RGB(0, 128, 192), FALSE);
			m_wndPatientList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			n = nItem;
		}
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	if(n < 0)
		n = m_wndPatientList.GetItemCount();
	m_wndPatientList.SetCurSel(n);
	return nCount;
}
void CHMSDailyDrugMaterialOrderBedDialog::OnDrugListDblClick(){
	
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 

int CHMSDailyDrugMaterialOrderBedDialog::OnDrugListAddEntry(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
		return 0;
	CHMSPatientDrugMaterialBedEntry* newPopup = new CHMSPatientDrugMaterialBedEntry(this, VM_ADD);
	newPopup->m_szCurrentOrderDate = m_szOrderTime;
	newPopup->m_nOID = m_nOID;
	newPopup->m_szDoctor = pMF->m_szDoctor;
	newPopup->m_szBatchNo = m_szBatchNo;
	newPopup->m_szStorageString = m_szStorageString;
	
	newPopup->m_szOrderDate = m_szOrderDateEmtry;
	newPopup->m_szPatientNameKey = m_szPatientNameKey;
	newPopup->m_nDays = m_nDays;
	newPopup->m_bMultipleDay = m_bMultipleDay;	
	newPopup->ShowPopup(&m_wndDrugList);
	return 0;
} 

int CHMSDailyDrugMaterialOrderBedDialog::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	long nProductID;
	long nOrderID;
	if(m_szStatus != _T("O"))
		return -1;
	
	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString szMsg;
		szMsg.Format(_T("This order created by other user[%s]. Can not delete it"), m_szCreatedBy);
		ShowMessageBox(szMsg);
		return -1;
	}

	int nSel = m_wndDrugList.GetCurSel();
	if(nSel < 0) return -1;
	
	
	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	int ret = 0;
	for (int i = m_wndDrugList.GetItemCount()-1; i >=0; i--)
	{
		if(m_wndDrugList.GetCheck(i))
		{
			nOrderID = str2long(m_wndDrugList.GetItemText(i, 0));
			nProductID = str2long(m_wndDrugList.GetItemText(i, 1));
			szSQL.Format(_T("HMS_IPHARMAORDER_DELLINE(%ld, %ld, '%s', 1, 1) "), nOrderID, nProductID, pMF->GetCurrentUser()); 
		//_fmsg(_T("%s"), szSQL);
 			int res =  str2int(pMF->ExecDML(szSQL)); 
			if(res > 0){
				m_wndDrugList.DeleteItem(i);
				ret += res;
			}
			
		}
	}

	if(ret <= 0)
	{
		nOrderID = str2long(m_wndDrugList.GetItemText(nSel, 0));
		nProductID = str2long(m_wndDrugList.GetItemText(nSel, 1));

		szSQL.Format(_T("HMS_IPHARMAORDER_DELLINE(%ld, %ld, '%s', 1, 1) "), nOrderID, nProductID, pMF->GetCurrentUser()); 
			//_fmsg(_T("%s"), szSQL);
 		int res =  str2int(pMF->ExecDML(szSQL)); 
		if(res > 0){
			m_wndDrugList.DeleteItem(nSel);
			ret += res;
		}
	}
	
 	if(ret >= 0){ 
//		m_wndDrugList.DeleteItem(nSel);
		OnOrderListLoadData();
		if(m_wndDrugList.GetItemCount() <=0){
			//OnPatientListDeleteItem();
			OnPatientListLoadData();
			OnOrderListLoadData();
		}
 	}
	return 0;
} 
int CHMSDailyDrugMaterialOrderBedDialog::OnDrugListReturnDrug(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	if(!pMF->IsActiveDocument()){
//		ShowMessageBox(_T("This patient profile is terminated. Do not allow."), 0);
//		return -1;
//	}
//	if(m_szStatus != _T("A") || m_szIssueState != _T("I"))
//		return -1;
	int nSel = m_wndDrugList.GetCurSel();
	if(nSel < 0)
		return -1;
	CHMSReturnDrugDialog dlg(this);
	dlg.m_nOrderID = str2long(m_wndDrugList.GetItemText(nSel, 0));
	dlg.m_nProduct_ID = str2long(m_wndDrugList.GetItemText(nSel, 1));
	dlg.m_nOrderQuantity = str2float(m_wndDrugList.GetItemText(nSel, 5));
	dlg.m_nIssueQuantity = str2float(m_wndDrugList.GetItemText(nSel, 6));
	if(dlg.DoModal() == IDOK){
		OnDrugListLoadData();
	}
	 return 0;
} 
long CHMSDailyDrugMaterialOrderBedDialog::OnDrugListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0, nIndex=1;
	szSQL.Format(_T(" SELECT hpol_orderid, hpo_orderstatus, product_id, product_name as drugname, ") \
				_T(" 	product_uomname as unit,") \
				_T(" 	product_countryname as countryname,") \
				_T(" 	hpol_unitprice as unitprice,") \
				_T(" 	sum(hpol_qtyorder) as qtyorder,") \
				_T(" 	sum(hpol_qtyissue) as qtyissue, ") \
				_T(" 	sum((hpol_qtyissue)*hpol_unitprice) as amount ") \
				_T(" FROM hms_ipharmaorder  ") \
				_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid) ") \
				_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
				_T(" WHERE hpo_docno=%ld and hpol_batch_id=%ld  and trunc_date(hpo_orderdate)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and hpol_line > 0 ") \
				_T(" GROUP BY hpol_orderid, hpo_orderstatus, hpol_line, product_id, product_name, product_uomname, hpol_unitprice, product_countryname ") \
				_T(" ORDER BY hpol_orderid, hpol_line, product_name, product_uomname ") , m_nDocumentNo,  m_nOID, m_szPatientOrderDate);
//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nItem = 0;
	float nQtyOrder, nQtyIssue;
	while(!rs.IsEOF()){ 
		nItem++;		
		rs.GetValue(_T("qtyorder"), nQtyOrder);
		rs.GetValue(_T("qtyissue"), nQtyIssue);
		nItem = m_wndDrugList.AddItems(
			rs.GetValue(_T("hpol_orderid")), 
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("drugname")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("countryname")), 
			rs.GetValue(_T("qtyorder")), 
			rs.GetValue(_T("qtyissue")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("hpo_orderstatus")),
			NULL);
		rs.MoveNext();
		if(nQtyOrder > nQtyIssue){
			m_wndDrugList.SetSubItemBkColor(nItem, 6, RGB(0, 0, 255), FALSE);
			m_wndDrugList.SetSubItemTextColor(nItem, 6, COLOR_WHITE, FALSE);

		}
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
}
/*void CHMSDailyDrugMaterialOrderBedDialog::OnOrderNoChange(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnOrderNoSetfocus(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnOrderNoKillfocus(){
	
} */
int CHMSDailyDrugMaterialOrderBedDialog::OnOrderNoCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(GetMode() == VM_ADD){
		/*if(m_szOrderNo.IsEmpty())
			return 0;
		szSQL.Format(_T("SELECT count(*) FROM m_transaction WHERE mt_orderno='%s' and trunc_date(mt_orderdate) > trunc_date(sysdate)-365 "), m_szOrderNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0){
			m_wndOrderNo.SetToolTipMessage(_T("Order Id is existing on the database"));
			return -1;
		}*/
		return 0;
	}
	if(GetMode() == VM_VIEW || GetMode() == VM_NONE){
		szSQL.Format(_T("SELECT mtb_transaction_batch_id ") \
			_T("FROM m_transaction_batch ") \
			_T("WHERE mtb_orderno='%s' and mtb_department_to_id='%s' "), 
			m_szOrderNo, pMF->GetDepartmentID());
		rs.ExecSQL(szSQL);
_tprintf(_T("\r\n%s"), szSQL);
		if(rs.GetRecordCount() <=0)
		{

			m_wndOrderNo.SetToolTipMessage(_T("Order identify not found"));
			SetMode(VM_NONE);
			m_wndOrderNo.SetFocus();
			
			return -1;			
		}
		rs.GetValue(_T("mtb_transaction_batch_id"), m_nOID);
		if(m_nOID > 0)
		{
			GetDataToScreen();
			m_wndOrderNo.SetFocus();
		}
		return 1;
	}
	return 0;
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	static CString szFromDate, szToDate;
	CHMSDailyDrugMaterialOrderListBedDialog dlg(this);
	dlg.m_szDeptKey = pMF->m_szDept;
	dlg.m_szOrderType = _T("T");
	dlg.m_szFromDate =  szFromDate;
	dlg.m_szToDate = szToDate;
	if(dlg.DoModal() ==IDOK){
		m_nOID = dlg.m_nOID;
		GetDataToScreen();
		m_wndDrugList.SetFocus();
		szFromDate = dlg.m_szFromDate;
		szToDate = dlg.m_szToDate;
	}
	
} 
/*void CHMSDailyDrugMaterialOrderBedDialog::OnOrderDateChange(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnOrderDateKillfocus(){
	
} */
int CHMSDailyDrugMaterialOrderBedDialog::OnOrderDateCheckValue(){
	UpdateData(true);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int n = CompareDate(m_szOrderDate, pMF->GetSysDate());
	if(n < - 10 || n > 0)
		return -1;
	return 0;
} 
/*void CHMSDailyDrugMaterialOrderBedDialog::OnIssueDateChange(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnIssueDateSetfocus(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnIssueDateKillfocus(){
	
} */
int CHMSDailyDrugMaterialOrderBedDialog::OnIssueDateCheckValue(){
	return 0;
} 

/*void CHMSDailyDrugMaterialOrderBedDialog::OnStatusChange(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnStatusSetfocus(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnStatusKillfocus(){
	
} */
int CHMSDailyDrugMaterialOrderBedDialog::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSDailyDrugMaterialOrderBedDialog::OnPrintedChange(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnPrintedSetfocus(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnPrintedKillfocus(){
	
} */
int CHMSDailyDrugMaterialOrderBedDialog::OnPrintedCheckValue(){
	return 0;
} 
/*void CHMSDailyDrugMaterialOrderBedDialog::OnNoteChange(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnNoteSetfocus(){
	
} */
/*void CHMSDailyDrugMaterialOrderBedDialog::OnNoteKillfocus(){
	
} */
int CHMSDailyDrugMaterialOrderBedDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSDailyDrugMaterialOrderBedDialog();
	
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSDailyDrugMaterialOrderBedDialog();
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSDailyDrugMaterialOrderBedDialog();
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDailyDrugMaterialOrderBedDialog();
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSDailyDrugMaterialOrderBedDialog();
} 
void CHMSDailyDrugMaterialOrderBedDialog::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	CString szLabel, szSendOrderBy,szSendByComfirm;
	if(m_wndOrderList.GetItemCount() <= 0)
		return;

	if(!pMF->CheckPermission(_T("11.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}
	szSendByComfirm.Empty();
	szSendOrderBy.Empty();
	pMF->m_bConfirm = true;
	if(pMF->m_bConfirm)
	{
		CHMSConfirmDialog dlg;
		dlg.m_szDoctor = pMF->GetCurrentUser();		
		if(dlg.DoModal() != IDOK)
			return;

		szSendOrderBy = dlg.m_szDoctor;
	}

	
	if(m_szStatus == _T("O"))
	{
		szSQL.Format(_T("m_transaction_batch_send(%ld, '%s', '%s') "), m_nOID, szSendOrderBy, pMF->GetCurrentUser());
		
	}
	else
	{
		szSQL.Format(_T("m_transaction_batch_cancel(%ld, '%s', '%s') "), m_nOID, szSendOrderBy, pMF->GetCurrentUser());
	}
	long ret = str2long(pMF->ExecDML(szSQL));

	GetDataToScreen();
} 
int CHMSDailyDrugMaterialOrderBedDialog::OnPreviewDeliveryDetail(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CString szSQL, szOrderNo, szOrderDate, tmpStr;
	CPrintForms printer;		
	
	int nSel = m_wndOrderList.GetCurSel();
	if (nSel < 0)
		return -1;
	int nStorage_ID = str2int(m_wndOrderList.GetItemText(nSel, 7));
	long nProduct_id = str2long(m_wndOrderList.GetItemText(nSel, 0));
	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		if(!szOrderNo.IsEmpty())
			tmpStr.Format(_T("%s"), _T(","));
		szOrderNo.AppendFormat(_T("%s%d"), tmpStr, m_transaction_orders[i]);		
	}
	
	printer.OnPrintDailyViewDetail(m_szOrderNo, szOrderDate, szOrderNo, nProduct_id, 0, _T("'B'"), nStorage_ID);
	return 0;
} 

void CHMSDailyDrugMaterialOrderBedDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("11.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	
	if(m_szStatus == _T("O"))
	{
		ShowMessageBox(_T("Phi\x1EBFu tr\x1EA1ng th\xE1i \x111\x61ng m\x1EDF. \x42\x1EA1n ph\x1EA3i \x78\xE1\x63 nh\x1EADn g\x1EEDi phi\x1EBFu"));
		return;
	}

//	pMF->PrintDrugOrder(m_nOID);
	CPrintForms printer;
	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		long nOID = m_transaction_orders[i];
		printer.PrintDDO2(nOID);
	}
//	printer.PrintDepartmentExportSheet(m_nOID, _T(""));
//	int retMsg = ShowMessageBox(_T("Do you want to print delivery drugs vote?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
//	if(retMsg == IDYES){
//		OnOrderListPrintDeliveryDrug();
//	}
	
} 


int CHMSDailyDrugMaterialOrderBedDialog::OnOrderListPrintSheetPublicity(){
	CHMSDailyOrderDate dlg(this);
	dlg.m_nType =1;
	dlg.DoModal();
	return 0;	
}
int CHMSDailyDrugMaterialOrderBedDialog::OnOrderListPrintSheetDate(){
	CHMSDailyOrderDate dlg(this);
	dlg.m_nType = 2;
	dlg.DoModal();

	return 0;
}
int CHMSDailyDrugMaterialOrderBedDialog::OnAddHMSDailyDrugMaterialOrderBedDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 

	if(!pMF->CheckPermission(_T("11.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDailyDrugMaterialOrderBedDialog::OnEditHMSDailyDrugMaterialOrderBedDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if(!pMF->CheckPermission(_T("11.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	SetMode(VM_EDIT);

	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_ipharmaorder WHERE hpo_transaction_id= %ld "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndOrderDate.EnableWindow(false);
		m_wndNote.SetFocus();
	}
 	
	return 0;  
}
int CHMSDailyDrugMaterialOrderBedDialog::OnDeleteHMSDailyDrugMaterialOrderBedDialog(){
 	if(GetMode() != VM_VIEW || m_szStatus != _T("O")) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 


	if(!pMF->CheckPermission(_T("11.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString szMsg;
		szMsg.Format(_T("This order created by other user[%s]. Can not delete it"), m_szCreatedBy);
		ShowMessageBox(szMsg);
	}

	if(m_wndOrderList.GetItemCount() > 0)
	{
		ShowMessageBox(_T("Ban phai xoa thuoc cua cac benh nhan truoc khi xoa phieu."));
		return -1;
	}
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	
	szSQL.Format(_T("M_TRANSACTION_BATCH_DELETE(%ld,'%s') "), m_nOID, pMF->GetCurrentUser()); 
 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret >= 0){ 
		m_wndPatientList.DeleteAllItems();
		m_wndDrugList.DeleteAllItems();
		m_wndOrderList.DeleteAllItems();
		m_szOrderNo.Empty();
 		SetMode(VM_NONE); 
 	}
	return 0;
}
int CHMSDailyDrugMaterialOrderBedDialog::OnSaveHMSDailyDrugMaterialOrderBedDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("AD_GETNEXTVAL('STORAGEDAILYORDERBED_NO','Y') "));
		m_szOrderNo = pMF->ExecDML(szSQL);		

		m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
		szSQL.Format(_T("M_TRANSACTION_BATCH_CREATE(%s) "), m_transactionTbl.FormatSQL());
		m_nOID = str2long(pMF->ExecDML(szSQL));
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE mt_transaction_id=%ld "), m_nOID); 
 		szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_approveddate,mt_status,mt_ordertype,mt_ordertype,mt_postedby,mt_deliveryby,mt_approveddate,mt_approvedby,mt_receiveby")); 
 		szSQL += szWhere;
 	} 
	_tprintf(_T("%d"), m_nOID);
	if(m_nOID > 0) 
 	{ 
		GetDataToScreen();
 		//SetMode(VM_VIEW); 
		m_wndAddDrug.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return m_nOID; 
 	return 0; 
}
int CHMSDailyDrugMaterialOrderBedDialog::OnCancelHMSDailyDrugMaterialOrderBedDialog(){
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
int CHMSDailyDrugMaterialOrderBedDialog::OnHMSDailyDrugMaterialOrderBedDialogListLoadData(){
	return 0;
}


void CHMSDailyDrugMaterialOrderBedDialog::RefreshData(){
	OnOrderListLoadData();
	OnPatientListLoadData();
}

void CHMSDailyDrugMaterialOrderBedDialog::LoadDrugList(long nID){
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++){
		m_nOID = ToLong(m_wndPatientList.GetItemText(i, 6));
		if(m_nOID = nID)
		{
			m_wndPatientList.SetCurSel(i);
			break;
		}
	}
}

void CHMSDailyDrugMaterialOrderBedDialog::OnPrintDelivery(CString szTransactionID, LPCTSTR lpszOrderDate){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;	
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	CRecord prs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	long nPharmaOID;

	if(m_szPrintType == _T("P")){
		if(!rpt.Init(_T("Reports/HMS/HT_DAILYDELIVERYDRUGPORTRAIT.RPT")) )
			return;

		tmpStr.Empty();
		StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
		rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
		StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
		rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->m_szDept));
		tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(lpszOrderDate, yyyymmdd, ddmmyyyy));
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("SheetNo"), m_szOrderNo);
		//Page Header

		szSQL.Format(_T(" SELECT  hpo_docno as docno, hpo_orderid as orderid, ") \
			_T("	trunc_date(hpo_orderdate) as orderdate, ") \
			_T("	htr_mainicd, htr_maindisease, ") \
			_T("	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T("	hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age, ") \
			_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
			_T("	(select hrl_name from hms_roomlist where hrl_id=hpo_roomid and hrl_deptid=hpo_deptid and rownum = 1) as roomname,	") \
			_T("	(select hbl_name from hms_bed left join hms_bedlist ON(hbl_id=hb_bedid) where hb_docno=htr_docno AND hb_deptid=htr_deptid AND hb_refidx=htr_idx and rownum = 1) as bedname") \
			_T(" FROM hms_patient ") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
			_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
			_T(" LEFT JOIN hms_treatment_record on(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
			_T(" WHERE 	hpo_transaction_id IN(%s) and trunc_date(hpo_orderdate)= to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
			_T(" ORDER BY roomname, bedname, pname, docno"), szTransactionID, lpszOrderDate);
	//_fmsg(_T("%s"), szSQL);	
		prs.ExecSQL(szSQL);
		CReportSection* rptDetail;
		CString szItemID;
		long nOrderNo;
		int i = 1;
		while(!prs.IsEOF())
		{
			prs.GetValue(_T("orderid"), nPharmaOID);

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			
			prs.GetValue(_T("orderdate"), tmpStr);
			rptDetail->SetValue(_T("1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

			prs.GetValue(_T("pname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);

			prs.GetValue(_T("docno"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);

			tmpStr, prs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			
			tmpStr, prs.GetValue(_T("yearofbirth"), tmpStr);
			rptDetail->SetValue(_T("4.1"), tmpStr);
			
			prs.GetValue(_T("roomname"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			prs.GetValue(_T("bedname"), tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			
			tmpStr.Format(_T("%s(%s)"),prs.GetValue(_T("htr_maindisease")),prs.GetValue(_T("htr_mainicd")));
			rptDetail->SetValue(_T("7"),tmpStr);
			
			prs.GetValue(_T("orderid"), nOrderNo);

			szSQL.Format(_T(" SELECT 	product_id as itemid,") \
			_T(" product_name as name, product_uomname as unit, ") \
			_T(" 	sum(hpol_qtyorder) as qty ") \
			_T(" FROM hms_ipharmaorderline ") \
			_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
			_T(" WHERE hpol_orderid=%ld ") \
			_T(" GROUP BY product_id, product_name, product_uomname ORDER BY product_name "), nPharmaOID);
			rsl.ExecSQL(szSQL);
			int n = 1;
			while(!rsl.IsEOF()){
				rptDetail = rpt.AddDetail();
				tmpStr.Format(_T("%d"), n++);
				rptDetail->SetValue(_T("1"), tmpStr);
				rsl.GetValue(_T("name"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				rsl.GetValue(_T("unit"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);
				rsl.GetValue(_T("qty"), tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				rsl.GetValue(_T("usage"), tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				rsl.MoveNext();
			}
			prs.MoveNext();
		}
		CString szDate;
		tmpStr = pMF->GetSysDate();
		szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
		rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//	rs.GetValue(_T("doctor"), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("UserName"), pMF->GetDoctorName(pMF->GetCurrentUser()));
		CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
		if(img)
		{
			img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
			img->SetFixedHeight(false);
		}

		rpt.PrintPreview();


	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HT_DAILYDELIVERYDRUG.RPT")) )
			return;

		tmpStr.Empty();
		StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
		rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
		StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
		rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->m_szDept));
		tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(lpszOrderDate, yyyymmdd, ddmmyyyy));
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("SheetNo"), m_szOrderNo);

		//Page Header

		szSQL.Format(_T(" SELECT distinct product_name as drugname, ") \
			_T("product_id as itemid ") \
		_T(" FROM hms_ipharmaorder ") \
		_T(" LEFT JOIN hms_ipharmaorderline ON(hpo_orderid=hpol_orderid)") \
		_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
		_T(" WHERE 	hpo_transaction_id IN(%s) ") \
		_T(" ORDER BY drugname "), szTransactionID);
		int nCount = rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return;
		CString szName;
		int i =1;
		while(!rs.IsEOF())
		{
			szName.Format(_T("%d"), i++);
			rs.GetValue(_T("drugname"), tmpStr);
			rpt.GetPageHeader()->SetValue(szName, tmpStr);
			rs.MoveNext();
		}
		for (; i < 37; i++){
			szName.Format(_T("%d"), i++);
			rpt.GetPageHeader()->SetValue(szName, _T(""));
		}
		szSQL.Format(_T(" SELECT  hpo_docno as docno, hpo_orderid as orderid, ") \
			_T(" hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age, ") \
			_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T(" 	hpo_roomid as roomid, hpo_bedid as bedid ") \
			_T(" FROM hms_patient ") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
			_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
			_T(" WHERE 	hpo_transaction_id IN(%s) ") \
			_T(" ORDER BY pname, docno"), szTransactionID);
		prs.ExecSQL(szSQL);
		CReportSection* rptDetail;
		CString szItemID;
		long nOrderNo;
		i = 1;
		while(!prs.IsEOF())
		{
			rptDetail = rpt.AddDetail();
			szName.Format(_T("%d"), i++);
			rptDetail->SetValue(_T("Index"), szName);
			prs.GetValue(_T("docno"), tmpStr);
			rptDetail->SetValue(_T("DocNo"), tmpStr);
			prs.GetValue(_T("pname"), tmpStr);
			rptDetail->SetValue(_T("PatientName"), tmpStr);
		
			prs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("age"), tmpStr);

			prs.GetValue(_T("roomid"), tmpStr);
			rptDetail->SetValue(_T("roomid"), _T("P: ")+tmpStr);
			prs.GetValue(_T("bedid"), tmpStr);
			rptDetail->SetValue(_T("bedid"), _T("G: ")+tmpStr);

			rptDetail->SetValue(_T("SignLabel"), _T(""));
			
			prs.GetValue(_T("orderid"), nOrderNo);

			szSQL.Format(_T(" SELECT 	product_id as itemid,") \
			_T(" 	sum(hpol_qtyorder) as qty") \
			_T(" FROM hms_ipharmaorderline ") \
			_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
			_T(" WHERE hpol_orderid=%ld ") \
			_T(" GROUP BY product_id"), nOrderNo);
			rsl.ExecSQL(szSQL);
			while(!rsl.IsEOF()){
				int n = 0;
				rsl.GetValue(_T("itemid"), szItemID);
				rs.MoveFirst();
				while(!rs.IsEOF())
				{
					n++;
					rs.GetValue(_T("itemid"), tmpStr);
					if(tmpStr == szItemID){
						break;
					}
					
					rs.MoveNext();
				}
				szName.Format(_T("%d"), n);
				rsl.GetValue(_T("qty"), tmpStr);
				rptDetail->SetValue(szName, tmpStr);
				rsl.MoveNext();
			}
			prs.MoveNext();
		}

		CString szDate;
		tmpStr = pMF->GetSysDate();
		szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
		rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		rpt.GetReportFooter()->SetValue(_T("UserName"), pMF->GetDoctorName(pMF->GetCurrentUser()));
		CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
		if(img)
		{
			img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
			img->SetFixedHeight(false);
		}
		rpt.PrintPreview();
	}
}

void CHMSDailyDrugMaterialOrderBedDialog::OnExportDelivery_Lanscape(long nOID, LPCTSTR lpszOrderDate){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CRecord ors(&pMF->m_db);
	CExcel xls;
	CString szSQL, szWhere, szTemp;
	int nCol, nRow;
	nCol = nRow = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	UpdateData(true);

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 16);
	xls.SetColumnWidth(5, 18);
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellMergedColumns(nCol, nRow+1, 4);
	xls.SetCellMergedColumns(nCol, nRow+2, 6);
	xls.SetCellMergedColumns(nCol, nRow+3, 6);
	xls.SetCellMergedColumns(nCol, nRow+4, 6);
	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow+1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(nCol, nRow+2, _T("PHI\x1EBEU PH\xC1T THU\x1ED0\x43"), FMT_TEXT | FMT_CENTER, true, 12);
	szTemp.Format(_T("Ng\xE0y %s"), CDate::Convert(lpszOrderDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow+3, szTemp, FMT_TEXT | FMT_CENTER);
	szTemp.Format(_T("S\x1ED1 phi\x1EBFu %s"), m_szOrderNo);
	xls.SetCellText(nCol, nRow+4, szTemp, FMT_TEXT | FMT_CENTER);
	
	// column heading
	xls.SetCellText(nCol, nRow+5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+1, nRow+5, _T("Ng\xE0y"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+2, nRow+5, _T("S\x1ED1 HS"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+3, nRow+5, _T("\x42\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+4, nRow+5, _T("Ph\xF2ng"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+5, nRow+5, _T("Gi\x1B0\x1EDDng"), FMT_TEXT | FMT_CENTER, true, 10);
	
	
	szSQL.Format(_T(" SELECT distinct product_name as drugname, product_id as itemid ") \
		_T(" FROM hms_ipharmaorder ") \
		_T(" LEFT JOIN hms_ipharmaorderline ON(hpo_orderid=hpol_orderid)") \
		_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
		_T(" WHERE 	hpo_transaction_id=%ld ") \
		_T(" 	and trunc_date(hpo_orderdate)='%s' ORDER BY drugname "), nOID, lpszOrderDate);

	int nCount = 0;
	int nSubtotal[256];
	ors.ExecSQL(szSQL);
	if (ors.IsEOF())
		return;
	nCount = ors.GetRecordCount();
	if (nCount>0){
		for (int i = 0;i <= nCount; i++){
			nSubtotal[i]=0;
			xls.SetCellText(nCol+6+i, nRow+5, ors.GetValue(_T("drugname")), FMT_TEXT, true, 10);
			ors.MoveNext();
		}
	}
	szSQL.Format(_T(" SELECT  trunc_date(hpo_orderdate) as odate,hpo_docno as docno, hpo_orderid as orderid, ") \
			_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T(" hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age, ") \
			_T(" date_part('year', hp_birthdate) as yearofbirth, ") \
			_T(" 	hpo_deptid as deptid, hpo_roomid as roomid, hpo_bedid as bedid, ") \
			_T(" 	(select hrl_name from hms_roomlist where hrl_deptid = hpo_deptid and hrl_id = hpo_roomid) as roomname,") \
			_T(" 	(select hbl_name from hms_bedlist where hbl_deptid = hpo_deptid and hbl_roomid = hpo_roomid and hbl_id = hpo_bedid) as bedname") \
			_T(" FROM hms_patient ") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
			_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
			_T(" WHERE 	hpo_transaction_id=%ld ") \
			_T(" 	and trunc_date(hpo_orderdate)='%s'") \
			_T(" ORDER BY pname, docno"), nOID, lpszOrderDate);

	rs.ExecSQL(szSQL);	
	CString szNewOrder, szOldOrder;
	int index = 0;
	int idx = 0;	
	long nPharmaOID;

	while (!rs.IsEOF()){		
		index++;
		szTemp.Format(_T("%d"), index);
		xls.SetCellText(nCol, nRow+6, szTemp, FMT_INTEGER);

		rs.GetValue(_T("odate"), szTemp);
		xls.SetCellText(nCol+1, nRow+6, CDate::Convert(szTemp, yyyymmdd, ddmmyyyy));

		rs.GetValue(_T("docno"), szTemp);
		xls.SetCellText(nCol+2, nRow+6, szTemp, FMT_INTEGER);

		rs.GetValue(_T("pname"), szTemp);
		xls.SetCellText(nCol+3, nRow+6, szTemp, FMT_TEXT | FMT_CENTER);
		
		rs.GetValue(_T("roomname"), szTemp);
		xls.SetCellText(nCol+4, nRow+6, szTemp, FMT_TEXT | FMT_CENTER);

		rs.GetValue(_T("bedname"), szTemp);
		xls.SetCellText(nCol+5, nRow+6, szTemp, FMT_TEXT | FMT_CENTER);
		
		rs.GetValue(_T("orderid"), nPharmaOID);

		szSQL.Format(_T(" SELECT 	product_id as itemid,") \
			_T(" 	sum(hpol_qtyorder) as qty") \
			_T(" FROM hms_ipharmaorderline ") \
			_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
			_T(" WHERE hpol_orderid=%ld ") \
			_T(" GROUP BY product_id"), nPharmaOID);
		rsl.ExecSQL(szSQL);
		while(!rsl.IsEOF()){
			idx=0;			
			ors.MoveFirst();
			while (!ors.IsEOF()){				
				idx++;
				if(ors.GetValue(_T("itemid")) == rsl.GetValue(_T("itemid"))){
					break;
				}
				ors.MoveNext();
			}			
			//idx++;//thu tu xuat hien trong rs
			xls.SetCellText(nCol+5+idx, nRow+6, rsl.GetValue(_T("qty")), FMT_INTEGER);
			nSubtotal[idx] += ToInt(rsl.GetValue(_T("qty")));
			rsl.MoveNext();
		}
		nRow++;
		rs.MoveNext();		
	} 

	CString tmpStr;
	xls.SetCellMergedColumns(1,nRow+6,5);	
	xls.SetCellText(1, nRow+6, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT,TRUE);
	for (int i = 1;i <= nCount; i++){
		tmpStr.Format(_T("%ld"), nSubtotal[i]);
		xls.SetCellText(nCol+5+i, nRow+6, tmpStr, FMT_INTEGER,TRUE);
	}
	
	tmpStr.Format(_T("Exports\\HMS_PHIEUPHATTHUOC%s.xls"), lpszOrderDate);
	xls.Save(tmpStr);
} 


void CHMSDailyDrugMaterialOrderBedDialog::OnExportDelivery_Portraid(long nOID, LPCTSTR lpszOrderDate){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	CExcel xls;	
	int nCol, nRow;
	nCol=nRow=0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 33);
	xls.SetColumnWidth(2, 24);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 25);
	xls.SetColumnWidth(5, 11);
	xls.SetColumnWidth(6, 7);
	xls.SetColumnWidth(7, 20);
	

	xls.SetCellMergedColumns(nCol, nRow, 2);
	xls.SetCellMergedColumns(nCol, nRow+1, 2);
	xls.SetCellMergedColumns(nCol, nRow+2, 2);
	xls.SetCellMergedColumns(nCol, nRow+3, 7);
	xls.SetCellMergedColumns(nCol, nRow+4, 7);
	xls.SetCellMergedColumns(nCol, nRow+5, 2);
	xls.SetCellMergedColumns(nCol, nRow+6, 2);
	//Page Header
	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol, nRow+1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol, nRow+2, _T("PHI\x1EBEU PH\xC1T THU\x1ED0\x43"), FMT_TEXT | FMT_CENTER, true, 12);
	tmpStr.Format(_T("Ng\xE0y %s"), CDate::Convert(lpszOrderDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow+4, tmpStr, FMT_TEXT | FMT_CENTER, true);
	
	//Heading
	xls.SetCellText(nCol, nRow+7, _T("STT"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+1, nRow+7, _T("T\xEAn thu\x1ED1\x63/ h\xE0m l\x1B0\x1A1ng/ ho\x1EA1t \x63h\x1EA5t"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+2, nRow+7, _T("\x110VT"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+3, nRow+7, _T("SL"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+4, nRow+7, _T("\x43\xE1\x63h \x64\xF9ng"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+5, nRow+7, _T("\x42N k\xFD nh\x1EADn"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+6, nRow+7, _T("ICD"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+7, nRow+7, _T("Disease"), FMT_TEXT | FMT_CENTER, true);
	
	
	szSQL.Format(_T(" SELECT 	 trunc_date(hpo_orderdate) as odate, ") \
						_T(" 	hpo_docno as docno, ") \
						_T(" 	hpo_orderid as orderid, ") \
						_T("	htr_mainicd, htr_maindisease, ") \
						_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
						_T(" 	(select hrl_name from hms_roomlist where hrl_deptid = hpo_deptid and hrl_id = hpo_roomid) as roomname,") \
						_T(" 	(select hbl_name from hms_bedlist where hbl_deptid = hpo_deptid and hbl_roomid = hpo_roomid and hbl_id = hpo_bedid) as bedname,") \
						_T(" 	hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
						_T(" 	product_name as drug,") \
						_T(" 	product_uomname as unit,") \
						_T(" 	sum(hpol_qtyorder) as qty") \
						_T(" FROM hms_ipharmaorder ") \
						_T(" LEFT JOIN hms_doc ON(hd_docno=hpo_docno) ") \
						_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ") \
						_T(" LEFT JOIN hms_ipharmaorderline ON (hpo_orderid = hpol_orderid) ") \
						_T(" LEFT JOIN hms_treatment_record on(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
						_T(" WHERE hpo_transaction_id=%ld AND trunc_date(hpo_orderdate)= trunc_date('%s')") \
						_T(" GROUP BY trunc_date(hpo_orderdate), hpo_docno,hpo_orderid,htr_mainicd, htr_maindisease, ") \
						_T(" trunc_date(hd_admitdate), hd_birthdate, product_name,product_uomname,hp_surname ,hp_midname,hp_firstname, ") \
						_T(" hpo_deptid,hpo_bedid,hpo_roomid ") \
						_T(" ORDER BY hpo_roomid, hpo_bedid, pname, docno, drug"), nOID, lpszOrderDate);
	int nCount;
	CString szNewOrder, szOldOrder;
	int index = 0;
	int idx = 0;// dem thuoc cua tung benh nhan
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	BeginWaitCursor();

	if (rs.IsEOF()){
		MessageBox(_T("No Data"), _T("Report Tester"), MB_ICONSTOP);
		return;
	}
		
	while(!rs.IsEOF()){
		szNewOrder = rs.GetValue(_T("orderid"));
		if (szNewOrder!=szOldOrder){
			tmpStr = CDate::Convert(rs.GetValue(_T("odate")), yyyymmdd, ddmmyyyy);
			xls.SetCellText(nCol, nRow+8, tmpStr, FMT_DATE, true);		
			
			tmpStr.Format(_T("[%s] %s - %s"), rs.GetValue(_T("docno")), rs.GetValue(_T("pname")), rs.GetValue(_T("age")));
			xls.SetCellText(nCol+1, nRow+8, tmpStr, FMT_TEXT, true);

			rs.GetValue(_T("roomname"), tmpStr);
			xls.SetCellText(nCol+2, nRow+8, tmpStr, FMT_TEXT, true);

			rs.GetValue(_T("bedname"), tmpStr);
			xls.SetCellText(nCol+3, nRow+8, tmpStr, FMT_TEXT, true);

			rs.GetValue(_T("htr_mainicd"), tmpStr);
			xls.SetCellText(nCol+6, nRow+8, tmpStr, FMT_TEXT, true);

			rs.GetValue(_T("htr_maindisease"), tmpStr);
			xls.SetCellText(nCol+7, nRow+8, tmpStr, FMT_TEXT, true);


			idx = 0;
			nRow++;
		}
		idx++;
		tmpStr.Format(_T("%d"), idx);
		xls.SetCellText(nCol, nRow+8, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("drug"), tmpStr);
		xls.SetCellText(nCol+1, nRow+8, tmpStr, FMT_TEXT);

		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol+2, nRow+8, tmpStr, FMT_TEXT | FMT_CENTER);

		rs.GetValue(_T("qty"), tmpStr);
		xls.SetCellText(nCol+3, nRow+8, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("usage"), tmpStr);
		xls.SetCellText(nCol+4, nRow+8, tmpStr, FMT_TEXT);

		rs.MoveNext();
		nRow++;
		szOldOrder = szNewOrder;
	}
	EndWaitCursor();
	tmpStr.Format(_T("Exports\\PHIEUPHATHUOCDOC_%s.xls"),lpszOrderDate);
	xls.Save(tmpStr);
}

int CHMSDailyDrugMaterialOrderBedDialog::OnExportOrderDeliveryDrug(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr,szDoctor,lpszSheetID;
	//CHMSExportOrderDeliveryDrug dlg(this);
	//
	//if(dlg.DoModal() == IDOK){
	//	szSQL.Format(_T(" SELECT distinct trunc_date(hpo_orderdate) as orderdate ") \
	//		_T(" FROM hms_ipharmaorder ") \
	//		_T(" WHERE 	hpo_transaction_id=%ld ") \
	//		_T(" ORDER BY trunc_date(hpo_orderdate) DESC "), m_nOID);
	//		rs.ExecSQL(szSQL);
	//		
	//		while(!rs.IsEOF()){
	//			rs.GetValue(_T("orderdate"), tmpStr);
	//			if(dlg.m_nPortraid)
	//				OnExportDelivery_Lanscape(m_nOID, tmpStr);
	//			else
	//				OnExportDelivery_Portraid(m_nOID, tmpStr);

	//			rs.MoveNext();
	//		}
	//}
	return 0;
}
int CHMSDailyDrugMaterialOrderBedDialog::OnOrderListPrintDeliveryDrug()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_szStatus == _T("O"))
		return -1;
	OnPrintDeliveryDrugsSelect();
	return 0;
}

void CHMSDailyDrugMaterialOrderBedDialog::OnAddDrugSelect(){
	OnDrugListAddEntry();
}

void CHMSDailyDrugMaterialOrderBedDialog::OnPrintDeliveryDrugsSelect(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderNo, szOrderDate, tmpStr;
	
	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		if(!szOrderNo.IsEmpty())
			tmpStr.Format(_T("%s"), _T(","));
		szOrderNo.AppendFormat(_T("%s%d"), tmpStr, m_transaction_orders[i]);		
	}

	szSQL.Format(_T(" SELECT distinct trunc_date(hpo_orderdate) as orderdate ") \
			_T(" FROM hms_ipharmaorder ") \
			_T(" WHERE 	hpo_transaction_id IN(%s) ") \
			_T(" ORDER BY trunc_date(hpo_orderdate) DESC "), szOrderNo);
			rs.ExecSQL(szSQL);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){		
		rs.GetValue(_T("OrderDate"), szOrderDate);			
		OnPrintDelivery(szOrderNo, szOrderDate);
		
		rs.MoveNext();
	}

	
	
	
	/*CPrintForms printer;
	printer.PM_PrintDrugDeliveryOrder(m_nOID);*/
}

void CHMSDailyDrugMaterialOrderBedDialog::Refresh(long nTransactionID, long nDocumentNo){
	m_nTransactionID = nTransactionID;
	m_nDocumentNo = nDocumentNo;
	OnPatientListLoadData();
	OnOrderListLoadData();
	OnDrugListLoadData();
	if(m_wndOrderList.GetItemCount() > 0 && m_szStatus == _T("O")){
		m_wndSend.EnableWindow(TRUE);
		m_wndPrint.EnableWindow(TRUE);
		m_wndPrintDeliveryDrugs.EnableWindow(TRUE);
	}	
}

long CHMSDailyDrugMaterialOrderBedDialog::GetTransactionID(int nStorageID)
{
	long nTransactionID = -1;
	for (int i =0; i < m_storages.GetCount(); i++){
		if(nStorageID == m_storages[i])
		{
			nTransactionID = m_transaction_orders[i];
			return nTransactionID;
		}
	}
	return -1;
}


void CHMSDailyDrugMaterialOrderBedDialog::OnPrintPatientSummeryDrug(int nDocumentNo, CString nRefeorder_ID)
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CRecord rsl(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rsd(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, szSysDate, szReportTitle;
	UpdateData(true);

	if(!rpt.Init(_T("Reports/HMS/TM_NHATTRINHVACONGKHAITHUOC.RPT"),true) )
	{
		return;
	}
	
	//if (nType==0)
	//{
	//	szReportTitle.Format(_T(" PHI\x1EBEU \x43\xD4NG KH\x41I THU\x1ED0\x43 BHYT TR\x1EA2"));
	//	szWhere.Format(_T(" and pmi_typeid not in('A9000') and hfe_discount>0 "));
	//}

	//if (nType==1)
	//{
	//	szReportTitle.Format(_T(" PHI\x1EBEU \x43\xD4NG KH\x41I THU\x1ED0\x43 BHYT KH\xD4NG TR\x1EA2"));
	//	szWhere.Format(_T(" and pmi_typeid not in('A9000') and hfe_discount=0 and hfe_patdebt>0 "));
	//}

	//if (nType==2)
	//{
	//	szReportTitle.Format(_T(" PHI\x1EBEU \x43\xD4NG KH\x41I VTYT \x42\x1EA2O HI\x1EC2M TR\x1EA2"));
	//	szWhere.Format(_T(" and pmi_typeid in('A9000') and hfe_discount>0 "));		
	//}

	//if (nType==3)
	//{
	//	szReportTitle.Format(_T(" PHI\x1EBEU \x43\xD4NG KH\x41I VTYT \x42\x1EC6NH NH\xC2N TR\x1EA2"));
	//	szWhere.Format(_T(" and pmi_typeid in('A9000') and hfe_discount=0 and hfe_patdebt>0 "));
	//}

	//if(!m_bDepartmentDetail)
	//	szWhere.AppendFormat(_T(" and hpo_deptid ='%s' "), pMF->m_szDept);	

	szWhere.AppendFormat(_T(" and hpo_transaction_id IN(%s) "), nRefeorder_ID);	

	szSQL.Format(_T(" SELECT hcr_docno as docno,") \
				_T("    trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("    hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
				_T("    sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hms_getobjectname(hd_object)                       AS object, ") \
				_T("    hcr_maindisease as diagnostic,") \
				_T("    trunc_date(hcr_admitdate) as admitdate,") \
				_T("    trunc_date(hcr_dischargedate) as dischargedate,") \
				_T("    htr_deptid,") \
				_T("    hb_roomid,") \
				_T("    hb_bedid,") \
				_T("    (SELECT sd_name FROM sys_dept WHERE htr_deptid=sd_id AND ROWNUM < 2) as deptname,") \
				_T("    hrl_name as roomname,") \
				_T("    hbl_name as bedname") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno)") \
				_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno AND htr_idx=hcr_refidx)") \
				_T(" LEFT JOIN hms_bed ON(hb_docno=hcr_docno AND hb_deptid=htr_deptid AND hb_refidx=hcr_refidx)") \
				_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=htr_deptid and hrl_id=hb_roomid)") \
				_T(" LEFT JOIN hms_bedlist ON(hbl_deptid=htr_deptid and hbl_roomid=hb_roomid and hbl_id=hb_bedid)") \
				_T(" WHERE hd_docno=%ld"), nDocumentNo);

	rs1.ExecSQL(szSQL);

//_fmsg(_T("%s"), szSQL);		
		
	szSQL.Format(_T(" SELECT trunc_date(hpo_orderdate) as orderdate,") \
				_T("        hpol_product_id as itemid") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
				_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx)") \
				_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
				_T(" WHERE hpo_docno=%ld AND hpol_qtyissue > 0") \
				_T(" and hpo_ordertype<>'M' %s") \
				_T(" GROUP BY trunc_date(hpo_orderdate), hpol_product_id") \
				_T(" ORDER BY orderdate, itemid"), nDocumentNo, szWhere);
	rsl.ExecSQL(szSQL);

//_fmsg(_T("%s"), szSQL);
	if(rsl.IsEOF())
	{			
		return;
	}
		
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("ReportTitle"), szReportTitle);

	rs1.GetValue(_T("deptname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DEPARTMENT"), tmpStr);

	rs1.GetValue(_T("pname"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("PatientName"), tmpStr);

	rs1.GetValue(_T("age"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Age"), tmpStr);

	rs1.GetValue(_T("sex"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Sex"), tmpStr);

	rs1.GetValue(_T("bedname"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Bednumber"), tmpStr);

	rs1.GetValue(_T("roomname"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Room"), tmpStr);

	rpt.GetPageHeader()->SetValue(_T("object"), rs1.GetValue(_T("object")));
	rpt.GetPageHeader()->SetValue(_T("yearofbirth"), rs1.GetValue(_T("yearofbirth")));

	tmpStr = CDate::Convert(rs1.GetValue(_T("Admitdate")), yyyymmdd, ddmmyyyy);
	rpt.GetPageHeader()->SetValue(_T("AdmitDate"), tmpStr);

	rs1.GetValue(_T("diagnostic"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Diagnostic"), tmpStr);

	tmpStr = CDate::Convert(rs1.GetValue(_T("Dischargedate")), yyyymmdd, ddmmyyyy);
	rpt.GetPageHeader()->SetValue(_T("DischargeDate"), tmpStr);

	CReportSection* rptDetail;

	double grpCost=0;
	//long cost = 0;
	int nItem;
	
	
	int nIndex=0;
	CString szTemp, szString, szConvert, szDate;
	int nCount = 0, i = 0;
	DAYCOLUMN dc_cotngay;
	DRUGITEM drugItem;
	int y = 1;
	CString szOld;
	CArray<DAYCOLUMN,DAYCOLUMN&> m_array;
	CArray<DRUGITEM, DRUGITEM&> arrDrug;
	CString szStartDay, szEndDay, szItemID;
	bool bCheck = false;

	m_array.RemoveAll();
	arrDrug.RemoveAll();

	while(!rsl.IsEOF())
	{
		if (szDate.IsEmpty() || CompareDate(szDate, rsl.GetValue(_T("orderdate"))) != 0)
		{
			rsl.GetValue(_T("orderdate"), szDate);
			dc_cotngay.szDate = szDate;
			dc_cotngay.nIndex = y;
			m_array.Add(dc_cotngay);
			y++;
		}

		rsl.GetValue(_T("itemid"), szItemID);

		for (int j = 0; j < arrDrug.GetSize(); j++)
		{
			drugItem = arrDrug[j];
			if (drugItem.szItemID == szItemID)
			{
				if (drugItem.nMaxIdx < (y - 1))
				{
					drugItem.nMaxIdx = y - 1;
					arrDrug.SetAt(j, drugItem);
				}
				bCheck = true;
				break;
			}
		}

		if (!bCheck)
		{
			drugItem.szItemID = szItemID;
			drugItem.nMaxIdx = y - 1;
			drugItem.nTotal = 0;
			arrDrug.Add(drugItem);
		}
		else
			bCheck = false;

		rsl.MoveNext();
	}

	szDate.Empty();
	szItemID.Empty();

	int nColIdx = 1;
	int nPage = 0;
	int ktra;

	for(int x = 1; x <= (m_array.GetSize()/31)+1; x++)
	{

		if(nPage > 0)
		{
			if (rptDetail)
			{
				//MessageBox(_T("OK"));
				rptDetail->SetPageBreak(true);
			}
			//rs.MoveFirst();
		}

		if(m_array.GetSize() < (nPage+1)*31)
		{
			ktra = (int)m_array.GetSize();
		}
		else 
		{
			ktra = (nPage + 1)*31;
		}

		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
		CString szDay;
		for (int i = nPage*31; i < ktra; i++)
		{
			dc_cotngay = m_array[i];
			szTemp.Format(_T("l%d"), nColIdx);
			szDay.Format(_T("%s"), CDate::Convert(dc_cotngay.szDate,yyyymmdd,ddmmyyyy));
			rptDetail->SetValue(szTemp, szDay.Left(5));
			if (i == nPage * 31)
				szStartDay = dc_cotngay.szDate;
			if (i == ktra - 1)
				szEndDay = dc_cotngay.szDate;
			nColIdx++;
		}

		nColIdx = 1;
		nItem = 1;
		szOld.Empty();

		szSQL.Format(_T(" SELECT distinct product_name as drugname,") \
			        _T("    product_uomname as unit,") \
					_T(" 	hpol_product_id as itemid ") \
					_T(" FROM hms_doc  ") \
					_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
					_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
					_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
					_T(" WHERE hpo_docno=%ld AND hpol_qtyissue > 0 ") \
					_T(" 	and hpo_ordertype<>'M'") \
					_T(" 	%s ") \
					_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T(" ORDER BY drugname"),
					nDocumentNo, szWhere, szStartDay, szEndDay);
_fmsg(_T("%s"), szSQL);
		rsd.ExecSQL(szSQL);

		while (!rsd.IsEOF())
		{
			rsd.GetValue(_T("itemid"), szItemID);

			szSQL.Format(_T(" SELECT sum(hpol_qtyissue) as issueqty, ") \
						_T(" 	 trunc_date(hpo_orderdate) as orderdate ") \
						_T(" FROM hms_doc  ") \
						_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
						_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
						_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
						_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
						_T(" WHERE hpo_docno=%ld AND hpol_qtyissue > 0") \
						_T(" 	and hpo_ordertype<>'M'") \
						_T(" 	%s ") \
						_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T("    and hpol_product_id='%s'") \
						_T(" GROUP BY trunc_date(hpo_orderdate)") \
						_T(" ORDER BY trunc_date(hpo_orderdate)"),
						nDocumentNo, szWhere, szStartDay, szEndDay, szItemID);

			/*if (x == 1 && nItem == 1)
				_fmsg(_T("%s"), szSQL);*/

			//_msg(_T("%s"), szSQL);

			rs.ExecSQL(szSQL);

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nItem++);
			rptDetail->SetValue(_T("Index"), tmpStr);	

			rsd.GetValue(_T("drugname"), tmpStr);
			rptDetail->SetValue(_T("DrugName"), tmpStr);

			rsd.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("Unit"), tmpStr);

			while(!rs.IsEOF())
			{
				rs.GetValue(_T("orderdate"), tmpStr);

				for (int z = 0; z < m_array.GetSize(); z++)
				{
					dc_cotngay = m_array[z];					
					if(tmpStr == dc_cotngay.szDate)
					{
						nIndex = dc_cotngay.nIndex;
						break;
					}

				}

				if(nIndex > (nPage+1) * 31)
				{
					rs.MoveNext();
					continue;
				}

				//Neu bn qua 31 ngay thi tinh lai chi so cot
				if (nPage > 0)
				{
					nIndex = nIndex - (nPage * 31);
				}

				rs.GetValue(_T("issueqty"), tmpStr);
				grpCost += ToDouble(tmpStr);
				szTemp.Format(_T("%d"), nIndex);
				rptDetail->SetValue(szTemp, tmpStr);
			
				rs.MoveNext();
			}

			if(grpCost > 0)
			{
				for (int j = 0; j < arrDrug.GetSize(); j++)
				{
					drugItem = arrDrug[j];
					if (drugItem.szItemID == szItemID)
					{
						drugItem.nTotal += grpCost;

						if ((drugItem.nMaxIdx <= (nPage + 1) * 31) &&
							(drugItem.nMaxIdx > nPage * 31))
						{
							/*if ((drugItem.nTotal - (drugItem.nTotal)) > 0)
							{
								tmpStr.Format(_T("%.3f"), drugItem.nTotal);
							}
							else
								tmpStr.Format(_T("%.0f"), drugItem.nTotal);*/
							tmpStr.Format(_T("%.3f"), drugItem.nTotal);
							rptDetail->SetValue(_T("32"), tmpStr);
						}

						arrDrug.SetAt(j, drugItem);
						break;
					}
				}
				grpCost = 0;
			}

			rsd.MoveNext();
		}
		nPage++;
	}

	/*if(grpCost>0)
	{
		tmpStr.Format(_T("%d"),grpCost);
		rptDetail->SetValue(_T("32"), tmpStr);
		grpCost =0;
	}*/

	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	rpt.PrintPreview();
}