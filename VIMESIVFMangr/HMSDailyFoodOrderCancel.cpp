#include "HMSDailyFoodOrderCancel.h"
#include "MainFrm.h"
#include "HMSConfirmDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "HMSDailyFoodCancelPatientListDialog.h"


static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderCancel*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodOrderCancel*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnOrderListDeleteItem();
} 

static int _OnOrderListPrintDeliveryRationFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnOrderListPrintDeliveryRation();
}
static int	_OnExportOrderDeliveryRationFnc(CWnd *pWnd){
	return	((CHMSDailyFoodOrderCancel*)pWnd)->OnExportOrderDeliveryRation();
}
static int _OnOrderListPrintSheetDateFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnOrderListPrintSheetDate();
}
static int _OnOrderListPrintSheetpublicityFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnOrderListPrintSheetPublicity();
}

static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderCancel*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodOrderCancel*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 

static int _OnPatientListIssueAllFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnPatientListIssueAll();
} 

static int _OnPatientListIssueFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnPatientListIssue();
} 

static int _OnPatientListRollbackFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnPatientListRollback();
} 

static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnRationListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderCancel*)pWnd)->OnRationListLoadData();
} 
static void _OnRationListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel*)pWnd)->OnRationListDblClick();
} 
static void _OnRationListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodOrderCancel*)pWnd)->OnRationListSelectChange(nOldItem, nNewItem);
} 
static int _OnRationListAddEntryFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnRationListAddEntry();
} 

static int _OnRationListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnRationListDeleteItem();
} 
static int _OnRationListReturnFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnRationListReturnRation();
}


static int _OnChangeRationFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnChangeRation();
}

