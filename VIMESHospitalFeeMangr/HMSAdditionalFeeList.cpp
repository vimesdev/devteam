#include "HMSAdditionalFeeList.h"
#include "MainFrm.h"
#include "HMSInpatientChargeFeeDialog.h"
#include "GuiInputDataDialog.h"
#include "ReportDocument.h"
#include "HMSDepositAdmissionDialog.h"
#include "HMSOtherFeeRefundDialog.h"
#include "HMSPrintRefundDialog.h"
#include "HMSEditOtherFeeDialog.h"
#include "HMSCancelReasonDialog.h"

/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeList *)pWnd)->OnFromDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeList *pVw = (CHMSAdditionalFeeList *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeList*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAdditionalFeeList*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
}
static int _OnPatientListPaymentItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnPatientListPaymentItem();
} 
static int _OnPatientListPrintInvoiceItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnPatientListPrintInvoiceItem();
} 
static int _OnPatientListDepositItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnPatientListDepositItem();
} 
static int _OnPatientListEditItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnPatientListEditItem();
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeList*)pWnd)->OnFeeListLoadData();
} 
static void _OnFeeListDblClickFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList*)pWnd)->OnFeeListDblClick();
} 
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAdditionalFeeList*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
}
static int _OnFeeListAddItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnFeeListAddItem();
} 
static int _OnFeeListEditItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnFeeListEditItem();
} 

static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnFeeListDeleteItem();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeList *pVw = (CHMSAdditionalFeeList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeList *pVw = (CHMSAdditionalFeeList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeList *pVw = (CHMSAdditionalFeeList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeList *pVw = (CHMSAdditionalFeeList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdditionalFeeList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeList *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnAdmissionDepositSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeList *pVw = (CHMSAdditionalFeeList *)pWnd;
	pVw->OnAdmissionDepositSelect();
} 
static int _OnAddHMSAdditionalFeeListFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnAddHMSAdditionalFeeList();
} 
static int _OnEditHMSAdditionalFeeListFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnEditHMSAdditionalFeeList();
} 
static int _OnDeleteHMSAdditionalFeeListFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnDeleteHMSAdditionalFeeList();
} 
static int _OnSaveHMSAdditionalFeeListFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnSaveHMSAdditionalFeeList();
} 
static int _OnCancelHMSAdditionalFeeListFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnCancelHMSAdditionalFeeList();
}

static int _OnCreateOtherFeeRefundFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnCreateOtherFeeRefund();
}

static int _OnPrintOtherFeeRefundFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeList*)pWnd)->OnPrintOtherFeeRefund();
}

static int _OnFeeListModifyItem(CWnd *pWnd){
	return ((CHMSAdditionalFeeList*)pWnd)->OnModifyFeeItems();
} 


static void _OnOtherReceiptSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeList *pVw = (CHMSAdditionalFeeList *)pWnd;
	pVw->OnOtherReceiptSelect();
}

static void _OnOtherPaymentSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeList *pVw = (CHMSAdditionalFeeList *)pWnd;
	pVw->OnOtherPaymentSelect();
}

CHMSAdditionalFeeList::CHMSAdditionalFeeList(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 615;
	SetDefaultValues();
}
CHMSAdditionalFeeList::~CHMSAdditionalFeeList(){
}
void CHMSAdditionalFeeList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 6, 5, 426, 120);
	m_wndPatientProfiles.Create(this, _T("Patient Profiles"), 5, 125, 425, 580);
	m_wndPatientFeeInformation.Create(this, _T("Patient Fee Information"), 430, 5, 1000, 580);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 315, 55);
	m_wndToDate.Create(this,320, 30, 420, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 110, 85);
	m_wndDepartment.Create(this,115, 60, 419, 85); 
	m_wndPatientNameLable.Create(this, _T("Patient Name"), 10, 90, 110, 115);
	m_wndPatientName.Create(this,115, 90, 390, 115); 
	m_wndSearch.Create(this, _T("@"), 395, 90, 420, 115);
	m_wndPatientList.Create(this,10, 150, 420, 575); 
	m_wndAdd.Create(this, _T("&Add (F2)"), 5, 585, 90, 610);
	m_wndDelete.Create(this, _T("&Delete"), 95, 585, 180, 610);
	m_wndPrint.Create(this, _T("&Print"), 185, 585, 270, 610);
//	m_wndAdmissionDeposit.Create(this, _T("Admission Deposit"), 860, 585, 1000, 610);
	m_wndFeeList.Create(this,435, 30, 995, 575); 

//	m_wndOtherReceipt.Create(this, _T("Other receipt"), 795, 585, 895, 610);
	m_wndOtherPayment.Create(this, _T("Other payment"), 900, 585, 1000, 610);
}
void CHMSAdditionalFeeList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndSearch.ModifyStyle(WS_TABSTOP, 0);
//	m_wndOtherReceipt.ModifyStyle(WS_TABSTOP,0);
	m_wndOtherPayment.ModifyStyle(WS_TABSTOP, 0);

	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndPatientList.InsertColumn(1, _T("Invoice No"), CFMT_NUMBER, 100);
	m_wndPatientList.InsertColumn(2, _T("Receipt Date"), CFMT_DATE, 105);
	m_wndPatientList.InsertColumn(3, _T("Department"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(4, _T("Description"), CFMT_TEXT, 160);
	m_wndPatientList.InsertColumn(5, _T("Document No"), CFMT_NUMBER, 90);
	m_wndPatientList.InsertColumn(6, _T("Age"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(7, _T("Status"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(8, _T("PatientNo"), CFMT_NUMBER, 0);
	m_wndPatientList.InsertColumn(9, _T("locked"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(10, _T("typeid"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(11, _T("Object"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(12, _T(""), CFMT_TEXT, 0); //refund
	m_wndPatientList.InsertColumn(13, _T(""), CFMT_TEXT, 40); //invoicetype

	m_wndFeeList.InsertColumn(0, _T("Index"), CFMT_TEXT|CFMT_RIGHT, 40);
	m_wndFeeList.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	m_wndFeeList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndFeeList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);
	m_wndFeeList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 90);
	m_wndFeeList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 90);
	m_wndFeeList.InsertColumn(6, _T("ItemID"), CFMT_TEXT, 0);
	m_wndFeeList.SetSortHeader(false);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	// hms_fee_invoice
	m_hms_fee_invoieceTbl.SetTableName(_T("hms_fee_invoice"));
	m_hms_fee_invoieceTbl.AddField(_T("HFE_CREATEDBY"), dfText, 15); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_CREATEDDATE"), dfDateTime); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_INVOICENO"), dfLong); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DEPTID"),dfText, 7);
	m_hms_fee_invoieceTbl.AddField(_T("HFE_PATIENTNO"), dfLong); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DOCNO"), dfLong); 	
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DATE"), dfDateTime); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_TYPE"), dfText, 1); 	
	m_hms_fee_invoieceTbl.AddField(_T("HFE_STATUS"), dfText, 1); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_STAFF"), dfText, 1); 
	m_hms_fee_invoieceTbl.AddField(_T("hfe_class"), dfText, 1); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DESC"), dfText, 254); 		
	m_hms_fee_invoieceTbl.AddField(_T("HFE_AMOUNT"), dfDouble); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_PATPAID"), dfDouble); 	


}
void CHMSAdditionalFeeList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);

	m_wndPatientList.SetWindowText(_T("Patient List"));
	m_wndPatientList.AddEvent(1, _T("&Print Invoice"), _OnPatientListPrintInvoiceItemFnc);
	m_wndPatientList.AddEvent(0, _T("-"));
	m_wndPatientList.AddEvent(2, _T("&Delete Invoice"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPatientList.AddEvent(0, _T("-"));
	m_wndPatientList.AddEvent(3, _T("Create Refund Invoice"), _OnCreateOtherFeeRefundFnc);
	m_wndPatientList.AddEvent(0, _T("-"));
	m_wndPatientList.AddEvent(4, _T("Print Refund"), _OnPrintOtherFeeRefundFnc);
	m_wndPatientList.AddEvent(0, _T("-"));
	m_wndPatientList.AddEvent(5, _T("Modify Item"), _OnFeeListModifyItem);

	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
//	m_wndFeeList.AddEvent(1, _T("Add Items Fee"), _OnFeeListAddItemFnc);
//	m_wndFeeList.AddEvent(2, _T("Edit Items Quantity"), _OnFeeListEditItemFnc);
//	m_wndFeeList.AddEvent(3, _T("Delete Items Fee"), _OnFeeListDeleteItemFnc);


	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);

//	m_wndOtherReceipt.SetEvent(WE_CLICK, _OnOtherReceiptSelectFnc);
	m_wndOtherPayment.SetEvent(WE_CLICK, _OnOtherPaymentSelectFnc);


	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
//	m_wndAdmissionDeposit.SetEvent(WE_CLICK, _OnAdmissionDepositSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAdditionalFeeListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAdditionalFeeListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAdditionalFeeListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAdditionalFeeListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAdditionalFeeListFnc, 0, 'T', VK_CONTROL);
*/
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromTime = _T("00:00:00");
	m_szToTime = _T("23:59:00");

	//Layout
/*
	AddLayoutControl(&m_wndPatientProfiles, WS_RESIZEX|WS_RESIZEY, 100, 100, 50, 100);
	AddLayoutControl(&m_wndPatientFeeInformation, WS_REPOSX|WS_RESIZEX|WS_RESIZEY, 50, 100, 50, 100);
	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 100, 100, 50, 100);
	AddLayoutControl(&m_wndToDateLabel, WS_REPOSX, 25, 100, 100, 100);
	AddLayoutControl(&m_wndToDate, WS_REPOSX|WS_RESIZEX, 25, 100, 25, 100);
	AddLayoutControl(&m_wndFromDate, WS_RESIZEX, 100, 100, 25, 100);
	AddLayoutControl(&m_wndSearch, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndPatientList, WS_RESIZEX|WS_RESIZEY, 100, 100, 50, 100);
	AddLayoutControl(&m_wndFeeList, WS_REPOSX|WS_RESIZEX|WS_RESIZEY, 50, 100, 50, 100);
	AddLayoutControl(&m_wndDelete, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPrint, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndAdd, WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDepartment, WS_RESIZEX, 100, 100, 50, 100);
	AddLayoutControl(&m_wndPatientName, WS_RESIZEX, 100, 100, 50, 100);
	AddLayoutControl(&m_wndAdmissionDeposit, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
*/
	SetMode(VM_EDIT);
	OnPatientListLoadData();


}
void CHMSAdditionalFeeList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSAdditionalFeeList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdditionalFeeList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//hms_fee_invoiec

	m_hms_fee_invoieceTbl.SetValue(_T("HFE_CREATEDBY"), pMF->GetCurrentUser()); 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_CREATEDDATE"), pMF->GetSysDateTime()); 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DEPTID"),m_szPerformDepartmentKey);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_PATIENTNO"), m_nPatientNo); 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DOCNO"), m_nDocumentNo);	
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DATE"), pMF->GetSysDateTime()); 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_STATUS"), _T("P"));
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_STAFF"), pMF->GetCurrentUser()); 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_TYPE"), _T("E")); 
	m_hms_fee_invoieceTbl.SetValue(_T("hfe_class"), _T("X")); 

}
void CHMSAdditionalFeeList::SetDefaultValues(){

	m_szToDate.Empty();
	m_szFromDate.Empty();
	m_szDepartmentKey.Empty();
	m_szPatientName.Empty();

}
int CHMSAdditionalFeeList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1); 
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
/*void CHMSAdditionalFeeList::OnToDateChange(){
	
} */
/*void CHMSAdditionalFeeList::OnToDateSetfocus(){
	
} */
/*void CHMSAdditionalFeeList::OnToDateKillfocus(){
	
} */
int CHMSAdditionalFeeList::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSAdditionalFeeList::OnFromDateChange(){
	
} */
/*void CHMSAdditionalFeeList::OnFromDateSetfocus(){
	
} */
/*void CHMSAdditionalFeeList::OnFromDateKillfocus(){
	
} */
int CHMSAdditionalFeeList::OnFromDateCheckValue(){
	return 0;
} 
void CHMSAdditionalFeeList::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnPatientListLoadData();
} 
void CHMSAdditionalFeeList::OnPatientListDblClick(){
	
} 
void CHMSAdditionalFeeList::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	CString szLocked;
	m_nDocumentNo = ToInt(m_wndPatientList.GetItemText(nNewItem,5));
	m_nPatientNo = ToInt(m_wndPatientList.GetItemText(nNewItem, 8));
	m_nInvoiceNo = ToInt(m_wndPatientList.GetItemText(nNewItem,1));
	m_szPerformDepartmentKey = m_wndPatientList.GetItemText(nNewItem, 3);
	m_szStatus = m_wndPatientList.GetItemText(nNewItem, 7);
	szLocked = m_wndPatientList.GetItemText(nNewItem, 9);
	m_szType = m_wndPatientList.GetItemText(nNewItem, 10);
	m_szInvoiceType = m_wndPatientList.GetItemText(nNewItem, 13);
