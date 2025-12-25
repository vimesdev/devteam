#include "HMSDailyOrderView.h"
#include "MainFrm.h"
#include "HMSDailyDrugOrderListDialog.h"
#include "HMSConfirmDialog.h"
#include "ReportDocument.h"
#include "HMSReturnDrugDialog.h"
#include "HMSDailyOrderDate.h"
#include "Excel.h"
#include "HMSExportOrderDeliveryDrug.h"
#include "HMSDailyOrderAddEntry.h"
#include "HMSReportForms/PrintForms.h"
#include "HMSDailyOrderAddEntryDialog.h"
#include "HMSDailyOrderAddEntryDialog_V2.h"
#include "HMSConfirmAllUserDialog.h"

static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderView*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderView*)pWnd->GetParent())->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderView*)pWnd->GetParent())->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnPreviewOrderDeviveryDetailFnc(CWnd *pWnd){
	return ((CHMSDailyOrderView*)pWnd->GetParent())->OnPreviewDeliveryDetail();
}
static int _OnExportOrderDeviveryDetailFnc(CWnd *pWnd){
	((CHMSDailyOrderView*)pWnd->GetParent())->OnExportDeliveryDetail();
	return 0;
}
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd->GetParent())->OnOrderListDeleteItem();
} 

static int _OnOrderListPrintDeliveryDrugFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd->GetParent())->OnOrderListPrintDeliveryDrug();
}
static int	_OnExportOrderDeliveryDrugFnc(CWnd *pWnd){
	return	((CHMSDailyOrderView*)pWnd->GetParent())->OnExportOrderDeliveryDrug();
}
static int _OnOrderListPrintSheetDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd->GetParent())->OnOrderListPrintSheetDate();
}
static int _OnOrderListPrintSheetpublicityFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd->GetParent())->OnOrderListPrintSheetPublicity();
}

 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderView*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderView*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderView*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListAddEntryFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd)->OnDrugListAddEntry();
} 

static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnDrugListReturnFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd)->OnDrugListReturnDrug();
}


static int _OnAddFromLogsFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd)->OnAddFromLogs();
}

/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnOrderNoKillfocus();
} */

static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderView *)pWnd)->OnOrderNoCheckValue();
} 