/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderCancel *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnFindSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderCancel *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnIssueDateChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnIssueDateChange();
} */
/*static void _OnIssueDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnIssueDateSetfocus();} */ 
/*static void _OnIssueDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnIssueDateKillfocus();
} */
static int _OnIssueDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderCancel *)pWnd)->OnIssueDateCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderCancel *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnPrintedChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnPrintedChange();
} */
/*static void _OnPrintedSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnPrintedSetfocus();} */ 
/*static void _OnPrintedKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnPrintedKillfocus();
} */
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancelDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancelDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancelDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderCancel *)pWnd)->OnPatientNameCheckValue();
} 
static int _OnPrintedCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderCancel *)pWnd)->OnPrintedCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderCancel *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrderCancel *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintDeliveryRationsSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnPrintDeliveryRationsSelect();
} 
static void _OnAddRationSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnAddRationSelect();
} 
static void _OnAddAutomaticSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrderCancel *pVw = (CHMSDailyFoodOrderCancel *)pWnd;
	pVw->OnAddAutomaticSelect();
} 
static int _OnAddHMSDailyFoodOrderCancelFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnAddHMSDailyFoodOrderCancel();
} 
static int _OnEditHMSDailyFoodOrderCancelFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnEditHMSDailyFoodOrderCancel();
} 
static int _OnDeleteHMSDailyFoodOrderCancelFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnDeleteHMSDailyFoodOrderCancel();
} 
static int _OnSaveHMSDailyFoodOrderCancelFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnSaveHMSDailyFoodOrderCancel();
} 
static int _OnCancelHMSDailyFoodOrderCancelFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrderCancel*)pWnd)->OnCancelHMSDailyFoodOrderCancel();
} 
//CHMSDailyFoodOrderCancel::CHMSDailyFoodOrderCancel(CWnd *pParent)
CHMSDailyFoodOrderCancel::CHMSDailyFoodOrderCancel()
{
	m_nDlgWidth = 1024;
	m_nDlgHeight = 805;
	SetDefaultValues();
	m_szOrderNo.Empty();
	
}
CHMSDailyFoodOrderCancel::~CHMSDailyFoodOrderCancel(){
}
void CHMSDailyFoodOrderCancel::OnCreateComponents(){	
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 500, 120);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 505, 5, 1000, 405);
	m_wndRationInformation.Create(this, _T("Food Informations"), 505, 340, 1000, 610);
	m_wndGroupListRation.Create(this, _T("Food Type List"), 5, 155, 500, 610);
	m_wndOrderList.Create(this, 10, 180, 495, 605);
	m_wndPatientList.Create(this, 510, 30, 1000, 300);
	m_wndRationList.Create(this, 510, 365, 1000, 605);
	m_wndOrderNoLabel.Create(this, _T("Order ID"), 10, 30, 120, 55);
	m_wndOrderNo.Create(this,125, 30, 245, 55);
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 60, 120, 85);
	m_wndOrderDate.Create(this,125, 60, 245, 85); 
	m_wndIssueDateLabel.Create(this, _T("Issue Date"), 250, 60, 325, 85);
	m_wndIssueDate.Create(this,330, 60, 495, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 250, 30, 325, 55);
	m_wndStatus.Create(this,330, 30, 495, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 90, 120, 115);
	m_wndNote.Create(this,125, 90, 400, 115);	
	m_wndHaucan.Create(this, _T("BA hậu cần"), 405, 90, 495, 115);

	m_wndAdd.Create(this, _T("&Add Sheet"), 15, 125, 105, 150);
	m_wndEdit.Create(this, _T("&Edit"), 110, 125, 200, 150);
	m_wndDelete.Create(this, _T("&Delete"), 205, 125, 295, 150);
	m_wndSave.Create(this, _T("&Save"), 300, 125, 390, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 395, 125, 485, 150);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 510, 310, 620, 335);
	m_wndPatientName.Create(this, 625, 310, 825, 335); 
	m_wndFind.Create(this, _T("&Find"), 830, 310, 900, 335);
	m_wndTotalNumber.Create(this, 905, 310, 995, 335); 
	
	//m_wndAddRation.Create(this, _T("Add Ration"), 690, 615, 790, 640);
	m_wndAddAutomatic.Create(this, _T("Cancel Ration"), 505, 615, 625, 640);
	m_wndSend.Create(this, _T("&Send"), 795, 615, 895, 640);
	m_wndPrint.Create(this, _T("&Preview"), 900, 615, 1000, 640);
}
void CHMSDailyFoodOrderCancel::OnInitializeComponents(){
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

	//m_wndOrderList.GetHeaderControl()->SetItemHeight(2);
	m_wndOrderList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_CENTER, 40);	//identify
	m_wndOrderList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 200);
	m_wndOrderList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndOrderList.InsertColumn(3, _T("S\xE1ng"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(4, _T("Tr\x1B0\x61"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(5, _T("T\x1ED1i"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(6, _T("Qty"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(7, _T("Price"), CFMT_MONEY, 70);
	m_wndOrderList.InsertColumn(8, _T("Amount"), CFMT_MONEY, 80);
	m_wndOrderList.InsertColumn(9, _T("ItemID"), CFMT_TEXT, 0);	
	m_wndOrderList.InsertColumn(10, _T("GroupID"), CFMT_TEXT, 0);
	m_wndOrderList.SetSortHeader(false);
	m_wndOrderList.GetHeaderControl()->SetItemHeight(2);
	m_wndOrderList.GetHeaderControl()->MergeCell(_T("S\x1ED1 su\x1EA5t"), 0, 3, 1, 6, true);
	m_wndOrderList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndPatientList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 40);	//orderid
	m_wndPatientList.InsertColumn(1, _T(""), CFMT_NUMBER, 0);	//orderid
	m_wndPatientList.InsertColumn(2, _T("Document No"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndPatientList.InsertColumn(4, _T("Bed"), CFMT_TEXT, 70);
	m_wndPatientList.InsertColumn(5, _T("Date"), CFMT_DATE, 100);
	m_wndPatientList.InsertColumn(6, _T("Status"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndPatientList.InsertColumn(7, _T("OrderNo"), CFMT_NUMBER, 0);
	m_wndPatientList.InsertColumn(8, _T("Doctor"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(9, _T("Created By"), CFMT_TEXT, 0);

	m_wndRationList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndRationList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 220);
	m_wndRationList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 60);	
	m_wndRationList.InsertColumn(3, _T("Type"), CFMT_TEXT, 40);	
	m_wndRationList.InsertColumn(4, _T("Qty"), CFMT_MONEY, 40);	
	m_wndRationList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndRationList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 80);
	m_wndRationList.InsertColumn(7, _T("Orderid"), CFMT_NUMBER, 0);	//product_id
	m_wndRationList.InsertColumn(8, _T("Itemdi"), CFMT_TEXT|CFMT_CENTER, 0);
	//m_wndRationList.GetHeaderControl()->SetItemHeight(2);
	
	
	m_feefoodTbl.SetTableName(_T("HMS_FOODORDERSHEET"));
	m_feefoodTbl.AddField(_T("HFOS_ORDERID"), dfLong); 
	m_feefoodTbl.AddField(_T("HFOS_CREATEDBY"), dfText, 15); 
	m_feefoodTbl.AddField(_T("HFOS_CREATEDDATE"), dfDateTime); 
	m_feefoodTbl.AddField(_T("HFOS_UPDATEDBY"), dfText, 15); 
	m_feefoodTbl.AddField(_T("HFOS_UPDATEDDATE"), dfDateTime); 	
	m_feefoodTbl.AddField(_T("HFOS_DEPTTYPE"), dfText, 3); 
	m_feefoodTbl.AddField(_T("HFOS_DEPTID"), dfText, 7); 
	m_feefoodTbl.AddField(_T("HFOS_ORDERTYPE"), dfText, 1);	
	m_feefoodTbl.AddField(_T("HFOS_ORDERDATE"), dfDateTime);
	m_feefoodTbl.AddField(_T("HFOS_ORDERSTATUS"), dfText, 1); 
	m_feefoodTbl.AddField(_T("HFOS_APPROVEDATE"), dfDateTime); 
	m_feefoodTbl.AddField(_T("HFOS_APPROVEBY"), dfText, 32); 
	m_feefoodTbl.AddField(_T("HFOS_SHEETNO"), dfText, 65);
	m_feefoodTbl.AddField(_T("HFOS_DESCRIPTION"), dfText, 254);

}
void CHMSDailyFoodOrderCancel::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.SetWindowText(_T("Order Information"));
	m_wndOrderList.AddEvent(1, _T("Print Daily Food"), _OnOrderListPrintDeliveryRationFnc);
	//m_wndOrderList.AddEvent(2, _T("Export Delivery Rations"), _OnExportOrderDeliveryRationFnc);
	//m_wndOrderList.AddEvent(3, _T("Print Sheet By Date"), _OnOrderListPrintSheetDateFnc);
	////m_wndOrderList.AddEvent(4, _T("Print shelt publicity Rations"), _OnOrderListPrintSheetpublicityFnc);
	//m_wndOrderList.AddEvent(0, _T("-"), NULL);
	//m_wndOrderList.AddEvent(5, _T("View Detail"), _OnOrderListDeleteItemFnc);

	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	
	/*
	m_wndPatientList.SetWindowText(_T("Patient List"));
	m_wndPatientList.AddEvent(1, _T("Issue All"), _OnPatientListIssueAllFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(2, _T("Issue"), _OnPatientListIssueFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(3, _T("DMO_Rollback"), _OnPatientListRollbackFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(4, _T("Delete Patient"), _OnPatientListDeleteItemFnc);
*/

	m_wndRationList.SetEvent(WE_SELCHANGE, _OnRationListSelectChangeFnc);
	m_wndRationList.SetEvent(WE_LOADDATA, _OnRationListLoadDataFnc);
	m_wndRationList.SetEvent(WE_DBLCLICK, _OnRationListDblClickFnc);
	m_wndRationList.SetWindowText(_T("Ration List"));
	m_wndRationList.AddEvent(1, _T("Delete Ration"), _OnRationListDeleteItemFnc, 0, VK_DELETE);
	/*
	m_wndRationList.AddEvent(1, _T("Add Ration"), _OnRationListAddEntryFnc, 0, VK_F2);
	m_wndRationList.AddEvent(0, _T("-"), NULL);
	m_wndRationList.AddEvent(2, _T("Delete Ration"), _OnRationListDeleteItemFnc, 0, VK_DELETE);
	m_wndRationList.AddEvent(0, _T("-"), NULL);
	m_wndRationList.AddEvent(3, _T("Cancel Ration"), _OnRationListReturnFnc);
	
	m_wndRationList.AddEvent(0, _T("-"), NULL);
	m_wndRationList.AddEvent(4, _T("Change Ration"), _OnChangeRationFnc);*/
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

	m_wndAddAutomatic.SetEvent(WE_CLICK, _OnAddAutomaticSelectFnc);

	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPrintDeliveryRations.SetEvent(WE_CLICK, _OnPrintDeliveryRationsSelectFnc);
	m_wndAddRation.SetEvent(WE_CLICK, _OnAddRationSelectFnc);

	SetWindowFont(&m_wndTotalNumber, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndTotalNumber.SetTextColor(RGB(0, 0, 255));

	SetMode(VM_NONE);
}
void CHMSDailyFoodOrderCancel::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusDesc);
	DDX_Text(pDX, m_wndTotalNumber.GetDlgCtrlID(), m_nTotalNumber);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Check(pDX, m_wndHaucan.GetDlgCtrlID(), m_bHaucan);
}
void CHMSDailyFoodOrderCancel::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;


	szSQL.Format(_T("SELECT  ") \
		_T("HFOS_ORDERID as orderno, ") \
		_T("HFOS_ORDERDATE as orderdate, ") \
		_T("HFOS_UPDATEDDATE as issuedate, ") \
		_T("HFOS_DESCRIPTION as description, ") \
		_T("HFOS_ORDERSTATUS as status, ") \
		_T("HFOS_SHEETNO as sheetNo, ") \
		_T("HFOS_CREATEDBY as createdby, HFOS_DEPTTYPE ") \
		_T("FROM HMS_FOODORDERSHEET ") \
		_T("WHERE HFOS_ORDERID=%ld and HFOS_DEPTID='%s' "), 
		m_nOID, pMF->m_szDept);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("createdby"), m_szCreatedBy);
		rs.GetValue(_T("orderdate"), m_szOrderDate);
		rs.GetValue(_T("issuedate"), m_szIssueDate);
		rs.GetValue(_T("description"), m_szNote);
		rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("orderno"), m_szBatchNo);
		rs.GetValue(_T("sheetNo"), m_szOrderNo);
		CString tmpStr;
		rs.GetValue(_T("HFOS_DEPTTYPE"), tmpStr);
		if(tmpStr == _T("HC"))
			m_bHaucan = TRUE;

		//m_szOrderNo = m_szBatchNo;
		m_szStatusDesc = pMF->GetStatusString(m_szStatus);
		if(m_szStatus == _T("O") || m_szStatus==_T("S"))
			m_szIssueDate.Empty();		
		SetMode(VM_VIEW);


		
		OnOrderListLoadData();
		OnPatientListLoadData();

		m_wndRationList.DeleteAllItems();
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
			m_wndPrintDeliveryRations.EnableWindow(true);

		}
		else
			m_wndSend.EnableWindow(false);
		
		if(m_szStatus != _T("A")){
			if(m_szStatus == _T("O"))
			{
				m_wndRationList.SetMenuState(1, true);
				m_wndRationList.SetMenuState(2, true);
				m_wndRationList.SetMenuState(3, true);
			}
			else
			{
				m_wndRationList.SetMenuState(1, false);
				m_wndRationList.SetMenuState(2, false);
			}			
		}		
	}
	else
	{
		SetMode(VM_NONE);
	}


	

	if(m_wndOrderList.GetItemCount() <= 0){
		m_wndSend.EnableWindow(false);
		m_wndPrint.EnableWindow(false);
		//m_wndPrintDeliveryRations.EnableWindow(false);
	}

}
void CHMSDailyFoodOrderCancel::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	
	//m_feefoodTbl.SetValue(_T("HFOS_ORDERID"), dfLong); 
	m_feefoodTbl.SetValue(_T("HFOS_CREATEDBY"), pMF->GetCurrentUser()); 
	m_feefoodTbl.SetValue(_T("HFOS_CREATEDDATE"), pMF->GetSysDateTime()); 
	m_feefoodTbl.SetValue(_T("HFOS_UPDATEDBY"), pMF->GetCurrentUser()); 
	m_feefoodTbl.SetValue(_T("HFOS_UPDATEDDATE"), pMF->GetSysDateTime()); 	
	m_feefoodTbl.SetValue(_T("HFOS_DEPTTYPE"), m_bHaucan?_T("HC"):_T(""));	
	m_feefoodTbl.SetValue(_T("HFOS_DEPTID"), pMF->GetDepartmentID()); 
	m_feefoodTbl.SetValue(_T("HFOS_ORDERTYPE"), _T("D"));	
	m_feefoodTbl.SetValue(_T("HFOS_ORDERDATE"), m_szOrderDate);
	m_feefoodTbl.SetValue(_T("HFOS_ORDERSTATUS"), m_szStatus); 
	//m_feefoodTbl.SetValue(_T("HFOS_APPROVEDATE"), dfDateTime); 
	m_feefoodTbl.SetValue(_T("HFOS_APPROVEBY"), _T("")); 
	m_feefoodTbl.SetValue(_T("HFOS_SHEETNO"), m_szOrderNo); 
	m_feefoodTbl.SetValue(_T("HFOS_DESCRIPTION"), m_szNote);	
	
}
void CHMSDailyFoodOrderCancel::SetDefaultValues(){

	m_szOrderDate.Empty();
	m_szIssueDate.Empty();
	m_szStatus.Empty();
	m_nPrinted=0;
	m_nTotalNumber=0;
	m_szNote.Empty();
	m_bHaucan = FALSE;

}
int CHMSDailyFoodOrderCancel::SetMode(int nMode){
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
			szSQL.Format(_T("AD_GETNEXTVAL('FOODORDER_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_wndOrderNo.EnableWindow(false);
			m_szOrderDate = pMF->GetSysDateTime();
			m_wndOrderDate.SetFocus();
			m_szStatus = _T("O");
			m_szNote.Format(_T("Phi\x1EBFu \x63\x1EAFt \x103n (%s)"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
			m_wndPatientName.EnableWindow(FALSE);
			m_wndOrderList.DeleteAllItems();
			m_wndPatientList.DeleteAllItems();
			m_wndRationList.DeleteAllItems();
			m_wndHaucan.EnableWindow(true);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndOrderNo.EnableWindow(false);
			m_wndHaucan.EnableWindow(false);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
			m_wndOrderNo.EnableWindow(true);
			m_wndOrderNo.SetNotEmpty(false);
			if(m_szStatus != _T("O")){
				m_wndPrint.EnableWindow(true);
				m_wndPrintDeliveryRations.EnableWindow(true);
			}
			m_wndPatientName.EnableWindow(true);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
			m_wndOrderNo.SetNotEmpty(false);
			m_wndOrderNo.EnableWindow(true);
			m_wndOrderList.DeleteAllItems();
			m_wndPatientList.DeleteAllItems();
			m_wndRationList.DeleteAllItems();
 			break; 
 		}; 
		if(m_szStatus == _T("O")){
			m_wndAddRation.EnableWindow(true);
		}
		else
		{
			m_wndAddRation.EnableWindow(false);
			m_wndDelete.EnableWindow(FALSE);
		}
		
		m_wndTotalNumber.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSDailyFoodOrderCancel::OnOrderListDblClick(){
	
} 
void CHMSDailyFoodOrderCancel::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
int CHMSDailyFoodOrderCancel::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyFoodOrderCancel::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderBy, szWhere;	
	
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   groupid,") \
		_T("   unit,") \
		_T("   unitprice,") \
		_T("   SUM(FoodQtyS)          AS QtyS,  ") \
		_T("   SUM(FoodQtyT)          AS QtyT,  ") \
		_T("   SUM(FoodQtyC)          AS QtyC,  ") \
		_T("   SUM(FoodQty)          AS Qty,  ") \
		_T("   SUM(FoodQty)*unitprice AS amount") \
		_T(" FROM") \
		_T("   (SELECT hfoc_itemid AS itemid,") \
		_T("     hfl_name2          AS foodid,") \
		_T("     hfl_name          AS foodname,") \
		_T("	 hfoc_type		   AS type, ") \
		_T("     hfoc_groupid      AS groupid,") \
		_T("     hfl_unit          AS unit,") \
		_T("     hfoc_unitprice    AS unitprice,    ") \
		_T("     hfoc_qtyorder     AS FoodQty,    ") \
		_T("     CASE ") \
		_T("		WHEN hfoc_type = 'S' ") \
		_T("		THEN hfoc_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyS,    ") \
		_T("     CASE ") \
		_T("		WHEN hfoc_type = 'T' ") \
		_T("		THEN hfoc_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyT,    ") \
		_T("     CASE ") \
		_T("		WHEN hfoc_type = 'C' ") \
		_T("		THEN hfoc_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyC    ") \
		_T("   FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodcancel") \
		_T("   ON(hfo_orderid=hfoc_orderid)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid        =hfoc_itemid)") \
		_T("   WHERE hfo_ordertype ='D'") \
		_T("   AND hfoc_retorder_id = %ld") \
		_T("   )") \
		_T(" GROUP BY groupid,") \
		_T("   itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   unit,") \
		_T("   unitprice") \
		_T(" ORDER BY foodname,") \
		_T("   unit,") \
		_T("   unitprice"), m_nOID);
		

_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nIndex = 1;
	double nTotalAmount =0;
	int nItem = 0, nTotalQtyT =0, nTotalQtyC=0, nTotalQtyS=0, nTotalQty =0;	
	CString tmpStr, szStorageName, szProductName;
	while(!rs.IsEOF()){		
		nItem++;
		nTotalQtyS += str2int(rs.GetValue(_T("QtyS")));
		nTotalQtyT += str2int(rs.GetValue(_T("QtyT")));
		nTotalQtyC += str2int(rs.GetValue(_T("QtyC")));
		nTotalQty += str2int(rs.GetValue(_T("Qty")));
		nTotalAmount += str2double(rs.GetValue(_T("amount")));
		m_wndOrderList.AddItems(
			rs.GetValue(_T("foodid")),
			rs.GetValue(_T("foodname")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("QtyS")),
			rs.GetValue(_T("QtyT")),
			rs.GetValue(_T("QtyC")),
			rs.GetValue(_T("Qty")),
			rs.GetValue(_T("unitprice")),
			rs.GetValue(_T("amount")), 
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("groupid")),
			NULL);
		rs.MoveNext();
	}
	if( nItem> 0){
		TranslateString(_T("Total"), tmpStr);
		nItem = m_wndOrderList.AddItems(
			_T(""),
			tmpStr,
			_T(""),
			ToString(nTotalQtyS),
			ToString(nTotalQtyT),
			ToString(nTotalQtyC),
			ToString(nTotalQty),
			_T(""),
			ToString(nTotalAmount), 
			_T(""),
			_T(""),
			NULL);
		m_wndOrderList.SetItemBkColor(nItem, RGB(0, 125, 135), FALSE);
		m_wndOrderList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		m_wndOrderList.MergeCell(nItem, 1, nItem, 2, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
	}
	
	m_wndOrderList.EndLoad(); 
	return nCount;

}
void CHMSDailyFoodOrderCancel::OnPatientListDblClick(){
	
} 
void CHMSDailyFoodOrderCancel::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szIssueState = m_wndPatientList.GetItemText(nNewItem, 6);
	m_szDoctor = m_wndPatientList.GetItemText(nNewItem, 8);
	m_nDocumentNo = str2long(m_wndPatientList.GetItemText(nNewItem, 2));
	m_nOrderID = str2long(m_wndPatientList.GetItemText(nNewItem, 1));
	m_szPatientOrderDate = m_wndPatientList.GetItemText(nNewItem, 5);

	for(int i=0; i < m_wndPatientList.GetItemCount(); i++)
	{
		m_wndPatientList.SetItemBkColor(i, RGB(255, 255, 255), FALSE);
		m_wndPatientList.SetItemTextColor(i, RGB(0, 0, 0), FALSE);
	}

	m_wndPatientList.SetItemBkColor(nNewItem, RGB(0, 128, 192), FALSE);
	m_wndPatientList.SetItemTextColor(nNewItem, RGB(255, 255, 255), FALSE);

	OnRationListLoadData();
} 

int CHMSDailyFoodOrderCancel::OnPatientListIssueAll(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	int nMsg = ShowMessage(14);
	if(nMsg == IDNO)
		return 0;
	
	szSQL.Format(_T("SELECT hfso_status as status ") \
		_T("FROM hms_feefoodsheet ") \
		_T("WHERE hfso_orderid=%ld and hfso_ordertype='T' "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);

	if(m_szStatus != _T("A"))
		return -1;


	szSQL.Format(_T("UPDATE hms_feefood ") \
		_T("SET hfo_orderstatus='I', hfo_updatedby='%s', hfo_updateddate=systimestamp ") \
		_T("WHERE hfo_reforder_id=%ld AND hfo_orderstatus in('O','S','A') "),
		pMF->GetCurrentUser(), m_nOID);
	int ret = pMF->ExecSQL(szSQL);
	if(ret >= 0){
		OnPatientListLoadData();
	}
	return 0;
}


int CHMSDailyFoodOrderCancel::OnPatientListIssue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	int nMsg = ShowMessage(15);
	if(nMsg == IDNO)
		return 0;

	szSQL.Format(_T("SELECT hfso_status as status ") \
		_T("FROM hms_feefoodsheet ") \
		_T("WHERE hfso_orderid=%ld and hfso_ordertype='T' "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);


	if(m_szStatus != _T("A"))
		return -1;

	return 0;
}

int CHMSDailyFoodOrderCancel::OnPatientListRollback(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	if(m_szStatus != _T("A"))
		return -1;
	int nMsg = ShowMessage(16);
	if(nMsg == IDNO)
		return 0;

	//szSQL.Format(_T("UPDATE hms_feefood SET hfo_orderstatus='A', hfo_updatedby='%s', hfo_updateddate=systimestamp ") \
	//	_T("WHERE hfo_orderid=%ld AND hfo_orderstatus='I' AND hfo_payment<>'P'"),
	//	pMF->GetCurrentUser(), m_nPharmaOID);
	//int ret = pMF->ExecSQL(szSQL);
	//if(ret >= 0){
	//	OnPatientListLoadData();
	//}
	return 0;
}
int CHMSDailyFoodOrderCancel::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	
	
	if(m_wndRationList.GetItemCount() > 0){
		ShowMessageBox(_T("Ban phai xoa de muc truoc khi xoa benh nhan"));
		return 0;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return -1;
	m_nOID = ToLong(m_wndPatientList.GetItemText(nSel, 6));	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("SELECT hfso_status as status FROM hms_feefoodsheet WHERE hfso_orderid=%ld"), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);

	if(m_szStatus != _T("O"))
		return -1;

	szSQL.Format(_T("DELETE FROM hms_feefood WHERE hfo_orderid = %ld AND hfo_reforder_id=%ld "), m_nOrderID, m_nOID); 
	//_fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
		OnPatientListLoadData();
		OnOrderListLoadData();
 	}
	
	return 0;
} 
long CHMSDailyFoodOrderCancel::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere;
	CString szNewLine, szOldLine;

	szWhere.Format(_T(" and hfoc_retorder_id =%ld "), m_nOID);
	m_wndPatientList.BeginLoad(); 
	
	int nCount = 0, nIndex =1;
	szSQL.Format(_T(" SELECT distinct hfo_docno as docno,") \
_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
_T(" 	hfo_roomid||'.'||hfo_bedid as bedid,") \
_T(" 	trunc_date(hfo_orderdate) as orderdate, hfo_createdby ") \
_T(" FROM hms_feefood ") \
_T(" LEFT JOIN hms_feefoodcancel") \
_T(" ON(hfo_orderid=hfoc_orderid)") \
_T(" LEFT JOIN hms_patient ON(hfo_patientno=hp_patientno)") \
_T(" WHERE hfo_ordertype ='D' %s ORDER BY docno,orderdate "), szWhere);
	//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	long nDocumentNo;
	int n = -1;
	m_nTotalNumber =0;
	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	while(!rs.IsEOF()){
		rs.GetValue(_T("pname"), tmpStr);
		if(!m_szPatientName.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szPatientName)
				{
					if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
						rs.MoveNext();
						continue;
					}
				}

					
					if(!szSurName.IsEmpty() && szSurName != szSurName2){
						rs.MoveNext();
						continue;
					}
					if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
						rs.MoveNext();
						continue;
					}
			
		}

		rs.GetValue(_T("docno"), nDocumentNo);
		tmpStr.Format(_T("%d"), nIndex++);

		int nItem = m_wndPatientList.AddItems(
			tmpStr,
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
		
		szNewLine.Format(_T("%d"), nDocumentNo);
		if(szNewLine !=szOldLine && !szNewLine.IsEmpty()){
			m_nTotalNumber++;
			szOldLine = szNewLine;
		}

		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	if(n < 0)
		n = m_wndPatientList.GetItemCount();

	m_wndPatientList.SetCurSel(n);
	
	UpdateData(false);
	return nCount;
}
void CHMSDailyFoodOrderCancel::OnRationListDblClick(){
	
} 
void CHMSDailyFoodOrderCancel::OnRationListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 