_tprintf(_T("\r\n%s"), m_szInvoiceType);
	pMF->m_nDocumentNo = m_nDocumentNo;	
	
	if(szLocked == _T("Y")){
		m_wndPatientList.SetMenuState(2, false);
	}
	else
	{		
		m_wndPatientList.SetMenuState(2,true);
	}

	OnFeeListLoadData();	


} 
int CHMSAdditionalFeeList::OnPatientListPaymentItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CString szSQL;
	CRecord rs(&pMF->m_db);
	long nInvoiceNo=0;
	double nTotalAmount=0;
	int ret=0;
	
//	ret = ShowMessageBox(_T("You want to print receipts and payments"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
//	if(ret == IDNO)
//		return -1;

	szSQL.Format(_T(" SELECT coalesce(sum(hfe_cost),0) as Amount FROM hms_fee WHERE hfe_docno = %ld AND hfe_type='X' AND hfe_status='O' "), m_nDocumentNo);

	rs.ExecSQL(szSQL);
	rs.GetValue(_T("Amount"), nTotalAmount);
	_debug(_T("%s: %f"), szSQL, nTotalAmount);
	if(nTotalAmount <=0) return -1;
	

	szSQL.Format(_T(" nextseq('%s')"),_T("hms_fee_invoice_invoiceno_asq"));
	nInvoiceNo = str2long(pMF->ExecDML(szSQL));	
	m_nInvoiceNo = nInvoiceNo;

	m_hms_fee_invoieceTbl.SetValue(_T("HFE_INVOICENO"), nInvoiceNo);	 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_PATIENTNO"), m_nPatientNo); 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DOCNO"), m_nDocumentNo);			
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_TYPE"), _T("X"));
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_STATUS"), _T("P"));
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DESC"),	m_szPatientName); 	
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_AMOUNT"), nTotalAmount);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_PATPAID"), nTotalAmount);
	m_hms_fee_invoieceTbl.SetValue(_T("hfe_class"), _T("X"));
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DEPTID"), m_szPerformDepartmentKey);
	
	szSQL = m_hms_fee_invoieceTbl.GetInsertSQL();
	ret = pMF->ExecSQL(szSQL); 
	
	
	if(ret <= 0) {
		ShowMessageBox(_T("Cannot create fee invoice"), MB_OK);
		return -1;
	}

	szSQL.Format(_T(" UPDATE hms_fee SET hfe_status ='P',hfe_invoiceno = %ld, hfe_discount=0,hfe_patdebt=0,hfe_patpaid=hfe_cost WHERE hfe_docno =%ld "), nInvoiceNo, m_nDocumentNo);
	pMF->ExecSQL(szSQL);
	
	pMF->PrintInvoice(nInvoiceNo);
	OnPatientListLoadData();
	 return 0;
} 
#include "HMSFeeDepositDialog.h"
#include ".\hmsadditionalfeelist.h"
int CHMSAdditionalFeeList::OnPatientListDepositItem(){

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	//if(pMF->m_nInpatient==0 && !pMF->CheckPermission(_T("01.04"))){
	//	ShowMessageBox(_T("Permission Denined."), 0);
	//	return;
	//}
	//

	if(m_nDocumentNo < 0)
		return -1;

	CString szDept = pMF->m_szReceiptDeptID;
	pMF->m_szReceiptDeptID = m_szPerformDepartmentKey;
	CHMSFeeDepositDialog dlg(this, VM_ADD);
	dlg.m_nPID = m_nPatientNo;
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nReceiptNo = 0;
	if(dlg.DoModal() == IDOK){
		if(dlg.m_bPrintReceipt){
			
		}
		OnFeeListLoadData();
	}

	pMF->m_szReceiptDeptID = szDept;

	 return 0;
} 
int CHMSAdditionalFeeList::OnPatientListPrintInvoiceItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szType == _T("A"))
		pMF->PrintDeposit(m_nInvoiceNo);
	else
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("select count(*) from hms_fee where hfe_invoiceno=%ld and hfe_itemid not in('F0000001','F0000003') "), m_nInvoiceNo);
		rs.ExecSQL(szSQL);

		if(rs.GetIntValue() <= 0)
			pMF->PrintInvoice(m_nInvoiceNo, true, true, 1);
		else
			pMF->PrintInvoice(m_nInvoiceNo, true, true);
		

	}
	 return 0;
} 

