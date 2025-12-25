#include "PMSReturnOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "PMSReturnOrderListDialog.h"
#include ".\pmsreturnorder.h"
#include "PMSReturnDrugListDialog.h"
#include "ReportDocument.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnOrder*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMSReturnOrder*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSReturnOrder*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSReturnOrder*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CPMSReturnOrder *)pWnd)->OnIDCheckValue();
} 
static void _OnIDButtonSelectFnc(CWnd *pWnd){
	CPMSReturnOrder *pVw = (CPMSReturnOrder *)pWnd;
	pVw->OnIDButtonSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSReturnOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CPMSReturnOrder *)pWnd)->OnStatusCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSReturnOrder* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnOrder *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnStockAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSReturnOrder* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnOrder *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnDelivererChangeFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnDelivererChange();
} */
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnDelivererSetfocus();} */ 
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnDelivererKillfocus();
} */
static int _OnDelivererCheckValueFnc(CWnd *pWnd){
	return ((CPMSReturnOrder *)pWnd)->OnDelivererCheckValue();
} 
/*static void _OnReceiverChangeFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnReceiverChange();
} */
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnReceiverSetfocus();} */ 
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnReceiverKillfocus();
} */
static int _OnReceiverCheckValueFnc(CWnd *pWnd){
	return ((CPMSReturnOrder *)pWnd)->OnReceiverCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPMSReturnOrder *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPMSReturnOrder *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPMSReturnOrder *pVw = (CPMSReturnOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPMSReturnOrder *pVw = (CPMSReturnOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPMSReturnOrder *pVw = (CPMSReturnOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPMSReturnOrder *pVw = (CPMSReturnOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPMSReturnOrder *pVw = (CPMSReturnOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSReturnOrder *pVw = (CPMSReturnOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnIssueSelectFnc(CWnd *pWnd){
	CPMSReturnOrder *pVw = (CPMSReturnOrder *)pWnd;
	pVw->OnIssueSelect();
} 
static void _OnAddEntrySelectFnc(CWnd *pWnd){
	CPMSReturnOrder *pVw = (CPMSReturnOrder *)pWnd;
	pVw->OnAddEntrySelect();
} 
static int _OnAddPMSReturnOrderFnc(CWnd *pWnd){
	 return ((CPMSReturnOrder*)pWnd)->OnAddPMSReturnOrder();
} 
static int _OnEditPMSReturnOrderFnc(CWnd *pWnd){
	 return ((CPMSReturnOrder*)pWnd)->OnEditPMSReturnOrder();
} 
static int _OnDeletePMSReturnOrderFnc(CWnd *pWnd){
	 return ((CPMSReturnOrder*)pWnd)->OnDeletePMSReturnOrder();
} 
static int _OnSavePMSReturnOrderFnc(CWnd *pWnd){
	 return ((CPMSReturnOrder*)pWnd)->OnSavePMSReturnOrder();
} 
static int _OnFindPMSReturnOrderFnc(CWnd *pWnd){
	((CPMSReturnOrder*)pWnd)->OnIDButtonSelect();
	return 0;
} 

static int _OnCancelPMSReturnOrderFnc(CWnd *pWnd){
	 return ((CPMSReturnOrder*)pWnd)->OnCancelPMSReturnOrder();
} 
CPMSReturnOrder::CPMSReturnOrder(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 800;
	m_nDlgHeight = 600;
	SetDefaultValues();


}
CPMSReturnOrder::~CPMSReturnOrder(){
}
void CPMSReturnOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 795, 570);
	m_wndList.Create(this,10, 137, 790, 567); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 52);
	m_wndID.Create(this,95, 30, 175, 52); 
	m_wndIDButton.Create(this, _T("..."), 180, 30, 205, 52);
	m_wndOrderDateLabel.Create(this, _T("Return Date"), 210, 30, 270, 52);
	m_wndOrderDate.Create(this,275, 30, 387, 52); 
	m_wndStatusLabel.Create(this, _T("Status"), 392, 30, 472, 52);
	m_wndStatus.Create(this,477, 30, 790, 52); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 57, 90, 79);
	m_wndStock.Create(this,95, 57, 387, 79); 
	m_wndTypeLabel.Create(this, _T("Type"), 392, 57, 472, 79);
	m_wndType.Create(this,477, 57, 790, 79); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 10, 84, 90, 106);
	m_wndDeliverer.Create(this,95, 84, 387, 106); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 392, 84, 472, 106);
	m_wndReceiver.Create(this,477, 84, 790, 106); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 111, 90, 133);
	m_wndDescription.Create(this,95, 111, 472, 133); 
//	m_wndDepartmentLabel.Create(this, _T("Department"), 480, 111, 90, 133);
//	m_wndDepartment.Create(this,95, 111, 790, 133); 
	m_wndAdd.Create(this, _T("&Create Order"), 205, 573, 285, 597);
	m_wndEdit.Create(this, _T("&Edit"), 290, 573, 370, 597);
	m_wndDelete.Create(this, _T("&Delete"), 375, 573, 455, 597);
	m_wndSave.Create(this, _T("&Save"), 460, 573, 540, 597);
	m_wndCancel.Create(this, _T("&Cancel"), 545, 573, 625, 597);
	m_wndPrint.Create(this, _T("&Print"), 630, 573, 710, 597);
	m_wndIssue.Create(this, _T("&Send"), 715, 573, 795, 597);
	m_wndAddEntry.Create(this, _T("&Add Drug"), 5, 573, 102, 597);
}
void CPMSReturnOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetCheckValue(true);
	
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndIDButton.ModifyStyle(WS_TABSTOP, 0);
	
	m_wndOrderDate.SetCheckValue(true);
	m_wndStatus.SetLimitText(1);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.SetReadOnly(TRUE);
	m_wndStock.SetCheckValue(true);
//	m_wndType.SetCheckValue(true);
	m_wndType.EnableWindow(false);
	m_wndDeliverer.SetLimitText(65);
	m_wndDeliverer.SetInitCap(true);
