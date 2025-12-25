#include "HMSDailyFoodOrder.h"
#include "MainFrm.h"
#include "HMSDailyFoodOrderList.h"
#include "HMSConfirmDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "HMSPatientFoodOrderEntry.h"
#include "HMSDailyFoodPatientListDialog.h"
#include "HMSFoodModifyItemDialog.h"

static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListDeleteItem();
} 

static int _OnOrderListPrintDeliveryRationFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListPrintDeliveryRation();
}

static int _OnOrderListAddFromServicePkgFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListAddFromServicePkg();
}
static int _OnOrderListAddFromServiceFamilyPkgFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListAddFromServiceFamilyPkg();
}
static int _OnOrderListPrintPhieuAnSangFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder*)pWnd)->OnPhieuAnMienPhi();
}

static int	_OnExportOrderDeliveryRationFnc(CWnd *pWnd){
	return	((CHMSDailyFoodOrder*)pWnd)->OnExportOrderDeliveryRation();
}
static int _OnOrderListPrintSheetDateFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListPrintSheetDate();
}
static int _OnOrderListPrintSheetpublicityFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnOrderListPrintSheetPublicity();
}

static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodOrder*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 

static int _OnPatientListIssueAllFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnPatientListIssueAll();
} 

static int _OnPatientListIssueFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnPatientListIssue();
} 

static int _OnPatientListRollbackFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnPatientListRollback();
} 

static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnRationListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder*)pWnd)->OnRationListLoadData();
} 
static void _OnRationListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder*)pWnd)->OnRationListDblClick();
} 
static void _OnRationListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodOrder*)pWnd)->OnRationListSelectChange(nOldItem, nNewItem);
} 
static int _OnRationListAddEntryFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnRationListAddEntry();
} 

static int _OnRationListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnRationListDeleteItem();
} 
static int _OnRationListReturnFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnRationListReturnRation();
}


static int _OnChangeRationFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnChangeRation();
}