int CHMSAdditionalFeeList::OnPatientListEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSurName, szMidName, szFirstName, szSQL;
	
	
	CRecord rs(&pMF->m_db);
	CGuiInputDataDialog dlg(this, false); 
	dlg.m_szGroupName = _T("Edit Informatin");
	dlg.m_szValueName = _T("Patient Name");	
	if(dlg.DoModal()==IDOK){

		SplitName(dlg.m_szTextValue, szSurName, szMidName, szFirstName);

		szSQL.Format(_T(" UPDATE hms_patient SET HP_SURNAME='%s', HP_MIDNAME='%s', HP_FIRSTNAME='%s' WHERE hp_patientno=%ld "), szSurName, szMidName, szFirstName, m_nPatientNo);		
		int ret = pMF->ExecSQL(szSQL);
		if(ret > 0){
			OnPatientListLoadData();
		}

	}
	 return 0;
} 


int CHMSAdditionalFeeList::OnPatientListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return -1;

	CString szRefund = m_wndPatientList.GetItemText(nSel, 12);

	if (szRefund == _T("Y"))
		return -2;

	OnDeleteHMSAdditionalFeeList();
	return 0;
} 

long CHMSAdditionalFeeList::OnPatientListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL, tmpStr, szWhere, szStatus;
	CString szTemp;

	m_wndPatientList.BeginLoad();

	int nCount = 0;
	int nIndex = 1, nItem;
	bool bRefund = false;

	if (!m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfe_deptid ='%s' "), m_szDepartmentKey);
	}
	//szWhere.AppendFormat(_T(" and hfe_status <> 'C' "));

	if (pMF->CheckPermission(_T("40.08")))
	{
	szSQL.Format(_T(" SELECT DISTINCT  hd_docno AS docno,") \
	_T("	hd_patientno AS patientNo, ") 
	_T("   hfe_invoiceno AS invoiceno,") \
	_T("   trunc_date(hfe_date) AS receiptdate,") \
	_T("   hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname                                              AS pname,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   hfe_status                                                  AS status,") \
	_T("   hfe_locked                                                  AS flocked,") \
	_T("   hfe_type                                                  AS typeid,") \
	_T("   hfe_deptid                                                  AS Departmentid,") \
	_T("   hd_object AS ObjectID, hfe_invoicetype as invoicetype ") \
	_T(" FROM hms_fee_invoice_view2 ") \
	_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
	_T(" LEFT JOIN hms_patient ON(hd_patientno =hp_patientno)") \
	_T(" WHERE ((hfe_invoicetype<>'R' and hfe_class = 'X' ) or (hfe_invoicetype='R' and hfe_class = 'I' ))") \
	_T("		AND hfe_date BETWEEN TO_TIMESTAMP('%s %s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s %s','YYYY-MM-DD HH24:MI:SS') %s") \
	_T(" ORDER BY hd_docno,hfe_status,HFE_DEPTID ") \
	, m_szFromDate, m_szFromTime, m_szToDate, m_szToTime, szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT DISTINCT  hd_docno AS docno,") \
	_T("	hd_patientno AS patientNo, ") 
	_T("   hfe_invoiceno AS invoiceno,") \
	_T("   trunc_date(hfe_date) AS receiptdate,") \
	_T("   hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname                                              AS pname,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   hfe_status                                                  AS status,") \
	_T("   hfe_locked                                                  AS flocked,") \
	_T("   hfe_type                                                  AS typeid,") \
	_T("   hfe_deptid                                                  AS Departmentid,") \
	_T("   hd_object AS ObjectID, hfe_invoicetype as invoicetype ") \
	_T(" FROM hms_fee_invoice_view2 ") \
	_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
	_T(" LEFT JOIN hms_patient ON(hd_patientno =hp_patientno)") \
	_T(" WHERE ((hfe_invoicetype<>'R' and hfe_class = 'X' ) or (hfe_invoicetype='R' and hfe_class = 'I' ))") \
	_T("		AND hfe_staff ='%s' ") \
	_T("		AND hfe_date BETWEEN TO_TIMESTAMP('%s %s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s %s','YYYY-MM-DD HH24:MI:SS') %s") \
	_T(" ORDER BY hd_docno,hfe_status,HFE_DEPTID ") \
	, pMF->GetCurrentUser(), m_szFromDate, m_szFromTime, m_szToDate, m_szToTime, szWhere);
	}
//_msg(_T("%s"), szSQL);
	CString mpStr;
	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	CString szName;

	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("pname"), tmpStr);

		if(!m_szPatientName.IsEmpty())
		{

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
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("status"), szStatus);
		rs.GetValue(_T("pname"), szName);
		if(szStatus == _T("C"))
		{
			szName.AppendFormat(_T(" (\x110\xE3 h\x1EE7y)"));
		}
		nItem = m_wndPatientList.AddItems(
			tmpStr, 
			rs.GetValue(_T("invoiceno")),
			rs.GetValue(_T("receiptdate")),
			rs.GetValue(_T("Departmentid")),
			szName, 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("age")), 
			szStatus,
			rs.GetValue(_T("patientNo")),
			rs.GetValue(_T("flocked")),
			rs.GetValue(_T("typeid")),
			rs.GetValue(_T("objectid")),
			_T(""),
			rs.GetValue(_T("invoicetype")),
			NULL);

		rs.GetValue(_T("invoiceno"), szTemp);
		if (!szTemp.IsEmpty())
		{
			szSQL.Format(_T("SELECT Count(*) FROM hms_fee WHERE hfe_invoiceno=%ld AND hfe_status='R'"),
				         str2long(szTemp));
			rss.ExecSQL(szSQL);

			if (rss.GetIntValue() > 0)
			{
				bRefund = true;
				m_wndPatientList.SetItemText(nItem, 12, _T("Y"));
			}
			else
			{
				bRefund = false;
				m_wndPatientList.SetItemText(nItem, 12, _T("N"));
			}
		}

		if (szStatus == _T("C"))
		{
			m_wndPatientList.SetItemBkColor(nItem, RGB(255, 128, 64), FALSE);
			m_wndPatientList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		}

		if (bRefund)
		{
			m_wndPatientList.SetItemBkColor(nItem, RGB(220, 220, 220), FALSE);
			m_wndPatientList.SetItemTextColor(nItem, RGB(0, 0, 200), FALSE);
		}

		rs.MoveNext();
	}	
	m_wndPatientList.EndLoad(); 
	m_wndPatientList.SetCurSel(m_wndPatientList.GetItemCount()-1);
	return nCount;

}
void CHMSAdditionalFeeList::OnFeeListDblClick(){
	
} 
void CHMSAdditionalFeeList::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus == _T("P")){
		m_wndFeeList.SetMenuState(1,false);
		m_wndFeeList.SetMenuState(2,false);
		m_wndFeeList.SetMenuState(3,false);
	}
	else
	{		
		m_wndFeeList.SetMenuState(1,true);
		m_wndFeeList.SetMenuState(2,true);
		m_wndFeeList.SetMenuState(3,true);
	}
	
} 
int CHMSAdditionalFeeList::OnFeeListAddItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT DISTINCT hfe_status FROM hms_fee WHERE hfe_docno = %ld AND hfe_type='X' AND rownum = 1"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hfe_status"), m_szStatus);	
	
	if (m_szStatus != _T("O"))
		return -1;

	CHMSInpatientChargeFeeDialog dlg(pMF);
	dlg.m_bAddNew = false;
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_szPatientName = m_szPatientName;
	dlg.m_szDepartmentKey = m_szPerformDepartmentKey;
	dlg.m_nAge = str2int(m_szAge);
	dlg.SetMode(VM_NONE);
	dlg.DoModal();
	 return 0;
} 
int CHMSAdditionalFeeList::OnFeeListEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szItemID;

	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0) return -1;

	CGuiInputDataDialog dlg(this, true); 
	dlg.m_szGroupName = _T("Edit Informatin");
	dlg.m_szValueName = _T("Quantity");	
	dlg.m_nNumberValue = ToFloat(m_wndFeeList.GetItemText(nSel, 3));
	szItemID = m_wndFeeList.GetItemText(nSel, 6);
	if(dlg.DoModal()==IDOK){
		szSQL.Format(_T(" UPDATE hms_fee SET hfe_quantity=%.2f, hfe_cost=hfe_unitprice*%.2f WHERE hfe_docno=%ld AND hfe_status ='O' and hfe_itemid='%s' "), dlg.m_nNumberValue, dlg.m_nNumberValue, m_nDocumentNo, szItemID);		
		int ret = pMF->ExecSQL(szSQL);
		if(ret > 0){
			OnFeeListLoadData();
		}
	}
	 return 0;
} 