int CHMSDailyFoodOrderCancel::OnRationListAddEntry(){
	/*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
		return 0;
	CHMSPatientFoodOrderEntry* newPopup = new CHMSPatientFoodOrderEntry(this, VM_ADD);
	newPopup->m_szCurrentOrderDate = m_szOrderTime;
	newPopup->m_szOrderDate = m_szOrderDate;
	newPopup->m_nOID = m_nOID;
	newPopup->m_szDoctor = pMF->m_szDoctor;
	newPopup->m_szBatchNo = m_szBatchNo;
	newPopup->ShowPopup(&m_wndRationList);*/
	return 0;
} 

int CHMSDailyFoodOrderCancel::OnRationListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szItemID, szType; 
	CRecord rs(&pMF->m_db);

	long nIDX;
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

	int nSel = m_wndRationList.GetCurSel();
	if(nSel < 0) return -1;
	
	
	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	int ret = 0;
	

	nIDX = str2long(m_wndRationList.GetItemText(nSel, 0));
	szType = m_wndRationList.GetItemText(nSel, 3);
	nOrderID = str2long(m_wndRationList.GetItemText(nSel, 7));
	szItemID = m_wndRationList.GetItemText(nSel, 8);
	

	szSQL.Format(_T("DELETE FROM hms_feefoodcancel WHERE hfoc_orderid=%ld and hfoc_itemid='%s' AND hfoc_type ='%s' and hfoc_status ='O' "), nOrderID, szItemID,szType); 
	_fmsg(_T("%s"), szSQL);
 	int res =  pMF->ExecSQL(szSQL); 
	if(res > 0){
		m_wndRationList.DeleteItem(nSel);
		ret += res;
	}	
	
 	if(ret >= 0){
		OnOrderListLoadData();
		if(m_wndRationList.GetItemCount() <=0){
			OnPatientListLoadData();
			OnOrderListLoadData();
		}
 	}
	return 0;
} 
int CHMSDailyFoodOrderCancel::OnRationListReturnRation(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szItemID, szType; 
	CRecord rs(&pMF->m_db);

	long nIDX;
	long nOrderID;
	if(m_szStatus == _T("O"))
		return -1;
	
	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString szMsg;
		szMsg.Format(_T("This order created by other user[%s]. Can not delete it"), m_szCreatedBy);
		ShowMessageBox(szMsg);
		return -1;
	}

	int nSel = m_wndRationList.GetCurSel();
	if(nSel < 0) return -1;
	
	
	
 	if(ShowMessageBox(_T("\x42\x1EA1n \x63\xF3 mu\x1ED1n h\x1EE7y su\x1EA5t \x103n \x63ho \x62\x1EC7nh nh\xE2n kh\xF4ng?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	int ret = 0;
	

	nIDX = str2long(m_wndRationList.GetItemText(nSel, 0));
	szType = m_wndRationList.GetItemText(nSel, 3);
	nOrderID = str2long(m_wndRationList.GetItemText(nSel, 7));
	szItemID = m_wndRationList.GetItemText(nSel, 8);
	

	szSQL.Format(_T("UPDATE hms_feefoodcancel  SET hfe_refstatus ='C' WHERE hfoc_orderid=%ld and hfoc_itemid='%s' AND hfoc_type ='%s' "), nOrderID, szItemID,szType); 
	_fmsg(_T("%s"), szSQL);
 	int res =  pMF->ExecSQL(szSQL);	
 	if(ret >= 0){
		OnOrderListLoadData();
 	}
	return 0;
} 
long CHMSDailyFoodOrderCancel::OnRationListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndRationList.BeginLoad(); 
	int nCount = 0, nIndex=1;

	szSQL.Format(_T(" SELECT hfl_name2 AS idx,") \
	_T("   hfoc_orderid   AS orderid,") \
	_T("   hfo_orderstatus, hfoc_status,") \
	_T("   hfl_feeid                                           AS feeid,") \
	_T("   hfl_name                                            AS name,") \
	_T("   hfoc_type                                           AS type,") \
	_T("   hfl_unit                                            AS unit,") \
	_T("   hfoc_unitprice                                      AS unitprice,") \
	_T("   SUM(hfoc_qtyorder)                                  AS qtyorder,") \
	_T("   SUM(hfoc_qtyissue -hfoc_qtyreverse)                 AS qtyissue,") \
	_T("   SUM((hfoc_qtyissue-hfoc_qtyreverse)*hfoc_unitprice) AS amount") \
	_T(" FROM hms_feefood") \
	_T(" LEFT JOIN hms_feefoodcancel") \
	_T(" ON(hfoc_orderid=hfo_orderid)") \
	_T(" LEFT JOIN hms_fee_list") \
	_T(" ON(hfoc_itemid          =hfl_feeid)") \
	_T(" WHERE hfo_docno         =%ld") \
	_T(" AND hfoc_retorder_id    =%ld") \
	_T(" AND trunc_date(hfo_orderdate)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
	_T(" GROUP BY hfoc_orderid,") \
	_T("   hfo_orderstatus,") \
	_T(" hfoc_status, ") \
	_T("   hfl_name2,") \
	_T("   hfl_feeid,") \
	_T("   hfl_name,") \
	_T("   hfl_unit,") \
	_T("   hfoc_type,") \
	_T("   hfoc_unitprice, hfe_refstatus") \
	_T(" ORDER BY hfoc_orderid,") \
	_T("   hfl_name2,") \
	_T("   hfl_name,") \
	_T("   hfl_unit, hfoc_type DESC "), m_nDocumentNo,  m_nOID, m_szPatientOrderDate);
//
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nItem = 0;
	CString szStatus;
	while(!rs.IsEOF()){
		rs.GetValue(_T("hfol_status"), szStatus);
		nItem = m_wndRationList.AddItems(
			rs.GetValue(_T("idx")),			
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 			
			rs.GetValue(_T("type")), 
			rs.GetValue(_T("qtyissue")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("feeid")),
			szStatus,
			NULL);

		if(szStatus == _T("C")){
			m_wndRationList.SetItemBkColor(nItem, RGB(200, 128, 0), false);
			m_wndRationList.SetItemTextColor(nItem, COLOR_WHITE, false);
		}

		rs.MoveNext();	
	}
	m_wndRationList.EndLoad(); 
	return nCount;
}
/*void CHMSDailyFoodOrderCancel::OnOrderNoChange(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnOrderNoSetfocus(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnOrderNoKillfocus(){
	
} */
int CHMSDailyFoodOrderCancel::OnOrderNoCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	
	if(GetMode() == VM_VIEW || GetMode() == VM_NONE){
		szSQL.Format(_T("SELECT HFOS_ORDERID ") \
			_T("FROM HMS_FOODORDERSHEET ") \
			_T("WHERE HFOS_SHEETNO='%s' and HFOS_DEPTID='%s' "), 
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
		rs.GetValue(_T("HFOS_ORDERID"), m_nOID);
		if(m_nOID > 0)
		{
			GetDataToScreen();
			m_wndOrderNo.SetFocus();
		}
		return 1;
	}
	return 0;
} 
void CHMSDailyFoodOrderCancel::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	static CString szFromDate, szToDate;
	OnOrderDateCheckValue();	
} 
/*void CHMSDailyFoodOrderCancelDialog::OnPatientNameChange(){
	
} */
/*void CHMSDailyFoodOrderCancelDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSDailyFoodOrderCancelDialog::OnPatientNameKillfocus(){
	
} */
int CHMSDailyFoodOrderCancel::OnPatientNameCheckValue(){
	OnPatientListLoadData();
	return 0;
} 

/*void CHMSDailyFoodOrderCancel::OnOrderDateChange(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnOrderDateSetfocus(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnOrderDateKillfocus(){
	
} */
int CHMSDailyFoodOrderCancel::OnOrderDateCheckValue(){
	UpdateData(true);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int n = CompareDate(m_szOrderDate, pMF->GetSysDate());
	
	if(n < -10 || n > 3)
		return -1;
	return 0;
} 
/*void CHMSDailyFoodOrderCancel::OnIssueDateChange(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnIssueDateSetfocus(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnIssueDateKillfocus(){
	
} */
int CHMSDailyFoodOrderCancel::OnIssueDateCheckValue(){
	return 0;
} 

/*void CHMSDailyFoodOrderCancel::OnStatusChange(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnStatusSetfocus(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnStatusKillfocus(){
	
} */
int CHMSDailyFoodOrderCancel::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSDailyFoodOrderCancel::OnPrintedChange(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnPrintedSetfocus(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnPrintedKillfocus(){
	
} */
int CHMSDailyFoodOrderCancel::OnPrintedCheckValue(){
	return 0;
} 
/*void CHMSDailyFoodOrderCancel::OnNoteChange(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnNoteSetfocus(){
	
} */
/*void CHMSDailyFoodOrderCancel::OnNoteKillfocus(){
	
} */
int CHMSDailyFoodOrderCancel::OnNoteCheckValue(){
	return 0;
} 
void CHMSDailyFoodOrderCancel::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSDailyFoodOrderCancel();
	
} 
void CHMSDailyFoodOrderCancel::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSDailyFoodOrderCancel();
} 
void CHMSDailyFoodOrderCancel::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSDailyFoodOrderCancel();
} 
void CHMSDailyFoodOrderCancel::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDailyFoodOrderCancel();
} 
void CHMSDailyFoodOrderCancel::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSDailyFoodOrderCancel();
} 
void CHMSDailyFoodOrderCancel::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szStatus;
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
		dlg.m_szDoctor = pMF->m_szDoctor;		
		if(dlg.DoModal() != IDOK)
			return;
		szSendOrderBy = dlg.m_szDoctor;
	}

	szSQL.Format(_T("SELECT hfos_orderstatus as status ") \
		_T("FROM hms_foodordersheet ") \
		_T("WHERE hfos_orderid=%ld "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	rs.GetValue(_T("status"), szStatus);
	_tprintf(_T("%s"), szStatus);
	if(szStatus == _T("O"))
	{
		pMF->BeginTransaction();
		szSQL.Format(_T("UPDATE hms_foodordersheet SET hfos_updateddate=sysdate,hfos_updatedby='%s', ") \
			_T("hfos_approveby='%s',hfos_orderstatus='S' ") \
			_T("WHERE hfos_orderid=%ld AND hfos_orderstatus='O' "), 
			pMF->GetCurrentUser(),szSendOrderBy, m_nOID);
		pMF->ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);
		szSQL.Format(_T("UPDATE hms_feefood SET hfo_orderstatus='S' ") \
			_T("WHERE hfo_reforder_id=%ld and hfo_ordertype='D' "), m_nOID);
		pMF->ExecSQL(szSQL);
		pMF->Commit();
	}
	else if( szStatus == _T("S"))
	{
		pMF->BeginTransaction();
		szSQL.Format(_T("UPDATE hms_foodordersheet SET hfos_updateddate=sysdate,hfos_updatedby='%s', ") \
			_T("hfos_approveby='%s',hfos_orderstatus='O' ") \
			_T("WHERE hfos_orderid=%ld AND hfos_orderstatus='S' AND trunc_date(hfos_updateddate)=trunc_date(sysdate) "), 
			pMF->GetCurrentUser(),szSendOrderBy, m_nOID);
		pMF->ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);
		szSQL.Format(_T("UPDATE hms_feefood SET hfo_orderstatus='O' ") \
			_T("WHERE hfo_reforder_id=%ld and hfo_ordertype='D' AND trunc_date(hfos_updateddate)=trunc_date(sysdate) "), m_nOID);		
		pMF->ExecSQL(szSQL);
		pMF->Commit();
	}

	GetDataToScreen();
} 
void CHMSDailyFoodOrderCancel::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderDate;

	if(m_szStatus == _T("O"))
	{
		ShowMessageBox(_T("Phi\x1EBFu tr\x1EA1ng th\xE1i \x111\x61ng m\x1EDF. \x42\x1EA1n ph\x1EA3i \x78\xE1\x63 nh\x1EADn g\x1EEDi phi\x1EBFu"));
		return;
	}

	szSQL.Format(_T("SELECT DISTINCT trunc_date(hfo_orderdate) as orderdate ") \
		_T(" FROM hms_feefoodcancel ") \
		_T(" LEFT  JOIN hms_feefood ON(hfo_orderid=hfoc_orderid) ") \
		_T(" WHERE hfoc_retorder_id =%d ") \
		_T(" ORDER BY  trunc_date(hfo_orderdate)"), m_nOID);
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("orderdate"), szOrderDate);

		OnPrintDeliverySummery(m_nOID, szOrderDate);
		OnPrintDelivery(m_nOID, szOrderDate);
		rs.MoveNext();
	}	
	
} 