static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSDailyOrderView *pVw = (CHMSDailyOrderView *)pWnd;
	pVw->OnFindSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderView *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnIssueDateChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnIssueDateChange();
} */
/*static void _OnIssueDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnIssueDateSetfocus();} */ 
/*static void _OnIssueDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnIssueDateKillfocus();
} */
static int _OnIssueDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderView *)pWnd)->OnIssueDateCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderView *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnPrintedChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnPrintedChange();
} */
/*static void _OnPrintedSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnPrintedSetfocus();} */ 
/*static void _OnPrintedKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnPrintedKillfocus();
} */
static int _OnPrintedCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderView *)pWnd)->OnPrintedCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderView *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderView *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyOrderView *pVw = (CHMSDailyOrderView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDailyOrderView *pVw = (CHMSDailyOrderView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDailyOrderView *pVw = (CHMSDailyOrderView *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDailyOrderView *pVw = (CHMSDailyOrderView *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyOrderView *pVw = (CHMSDailyOrderView *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSDailyOrderView *pVw = (CHMSDailyOrderView *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDailyOrderView *pVw = (CHMSDailyOrderView *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintDeliveryDrugsSelectFnc(CWnd *pWnd){
	CHMSDailyOrderView *pVw = (CHMSDailyOrderView *)pWnd;
	pVw->OnPrintDeliveryDrugsSelect();
} 
static void _OnAddDrugSelectFnc(CWnd *pWnd){
	CHMSDailyOrderView *pVw = (CHMSDailyOrderView *)pWnd;
	pVw->OnAddDrugSelect();
} 
static int _OnAddHMSDailyOrderViewFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd)->OnAddHMSDailyOrderView();
} 
static int _OnEditHMSDailyOrderViewFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd)->OnEditHMSDailyOrderView();
} 
static int _OnDeleteHMSDailyOrderViewFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd)->OnDeleteHMSDailyOrderView();
} 
static int _OnSaveHMSDailyOrderViewFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd)->OnSaveHMSDailyOrderView();
} 
static int _OnCancelHMSDailyOrderViewFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderView*)pWnd)->OnCancelHMSDailyOrderView();
} 
//CHMSDailyOrderView::CHMSDailyOrderView(CWnd *pParent)
CHMSDailyOrderView::CHMSDailyOrderView()
{
//	CGuiDiazlog(pParent){

	m_nDlgWidth = 985;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szOrderNo.Empty();
	m_szOrderDateEntry.Empty();
	m_nDays = 1;
	
}
CHMSDailyOrderView::~CHMSDailyOrderView(){
}
void CHMSDailyOrderView::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 410, 585);
	m_wndDrugInformation.Create(this, _T("Drug Informations"), 415, 5, 1005, 585);
	m_wndTab.Create(this, 10, 150, 405, 580);
	m_wndOrderList.Create(&m_wndTab,10, 150, 405, 580); 	
	m_wndPatientList2.Create(&m_wndTab, CRect(420, 30, 1000, 160)); 
	m_wndNotifications.Create(&m_wndTab, 10, 150, 405, 580);

	m_wndDrugList.Create(this,420, 35, 1000, 580); 
	m_wndOrderNoLabel.Create(this, _T("Order ID"), 10, 30, 110, 55);
	m_wndOrderNo.Create(this,115, 30, 215, 55); 
	m_wndFind.Create(this, _T("&Find"), 220, 30, 295, 55);
	m_wndCancerOpt.Create(this, _T("Phiếu pha chế"), 300, 30, 495, 55);
	m_wndCancerOpt.ModifyStyle(WS_TABSTOP, 0);

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
	m_wndAdd.Create(this, _T("&Add Sheet"), 5, 590, 90, 615);
	m_wndEdit.Create(this, _T("&Edit"), 95, 590, 180, 615);
	m_wndDelete.Create(this, _T("&Delete"), 185, 590, 270, 615);
	m_wndSave.Create(this, _T("&Save"), 275, 590, 360, 615);
	m_wndCancel.Create(this, _T("&Cancel"), 365, 590, 450, 615);
	m_wndSend.Create(this, _T("&Send"), 455, 590, 540, 615);
	m_wndPrint.Create(this, _T("&Print Daily Drug"), 575, 590, 705, 615);
	m_wndPrintDeliveryDrugs.Create(this, _T("Print Delivery Drugs"), 710, 590, 860, 615);
	m_wndAddDrug.Create(this, _T("Add Drug"), 880, 590, 1000, 615);	

	m_wndTab.Add(_T("Drug List"), &m_wndOrderList);
	m_wndTab.Add(_T("Patient List"), &m_wndPatientList2);
	m_wndTab.Add(_T("Notes"), &m_wndNotifications);

	m_wndPatientList2.m_wndDailyOrderBatch = this;

	m_wndTab.SetCurSel(1);

}
void CHMSDailyOrderView::OnInitializeComponents(){
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

	CString tmpStr;
	m_wndOrderList.GetHeaderControl()->SetItemHeight(2);
	m_wndOrderList.InsertColumn(0, _T(""), CFMT_TEXT, 0);	//identify
	TranslateString(_T("Drug Name/ Cnt"), tmpStr);
	m_wndOrderList.InsertColumn(1, tmpStr, CFMT_TEXT, 150);
	TranslateString(_T("Unit"), tmpStr);
	m_wndOrderList.InsertColumn(2, tmpStr, CFMT_TEXT|CFMT_CENTER, 50);
	TranslateString(_T("Quantity"), tmpStr);
	m_wndOrderList.InsertColumn(3, tmpStr, CFMT_MONEY, 60);
	TranslateString(_T("Issue Qty"), tmpStr);
	m_wndOrderList.InsertColumn(4, tmpStr, CFMT_MONEY, 60);
	TranslateString(_T("Price"), tmpStr);
	m_wndOrderList.InsertColumn(5, tmpStr, CFMT_MONEY, 70);
	TranslateString(_T("Amount"), tmpStr);
	m_wndOrderList.InsertColumn(6, tmpStr, CFMT_MONEY, 80);
	TranslateString(_T("StorageID"), tmpStr);
	m_wndOrderList.InsertColumn(7, tmpStr, CFMT_MONEY, 0);
	m_wndOrderList.InsertColumn(8, _T("Transaction ID"), CFMT_TEXT, 0);
	m_wndOrderList.SetSortHeader(false);
/*
	m_wndPatientList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);	//orderid
	TranslateString(_T("Document No"), tmpStr);
	m_wndPatientList.InsertColumn(1, tmpStr, CFMT_NUMBER, 80);
	TranslateString(_T("Patient Name"), tmpStr);
	m_wndPatientList.InsertColumn(2, tmpStr, CFMT_TEXT, 140);
	TranslateString(_T("Bed"), tmpStr);
	m_wndPatientList.InsertColumn(3, tmpStr, CFMT_TEXT, 60);
	TranslateString(_T("Date"), tmpStr);
	m_wndPatientList.InsertColumn(4, tmpStr, CFMT_DATE, 90);
	TranslateString(_T("Status"), tmpStr);
	m_wndPatientList.InsertColumn(5, tmpStr, CFMT_TEXT|CFMT_CENTER, 0);
	m_wndPatientList.InsertColumn(6, _T("OrderNo"), CFMT_NUMBER, 0);
	m_wndPatientList.InsertColumn(7, _T("Doctor"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(8, _T("Created By"), CFMT_TEXT, 0);
*/
	m_wndDrugList.SetSortHeader(false);
	m_wndDrugList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);	//order_id
	m_wndDrugList.InsertColumn(1, _T(""), CFMT_NUMBER, 0);	//product_id
	m_wndDrugList.InsertColumn(2, _T("Name /Cnt"), CFMT_TEXT, 160);
	m_wndDrugList.InsertColumn(3, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndDrugList.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndDrugList.InsertColumn(5, _T("Quantity"), CFMT_MONEY, 60);
	m_wndDrugList.InsertColumn(6, _T("Issue Qty"), CFMT_MONEY, 60);
	m_wndDrugList.InsertColumn(7, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndDrugList.InsertColumn(8, _T("Amount"), CFMT_MONEY, 80);
	m_wndDrugList.InsertColumn(9, _T("Status"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndDrugList.InsertColumn(10, _T("Storage"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndDrugList.InsertColumn(11, _T("Created By"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndDrugList.InsertColumn(12, _T("Usage"), CFMT_TEXT, 100);
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
void CHMSDailyOrderView::OnSetWindowEvents(){
	
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.SetWindowText(_T("Order Information"));
	m_wndOrderList.AddEvent(1, _T("Print Delivery Drugs"), _OnOrderListPrintDeliveryDrugFnc);
	//m_wndOrderList.AddEvent(2, _T("Export Delivery Drugs"), _OnExportOrderDeliveryDrugFnc);
	//m_wndOrderList.AddEvent(3, _T("Print Sheet By Date"), _OnOrderListPrintSheetDateFnc);
	//m_wndOrderList.AddEvent(4, _T("Print shelt publicity drugs"), _OnOrderListPrintSheetpublicityFnc);
	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(5, _T("View Detail"), _OnPreviewOrderDeviveryDetailFnc);
	m_wndOrderList.AddEvent(6, _T("Export Detail"), _OnExportOrderDeviveryDetailFnc);


	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.SetWindowText(_T("Drug List"));
	m_wndDrugList.AddEvent(1, _T("Add Drug"), _OnDrugListAddEntryFnc, 0, VK_F2);
	m_wndDrugList.AddEvent(0, _T("-"), NULL);
//	m_wndDrugList.AddEvent(2, _T("Add Drug From Logs"), _OnAddFromLogsFnc);
//	m_wndDrugList.AddEvent(0, _T("-"), NULL);
	m_wndDrugList.AddEvent(3, _T("Delete Drug"), _OnDrugListDeleteItemFnc, 0, VK_DELETE);
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
void CHMSDailyOrderView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusDesc);
	DDX_Text(pDX, m_wndPrinted.GetDlgCtrlID(), m_nPrinted);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Check(pDX, m_wndCancerOpt.GetDlgCtrlID(), m_bCancerOpt);
}
void CHMSDailyOrderView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT  ") \
		_T("mtb_orderno as orderno, ") \
		_T("mtb_orderdate as orderdate, ") \
		_T("mtb_updateddate as issuedate, ") \
		_T("mtb_description as description, ") \
		_T("mtb_status as status, ") \
		_T("mtb_createdby as createdby, mtb_ordertype as ordertype ") \
		_T("FROM m_transaction_batch ") \
		_T("WHERE mtb_ordertype in('T','C') and mtb_transaction_batch_id=%ld and mtb_department_to_id='%s' "), 
		m_nBatchID, pMF->GetDepartmentID());
	rs.ExecSQL(szSQL);
	
	m_transaction_orders.RemoveAll();
	m_storages.RemoveAll();
	
	m_szPaitentNameSearch.Empty();

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

		CString tmpStr;
		rs.GetValue(_T("ordertype"), tmpStr);
		m_bCancerOpt = FALSE;
		if(tmpStr == _T("C"))
			m_bCancerOpt = TRUE;

		m_szTransactionString  = _T("-100");
		m_szStorageString = _T("-100");
		CRecord rsx(&pMF->m_db);
		szSQL.Format(_T("SELECT mt_transaction_id, mt_storage_id ") \
			_T("FROM m_transaction WHERE mt_orderno='%s' and mt_transaction_id > %ld "),
			m_szBatchNo, m_nBatchID);
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
		//OnPatientListLoadData();

		m_wndPatientList2.m_szTransactionString = m_szTransactionString;
		m_wndPatientList2.m_transaction_orders.Copy(m_transaction_orders);
		m_wndPatientList2.m_storages.Copy(m_storages);
		m_wndPatientList2.m_szSearch.Empty();
		m_wndPatientList2.m_nDocumentNo = 0;
		m_wndPatientList2.m_nBatchID = m_nBatchID;
		m_wndPatientList2.m_szBatchNo = m_szOrderNo;
		m_wndPatientList2.m_szOrderDate = m_szOrderDate;

		if(m_bCancerOpt)
			m_wndPatientList2.m_szOrderType = _T("C");
		else
			m_wndPatientList2.m_szOrderType = _T("T");		

		m_wndPatientList2.UpdateData(FALSE);
		m_wndPatientList2.OnListLoadData();

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

		CString szNotice;
		szSQL.Format(_T("SELECT mtn_createdby, mtn_createddate, mtn_notice ") \
			_T(" FROM m_transaction_notice ") \
			_T(" WHERE mtn_orderno='%s' ") \
			_T(" ORDER BY mtn_createddate "), m_szBatchNo);
		rs.ExecSQL(szSQL);
		m_wndNotifications.ResetContent();
		while(!rs.IsEOF())
		{
			szNotice.Format(_T("<b>[%s]- <i>%s</i></b><p><i>%s</i></p>"),
				rs.GetValue(_T("mtn_createdby")),
				rs.GetValue(_T("mtn_createddate")),
				rs.GetValue(_T("mtn_notice")));
			m_wndNotifications.AddString(szNotice);
			rs.MoveNext();
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
	m_wndTab.SetCurSel(1);

}
void CHMSDailyOrderView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	m_transactionTbl.SetValue(_T("mt_user_id"), pMF->GetCurrentUser());
	m_transactionTbl.SetValue(_T("mt_department_id"), pMF->m_szDept);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_description"), m_szNote);	
	m_transactionTbl.SetValue(_T("mt_org_id"), _T("GL"));	
	if(m_bCancerOpt)
	{
		m_transactionTbl.SetValue(_T("mt_ordertype"), _T("C"));
	}
	else
		m_transactionTbl.SetValue(_T("mt_ordertype"), _T("T"));
	
	


	//CRecord rs(&pMF->m_db);
	//CString szSQL, szIssueDeptID;
	//szSQL.Format(_T("select msl_dept_id from m_storagelist where msl_storage_id=%ld"), str2int(m_szStockKey));
	//rs.ExecSQL(szSQL);
	//rs.GetValue(_T("msl_dept_id"), szIssueDeptID);
	//m_transactionTbl.SetValue(_T("mt_department_id"), szIssueDeptID);	
	
}
void CHMSDailyOrderView::SetDefaultValues(){
	
	m_szOrderDate.Empty();
	m_szIssueDate.Empty();
	m_szStatus.Empty();
	m_nPrinted=0;
	m_szNote.Empty();
	m_szPaitentNameSearch.Empty();
	m_nDays = 1;
	m_bCancerOpt = FALSE;
}
int CHMSDailyOrderView::SetMode(int nMode){
	
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
			m_wndOrderNo.EnableWindow(false);
			m_szOrderDate = pMF->GetSysDate();
			m_wndOrderDate.SetFocus();
			m_wndOrderList.DeleteAllItems();
//			m_wndPatientList.DeleteAllItems();
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
//			m_wndPatientList.DeleteAllItems();
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
void CHMSDailyOrderView::OnOrderListDblClick(){
	OnPreviewDeliveryDetail();
} 
void CHMSDailyOrderView::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nTransactionID = str2long(m_wndOrderList.GetItemText(nNewItem, 8));
} 
int CHMSDailyOrderView::OnOrderListDeleteItem(){
	return 0;
}
int CHMSDailyOrderView::OnPreviewDeliveryDetail(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CString szSQL, szOrderNo, szOrderDate, tmpStr;
	CPrintForms printer;		
	int nStorage_ID;
	int nSel = m_wndOrderList.GetCurSel();
	if (nSel < 0)
		return -1;
	nStorage_ID = str2int(m_wndOrderList.GetItemText(nSel, 7));
	long nProduct_id = str2long(m_wndOrderList.GetItemText(nSel, 0));
	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		if(!szOrderNo.IsEmpty())
			tmpStr.Format(_T("%s"), _T(","));
		szOrderNo.AppendFormat(_T("%s%d"), tmpStr, m_transaction_orders[i]);		
	}
	
	printer.OnPrintDailyViewDetail(m_szOrderNo, szOrderDate, szOrderNo, nProduct_id, 0,  _T("'D'"), nStorage_ID);
	return 0;
} 
long CHMSDailyOrderView::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderBy, szWhere;
	int nOldStorageID=-1, nStorageID;
	
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	/*
	szSQL.Format(_T(" SELECT hpo_storage_id as storage_id, product_id, product_name as product_name, ") \
				_T(" product_uomindex, ") \
				_T(" 	product_uomname as product_unit,") \
				_T(" 	hpol_unitprice as  product_unitprice,") \
				_T(" 	Round(sum(hpol_qtyorder)) as product_qtyorder,") \
				_T(" 	sum(hpol_qtyissue) as product_qtyissue,") \
				_T(" 	sum(hpol_qtyissue*hpol_unitprice) as product_amount ") \
				_T(" FROM hms_ipharmaorder") \
				_T(" LEFT JOIN hms_ipharmaorderline ON(hpo_orderid=hpol_orderid)") \
				_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
				_T(" WHERE hpo_ordertype ='D' and hpo_transaction_id in(%s)  %s ") \
				_T(" GROUP BY hpo_storage_id, product_id, product_uomindex, product_name, product_uomname, hpol_unitprice ") \
				_T(" ORDER BY hpo_storage_id, product_uomindex, product_name, product_unit, product_unitprice  ") , m_szTransactionString, szWhere);

_msg(_T("%s"), szSQL);
*/
	szSQL.Format(
		_T(" SELECT mt_storage_id AS storage_id,mt_createdby as createdby, mt_postedby as postedby, ") \
		_T("   mt_transaction_id as transaction_id,") \
		_T("   product_id,") \
		_T("   product_name AS product_name,") \
		_T("   product_uomindex,") \
		_T("   product_uomname                    AS product_unit,") \
		_T("   mtl_saleprice                      AS product_unitprice,") \
		_T("   SUM(mtl_qtyorder)                  AS product_qtyorder,") \
		_T("   SUM(mtl_qtydelivery)               AS product_qtyissue,") \
		_T("   SUM(mtl_qtydelivery*mtl_saleprice) AS product_amount") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON(mt_transaction_id=mtl_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view ") \
		_T(" ON(product_item_id      =mtl_product_item_id)") \
		_T(" WHERE mt_doctype        ='DMO'") \
		_T(" AND mt_orderno          ='%s'") \
		_T(" AND mtl_product_item_id > 0") \
		_T(" GROUP BY mt_transaction_id,mt_storage_id,") \
		_T("   product_id,") \
		_T("   product_uomindex,") \
		_T("   product_name,") \
		_T("   product_uomname,") \
		_T("   mtl_saleprice, ") \
		_T("	  mt_createdby, ") \
		_T("  mt_postedby ") \
		_T(" ORDER BY mt_transaction_id, mt_storage_id,") \
		_T("   product_uomindex,") \
		_T("   product_name,") \
		_T("   product_unit,") \
		_T("   product_unitprice"), m_szOrderNo);

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
			szStorageName.Format(_T("%s [%d] Người tạo: %s, Người gửi: %s"), pMF->GetStorageName(nStorageID),nStorageID,rs.GetValue(_T("createdby")),rs.GetValue(_T("postedby"))  );
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
			int2str(nStorageID), 
			rs.GetValue(_T("transaction_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;

}
void CHMSDailyOrderView::OnDrugListDblClick(){
	
} 
void CHMSDailyOrderView::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 

int CHMSDailyOrderView::OnDrugListAddEntry(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
		return 0;
	m_szPaitentNameSearch.Empty();
	UpdateData(false);
	//CHMSDailyOrderAddEntry* newPopup = new CHMSDailyOrderAddEntry(this, VM_ADD);
	CHMSDailyOrderAddEntryDialog_V2* newPopup = new CHMSDailyOrderAddEntryDialog_V2(this, VM_ADD);
	newPopup->m_szCurrentOrderDate = m_szOrderTime;
	newPopup->m_nBatchID = m_nBatchID;
	newPopup->m_szDoctor = pMF->m_szDoctor;
	newPopup->m_szBatchNo = m_szBatchNo;
	newPopup->m_szStorageString = m_szStorageString;
	
	if(m_szOrderDateEntry.IsEmpty())
		m_szOrderDateEntry = m_szOrderTime;
	newPopup->m_szOrderDate = m_szOrderDateEntry;

	newPopup->m_szPatientNameKey = m_szPatientNameKey;
	newPopup->m_nDays = m_nDays;
	newPopup->m_bMultipleDay = m_bMultipleDay;	
	newPopup->SetMode(VM_ADD);
	newPopup->DoModal();	
	//newPopup->ShowPopup(&m_wndDrugList);
	return 0;
} 

int CHMSDailyOrderView::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	long nProductID;
	long nOrderID;
	if(m_szStatus != _T("O"))
		return -1;
	int nSel = m_wndDrugList.GetCurSel();
	if(nSel < 0) return -1;
	
	
	m_szCreatedBy = m_wndDrugList.GetItemText(nSel, 11);
	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString szMsg;
		szMsg.Format(_T("This order created by other user[%s]. Can not delete it"), m_szCreatedBy);
		ShowMessageBox(szMsg);
		return -1;
	}



 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 



	int ret = 0;
	for (int i = m_wndDrugList.GetItemCount()-1; i >=0; i--)
	{
		if(m_wndDrugList.GetItemState(i,LVIS_SELECTED)&LVIS_SELECTED)
		{
			nOrderID = str2long(m_wndDrugList.GetItemText(i, 0));
			nProductID = str2long(m_wndDrugList.GetItemText(i, 1));
			szSQL.Format(_T("HMS_IPHARMAORDER_DELLINE(%ld, %ld, '%s', 1, 1) "), nOrderID, nProductID, pMF->GetCurrentUser()); 
		//_fmsg(_T("%s"), szSQL);
 			int res =  str2int(pMF->ExecDML(szSQL)); 
			if(res > 0){
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
		OnDrugListLoadData();
		m_wndDrugList.SetCurSel(nSel);
		OnOrderListLoadData();
		if(m_wndDrugList.GetItemCount() <=0){
//			OnPatientListLoadData();
			m_wndPatientList2.OnListLoadData();
			OnOrderListLoadData();
		}
 	}
	return 0;
} 
int CHMSDailyOrderView::OnDrugListReturnDrug(){
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
long CHMSDailyOrderView::OnDrugListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0, nIndex=1;
	szSQL.Format(_T(" SELECT hpol_orderid, ") \
				_T(" hpo_orderstatus, ") \
				_T(" hpo_transaction_id, ") \
				_T(" hpo_storage_id, ") \
				_T(" hpo_createdby,hpo_updatedby, ") \
				_T(" product_id, product_name as drugname, ") \
				_T(" 	product_uomname as unit,") \
				_T(" 	product_countryname as countryname,") \
				_T(" 	hpol_unitprice as unitprice,") \
				_T(" 	sum(hpol_qtyorder) as qtyorder,") \
				_T(" 	sum(hpol_qtyissue) as qtyissue, ") \
				_T(" 	sum((hpol_qtyissue)*hpol_unitprice) as amount, hpou_dousage as usage ") \
				_T(" FROM hms_ipharmaorder  ") \
				_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid) ") \
				_T(" LEFT JOIN hms_ipharmaorder_usage") \
				_T(" ON(hpou_orderid     = hpol_orderid") \
				_T(" AND hpou_product_id = hpol_product_id AND hpou_dousage = hpol_dousage)") \
				_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
				_T(" WHERE hpo_docno=%ld and hpol_batch_id=%ld  and trunc(hpo_orderdate)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and hpol_line > 0  ") \
				_T(" GROUP BY hpol_orderid, hpo_transaction_id, hpo_storage_id, hpo_createdby, hpo_orderstatus, hpol_line, product_id, ") \
				_T(" product_name, product_uomname, hpol_unitprice, product_countryname, hpou_dousage,hpo_updatedby ") \
				_T(" ORDER BY hpo_storage_id, hpol_line, product_name, product_uomname ") , 
				m_nDocumentNo,  m_nBatchID, m_szPatientOrderDate);

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	int nItem = 0;
	float nQtyOrder, nQtyIssue;
	CString szStorageName, szStorageID=_T(""), szOrderStatus, szCreatedBy,szUpdateby;
	CString szOldStorageID;

	while(!rs.IsEOF()){ 
		nItem++;		
		rs.GetValue(_T("qtyorder"), nQtyOrder);
		rs.GetValue(_T("qtyissue"), nQtyIssue);
		rs.GetValue(_T("hpo_storage_id"), szStorageID);
		rs.GetValue(_T("hpo_createdby"), szCreatedBy);
		rs.GetValue(_T("hpo_orderstatus"), szOrderStatus);
		rs.GetValue(_T("hpo_updatedby"), szUpdateby);
		
		if(szStorageID != szOldStorageID)
		{
			szOldStorageID = szStorageID;
			szStorageName.Format(_T("%s  -   Trạng thái [%s]  -   Người tạo [%s] - Người sửa: [%s]"), 
				pMF->GetStorageName(str2int(szStorageID)), szOrderStatus, szCreatedBy,szUpdateby);
			
			nItem = m_wndDrugList.AddItems(_T(""), _T(""), szStorageName, NULL);
			m_wndDrugList.SetItemBkColor(nItem, RGB(0, 128, 192), FALSE);
			m_wndDrugList.SetItemTextColor(nItem, RGB(255, 255,255), FALSE);
			m_wndDrugList.MergeCell(nItem, 2, nItem, 7);
		}
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
			szOrderStatus,
			szStorageID,
			szCreatedBy,
			rs.GetValue(_T("usage")),
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


int CHMSDailyOrderView::OnAddFromLogs(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSDailyOrderAddEntryDialog dlg(pMF);
	dlg.m_pWndOrder = this;
	dlg.m_szOrderDate = m_szOrderDate;
	dlg.m_nBatchID = m_nBatchID;
	if(dlg.DoModal() == IDOK)
	{

	}

	OnOrderListLoadData();
//	OnPatientListLoadData();
	m_wndPatientList2.OnListLoadData();
	
	return 0;
}
/*void CHMSDailyOrderView::OnOrderNoChange(){
	
} */
/*void CHMSDailyOrderView::OnOrderNoSetfocus(){
	
} */
/*void CHMSDailyOrderView::OnOrderNoKillfocus(){
	
} */
int CHMSDailyOrderView::OnOrderNoCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(GetMode() == VM_ADD){
		/*if(m_szOrderNo.IsEmpty())
			return 0;
		szSQL.Format(_T("SELECT count(*) FROM m_transaction WHERE mt_orderno='%s' and trunc(mt_orderdate) > trunc(sysdate)-365 "), m_szOrderNo);
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
		rs.GetValue(_T("mtb_transaction_batch_id"), m_nBatchID);
		if(m_nBatchID > 0)
		{
			GetDataToScreen();
			m_wndOrderNo.SetFocus();
		}
		return 1;
	}
	return 0;
} 

/*void CHMSDailyOrderView::OnPatientNameSearchChange(){
	
} */
/*void CHMSDailyOrderView::OnPatientNameSearchSetfocus(){
	
} */
/*void CHMSDailyOrderView::OnPatientNameSearchKillfocus(){
	
} */

void CHMSDailyOrderView::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	static CString szFromDate, szToDate;
	CHMSDailyDrugOrderListDialog dlg(this);
	dlg.m_szDeptKey = pMF->m_szDept;
	if(m_bCancerOpt)
		dlg.m_szOrderType = _T("C");
	else
		dlg.m_szOrderType = _T("T");
	dlg.m_szFromDate =  szFromDate;
	dlg.m_szToDate = szToDate;
	if(dlg.DoModal() ==IDOK){
		m_nBatchID = dlg.m_nOID;
		GetDataToScreen();
		m_wndDrugList.SetFocus();
		szFromDate = dlg.m_szFromDate;
		szToDate = dlg.m_szToDate;
	}
	
} 
/*void CHMSDailyOrderView::OnOrderDateChange(){
	
} */
/*void CHMSDailyOrderView::OnOrderDateSetfocus(){
	
} */
/*void CHMSDailyOrderView::OnOrderDateKillfocus(){
	
} */
int CHMSDailyOrderView::OnOrderDateCheckValue(){
	UpdateData(true);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int n = CompareDate(m_szOrderDate, pMF->GetSysDate());
	if(n < -3 || n > 0)
		return -1;
	return 0;
} 
/*void CHMSDailyOrderView::OnIssueDateChange(){
	
} */
/*void CHMSDailyOrderView::OnIssueDateSetfocus(){
	
} */
/*void CHMSDailyOrderView::OnIssueDateKillfocus(){
	
} */
int CHMSDailyOrderView::OnIssueDateCheckValue(){
	return 0;
} 

/*void CHMSDailyOrderView::OnStatusChange(){
	
} */
/*void CHMSDailyOrderView::OnStatusSetfocus(){
	
} */
/*void CHMSDailyOrderView::OnStatusKillfocus(){
	
} */
int CHMSDailyOrderView::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSDailyOrderView::OnPrintedChange(){
	
} */
/*void CHMSDailyOrderView::OnPrintedSetfocus(){
	
} */
/*void CHMSDailyOrderView::OnPrintedKillfocus(){
	
} */
int CHMSDailyOrderView::OnPrintedCheckValue(){
	return 0;
} 
/*void CHMSDailyOrderView::OnNoteChange(){
	
} */
/*void CHMSDailyOrderView::OnNoteSetfocus(){
	
} */
/*void CHMSDailyOrderView::OnNoteKillfocus(){
	
} */
int CHMSDailyOrderView::OnNoteCheckValue(){
	return 0;
} 
void CHMSDailyOrderView::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSDailyOrderView();
	
} 
void CHMSDailyOrderView::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSDailyOrderView();
} 
void CHMSDailyOrderView::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSDailyOrderView();
} 
void CHMSDailyOrderView::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDailyOrderView();
} 
void CHMSDailyOrderView::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSDailyOrderView();
} 
void CHMSDailyOrderView::OnSendSelect()
{
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
		//ShowMessageBox(_T("Hello!"));
		CHMSConfirmAllUserDialog dlg;
		dlg.m_szDoctor = pMF->GetCurrentUser();		
		if(dlg.DoModal() != IDOK)
			return;

		szSendOrderBy = dlg.m_szDoctor;
	}

	
	if(m_szStatus == _T("O"))
	{
		szSQL.Format(_T("m_transaction_batch_send(%ld, '%s', '%s') "), m_nBatchID, szSendOrderBy, pMF->GetCurrentUser());
		
	}
	else
	{
		szSQL.Format(_T("m_transaction_batch_cancel(%ld, '%s', '%s') "), m_nBatchID, szSendOrderBy, pMF->GetCurrentUser());
	}
	long ret = str2long(pMF->ExecDML(szSQL));
	if (ret <= 0)
	{
		switch(ret)
				{
				case -12:
					AfxMessageBox(_T("Trạng thái phiếu đã gửi hoặc duyệt, không thực hiện được tác vụ"));
					break;

				case -13:
					AfxMessageBox(_T("Người dùng hiện thời không phải người tạo phiếu, không thực hiện được tác vụ"));
					break;

				case -14:
					AfxMessageBox(_T("Trạng thái phiếu phải là đã gửi mới thực hiện được tác vụ"));
					break;				

				case -15:
					AfxMessageBox(_T("Người dùng hiện thời không phải người tạo phiếu, không thực hiện được tác vụ"));
					break;
			
				default:
					ShowMessageBox(_T("Không thao tác được với trạng thái hiện thời"));

				};
	}	

	GetDataToScreen();
} 
void CHMSDailyOrderView::OnPrintSelect(){
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
//	pMF->PrintDrugOrder(m_nBatchID);
	OnPrintDetailbyStorage();
	return;
	//In 2 option
	//1 chi tiet theo loai thuoc va kho
	//2 chi tiet theo loai thuoc, gop kho 7, 8
	CGuiMenu menu(this);
	CRect rect;
	CString tmpStr;
	BOOL bCreated = FALSE;
	m_wndPrint.GetWindowRect(&rect);
	int nPos = 0;
	menu.CreatePopupMenu();
	TranslateString(_T("Print Detail by Storage"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Print Synthesis by Storage"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
_debug(_T("nPos:%d"), nPos);
	switch (nPos)
	{
		case 1:
			OnPrintDetailbyStorage();
			break;
		case 2:
			OnPrintSynthesisbyStorage();
			break;
	}
}

void CHMSDailyOrderView::OnPrintDetailbyStorage()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CPrintForms printer;
	bool bHasPrint = true;
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, szIsPrint, szApproveMethod;
	CString szWardApproved, szCurWard;
	CString szDepartmentID;

	szSQL.Format(_T("SELECT hc_pharma_newapprovemethod, hc_pharma_wardapproved FROM hms_config"));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hc_pharma_newapprovemethod"), szApproveMethod);
	rs.GetValue(_T("hc_pharma_wardapproved"), szWardApproved);

	szCurWard.Format(_T("[%s]"), pMF->m_szDept);
	if(szWardApproved.Find(szCurWard) == -1)
	{
		szApproveMethod = _T("N");
	}

	int nStorageID;
	
	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		long nOID = m_transaction_orders[i];
		szSQL.Format(_T("SELECT mt_status, mt_isprinted, mt_department_id, mt_storage_id FROM m_transaction ") \
			_T("WHERE mt_transaction_id=%ld and mt_status <>'C' "), nOID);
		rs.ExecSQL(szSQL);
		szStatus.Empty();
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("mt_status"), szStatus);
			rs.GetValue(_T("mt_isprinted"), szIsPrint);
			rs.GetValue(_T("mt_department_id"), szDepartmentID);
			rs.GetValue(_T("mt_storage_id"), nStorageID);

			bHasPrint = true;
			if(szApproveMethod == _T("Y") && szDepartmentID == _T("KD") )
			{
				if(szStatus != _T("S") || szIsPrint != _T("Y"))
					bHasPrint = false;
			}
			if(nStorageID == 14)
				bHasPrint = true;

			if (szStatus  == _T("O") || szStatus == _T("A"))
				bHasPrint = false;
			//Thêm option để in ra phiếu lĩnh thuốc docx, xử lý khoa PTTYC trước, để toàn viện
			
			if (szStatus == _T("A"))
			{
				ShowMessageBox(_T("Phiếu trạng thái đã duyệt. Tới khoa cấp phát để in lại!"));
			}

           if (pMF->GetProp(_T("hms_inphieulinh_docx")) == _T("Y"))
                pMF->OnPrintMTransaction(_T(""), nOID, false, true);
            else
			printer.PrintDDO2(nOID, bHasPrint);
			//printer.PrintDDO2_ATDEPT(nOID, bHasPrint);
			//printer.PrintDDO2_ATDEPT_SUB(nOID, bHasPrint);

		}
	}
//	printer.PrintDepartmentExportSheet(m_nBatchID, _T(""));
//	int retMsg = ShowMessageBox(_T("Do you want to print delivery drugs vote?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
//	if(retMsg == IDYES){
//		OnOrderListPrintDeliveryDrug();
//	}
	
} 