int CHMSAdditionalFeeList::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szItemID, tmpStr;
	int ret;
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0) return -1;

	szSQL.Format(_T("SELECT hfe_locked FROM hms_fee_invoice WHERE hfe_invoiceno=%ld"), m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;
	rs.GetValue(_T("hfe_locked"), tmpStr);
	if(tmpStr == _T("Y"))
	{
		ShowMessageBox(_T("This patient is locked. Cannot delete item"));
		return 0;
	}
	ret = ShowMessageBox(_T("Do you want to delete item?(Y/N)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(ret == IDNO)
		return -1;
	
	szItemID = m_wndFeeList.GetItemText(nSel, 6);
	szSQL.Format(_T(" DELETE FROM hms_fee WHERE hfe_docno=%ld AND hfe_status ='O' AND hfe_itemid='%s' "), m_nDocumentNo, szItemID);		
	ret = pMF->ExecSQL(szSQL);
	if(ret > 0){
		OnFeeListLoadData();
	}
	

	 return 0;
} 

long CHMSAdditionalFeeList::OnFeeListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord grs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szFeeID, szID, szDepartments;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;
	//UpdateData(true);
	m_wndFeeList.BeginLoad(); 
	int nCount = 0, nIndex, nChapterID=0;
	double nTotalCost=0,
			nGroup0Cost = 0,
			nGroup1Cost = 0,
			nGroup2Cost = 0,
			nCost=0;
	double nTotalInsPaid=0,
			nGroup0InsPaid = 0,
			nGroup1InsPaid = 0,
			nGroup2InsPaid = 0,
			nInsPaid=0;
	double nTotalDiscount=0,
			nGroup0Discount = 0,
			nGroup1Discount = 0,
			nGroup2Discount = 0,
			nDiscount=0;
	
	double nTotalCopayment=0,
			nGroup0Copayment = 0,
			nGroup1Copayment = 0,
			nGroup2Copayment = 0,
			nCopayment=0;

	double nTotalDiffPaid=0,
			nGroup0DiffPaid = 0,
			nGroup1DiffPaid = 0,
			nGroup2DiffPaid = 0,
			nDiffPaid=0;

	double nTotalPayable=0,
			nGroup0Payable = 0,
			nGroup1Payable = 0,
			nGroup2Payable = 0,
			nPayable=0;

	int nItem=0, nOldItem=0, nItem2;
	int nRefundItem = -1;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup;
	
	szWhere.Empty();
	
	
	

	if(m_szInvoiceType == _T("R"))
	{
		szSQL.Format(_T(" SELECT hfe_status      AS status,") \
_T("   HFE_DEPTID           AS Departmentid,") \
_T("   hfe_type             AS feetype,") \
_T("   rtrim(hfe_group,'0') AS groupid,") \
_T("   hfe_itemid           AS itemid,") \
_T("   hfe_desc             AS name,") \
_T("   hfe_unit             AS unit,") \
_T("   SUM(hfe_quantity)    AS qty,") \
_T("   hfe_unitprice        AS unitprice,") \
_T("   hfe_polprice         AS insprice,") \
_T("   SUM(hfe_cost)        AS cost,") \
_T("   0                    AS inspaid,") \
_T("   0                    AS discount,") \
_T("   0                    AS diffcost,") \
_T("   8                    AS patdebt,") \
_T("   0                    AS copayment") \
_T(" FROM hms_fee_refundline") \
_T(" WHERE hfe_docno =%ld and hfe_invoiceno=%ld ") \
_T(" GROUP BY hfe_group,") \
_T("   hfe_type,") \
_T("   hfe_status,") \
_T("   hfe_itemid,") \
_T("   hfe_desc,") \
_T("   hfe_unit,") \
_T("   hfe_unitprice,") \
_T("   hfe_polprice,") \
_T("   hfe_deptid") \
_T(" ORDER BY feetype,") \
_T("   name,") \
_T("   unit,") \
_T("   unitprice"), m_nDocumentNo, m_nInvoiceNo);
		rs.ExecSQL(szSQL);

		m_wndFeeList.BeginLoad();
		int nIndex = 1;
		CString tmpStr;
		while(!rs.IsEOF())
		{
			tmpStr.Format(_T("%d"), nIndex++);
			m_wndFeeList.AddItems(
						tmpStr, 
						rs.GetValue(_T("name")),
						rs.GetValue(_T("unit")),
						rs.GetValue(_T("qty")),
						rs.GetValue(_T("unitprice")),
						rs.GetValue(_T("cost")),
						rs.GetValue(_T("ItemID")),
						NULL);
			rs.MoveNext();
		}
		m_wndFeeList.EndLoad();

		return 1;

	}


	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
	grs.ExecSQL(szSQL);
	

	if(m_szStatus == _T("C"))
	{
		szSQL.Format(_T(" SELECT hfe_status as status, ") \
		_T("		HFE_DEPTID as Departmentid, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		hfe_polprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_polprice*hfe_quantity) as inspaid,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_diffcost) as diffcost,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		0 as copayment ") \
		_T(" FROM hms_fee_cancel ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_cost > 0 and hfe_status<>'C' %s ") \
		_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_status,  hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_polprice, HFE_DEPTID") \
		_T(" ORDER BY hfg_index, feetype, name, unit, unitprice"), 
		m_nDocumentNo, m_nInvoiceNo, szWhere);

	}
	else
	{
		szSQL.Format(_T(" SELECT hfe_status as status, ") \
		_T("		HFE_DEPTID as Departmentid, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		hfe_polprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_polprice*hfe_quantity) as inspaid,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_diffcost) as diffcost,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		0 as copayment ") \
		_T(" FROM hms_fee ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_cost > 0 and hfe_status<>'C' %s ") \
		_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_status,  hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice, hfe_polprice, HFE_DEPTID") \
		_T(" ORDER BY hfg_index, feetype, name, unit, unitprice"), 
		m_nDocumentNo, m_nInvoiceNo, szWhere);
	
	}
	rs.ExecSQL(szSQL);

//	_fmsg(_T("%s"), szSQL);

	nIndex = 0;
	CString szSubItem;
	int nSubItem = 1;
	nChapterID = 0;
	nOldItem = 0;
	while(!grs.IsEOF()){
		grs.GetValue(_T("level"), nLevel);
		grs.GetValue(_T("id"), szParentGroup);
		grs.GetValue(_T("feeid"), szSubItem);
		szParentGroup.Trim();
		bool bAdd = false;
		rs.MoveFirst();
		while(!rs.IsEOF()){
			rs.GetValue(_T("groupid"), tmpStr);
			if(tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
				bAdd = true;
				break;
			}
			rs.MoveNext();
		}
		if(!bAdd)
		{
			grs.MoveNext();
			continue;
		}
		if(nLevel == 0)
		{
			if(nGroup0Cost > 0 && nChapterID > 0){
				CString szLabel;
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID-1]);
				nItem = m_wndFeeList.AddItems(_T(""), szLabel+tmpStr, NULL);
				m_wndFeeList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
				m_wndFeeList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);

				m_wndFeeList.SetItemText(nItem, 5, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));				
				m_wndFeeList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
				nGroup1Cost = 0;
				nGroup1InsPaid = 0;
				nGroup1DiffPaid = 0;
				nGroup1Discount = 0;
				nGroup1Payable = 0;
				nGroup1Copayment = 0;

			}

			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			nItem = m_wndFeeList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			m_wndFeeList.SetItemText(nItem, 5, _T("Type"));
			m_wndFeeList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndFeeList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndFeeList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			nIndex = 0;
			
			nGroup0Cost = 0;
			nGroup0InsPaid = 0;
			nGroup0DiffPaid = 0;
			nGroup0Discount = 0;
			nGroup0Payable = 0;
			nGroup0Copayment = 0;
			nGroup1Cost = 0;
			nGroup1InsPaid = 0;
			nGroup1DiffPaid = 0;
			nGroup1Discount = 0;
			nGroup1Payable = 0;
			nGroup1Copayment = 0;
			nGroup2Cost = 0;
			nGroup2InsPaid = 0;
			nGroup2DiffPaid = 0;
			nGroup2Discount = 0;
			nGroup2Payable = 0;
			nGroup2Copayment = 0;

		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			nItem = m_wndFeeList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);			
			m_wndFeeList.SetItemBkColor(nItem, RGB(64, 128, 128), FALSE);
			m_wndFeeList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndFeeList.MergeCell(nItem, 1, nItem, 4);
			nGroup1Cost = 0;
			nGroup1InsPaid = 0;
			nGroup1DiffPaid = 0;
			nGroup1Discount = 0;
			nGroup1Payable = 0;
			nGroup1Copayment = 0;

		}
		
		if(szSubItem == _T("Y"))
		{
			nSubItem = 0;
			while(!rs.IsEOF())
			{
				
					rs.GetValue(_T("groupid"), szNewGroup);
					szNewGroup.Trim();
					if(szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
							szOldGroup = szNewGroup;
							if(nGroup2Cost > 0 && nOldItem > 0){
								m_wndFeeList.SetItemText(nOldItem, 5, nGroup2Cost > 0?ToString((double)nGroup2Cost):_T(""));							
								nOldItem = 0;

							}
							szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&pMF->m_db);
							rs2.ExecSQL(szSQL);
							
							nItem2 = m_wndFeeList.AddItems(_T("*"), rs2.GetValue(_T("hfg_name")), NULL);
							m_wndFeeList.SetItemText(nItem2, 5, _T("SubGroup"));
							nOldItem = nItem2;
							m_wndFeeList.SetItemBkColor(nItem2, RGB(200, 200, 228), FALSE);
							m_wndFeeList.SetItemTextColor(nItem2, COLOR_BLUE, FALSE);
							m_wndFeeList.MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

							nGroup2Cost = 0;
							nGroup2InsPaid = 0;
							nGroup2DiffPaid = 0;
							nGroup2Discount = 0;
							nGroup2Payable = 0;
							nGroup2Copayment = 0;


						}

						
						nSubItem++;
						
						double nCost=0, nDiscount=0, nPatPaid=0, nInsPaid, nDiffPaid, nCoPayment;
						CString status;
						rs.GetValue(_T("status"), status);
						rs.GetValue(_T("cost"), nCost);
						rs.GetValue(_T("discount"), nDiscount);
						rs.GetValue(_T("inspaid"), nInsPaid);
						rs.GetValue(_T("copayment"), nCoPayment);
						rs.GetValue(_T("patdebt"), nPatPaid);
						rs.GetValue(_T("diffcost"), nDiffPaid);

						if (status == _T("O") || status == _T("P"))
						{
							nTotalCost += nCost;
							nGroup0Cost += nCost;
							nGroup1Cost += nCost;
							nGroup2Cost += nCost;
							nTotalInsPaid += nInsPaid;
							nTotalDiscount += nDiscount;
							nTotalDiffPaid += nDiffPaid;
							nTotalPayable += nPatPaid;
							nTotalCopayment += nCoPayment;

							nGroup0InsPaid += nInsPaid;
							nGroup0Discount += nDiscount;
							nGroup0DiffPaid += nDiffPaid;
							nGroup0Payable += nPatPaid;
							nGroup0Copayment += nCoPayment;

							nGroup1InsPaid += nInsPaid;
							nGroup1Discount += nDiscount;
							nGroup1DiffPaid += nDiffPaid;
							nGroup1Payable += nPatPaid;
							nGroup1Copayment += nCoPayment;

							nGroup2InsPaid += nInsPaid;
							nGroup2Discount += nDiscount;
							nGroup2DiffPaid += nDiffPaid;
							nGroup2Payable += nPatPaid;
							nGroup2Copayment += nCoPayment;
						}

						nRefundItem = m_wndFeeList.AddItems(_T(""), 
								rs.GetValue(_T("name")),
								rs.GetValue(_T("unit")),
								rs.GetValue(_T("qty")),
								rs.GetValue(_T("unitprice")),
								rs.GetValue(_T("cost")),
								rs.GetValue(_T("ItemID")),
								NULL);

							if (status == _T("R"))
							{
								m_wndFeeList.SetItemText(nRefundItem, 0, _T("X"));
								m_wndFeeList.SetSubItemTextColor(nRefundItem, 0, RGB(255, 0, 0), FALSE);
							}

						}
						bDeleteParent = false;
					
					rs.MoveNext();

			}
			if(nGroup1Cost > 0)
			{
				
				if(nGroup2Cost > 0 &&nOldItem > 0){
					m_wndFeeList.SetItemText(nOldItem, 5, nGroup2Cost > 0?ToString((double)nGroup2Cost):_T(""));				
					nOldItem = 0;
					nGroup2Cost = 0;
				}
				nOldItem = 0;
				CString szLabel;
				TranslateString(_T("Sub Amount"), szLabel);
				nItem = m_wndFeeList.AddItems(_T(""), szLabel, NULL);
				m_wndFeeList.SetItemText(nItem, 5, _T("SubAmount"));
				m_wndFeeList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
				m_wndFeeList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndFeeList.SetItemText(nItem, 5, nGroup1Cost > 0?ToString((double)nGroup1Cost):_T(""));			

				m_wndFeeList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
				nGroup1Cost  =0;
			}

		}

		grs.MoveNext();
	
	}


	if(nGroup0Cost > 0 && nChapterID > 0){
				CString szLabel;
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T(" (%s)"), lpszChapter[nChapterID-1]);
				nItem = m_wndFeeList.AddItems(_T(""), szLabel+tmpStr, NULL);
				m_wndFeeList.SetItemBkColor(nItem, RGB(128, 200, 255), FALSE);
				m_wndFeeList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndFeeList.SetItemText(nItem, 5, nGroup0Cost > 0?ToString((double)nGroup0Cost):_T(""));				

				m_wndFeeList.MergeCell(nItem, 1, nItem, 3, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, false);
				nGroup1Cost = 0;
				nGroup1InsPaid = 0;
				nGroup1DiffPaid = 0;
				nGroup1Discount = 0;
				nGroup1Payable = 0;
				nGroup1Copayment = 0;

	}

	
	if (nTotalCost > 0)
	{
			CString szLabel;
			m_wndFeeList.AddItems(_T(""), NULL);
			
			TranslateString(_T("Total Amount"), szLabel);
			tmpStr.Format(_T("%s ("), szLabel);
			for (int i =0; i < nChapterID; i++)
			{
				if(i > 0)
					tmpStr += _T("+");
				tmpStr.AppendFormat(_T("%s"), lpszChapter[i]);
			}
			tmpStr += _T(")");

			nItem = m_wndFeeList.AddItems(_T(""), 
			tmpStr,
			_T(""),
			_T(""),
			_T(""),
			nTotalCost>0?ToString(nTotalCost):_T(""),
			_T(""),			
			NULL);
			m_wndFeeList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndFeeList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndFeeList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			//m_wndFeeList.SetItemText(nItem, , _T("TotalAmount"));
	}	


	/*szSQL.Format(_T("SELECT hfe_amount, hfe_patpaid, hfe_date, ") \
		_T(" (select distinct ss_desc from sys_sel where ss_id='hms_invoice_desc' and ss_code=hfe_desc) as hfe_desc ") \
		_T(" FROM hms_fee_deposit WHERE hfe_docno=%ld and hfe_invoiceno=%ld"),
		m_nDocumentNo, m_nInvoiceNo);

	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		m_wndFeeList.AddItems(_T(""), 
			rs.GetValue(_T("hfe_desc")),
			_T(""),
			_T(""),
			_T(""),
			rs.GetValue(_T("hfe_amount")),
			NULL);
		rs.MoveNext();
	}*/
	m_wndFeeList.EndLoad();
	UpdateData(FALSE);
	return 0;
}
void CHMSAdditionalFeeList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPatientListEditItem();
} 
void CHMSAdditionalFeeList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSAdditionalFeeList();
} 
void CHMSAdditionalFeeList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;

	if (m_szType == _T("A"))
		pMF->PrintDeposit(m_nInvoiceNo, false);
	else if(m_szType == _T("V") || m_szType == _T("U"))
	{
		pMF->PrintRefund(m_nInvoiceNo, true);
	}
	else
	{
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("select count(*) from hms_fee where hfe_invoiceno=%ld and hfe_itemid not in('F0000001','F0000003') "), m_nInvoiceNo);
		rs.ExecSQL(szSQL);

		if(rs.GetIntValue() <= 0)
			pMF->PrintInvoice(m_nInvoiceNo, false, true, 1);
		else
			pMF->PrintInvoice(m_nInvoiceNo, false, true);

	}
	
} 
void CHMSAdditionalFeeList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSInpatientChargeFeeDialog dlg(pMF);
	dlg.m_bAddNew = true;
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK){
	//	m_nDocumentNo = dlg.m_nDocumentNo;	
	//	OnPatientListPaymentItem();
	//	PrintInvoice(dlg.m_nInvoiceNo);

		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("select count(*) from hms_fee where hfe_invoiceno=%ld and hfe_itemid not in('F0000001','F0000003') "), dlg.m_nInvoiceNo);
		rs.ExecSQL(szSQL);

		if(rs.GetIntValue() <= 0)
		{
			pMF->PrintInvoice(dlg.m_nInvoiceNo, true, false, 1);
		}
		else
			pMF->PrintInvoice(dlg.m_nInvoiceNo, true);

		
		OnPatientListLoadData();
	}

}
void CHMSAdditionalFeeList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSAdditionalFeeList::OnDepartmentSelendok(){
	 
}
/*void CHMSAdditionalFeeList::OnDepartmentSetfocus(){
	
}*/
/*void CHMSAdditionalFeeList::OnDepartmentKillfocus(){
	
}*/
long CHMSAdditionalFeeList::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("WHERE sd_id = '%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_dept %s ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CHMSAdditionalFeeList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAdditionalFeeList::OnPatientNameChange(){
	
} */
/*void CHMSAdditionalFeeList::OnPatientNameSetfocus(){
	
} */
/*void CHMSAdditionalFeeList::OnPatientNameKillfocus(){
	
} */
int CHMSAdditionalFeeList::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSAdditionalFeeList::OnAdmissionDepositSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
int CHMSAdditionalFeeList::OnAddHMSAdditionalFeeList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSAdditionalFeeList::OnEditHMSAdditionalFeeList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdditionalFeeList::OnDeleteHMSAdditionalFeeList(){
 /*	if(GetMode() != VM_VIEW) 
 		return -1; */
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	CHMSCancelReasonDialog dlg(this);
	if(dlg.DoModal() != IDOK)
		return -1;

	szSQL.Format(_T("HMS_FEE_CANCEL_REASON_CREATE(%ld, %ld, '%s', '%s') "), 
				m_nDocumentNo, m_nInvoiceNo, dlg.m_szReason, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
//_msg(_T("%s"), szSQL);
	if(ret > 0)
	{
		OnPatientListLoadData(); 
		OnFeeListLoadData();
	}

/*
	pMF->BeginTransaction();
	if(m_szType == _T("A"))
		szSQL.Format(_T("UPDATE hms_fee_deposit SET hfe_status='C' WHERE hfe_invoiceno=%ld and hfe_docno=%ld and hfe_locked<>'Y' and hfe_class='X' "), m_nInvoiceNo, m_nDocumentNo);
	else
		szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_status='C' WHERE hfe_invoiceno=%ld and hfe_docno=%ld and hfe_locked<>'Y' and hfe_class='X' "), m_nInvoiceNo, m_nDocumentNo);

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0){  		
		szSQL.Format(_T("INSERT INTO hms_fee_cancel SELECT * FROM hms_fee WHERE hfe_docno =%ld and hfe_invoiceno=%ld AND hfe_status = 'P' AND hfe_type ='X' and hfe_class='X' "), m_nDocumentNo, m_nInvoiceNo); 
		int res = pMF->ExecSQL(szSQL);
		if(res >= 0)
		{
			szSQL.Format(_T("DELETE FROM hms_fee WHERE hfe_docno =%ld and hfe_invoiceno=%ld AND hfe_status = 'P' AND hfe_type ='X' and hfe_class='X' "), m_nDocumentNo, m_nInvoiceNo); 
			int res = pMF->ExecSQL(szSQL);
			pMF->Commit();
 			
			OnFeeListLoadData();
		}
		OnPatientListLoadData(); 
		return 0;
 	}
		pMF->Rollback();
*/
	return 0;
}
int CHMSAdditionalFeeList::OnSaveHMSAdditionalFeeList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSAdditionalFeeListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSAdditionalFeeList::OnCancelHMSAdditionalFeeList(){
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
int CHMSAdditionalFeeList::OnHMSAdditionalFeeListListLoadData(){
	return 0;
}
void CHMSAdditionalFeeList::OnPaymentPaid(){
	

}

void CHMSAdditionalFeeList::PrintInvoice(long nInvoiceNo, bool bPreview, bool bDirect){	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	long	nDocumentNo;
	if(!rpt.Init(_T("Reports/HMS/HF_INVOICEFEE.RPT")) )
		return;
	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" 	trunc_date(hd_admitdate) as examdate,") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T("	(select sd_name from sys_dept where sd_id=hfe_deptid) as deptname, ") \
				_T(" 	hfe_serialno as serialno,") \
				_T(" 	hfe_receiptno as recvno,") \
				_T(" 	hfe_date as recvdate, ") \
				_T(" 	hfe_staff as receiver,") \
				_T(" 	hfe_desc as reason, ") \
				_T(" 	hfe_amount as cost,") \
				_T(" 	hfe_discount as discount,") \
				_T(" 	hfe_patpaid as patpaid") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfe_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno AND hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_invoiceno=%ld "), nInvoiceNo);

	_debug(_T("%s"), szSQL);
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Patient not found"));
		return;
	}
	//Report Header
	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE2"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME2"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALADDRESS"), pMF->m_CompanyInfo.sc_address);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALADDRESS1"), pMF->m_CompanyInfo.sc_address);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALADDRESS2"), pMF->m_CompanyInfo.sc_address);
	
	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo2"), tmpStr);
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("SerialNo")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
	
	rpt.GetReportHeader()->SetValue(_T("ReceiptNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ReceiptNo1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ReceiptNo2"), tmpStr);
	tmpStr.Format(_T("%ld"), nInvoiceNo);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo2"), tmpStr);


	//rs.GetValue(_T("pname"), tmpStr);
	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME2"), tmpStr);
	rs.GetValue(_T("birthdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("birthdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("birthdate1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("birthdate2"), tmpStr);
	
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age2"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex2"), tmpStr);
	rs.GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address2"), tmpStr);
	rs.GetValue(_T("deptname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department2"), tmpStr);
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ExamDate1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ExamDate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo2"), tmpStr);
	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace2"), tmpStr);
	rs.GetValue(_T("diagnostic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Diagnostic1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Diagnostic2"), tmpStr);
	rs.GetValue(_T("reldisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease2"), tmpStr);

	CString szDate;
	rs.GetValue(_T("recvdate"), tmpStr);
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReceiptDate")), CDateTime::Convert(tmpStr,yyyymmdd|hhmmss,ddmmyyyy|hhmm));	
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate"), szDate);	
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate1"), szDate);	
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate2"), szDate);	
	rs.GetValue(_T("doctor"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("Doctor"), pMF->GetDoctorName(tmpStr));
	rs.GetValue(_T("receiver"), tmpStr);	
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("ReceiveBy"), pMF->GetDoctorName(tmpStr));
	rpt.GetReportFooter()->SetValue(_T("ReceiveBy1"), pMF->GetDoctorName(tmpStr));
	rpt.GetReportFooter()->SetValue(_T("ReceiveBy2"), pMF->GetDoctorName(tmpStr));	
	
	rs.GetValue(_T("reason"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("reason"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("reason1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("reason2"), tmpStr);

	CReportSection* rptDetail = rpt.GetDetail(0); 
	CRecord grs(&pMF->m_db);
	CString szFeeID, szID;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	int nCount = 0, nIndex, nChapterID=0;
	double dTotal[5];
	double dGroup1[5];
	double dGroup2[5];
	double dAmount = 0;
	int nItem=0, nOldItem=0, nItem2=0;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup;
	for (int i =0; i < 5; i++){
		dTotal[i] = 0;
		dGroup1[i] = 0;
		dGroup2[i] = 0;
	}
	
	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
	grs.ExecSQL(szSQL);

	szSQL.Format(_T(" SELECT") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patpaid+hfe_diffpaid) as patpaid,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_patdebt) as unpaid") \
		_T(" FROM hms_fee") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_invoiceno=%ld AND hfe_patpaid > 0 ") \
		_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_desc, hfe_unit, hfe_unitprice") \
		_T(" ORDER BY hfg_index,  name, unit, unitprice"), nInvoiceNo);

_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"));
		return;
	}

	nIndex = 0;
	CString szSubItem, szType;
	int nSubItem = 1;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CReportSection *grp;
	while(!grs.IsEOF()){
		grs.GetValue(_T("level"), nLevel);
		grs.GetValue(_T("id"), szParentGroup);
		grs.GetValue(_T("feeid"), szSubItem);
		szParentGroup.Trim();
		bool bAdd = false;
		rs.MoveFirst();
		while(!rs.IsEOF()){
			rs.GetValue(_T("groupid"), tmpStr);
			if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
				bAdd = true;
				break;
			}
			rs.MoveNext();
		}
		if(!bAdd)
		{
			grs.MoveNext();
			continue;
		}
		
		if(nLevel == 0)
		{
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			fee.szGroupID = _T("Type");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			nIndex = 0;
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			fee.szGroupID = _T("Group");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
		}
		if(szSubItem == _T("Y")){
			nSubItem = 0;
//			rs.MoveFirst();
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("groupid"), szNewGroup);
				szNewGroup.Trim();
				if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
				{
					if(szNewGroup.Left(3) ==_T("B11") && szOldGroup != szNewGroup){
							szOldGroup = szNewGroup;
							if(dGroup2[0] > 0 && nItem2 > 0){
								fee = feeList.GetAt(nOldItem);
								fee.nCost = dGroup2[0];
								fee.nDiscount = dGroup2[1];
								fee.nPatPaid = dGroup2[2];
								fee.nPatDebt = dGroup2[3];
								feeList.SetAt(nOldItem, fee);
							}
							szSQL.Format(_T("SELECT hfg_name as name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&pMF->m_db);
							rs2.ExecSQL(szSQL);
							fee.szGroupID = _T("SubGroup");
							fee.szID = _T("*");
							fee.szName = rs2.GetValue(_T("name"));
							nItem2 = feeList.Add(fee);
							nOldItem = nItem2;
							dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
					}

					nSubItem++;
						rs.GetValue(_T("cost"), dAmount);
						dTotal[0] += dAmount;
						dGroup1[0] += dAmount;
						dGroup2[0] += dAmount;
						rs.GetValue(_T("discount"), dAmount);
						dTotal[1] += dAmount;
						dGroup1[1] += dAmount;
						dGroup2[1] += dAmount;
						rs.GetValue(_T("patpaid"), dAmount);
						dTotal[2] += dAmount;
						dGroup1[2] += dAmount;
						dGroup2[2] += dAmount;

						rs.GetValue(_T("patdebt"), dAmount);
						dTotal[3] += dAmount;
						dGroup1[3] += dAmount;
						dGroup2[3] += dAmount;
						rs.GetValue(_T("unpaid"), dAmount);
						dTotal[4] += dAmount;
						dGroup1[4] += dAmount;
						dGroup2[4] += dAmount;
						fee.szGroupID = _T("Item");
						fee.szID.Empty();
						fee.szName = rs.GetValue(_T("name"));
						fee.szUnit = rs.GetValue(_T("unit"));
						fee.nQuantity = ToFloat(rs.GetValue(_T("qty")));
						fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
						fee.nCost = ToDouble(rs.GetValue(_T("cost")));
						fee.nPatPaid = ToDouble(rs.GetValue(_T("patpaid")));
						feeList.Add(fee);
				}
				else
					break;
				rs.MoveNext();
			}
			if(dGroup1[0] > 0 && nItem > 0)
			{
				if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
					fee = feeList.GetAt(nOldItem);
					fee.nCost = dGroup2[0];
					fee.nDiscount = dGroup2[1];
					fee.nPatPaid = dGroup2[2];
					feeList.SetAt(nOldItem, fee);
				}
				dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
				nItem2 = 0;
				fee = feeList.GetAt(nItem);
				fee.szGroupID = _T("SubAmount");
				TranslateString(_T("Sub Amount"), fee.szName);
				fee.nCost = dGroup1[0];
				fee.nDiscount = dGroup1[1];
				fee.nPatPaid = dGroup1[2];
				nItem = feeList.Add(fee);
				dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
			}
		}
		grs.MoveNext();
	
	}

	if(dTotal[0] > 0){
			TranslateString(_T("Total Amount"), tmpStr);
			fee.szGroupID = _T("TotalAmount");
			fee.szName = tmpStr;
			fee.nCost = dTotal[0];
			feeList.Add(fee);
	}
	

	for (int i =0; i < feeList.GetCount(); i++){
		fee = feeList[i];
		szType = fee.szGroupID;
			if(szType == _T("Type"))
			{
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				tmpStr = fee.szID;
				rptDetail->SetValue(_T("GH1"), tmpStr);
				StringUpper(fee.szName, tmpStr);
				rptDetail->SetValue(_T("GH2"), tmpStr);
			}
			if(szType == _T("Group")){
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("GH1"), fee.szID);
				rptDetail->SetValue(_T("GH2"), fee.szName);
			}
			else if(szType == _T("SubGroup")){
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("GH1"), fee.szID);
				rptDetail->SetValue(_T("GH2"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
/*
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
*/
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupFooter(1);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
			//	rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubAmount"), tmpStr);
/*
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
*/

			}
			else if(szType == _T("Item")){
				rptDetail = rpt.AddDetail();
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
			}
/*
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("AmountDiscount"), tmpStr);
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("AmountPatPaid"), tmpStr);
			}
*/
	}

	
	//Report Footer
	FormatCurrency(ceil(dTotal[0]), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount1"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount2"), tmpStr);

	
	rpt.GetReportHeader()->SetValue(_T("Price"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Price1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Price2"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("TotalAmount"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TotalAmount1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TotalAmount2"), tmpStr);

	FormatCurrency(ceil(dTotal[1]), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalDiscount"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalDiscount1"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalDiscount2"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("TotalDiscount"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TotalDiscount1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TotalDiscount2"), tmpStr);

	FormatCurrency(ceil(dTotal[2]), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalPatpaid"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalPatpaid1"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalPatpaid2"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("TotalPatpaid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TotalPatpaid1"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TotalPatpaid2"), tmpStr);

	CString szSumInWord;
	tmpStr.Format(_T("%.2f"), ceil(dTotal[2]));
	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng");
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
	rpt.GetReportFooter()->SetValue(_T("SumInWord1"), szSumInWord);
	rpt.GetReportFooter()->SetValue(_T("SumInWord2"), szSumInWord);

	rpt.GetReportHeader()->SetValue(_T("SumInWord"), szSumInWord);
	rpt.GetReportHeader()->SetValue(_T("SumInWord1"), szSumInWord);
	rpt.GetReportHeader()->SetValue(_T("SumInWord2"), szSumInWord);