//	m_wndDeliverer.SetCheckValue(true);
	m_wndReceiver.SetLimitText(65);
	m_wndReceiver.SetInitCap(true);
//	m_wndReceiver.SetCheckValue(true);
	m_wndDescription.SetLimitText(81);
//	m_wndDescription.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Manufacturer"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Expire Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(7, _T("refidx"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(8, _T("itemid"), CFMT_TEXT, 0);
	


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	
	m_pms_return_orderTbl.SetTableName(_T("pms_return_order"));
	m_pms_return_orderTbl.AddField(_T("pmro_createdby"), dfText, 15); 
	m_pms_return_orderTbl.AddField(_T("pmro_createddate"), dfDateTime); 
	m_pms_return_orderTbl.AddField(_T("pmro_updatedby"), dfText, 15); 
	m_pms_return_orderTbl.AddField(_T("pmro_updateddate"), dfDateTime); 
	m_pms_return_orderTbl.AddField(_T("pmro_id"), dfText, 15); 
	m_pms_return_orderTbl.AddField(_T("pmro_impstockid"), dfLong); 
	m_pms_return_orderTbl.AddField(_T("pmro_orderdate"), dfDateTime); 
	m_pms_return_orderTbl.AddField(_T("pmro_senderby"), dfText, 15); 
	m_pms_return_orderTbl.AddField(_T("pmro_deliverby"), dfText, 65); 
	m_pms_return_orderTbl.AddField(_T("pmro_retstockid"), dfLong); 
	m_pms_return_orderTbl.AddField(_T("pmro_retdeptid"), dfText, 7); 
	m_pms_return_orderTbl.AddField(_T("pmro_issuedate"), dfDateTime); 
	m_pms_return_orderTbl.AddField(_T("pmro_issueby"), dfText, 15); 
	m_pms_return_orderTbl.AddField(_T("pmro_receiveby"), dfText, 65); 
	m_pms_return_orderTbl.AddField(_T("pmro_desc"), dfText, 81); 
	m_pms_return_orderTbl.AddField(_T("pmro_status"), dfText, 1); 
	m_pms_return_orderTbl.AddField(_T("pmro_type"), dfText, 1); 
	m_pms_return_orderTbl.AddField(_T("pmro_floor"), dfInteger); 

}
void CPMSReturnOrder::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Items List"));
	m_wndList.AddEvent(1, _T("Delete Items"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndIDButton.SetEvent(WE_CLICK, _OnIDButtonSelectFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndDeliverer.SetEvent(WE_CHANGE, _OnDelivererChangeFnc);
	//m_wndDeliverer.SetEvent(WE_SETFOCUS, _OnDelivererSetfocusFnc);
	//m_wndDeliverer.SetEvent(WE_KILLFOCUS, _OnDelivererKillfocusFnc);
	m_wndDeliverer.SetEvent(WE_CHECKVALUE, _OnDelivererCheckValueFnc);
	//m_wndReceiver.SetEvent(WE_CHANGE, _OnReceiverChangeFnc);
	//m_wndReceiver.SetEvent(WE_SETFOCUS, _OnReceiverSetfocusFnc);
	//m_wndReceiver.SetEvent(WE_KILLFOCUS, _OnReceiverKillfocusFnc);
	m_wndReceiver.SetEvent(WE_CHECKVALUE, _OnReceiverCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndIssue.SetEvent(WE_CLICK, _OnIssueSelectFnc);
	m_wndAddEntry.SetEvent(WE_CLICK, _OnAddEntrySelectFnc);

	SetMode(VM_NONE);
}
void CPMSReturnOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusDesc);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDeliverer);
	DDX_Text(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiver);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CPMSReturnOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM pms_return_order WHERE pmro_id='%s' AND pmro_type in('X','Y','Z') and pmro_retdeptid='%s' "), m_szID, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pmro_id"), m_szID);
		rs.GetValue(_T("pmro_createdby"), m_szCreatedBy);
		rs.GetValue(_T("pmro_impstockid"), m_szStockKey);
		rs.GetValue(_T("pmro_orderdate"), m_szOrderDate);
		rs.GetValue(_T("pmro_deliverby"), m_szDeliverer);
		rs.GetValue(_T("pmro_type"), m_szTypeKey);
		rs.GetValue(_T("pmro_receiveby"), m_szReceiver);
		rs.GetValue(_T("pmro_desc"), m_szDescription);
		rs.GetValue(_T("pmro_status"), m_szStatus);
		m_szStatusDesc = pMF->GetStatusString(m_szStatus);
		SetMode(VM_VIEW);
		OnListLoadData();
		CString szLabel;
		if(m_szStatus == _T("O")){
			TranslateString(_T("&Confirm"), szLabel);
		}
		else
			TranslateString(_T("&Disconfirm"), szLabel);
		m_wndIssue.SetWindowText(szLabel);
	}
	else
	{
		SetMode(VM_NONE);
		m_wndList.DeleteAllItems();
	}

}
void CPMSReturnOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE pmro_id='%s' "), m_szID);
		m_pms_return_orderTbl.Open(&pMF->m_db, szWhere);
	}
	else
	{
	   m_pms_return_orderTbl.SetValue(_T("pmro_floor"), pMF->m_nFloor);
	}
	m_pms_return_orderTbl.SetValue(_T("pmro_createdby"), pMF->GetCurrentUser());
	m_pms_return_orderTbl.SetValue(_T("pmro_createddate"), pMF->GetSysDateTime());
	m_pms_return_orderTbl.SetValue(_T("pmro_updatedby"), pMF->GetCurrentUser());
	m_pms_return_orderTbl.SetValue(_T("pmro_updateddate"), pMF->GetSysDateTime());
	m_pms_return_orderTbl.SetValue(_T("pmro_id"), m_szID);
	m_pms_return_orderTbl.SetValue(_T("pmro_impstockid"), m_szStockKey);
	m_pms_return_orderTbl.SetValue(_T("pmro_orderdate"), m_szOrderDate);
	m_pms_return_orderTbl.SetValue(_T("pmro_deliverby"), m_szDeliverer);
	m_pms_return_orderTbl.SetValue(_T("pmro_retstockid"), 0);
	m_pms_return_orderTbl.SetValue(_T("pmro_retdeptid"), pMF->m_szDept);
	m_pms_return_orderTbl.SetValue(_T("pmro_receiveby"), m_szReceiver);
	m_pms_return_orderTbl.SetValue(_T("pmro_desc"), m_szDescription);
	m_pms_return_orderTbl.SetValue(_T("pmro_status"), m_szStatus);
	m_pms_return_orderTbl.SetValue(_T("pmro_type"), m_szTypeKey);

}
void CPMSReturnOrder::SetDefaultValues(){

	m_szID.Empty();
	m_szOrderDate.Empty();
	m_szStatus.Empty();
	m_szStockKey.Empty();
	m_szTypeKey= _T("Y");
	m_szDeliverer.Empty();
	m_szReceiver.Empty();
	m_szDescription.Empty();

}
int CPMSReturnOrder::SetMode(int nMode){ 
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
			if(m_wndList.GetItemCount() > 0)
				m_wndStock.EnableWindow(false);
			if(m_szStatus != _T("O"))
			{
				m_wndOrderDate.EnableWindow(false);
			}
			if(m_wndList.GetItemCount() > 0)
				m_wndType.EnableWindow(false);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
			if(m_szStatus == _T("A")) EnableButtons(TRUE, 0, 1, 5, -1);			
			if(m_szStatus == _T("S")) EnableButtons(TRUE, 0, 1, 4,5, -1);
			if(m_szStatus == _T("O")) EnableButtons(FALSE, 3, 4, 5, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0,  -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		
		if(nMode == VM_ADD || nMode == VM_EDIT){
			m_wndIDButton.EnableWindow(false);
			m_wndID.EnableWindow(false);
		}
		else
		{
			m_wndIDButton.EnableWindow(true);
			m_wndID.EnableWindow(true);
		}

		if(m_wndList.GetItemCount() > 0)
			m_wndDelete.EnableWindow(false);
		
		if(m_szStatus != _T("O"))
		{
			m_wndAddEntry.EnableWindow(false);
			if(m_szStatus == _T("S"))
				m_wndIssue.EnableWindow(true);
			else
				m_wndIssue.EnableWindow(false);

		}
		else
		{
			m_wndAddEntry.EnableWindow(true);
			m_wndIssue.EnableWindow(true);
		}

		m_wndType.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CPMSReturnOrder::OnListDblClick(){
	
} 
void CPMSReturnOrder::OnListSelectChange(int nOldItem, int nNewItem){
	if(GetMode() == VM_ADD)
		SetMode(VM_NONE);
	if(GetMode() == VM_EDIT){
		SetMode(VM_VIEW);
	}
	if(GetMode() == VM_ADDCHILD)
	{
		SetMode(VM_VIEW);
	}
	
} 
int CPMSReturnOrder::OnListDeleteItem(){	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel  = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	
	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		ShowMessageBox(_T("This order is created by other user. Can not delete it"), 0);
		return 0;
	}

	if(m_szStatus != _T("O"))
		return -1;
	CString szSQL;
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	CString szItemId;
	pMF->BeginTransaction();
	for (int i = m_wndList.GetItemCount()-1; i >=0; i--)
	{
		if(m_wndList.GetItemState(i, LVIS_SELECTED))
		{
			int nIdx = str2int(m_wndList.GetItemText(i, 7));
			szItemId = m_wndList.GetItemText(i, 8);
			szSQL.Format(_T("SELECT pms_return_order_line_delete_entry2('%s', '%s', %ld) "), m_szID, szItemId, nIdx);
			int ret = pMF->ExecSQL(szSQL);
			if(ret > 0){
				m_wndList.DeleteItem(i);
			}
			else
			{
				pMF->Rollback();
				return -1;
			}
		}
	}
	pMF->Commit();
	return 0;

} 
long CPMSReturnOrder::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderBy;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	
	if(pMF->m_szDrugOrderByName == _T("Y")){
		szOrderBy.Format(_T(" ORDER BY name, unit, price "));
	}
	else
		szOrderBy.Format(_T(" ORDER BY idx "));


	szSQL.Format(_T(" SELECT ") \
			_T(" 	pmi_id as itemid,") \
			_T(" 	pmsi_pmrefidx as refidx,") \
			_T(" 	pmrol_index as idx,") \
			_T(" 	pmi_name as name,") \
			_T(" 	pmi_unit	as unit,") \
			_T("	sum(pmrol_qty) as qty, ") \
			_T(" 	pmsi_vatprice as price,") \
			_T(" 	pmsi_expdate as expdate,") \
			_T(" 	(SELECT sc_name FROM sys_country WHERE sc_id=pmsi_countryid) as productcountry") \
			_T(" FROM pms_return_order_line") \
			_T(" LEFT JOIN m_productitem_view ON(product_item_id=pmrol_sitemid)") \
			_T(" WHERE pmrol_id='%s' ") \
			_T(" GROUP BY itemid, refidx, idx, name, unit, price, expdate, productcountry %s ") ,	m_szID, szOrderBy);
									 

	nCount = rs.ExecSQL(szSQL);
	int		nIndex = 1;
	CString tmpStr;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("qty")), 
			rs.GetValue(_T("price")), 
			rs.GetValue(_T("mfgname")), 
			rs.GetValue(_T("expdate")), 
			rs.GetValue(_T("refidx")), 			
			rs.GetValue(_T("itemid")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CPMSReturnOrder::OnIDChange(){
	
} */
/*void CPMSReturnOrder::OnIDSetfocus(){
	
} */
/*void CPMSReturnOrder::OnIDKillfocus(){
	
} */
int CPMSReturnOrder::OnIDCheckValue(){
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT){
		m_wndID.GetWindowText(m_szID);
		GetDataToScreen();
		m_wndID.SetFocus();
		return 1;
	}
	if(GetMode() == VM_EDIT)
		return 1;
	if(GetMode() == VM_ADD)
	{
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CString szSQL, szID;
		CRecord rs(&pMF->m_db);
		m_wndID.GetWindowText(szID);
		szSQL.Format(_T("SELECT COUNT(*) FROM pms_return_order WHERE pmro_id='%s' "), szID);
		rs.ExecSQL(szSQL);

		if(rs.GetIntValue() > 0){
			ShowMessageBox(_T("Invoice No Is Existing"), MB_OK);
			return -1;
		}
		return 0;
	}
	return 0;
} 
void CPMSReturnOrder::OnIDButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	static CString szFromDate, szToDate;

	CPMSReturnOrderListDialog dlg(this);
	dlg.m_szFromDate = szFromDate;
	dlg.m_szToDate = szToDate;
	if(dlg.DoModal() == IDOK){
		m_szID = dlg.m_szID;
		GetDataToScreen();
		szFromDate = dlg.m_szFromDate;
		szToDate = dlg.m_szToDate;
	}
	SetFocus();
	
} 
/*void CPMSReturnOrder::OnOrderDateChange(){
	
} */
/*void CPMSReturnOrder::OnOrderDateSetfocus(){
	
} */
/*void CPMSReturnOrder::OnOrderDateKillfocus(){
	
} */
int CPMSReturnOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CPMSReturnOrder::OnStatusChange(){
	
} */
/*void CPMSReturnOrder::OnStatusSetfocus(){
	
} */
/*void CPMSReturnOrder::OnStatusKillfocus(){
	
} */
int CPMSReturnOrder::OnStatusCheckValue(){
	return 0;
} 
void CPMSReturnOrder::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSReturnOrder::OnStockSelendok(){
	 
}
/*void CPMSReturnOrder::OnStockSetfocus(){
	
}*/
/*void CPMSReturnOrder::OnStockKillfocus(){
	
}*/
long CPMSReturnOrder::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0){
		szWhere.Format(_T(" AND pmsl_stockid=%d "), ToInt(m_szStockKey));
	};

	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	
	if(!pMF->m_szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" and pmsl_stockid in(%s) "), pMF->m_szStorages);

	szSQL.Format(_T("SELECT * FROM pms_stocklist WHERE pmsl_type<>'C' %s ORDER BY pmsl_type, pmsl_stockid "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("pmsl_stockid")), 
			rs.GetValue(_T("pmsl_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSReturnOrder::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSReturnOrder::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSReturnOrder::OnTypeSelendok(){
	 
}
/*void CPMSReturnOrder::OnTypeSetfocus(){
	
}*/
/*void CPMSReturnOrder::OnTypeKillfocus(){
	
}*/
long CPMSReturnOrder::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szTypeKey);
	};
	
	
	m_wndType.DeleteAllItems(); 
		
	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_id='pms_import_type' AND ss_code in('Y') %s ORDER BY ss_code "),  szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("ss_code")), 
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSReturnOrder::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPMSReturnOrder::OnDelivererChange(){
	
} */
/*void CPMSReturnOrder::OnDelivererSetfocus(){
	
} */
/*void CPMSReturnOrder::OnDelivererKillfocus(){
	
} */
int CPMSReturnOrder::OnDelivererCheckValue(){
	return 0;
} 
/*void CPMSReturnOrder::OnReceiverChange(){
	
} */
/*void CPMSReturnOrder::OnReceiverSetfocus(){
	
} */
/*void CPMSReturnOrder::OnReceiverKillfocus(){
	
} */
int CPMSReturnOrder::OnReceiverCheckValue(){
	return 0;
} 
/*void CPMSReturnOrder::OnDescriptionChange(){
	
} */
/*void CPMSReturnOrder::OnDescriptionSetfocus(){
	
} */
/*void CPMSReturnOrder::OnDescriptionKillfocus(){
	
} */
int CPMSReturnOrder::OnDescriptionCheckValue(){
	return 0;
} 
void CPMSReturnOrder::OnAddSelect(){
	OnAddPMSReturnOrder();	
} 
void CPMSReturnOrder::OnEditSelect(){
	OnEditPMSReturnOrder();	
} 
void CPMSReturnOrder::OnDeleteSelect(){
	OnDeletePMSReturnOrder();
	
} 
void CPMSReturnOrder::OnSaveSelect(){
	OnSavePMSReturnOrder();
	
} 
void CPMSReturnOrder::OnCancelSelect(){
	OnCancelPMSReturnOrder();	
} 
void CPMSReturnOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CRecord rsx(&pMF->m_db);

	if(!pMF->CheckPermission(_T("12.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}
	pMF->PrintReturnDrugOrder(m_szID);
	OnPrintListPatientReturnSheetNo(true);


	return ;


	szSQL.Format(_T("  SELECT pmro_id as invoiceno,") \
	_T("  	pmro_orderdate as orderdate,") \
	_T("  	pmro_status as status,") \
	_T("  	pmro_deliverby as deliverby,") \
	_T("  	pmro_receiveby as receiveby,") \
	_T(" 	pmro_status  as status,") \
	_T(" 	pmro_senderby  as sendby,") \
	_T(" 	pmro_retdeptid  as retdept,") \
	_T(" 	(select pmsl_name from pms_stocklist where pmsl_stockid=pmro_impstockid) as stockname,	") \
	_T("	pmro_desc as note, ") \
	_T("	pmro_floor as floor, ") \
	_T("	sys_sel_getname('pms_import_type', pmro_type) as reason ") \
	_T("  FROM pms_return_order") \
	_T("  WHERE pmro_id='%s' AND pmro_status <>'O' "), m_szID);
//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	
	CReport rpt;
	CString tmpStr;
	CString szSendBy;
	CString szOrderBy;

	rs.GetValue(_T("sendby"), szSendBy);


	if(pMF->m_szDrugOrderByName == _T("Y")){
		szOrderBy.Format(_T(" ORDER BY pmi_name, pmi_unit, pmsi_vatprice "));
	}
	else
		szOrderBy.Format(_T(" ORDER BY idx "));


	if(pMF->m_szReturnOrderPrintDetail != _T("Y"))
	{
		if(!rpt.Init(_T("Reports/HMS/PMS_RETURNORDERVOTE.RPT")) )
			return;
		rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
		rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE2"), pMF->m_CompanyInfo.sc_pname);
		rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
		rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME2"), pMF->m_CompanyInfo.sc_name);

		rs.GetValue(_T("InvoiceNo"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InvoiceNo2"), tmpStr);
		
		rpt.GetReportHeader()->SetValue(_T("OrderID"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("OrderID2"), tmpStr);

		rs.GetValue(_T("orderdate"), tmpStr);

		CString szDate;
		szDate = CDate::Convert(rs.GetValue(_T("orderdate")), yyyymmdd, ddmmyyyy);
		rpt.GetReportHeader()->SetValue(_T("OrderDate"), szDate);
		rpt.GetReportHeader()->SetValue(_T("OrderDate2"), szDate);
		CString szSysDate;
		szSysDate = pMF->GetSysDate(); 
		szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
		rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);
		rpt.GetReportHeader()->SetValue(_T("PrintDate2"), szDate);
		rs.GetValue(_T("Status"), tmpStr);
		tmpStr = pMF->GetStatusString(tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Status"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Status2"), tmpStr);
		
		rs.GetValue(_T("StockName"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("StockName"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("StockName2"), tmpStr);

		tmpStr = pMF->GetDepartmentName(pMF->m_szDept);
		rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Department2"), tmpStr);

		rs.GetValue(_T("retdept"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ReturnDept"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ReturnDept2"), tmpStr);

		
		rs.GetValue(_T("note"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Comment"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Comment2"), tmpStr);
		
		rs.GetValue(_T("reason"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Reason"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Reason2"), tmpStr);
		
		rs.GetValue(_T("deliverby"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("DeliverBy"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("DeliverBy2"), tmpStr);

		rs.GetValue(_T("ReceiveBy"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ReceiveBy"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ReceiveBy2"), tmpStr);

		tmpStr = pMF->GetSelectionString(_T("hms_floor"), rs.GetValue(_T("pmro_floor")));
		rpt.GetReportHeader()->SetValue(_T("Floor"), tmpStr);

		//Page Header
		//Report Detail

		int nCount = 0;
		double dMoney = 0;
		double nTotalAmount = 0;
		CString szMoney, szExprDate;
		szSQL.Format(_T("SELECT pmrol_index as idx, pmi_name, pmi_unit, pmi_id, pmsi_lotno, pmsi_vatprice, sum(pmrol_qty) as qty, sum(pmrol_qty*pmsi_vatprice) as amount  ") \
			_T(" FROM pms_items ") \
			_T(" LEFT JOIN m_productitem_view ON(pmsi_itemid=pmi_id) ") \
			_T(" LEFT JOIN pms_return_order_line ON(product_item_id=pmrol_sitemid) ") \
			_T(" WHERE pmrol_id='%s' GROUP BY idx, pmi_name, pmi_unit, pmi_id, pmsi_lotno,  pmsi_vatprice %s "), m_szID, szOrderBy);
		rs.ExecSQL(szSQL);
		CReportSection* rptDetail = rpt.GetDetail(0); 
		while(!rs.IsEOF()){ 
			rptDetail = rpt.AddDetail();
			rs.GetValue(_T("pmsi_expdate"), tmpStr);
			if(!CDate::IsValid(tmpStr))
				szExprDate.Empty();
			else
				szExprDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);

		//	dMoney = ToDouble(rs.GetValue(_T("qty")))*ToDouble(rs.GetValue(_T("pmsi_vatprice")));
			rs.GetValue(_T("amount"), dMoney);
			nTotalAmount += dMoney;
			szMoney.Format(_T("%.2f"), dMoney);
			nCount++;	
			tmpStr.Format(_T("%d"), nCount);
			rptDetail->SetValue(_T("1"), tmpStr);
			rptDetail->SetValue(_T("12"), tmpStr);
			rs.GetValue(_T("pmi_name"), tmpStr) ;
			rptDetail->SetValue(_T("2"), tmpStr);
			rptDetail->SetValue(_T("22"), tmpStr);
			rs.GetValue(_T("pmi_id"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			rptDetail->SetValue(_T("32"), tmpStr);
			rs.GetValue(_T("pmi_unit"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			rptDetail->SetValue(_T("42"), tmpStr);
			rptDetail->SetValue(_T("5"), szExprDate);
			rptDetail->SetValue(_T("52"), szExprDate);
			rs.GetValue(_T("pmsi_lotno"), tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			rptDetail->SetValue(_T("62"), tmpStr);
			
			FormatCurrencyStr(rs.GetValue(_T("qty")), tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);
			rptDetail->SetValue(_T("72"), tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			rptDetail->SetValue(_T("82"), tmpStr);
			FormatCurrencyStr(rs.GetValue(_T("pmsi_vatprice")), tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);
			rptDetail->SetValue(_T("92"), tmpStr);
			FormatCurrencyStr(szMoney, tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);
			rptDetail->SetValue(_T("102"), tmpStr);
			rs.MoveNext();
		}
		//Page Footer
		//Report Footer
		tmpStr.Format(_T("%d"), nCount);
		rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalItem2"), tmpStr);
		FormatCurrency(nTotalAmount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount2"), tmpStr);
		szMoney.Format(_T("%.2f"), nTotalAmount);
		MoneyToString(szMoney, tmpStr);
		if(!tmpStr.IsEmpty())
			tmpStr += _T(" \x111\x1ED3ng");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInWord2"), tmpStr);

		rpt.PrintPreview();
	}
	else
	{

		bool bDirect = false;

		CRecord rst(&pMF->m_db);
		CRecord rsp(&pMF->m_db);
		CRecord rsl(&pMF->m_db);
		CString szGroup, szTitle, szPrintType, szNote;
		CString	szReportName;
		szSQL.Format(_T("SELECT * FROM pms_drugtype ORDER BY pmdt_id "));
		rst.ExecSQL(szSQL);
		while(!rst.IsEOF())
		{
			rst.GetValue(_T("pmdt_name2"), tmpStr);
			StringUpper(tmpStr, szTitle);
			rst.GetValue(_T("pmdt_desc"), szGroup);
			szGroup.Trim();
			rst.GetValue(_T("pmdt_printtype"), szPrintType);
			rst.GetValue(_T("pmdt_reportname2"), tmpStr);
			if(tmpStr.IsEmpty())
				szReportName = _T("Reports/HMS/PMS_RETURNORDERVOTE.RPT");
			else
				szReportName.Format(_T("Reports/HMS/%s"), tmpStr);

			if(!rpt.Init(szReportName) )
				return;
			
			rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
			rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE2"), pMF->m_CompanyInfo.sc_pname);
			rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
			rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME2"), pMF->m_CompanyInfo.sc_name);
			rpt.GetReportHeader()->SetValue(_T("TITLE"), szTitle);
			rpt.GetReportHeader()->SetValue(_T("TITLE2"), szTitle);

			rs.GetValue(_T("InvoiceNo"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("InvoiceNo2"), tmpStr);
			
			rpt.GetReportHeader()->SetValue(_T("OrderID"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("OrderID2"), tmpStr);

			rs.GetValue(_T("orderdate"), tmpStr);
			
			CString szSysDate, tmpStr2;
			CString szDate = CDate::Convert(rs.GetValue(_T("orderdate")), yyyymmdd, ddmmyyyy);

			rpt.GetReportHeader()->Format(_T("OrderDate"), szDate);
			rpt.GetReportHeader()->Format(_T("OrderDate2"), szDate);
			
			szSysDate = pMF->GetSysDate(); 
			szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));

			rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);
			rpt.GetReportHeader()->SetValue(_T("PrintDate2"), szDate);
			
			rs.GetValue(_T("Status"), tmpStr);
			tmpStr2 =  pMF->GetStatusString(tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Status"), tmpStr2);
			rpt.GetReportHeader()->SetValue(_T("Status2"), tmpStr2);
			rs.GetValue(_T("StockName"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("StockName"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("StockName2"), tmpStr);
			
			tmpStr = pMF->GetDepartmentName(pMF->m_szDept);
			rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Department2"), tmpStr);

			rs.GetValue(_T("retdept"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("RetDept"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("RetDept2"), tmpStr);

			rs.GetValue(_T("note"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Comment"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Comment2"), tmpStr);
			rs.GetValue(_T("reason"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Reason"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Reason2"), tmpStr);
			rs.GetValue(_T("deliverby"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("DeliverBy"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("DeliverBy2"), tmpStr);
			rs.GetValue(_T("ReceiveBy"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("ReceiveBy"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("ReceiveBy2"), tmpStr);
		//Page Header
			//Report Detail

			szSQL.Format(_T("SELECT pmrol_index as idx, pmi_name, pmi_unit, pmi_id, pmsi_lotno, pmsi_vatprice, sum(pmrol_qty) as qty, sum(pmrol_qty*pmsi_vatprice) as amount  ") \
				_T(" FROM pms_items ") \
				_T(" LEFT JOIN m_productitem_view ON(pmsi_itemid=pmi_id) ") \
				_T(" LEFT JOIN pms_return_order_line ON(product_item_id=pmrol_sitemid) ") \
				_T(" WHERE pmrol_id='%s' and pmi_typeid in(%s) GROUP BY idx, pmi_name, pmi_unit, pmi_id, pmsi_lotno,  pmsi_vatprice %s "), m_szID, szGroup, szOrderBy);
//_fmsg(_T("%s"), szSQL);
			rsl.ExecSQL(szSQL);
			if(rsl.IsEOF()){
				rst.MoveNext();
				continue;
			}
			CReportSection* rptDetail;
			rpt.ResetContent();
			int nTotalItem=1;
			int nCount=0;
			double nTotalAmount = 0;
			CString szItemId;
			double dMoney = 0;
			CString szMoney, szExprDate;

			while(!rsl.IsEOF()){ 
				rptDetail = rpt.AddDetail();
/*
				rsl.GetValue(_T("pmsi_expdate"), tmpStr);
				if(!CDate::IsValid(tmpStr))
					szExprDate.Empty();
				else
					szExprDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
*/
				rsl.GetValue(_T("amount"), dMoney);
				nTotalAmount += dMoney;
				szMoney.Format(_T("%.2f"), dMoney);

				nCount++;	
				nTotalItem ++;
				tmpStr.Format(_T("%d"), nCount);
				rptDetail->SetValue(_T("1"), tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);
				
				rsl.GetValue(_T("pmi_name"), tmpStr) ;
				rptDetail->SetValue(_T("2"), tmpStr);
				rptDetail->SetValue(_T("22"), tmpStr);
				
				rsl.GetValue(_T("pmi_unit"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);
				rptDetail->SetValue(_T("32"), tmpStr);
				
				FormatCurrencyStr(rsl.GetValue(_T("qty")), tmpStr);	
				rptDetail->SetValue(_T("4"), tmpStr);
				rptDetail->SetValue(_T("42"), tmpStr);
				
				FormatCurrencyStr(rsl.GetValue(_T("pmsi_vatprice")), tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				rptDetail->SetValue(_T("52"), tmpStr);
				
				rsl.MoveNext();
			}

			//Page Footer
			//Report Footer
				tmpStr.Format(_T("%d"), nTotalItem-1);
				rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
				rpt.GetReportFooter()->SetValue(_T("TotalItem2"), tmpStr);
				tmpStr.Format(_T("%.0f"), nTotalAmount);
				FormatCurrencyStr(tmpStr, tmpStr2);
				rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr2);
				rpt.GetReportFooter()->SetValue(_T("TotalAmount2"), tmpStr2);
				
				MoneyToString(szMoney, tmpStr);
				if(!tmpStr.IsEmpty())
					tmpStr += _T(" \x111\x1ED3ng");
				rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
				rpt.GetReportFooter()->SetValue(_T("SumInWord2"), tmpStr);
				CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
				if(img)
				{
					img->SetHBITMAP(pMF->GetSignatureImage(szSendBy));
					img->SetFixedHeight(false);
				}

				CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
				if(img)
				{
					img2->SetHBITMAP(pMF->GetSignatureImage(szSendBy));
					img2->SetFixedHeight(false);
				}

				tmpStr = pMF->GetDoctorName(szSendBy);
				rpt.GetReportFooter()->SetValue(_T("DoctorName"), tmpStr);
				rpt.GetReportFooter()->SetValue(_T("DoctorName2"), tmpStr);

				tmpStr = pMF->GetSysDate();	
				szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
				rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
				rpt.GetReportFooter()->SetValue(_T("PrintDate2"), szDate);

				rpt.PrintPreview();;
			//	bDirect=true;
			//	rpt.GetReportHeader()->SetValue(_T("Sheet"), _T("2"));
			//	rpt.Print(bDirect);
			
			
			rst.MoveNext();
		}
	}

	OnPrintListPatientReturnSheetNo(true);


} 
void CPMSReturnOrder::OnIssueSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	if(m_wndList.GetItemCount() <= 0)
		return;

	if(!pMF->CheckPermission(_T("12.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	CRecord rs(&pMF->m_db);
	CString tmpStr;

	szSQL.Format(_T("SELECT pmro_status FROM pms_return_order WHERE pmro_id='%s' "), m_szID); 
	rs.ExecSQL(szSQL);
	tmpStr = rs.GetStringValue();

	if (tmpStr ==_T("A")) 
	{
		ShowMessageBox(_T("Cannot manipulate with current status"));
		return;
	}

	if(tmpStr == _T("O"))
	{
		if(ShowMessageBox(_T("Do you want to send order?(Y/N)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 			return;
		szSQL.Format(_T("UPDATE pms_return_order SET pmro_senderby='%s', pmro_updatedby='%s', pmro_updateddate=systimestamp, pmro_status='S' ") \
		_T("WHERE pmro_id='%s' and pmro_status='O' "), pMF->GetCurrentUser(), pMF->GetCurrentUser(), m_szID);
		int ret = pMF->ExecSQL(szSQL);
		if(ret > 0){
			GetDataToScreen();
		}
		
		szSQL.Format(_T("UPDATE hms_drug_return SET hdr_status ='S' WHERE hdr_supplementid='%s'"), m_szID);
		pMF->ExecSQL(szSQL);
	}
	else
	{
		if(ShowMessageBox(_T("Do you want to cancel order?(Y/N)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 			return; 
		szSQL.Format(_T("UPDATE pms_return_order SET pmro_senderby='', pmro_updatedby='%s', pmro_updateddate=systimestamp, pmro_status='O' ") \
		_T("WHERE pmro_id='%s' and pmro_status='S' "), pMF->GetCurrentUser(), m_szID);
		int ret = pMF->ExecSQL(szSQL);
		if(ret > 0){
		/*	szSQL.Format(_T("UPDATE hms_drug_return SET hdr_status ='O' WHERE hdr_supplementid='%s'"), m_szID);
			pMF->ExecSQL(szSQL);*/
			GetDataToScreen();
		}		

	}
	
} 
void CPMSReturnOrder::OnAddEntrySelect(){

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("12.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->GetCurrentUser() != m_szCreatedBy){
		CString tmpStr, szMsg;
		TranslateString(_T("This is order created by an [%s]. Can not process it"), tmpStr);
		szMsg.Format(tmpStr, m_szCreatedBy);
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
	}

	UpdateData(true);

	CPMSReturnDrugListDialog dlg(this);
	dlg.m_szSheetID = m_szID;
	dlg.m_nStockID = ToInt(m_szStockKey);
	dlg.m_szReturnDate = m_szOrderDate;
	dlg.m_szCreatedBy = m_szCreatedBy;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
} 
int CPMSReturnOrder::OnAddPMSReturnOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	CString szSQL;

	if(!pMF->CheckPermission(_T("12.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	SetMode(VM_ADD);
	m_szID.Empty();
	m_szOrderDate = pMF->GetSysDateTime();
	m_wndStock.SetFocus();
	m_szStatus = _T("O");
	m_wndList.DeleteAllItems();	
	m_wndID.EnableWindow(false);
	UpdateData(false);
	return 0;  
} 
int CPMSReturnOrder::OnEditPMSReturnOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if(!pMF->CheckPermission(_T("12.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

 	SetMode(VM_EDIT);
	return 0; 
 
} 
int CPMSReturnOrder::OnDeletePMSReturnOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);

 	CString szSQL, tmpStr; 
	
	if(!pMF->CheckPermission(_T("12.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}
	if(m_wndList.GetItemCount() > 0) 
	{
		ShowMessageBox(_T("Ban phai xoa thuoc truoc khi xoa phieu"));
		return -1;
	}

	szSQL.Format(_T("SELECT pmro_status FROM pms_return_order WHERE pmro_id='%s' "), m_szID); 
	rs.ExecSQL(szSQL);
	tmpStr = rs.GetStringValue();
	if (tmpStr !=_T("O")) 
	{
		ShowMessageBox(_T("Cannot manipulate with current status"));
		return -1;	
	}

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1;

	

	
	szSQL.Format(_T("DELETE FROM pms_return_order WHERE pmro_id='%s' "), m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE);  		
 	}
	
 	
	return 0;
 } 
int CPMSReturnOrder::OnSavePMSReturnOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 

	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
 	if(!IsValidateData()) 
 		return -1; 
	if(m_szStockKey == m_szTypeKey)
	{
		ShowMessageBox(_T("Invalid import stock"), 0);
		m_wndType.SetFocus();
		return -1;
	}
	
 	if(GetMode() == VM_ADD){ 
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT GetNextValues('RETURNORDER') "));
		rs.ExecSQL(szSQL);
		m_szID.Format(_T("%s"), rs.GetStringValue());
		m_pms_return_orderTbl.SetValue(_T("pmro_id"), m_szID);

 		szSQL = m_pms_return_orderTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE pmro_id='%s' and pmro_status='O' "), m_szID); 
 		szSQL = m_pms_return_orderTbl.GetUpdateSQL(_T("pmro_createdby, pmro_createddate,pmro_issuedate,pmro_status,pmro_type")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		GetDataToScreen();
		m_wndAddEntry.SetFocus();
 	} 
 	return ret; 
}
int CPMSReturnOrder::OnCancelPMSReturnOrder(){
	
 	if(GetMode() == VM_ADD || GetMode() == VM_NONE) 
 		SetMode(VM_NONE); 
 	else 
 		SetMode(VM_VIEW); 

 	return 0;
} 
int CPMSReturnOrder::OnPMSReturnOrderListLoadData(){
	return 0;
}

void CPMSReturnOrder::OnPrintListPatientReturnSheetNo(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL, szObjects, szWhere, tmpStr2;
	
	UpdateData(TRUE);

	szSQL.Format(_T(" SELECT distinct pmrol_id as SheetNo,") \
		_T(" 	hdr_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age ") \
		_T(" FROM pms_return_order_line ") \
		_T(" LEFT JOIN hms_drug_return ON(hdr_supplementid=pmrol_id and hdr_sitemid=pmrol_sitemid) ") \
		_T(" RIGHT JOIN hms_doc ON(hd_docno=hdr_docno)") \
		_T(" RIGHT JOIN hms_patient ON(hp_patientno=hd_patientno) ") \
		_T(" WHERE 	hdr_stockid=%d ") \
		_T(" 	and pmrol_id ='%s' and hdr_confirmby='%s' ") \
		_T(" ORDER BY SheetNo") , ToInt(m_szStockKey), m_szID, m_szCreatedBy);
_fmsg(_T("%s"), szSQL);
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	if(!rpt.Init(_T("Reports/HMS/PMS_DANHSACHTHUOCTRALAI.RPT")) )
		return;
	
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	szSysDate = pMF->GetSysDate(); 

	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStock.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetCurrentDepartmentName());

	szSysDate = m_szOrderDate;
	rpt.GetReportHeader()->Format(_T("ReportDate"), szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4), szSysDate.Right(5));
	
	tmpStr.Empty();			
	
	//Page Header
	//Report Detail
	

	CReportSection* rptDetail;
	CReportSection* rptGroup;
	long nItem = 1, nTotalOrder=0;
	long nDocno;
	double nTotalAmount=0,cost, nAmount;

	while(!rs.IsEOF())
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
		rs.GetValue(_T("docno"), nDocno);
		//tmpStr.Format(_T("%ld"), nOrderID);
		//rptGroup->SetValue(_T("OrderID"), tmpStr);
		TranslateString(_T("Age"), tmpStr2);
		tmpStr.Format(_T("[%ld]  -  %s   -   %s:%s"), nDocno, rs.GetValue(_T("pname")),tmpStr2,rs.GetValue(_T("Age")));
		rptGroup->SetValue(_T("PName"), tmpStr);
		rs.GetValue(_T("doctor"), tmpStr);
		rptGroup->SetValue(_T("Amount"), tmpStr);		
		
		szSQL.Format(_T("SELECT pmi_name as name, pmi_unit as unit, pmi_id, pmsi_lotno,pmsi_expdate, pmsi_vatprice as price, ") \
		_T("	sum(hdr_qty) as qty, sum(hdr_qty*pmsi_vatprice) as amount  ") \
		_T(" FROM pms_return_order_line ") \
		_T(" LEFT JOIN hms_drug_return ON(hdr_supplementid=pmrol_id and hdr_sitemid=pmrol_sitemid) ") \
		_T(" RIGHT JOIN m_productitem_view ON(product_item_id=pmrol_sitemid) ") \
		_T(" RIGHT JOIN pms_items ON(pmi_id=pmsi_itemid) ") \
		_T(" WHERE pmrol_id='%s' and hdr_docno='%ld' and hdr_confirmby='%s'")\
		_T(" GROUP BY pmi_name, pmi_unit, pmi_id, pmsi_lotno, pmsi_expdate, pmsi_vatprice  ") \
		_T( "ORDER BY pmi_name "), m_szID, nDocno,m_szCreatedBy);
		rsl.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
		nItem = 1;
		nAmount  =0;
		while(!rsl.IsEOF())
		{
			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%ld"), nItem++);			
			rptDetail->SetValue(_T("1"), tmpStr);
			rsl.GetValue(_T("name"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rsl.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);			
			rsl.GetValue(_T("price"), tmpStr);			
			rptDetail->SetValue(_T("4"), tmpStr);
			rsl.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rsl.GetValue(_T("amount"), cost);
			FormatCurrency(cost, tmpStr);			
			rptDetail->SetValue(_T("6"), tmpStr);				
			nAmount +=cost;
			rsl.MoveNext();
		}		 
		nTotalAmount += nAmount;
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));		
		rptGroup->GetItem(_T("PName"))->SetTextAlign(1);
		rptGroup->GetItem(_T("PName"))->SetItalic(true);
		rptGroup->GetItem(_T("Amount"))->SetItalic(true);
		TranslateString(_T("Total Amount"), tmpStr);
		rptGroup->SetValue(_T("PName"), tmpStr);
		FormatCurrency(nAmount, tmpStr);		
		rptGroup->SetValue(_T("Amount"), tmpStr);
		nTotalOrder ++;
		rs.MoveNext();
	}
	
	//Page Footer
	//Report Footer

	tmpStr.Format(_T("%ld"), nTotalOrder);
	rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
	//tmpStr.Format(_T("%.2f"), nTotalAmount);
	FormatCurrency(nTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

}