int CHMSDailyFoodOrderCancel::OnOrderListPrintSheetPublicity(){
	return 0;
}
int CHMSDailyFoodOrderCancel::OnOrderListPrintSheetDate(){
	return 0;
}
int CHMSDailyFoodOrderCancel::OnAddHMSDailyFoodOrderCancel(){
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
int CHMSDailyFoodOrderCancel::OnEditHMSDailyFoodOrderCancel(){
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
	szSQL.Format(_T("SELECT count(*) FROM hms_feefood WHERE hfo_reforder_id= %ld "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndOrderDate.EnableWindow(false);
		m_wndNote.SetFocus();
	}
 	
	return 0;  
}
int CHMSDailyFoodOrderCancel::OnDeleteHMSDailyFoodOrderCancel(){
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
		ShowMessageBox(_T("Kh\xF4ng th\x1EC3 \x78\xF3\x61 phi\x1EBFu. \x42\x1EA1n ph\x1EA3i \x78\xF3\x61 h\x1EBFt \x62\x1EC7nh nh\xE2n tr\xEAn phi\x1EBFu!"));
		return -1;
	}
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	
	szSQL.Format(_T("DELETE FROM hms_foodordersheet WHERE hfos_orderid = %ld AND HFOS_ORDERSTATUS = 'O'"), m_nOID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		m_wndPatientList.DeleteAllItems();
		m_wndRationList.DeleteAllItems();
		m_wndOrderList.DeleteAllItems();
 		SetMode(VM_NONE); 
 	}
	return 0;
}
int CHMSDailyFoodOrderCancel::OnSaveHMSDailyFoodOrderCancel(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("AD_NEXTSEQUENCE('M_TRANSACTION_ID_ASQ') "));
		m_nOID = str2long(pMF->ExecDML(szSQL));	
		if(m_nOID <=0) return -1;		
		m_feefoodTbl.SetValue(_T("HFOS_ORDERID"), m_nOID);
 		szSQL = m_feefoodTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE HFOS_ORDERID=%ld "), m_nOID); 
 		szSQL = m_feefoodTbl.GetUpdateSQL(_T("hfos_createdby, hfos_createddate,hfos_approveddate,hfos_orderstatus"));
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 	
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW); 
		}
		else
		{
			GetDataToScreen();
			SetMode(VM_VIEW); 
			m_wndAddRation.SetFocus();
		}
 		
		
 	} 
 	return m_nOID; 
 	return 0; 
}
void CHMSDailyFoodOrderCancel::OnAddAutomaticSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Phi\x1EBFu \x111\xE3 g\x1EEDi. Kh\xF4ng th\x1EF1\x63 hi\x1EC7n \x111\x1B0\x1EE3\x63 t\xE1\x63 v\x1EE5 hi\x1EC7n th\x1EDDi"));
		return;
	}
	CHMSDailyFoodCancelPatientListDialog dlg(this);
	dlg.m_nOID = m_nOID;
	dlg.m_szOrderDate = m_szOrderDate;
	dlg.m_bHaucan = m_bHaucan;
	if(dlg.DoModal()==IDOK){
		GetDataToScreen();
	}
} 