/*
	FormatCurrency(dTotal[1], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);
	FormatCurrency(dTotal[2], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
*/	

	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportFooter()->SetValue(_T("PrintDate1"), szDate);
	rpt.GetReportFooter()->SetValue(_T("PrintDate2"), szDate);

	rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("PrintDate1"), szDate);
	rpt.GetReportHeader()->SetValue(_T("PrintDate2"), szDate);

	szDate = rpt.GetReportFooter()->GetValue(_T("SheetNumber"));
	tmpStr.Format(szDate, 1);
	rpt.GetReportFooter()->SetValue(_T("SheetNumber"), tmpStr);
	
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
//	tmpStr.Format(szDate, 2);
//	rpt.GetReportFooter()->SetValue(_T("SheetNumber"), tmpStr);
//	rpt.Print(true);

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	pMF->ExecSQL(szSQL);
}



void CHMSAdditionalFeeList::PrintDeposit(long nInvoiceNo, bool bPreview)
{	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	long nDocumentNo;

	CString szType;

	szSQL.Format(_T(" SELECT  hd_patientno as patientno,  ") \
				_T("         hd_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hp_birthdate as birthdate,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("         hp_workplace as workplace,") \
				_T("         hfe_type as typeid,") \
				_T("         (select sd_name from sys_dept where sd_id=hfe_deptid) as deptname,") \
				_T("         hfe_deptid as depts,") \
				_T("         hfe_serialno as serialno,") \
				_T("         hfe_receiptno as recvno,") \
				_T("         hfe_date as recvdate, ") \
				_T("         hfe_staff as receiveby,") \
				_T("         (select ss_desc from sys_sel where ss_id ='hms_invoice_desc' and ss_code =hfe_desc) as reason, ") \
				_T("         hfe_amount as cost,") \
				_T("         hfe_patpaid as patpaid") \
				_T(" FROM hms_fee_deposit ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfe_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno and hd_docno=hfe_docno)") \
				_T(" WHERE hfe_invoiceno=%ld AND (hfe_patpaid+hfe_amount) > 0"), nInvoiceNo);
	/*_fmsg(_T("%s"), szSQL);
	_msg(_T("%s"), szSQL);*/
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	double nAdvReceipt=0, nRefundAmt = 0;
	int nPage = 0;
	CString szReportName;
	rs.GetValue(_T("typeid"), szType);
	
	
	szReportName = _T("Reports/HMS/HF_IXDEPOSITFEE.RPT");	
	if(!rpt.Init(szReportName) )
		return;

	
		//Page Header
		//Report Detail
		
	int p =1;
		CReportSection* rptDetail = NULL;
		
		CReportItem *obj = rpt.GetDetail(0)->GetItem(_T("PATIENTNAME2"));
		if(obj == NULL)
			p = 2;

		for (int i =0; i < p; i++)
		{
			if(rptDetail){
				rptDetail->SetPageBreak();
			}
			rptDetail = rpt.AddDetail();
		
			tmpStr.Empty();
			StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
			rptDetail->SetValue(_T("HealthService"), tmpStr);
			rptDetail->SetValue(_T("HealthService2"), tmpStr);
			rptDetail->SetValue(_T("HealthService3"), tmpStr);
			StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
			rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
			rptDetail->SetValue(_T("HOSPITALNAME2"), tmpStr);
			rptDetail->SetValue(_T("HOSPITALNAME3"), tmpStr);
			rs.GetValue(_T("docno"), nDocumentNo);
			tmpStr.Format(_T("%ld"), nDocumentNo);
			rptDetail->SetValue(_T("DocumentNo"), tmpStr);
			rptDetail->SetValue(_T("DocumentNo2"), tmpStr);
			rptDetail->SetValue(_T("DocumentNo3"), tmpStr);
			rs.GetValue(_T("bookno"), tmpStr);
			rptDetail->SetValue(_T("BookNo"), tmpStr);
			rptDetail->SetValue(_T("BookNo2"), tmpStr);
			rptDetail->SetValue(_T("BookNo3"), tmpStr);
			
			CString szSerialNo;
			rs.GetValue(_T("serialno"), szSerialNo);
			rs.GetValue(_T("recvno"), tmpStr);
			szSerialNo.AppendFormat(_T("- %s"), tmpStr);
			rptDetail->SetValue(_T("ReceiptNo"), szSerialNo);
			rptDetail->SetValue(_T("ReceiptNo2"), szSerialNo);
			rptDetail->SetValue(_T("ReceiptNo3"), szSerialNo);

			tmpStr.Format(_T("%ld"), nInvoiceNo);
			rptDetail->SetValue(_T("InvoiceNo"), tmpStr);
			rptDetail->SetValue(_T("InvoiceNo2"), tmpStr);
			rptDetail->SetValue(_T("InvoiceNo3"), tmpStr);


			rs.GetValue(_T("pname"), tmpStr);
			rptDetail->SetValue(_T("PATIENTNAME"), tmpStr);
			rptDetail->SetValue(_T("PATIENTNAME2"), tmpStr);
			rptDetail->SetValue(_T("PATIENTNAME3"), tmpStr);
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("Age"), tmpStr);
			rptDetail->SetValue(_T("Age2"), tmpStr);
			rptDetail->SetValue(_T("Age3"), tmpStr);
			rs.GetValue(_T("sex"), tmpStr);
			rptDetail->SetValue(_T("Sex"), tmpStr);
			rptDetail->SetValue(_T("Sex2"), tmpStr);
			rptDetail->SetValue(_T("Sex3"), tmpStr);
			rs.GetValue(_T("address"), tmpStr);
			rptDetail->SetValue(_T("Address"), tmpStr);
			rptDetail->SetValue(_T("Address2"), tmpStr);
			rptDetail->SetValue(_T("Address3"), tmpStr);
			
			rs.GetValue(_T("deptname"), tmpStr);
			rptDetail->SetValue(_T("Department"), tmpStr);
			rptDetail->SetValue(_T("Department2"), tmpStr);
			rptDetail->SetValue(_T("Department3"), tmpStr);
			rs.GetValue(_T("reason"), tmpStr);
			rptDetail->SetValue(_T("Reason"), tmpStr);
			rptDetail->SetValue(_T("Reason2"), tmpStr);
			rptDetail->SetValue(_T("Reason3"), tmpStr);

		
			rs.GetValue(_T("depts"), tmpStr);
			CString szDeptName = pMF->GetDepartments(tmpStr);
			rptDetail->SetValue(_T("Department"), szDeptName);
			rptDetail->SetValue(_T("Department2"), szDeptName);
			rptDetail->SetValue(_T("Department3"), szDeptName);

	
			FormatCurrencyStr(rs.GetValue(_T("cost")), tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			rptDetail->SetValue(_T("TotalAmount2"), tmpStr);
			rptDetail->SetValue(_T("TotalAmount3"), tmpStr);
			CString szSumInWord;

			rs.GetValue(_T("cost"), tmpStr);

			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng");
			rptDetail->SetValue(_T("SumInWord"), szSumInWord);
			rptDetail->SetValue(_T("SumInWord2"), szSumInWord);
			rptDetail->SetValue(_T("SumInWord3"), szSumInWord);
	
			CString szDate;
			rs.GetValue(_T("recvdate"), tmpStr);
			szDate.Format(rptDetail->GetValue(_T("PrintDate")),tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
			rptDetail->SetValue(_T("PrintDate"), szDate);
			rptDetail->SetValue(_T("PrintDate2"), szDate);
			rptDetail->SetValue(_T("PrintDate3"), szDate);
			
			rs.GetValue(_T("ReceiveBy"), tmpStr);
			tmpStr.Trim();
			CString szDoctor = pMF->GetDoctorName(tmpStr);
			rptDetail->SetValue(_T("ReceiveBy"), szDoctor);
			rptDetail->SetValue(_T("ReceiveBy2"), szDoctor);
			rptDetail->SetValue(_T("ReceiveBy3"), szDoctor);
			rptDetail->SetValue(_T("SheetNumber"), _T("1"));
			if(p > 1)
			{
				tmpStr.Format(_T("%d"), i+1);
				rptDetail->SetValue(_T("SheetNumber"), tmpStr);
			}			

		}
		
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

	
	szSQL.Format(_T("UPDATE hms_fee_deposit SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	pMF->ExecSQL(szSQL);	
}



BOOL CHMSAdditionalFeeList::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F2){
		if(m_wndAdd.IsWindowEnabled())
			OnAddSelect();
		return TRUE;
	}

	return CGuiView::PreTranslateMessage(pMsg);
}

void CHMSAdditionalFeeList::PrintRefund(long nInvoiceNo, bool bPreview)
{
}

int CHMSAdditionalFeeList::OnCreateOtherFeeRefund()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 

	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return -1;

	CString szStatus = m_wndPatientList.GetItemText(nSel, 7);
	CString szLocked = m_wndPatientList.GetItemText(nSel, 9);

	if (szLocked != _T("Y"))
		return 0;

	CString szItemID;
	CString szRefund;
	CHMSOtherFeeRefundDialog dlg(this);

	dlg.m_nDocNo = str2long(m_wndPatientList.GetItemText(nSel, 5));
	dlg.m_nPatientNo = str2long(m_wndPatientList.GetItemText(nSel, 7));
	dlg.m_szDeptID = m_wndPatientList.GetItemText(nSel, 4);
	dlg.m_nInvoiceNo = str2long(m_wndPatientList.GetItemText(nSel, 1));
	dlg.m_szObjectID = m_wndPatientList.GetItemText(nSel, 11);

	dlg.m_arrFeeList.RemoveAll();

	for (int i = 0; i < m_wndFeeList.GetItemCount(); i++)
	{
		szRefund = m_wndFeeList.GetItemText(i, 0);

		if (szRefund == _T("X"))
			continue;
		szItemID = m_wndFeeList.GetItemText(i, 6);
		if (!szItemID.IsEmpty())
		{
			dlg.m_arrFeeList.Add(szItemID);
		}
	}

	dlg.SetMode(VM_EDIT);
	
	if (dlg.DoModal() == IDOK)
	{
		if (dlg.m_nRefundInvoice > 0)
			pMF->PrintDetailRefundInvoice(dlg.m_nRefundInvoice, true, true);
		OnPatientListLoadData();
		m_wndPatientList.SetCurSel(nSel);
	}

	return 1;
}

int CHMSAdditionalFeeList::OnPrintOtherFeeRefund()
{
	int nSel = m_wndPatientList.GetCurSel();
	if (nSel < 0)
		return -1;

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	CString szRefund = m_wndPatientList.GetItemText(nSel, 12);
	if (szRefund == _T("N"))
		return 0;

	long nInvoiceNo = str2long(m_wndPatientList.GetItemText(nSel, 5));
	long nDocNo = str2long(m_wndPatientList.GetItemText(nSel, 1));

	CHMSPrintRefundDialog dlg(this);
	dlg.SetMode(VM_EDIT);
	dlg.m_nInvoiceNo = nInvoiceNo;
	dlg.m_nDocNo = nDocNo;

	if (dlg.DoModal() == IDCANCEL)
	{
		m_wndPatientList.SetCurSel(nSel);
	}
	//pMF->PrintRefund(nInvoiceNo, true, true);
	return 1;
}

int CHMSAdditionalFeeList::OnModifyFeeItems()
{
	int nSel = m_wndPatientList.GetCurSel();

	if (nSel < 0)
		return -1;

	long nInvoiceNo = str2long(m_wndPatientList.GetItemText(nSel, 5));
	long nDocumentNo = str2long(m_wndPatientList.GetItemText(nSel, 1));

	CString szStatus = m_wndPatientList.GetItemText(nSel, 6);
	CString szLocked = m_wndPatientList.GetItemText(nSel, 8);
	
	if (m_nInvoiceNo > 0 && szStatus == _T("P") && szLocked == _T("N"))
	{
		CHMSEditOtherFeeDialog dlg(this);
		dlg.m_nInvoiceNo = nInvoiceNo;
		dlg.m_nDocNo = nDocumentNo;

		if (dlg.DoModal() == IDOK)
		{
			m_wndPatientList.SetCurSel(nSel);
			OnFeeListLoadData();
			m_wndPatientList.SetFocus();
		}
	}
	return 0;
}

#include "HMSOtherInvoiceDialog.h"
void CHMSAdditionalFeeList::OnOtherReceiptSelect()
{
	CHMSOtherInvoiceDialog dlg(this, VM_ADD, _T("RECEIPT_ORDER"));
	if(dlg.DoModal() == IDOK)
	{
		OnPatientListLoadData();
	}
}



void CHMSAdditionalFeeList::OnOtherPaymentSelect()
{
	CHMSOtherInvoiceDialog dlg(this, VM_ADD, _T("PAYMENT_ORDER"));
	if(dlg.DoModal() == IDOK)
	{
		OnPatientListLoadData();
	}
}

void CHMSAdditionalFeeList::OnResizeLayout()
{
	AddResize(&m_wndPatientList, 100, 100);
	AddResize(&m_wndFeeList, 100, 100);
	AddResize(&m_wndPatientFeeInformation, 100, 100);
}