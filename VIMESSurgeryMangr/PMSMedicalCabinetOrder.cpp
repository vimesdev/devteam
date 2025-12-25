#include "PMSMedicalCabinetOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "PMSMedicalCabinetOrderEntry.h"
#include "PMSMedicalCabinetOrderListDialog.h"
#include "HMSConfirmDialog.h"
#include "ReportDocument.h"
#include "HMSCabinetDrugIssueDialog.h"


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrder*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSMedicalCabinetOrder*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrder*)pWnd)->OnListDeleteItem();
} 
static int _OnListSupplementDrugIssuedFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrder*)pWnd)->OnListSupplementDrugIssued();
} 

/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrder *)pWnd)->OnIDCheckValue();
} 
static void _OnIDButtonSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrder *pVw = (CPMSMedicalCabinetOrder *)pWnd;
	pVw->OnIDButtonSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrder *)pWnd)->OnStatusCheckValue();
} 
static void _OnFromStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSMedicalCabinetOrder* )pWnd)->OnFromStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStockSelendokFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnFromStockSelendok();
}
/*static void _OnFromStockSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnFromStockKillfocus();
}*/
/*static void _OnFromStockKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnFromStockKillfocus();
}*/
static long _OnFromStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrder *)pWnd)->OnFromStockLoadData();
}
/*static void _OnFromStockAddNewFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnFromStockAddNew();
}*/
static void _OnToStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSMedicalCabinetOrder* )pWnd)->OnToStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStockSelendokFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnToStockSelendok();
}
/*static void _OnToStockSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnToStockKillfocus();
}*/
/*static void _OnToStockKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnToStockKillfocus();
}*/
static long _OnToStockLoadDataFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrder *)pWnd)->OnToStockLoadData();
}
/*static void _OnToStockAddNewFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnToStockAddNew();
}*/
/*static void _OnDelivererChangeFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnDelivererChange();
} */
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnDelivererSetfocus();} */ 
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnDelivererKillfocus();
} */
static int _OnDelivererCheckValueFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrder *)pWnd)->OnDelivererCheckValue();
} 
/*static void _OnReceiverChangeFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnReceiverChange();
} */
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnReceiverSetfocus();} */ 
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnReceiverKillfocus();
} */
static int _OnReceiverCheckValueFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrder *)pWnd)->OnReceiverCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrder *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrder *pVw = (CPMSMedicalCabinetOrder *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrder *pVw = (CPMSMedicalCabinetOrder *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrder *pVw = (CPMSMedicalCabinetOrder *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrder *pVw = (CPMSMedicalCabinetOrder *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrder *pVw = (CPMSMedicalCabinetOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrder *pVw = (CPMSMedicalCabinetOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnAcceptSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrder *pVw = (CPMSMedicalCabinetOrder *)pWnd;
	pVw->OnAcceptSelect();
} 
static void _OnAddEntrySelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrder *pVw = (CPMSMedicalCabinetOrder *)pWnd;
	pVw->OnAddEntrySelect();
} 
static int _OnAddPMSMedicalCabinetOrderFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrder*)pWnd)->OnAddPMSMedicalCabinetOrder();
} 
static int _OnEditPMSMedicalCabinetOrderFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrder*)pWnd)->OnEditPMSMedicalCabinetOrder();
} 
static int _OnDeletePMSMedicalCabinetOrderFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrder*)pWnd)->OnDeletePMSMedicalCabinetOrder();
} 
static int _OnSavePMSMedicalCabinetOrderFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrder*)pWnd)->OnSavePMSMedicalCabinetOrder();
} 
static int _OnFindPMSMedicalCabinetOrderFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrder*)pWnd)->OnIDButtonSelect();
	return 0;
} 

static int _OnCancelPMSMedicalCabinetOrderFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrder*)pWnd)->OnCancelPMSMedicalCabinetOrder();
} 
CPMSMedicalCabinetOrder::CPMSMedicalCabinetOrder()
	
{
	m_nDlgWidth = 800;
	m_nDlgHeight = 600;
	SetDefaultValues();
	m_szType=_T("C");
	m_szCurrentOrderType = _T("P");
}
CPMSMedicalCabinetOrder::~CPMSMedicalCabinetOrder(){
}
void CPMSMedicalCabinetOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 795, 566);
	m_wndList.Create(this,10, 135, 790, 560); 
	m_wndIDLabel.Create(this, _T("Order ID"), 10, 28, 90, 50);
	m_wndID.Create(this,95, 28, 175, 50); 
	m_wndIDButton.Create(this, _T("..."), 180, 28, 205, 50);
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 350, 29, 440, 51);
	m_wndOrderDate.Create(this,445, 29, 525, 51); 
	m_wndStatusLabel.Create(this, _T("Status"), 533, 28, 613, 50);
	m_wndStatus.Create(this,618, 28, 790, 50); 
	m_wndFromStockLabel.Create(this, _T("From Stock"), 10, 55, 90, 77);
	m_wndFromStock.Create(this,95, 55, 345, 77); 
	m_wndToStockLabel.Create(this, _T("To Stock"), 350, 55, 440, 77);
	m_wndToStock.Create(this,445, 55, 790, 77); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 10, 82, 90, 104);
	m_wndDeliverer.Create(this,95, 82, 345, 104); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 350, 82, 440, 104);
	m_wndReceiver.Create(this,445, 82, 790, 104); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 109, 90, 131);
	m_wndDescription.Create(this,95, 109, 790, 131); 
	m_wndAdd.Create(this, _T("&Create"), 206, 571, 286, 595);
	m_wndEdit.Create(this, _T("&Edit"), 291, 571, 371, 595);
	m_wndDelete.Create(this, _T("&Delete"), 376, 571, 456, 595);
	m_wndSave.Create(this, _T("&Save"), 461, 571, 541, 595);
	m_wndCancel.Create(this, _T("&Cancel"), 546, 571, 626, 595);
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->GetModuleID() == _T("PM")){
		m_wndPrint.Create(this, _T("&Print"), 631, 571, 711, 595);	
		m_wndAccept.Create(this, _T("&Issue"), 716, 571, 796, 595);
	}
	else
	{
		m_wndAccept.Create(this, _T("&Send"), 631, 571, 711, 595);
		m_wndPrint.Create(this, _T("&Print"), 716, 571, 796, 595);
	}
	
	m_wndAddEntry.Create(this, _T("&Add Entry"), 5, 571, 105, 595);

}
void CPMSMedicalCabinetOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRect rect = CRect(10, 565-50, 790, 565);
	m_wndInputEntry.Create(this, rect);
	m_wndInputEntry.ShowWindow(SW_HIDE);

	m_wndID.SetMask(_T("&&######"));
	m_wndID.SetCheckValue(true);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndIDButton.ModifyStyle(WS_TABSTOP, 0);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	//m_wndStatus.SetLimitText(1);
	m_wndStatus.SetReadOnly(true);