int CHMSDailyFoodOrderCancel::OnCancelHMSDailyFoodOrderCancel(){
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
int CHMSDailyFoodOrderCancel::OnHMSDailyFoodOrderCancelListLoadData(){
	return 0;
}


void CHMSDailyFoodOrderCancel::RefreshData(){
	OnOrderListLoadData();
	OnPatientListLoadData();
}

void CHMSDailyFoodOrderCancel::LoadRationList(long nID){
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++){
		m_nOID = ToLong(m_wndPatientList.GetItemText(i, 6));
		if(m_nOID = nID)
		{
			m_wndPatientList.SetCurSel(i);
			break;
		}
	}
}

void CHMSDailyFoodOrderCancel::OnPrintDeliverySummery(long nTransactionID, LPCTSTR lpszOrderDate){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;	
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);	
	
	if(!rpt.Init(_T("Reports/HMS/TM_FOODORDERSUMMERYC.RPT")) )
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

	szSQL.Format(_T(" SELECT ") \
	_T("   foodid,") \
	_T("   foodname,") \
	_T("   unitprice, ") \
	_T("   SUM(FoodQtyS/2) AS FoodQtyS,") \
	_T("   SUM(FoodQtyT/2) AS FoodQtyT,") \
	_T("   SUM(FoodQtyC/2) AS FoodQtyC,") \
	_T("   SUM(QUAN/2) AS QUAN,") \
	_T("   SUM(BAOHIEM/2) AS BAOHIEM,") \
	_T("   SUM(DICHVU/2) AS DICHVU,") \
	_T("   SUM(CHINHSACH/2) AS CHINHSACH,") \
	_T("   SUM(HUUTRI/2) AS HUUTRI,") \
	_T("   SUM(BAN/2) AS BAN,") \
	_T("   SUM((BAN+BAOHIEM+QUAN+DICHVU+CHINHSACH+HUUTRI)/2) AS TONG ") \
	_T(" FROM") \
	_T("   ( SELECT DISTINCT hfo_docno AS docno,") \
	_T("     hfl_name2                 AS foodid,") \
	_T("     hfl_name				   AS foodname,") \
	_T("	 hfoc_unitprice			   AS unitprice, ") \
	_T("     CASE ") \
	_T("		WHEN hfoc_type = 'S' ") \
	_T("		THEN hfoc_qtyorder ") \
	_T("		ELSE 0 ") \
	_T("	 END AS FoodQtyS,    ") \
	_T("     CASE ") \
	_T("		WHEN hfoc_type = 'T' ") \
	_T("		THEN hfoc_qtyorder ") \
	_T("		ELSE 0 ") \
	_T("	 END AS FoodQtyT,    ") \
	_T("     CASE ") \
	_T("		WHEN hfoc_type = 'C' ") \
	_T("		THEN hfoc_qtyorder ") \
	_T("		ELSE 0 ") \
	_T("	 END AS FoodQtyC,   ") \
	_T("     CASE") \
	_T("       WHEN ho_id IN(2,11,4,5,6,12)") \
	_T("       THEN hfoc_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS BAOHIEM,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='S'") \
	_T("       THEN hfoc_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS DICHVU,") \
	_T("     CASE") \
	_T("       WHEN ho_id IN(1,10)") \
	_T("       THEN hfoc_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS QUAN,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='P'") \
	_T("       THEN hfoc_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS CHINHSACH,") \
	_T("     CASE") \
	_T("       WHEN ho_id ='8'") \
	_T("       THEN hfoc_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS BAN,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='H'") \
	_T("       THEN hfoc_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS HUUTRI") \
	_T("   FROM hms_patient") \
	_T("   LEFT JOIN hms_doc") \
	_T("   ON(hd_patientno=hp_patientno)") \
	_T("   LEFT JOIN hms_feefood") \
	_T("   ON(hfo_docno=hd_docno)") \
	_T("   LEFT JOIN hms_feefoodcancel") \
	_T("   ON(hfo_orderid=hfoc_orderid)") \
	_T("   LEFT JOIN hms_fee_list") \
	_T("   ON(hfoc_itemid=hfl_feeid)") \
	_T("   LEFT JOIN hms_treatment_record") \
	_T("   ON(htr_docno =hfo_docno") \
	_T("   AND htr_idx  =hfo_refidx)") \
	_T("   LEFT JOIN hms_object") \
	_T("   ON(CAST(ho_id AS INTEGER)=hd_object)") \
	_T("   WHERE hfoc_retorder_id    =%ld") \
	_T("   AND trunc_date(hfo_orderdate) = to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
	_T("   )") \
	_T(" GROUP BY foodid,") \
	_T("   foodname,") \
	_T("   unitprice ") \
	_T(" ORDER BY ") \
	_T("   foodid"), nTransactionID, lpszOrderDate);
	
	_fmsg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);
	CReportSection* rptDetail;
	CString szItemID;
	long nItem =0;
	double nBH, nDV, nCS, nQUAN, nHUU, nBAN, nTotal, nTotal1, nQty;
	double nTotalBH, nTotalDV, nTotalCS, nTotalQUAN,nTotalBAN, nTotalHUU, nSang,nTrua, nToi;
	double nPrice =0, nAmount=0, nTotalAmount =0, nTotalAmount1 =0;

	int i = 1;

	nSang=nTrua = nToi =0;
	nBH=nDV= nCS= nQUAN=nHUU=nBAN=nTotal=nTotal1 =0;
	nTotalBH=nTotalDV=nTotalCS=nTotalQUAN=nTotalBAN=nTotalHUU=0;

	CString szNewLine, szOldLine;
	while(!rs.IsEOF())
	{	
		rptDetail = rpt.AddDetail();
		nItem++;		
		tmpStr.Format(_T("%ld"), nItem);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("foodname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);		
		rs.GetValue(_T("foodid"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("foodqtys"), tmpStr);
		rptDetail->SetValue(_T("4"),tmpStr);
		rs.GetValue(_T("foodqtyt"), tmpStr);
		rptDetail->SetValue(_T("5"),tmpStr);
		rs.GetValue(_T("foodqtyc"), tmpStr);
		rptDetail->SetValue(_T("6"),tmpStr);
		rs.GetValue(_T("UnitPrice"), tmpStr);
		rptDetail->SetValue(_T("7"),tmpStr);

		rs.GetValue(_T("QUAN"), nQUAN);
		tmpStr.Format(_T("%0.1f"), nQUAN);		
		nTotalQUAN += nQUAN;
		rptDetail->SetValue(_T("8"),tmpStr);

		rs.GetValue(_T("HUUTRI"), nHUU);
		tmpStr.Format(_T("%0.1f"), nHUU);		
		nTotalHUU += nHUU;
		rptDetail->SetValue(_T("9"),tmpStr);		

		rs.GetValue(_T("CHINHSACH"), nCS);
		tmpStr.Format(_T("%0.1f"), nCS);		
		nTotalCS +=nCS;
		rptDetail->SetValue(_T("10"),tmpStr);
		
		rs.GetValue(_T("BAOHIEM"), nBH);
		tmpStr.Format(_T("%0.1f"), nBH);
		nTotalBH += nBH;		
		rptDetail->SetValue(_T("11"),tmpStr);
		
		rs.GetValue(_T("DICHVU"), nDV);
		tmpStr.Format(_T("%0.1f"), nDV);
		nTotalDV += nDV;
		
		rptDetail->SetValue(_T("12"),tmpStr);
		
		rs.GetValue(_T("BAN"), nBAN);
		tmpStr.Format(_T("%0.1f"), nBAN);
		nTotalBAN += nBAN;		
		rptDetail->SetValue(_T("13"),tmpStr);
		
		rs.GetValue(_T("TONG"), nQty);		
		tmpStr.Format(_T("%0.1f"), nQty);
		nTotal += nQty;
		rptDetail->SetValue(_T("14"),tmpStr);

		rs.GetValue(_T("UnitPrice"), nPrice);
		nAmount = (nPrice*nQty)*2;
		nTotalAmount += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("15"),tmpStr);
		
		rs.MoveNext();
	}
	
		
	if(nTotalAmount + nTotalAmount1 > 0){
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("s4"), nSang);
		rptDetail->SetValue(_T("s5"), nTrua);
		rptDetail->SetValue(_T("s6"), nToi);
		rptDetail->SetValue(_T("s8"), nTotalQUAN);
		rptDetail->SetValue(_T("s9"), nTotalHUU);
		rptDetail->SetValue(_T("s10"), nTotalCS);
		rptDetail->SetValue(_T("s11"), nTotalBH);
		rptDetail->SetValue(_T("s12"), nTotalDV);
		rptDetail->SetValue(_T("s13"), nTotalBAN);
		rptDetail->SetValue(_T("s14"), nTotal);
		FormatCurrency(nTotalAmount, tmpStr);
		rptDetail->SetValue(_T("s15"), tmpStr);
	}

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
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