void CHMSDailyOrderView::OnPrintSynthesisbyStorage(){
	CString szOrderID;
	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		if (!szOrderID.IsEmpty() && m_storages[i] != 14)
			szOrderID += _T(", ");
		if (m_storages[i] != 14)
			szOrderID.AppendFormat(_T("%d"), m_transaction_orders[i]);
	}
	CPrintForms printer;
	printer.PrintDDO2X(szOrderID, true);
}

int CHMSDailyOrderView::OnOrderListPrintSheetPublicity(){
	CHMSDailyOrderDate dlg(this);
	dlg.m_nType =1;
	dlg.DoModal();
	return 0;	
}
int CHMSDailyOrderView::OnOrderListPrintSheetDate(){
	CHMSDailyOrderDate dlg(this);
	dlg.m_nType = 2;
	dlg.DoModal();
	return 0;
}
int CHMSDailyOrderView::OnAddHMSDailyOrderView(){
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
int CHMSDailyOrderView::OnEditHMSDailyOrderView(){
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
	szSQL.Format(_T("SELECT count(*) FROM hms_ipharmaorder WHERE hpo_transaction_id= %ld "), m_nBatchID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndOrderDate.EnableWindow(false);
		m_wndNote.SetFocus();
	}
 	
	return 0;  
}
int CHMSDailyOrderView::OnDeleteHMSDailyOrderView(){
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
 	
	szSQL.Format(_T("M_TRANSACTION_BATCH_DELETE(%ld,'%s') "), m_nBatchID, pMF->GetCurrentUser()); 
 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret >= 0){ 
//		m_wndPatientList.DeleteAllItems();
		m_wndDrugList.DeleteAllItems();
		m_wndOrderList.DeleteAllItems();
		m_szOrderNo.Empty();
 		SetMode(VM_NONE); 
 	}
	return 0;
}
int CHMSDailyOrderView::OnSaveHMSDailyOrderView(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("AD_GETNEXTVAL('STORAGEDAILYORDER_NO','Y') "));
		m_szOrderNo = pMF->ExecDML(szSQL);		

		m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
		szSQL.Format(_T("M_TRANSACTION_BATCH_CREATE(%s) "), m_transactionTbl.FormatSQL());
		m_nBatchID = str2long(pMF->ExecDML(szSQL));
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE mt_transaction_id=%ld "), m_nBatchID); 
 		szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_createdby, mt_createddate,mt_approveddate,mt_status,mt_ordertype,mt_ordertype,mt_postedby,mt_deliveryby,mt_approveddate,mt_approvedby,mt_receiveby")); 
 		szSQL += szWhere;
 	} 
	_tprintf(_T("%d"), m_nBatchID);
	if(m_nBatchID > 0) 
 	{ 
		GetDataToScreen();
 		//SetMode(VM_VIEW); 
		m_wndAddDrug.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return m_nBatchID; 
 	return 0; 
}
int CHMSDailyOrderView::OnCancelHMSDailyOrderView(){
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
int CHMSDailyOrderView::OnHMSDailyOrderViewListLoadData(){
	return 0;
}


void CHMSDailyOrderView::RefreshData(){
	OnOrderListLoadData();
//	OnPatientListLoadData();
	m_wndPatientList2.OnListLoadData();
}

void CHMSDailyOrderView::LoadDrugList(long nID){
	/*
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++){
		m_nBatchID = ToLong(m_wndPatientList.GetItemText(i, 6));
		if(m_nBatchID = nID)
		{
			m_wndPatientList.SetCurSel(i);
			break;
		}
	}
	*/
}

void CHMSDailyOrderView::OnPrintDelivery(CString szTransactionID, LPCTSTR lpszOrderDate){
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

		szSQL.Format(
			_T(" SELECT DISTINCT hpo_docno as docno, hpo_orderid as orderid, ") \
			_T("	trunc(hpo_orderdate) as orderdate, ") \
			_T("	htr_mainicd, htr_maindisease, ") \
			_T("	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T("	hms_getage( trunc(hd_admitdate), hp_birthdate) as age, ") \
			_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
			_T("	(select get_roomname(hb_deptid, hb_roomid) from hms_bed ") \
			_T("	 where hb_docno = hd_docno and hb_deptid = hpo_deptid and hb_status = 'O'") \
			_T("	 and rownum = 1) as roomname, ") \
			_T("	hms_getactivebed(hpo_docno, hpo_deptid, 0, 'N') as bedname") \
			_T(" FROM hms_patient ") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
			_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
			_T(" LEFT JOIN hms_treatment_record on(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
			_T(" WHERE 	hpo_transaction_id IN(%s) and trunc(hpo_orderdate)= to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
			_T(" ORDER BY roomname, bedname, pname, docno"), szTransactionID, lpszOrderDate);
	//_msg(_T("%s"), szSQL);
	
		prs.ExecSQL(szSQL);
		CReportSection* rptDetail;
		CString szItemID;
		long nOrderNo;
		int i = 1;
		while(!prs.IsEOF())
		{
			prs.GetValue(_T("orderid"), nPharmaOID);

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			
			//prs.GetValue(_T("orderdate"), tmpStr);
			//rptDetail->SetValue(_T("1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

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
			_T("	product_name as name, product_uomname as unit, ") \
			_T(" 	sum(hpol_qtyorder) as qty, ") \
			_T("	hpou_dousage as usage") \
			_T(" FROM hms_ipharmaorderline ") \
			_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id=product_item_id)") \
			_T(" LEFT JOIN hms_ipharmaorder_usage") \
			_T(" ON(hpou_orderid     = hpol_orderid") \
			_T(" AND hpol_dousage = hpou_dousage") \
			_T(" AND hpou_product_id = hpol_product_id)") \
			_T(" WHERE hpol_orderid=%ld ") \
			_T(" GROUP BY product_id, product_name, product_uomname, ") \
			_T("	hpou_dousage ") \
			_T(" ORDER BY product_name "), nPharmaOID);
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
			_T(" hms_getage( trunc(hd_admitdate), hp_birthdate) as age, ") \
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

void CHMSDailyOrderView::OnExportDelivery_Lanscape(long nOID, LPCTSTR lpszOrderDate){
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
		_T(" 	and trunc(hpo_orderdate)='%s' ORDER BY drugname "), nOID, lpszOrderDate);

	int nCount = 0;
	int nSubtotal[256];
	ors.ExecSQL(szSQL);
	if (ors.IsEOF())
		return;
	nCount = ors.GetRecordCount();
	if (nCount>0){
		for (int i = 0;i <= nCount; i++){
			nSubtotal[i]=0;
			xls.SetCellText(nCol+6+i, nRow+5, ors.GetValue(_T("drugname")), CFMT_TEXT, true, 10);
			ors.MoveNext();
		}
	}
	szSQL.Format(_T(" SELECT  trunc(hpo_orderdate) as odate,hpo_docno as docno, hpo_orderid as orderid, ") \
			_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T(" hms_getage( trunc(hd_admitdate), hp_birthdate) as age, ") \
			_T(" date_part('year', hp_birthdate) as yearofbirth, ") \
			_T(" 	hpo_deptid as deptid, hpo_roomid as roomid, hpo_bedid as bedid, ") \
			_T(" 	(select hrl_name from hms_roomlist where hrl_deptid = hpo_deptid and hrl_id = hpo_roomid) as roomname,") \
			_T(" 	(select hbl_name from hms_bedlist where hbl_deptid = hpo_deptid and hbl_roomid = hpo_roomid and hbl_id = hpo_bedid) as bedname") \
			_T(" FROM hms_patient ") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
			_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
			_T(" WHERE 	hpo_transaction_id=%ld ") \
			_T(" 	and trunc(hpo_orderdate)=trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
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


void CHMSDailyOrderView::OnExportDelivery_Portraid(long nOID, LPCTSTR lpszOrderDate){
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
	
	
	szSQL.Format(_T(" SELECT 	 trunc(hpo_orderdate) as odate, ") \
						_T(" 	hpo_docno as docno, ") \
						_T(" 	hpo_orderid as orderid, ") \
						_T("	htr_mainicd, htr_maindisease, ") \
						_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
						_T(" 	(select hrl_name from hms_roomlist where hrl_deptid = hpo_deptid and hrl_id = hpo_roomid) as roomname,") \
						_T(" 	(select hbl_name from hms_bedlist where hbl_deptid = hpo_deptid and hbl_roomid = hpo_roomid and hbl_id = hpo_bedid) as bedname,") \
						_T(" 	hms_getage( trunc(hd_admitdate), hp_birthdate) as age,") \
						_T(" 	product_name as drug,") \
						_T(" 	product_uomname as unit,") \
						_T(" 	sum(hpol_qtyorder) as qty") \
						_T(" FROM hms_ipharmaorder ") \
						_T(" LEFT JOIN hms_doc ON(hd_docno=hpo_docno) ") \
						_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ") \
						_T(" LEFT JOIN hms_ipharmaorderline ON (hpo_orderid = hpol_orderid) ") \
						_T(" LEFT JOIN hms_treatment_record on(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
						_T(" LEFT JOIN m_productitem_view ON(product_item_id = hpol_product_item_id)") \
						_T(" WHERE hpo_transaction_id=%ld AND trunc(hpo_orderdate)= trunc(to_date('%s', 'yyyy-mm-dd hh24:mi:ss'))") \
						_T(" GROUP BY trunc(hpo_orderdate), hpo_docno,hpo_orderid,htr_mainicd, htr_maindisease, ") \
						_T(" trunc(hd_admitdate), hp_birthdate, product_name,product_uomname,hp_surname ,hp_midname,hp_firstname, ") \
						_T(" hpo_deptid,hpo_bedid,hpo_roomid ") \
						_T(" ORDER BY hpo_roomid, hpo_bedid, pname, docno, drug"), nOID, lpszOrderDate);
	int nCount;
	CString szNewOrder, szOldOrder;
	int index = 0;
	int idx = 0;// dem thuoc cua tung benh nhan
//	_fmsg(_T("%s"), szSQL);
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

int CHMSDailyOrderView::OnExportOrderDeliveryDrug(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr,szDoctor,lpszSheetID;
	CHMSExportOrderDeliveryDrug dlg(this);
	
	if(dlg.DoModal() == IDOK){
		szSQL.Format(_T(" SELECT distinct trunc(hpo_orderdate) as orderdate ") \
			_T(" FROM hms_ipharmaorder ") \
			_T(" WHERE 	hpo_transaction_id=%ld ") \
			_T(" ORDER BY trunc(hpo_orderdate) DESC ")
			, m_nTransactionID);
			rs.ExecSQL(szSQL);
			
			while(!rs.IsEOF()){
				rs.GetValue(_T("orderdate"), tmpStr);
				if(dlg.m_nPortraid)
					OnExportDelivery_Lanscape(m_nTransactionID, tmpStr);
				else
					OnExportDelivery_Portraid(m_nTransactionID, tmpStr);

				rs.MoveNext();
			}
	}
	return 0;
}
int CHMSDailyOrderView::OnOrderListPrintDeliveryDrug()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_szStatus == _T("O"))
		return -1;
	OnPrintDeliveryDrugsSelect();
	return 0;
}

void CHMSDailyOrderView::OnAddDrugSelect(){
	OnDrugListAddEntry();
}

void CHMSDailyOrderView::OnPrintDeliveryDrugsSelect(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderNo, szOrderDate, tmpStr;
	
	if(m_szStatus == _T("O"))
	{
		ShowMessageBox(_T("Phi\x1EBFu tr\x1EA1ng th\xE1i \x111\x61ng m\x1EDF. \x42\x1EA1n ph\x1EA3i \x78\xE1\x63 nh\x1EADn g\x1EEDi phi\x1EBFu"));
		return;
	}

	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		if(!szOrderNo.IsEmpty())
			tmpStr.Format(_T("%s"), _T(","));
		szOrderNo.AppendFormat(_T("%s%d"), tmpStr, m_transaction_orders[i]);		
	}

	szSQL.Format(_T(" SELECT distinct trunc(hpo_orderdate) as orderdate ") \
			_T(" FROM hms_ipharmaorder ") \
			_T(" WHERE 	hpo_transaction_id IN(%s) ") \
			_T(" ORDER BY trunc(hpo_orderdate) DESC "), szOrderNo);
			rs.ExecSQL(szSQL);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){		
		rs.GetValue(_T("OrderDate"), szOrderDate);			
		OnPrintDelivery(szOrderNo, szOrderDate);
		
		rs.MoveNext();
	}

	
	
	
	/*CPrintForms printer;
	printer.PM_PrintDrugDeliveryOrder(m_nBatchID);*/
}

void CHMSDailyOrderView::Refresh(long nTransactionID, long nDocumentNo){
	if(nTransactionID > 0) 
		m_nTransactionID = nTransactionID;


	m_nDocumentNo = nDocumentNo;
//	OnPatientListLoadData();
	
	m_wndPatientList2.OnListLoadData();
	m_wndPatientList2.Select(nDocumentNo);

	OnOrderListLoadData();
	OnDrugListLoadData();
	if(m_wndOrderList.GetItemCount() > 0 && m_szStatus == _T("O")){
		m_wndSend.EnableWindow(TRUE);
		m_wndPrint.EnableWindow(TRUE);
		m_wndPrintDeliveryDrugs.EnableWindow(TRUE);
	}	
}

long CHMSDailyOrderView::GetTransactionID(int nStorageID, CString szObjectType)
{
	long nTransactionID = -1;
	//Kiem tra kho dong y va doi tuong la dich vu.
	if(nStorageID == 4 && szObjectType == _T("S"))
	{
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;

		szSQL.Format(_T("SELECT mt_transaction_id ") \
			_T("FROM m_transaction WHERE mt_orderno='%s' and mt_storage_id=4 and mt_objecttype='S' "),
			m_szBatchNo);
		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return -1;
		rs.GetValue(_T("mt_transaction_id"), nTransactionID);
		return nTransactionID;
	}
	else
	{
		for (int i =0; i < m_storages.GetCount(); i++){
			if(nStorageID == m_storages[i])
			{
				nTransactionID = m_transaction_orders[i];
				return nTransactionID;
			}
		}
	}
	return -1;
}

void CHMSDailyOrderView::OnPrintPatientSummeryDrug(int nDocumentNo, CString nRefeorder_ID)
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
				_T("    hms_getage( trunc(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
				_T("    sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hms_getobjectname(hd_object)                       AS object, ") \
				_T("    hcr_maindisease as diagnostic,") \
				_T("    trunc(hcr_admitdate) as admitdate,") \
				_T("    trunc(hcr_dischargedate) as dischargedate,") \
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
		
	szSQL.Format(_T(" SELECT trunc(hpo_orderdate) as orderdate,") \
				_T("        hpol_product_id as itemid") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
				_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx)") \
				_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
				_T(" WHERE hpo_docno=%ld AND hpol_qtyissue > 0") \
				_T(" and hpo_ordertype<>'M' %s") \
				_T(" GROUP BY trunc(hpo_orderdate), hpol_product_id") \
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
					_T("    and trunc(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T(" ORDER BY drugname"),
					nDocumentNo, szWhere, szStartDay, szEndDay);
//_fmsg(_T("%s"), szSQL);
		rsd.ExecSQL(szSQL);

		while (!rsd.IsEOF())
		{
			rsd.GetValue(_T("itemid"), szItemID);

			szSQL.Format(_T(" SELECT sum(hpol_qtyissue) as issueqty, ") \
						_T(" 	 trunc(hpo_orderdate) as orderdate ") \
						_T(" FROM hms_doc  ") \
						_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
						_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
						_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
						_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
						_T(" WHERE hpo_docno=%ld AND hpol_qtyissue > 0") \
						_T(" 	and hpo_ordertype<>'M'") \
						_T(" 	%s ") \
						_T("    and trunc(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T("    and hpol_product_id='%s'") \
						_T(" GROUP BY trunc(hpo_orderdate)") \
						_T(" ORDER BY trunc(hpo_orderdate)"),
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


CString CHMSDailyOrderView::GetOrderStatus(long nTransactionID)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT mt_status FROM m_transaction WHERE mt_transaction_id=%ld"), nTransactionID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return _T("");
	rs.GetValue(_T("mt_status"), szStatus);
	return szStatus;
}

void CHMSDailyOrderView::LoadDrugList(long nDocumentNo, CString szOrderDate){
	m_nDocumentNo = nDocumentNo;
	m_szPatientOrderDate = szOrderDate;
	OnDrugListLoadData();
}

void CHMSDailyOrderView::OnResizeLayout()
{
	AddResize(&m_wndTab, 100, 100);
	AddResize(&m_wndOrderInformation, 100, 100);
	AddResize(&m_wndDrugInformation, 100, 100);
	AddResize(&m_wndDrugList, 100, 100);
	/*
	AddBottom(&m_wndAdd, 0, true);
	AddBottom(&m_wndEdit, 0, true);
	AddBottom(&m_wndDelete, 0, true);
	AddBottom(&m_wndSave, 0, true);
	AddBottom(&m_wndCancel, 0, true);
	AddBottom(&m_wndSend, 0, true);
	AddBottom(&m_wndPrint, 0, true);
	AddBottom(&m_wndPrintDeliveryDrugs, 0, true);
	AddBottom(&m_wndAddDrug);
	*/
	return;
	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100,&m_wndDrugInformation, &m_wndDrugList, NULL);


	AddLayoutControls(WS_REPOSY, 0, 100, 0, 0,&m_wndAdd,&m_wndEdit,&m_wndDelete,&m_wndSave,&m_wndCancel,&m_wndSend,&m_wndPrint,&m_wndPrintDeliveryDrugs,&m_wndAddDrug,NULL);


	AddLayoutControls(WS_RESIZEY, 0, 0, 0, 100,&m_wndOrderInformation,&m_wndTab,NULL);



}

void CHMSDailyOrderView::OnExportDeliveryDetail()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderNo, tmpStr, szTitle;
	CPrintForms printer;	
	CExcel xls;
	int nSel = m_wndOrderList.GetCurSel();
	if (nSel < 0)
		return;
	int nCol = 0, nRow = 0, nIndex = 1;
	int nStorage_ID = str2int(m_wndOrderList.GetItemText(nSel, 7));
	long nProduct_id = str2long(m_wndOrderList.GetItemText(nSel, 0));
	for(int i =0; i < m_transaction_orders.GetCount(); i++)
	{
		if(!szOrderNo.IsEmpty())
			tmpStr.Format(_T("%s"), _T(","));
		szOrderNo.AppendFormat(_T("%s%d"), tmpStr, m_transaction_orders[i]);		
	}
	szSQL.Format(_T(" SELECT Get_StorageName(hpo_storage_id) as \"Storage\",") \
	_T("	product_name as \"Drug\", '%s' as orderno,") \
	_T(" 	product_uomname as \"Unit\",") \
	_T(" 	sum(hpol_qtyorder) as \"Qty\"") \
	_T(" FROM hms_ipharmaorder ") \
	_T(" LEFT JOIN hms_ipharmaorderline ON(hpo_orderid=hpol_orderid)") \
	_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
	_T(" WHERE hpo_ordertype in('D') ") \
	_T("	AND hpo_transaction_id in(%s)  ") \
	_T("	AND hpo_storage_id = %ld AND product_id=%ld") \
	_T("	AND hpo_org_id NOT IN('SMM') ") \
	_T(" GROUP BY hpo_storage_id, product_id, product_item_id, ") \
	_T("	product_name, product_uomname, hpol_unitprice ") \
	_T(" ORDER BY hpo_storage_id, product_name, product_uomname, hpol_unitprice  ") , 
	m_szOrderNo,
	szOrderNo, 
	nStorage_ID, 
	nProduct_id
	);	
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	for (int i = 0; i < rs.GetFieldCount(); i++)
	{
		TranslateString(rs.GetFieldName(i), szTitle);
		tmpStr.Format(_T("%s:"), szTitle);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
		xls.SetCellText(1, nRow++, rs.GetValue(rs.GetFieldName(i)), FMT_TEXT);
	}
	szSQL.Format(_T(" SELECT DISTINCT to_char(orderdate, 'DD/MM/YYYY') as \"By Order Date\",") \
	_T("   pname as \"Patient Name\",") \
	_T("   docno as \"Document No\",") \
	_T("   recordno as \"Admission No\",") \
	_T("   get_departmentname(deptid) as \"Treatment Dept\",") \
	_T("   objectname as \"Object\", ") \
	_T("   SUM(product_qtyorder) AS \"Qty\"") \
	_T(" FROM") \
	_T("   (SELECT hpo_docno      AS docno,") \
	_T("	 hcr_recordno recordno,") \
	_T("     hpo_deptid           AS deptid,") \
	_T("     hpo_orderid          AS orderid,") \
	_T("     trunc(hpo_orderdate) AS orderdate,") \
	_T("     trim(hp_surname") \
	_T("     ||' '") \
	_T("     ||hp_midname") \
	_T("     ||' '") \
	_T("     ||hp_firstname)                               AS pname,") \
	_T("     hms_getage(trunc(hd_admitdate), hp_birthdate) AS age,") \
	_T("     extract(year from hp_birthdate)               AS yearofbirth,") \
	_T(" 	 hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
	_T(" (SELECT hrl_name") \
	_T("     FROM hms_roomlist") \
	_T("     WHERE hrl_id  =hpo_roomid") \
	_T("     AND hrl_deptid=hpo_deptid") \
	_T("     ) AS roomname,") \
	_T("     (SELECT hbl_name") \
	_T("     FROM hms_bedlist") \
	_T("     WHERE hbl_id  = hpo_bedid") \
	_T("     AND hbl_roomid=hpo_roomid") \
	_T("     AND hbl_deptid=hpo_deptid") \
	_T("     ) AS bedname,") \
	_T("	 ho_desc as objectname, ") \
	_T(" 	 hd_cardno as cardno,") \
	_T("     hpo_storage_id,") \
	_T("     product_id,") \
	_T("     product_item_id,") \
	_T("     product_name    AS product_name,") \
	_T("     product_uomname AS product_unit,") \
	_T("     hpol_unitprice  AS product_taxprice,") \
	_T("     hpol_qtyorder   AS product_qtyorder,") \
	_T("     hpol_qtyissue   AS product_qtyissue") \
	_T("   FROM hms_ipharmaorder ") \
	_T("   LEFT JOIN hms_ipharmaorderline") \
	_T("   ON(hpo_orderid=hpol_orderid)") \
	_T("   LEFT JOIN m_productitem_view") \
	_T("   ON(product_item_id   =hpol_product_item_id)") \
	_T("   LEFT JOIN hms_doc") \
	_T("   ON(hpo_docno=hd_docno)") \
	_T("   LEFT JOIN hms_clinical_record ON (hd_docno = hcr_docno)")
	_T(" LEFT JOIN hms_patient ") \
	_T("   ON(hd_patientno=hp_patientno)") \
	_T("   LEFT JOIN hms_object ON(ho_id=hd_object) ") \
	_T("   LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
	_T("   WHERE hpo_ordertype  IN('D')") \
	_T("   AND hpo_transaction_id IN(%s) AND hpo_org_id NOT IN('SMM')") \
	_T(" and hpo_storage_id=%ld ") \
	_T("   AND product_id  =%ld ") \
	_T("   )") \
	_T(" GROUP BY orderdate,") \
	_T("   pname,") \
	_T("   docno,") \
	_T("   recordno,") \
	_T("   deptid,") \
	_T("   cardno, ") \
	_T("   objectname, ") \
	_T("   address, ") \
	_T("   yearofbirth, ") \
	_T("   hpo_storage_id,") \
	_T("   product_name,") \
	_T("   product_unit,") \
	_T("   product_taxprice") \
	_T(" ORDER BY docno,") \
	_T("   pname"),
	szOrderNo, nStorage_ID, nProduct_id);
	rs.ExecSQL(szSQL);
	//Column Header
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true);
	for (int i = 0; i < rs.GetFieldCount(); i++)
	{
		TranslateString(rs.GetFieldName(i), szTitle);
		xls.SetCellText(i + 1, nRow, szTitle, FMT_TEXT | FMT_CENTER, true);
	}
	nRow++;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIndex++), FMT_TEXT);	
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			xls.SetCellText(i + 1, nRow, rs.GetValue(rs.GetFieldName(i)), FMT_TEXT);
		}
		nRow++;
		rs.MoveNext();
	}
	OnExportDeliveryDetailDaily(xls, szOrderNo, nStorage_ID, nProduct_id);
	tmpStr.Format(_T("Exports\\%s.xls"), m_szOrderNo);
	xls.Save(tmpStr);
}

void CHMSDailyOrderView::OnExportDeliveryDetailDaily(CExcel& xls, CString szOrderNo, int nStorage_ID, long nProduct_id)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db), rsd(&pMF->m_db);
	CString szSQL, tmpStr, szTitle, szOrder_date, szSheet_name;
	int nRow = 0, nIndex = 0, nSheetIndex = xls.GetCount();
	szSQL.Format(_T(" SELECT Get_StorageName(hpo_storage_id) as \"Storage\",") \
		_T("	to_char(hpo_orderdate, 'dd/mm/yyyy') as \"Order date\",") \
		_T("	product_name as \"Drug\", '%s' as orderno,") \
		_T(" 	product_uomname as \"Unit\",") \
		_T(" 	sum(hpol_qtyorder) as \"Qty\"") \
		_T(" FROM hms_ipharmaorder ") \
		_T(" LEFT JOIN hms_ipharmaorderline ON(hpo_orderid=hpol_orderid)") \
		_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
		_T(" WHERE hpo_ordertype in('D') ") \
		_T("	AND hpo_transaction_id in(%s)  ") \
		_T("	AND hpo_storage_id = %ld AND product_id=%ld") \
		_T("	AND hpo_org_id NOT IN('SMM') ") \
		_T(" GROUP BY to_char(hpo_orderdate, 'dd/mm/yyyy'), hpo_storage_id, product_id, product_item_id, ") \
		_T("	product_name, product_uomname, hpol_unitprice ") \
		_T(" ORDER BY hpo_storage_id, product_name, product_uomname, hpol_unitprice, to_char(hpo_orderdate, 'dd/mm/yyyy')  "),
		m_szOrderNo,
		szOrderNo,
		nStorage_ID,
		nProduct_id
	);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		return;
	}
	while (!rs.IsEOF())
	{
		nRow = 0;
		nIndex = 1;
		/*Add Sheet*/
		rs.GetValue(_T("Order date"), szOrder_date);
		szSheet_name = szOrder_date;
		szSheet_name.Replace(_T("/"), _T("."));
		xls.AddSheet(szSheet_name);
		xls.SetWorksheet(nSheetIndex++);
		//xls.SetSheetName(szSheet_name);
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			TranslateString(rs.GetFieldName(i), szTitle);
			tmpStr.Format(_T("%s:"), szTitle);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
			xls.SetCellText(1, nRow++, rs.GetValue(rs.GetFieldName(i)), FMT_TEXT);
		}
		szSQL.Format(_T(" SELECT DISTINCT to_char(orderdate, 'DD/MM/YYYY') as \"By Order Date\",") \
			_T("   pname as \"Patient Name\",") \
			_T("   docno as \"Document No\",") \
			_T("   recordno as \"Admission No\",") \
			_T("   get_departmentname(deptid) as \"Treatment Dept\",") \
			_T("   objectname as \"Object\", ") \
			_T("   SUM(product_qtyorder) AS \"Qty\"") \
			_T(" FROM") \
			_T("   (SELECT hpo_docno      AS docno,") \
			_T("	 hcr_recordno recordno,") \
			_T("     hpo_deptid           AS deptid,") \
			_T("     hpo_orderid          AS orderid,") \
			_T("     trunc(hpo_orderdate) AS orderdate,") \
			_T("     trim(hp_surname") \
			_T("     ||' '") \
			_T("     ||hp_midname") \
			_T("     ||' '") \
			_T("     ||hp_firstname)                               AS pname,") \
			_T("     hms_getage(trunc(hd_admitdate), hp_birthdate) AS age,") \
			_T("     extract(year from hp_birthdate)               AS yearofbirth,") \
			_T(" 	 hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
			_T(" (SELECT hrl_name") \
			_T("     FROM hms_roomlist") \
			_T("     WHERE hrl_id  =hpo_roomid") \
			_T("     AND hrl_deptid=hpo_deptid") \
			_T("     ) AS roomname,") \
			_T("     (SELECT hbl_name") \
			_T("     FROM hms_bedlist") \
			_T("     WHERE hbl_id  = hpo_bedid") \
			_T("     AND hbl_roomid=hpo_roomid") \
			_T("     AND hbl_deptid=hpo_deptid") \
			_T("     ) AS bedname,") \
			_T("	 ho_desc as objectname, ") \
			_T(" 	 hd_cardno as cardno,") \
			_T("     hpo_storage_id,") \
			_T("     product_id,") \
			_T("     product_item_id,") \
			_T("     product_name    AS product_name,") \
			_T("     product_uomname AS product_unit,") \
			_T("     hpol_unitprice  AS product_taxprice,") \
			_T("     hpol_qtyorder   AS product_qtyorder,") \
			_T("     hpol_qtyissue   AS product_qtyissue") \
			_T("   FROM hms_ipharmaorder ") \
			_T("   LEFT JOIN hms_ipharmaorderline") \
			_T("   ON(hpo_orderid=hpol_orderid)") \
			_T("   LEFT JOIN m_productitem_view") \
			_T("   ON(product_item_id   =hpol_product_item_id)") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON(hpo_docno=hd_docno)") \
			_T("   LEFT JOIN hms_clinical_record ON (hd_docno = hcr_docno)")
			_T(" LEFT JOIN hms_patient ") \
			_T("   ON(hd_patientno=hp_patientno)") \
			_T("   LEFT JOIN hms_object ON(ho_id=hd_object) ") \
			_T("   LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
			_T("   WHERE hpo_ordertype  IN('D')") \
			_T("   AND hpo_transaction_id IN(%s) AND hpo_org_id NOT IN('SMM')") \
			_T(" and hpo_storage_id=%ld ") \
			_T("   AND product_id  =%ld ") \
			_T("	AND trunc(hpo_orderdate) = trunc(to_date('%s', 'dd/mm/yyyy hh24:mi'))") \
			_T("   )") \
			_T(" GROUP BY orderdate,") \
			_T("   pname,") \
			_T("   docno,") \
			_T("   recordno,") \
			_T("   deptid,") \
			_T("   cardno, ") \
			_T("   objectname, ") \
			_T("   address, ") \
			_T("   yearofbirth, ") \
			_T("   hpo_storage_id,") \
			_T("   product_name,") \
			_T("   product_unit,") \
			_T("   product_taxprice") \
			_T(" ORDER BY docno,") \
			_T("   pname"),
			szOrderNo, nStorage_ID, nProduct_id, szOrder_date);
		rsd.ExecSQL(szSQL);
		//Column Header
		xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true);
		for (int i = 0; i < rsd.GetFieldCount(); i++)
		{
			TranslateString(rsd.GetFieldName(i), szTitle);
			xls.SetCellText(i + 1, nRow, szTitle, FMT_TEXT | FMT_CENTER, true);
		}
		nRow++;
		while (!rsd.IsEOF())
		{
			xls.SetCellText(0, nRow, int2str(nIndex++), FMT_TEXT);
			for (int i = 0; i < rsd.GetFieldCount(); i++)
			{
				xls.SetCellText(i + 1, nRow, rsd.GetValue(rsd.GetFieldName(i)), FMT_TEXT);
			}
			nRow++;
			rsd.MoveNext();
		}
		rs.MoveNext();
	}

}