//	m_wndStatus.SetCheckValue(true);
	m_wndFromStock.SetCheckValue(true);
	m_wndToStock.SetCheckValue(true);
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
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(5, _T("Manufacturer"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Expire Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(7, _T("ID"), CFMT_NUMBER, 0);


	m_wndFromStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFromStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndToStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndToStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	
	m_pms_stocktransferTbl.SetTableName(_T("pms_stocktransfer"));
	m_pms_stocktransferTbl.AddField(_T("pmst_createdby"), dfText, 15); 
	m_pms_stocktransferTbl.AddField(_T("pmst_createddate"), dfDateTime); 
	m_pms_stocktransferTbl.AddField(_T("pmst_updatedby"), dfText, 15); 
	m_pms_stocktransferTbl.AddField(_T("pmst_updateddate"), dfDateTime); 
	m_pms_stocktransferTbl.AddField(_T("pmst_id"), dfText, 15); 
	m_pms_stocktransferTbl.AddField(_T("pmst_expstockid"), dfLong); 
	m_pms_stocktransferTbl.AddField(_T("pmst_orderdate"), dfDateTime); 
	m_pms_stocktransferTbl.AddField(_T("pmst_senderby"), dfText, 15); 
	m_pms_stocktransferTbl.AddField(_T("pmst_deliverby"), dfText, 65); 
	m_pms_stocktransferTbl.AddField(_T("pmst_impstockid"), dfLong); 
	m_pms_stocktransferTbl.AddField(_T("pmst_deptid"), dfText, 7); 
	m_pms_stocktransferTbl.AddField(_T("pmst_issuedate"), dfDateTime); 
	m_pms_stocktransferTbl.AddField(_T("pmst_issueby"), dfText, 15); 
	m_pms_stocktransferTbl.AddField(_T("pmst_receiveby"), dfText, 65); 
	m_pms_stocktransferTbl.AddField(_T("pmst_desc"), dfText, 81); 
	m_pms_stocktransferTbl.AddField(_T("pmst_status"), dfText, 1); 
	m_pms_stocktransferTbl.AddField(_T("pmst_type"), dfText, 1); 
	m_pms_stocktransferTbl.AddField(_T("pmst_ordertype"), dfText, 1); 
	m_szDeptID = pMF->m_szDept;
}
void CPMSMedicalCabinetOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Items List"));
	
	m_wndList.AddEvent(1, _T("Supplement Drug Issued"), _OnListSupplementDrugIssuedFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	
	m_wndList.AddEvent(2, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
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
	m_wndFromStock.SetEvent(WE_SELENDOK, _OnFromStockSelendokFnc);
	//m_wndFromStock.SetEvent(WE_SETFOCUS, _OnFromStockSetfocusFnc);
	//m_wndFromStock.SetEvent(WE_KILLFOCUS, _OnFromStockKillfocusFnc);
	m_wndFromStock.SetEvent(WE_SELCHANGE, _OnFromStockSelectChangeFnc);
	m_wndFromStock.SetEvent(WE_LOADDATA, _OnFromStockLoadDataFnc);
	//m_wndFromStock.SetEvent(WE_ADDNEW, _OnFromStockAddNewFnc);
	m_wndToStock.SetEvent(WE_SELENDOK, _OnToStockSelendokFnc);
	//m_wndToStock.SetEvent(WE_SETFOCUS, _OnToStockSetfocusFnc);
	//m_wndToStock.SetEvent(WE_KILLFOCUS, _OnToStockKillfocusFnc);
	m_wndToStock.SetEvent(WE_SELCHANGE, _OnToStockSelectChangeFnc);
	m_wndToStock.SetEvent(WE_LOADDATA, _OnToStockLoadDataFnc);
	//m_wndToStock.SetEvent(WE_ADDNEW, _OnToStockAddNewFnc);
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
	m_wndAccept.SetEvent(WE_CLICK, _OnAcceptSelectFnc);
	m_wndAddEntry.SetEvent(WE_CLICK, _OnAddEntrySelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMSMedicalCabinetOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMSMedicalCabinetOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMSMedicalCabinetOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMSMedicalCabinetOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(5, _T("Find	F3"), _OnFindPMSMedicalCabinetOrderFnc, 0, VK_F3);
	AddEvent(0, _T("-"));
	AddEvent(6, _T("Cancel	Ctrl+T"), _OnCancelPMSMedicalCabinetOrderFnc, 0, 'T', VK_CONTROL);

	SetMode(VM_NONE);
}
void CPMSMedicalCabinetOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusDesc);
	DDX_TextEx(pDX, m_wndFromStock.GetDlgCtrlID(), m_szFromStockKey);
	DDX_TextEx(pDX, m_wndToStock.GetDlgCtrlID(), m_szToStockKey);
	DDX_Text(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDeliverer);
	DDX_Text(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiver);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CPMSMedicalCabinetOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(pMF->GetModuleID() != _T("PM"))
		szSQL.Format(_T("SELECT * FROM pms_stocktransfer WHERE pmst_id='%s' AND pmst_type='%s' and pmst_deptid='%s' "), m_szID, m_szType, pMF->m_szDept);
	else
		szSQL.Format(_T("SELECT * FROM pms_stocktransfer WHERE pmst_id='%s' "), m_szID);

	
	rs.ExecSQL(szSQL);
	ShowInput(false);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pmst_createdby"), m_szCreatedBy);
		rs.GetValue(_T("pmst_expstockid"), m_szFromStockKey);
		rs.GetValue(_T("pmst_orderdate"), m_szOrderTime);
		m_szOrderDate = m_szOrderTime.Left(10);
		rs.GetValue(_T("pmst_deliverby"), m_szDeliverer);
		rs.GetValue(_T("pmst_impstockid"), m_szToStockKey);
		rs.GetValue(_T("pmst_receiveby"), m_szReceiver);
		rs.GetValue(_T("pmst_desc"), m_szDescription);
		rs.GetValue(_T("pmst_status"), m_szStatus);
		rs.GetValue(_T("pmst_deptid"), m_szDeptID);
		rs.GetValue(_T("pmst_ordertype"), m_szOrderType);
		m_szStatusDesc = pMF->GetStatusString(m_szStatus);
		SetMode(VM_VIEW);
		OnListLoadData();

		if(m_szStatus != _T("O"))
		{
			m_wndDelete.EnableWindow(false);
			m_wndList.SetMenuState(1, false);
			m_wndList.SetMenuState(2, false);
		}
		else
		{
			m_wndList.SetMenuState(1, true);
			m_wndList.SetMenuState(2, true);
		}

		if(pMF->GetModuleID() == _T("PM")){
			if(m_szStatus == _T("A")){
				m_wndAccept.EnableWindow(false);
			}
			if(m_szStatus == _T("O") && m_szOrderType != m_szCurrentOrderType){
				m_wndAccept.EnableWindow(false);
			}
		}
		else
		{
			CString szLabel;
			if(m_szStatus == _T("O")){
				TranslateString(_T("Send"), szLabel);
				m_wndAccept.SetWindowText(szLabel);
				m_wndAccept.EnableWindow(true);
			}
			else if(m_szStatus == _T("S")){
				TranslateString(_T("&Disconfirm"), szLabel);
				m_wndAccept.SetWindowText(szLabel);
				m_wndAccept.EnableWindow(true);
			}
			else
				m_wndAccept.EnableWindow(false);
		}
		
	}
	else
	{
		SetMode(VM_NONE);
		m_wndList.DeleteAllItems();
	}

}
void CPMSMedicalCabinetOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD)
	{
		m_pms_stocktransferTbl.SetValue(_T("pmst_createdby"), pMF->GetCurrentUser());
		m_pms_stocktransferTbl.SetValue(_T("pmst_createddate"), pMF->GetSysDateTime());
	}
	m_pms_stocktransferTbl.SetValue(_T("pmst_updatedby"), pMF->GetCurrentUser());
	m_pms_stocktransferTbl.SetValue(_T("pmst_updateddate"), pMF->GetSysDateTime());
	m_pms_stocktransferTbl.SetValue(_T("pmst_id"), m_szID);
	m_pms_stocktransferTbl.SetValue(_T("pmst_expstockid"), m_szFromStockKey);
	CDate curDte;
	curDte.ParseDate(pMF->GetSysDate());
	if(curDte.Compare(m_szOrderDate) == 0)
		m_szOrderTime.Format(_T("%s %s"), m_szOrderDate, pMF->GetSysTime());
	else
		m_szOrderTime.Format(_T("%s 23:59:59"), m_szOrderDate);

	m_pms_stocktransferTbl.SetValue(_T("pmst_orderdate"), m_szOrderTime);
	m_pms_stocktransferTbl.SetValue(_T("pmst_deliverby"), m_szDeliverer);
	m_pms_stocktransferTbl.SetValue(_T("pmst_impstockid"), m_szToStockKey);
	m_pms_stocktransferTbl.SetValue(_T("pmst_receiveby"), m_szReceiver);
	m_pms_stocktransferTbl.SetValue(_T("pmst_desc"), m_szDescription);
	m_pms_stocktransferTbl.SetValue(_T("pmst_status"), m_szStatus);
	m_pms_stocktransferTbl.SetValue(_T("pmst_type"), m_szType);
	m_pms_stocktransferTbl.SetValue(_T("pmst_deptid"), m_szDeptID);
	m_pms_stocktransferTbl.SetValue(_T("pmst_ordertype"), m_szCurrentOrderType);

}
void CPMSMedicalCabinetOrder::SetDefaultValues(){

	m_szID.Empty();
	m_szOrderDate.Empty();
	m_szStatus.Empty();
	m_szStatusDesc.Empty();
	m_szFromStockKey.Empty();
	m_szToStockKey.Empty();
	m_szDeliverer.Empty();
	m_szReceiver.Empty();
	m_szDescription.Empty();

}
int CPMSMedicalCabinetOrder::SetMode(int nMode){ 
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
			m_wndID.EnableWindow(false);
			m_wndIDButton.EnableWindow(false);
			if(m_wndList.GetItemCount() > 0)
				m_wndFromStock.EnableWindow(false);
			if(m_szStatus != _T("O"))
			{
				m_wndToStock.EnableWindow(false);
				m_wndOrderDate.EnableWindow(false);
			}
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
			if(m_szStatus == _T("A"))
				EnableButtons(TRUE, 0, 1, -1);
			else
 				EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues();
			m_wndList.SetMenuState(1, false);
			m_wndList.SetMenuState(2, false);
 			break; 
 		}; 
		
		if(nMode != VM_EDIT){
			m_wndID.EnableWindow(true);
			m_wndIDButton.EnableWindow(true);
		}
		if(nMode == VM_ADD)
		{
			m_wndIDButton.EnableWindow(false);
			m_wndID.EnableWindow(pMF->m_bSheetReatOnly);
		}

		if(pMF->GetModuleID() == _T("PM") && (m_szOrderType == _T("T") || m_szOrderType==_T("M")) ){
			m_wndAddEntry.EnableWindow(false);
		}
		if(m_szStatus == _T("O"))
			m_wndPrint.EnableWindow(false);
		else
		{
			m_wndPrint.EnableWindow(true);
			m_wndDelete.EnableWindow(false);
		}
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CPMSMedicalCabinetOrder::OnListDblClick(){
	
} 
void CPMSMedicalCabinetOrder::OnListSelectChange(int nOldItem, int nNewItem){
	if(m_wndInputEntry.GetMode() == VM_ADD || m_wndInputEntry.GetMode() == VM_ADDCHILD)
	{
		ShowInput(false);
		m_wndInputEntry.SetMode(VM_NONE);
	}
	if(GetMode() == VM_ADD)
		SetMode(VM_NONE);
	if(GetMode() == VM_EDIT){
		SetMode(VM_VIEW);
	}
	if(GetMode() == VM_ADDCHILD)
	{
		SetMode(VM_NONE);
	}
	
} 
int CPMSMedicalCabinetOrder::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel  = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;

	if(pMF->GetModuleID() == _T("PM") && !pMF->CheckPermission(_T("04.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetModuleID() == _T("EM") && !pMF->CheckPermission(_T("07.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetModuleID() == _T("TM") && !pMF->CheckPermission(_T("10.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(m_szCreatedBy != pMF->GetCurrentUser())
		{
			CString tmpStr, szMsg;
			TranslateString(_T("This is order created by an [%s]. Can not process it"), tmpStr);
			szMsg.Format(tmpStr, m_szCreatedBy);
			ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
			return -1;
		}


	if(pMF->GetModuleID() == _T("PM") && m_szOrderType != _T("P"))
		return 0;

	if(m_szStatus != _T("O"))
		return -1;
	CString szSQL;
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	pMF->BeginTransaction();
	for (int i = m_wndList.GetItemCount()-1; i >=0; i--)
	{
		if(m_wndList.GetItemState(i, LVIS_SELECTED))
		{
			long nsItemID = ToLong(m_wndList.GetItemText(i, 7));
			szSQL.Format(_T("SELECT pms_stocktransfer_line_delete('%s', %ld) "), m_szID, nsItemID);
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

long CPMSMedicalCabinetOrder::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ") \
			_T(" 	pmi_id as id,") \
			_T(" 	pmsi_id as sitemid,") \
			_T(" 	pmi_name as name,") \
			_T(" 	pmi_unit	as unit,") \
			_T("	sum(pmstl_qty) as qty, ") \
			_T(" 	pmsi_vatprice as price,") \
			_T(" 	pmsi_expdate as expdate,") \
			_T(" 	(SELECT sc_name FROM sys_country WHERE sc_id=pmsi_countryid) as productcountry,") \
			_T(" 	(SELECT pmm_name FROM pms_mfg WHERE pmm_id=pmsi_mfgid) AS mfgname") \
			_T(" FROM pms_stocktransfer_line") \
			_T(" LEFT JOIN pms_stockitems ON(pmsi_id=pmstl_sitemid)") \
			_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
			_T(" WHERE pmstl_id='%s' ") \
			_T(" GROUP BY id, sitemid, name, unit, price, expdate, productcountry, mfgname ") ,	m_szID);

//_fmsg(_T("%s"), szSQL);
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
			rs.GetValue(_T("sitemid")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

int CPMSMedicalCabinetOrder::OnListSupplementDrugIssued(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	if(pMF->GetModuleID() == _T("EM") && !pMF->CheckPermission(_T("07.06")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetModuleID() == _T("TM") && !pMF->CheckPermission(_T("10.06")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	szSQL.Format(_T("SELECT pmst_status FROM pms_stocktransfer WHERE pmst_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;
	rs.GetValue(_T("pmst_status"), m_szStatus);

	if(m_szStatus != _T("O"))
		return -1;

	CHMSCabinetDrugIssueDialog dlg(this);
	dlg.m_szInvoiceNo = m_szID;
	dlg.m_nStockID = ToInt(m_szToStockKey);
	dlg.m_nSupplementStockID = ToInt(m_szFromStockKey);

	dlg.DoModal();
	OnListLoadData();	

	return 0;
}
/*void CPMSMedicalCabinetOrder::OnIDChange(){
	
} */
/*void CPMSMedicalCabinetOrder::OnIDSetfocus(){
	
} */
/*void CPMSMedicalCabinetOrder::OnIDKillfocus(){
	
} */
int CPMSMedicalCabinetOrder::OnIDCheckValue(){
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
		szSQL.Format(_T("SELECT count(*) FROM pms_stocktransfer WHERE pmst_id='%s' "), szID);
		rs.ExecSQL(szSQL);

		if(rs.GetIntValue() > 0){
			ShowMessageBox(_T("Invoice No Is Existing"), MB_OK);
			return -1;
		}
		return 0;
	}
	return 0;

} 

void CPMSMedicalCabinetOrder::OnIDButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CPMSMedicalCabinetOrderListDialog dlg(pMF);
	
	dlg.m_szDeptID = m_szDeptID;
	dlg.m_szType = m_szType;
	dlg.m_szStockList = m_szStockList;
	if(dlg.DoModal() == IDOK){
		m_szID = dlg.m_szID;
		GetDataToScreen();
	}
	SetFocus();
	
} 
/*void CPMSMedicalCabinetOrder::OnOrderDateChange(){
	
} */
/*void CPMSMedicalCabinetOrder::OnOrderDateSetfocus(){
	
} */
/*void CPMSMedicalCabinetOrder::OnOrderDateKillfocus(){
	
} */
int CPMSMedicalCabinetOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CPMSMedicalCabinetOrder::OnStatusChange(){
	
} */
/*void CPMSMedicalCabinetOrder::OnStatusSetfocus(){
	
} */
/*void CPMSMedicalCabinetOrder::OnStatusKillfocus(){
	
} */
int CPMSMedicalCabinetOrder::OnStatusCheckValue(){
	return 0;
} 
void CPMSMedicalCabinetOrder::OnFromStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSMedicalCabinetOrder::OnFromStockSelendok(){
	 
}
/*void CPMSMedicalCabinetOrder::OnFromStockSetfocus(){
	
}*/
/*void CPMSMedicalCabinetOrder::OnFromStockKillfocus(){
	
}*/
long CPMSMedicalCabinetOrder::OnFromStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromStock.IsSearchKey() && ToInt(m_szFromStockKey) > 0){
		szWhere.Format(_T(" AND pmsl_stockid=%d "), ToInt(m_szFromStockKey));
	};
	szWhere.AppendFormat(_T(" AND pmsl_type in('A','B') "));

	if(ToInt(m_szToStockKey) > 0)
		szWhere.AppendFormat(_T(" AND pmsl_stockid <> %d "), ToInt(m_szToStockKey));
	m_wndFromStock.DeleteAllItems(); 
	int nCount = 0;
	
	if(pMF->GetModuleID() == _T("PM") && !m_szStockList.IsEmpty()){
		szWhere.AppendFormat(_T(" and pmsl_stockid in(%s) "), m_szStockList);
	}
	szSQL.Format(_T("SELECT * FROM pms_stocklist WHERE 0=0 %s ORDER BY pmsl_type, pmsl_stockid "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromStock.AddItems(
			rs.GetValue(_T("pmsl_stockid")), 
			rs.GetValue(_T("pmsl_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSMedicalCabinetOrder::OnFromStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMSMedicalCabinetOrder::OnToStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSMedicalCabinetOrder::OnToStockSelendok(){
	 
}
/*void CPMSMedicalCabinetOrder::OnToStockSetfocus(){
	
}*/
/*void CPMSMedicalCabinetOrder::OnToStockKillfocus(){
	
}*/
long CPMSMedicalCabinetOrder::OnToStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0;
	if(m_wndToStock.IsSearchKey() && ToInt(m_szToStockKey) > 0 ){
		szWhere.Format(_T(" AND pmsl_stockid=%d "), ToInt(m_szToStockKey));
	};
	
	
	if(pMF->GetModuleID() != _T("PM") && !m_szDeptID.IsEmpty())
			szWhere.AppendFormat(_T(" AND pmsl_deptid ='%s' "), m_szDeptID);
	szWhere.AppendFormat(_T(" and pmsl_type ='C' "));

	if(pMF->GetModuleID() == _T("PM") && !m_szStockList.IsEmpty()){
		szWhere.AppendFormat(_T(" and pmsl_stockid in(%s) "), m_szStockList);
	}

	m_wndToStock.DeleteAllItems(); 
	szSQL.Format(_T("SELECT * FROM pms_stocklist WHERE 1=1 %s ORDER BY pmsl_type, pmsl_stockid "),  szWhere);
//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToStock.AddItems(
			rs.GetValue(_T("pmsl_stockid")), 
			rs.GetValue(_T("pmsl_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSMedicalCabinetOrder::OnToStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPMSMedicalCabinetOrder::OnDelivererChange(){
	
} */
/*void CPMSMedicalCabinetOrder::OnDelivererSetfocus(){
	
} */
/*void CPMSMedicalCabinetOrder::OnDelivererKillfocus(){
	
} */
int CPMSMedicalCabinetOrder::OnDelivererCheckValue(){
	return 0;
} 
/*void CPMSMedicalCabinetOrder::OnReceiverChange(){
	
} */
/*void CPMSMedicalCabinetOrder::OnReceiverSetfocus(){
	
} */
/*void CPMSMedicalCabinetOrder::OnReceiverKillfocus(){
	
} */
int CPMSMedicalCabinetOrder::OnReceiverCheckValue(){
	return 0;
} 
/*void CPMSMedicalCabinetOrder::OnDescriptionChange(){
	
} */
/*void CPMSMedicalCabinetOrder::OnDescriptionSetfocus(){
	
} */
/*void CPMSMedicalCabinetOrder::OnDescriptionKillfocus(){
	
} */
int CPMSMedicalCabinetOrder::OnDescriptionCheckValue(){
	return 0;
} 
void CPMSMedicalCabinetOrder::OnAddSelect(){
	OnAddPMSMedicalCabinetOrder();	
} 
void CPMSMedicalCabinetOrder::OnEditSelect(){
	OnEditPMSMedicalCabinetOrder();	
} 
void CPMSMedicalCabinetOrder::OnDeleteSelect(){
	OnDeletePMSMedicalCabinetOrder();
	
} 
void CPMSMedicalCabinetOrder::OnSaveSelect(){
	OnSavePMSMedicalCabinetOrder();
	
} 
void CPMSMedicalCabinetOrder::OnCancelSelect(){
	OnCancelPMSMedicalCabinetOrder();	
} 
void CPMSMedicalCabinetOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	PrintDrugOrder(m_szID); 	
} 
void CPMSMedicalCabinetOrder::OnAcceptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CString szLabel, szSendOrderBy,szSendByComfirm;
//Truong hop khoa duoc tao

	if(pMF->GetModuleID() != _T("PM"))
	{
		if(pMF->GetModuleID() == _T("EM") && !pMF->CheckPermission(_T("07.04")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return;
		}

		if(pMF->GetModuleID() == _T("TM") && !pMF->CheckPermission(_T("10.04")))
		{
			ShowMessageBox(_T("Permission Denined."), 0);
			return;
		}		

		CString szLabel;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT pmst_status as status,pmst_senderby as senderby FROM pms_stocktransfer WHERE pmst_id='%s' "), m_szID);
		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return;

		while (!rs.IsEOF()){
			rs.GetValue(_T("status"), tmpStr);
			rs.GetValue(_T("senderby"), szSendByComfirm);
			rs.MoveNext();
		}

		if(tmpStr != _T("O") && tmpStr != _T("S"))
			return ;

		if(m_wndList.GetItemCount() <= 0)
			return;
		if(pMF->m_bConfirm)
		{
			CHMSConfirmDialog dlg;
			dlg.m_szDoctor = pMF->m_szDoctor;
			if(dlg.DoModal() != IDOK)
				return;
			szSendOrderBy = dlg.m_szDoctor;
		}
		

		if(m_szStatus == _T("O"))
		{
			szSQL.Format(_T("UPDATE pms_stocktransfer SET pmst_updateddate=sysdate,pmst_updatedby='%s', pmst_senderby='%s',pmst_status='S' WHERE pmst_id='%s' AND pmst_status='O' "), pMF->GetCurrentUser(), szSendOrderBy, m_szID);
			pMF->ExecSQL(szSQL);
		}
		else if(m_szStatus == _T("S"))
		{
			if (szSendOrderBy == szSendByComfirm)
			{
				szSQL.Format(_T("UPDATE pms_stocktransfer SET pmst_updateddate=sysdate,pmst_updatedby='%s', pmst_senderby='',pmst_status='O' WHERE pmst_id='%s' AND pmst_status='S' "), szSendOrderBy, m_szID);
				pMF->ExecSQL(szSQL);
			}
			else
			{
				CString tmpStr, szMsg;
				TranslateString(_T("This is order created by an [%s]. Can not process it"), tmpStr);
				szMsg.Format(tmpStr, m_szCreatedBy);
				ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
				return;
			}
		}
		GetDataToScreen();
	}
	else
	{
		if((m_szOrderType == m_szCurrentOrderType && m_szStatus== _T("O")) ||
			(m_szOrderType != m_szCurrentOrderType && m_szStatus== _T("S")) )
		{
			if(!pMF->CheckPermission(_T("03.04")))
			{
				ShowMessageBox(_T("Permission denined"), 0);
				return;
			}

			if(ShowMessage(23, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
	 			return; 
			szSQL.Format(_T("SELECT pms_stocktransfer_issue('%s', '%s') "), pMF->GetCurrentUser(), m_szID);
			int ret = pMF->ExecSQL(szSQL);
			if(ret > 0){
				GetDataToScreen();
			}
		}
	}

} 
void CPMSMedicalCabinetOrder::OnAddEntrySelect(){
	if(m_szCurrentOrderType != m_szOrderType)
		return;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);

	if(pMF->GetModuleID() == _T("PM") && !pMF->CheckPermission(_T("04.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->GetModuleID() == _T("EM") && !pMF->CheckPermission(_T("07.07")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(pMF->GetModuleID() == _T("TM") && !pMF->CheckPermission(_T("10.07")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	if(m_szCreatedBy != pMF->GetCurrentUser())
	{
		CString tmpStr, szMsg;
		TranslateString(_T("This is order created by an [%s]. Can not process it"), tmpStr);
		szMsg.Format(tmpStr, m_szCreatedBy);
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
		return;
	}

	szSQL.Format(_T("SELECT pmst_status FROM pms_stocktransfer WHERE pmst_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	rs.GetValue(_T("pmst_status"), tmpStr);
	if(tmpStr != _T("O"))
		return;

	ShowInput(true);
	m_wndInputEntry.SetMode(VM_ADD);
	m_wndInputEntry.m_szID = m_szID;
	m_wndInputEntry.m_nFromStockID = ToInt(m_szFromStockKey);
	m_wndInputEntry.m_szOrderDate = m_szOrderTime;
} 
int CPMSMedicalCabinetOrder::OnAddPMSMedicalCabinetOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	CString szSQL;

	if(pMF->GetModuleID() == _T("PM") && !pMF->CheckPermission(_T("04.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}


	if(pMF->GetModuleID() == _T("EM") && !pMF->CheckPermission(_T("07.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetModuleID() == _T("TM") && !pMF->CheckPermission(_T("10.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	szSQL.Format(_T("select coalesce(max(cast(substr(pmst_id, 3, 6) as integer)), 0)+1 from pms_stocktransfer WHERE pmst_type='%s' and length(trim(pmst_id))>=8 "), m_szType);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
 	SetMode(VM_ADD);
	if(m_szType == _T("R"))
		m_szID.Format(_T("TL%.6ld"), rs.GetIntValue());
	else
		m_szID.Format(_T("TT%.6ld"), rs.GetIntValue());
	m_szOrderDate = pMF->GetSysDate();
	m_wndFromStock.SetFocus();
	m_szStatus = _T("O");
	m_wndList.DeleteAllItems();	
	UpdateData(false);
	return 0;  
} 
int CPMSMedicalCabinetOrder::OnEditPMSMedicalCabinetOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 

	if(pMF->GetModuleID() == _T("PM") && !pMF->CheckPermission(_T("04.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetModuleID() == _T("EM") && !pMF->CheckPermission(_T("07.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetModuleID() == _T("TM") && !pMF->CheckPermission(_T("09.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetModuleID() == _T("PM") && m_szOrderType != _T("P") && m_szStatus == _T("O"))
		return 0;
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSMedicalCabinetOrder::OnDeletePMSMedicalCabinetOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 

	if(pMF->GetModuleID() == _T("PM") && !pMF->CheckPermission(_T("04.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}


	if(pMF->GetModuleID() == _T("EM") && !pMF->CheckPermission(_T("07.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetModuleID() == _T("TM") && !pMF->CheckPermission(_T("10.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(m_szCreatedBy != pMF->GetCurrentUser())
	{
		CString tmpStr, szMsg;
		TranslateString(_T("This is order created by an [%s]. Can not process it"), tmpStr);
		szMsg.Format(tmpStr, m_szCreatedBy);
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
		return -1;
	}


	if(pMF->GetModuleID() == _T("PM") && m_szOrderType != _T("P"))
		return 0;
	if(m_wndList.GetItemCount() > 0)
		return -1;


	if(m_szStatus != _T("O"))
		return -1;

	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("SELECT pms_stocktransfer_delete('%s') "), m_szID); 

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelPMSMedicalCabinetOrder(); 
		m_wndList.DeleteAllItems();
 	}
	return 0;
 } 
int CPMSMedicalCabinetOrder::OnSavePMSMedicalCabinetOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	if(m_szFromStockKey == m_szToStockKey)
	{
		ShowMessageBox(_T("Invalid stock transfer"), 0);
		m_wndToStock.SetFocus();
		return -1;
	}
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_pms_stocktransferTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE pmst_id='%s' and pmst_status='O' "), m_szID); 
 		szSQL = m_pms_stocktransferTbl.GetUpdateSQL(_T("pmst_createdby, pmst_createddate,pmst_issuedate,pmst_status,pmst_type,pmst_ordertype,pmst_deptid,pmst_expstockid,pmst_impstockid")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		GetDataToScreen();
		OnListLoadData();
		m_wndAddEntry.SetFocus();
 	} 
 	return ret; 
}
int CPMSMedicalCabinetOrder::OnCancelPMSMedicalCabinetOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_NONE) 
 		SetMode(VM_NONE); 
 	else 
 		SetMode(VM_VIEW); 
 	return 0;
} 
int CPMSMedicalCabinetOrder::OnPMSMedicalCabinetOrderListLoadData()
{
	return 0;
}

void CPMSMedicalCabinetOrder::ShowInput(bool bShow)
{
	CRect rect, rc2;
	m_wndList.GetWindowRect(&rect);
	ScreenToClient(&rect);
	
	if(bShow && !m_wndInputEntry.IsWindowVisible()){
		rc2 = rect;	
		rect.bottom -= 60;
		rc2.top = rc2.bottom - 55;
		m_wndInputEntry.MoveWindow(rc2);
		m_wndInputEntry.ShowWindow(SW_SHOW);
		m_wndInputEntry.SetMode(VM_ADD);
		EnableButtons(TRUE, 0, -1);
		m_wndAdd.EnableWindow(false);
	}
	else if(m_wndInputEntry.IsWindowVisible())
	{
		rect.bottom += 60;
		m_wndInputEntry.ShowWindow(SW_HIDE);
		m_wndInputEntry.SetMode(VM_NONE);
		SetMode(VM_VIEW);
	}
	m_wndList.MoveWindow(rect);
}

void CPMSMedicalCabinetOrder::PrintDrugOrder(CString szID){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString tmpStr, tmpStr2, szDate, szSQL,szDesc;
	CString szType, szReportName, szSendBy;
	CRecord rst(&pMF->m_db);
	CRecord rsp(&pMF->m_db);
	CString szGroup, szTitle, szPrintType, szNote;		
	
	if(!rpt.Init(_T("Reports/HMS/PTTT/PMS_CABINETORDER.RPT")) )
	{
		ShowMessageBox(_T("Can not open file report."), MB_OK);
		return;
	}
	
	double	nTotalAmount = 0, nAmount=0;
	int		nQty, nTotalItem=1;
	int		nPrint=0;
	bool bDirect = false;

	szSQL.Format(_T("SELECT * FROM pms_stocktransfer WHERE pmst_id='%s' "), szID);
	rs.ExecSQL(szSQL);	
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Record not found."), MB_OK);
		return;
	}
	
	rs.GetValue(_T("pmst_type"), szType);	
	rs.GetValue(_T("pmst_senderby"), szSendBy);
	rs.GetValue(_T("pmst_desc"), szDesc);		
	szSQL.Format(_T("SELECT * FROM pms_drugtype ORDER BY pmdt_id "));
	rst.ExecSQL(szSQL);
	while(!rst.IsEOF())
	{
		rst.GetValue(_T("pmdt_name"), tmpStr);
		StringUpper(tmpStr, szTitle);
		rst.GetValue(_T("pmdt_desc"), szGroup);
		szGroup.Trim();
		rst.GetValue(_T("pmdt_printtype"), szPrintType);		
		
			//Report Header
		rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
		rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
		rpt.GetReportHeader()->SetValue(_T("TITLE"), szTitle);
		rs.GetValue(_T("pmst_orderdate"), tmpStr);
		szDate.Format(rpt.GetReportHeader()->GetValue(_T("OrderDate")), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rpt.GetReportHeader()->SetValue(_T("OrderDate"), szDate);
		rpt.GetReportHeader()->SetValue(_T("OrderID"), szID);
		rs.GetValue(_T("pmst_expstockid"), tmpStr);
		tmpStr = pMF->GetStorageName(ToInt(tmpStr));
		rpt.GetReportHeader()->SetValue(_T("FromStock"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("FromStock2"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Comment"), szDesc);
		rpt.GetReportHeader()->SetValue(_T("Comment2"), szDesc);

				
		rs.GetValue(_T("pmst_impstockid"), tmpStr);
		if(!tmpStr.IsEmpty())
		{
			tmpStr = pMF->GetStorageName(ToInt(tmpStr));
			rpt.GetReportHeader()->SetValue(_T("ToStock"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("ToStock2"), tmpStr);
		}

		rs.GetValue(_T("pmst_deptid"), tmpStr);
		if(!tmpStr.IsEmpty())
		{
			tmpStr = pMF->GetDepartmentName(tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Department2"), tmpStr);
		}
		tmpStr.Empty();
		rpt.GetReportHeader()->SetValue(_T("Sheet"), _T("1"));
		rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE2"), pMF->m_CompanyInfo.sc_pname);
		rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME2"), pMF->m_CompanyInfo.sc_name);
		rpt.GetReportHeader()->SetValue(_T("TITLE2"), szTitle);
		rs.GetValue(_T("pmst_orderdate"), tmpStr);
		szDate.Format(rpt.GetReportHeader()->GetValue(_T("OrderDate")), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rpt.GetReportHeader()->SetValue(_T("OrderDate2"), szDate);
		rpt.GetReportHeader()->SetValue(_T("OrderID2"), szID);
		rpt.GetReportHeader()->SetValue(_T("Sheet2"), _T("2"));
		
		
//Page Header
//Report Detail

	szSQL.Format(_T(" SELECT ") \
			_T(" 	pmi_id as id,") \
			_T(" 	pmsi_id as sitemid,") \
			_T(" 	pmi_name as name,") \
			_T(" 	pmi_unit	as unit,") \
			_T("	sum(pmstl_qty) as qty, ") \
			_T(" 	pmsi_vatprice as price,") \
			_T(" 	sum(pmstl_qty*pmsi_vatprice) as amount, ") \
			_T(" 	pmsi_expdate as expdate,") \
			_T(" 	(SELECT sc_name FROM sys_country WHERE sc_id=pmsi_countryid) as productcountry,") \
			_T(" 	(SELECT pmm_name FROM pms_mfg WHERE pmm_id=pmsi_mfgid) AS mfgname") \
			_T(" FROM pms_stocktransfer_line") \
			_T(" LEFT JOIN pms_stockitems ON(pmsi_id=pmstl_sitemid)") \
			_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
			_T(" WHERE pmstl_id='%s' AND pmi_typeid in(%s) ") \
			_T(" GROUP BY id, sitemid, name, unit, price, expdate, productcountry, mfgname ") ,	szID, szGroup);
//			_msg(_T("%s"),szSQL);
			rs2.ExecSQL(szSQL);
			if(rs2.IsEOF()){
				rst.MoveNext();
				continue;
			}
			CReportSection* rptDetail = rpt.GetDetail(0); 
			rpt.ResetContent();
			nTotalItem=1;
			nTotalAmount = 0;
			CString szItemId;
			while(!rs2.IsEOF())
			{
				rptDetail = rpt.AddDetail();
				rs2.GetValue(_T("id"), szItemId);
				tmpStr.Format(_T("%d"), nTotalItem++);
				rptDetail->SetValue(_T("1"), tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);
				rs2.GetValue(_T("name"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				rptDetail->SetValue(_T("22"), tmpStr);
				rs2.GetValue(_T("unit"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);
				rptDetail->SetValue(_T("32"), tmpStr);
				rs2.GetValue(_T("qty"), nQty);
				if(szGroup == _T("'A1130'") || szGroup == _T("'A1140'"))
					MoneyToString(ToString(nQty), szNote);
				else
					szNote.Empty();
				FormatCurrency(nQty, tmpStr2);
				rptDetail->SetValue(_T("4"), tmpStr2);
				rptDetail->SetValue(_T("42"), tmpStr2);
				rs2.GetValue(_T("Price"), tmpStr);
				FormatCurrencyStr(tmpStr, tmpStr2);
				rptDetail->SetValue(_T("5"), tmpStr2);
				rptDetail->SetValue(_T("52"), tmpStr2);
				rs2.GetValue(_T("amount"), nAmount);
				nTotalAmount += nAmount;
				
				rptDetail->SetValue(_T("6"), szNote);
				rptDetail->SetValue(_T("62"), szNote);
				
				if(szGroup.Find(_T("'A1130'")) != -1 || szGroup.Find(_T("'A1140'")) != -1)
				{
					szSQL.Format(_T(" SELECT 	hpo_docno as docno,") \
						_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
						_T(" 	sum(hpol_orderqty) as orderqty") \
						_T(" FROM hms_pharmacyorder") \
						_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
						_T(" LEFT JOIN hms_patient ON(hp_patientno=hpo_patientno)") \
						_T(" WHERE hpo_sheetidx='%s' AND hpol_itemid='%s'") \
						_T(" GROUP BY docno, pname") \
						_T(" ORDER BY pname"), szID, szItemId);
					rsp.ExecSQL(szSQL);
					while(!rsp.IsEOF()){
						rptDetail = rpt.AddDetail();
						rptDetail->GetItem(_T("1"))->SetItalic(true);	
						rptDetail->GetItem(_T("2"))->SetItalic(true);	
						rptDetail->GetItem(_T("3"))->SetItalic(true);	
						rptDetail->GetItem(_T("4"))->SetItalic(true);	
						rptDetail->GetItem(_T("5"))->SetItalic(true);	
						rptDetail->GetItem(_T("6"))->SetItalic(true);	
						rptDetail->SetValue(_T("1"), _T(""));
						rsp.GetValue(_T("pname"), tmpStr);
						rptDetail->SetValue(_T("2"), tmpStr);
						rsp.GetValue(_T("docno"), tmpStr);
						rptDetail->SetValue(_T("3"), tmpStr);
						rsp.GetValue(_T("orderqty"), nQty);
						FormatCurrency(nQty, tmpStr);
						rptDetail->SetValue(_T("4"), tmpStr);
						rptDetail->SetValue(_T("5"), _T(""));
						MoneyToString(ToString(nQty), szNote);
						rptDetail->SetValue(_T("6"), szNote);
						
						rptDetail->GetItem(_T("12"))->SetItalic(true);	
						rptDetail->GetItem(_T("22"))->SetItalic(true);	
						rptDetail->GetItem(_T("32"))->SetItalic(true);	
						rptDetail->GetItem(_T("42"))->SetItalic(true);	
						rptDetail->GetItem(_T("52"))->SetItalic(true);	
						rptDetail->GetItem(_T("62"))->SetItalic(true);	

						rptDetail->SetValue(_T("12"), _T(""));
						rsp.GetValue(_T("pname"), tmpStr);
						rptDetail->SetValue(_T("22"), tmpStr);
						rsp.GetValue(_T("docno"), tmpStr);
						rptDetail->SetValue(_T("32"), tmpStr);
						rsp.GetValue(_T("orderqty"), nQty);
						FormatCurrency(nQty, tmpStr);
						rptDetail->SetValue(_T("42"), tmpStr);
						rptDetail->SetValue(_T("52"), _T(""));
						MoneyToString(ToString(nQty), szNote);
						rptDetail->SetValue(_T("62"), szNote);
						
						rsp.MoveNext();
					}
				}
				rs2.MoveNext();
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
			CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
			if(img)
			{
				img->SetHBITMAP(pMF->GetSignatureImage(szSendBy));
				img->SetFixedHeight(false);
			}

			rpt.GetReportFooter()->SetValue(_T("DoctorName"), pMF->GetDoctorName(szSendBy));
			
			CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
			if(img2)
			{
				img2->SetHBITMAP(pMF->GetSignatureImage(szSendBy));
				img2->SetFixedHeight(false);
			}

			rpt.GetReportFooter()->SetValue(_T("DoctorName2"), pMF->GetDoctorName(szSendBy));
			tmpStr = pMF->GetSysDate();	
			szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
			rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
			rpt.GetReportFooter()->SetValue(_T("PrintDate2"), szDate);
			//	rpt.Print(bDirect);
			//	bDirect=true;
		rpt.PrintPreview();					
		rst.MoveNext();
	}
	
}