void CHMSDailyFoodOrderCancel::OnPrintDelivery(long nTransactionID, LPCTSTR lpszOrderDate){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;	
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	
	if(!rpt.Init(_T("Reports/HMS/TM_FOODORDERC.RPT")) )
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

	szSQL.Format(_T(" SELECT docno,") \
	_T("   foodid,") \
	_T("   orderid,") \
	_T("   recordno,") \
	_T("   sang,") \
	_T("   trua,") \
	_T("   chieu,") \
	_T("   pname,") \
	_T("   age,") \
	_T("   roomid,") \
	_T("   bedid,") \
	_T("   unitprice, ") \
	_T("   SUM(BAOHIEM) AS BAOHIEM,") \
	_T("   SUM(QUAN) AS QUAN,") \
	_T("   SUM(DICHVU) AS DICHVU,") \
	_T("   SUM(CHINHSACH) AS CHINHSACH,") \
	_T("   SUM(HUUTRI) AS HUUTRI,") \
	_T("   SUM(BAN) AS BAN,") \
	_T("   SUM(BAOHIEM+QUAN+DICHVU+CHINHSACH+HUUTRI+BAN) AS TONG ") \
	_T(" FROM") \
	_T("   ( SELECT DISTINCT hfo_docno AS docno,") \
	_T("     hfl_name2                 AS foodid,") \
	_T("     hfo_orderid               AS orderid,") \
	_T("     htr_recordno              AS recordno,") \
	_T("     hfo_orderdate             AS orderdate,") \
	_T("   CASE") \
	_T("       WHEN hfoc_type ='S'") \
	_T("       THEN hfl_name2") \
	_T("       ELSE NULL") \
	_T("     END AS SANG,") \
	_T("   CASE") \
	_T("       WHEN hfoc_type ='T'") \
	_T("       THEN hfl_name2") \
	_T("       ELSE NULL") \
	_T("     END AS TRUA,") \
	_T("     CASE") \
	_T("       WHEN hfoc_type ='C'") \
	_T("       THEN hfl_name2") \
	_T("       ELSE NULL") \
	_T("     END          AS CHIEU,") \
	_T("     trim(hp_surname") \
	_T("     ||' '") \
	_T("     ||hp_midname") \
	_T("     ||' '") \
	_T("     ||hp_firstname)                                AS pname,") \
	_T("     hms_getage( trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("     hfo_roomid                                     AS roomid,") \
	_T("     hfo_bedid                                      AS bedid,") \
	_T("	 hfoc_unitprice									AS unitprice, ") \
	_T("     CASE") \
	_T("       WHEN ho_id IN(2,4,5,6,11,12)") \
	_T("       THEN hfoc_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS BAOHIEM,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='S'") \
	_T("       THEN hfoc_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS DICHVU,") \
	_T("     CASE") \
	_T("       WHEN ho_id IN(1,10)") \
	_T("       THEN hfoc_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS QUAN,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='P'") \
	_T("       THEN hfoc_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS CHINHSACH,") \
	_T("     CASE") \
	_T("       WHEN ho_id ='8'") \
	_T("       THEN hfoc_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS BAN,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='H'") \
	_T("       THEN hfoc_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS HUUTRI") \
	_T("   FROM hms_patient") \
	_T("   LEFT JOIN hms_doc") \
	_T("   ON(hd_patientno=hp_patientno)") \
	_T("   LEFT JOIN hms_feefood") \
	_T("   ON(hfo_docno=hd_docno)") \
	_T("   LEFT JOIN hms_feefoodcancel") \
	_T("   ON(hfo_orderid=hfoc_orderid)") \
	_T("   LEFT JOIN hms_fee_list") \
	_T("   ON(hfoc_itemid=hfl_feeid)") \
	_T("   LEFT JOIN hms_treatment_record") \
	_T("   ON(htr_docno =hfo_docno") \
	_T("   AND htr_idx  =hfo_refidx)") \
	_T("   LEFT JOIN hms_object") \
	_T("   ON(CAST(ho_id AS INTEGER)=hd_object)") \
	_T("   WHERE hfoc_retorder_id    =%ld") \
	_T("   AND trunc_date(hfo_orderdate) = to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
	_T("   )") \
	_T(" GROUP BY docno,") \
	_T("   foodid,") \
	_T("   orderid,") \
	_T("   recordno,") \
	_T("   orderdate,") \
	_T("   pname,") \
	_T("   age,") \
	_T("   sang,") \
	_T("   trua,") \
	_T("   chieu,") \
	_T("   roomid,") \
	_T("   unitprice, ") \
	_T("   bedid") \
	_T(" ORDER BY roomid,") \
	_T("   bedid,") \
	_T("   pname,") \
	_T("   docno "), nTransactionID, lpszOrderDate);
	
	rs.ExecSQL(szSQL);
	CReportSection* rptDetail;
	CString szItemID;
	long nItem =0;
	double nBH, nDV, nCS, nQUAN, nHUU, nBAN, nTotal, nTotal1, nQtyTmp;
	double nTotalBH, nTotalDV, nTotalCS, nTotalQUAN,nTotalBAN, nTotalHUU, nSang, nTrua, nToi;
	double nQty[15];
	double nPrice =0, nAmount=0, nTotalAmount =0, nTotalAmount1 =0, nTotalQty=0;
	for(int i= 0; i< 15; i++){
		nQty[i] = 0;
	}

	int i = 1;

	nSang = nTrua = nToi =0;
	nBH=nDV= nCS= nQUAN=nHUU=nBAN=nTotal=nTotal1 =0;
	nTotalBH=nTotalDV=nTotalCS=nTotalQUAN=nTotalBAN=nTotalHUU=0;
	
	CString szNewLine, szOldLine;
	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("docno"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			rptDetail = rpt.AddDetail();
			nItem++;
			nTotal=nTotal1=0;
			nQty[7]=nQty[8]=nQty[9]=nQty[10]=nQty[11]=nQty[12]=0;
			tmpStr.Format(_T("%ld"), nItem);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("pname"), tmpStr);		
			rptDetail->SetValue(_T("2"), tmpStr);		
			tmpStr.Format(_T("%s.%s"), rs.GetValue(_T("roomid")),rs.GetValue(_T("bedid")));
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("RecordNo"), tmpStr);
			rptDetail->SetValue(_T("4"),tmpStr);			
			
			//tmpStr.Format(_T("%0.1f"), nQUAN);
			rs.GetValue(_T("QUAN"), nQtyTmp);
			tmpStr.Empty();
			if(nQtyTmp > 0)
			{
				nQUAN += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}

			rptDetail->SetValue(_T("8"),tmpStr);

			rs.GetValue(_T("HUUTRI"), nQtyTmp);
			tmpStr.Empty();
			if(nQtyTmp > 0) 
			{
				nHUU += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}
			rptDetail->SetValue(_T("9"),tmpStr);		

			rs.GetValue(_T("CHINHSACH"), nQtyTmp);		
			//tmpStr.Format(_T("%0.1f"), nCS);		
			tmpStr.Empty();
			if(nQtyTmp > 0){
				nCS += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}
			rptDetail->SetValue(_T("10"),tmpStr);
			
			rs.GetValue(_T("BAOHIEM"), nQtyTmp);		
			//tmpStr.Format(_T("%0.1f"), nBH);		
			tmpStr.Empty();
			if(nQtyTmp > 0) {
				nBH += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}
			rptDetail->SetValue(_T("11"),tmpStr);
			
			rs.GetValue(_T("DICHVU"), nQtyTmp);		
			//tmpStr.Format(_T("%0.1f"), nDV);		
			tmpStr.Empty();
			if(nQtyTmp > 0) {
				nDV += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}
			rptDetail->SetValue(_T("12"),tmpStr);

			rs.GetValue(_T("BAN"), nQtyTmp);		
			//tmpStr.Format(_T("%0.1f"), nBAN);		
			tmpStr.Empty();
			if(nQtyTmp > 0) {
				nBAN += nQtyTmp;
				tmpStr.Format(_T("%s"), _T("X"));
			}
			rptDetail->SetValue(_T("13"),tmpStr);

			nAmount =0;
			
			szOldLine = szNewLine;
		}		
		
		rs.GetValue(_T("sang"), tmpStr);			
		if(!tmpStr.IsEmpty()){
			rptDetail->SetValue(_T("5"),tmpStr);
			nSang ++;
		}

		rs.GetValue(_T("trua"), tmpStr);			
		if(!tmpStr.IsEmpty()){
			rptDetail->SetValue(_T("6"),tmpStr);
			nTrua ++;
		}
		
		rs.GetValue(_T("chieu"), tmpStr);
		if(!tmpStr.IsEmpty()){
			rptDetail->SetValue(_T("7"),tmpStr);
			nToi ++;
		}

		rs.GetValue(_T("UnitPrice"), nPrice);
		nAmount += nPrice;
		nTotalAmount +=nPrice;
	
				
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("14"),tmpStr);		
		rs.MoveNext();
	}
	
	
	if(nTotalAmount > 0){
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("s5"), nSang);
		rptDetail->SetValue(_T("s6"), nTrua);		
		rptDetail->SetValue(_T("s7"), nToi);
		rptDetail->SetValue(_T("s8"), nQUAN);
		rptDetail->SetValue(_T("s9"), nHUU);
		rptDetail->SetValue(_T("s10"), nCS);
		rptDetail->SetValue(_T("s11"), nBH);
		rptDetail->SetValue(_T("s12"), nDV);
		rptDetail->SetValue(_T("s13"), nBAN);
		FormatCurrency(nTotalAmount, tmpStr);
		rptDetail->SetValue(_T("s14"), tmpStr);
	}

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
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