/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnFindSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnIssueDateChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnIssueDateChange();
} */
/*static void _OnIssueDateSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnIssueDateSetfocus();} */ 
/*static void _OnIssueDateKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnIssueDateKillfocus();
} */
static int _OnIssueDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnIssueDateCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnPrintedChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnPrintedChange();
} */
/*static void _OnPrintedSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnPrintedSetfocus();} */ 
/*static void _OnPrintedKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnPrintedKillfocus();
} */
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrderDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnPatientNameCheckValue();
} 
static int _OnPrintedCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnPrintedCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodOrder *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintDeliveryRationsSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnPrintDeliveryRationsSelect();
} 
static void _OnAddRationSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnAddRationSelect();
} 
static void _OnAddAutomaticSelectFnc(CWnd *pWnd){
	CHMSDailyFoodOrder *pVw = (CHMSDailyFoodOrder *)pWnd;
	pVw->OnAddAutomaticSelect();
} 
static int _OnAddHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnAddHMSDailyFoodOrder();
} 
static int _OnEditHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnEditHMSDailyFoodOrder();
} 
static int _OnDeleteHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnDeleteHMSDailyFoodOrder();
} 
static int _OnSaveHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnSaveHMSDailyFoodOrder();
} 
static int _OnCancelHMSDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodOrder*)pWnd)->OnCancelHMSDailyFoodOrder();
} 
//CHMSDailyFoodOrder::CHMSDailyFoodOrder(CWnd *pParent)
CHMSDailyFoodOrder::CHMSDailyFoodOrder()
{
	m_nDlgWidth = 1024;
	m_nDlgHeight = 805;
	SetDefaultValues();
	m_szOrderNo.Empty();
	m_bHaucan= false;
}
CHMSDailyFoodOrder::~CHMSDailyFoodOrder(){
}
void CHMSDailyFoodOrder::OnCreateComponents(){	
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 500, 120);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 505, 5, 1000, 205);
	m_wndRationInformation.Create(this, _T("Food Informations"), 505, 240, 1000, 610);
	m_wndGroupListRation.Create(this, _T("Food Type List"), 5, 155, 500, 610);
	m_wndOrderList.Create(this, 10, 180, 495, 605);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 510, 210, 620, 235);
	m_wndPatientName.Create(this, 625, 210, 825, 235); 
	m_wndFind.Create(this, _T("&Find"), 830, 210, 900, 235);
	m_wndTotalNumber.Create(this,920, 210, 1000, 235); 
	m_wndPatientList.Create(this, 510, 30, 1000, 200);
	m_wndRationList.Create(this, 510, 265, 1000, 605);
	m_wndOrderNoLabel.Create(this, _T("Order ID"), 10, 30, 120, 55);
	m_wndOrderNo.Create(this,125, 30, 245, 55);
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 60, 120, 85);
	m_wndOrderDate.Create(this,125, 60, 245, 85);
	m_wndIssueDateLabel.Create(this, _T("Issue Date"), 250, 60, 325, 85);
	m_wndIssueDate.Create(this,330, 60, 495, 85);
	m_wndStatusLabel.Create(this, _T("Status"), 250, 30, 325, 55);
	m_wndStatus.Create(this,330, 30, 400, 55); 	
	m_wndPrimary.Create(this, _T("Primary"), 405, 30, 495, 55);

	m_wndNoteLabel.Create(this, _T("Note"), 10, 90, 120, 115);
	m_wndNote.Create(this,125, 90, 400, 115);	
	m_wndHaucan.Create(this, _T("BA hậu cần"), 405, 90, 495, 115);
	m_wndAdd.Create(this, _T("&Add Sheet"), 15, 125, 105, 150);
	m_wndEdit.Create(this, _T("&Edit"), 110, 125, 200, 150);
	m_wndDelete.Create(this, _T("&Delete"), 205, 125, 295, 150);
	m_wndSave.Create(this, _T("&Save"), 300, 125, 390, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 395, 125, 485, 150);
	m_wndAddRation.Create(this, _T("Add Ration"), 690, 615, 790, 640);
	m_wndAddAutomatic.Create(this, _T("Automatic"), 505, 615, 625, 640);
	m_wndSend.Create(this, _T("&Send"), 795, 615, 895, 640);
	m_wndPrint.Create(this, _T("&Preview"), 900, 615, 1000, 640);
}
void CHMSDailyFoodOrder::OnInitializeComponents(){
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
	m_wndOrderList.InsertColumn(3, _T("Sáng"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(4, _T("Trưa"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(5, _T("Tối"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(6, _T("Qty"), CFMT_MONEY, 40);	
	m_wndOrderList.InsertColumn(7, _T("Price"), CFMT_MONEY, 70);
	m_wndOrderList.InsertColumn(8, _T("Amount"), CFMT_MONEY, 80);
	m_wndOrderList.InsertColumn(9, _T("ItemID"), CFMT_TEXT, 0);	
	m_wndOrderList.InsertColumn(10, _T("GroupID"), CFMT_TEXT, 0);
	m_wndOrderList.SetSortHeader(false);
	m_wndOrderList.GetHeaderControl()->SetItemHeight(2);
	m_wndOrderList.GetHeaderControl()->MergeCell(_T("Số suất"), 0, 3, 1, 6, true);
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
	m_wndPatientList.InsertColumn(10, _T("VipA"), CFMT_TEXT, 30);

	m_wndRationList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndRationList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 220);
	m_wndRationList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 60);	
	m_wndRationList.InsertColumn(3, _T("Type"), CFMT_TEXT, 40);	
	m_wndRationList.InsertColumn(4, _T("Qty"), CFMT_MONEY, 40);	
	m_wndRationList.InsertColumn(5, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndRationList.InsertColumn(6, _T("Amount"), CFMT_MONEY, 80);
	m_wndRationList.InsertColumn(7, _T("Orderid"), CFMT_NUMBER, 0);	//product_id
	m_wndRationList.InsertColumn(8, _T("ItemID"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndRationList.InsertColumn(9, _T("Status"), CFMT_TEXT, 0);
	//m_wndRationList.GetHeaderControl()->SetItemHeight(2);
	
	
	m_feefoodTbl.SetTableName(_T("HMS_FOODORDERSHEET"));
	m_feefoodTbl.AddField(_T("HFOS_ORDERID"), dfLong); 
	m_feefoodTbl.AddField(_T("HFOS_CREATEDBY"), dfText, 15); 
	m_feefoodTbl.AddField(_T("HFOS_CREATEDDATE"), dfDateTime); 
	m_feefoodTbl.AddField(_T("HFOS_UPDATEDBY"), dfText, 15); 
	m_feefoodTbl.AddField(_T("HFOS_UPDATEDDATE"), dfDateTime); 	
	m_feefoodTbl.AddField(_T("HFOS_DEPTID"), dfText, 7); 
	m_feefoodTbl.AddField(_T("HFOS_ORDERTYPE"), dfText, 1);	
	m_feefoodTbl.AddField(_T("HFOS_ORDERDATE"), dfDateTime);
	m_feefoodTbl.AddField(_T("HFOS_ORDERSTATUS"), dfText, 1); 
	m_feefoodTbl.AddField(_T("HFOS_APPROVEDATE"), dfDateTime); 
	m_feefoodTbl.AddField(_T("HFOS_APPROVEBY"), dfText, 32); 
	m_feefoodTbl.AddField(_T("HFOS_SHEETNO"), dfText, 65);
	m_feefoodTbl.AddField(_T("HFOS_DESCRIPTION"), dfText, 254);
	m_feefoodTbl.AddField(_T("HFOS_ISPRIMARY"), dfText, 1);
	m_feefoodTbl.AddField(_T("HFOS_DEPTTYPE"), dfText, 3);

}
void CHMSDailyFoodOrder::OnSetWindowEvents(){
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.SetWindowText(_T("Order Information"));
	
	m_wndOrderList.AddEvent(1, _T("Thêm báo ăn cho bệnh nhân dịch vụ"), _OnOrderListAddFromServicePkgFnc);
	m_wndOrderList.AddEvent(3, _T("Thêm báo ăn cho người nhà"), _OnOrderListAddFromServiceFamilyPkgFnc);
	m_wndOrderList.AddEvent(4, _T("In phiếu ăn sáng miễn phí"), _OnOrderListPrintPhieuAnSangFnc);

	m_wndOrderList.AddEvent(2, _T("In phiếu báo ăn"), _OnOrderListPrintDeliveryRationFnc);


	//m_wndOrderList.AddEvent(2, _T("Export Delivery Rations"), _OnExportOrderDeliveryRationFnc);
	//m_wndOrderList.AddEvent(3, _T("Print Sheet By Date"), _OnOrderListPrintSheetDateFnc);
	////m_wndOrderList.AddEvent(4, _T("Print shelt publicity Rations"), _OnOrderListPrintSheetpublicityFnc);
	//m_wndOrderList.AddEvent(0, _T("-"), NULL);
	//m_wndOrderList.AddEvent(5, _T("View Detail"), _OnOrderListDeleteItemFnc);

	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	
	
	m_wndPatientList.SetWindowText(_T("Patient List"));
	m_wndPatientList.AddEvent(1, _T("Cắt ngày ăn"), _OnPatientListIssueAllFnc);
	/*
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(2, _T("Issue"), _OnPatientListIssueFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(3, _T("DMO_Rollback"), _OnPatientListRollbackFnc);
	*/

	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(4, _T("Delete Patient"), _OnPatientListDeleteItemFnc);

	m_wndRationList.SetEvent(WE_SELCHANGE, _OnRationListSelectChangeFnc);
	m_wndRationList.SetEvent(WE_LOADDATA, _OnRationListLoadDataFnc);
	m_wndRationList.SetEvent(WE_DBLCLICK, _OnRationListDblClickFnc);
	m_wndRationList.SetWindowText(_T("Ration List"));
	m_wndRationList.AddEvent(1, _T("Add Ration"), _OnRationListAddEntryFnc, 0, VK_F2);
	m_wndRationList.AddEvent(0, _T("-"), NULL);
	m_wndRationList.AddEvent(2, _T("Delete Ration"), _OnRationListDeleteItemFnc, 0, VK_DELETE);
	m_wndRationList.AddEvent(0, _T("-"), NULL);
	m_wndRationList.AddEvent(3, _T("Cancel Ration"), _OnRationListReturnFnc);
	
	m_wndRationList.AddEvent(0, _T("-"), NULL);
	m_wndRationList.AddEvent(4, _T("Change Ration"), _OnChangeRationFnc);

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
void CHMSDailyFoodOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusDesc);
	DDX_Text(pDX, m_wndTotalNumber.GetDlgCtrlID(), m_nTotalNumber);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Check(pDX, m_wndPrimary.GetDlgCtrlID(), m_bPrimary);
	DDX_Check(pDX, m_wndHaucan.GetDlgCtrlID(), m_bHaucan);
}
void CHMSDailyFoodOrder::GetDataToScreen(){
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
		_T("HFOS_CREATEDBY as createdby, ") \
		_T("HFOS_ISPRIMARY as isprimary, HFOS_DEPTTYPE ") \
		_T("FROM HMS_FOODORDERSHEET ") \
		_T("WHERE HFOS_ORDERID=%ld and HFOS_DEPTID='%s' "), 
		m_nOID, pMF->m_szDept);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("createdby"), m_szCreatedBy);
		rs.GetValue(_T("orderdate"), m_szOrderDate);
		rs.GetValue(_T("issuedate"), m_szIssueDate);
		m_szOrderTime = m_szOrderDate.Left(10);
		rs.GetValue(_T("description"), m_szNote);
		rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("orderno"), m_szBatchNo);
		rs.GetValue(_T("sheetNo"), m_szOrderNo);
		//m_szOrderNo = m_szBatchNo;
		m_szStatusDesc = pMF->GetStatusString(m_szStatus);
		if(m_szStatus == _T("O") || m_szStatus==_T("S"))
			m_szIssueDate.Empty();		

		CString tmpStr;
		rs.GetValue(_T("isprimary"), tmpStr);
		m_bPrimary = FALSE;
		if(tmpStr == _T("Y"))
		{
			m_bPrimary = TRUE;
		}
		rs.GetValue(_T("hfos_depttype"), tmpStr);
		m_bHaucan = FALSE;
		
		if(tmpStr == _T("HC"))
		{
			m_bHaucan = TRUE;

		}
		m_wndOrderList.SetMenuState(1, m_bHaucan);

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
void CHMSDailyFoodOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	
	//m_feefoodTbl.SetValue(_T("HFOS_ORDERID"), dfLong); 
	m_feefoodTbl.SetValue(_T("HFOS_CREATEDBY"), pMF->GetCurrentUser()); 
	m_feefoodTbl.SetValue(_T("HFOS_CREATEDDATE"), pMF->GetSysDateTime()); 
	m_feefoodTbl.SetValue(_T("HFOS_UPDATEDBY"), pMF->GetCurrentUser()); 
	m_feefoodTbl.SetValue(_T("HFOS_UPDATEDDATE"), pMF->GetSysDateTime()); 	
	m_feefoodTbl.SetValue(_T("HFOS_DEPTID"), pMF->GetDepartmentID()); 
	m_feefoodTbl.SetValue(_T("HFOS_ORDERTYPE"), _T("F"));	
	m_feefoodTbl.SetValue(_T("HFOS_ORDERDATE"), m_szOrderDate);
	m_feefoodTbl.SetValue(_T("HFOS_ORDERSTATUS"), m_szStatus); 
	//m_feefoodTbl.SetValue(_T("HFOS_APPROVEDATE"), dfDateTime); 
	m_feefoodTbl.SetValue(_T("HFOS_APPROVEBY"), _T("")); 
	m_feefoodTbl.SetValue(_T("HFOS_SHEETNO"), m_szOrderNo); 
	m_feefoodTbl.SetValue(_T("HFOS_DESCRIPTION"), m_szNote);
	m_feefoodTbl.SetValue(_T("HFOS_ISPRIMARY"), m_bPrimary?_T("Y"):_T("N"));
	m_feefoodTbl.SetValue(_T("HFOS_DEPTTYPE"), m_bHaucan?_T("HC"):_T(""));	
	
}
void CHMSDailyFoodOrder::SetDefaultValues(){

	m_szOrderDate.Empty();
	m_szIssueDate.Empty();
	m_szStatus.Empty();
	m_nPrinted=0;
	m_nTotalNumber=0;
	m_szNote.Empty();
	m_bPrimary = TRUE;
	m_bHaucan = false;

}
int CHMSDailyFoodOrder::SetMode(int nMode){
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
			m_szNote.Format(_T("Phiếu báo ăn ngày (%s)"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
			m_wndAddRation.EnableWindow(false);
			m_wndAddAutomatic.EnableWindow(false);
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
		
		m_wndTotalNumber.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSDailyFoodOrder::OnOrderListDblClick(){
	
} 
void CHMSDailyFoodOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
int CHMSDailyFoodOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyFoodOrder::OnOrderListLoadData(){
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
		_T("   (SELECT hfol_Line as line, hfol_itemid AS itemid,") \
		_T("     hfl_name2          AS foodid,") \
		_T("     hfl_name          AS foodname,") \
		_T("	 hfol_type		   AS type, ") \
		_T("     hfol_groupid      AS groupid,") \
		_T("     hfl_unit          AS unit,") \
		_T("     hfol_unitprice    AS unitprice,    ") \
		_T("     hfol_qtyorder     AS FoodQty,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'S' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyS,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'T' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyT,    ") \
		_T("     CASE ") \
		_T("		WHEN hfol_type = 'C' ") \
		_T("		THEN hfol_qtyorder ") \
		_T("		ELSE 0 ") \
		_T("	 END AS FoodQtyC    ") \
		_T("   FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid=hfol_orderid)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid        =hfol_itemid)") \
		_T("   WHERE hfo_ordertype ='D'") \
		_T("   AND hfo_reforder_id = %ld") \
		_T("   )") \
		_T(" GROUP BY line, groupid,") \
		_T("   itemid,") \
		_T("   foodid,") \
		_T("   foodname,") \
		_T("   unit,") \
		_T("   unitprice") \
		_T(" ORDER BY line, foodname,") \
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
void CHMSDailyFoodOrder::OnPatientListDblClick(){
	
} 
void CHMSDailyFoodOrder::OnPatientListSelectChange(int nOldItem, int nNewItem){
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

int CHMSDailyFoodOrder::OnPatientListIssueAll(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szItemID, szType, szStatus; 
	CRecord rs(&pMF->m_db);

	long nIDX;
	long nOrderID;
	if(m_szStatus != _T("A"))
		return -1;
	
	szSQL.Format(_T("SELECT COUNT(*) FROM hms_clinical_record WHERE hcr_docno = %ld AND hcrf_acceptedfee ='Y' "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("Bệnh nhân đã xác nhận phí. Không thể cắt ăn"), MB_ICONERROR);
		return -1;
	}

 	if(ShowMessageBox(_T("Bạn có muốn hủy suất ăn cho bệnh nhân không?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	int ret = m_wndPatientList.GetCurSel();
    
	if(ret < 0) return -1;

	nOrderID = str2long(m_wndPatientList.GetItemText(ret, 1));
	szSQL.Format(_T("select count(*) from hms_feefood where hfo_orderid=%ld and trunc(hfo_orderdate) < trunc(sysdate) "), nOrderID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	for(int i = 0; i < m_wndRationList.GetItemCount(); i++)
	{
		nIDX = str2long(m_wndRationList.GetItemText(i, 0));
		szType = m_wndRationList.GetItemText(i, 3);
		nOrderID = str2long(m_wndRationList.GetItemText(i, 7));
		szItemID = m_wndRationList.GetItemText(i, 8);

		szSQL.Format(_T("UPDATE hms_feefoodline  SET hfol_status ='C', hfol_updatedby='%s' WHERE hfol_orderid=%ld and hfol_itemid='%s' AND hfol_type ='%s' and hfol_status='O' "), pMF->GetCurrentUser(),nOrderID, szItemID,szType);
		//_fmsg(_T("%s"), szSQL);
		int res =  pMF->ExecSQL(szSQL);	
 		if(ret >= 0){
			szSQL.Format(_T(" INSERT INTO hms_feefoodcancel SELECT * FROM hms_feefoodline WHERE hfol_orderid=%ld and hfol_itemid='%s' AND hfol_type ='%s'"), nOrderID, szItemID, szType);
			pMF->ExecSQL(szSQL);
 		}		
	}	
	
	OnRationListLoadData();
	return 0;
}


int CHMSDailyFoodOrder::OnPatientListIssue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	int nMsg = ShowMessage(15);
	if(nMsg == IDNO)
		return 0;

	szSQL.Format(_T("SELECT hfso_status as status ") \
		_T("FROM hms_feefoodsheet ") \
		_T("WHERE hfso_orderid=%ld and hfso_ordertype='A' "), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);


	if(m_szStatus != _T("A"))
		return -1;

	return 0;
}

int CHMSDailyFoodOrder::OnPatientListRollback(){
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
int CHMSDailyFoodOrder::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	
	
	if(m_wndRationList.GetItemCount() > 0){
		ShowMessageBox(_T("Ban phai xoa de muc truoc khi xoa benh nhan"));
		return 0;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return -1;
	//m_nOID = ToLong(m_wndPatientList.GetItemText(nSel, 6));	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	//szSQL.Format(_T("SELECT hfso_status as status FROM hms_feefoodsheet WHERE hfso_orderid=%ld"), m_nOID);
	szSQL.Format(_T("SELECT hfos_orderstatus as status FROM hms_foodordersheet WHERE hfos_orderid=%ld"), m_nOID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;
	rs.GetValue(_T("status"), m_szStatus);

	if(m_szStatus != _T("O"))
		return -1;

	szSQL.Format(_T("DELETE FROM hms_feefood WHERE hfo_orderid = %ld AND hfo_reforder_id=%ld "), m_nOrderID, m_nOID); 
	//_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0){ 
		OnPatientListLoadData();
		OnOrderListLoadData();
 	}
	
	return 0;
} 
long CHMSDailyFoodOrder::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere;
	CString szNewLine, szOldLine;

	szWhere.Format(_T(" and hfo_reforder_id =%ld "), m_nOID);
	m_wndPatientList.BeginLoad(); 
	
	int nCount = 0, nIndex =1;
	szSQL.Format(_T(" SELECT distinct hfo_docno as docno, hfo_orderid as orderid,") \
_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
_T(" 	hfo_roomid||'.'||hfo_bedid as bedid,") \
_T(" 	 trunc_date(hfo_orderdate) as orderdate, hfo_createdby,nvl(hfo_isvip,'N') as isVip  ") \
_T(" FROM hms_feefood ") \
_T(" LEFT JOIN hms_patient ON(hfo_patientno=hp_patientno)") \
_T(" WHERE hfo_ordertype ='D' %s ORDER BY docno,orderdate "), szWhere);
	_fmsg(_T("%s"), szSQL);
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
			rs.GetValue(_T("isVip")), 

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
void CHMSDailyFoodOrder::OnRationListDblClick(){
	
} 
void CHMSDailyFoodOrder::OnRationListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 

int CHMSDailyFoodOrder::OnRationListAddEntry(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
		return 0;
	CHMSPatientFoodOrderEntry* newPopup = new CHMSPatientFoodOrderEntry(this, VM_ADD);
	newPopup->m_szCurrentOrderDate = m_szOrderTime;
	newPopup->m_szOrderDate = m_szOrderDate;
	newPopup->m_nOID = m_nOID;
	newPopup->m_szDoctor = pMF->m_szDoctor;
	newPopup->m_szBatchNo = m_szBatchNo;
	newPopup->m_bHaucan = m_bHaucan;
	newPopup->ShowPopup(&m_wndRationList);
	return 0;
} 

int CHMSDailyFoodOrder::OnRationListDeleteItem(){
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
	

	szSQL.Format(_T("DELETE FROM hms_feefoodline WHERE hfol_orderid=%ld and hfol_itemid='%s' AND hfol_type ='%s' "), nOrderID, szItemID,szType); 
	_fmsg(_T("%s"), szSQL);
 	int res =  pMF->ExecSQL(szSQL); 
	if(res > 0){
		m_wndRationList.DeleteItem(nSel);
		ret += res;
	}

	for (int i = m_wndRationList.GetItemCount(); i >= 0; i--)
	{
		if(m_wndRationList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
		{
			nIDX = str2long(m_wndRationList.GetItemText(i, 0));
			szType = m_wndRationList.GetItemText(i, 3);
			nOrderID = str2long(m_wndRationList.GetItemText(i, 7));
			szItemID = m_wndRationList.GetItemText(i, 8);
			szSQL.Format(_T("DELETE FROM hms_feefoodline WHERE hfol_orderid=%ld and hfol_itemid='%s' AND hfol_type ='%s' "), nOrderID, szItemID,szType); 
 			int res =  pMF->ExecSQL(szSQL); 
			if(res > 0){
				m_wndRationList.DeleteItem(i);
				ret += res;
			}
		}
	}
	
	szSQL.Format(_T("SELECT COUNT(*) FROM hms_feefoodline WHERE hfol_orderid=%ld "), nOrderID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
	{
		szSQL.Format(_T("DELETE FROM hms_feefood WHERE hfo_orderid=%ld "), nOrderID);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("UPDATE hms_fee_extraline_close SET hfelc_foodordered='N' WHERE hfelc_foodorder_id=%ld"),
			nOrderID);
		pMF->ExecSQL(szSQL);
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
int CHMSDailyFoodOrder::OnRationListReturnRation(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szItemID, szType, szStatus; 
	CRecord rs(&pMF->m_db);

	long nIDX;
	long nOrderID;
	if(m_szStatus != _T("A"))
		return -1;
	
	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString szMsg;
		szMsg.Format(_T("This order created by other user[%s]. Can not delete it"), m_szCreatedBy);
		ShowMessageBox(szMsg);
		return -1;
	}

	szSQL.Format(_T("SELECT COUNT(*) FROM hms_clinical_record WHERE hcr_docno = %ld AND hcrf_acceptedfee ='Y' "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		ShowMessageBox(_T("Bệnh nhân đã xác nhận phí. Không thể cắt ăn"), MB_ICONERROR);
		return -1;
	}
	int nSel = m_wndRationList.GetCurSel();
	if(nSel < 0) return -1;
	
	
	
 	if(ShowMessageBox(_T("Bạn có muốn hủy suất ăn cho bệnh nhân không?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	int ret = 0;
	
	nIDX = str2long(m_wndRationList.GetItemText(nSel, 0));
	szType = m_wndRationList.GetItemText(nSel, 3);
	nOrderID = str2long(m_wndRationList.GetItemText(nSel, 7));
	szItemID = m_wndRationList.GetItemText(nSel, 8);

	szSQL.Format(_T("select count(*) from hms_feefood where hfo_orderid=%ld and trunc(hfo_orderdate) < trunc(sysdate) "), nOrderID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	
	szSQL.Format(_T("SELECT hfol_status FROM hms_feefoodline WHERE hfol_orderid=%ld and hfol_itemid='%s' AND hfol_type ='%s' "),nOrderID, szItemID,szType);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hfol_status"), szStatus);
	//_fmsg(_T("%s"), szStatus);
	if(szStatus == _T("O"))
	{
		szSQL.Format(_T("UPDATE hms_feefoodline  SET hfol_status ='C', hfol_updatedby='%s' WHERE hfol_orderid=%ld and hfol_itemid='%s' AND hfol_type ='%s' "), pMF->GetCurrentUser(),nOrderID, szItemID,szType);
		//_fmsg(_T("%s"), szSQL);
 		int res =  pMF->ExecSQL(szSQL);	
 		if(ret >= 0){
			szSQL.Format(_T(" INSERT INTO hms_feefoodcancel SELECT * FROM hms_feefoodline WHERE hfol_orderid=%ld and hfol_itemid='%s' AND hfol_type ='%s'"), nOrderID, szItemID, szType);
			pMF->ExecSQL(szSQL);			
 		}
	}	
	else if(szStatus == _T("C"))
	{
		int res =0;
		szSQL.Format(_T("SELECT COUNT(*) FROM hms_feefoodcancel WHERE hfoc_orderid=%ld and hfoc_itemid='%s' AND hfoc_type ='%s' and hfoc_status IN('O', 'A') "), nOrderID, szItemID, szType);
		rs.ExecSQL(szSQL);		
		res = rs.GetIntValue();
		//_fmsg(_T("%s, %d"), szSQL, res);
		if(res > 0){
			ShowMessageBox(_T("Phiếu cắt ăn của bệnh nhân đã được cho vào phiếu báo cắt. Không thể bỏ cắt ăn được?"), MB_ICONQUESTION|MB_OK);
 			return -1;
		}

		szSQL.Format(_T("UPDATE hms_feefoodline  SET hfol_status ='O', hfol_updatedby='%s' WHERE hfol_orderid=%ld and hfol_itemid='%s' AND hfol_type ='%s' "), pMF->GetCurrentUser(),nOrderID, szItemID,szType);
		//_fmsg(_T("%s"), szSQL);
 		res =  pMF->ExecSQL(szSQL);
 		if(ret >= 0){
			szSQL.Format(_T("DELETE FROM hms_feefoodcancel WHERE hfoc_orderid=%ld and hfoc_itemid='%s' AND hfoc_type ='%s'"), nOrderID, szItemID, szType);
			pMF->ExecSQL(szSQL);
 		}
	}
	
	OnRationListLoadData();

	return 0;
} 
long CHMSDailyFoodOrder::OnRationListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndRationList.BeginLoad(); 
	int nCount = 0, nIndex=1;

	szSQL.Format(_T(" SELECT hfl_name2 AS idx,") \
	_T("   hfol_orderid   AS orderid,") \
	_T("   hfo_orderstatus, hfol_status,") \
	_T("   hfl_feeid                                           AS feeid,") \
	_T("   hfl_name                                            AS name,") \
	_T("   hfol_type                                           AS type,") \
	_T("   hfl_unit                                            AS unit,") \
	_T("   hfol_unitprice                                      AS unitprice,") \
	_T("   SUM(hfol_qtyorder)                                  AS qtyorder,") \
	_T("   SUM(hfol_qtyissue -hfol_qtyreverse)                 AS qtyissue,") \
	_T("   SUM((hfol_qtyissue-hfol_qtyreverse)*hfol_unitprice) AS amount") \
	_T(" FROM hms_feefood") \
	_T(" LEFT JOIN hms_feefoodline") \
	_T(" ON(hfol_orderid=hfo_orderid)") \
	_T(" LEFT JOIN hms_fee_list") \
	_T(" ON(hfol_itemid          =hfl_feeid)") \
	_T(" WHERE hfo_docno         =%ld") \
	_T(" AND hfol_retorder_id    =%ld") \
	_T(" AND trunc_date(hfo_orderdate)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
	_T(" GROUP BY hfol_line, hfol_orderid,") \
	_T("   hfo_orderstatus,") \
	_T("   hfl_name2,") \
	_T("   hfl_feeid,") \
	_T("   hfl_name,") \
	_T("   hfl_unit,") \
	_T("   hfol_type,") \
	_T("   hfol_unitprice, hfol_status") \
	_T(" ORDER BY hfol_line, hfol_orderid,") \
	_T("   hfl_name2,") \
	_T("   hfl_name,") \
	_T("   hfl_unit, hfol_type DESC "), m_nDocumentNo,  m_nOID, m_szPatientOrderDate);
//
	//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nItem = 0;
	CString szStatus, szGroup, szName;
	while(!rs.IsEOF()){
		rs.GetValue(_T("name"), szName);
		rs.GetValue(_T("hfol_status"), szStatus);
		nItem = m_wndRationList.AddItems(
			rs.GetValue(_T("idx")),			
			szName, 
			rs.GetValue(_T("unit")), 			
			rs.GetValue(_T("type")), 
			rs.GetValue(_T("qtyissue")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("feeid")),			
			szStatus,
			NULL);

		if(szStatus == _T("C") || szStatus == _T("A")){
			m_wndRationList.SetItemBkColor(nItem, RGB(200, 128, 0), false);
			m_wndRationList.SetItemTextColor(nItem, COLOR_WHITE, false);
		}

		rs.MoveNext();	
	}
	m_wndRationList.EndLoad(); 
	return nCount;
}
/*void CHMSDailyFoodOrder::OnOrderNoChange(){
	
} */
/*void CHMSDailyFoodOrder::OnOrderNoSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnOrderNoKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnOrderNoCheckValue(){
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
void CHMSDailyFoodOrder::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	static CString szFromDate, szToDate;
	OnOrderDateCheckValue();	
} 
/*void CHMSDailyFoodOrderDialog::OnPatientNameChange(){
	
} */
/*void CHMSDailyFoodOrderDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSDailyFoodOrderDialog::OnPatientNameKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnPatientNameCheckValue(){
	OnPatientListLoadData();
	return 0;
} 

/*void CHMSDailyFoodOrder::OnOrderDateChange(){
	
} */
/*void CHMSDailyFoodOrder::OnOrderDateSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnOrderDateKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnOrderDateCheckValue(){
	UpdateData(true);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int n = CompareDate(m_szOrderDate, pMF->GetSysDate());
	
	if(n < 0 || n > 10)
		return -1;
	return 0;
} 
/*void CHMSDailyFoodOrder::OnIssueDateChange(){
	
} */
/*void CHMSDailyFoodOrder::OnIssueDateSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnIssueDateKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnIssueDateCheckValue(){
	return 0;
} 

/*void CHMSDailyFoodOrder::OnStatusChange(){
	
} */
/*void CHMSDailyFoodOrder::OnStatusSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnStatusKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnStatusCheckValue(){
	return 0;
} 
/*void CHMSDailyFoodOrder::OnPrintedChange(){
	
} */
/*void CHMSDailyFoodOrder::OnPrintedSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnPrintedKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnPrintedCheckValue(){
	return 0;
} 
/*void CHMSDailyFoodOrder::OnNoteChange(){
	
} */
/*void CHMSDailyFoodOrder::OnNoteSetfocus(){
	
} */
/*void CHMSDailyFoodOrder::OnNoteKillfocus(){
	
} */
int CHMSDailyFoodOrder::OnNoteCheckValue(){
	return 0;
} 
void CHMSDailyFoodOrder::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSDailyFoodOrder();
	
} 
void CHMSDailyFoodOrder::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSDailyFoodOrder();
} 
void CHMSDailyFoodOrder::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSDailyFoodOrder();
} 
void CHMSDailyFoodOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDailyFoodOrder();
} 
void CHMSDailyFoodOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSDailyFoodOrder();
} 
void CHMSDailyFoodOrder::OnSendSelect(){
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
		szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record ") \
			_T("WHERE htr_deptid='%s' and htr_status ='I' "), pMF->m_szDept);
		CRecord rsx(&pMF->m_db);
		rsx.ExecSQL(szSQL);
		int nTtlPatient = rsx.GetIntValue();
		pMF->BeginTransaction();

		szSQL.Format(_T("UPDATE hms_foodordersheet ") \
			_T("SET hfos_updateddate=sysdate,hfos_updatedby='%s', ") \
			_T("hfos_approveby='%s',hfos_orderstatus='S', hfos_ttlpatient=%d, hfos_senddate = sysdate ") \
			_T("WHERE hfos_orderid=%ld AND hfos_orderstatus='O' "), 
			pMF->GetCurrentUser(),szSendOrderBy, nTtlPatient, m_nOID);
		pMF->ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);
		szSQL.Format(_T("UPDATE hms_feefood SET hfo_orderstatus='S' ") \
			_T("WHERE hfo_reforder_id=%ld and hfo_ordertype='D' "), m_nOID);
		pMF->ExecSQL(szSQL);
		pMF->Commit();
	}
	if( szStatus == _T("S"))
	{
		ShowMessageBox(_T("Phiếu đã gửi không được bỏ xác nhận (Theo yêu cầu bệnh viện)!"));		
	}

//	else if( szStatus == _T("S"))
//	{
//		pMF->BeginTransaction();
//		szSQL.Format(_T("UPDATE hms_foodordersheet SET hfos_updateddate=sysdate,hfos_updatedby='%s', ") \
//			_T("hfos_approveby='%s',hfos_orderstatus='O' ") \
//			_T("WHERE hfos_orderid=%ld AND hfos_orderstatus='S' AND trunc_date(hfos_updateddate)=trunc_date(sysdate) "), 
//			pMF->GetCurrentUser(),szSendOrderBy, m_nOID);
//		pMF->ExecSQL(szSQL);
////_msg(_T("%s"), szSQL);
//		szSQL.Format(_T("UPDATE hms_feefood SET hfo_orderstatus='O' ") \
//			_T("WHERE hfo_reforder_id=%ld and hfo_ordertype='D' AND trunc_date(hfos_updateddate)=trunc_date(sysdate) "), m_nOID);		
//		pMF->ExecSQL(szSQL);
//		pMF->Commit();
//	}

	GetDataToScreen();
} 
void CHMSDailyFoodOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderDate;
	bool bPreview = true;
	if(m_szStatus == _T("O"))
	{
		bPreview = false;
		//ShowMessageBox(_T("Phiếu trạng thái đang mở. Bạn phải xác nhận gửi phiếu"));
		//return;
	}

	
	szSQL.Format(_T("SELECT DISTINCT trunc_date(hfo_orderdate) as orderdate ") \
		_T(" FROM hms_feefood ") \
		_T(" WHERE hfo_reforder_id =%d ") \
		_T(" ORDER BY  trunc_date(hfo_orderdate)"), m_nOID);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("orderdate"), szOrderDate);
//		OnPrintDeliverySummery(m_nOID, szOrderDate, bPreview);
		OnPrintDelivery(m_nOID, szOrderDate, bPreview);
		if(m_bHaucan)
		{
			OnPrintDelivery(m_nOID, szOrderDate, bPreview, true);
		}
		rs.MoveNext();
	}
	
} 


int CHMSDailyFoodOrder::OnOrderListPrintSheetPublicity(){
	return 0;	
}
int CHMSDailyFoodOrder::OnOrderListPrintSheetDate(){
	return 0;
}
int CHMSDailyFoodOrder::OnAddHMSDailyFoodOrder(){
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
int CHMSDailyFoodOrder::OnEditHMSDailyFoodOrder(){
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
	if(m_wndOrderList.GetItemCount() > 0)
	{
		m_wndHaucan.EnableWindow(FALSE);
	}
 	
	return 0;  
}
int CHMSDailyFoodOrder::OnDeleteHMSDailyFoodOrder(){
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
		ShowMessageBox(_T("Không thể xóa phiếu. Bạn phải xóa hết bệnh nhân trên phiếu!"));
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
int CHMSDailyFoodOrder::OnSaveHMSDailyFoodOrder(){
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
 		szSQL = m_feefoodTbl.GetUpdateSQL(_T("hfos_createdby, hfos_createddate,hfos_approveddate,HFOS_ORDERID,hfos_orderstatus"));
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
void CHMSDailyFoodOrder::OnAddAutomaticSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	/*ShowMessageBox(_T("Tác vụ này tạm khóa trong ngay. Hôm nay áp dụng báo ăn 3 bữa nên các khoa làm báo ăn nhập chi tiết từng bệnh nhân\n Ngày hôm sau mới sử dụng được tác vụ Automatic"), MB_OK);

	return;*/
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Phiếu đã gửi. Không thực hiện được tác vụ hiện thời"));
		return;
	}

	CHMSDailyFoodPatientListDialog dlg(this);
	dlg.m_nOID = m_nOID;
	dlg.m_szOrderDate = m_szOrderDate;
	dlg.m_bHaucan = m_bHaucan;
	if(dlg.DoModal()==IDOK){
		GetDataToScreen();
	}
} 

int CHMSDailyFoodOrder::OnCancelHMSDailyFoodOrder(){
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
int CHMSDailyFoodOrder::OnHMSDailyFoodOrderListLoadData(){
	return 0;
}


void CHMSDailyFoodOrder::RefreshData(){
	OnOrderListLoadData();
	OnPatientListLoadData();
}

void CHMSDailyFoodOrder::LoadRationList(long nID){
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++){
		m_nOID = ToLong(m_wndPatientList.GetItemText(i, 6));
		if(m_nOID = nID)
		{
			m_wndPatientList.SetCurSel(i);
			break;
		}
	}
}

void CHMSDailyFoodOrder::OnPrintDeliverySummery(long nTransactionID, LPCTSTR lpszOrderDate, bool bPreview){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;	
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);	
	
	if(!rpt.Init(_T("Reports/HMS/TM_FOODORDERSUMMERY.RPT")) )
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
	_T("	 hfol_unitprice			   AS unitprice, ") \
	_T("     CASE ") \
	_T("		WHEN hfol_type = 'S' ") \
	_T("		THEN hfol_qtyorder ") \
	_T("		ELSE 0 ") \
	_T("	 END AS FoodQtyS,    ") \
	_T("     CASE ") \
	_T("		WHEN hfol_type = 'T' ") \
	_T("		THEN hfol_qtyorder ") \
	_T("		ELSE 0 ") \
	_T("	 END AS FoodQtyT,    ") \
	_T("     CASE ") \
	_T("		WHEN hfol_type = 'C' ") \
	_T("		THEN hfol_qtyorder ") \
	_T("		ELSE 0 ") \
	_T("	 END AS FoodQtyC,   ") \
	_T("     CASE") \
	_T("       WHEN ho_id IN(2,4,5,6,9,11,12)") \
	_T("       THEN hfol_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS BAOHIEM,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='S'") \
	_T("       THEN hfol_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS DICHVU,") \
	_T("     CASE") \
	_T("       WHEN ho_id IN(1,10)") \
	_T("       THEN hfol_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS QUAN,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='P'") \
	_T("       THEN hfol_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS CHINHSACH,") \
	_T("     CASE") \
	_T("       WHEN ho_id ='8'") \
	_T("       THEN hfol_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS BAN,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='H'") \
	_T("       THEN hfol_qtyorder ") \
	_T("       ELSE 0") \
	_T("     END AS HUUTRI") \
	_T("   FROM hms_patient") \
	_T("   LEFT JOIN hms_doc") \
	_T("   ON(hd_patientno=hp_patientno)") \
	_T("   LEFT JOIN hms_feefood") \
	_T("   ON(hfo_docno=hd_docno)") \
	_T("   LEFT JOIN hms_feefoodline") \
	_T("   ON(hfo_orderid=hfol_orderid)") \
	_T("   LEFT JOIN hms_fee_list") \
	_T("   ON(hfol_itemid=hfl_feeid)") \
	_T("   LEFT JOIN hms_treatment_record") \
	_T("   ON(htr_docno =hfo_docno") \
	_T("   AND htr_idx  =hfo_refidx)") \
	_T("   LEFT JOIN hms_object") \
	_T("   ON(CAST(ho_id AS INTEGER)=hd_object)") \
	_T("   WHERE hfo_reforder_id    =%ld ") \
	_T("   AND trunc_date(hfo_orderdate) = to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND hfo_orderstatus IN('O','S','A')") \
	_T("   )") \
	_T(" GROUP BY foodid,") \
	_T("   foodname,") \
	_T("   unitprice ") \
	_T(" ORDER BY ") \
	_T("   foodid"), nTransactionID, lpszOrderDate);
	
	_msg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Không có số liệu"));
		return;
	}

	CReportSection* rptDetail;
	CString szItemID;
	long nItem =0;
	double nBH, nDV, nCS, nQUAN, nHUU, nBAN, nTotal, nTotal1, nQty;
	double nTotalBH, nTotalDV, nTotalCS, nTotalQUAN,nTotalBAN, nTotalHUU, nTrua=0, nToi=0, nSang=0;
	double nPrice =0, nAmount=0, nTotalAmount =0, nTotalAmount1 =0;

	int i = 1;

	nTrua = nToi =0;
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

	rpt.PrintPreview(bPreview);
}

void CHMSDailyFoodOrder::OnPrintDelivery(long nTransactionID, LPCTSTR lpszOrderDate, bool bPreview, bool bRelative){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;	
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);


	szWhere.Empty();
	CString szIsPrimary;
	szIsPrimary.Empty();
	CRecord rsx(&pMF->m_db);
	//Neu khong phai bao an nguoi nha
	if(bRelative)
	{
		if(!rpt.Init(_T("Reports/HMS/TM_FOODORDER_NN.RPT")) )
			return;

	}
	else
	{
		szSQL.Format(_T("SELECT hfos_isprimary, hfos_ttlpatient ") \
			_T(" FROM hms_foodordersheet ") \
			_T(" WHERE hfos_orderid=%ld "), nTransactionID);
		
		rsx.ExecSQL(szSQL);
		if(!rsx.IsEOF())
		{
			rsx.GetValue(_T("hfos_isprimary"), szIsPrimary);
		}
		if(!rpt.Init(_T("Reports/HMS/TM_FOODORDER.RPT")) )
			return;

	}	
	
	

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

	if(bRelative)
	{
		szWhere.Format(_T(" and nvl(hfl_subgroup,'N') = 'NN' "));
	}
	else
	{
		szWhere.Format(_T(" and nvl(hfl_subgroup,'N') <> 'NN' "));
	}

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
	_T("   SUM(BAOHIEM+QUAN+DICHVU+CHINHSACH+HUUTRI+BAN) AS TONG, ") \
	_T("   conclusion ") \
	_T(" FROM") \
	_T("   ( SELECT DISTINCT hfo_docno AS docno,") \
	_T("     hfl_name2                 AS foodid,") \
	_T("     hfo_orderid               AS orderid,") \
	_T("     htr_recordno              AS recordno,") \
	_T("   CASE") \
	_T("       WHEN hfol_type ='S'") \
	_T("       THEN hfl_name2") \
	_T("       ELSE NULL") \
	_T("     END AS SANG,") \
	_T("   CASE") \
	_T("       WHEN hfol_type ='T'") \
	_T("       THEN hfl_name2") \
	_T("       ELSE NULL") \
	_T("     END AS TRUA,") \
	_T("     CASE") \
	_T("       WHEN hfol_type ='C'") \
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
	_T("	 hfol_unitprice									AS unitprice, ") \
	_T("     CASE") \
	_T("       WHEN ho_id IN(2,4,5,6,9,11,12)") \
	_T("       THEN hfol_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS BAOHIEM,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='S'") \
	_T("       THEN hfol_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS DICHVU,") \
	_T("     CASE") \
	_T("       WHEN ho_id IN(1,10)") \
	_T("       THEN hfol_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS QUAN,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='P'") \
	_T("       THEN hfol_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS CHINHSACH,") \
	_T("     CASE") \
	_T("       WHEN ho_id ='8'") \
	_T("       THEN hfol_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS BAN,") \
	_T("     CASE") \
	_T("       WHEN ho_type ='H'") \
	_T("       THEN hfol_qtyorder") \
	_T("       ELSE 0") \
	_T("     END AS HUUTRI,") \
	_T("     hd_conclusion AS conclusion") \
	_T("   FROM hms_patient") \
	_T("   LEFT JOIN hms_doc") \
	_T("   ON(hd_patientno=hp_patientno)") \
	_T("   LEFT JOIN hms_feefood") \
	_T("   ON(hfo_docno=hd_docno)") \
	_T("   LEFT JOIN hms_feefoodline") \
	_T("   ON(hfo_orderid=hfol_orderid)") \
	_T("   LEFT JOIN hms_fee_list") \
	_T("   ON(hfol_itemid=hfl_feeid)") \
	_T("   LEFT JOIN hms_treatment_record") \
	_T("   ON(htr_docno =hfo_docno") \
	_T("   AND htr_idx  =hfo_refidx)") \
	_T("   LEFT JOIN hms_object") \
	_T("   ON(CAST(ho_id AS INTEGER)=hd_object)") \
	_T("   WHERE hfo_reforder_id    =%ld") \
	_T("   AND trunc_date(hfo_orderdate) = to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND hfo_orderstatus IN('O','S','A')") \
	_T(" %s ") \
	_T("   )") \
	_T(" GROUP BY docno,") \
	_T("   foodid,") \
	_T("   orderid,") \
	_T("   recordno,") \
	_T("   pname,") \
	_T("   age,") \
	_T("   sang,") \
	_T("   trua,") \
	_T("   chieu,") \
	_T("   roomid,") \
	_T("   unitprice, ") \
	_T("   bedid,") \
	_T("   conclusion") \
	_T(" ORDER BY roomid,") \
	_T("   bedid,") \
	_T("   pname,") \
	_T("   docno "), nTransactionID, lpszOrderDate, szWhere);
	
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return;
	}
	CReportSection* rptDetail;
	CString szItemID;
	long nItem =0;
	double nBH, nDV, nCS, nQUAN, nHUU, nBAN, nTotal, nTotal1, nQtyTmp;
	double nTotalBH, nTotalDV, nTotalCS, nTotalQUAN,nTotalBAN, nTotalHUU, nSang, nTrua, nToi;
	double nQty[15];
	double nPrice =0, nAmount=0, nAmount1 =0, nAmount2 =0, nTotalAmount =0, nTotalAmount1 =0, nTotalQty=0;
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
			

			rs.GetValue(_T("QUAN"), nQtyTmp);
			//tmpStr.Format(_T("%0.1f"), nQUAN);
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

		rs.GetValue(_T("conclusion"), tmpStr);		
		rptDetail->SetValue(_T("15"), tmpStr);
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

	
	if(!rsx.IsEOF())
	{
		int nTotalPatient;
		rsx.GetValue(_T("hfos_ttlpatient"), nTotalPatient);
		if(szIsPrimary == _T("Y"))
		{
			rpt.GetReportHeader()->SetValue(_T("Primary"), _T("Phiếu báo chính"));
			rpt.GetReportHeader()->SetValue(_T("Template"), _T("Mẫu 1"));
		}
		else
		{
			rpt.GetReportHeader()->SetValue(_T("Primary"), _T("Phiếu báo phụ"));
			rpt.GetReportHeader()->SetValue(_T("Template"), _T("Mẫu 2"));
		}
		if(nTotalPatient > 0)
		{
			tmpStr.Format(_T("%d/%d"), nItem, nTotalPatient);
			rpt.GetReportHeader()->SetValue(_T("TotalPatient"), tmpStr);
		}

		tmpStr = pMF->GetSysTime();
		rpt.GetReportHeader()->SetValue(_T("Time"), tmpStr);
	}
	
	rpt.PrintPreview(bPreview);

}
int CHMSDailyFoodOrder::OnExportOrderDeliveryRation(){
	
	return 0;
}
int CHMSDailyFoodOrder::OnOrderListPrintDeliveryRation()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_szStatus == _T("O"))
		return -1;
	pMF->PrintDeliveryOrder(m_nOID);
	return 0;
}

#include "HMSServicePackageFoodOrderDialog.h"
int CHMSDailyFoodOrder::OnOrderListAddFromServicePkg()
{
	if(!m_bHaucan)
		return -1;
	CHMSServicePackageFoodOrderDialog dlg(this);
	dlg.m_nOID = m_nOID;
	dlg.m_szOrderDate = m_szOrderDate.Left(10);
	
	if(dlg.DoModal() == IDOK)
	{
		
	}
	GetDataToScreen();
	return 0;
}
#include "HMSServicePackageFamilyFoodOrderDialog.h"
int CHMSDailyFoodOrder::OnOrderListAddFromServiceFamilyPkg()
{
	if(!m_bHaucan)
		return -1;
	if(m_szStatus != _T("O"))
		return -1;
	CHMSServicePackageFamilyFoodOrderDialog dlg(this);
	dlg.m_nOID = m_nOID;
	dlg.m_szOrderDate = m_szOrderDate.Left(10);
	
	if(dlg.DoModal() == IDOK)
	{
		
	}
	GetDataToScreen();
	return 0;
}


void CHMSDailyFoodOrder::OnAddRationSelect(){
	OnRationListAddEntry();
}

void CHMSDailyFoodOrder::OnPrintDeliveryRationsSelect(){	

}

void CHMSDailyFoodOrder::Refresh(long nTransactionID, long nDocumentNo){
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

long CHMSDailyFoodOrder::GetTransactionID(int nStorageID)
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

int CHMSDailyFoodOrder::OnChangeRation(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();	
	CString szSQL, szItemID, szType, szStatus; 
	int nIDX, nOrderID, ret=0;
	int nSel = m_wndRationList.GetCurSel();
	if(nSel < 0) return -1;	

	nIDX = str2long(m_wndRationList.GetItemText(nSel, 0));
	szType = m_wndRationList.GetItemText(nSel, 3);
	nOrderID = str2long(m_wndRationList.GetItemText(nSel, 7));
	szItemID = m_wndRationList.GetItemText(nSel, 8);
	szStatus = m_wndRationList.GetItemText(nSel, 9);

	if(m_szStatus != _T("O")){		
		ShowMessageBox(_T("Phiếu đã duyệt không đổi suất ăn được."), MB_OK);
		return -1;
	}

	CHMSFoodModifyItemDialog dlg(this, VM_EDIT);
	if(dlg.DoModal() == IDOK)
	{
		if(!dlg.m_szLightName.IsEmpty()){
			szSQL.Format(_T("UPDATE hms_feefoodline  SET hfol_itemid='%s', hfol_unitprice=%d WHERE hfol_orderid=%ld AND hfol_type ='%s' "),dlg.m_szLightKey, dlg.m_nUnitPrice,nOrderID, _T("S"));	
			pMF->ExecSQL(szSQL);
		}
 		
		if(!dlg.m_szLunchName.IsEmpty()){
			szSQL.Format(_T("UPDATE hms_feefoodline  SET hfol_itemid='%s', hfol_unitprice=%d WHERE hfol_orderid=%ld AND hfol_type ='%s' "),dlg.m_szLunchKey, dlg.m_nUnitPrice1,nOrderID, _T("T"));	
			pMF->ExecSQL(szSQL);
		}
		
		if(!dlg.m_szDinnerName.IsEmpty()){
			szSQL.Format(_T("UPDATE hms_feefoodline  SET hfol_itemid='%s', hfol_unitprice=%d WHERE hfol_orderid=%ld AND hfol_type ='%s' "),dlg.m_szDinnerKey, dlg.m_nUnitPrice2,nOrderID, _T("C"));
			pMF->ExecSQL(szSQL);
		}

		OnOrderListLoadData(); 		
	}

	return 0;
}
#include "TMDailyFoodPrintSheetDialog.h"
int CHMSDailyFoodOrder::OnPhieuAnMienPhi(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	

	CReport rpt;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL,* rptDetail = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;
	if (!rpt.Init(_T("Reports\\HMS\\TM_GOIDICHVU_PHIEUANSANGMIENPHI.RPT")))
		return 0;

	if(!m_bHaucan)
		return -1;

	if(m_szStatus == _T("O"))
		return -2;

	CTMDailyFoodPrintSheetDialog dlg(this);
	dlg.m_szOrderSheet= m_szOrderNo;
	if(dlg.DoModal() == IDOK)
		{
				
		}

	return 1;

/*	szSQL.Format(_T("   SELECT hfe_patientno AS patientno,") \
		_T("     hfe_docno           AS docno,") \
		_T("     get_patientname(hfe_docno) AS patientname,") \
		_T("     get_departmentname(hfe_deptid) AS deptname,") \
		_T("     hr_name             AS relative,") \
		_T("     hfel_itemid         AS itemid") \
		_T("   FROM hms_fee_extra") \
		_T("   LEFT JOIN hms_fee_extraline") \
		_T("   ON(hfel_docno = hfe_docno") \
		_T("   AND hfe_fee_extra_id = hfel_fee_extra_id)") \
		_T("   LEFT JOIN hms_relative") \
		_T("   ON(hr_relative_id = hfe_relative_id)") \
		_T("   LEFT JOIN sys_sel") \
		_T("   ON(ss_code = hfel_itemid AND ss_id = 'HMS_SERVICE_PACKAGE')") \
		_T("   WHERE ss_vndesc = 'GNNOLPB' AND hfe_docno = %ld") \
		_T("   AND hfe_fee_extra_id = %ld"), pMF->m_nDocumentNo, m_nPackageId);
		*/
	szSQL.Format(_T("  SELECT hfo_patientno AS patientno,") \
				_T(" 		     hfo_docno           AS docno,") \
				_T(" 		     get_patientname(hfo_docno) AS patientname,") \
				_T(" 		     get_departmentname(hfos_deptid) AS deptname,") \
				_T(" 		     ''             AS relative,") \
				_T(" 		     hfol_itemid         AS itemid,") \
				_T("         to_char(hfo_orderdate, 'DD/MM/YYYY') as orderdate") \
				_T(" 					FROM hms_foodordersheet ") \
				_T(" 						LEFT JOIN hms_feefood ") \
				_T(" 						ON (hfo_reforder_id= hfos_orderid) ") \
				_T(" 						LEFT JOIN hms_feefoodline ") \
				_T(" 						ON (hfol_orderid= hfo_orderid) ") \
				_T(" 						LEFT JOIN hms_fee_list ") \
				_T(" 						ON (hfl_feeid= hfol_itemid) ") \
				_T(" 						WHERE") \
				_T("             hfos_sheetno='%s'") \
				_T("             and hfos_orderstatus in ('A','S')") \
				_T("             AND hfos_depttype='HC' ") \
				_T(" 						AND hfo_ordertype = 'D' ") \
				_T(" 						AND hfl_typeid    = 'F' ") \
				_T(" 						AND hfl_groupid   = 'FF000' ") \
				_T(" 						AND hfl_deptid    ='HCKT' ") \
				_T(" 						AND hfl_subgroup ='NN' ") , m_szOrderNo);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		return 0;
	}

	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	rptHeader->SetValue(_T("Department"), rs.GetValue(_T("deptname")));
	rptHeader->SetValue(_T("Relative"), rs.GetValue(_T("relative")));
	rptHeader->SetValue(_T("DocNo"), rs.GetValue(_T("docno")));
	rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("patientname")));

	szDate = pMF->GetSysDate();
	tmpStr.Format(rptHeader->GetValue(_T("ExamDate")), szDate.Mid(8, 2), szDate.Mid(5, 2), szDate.Left(4));
	rptHeader->SetValue(_T("ExamDate"), tmpStr);
	rpt.PrintPreview();
	return 0;
}