int CHMSDailyFoodOrderCancel::OnExportOrderDeliveryRation(){
	return 0;
}
int CHMSDailyFoodOrderCancel::OnOrderListPrintDeliveryRation()
{	
	return 0;
}

void CHMSDailyFoodOrderCancel::OnAddRationSelect(){
	OnRationListAddEntry();
}

void CHMSDailyFoodOrderCancel::OnPrintDeliveryRationsSelect(){
	
	//OnOrderListPrintDeliveryRation();
	/*CPrintForms printer;
	printer.PM_PrintDrugDeliveryOrder(m_nOID);*/
}

void CHMSDailyFoodOrderCancel::Refresh(long nTransactionID, long nDocumentNo){
	m_nTransactionID = nTransactionID;
	m_nDocumentNo = nDocumentNo;
	OnPatientListLoadData();
	OnOrderListLoadData();
	OnRationListLoadData();
	if(m_wndOrderList.GetItemCount() > 0 && m_szStatus == _T("O")){
		m_wndSend.EnableWindow(TRUE);
		m_wndPrint.EnableWindow(TRUE);
		m_wndPrintDeliveryRations.EnableWindow(TRUE);
	}	
}

long CHMSDailyFoodOrderCancel::GetTransactionID(int nStorageID)
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

int CHMSDailyFoodOrderCancel::OnChangeRation(){	

	return 0;
}