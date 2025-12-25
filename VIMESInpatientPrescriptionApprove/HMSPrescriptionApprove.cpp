#include "HMSPrescriptionApprove.h"
#include "MainFrm.h"
#include "HMSReportForms\Printforms.h"


/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApprove *)pWnd)->OnIDCheckValue();
} 
/*static void _OnTotalPatientChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnTotalPatientChange();
} */
/*static void _OnTotalPatientSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnTotalPatientSetfocus();} */ 
/*static void _OnTotalPatientKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnTotalPatientKillfocus();
} */
static int _OnTotalPatientCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApprove *)pWnd)->OnTotalPatientCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApprove *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnSheetNoChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnSheetNoChange();
} */
/*static void _OnSheetNoSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnSheetNoSetfocus();} */ 
/*static void _OnSheetNoKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnSheetNoKillfocus();
} */
static int _OnSheetNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApprove *)pWnd)->OnSheetNoCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionApprove* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApprove *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApprove *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApprove *)pWnd)->OnToDateCheckValue();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApprove*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionApprove*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApprove*)pWnd)->OnOrderListDeleteItem();
}

static int _OnOrderListApproveItemFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove*)pWnd)->OnApproveSelect();
	return 0;
}
static int _OnOrderListUnapproveItemFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove*)pWnd)->OnDiscardSelect();
	return 0;
}

static int _OnOrderListRecalcAmountItemFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove*)pWnd)->OnRecalcAmount();
	return 0;
}

static int _OnOrderListPrintSummaryAndDetailFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove*)pWnd)->OnPrintSummaryAndDetails();
	return 0;
}
static int _OnOrderListPrintSummaryFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove*)pWnd)->OnPrintSummary();
	return 0;
}


static int _OnOrderListPrintDetailFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove*)pWnd)->OnPrintDetail();
	return 0;
}


static void _OnApprovedOrderSelectFnc(CWnd *pWnd){
	 ((CHMSPrescriptionApprove*)pWnd)->OnApprovedOrderSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApprove*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionApprove*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApprove*)pWnd)->OnListDeleteItem();
} 
static long _OnLineLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApprove*)pWnd)->OnLineLoadData();
} 
static void _OnLineDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionApprove*)pWnd)->OnLineDblClick();
} 
static void _OnLineSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionApprove*)pWnd)->OnLineSelectChange(nOldItem, nNewItem);
} 
static int _OnLineDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApprove*)pWnd)->OnLineDeleteItem();
}

static int _OnPatientListPrintFnc(CWnd *pWnd){
	 ((CHMSPrescriptionApprove*)pWnd)->OnPatientListPrint();
	 return 0;
}
static void _OnApproveSelectFnc(CWnd *pWnd){
	CHMSPrescriptionApprove *pVw = (CHMSPrescriptionApprove *)pWnd;
	pVw->OnApproveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CHMSPrescriptionApprove *pVw = (CHMSPrescriptionApprove *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddHMSPrescriptionApproveFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApprove*)pWnd)->OnAddHMSPrescriptionApprove();
} 
static int _OnEditHMSPrescriptionApproveFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApprove*)pWnd)->OnEditHMSPrescriptionApprove();
} 
static int _OnDeleteHMSPrescriptionApproveFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApprove*)pWnd)->OnDeleteHMSPrescriptionApprove();
} 
static int _OnSaveHMSPrescriptionApproveFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApprove*)pWnd)->OnSaveHMSPrescriptionApprove();
} 
static int _OnCancelHMSPrescriptionApproveFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApprove*)pWnd)->OnCancelHMSPrescriptionApprove();
} 
CHMSPrescriptionApprove::CHMSPrescriptionApprove(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CHMSPrescriptionApprove::~CHMSPrescriptionApprove(){
}
void CHMSPrescriptionApprove::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 370, 90);
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 95, 370, 590);
	m_wndPrescriptionInformation.Create(this, _T("Prescription Information"), 375, 95, 1015, 315);
	m_wndLines.Create(this, _T("Lines"), 375, 320, 1015, 620);
	m_wndInformationBar.Create(this, _T(""), 375, 5, 1015, 90);
	m_wndTITLE.Create(this, _T("INPATIENT PRESCRIPTION"), 380, 30, 1005, 55);
	m_wndIDLabel.Create(this, _T("ID"), 381, 60, 461, 85);
	m_wndID.Create(this,465, 60, 615, 85); 
	m_wndTotalPatientLabel.Create(this, _T("Total Patient"), 620, 60, 720, 85);
	m_wndTotalPatient.Create(this,725, 60, 795, 85); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 800, 60, 900, 85);
	m_wndTotalAmount.Create(this,905, 60, 1005, 85); 

	m_wndSheetNoLabel.Create(this, _T("Sheet No"), 10, 30, 90, 55);
	m_wndSheetNo.Create(this,95, 30, 185, 55); 
	m_wndDepartmentLabel.Create(this, _T("Dept"), 190, 30, 270, 55);
	m_wndDepartment.Create(this,275, 30, 365, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 185, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 190, 60, 270, 85);
	m_wndToDate.Create(this,275, 60, 365, 85); 
	m_wndOrderList.Create(this,10, 120, 365, 585); 
	m_wndApprovedOrder.Create(this, _T("Approved Order"), 5, 595, 155, 620);
	m_wndList.Create(this,380, 120, 1010, 310); 
	m_wndLine.Create(this,380, 345, 1010, 615); 
	m_wndApprove.Create(this, _T("&Approve"), 185, 595, 275, 620);
	m_wndDiscard.Create(this, _T("&Discard"), 280, 595, 370, 620);

}
void CHMSPrescriptionApprove::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(35);
//	m_wndID.SetCheckValue(true);
	m_wndTotalPatient.SetLimitText(16);
//	m_wndTotalPatient.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(16);
//	m_wndTotalAmount.SetCheckValue(true);
	m_wndSheetNo.SetLimitText(1024);
	m_wndSheetNo.SetCheckValue(true);
	m_wndSheetNo.SetNotEmpty(false);

	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndOrderList.InsertColumn(0, _T("No."), CFMT_TEXT, 90);
	m_wndOrderList.InsertColumn(1, _T("Order ID"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(2, _T("Storage"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(3, _T("Dept"), CFMT_TEXT, 70);
	

	m_wndList.InsertColumn(0, _T("Order No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 0);
	m_wndList.InsertColumn(2, _T("DocumentNo"), CFMT_NUMBER, 85);
	m_wndList.InsertColumn(3, _T("DocumentNo"), CFMT_NUMBER, 85);
	m_wndList.InsertColumn(4, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Total Cost"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(7, _T("Deposit"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(8, _T("Processed"), CFMT_TEXT|CFMT_CENTER, 0);
	m_wndList.InsertColumn(9, _T("Approved By"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("Approved Date"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("Dept"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(12, _T("Patdept"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(13, _T("Transaction_ID"), CFMT_MONEY, 0);


	m_wndList.GetHeaderControl()->SetItemHeight(2);
	
	m_wndList.SetCheckBox(true);
	
	m_wndLine.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndLine.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndLine.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndLine.InsertColumn(3, _T("Unit Price"), CFMT_MONEY, 90);
	m_wndLine.InsertColumn(4, _T("Quantity"), CFMT_MONEY, 90);
	m_wndLine.InsertColumn(5, _T("Amount"), CFMT_MONEY, 90);

	m_wndTotalPatient.SetReadOnly(true);
	m_wndTotalAmount.SetReadOnly(true);
	m_wndID.SetReadOnly(true);
	m_wndTITLE.ModifyStyle(0, SS_CENTER);
	m_wndTITLE.SetTextColor(RGB(0, 128, 255));
	m_wndTotalPatient.SetTextColor(RGB(0, 128, 192));
	m_wndTotalAmount.SetTextColor(RGB(255, 0, 0));
	m_wndTotalAmount.SetCurrencyFormat(TRUE);
	m_wndID.SetTextColor(RGB(0, 0, 255));
}
void CHMSPrescriptionApprove::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndTotalPatient.SetEvent(WE_CHANGE, _OnTotalPatientChangeFnc);
	//m_wndTotalPatient.SetEvent(WE_SETFOCUS, _OnTotalPatientSetfocusFnc);
	//m_wndTotalPatient.SetEvent(WE_KILLFOCUS, _OnTotalPatientKillfocusFnc);
	m_wndTotalPatient.SetEvent(WE_CHECKVALUE, _OnTotalPatientCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	//m_wndSheetNo.SetEvent(WE_CHANGE, _OnSheetNoChangeFnc);
	//m_wndSheetNo.SetEvent(WE_SETFOCUS, _OnSheetNoSetfocusFnc);
	//m_wndSheetNo.SetEvent(WE_KILLFOCUS, _OnSheetNoKillfocusFnc);
	m_wndSheetNo.SetEvent(WE_CHECKVALUE, _OnSheetNoCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	
	m_wndOrderList.SetWindowText(_T("Order List"));
	m_wndOrderList.AddEvent(1, _T("Approve"), _OnOrderListApproveItemFnc);
	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(2, _T("Unapprove"), _OnOrderListUnapproveItemFnc);
	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(3, _T("Recalc Amount"), _OnOrderListRecalcAmountItemFnc);

	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(4, _T("Print Summary and details"), _OnOrderListPrintSummaryAndDetailFnc);

	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(5, _T("Print Summary"), _OnOrderListPrintSummaryFnc);

	m_wndOrderList.AddEvent(0, _T("-"), NULL);
	m_wndOrderList.AddEvent(6, _T("Print Detail"), _OnOrderListPrintDetailFnc);

	m_wndApprovedOrder.SetEvent(WE_CLICK, _OnApprovedOrderSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Patient List"));	
	m_wndList.AddEvent(1, _T("Print"), _OnPatientListPrintFnc);

	m_wndLine.SetEvent(WE_SELCHANGE, _OnLineSelectChangeFnc);
	m_wndLine.SetEvent(WE_LOADDATA, _OnLineLoadDataFnc);
	m_wndLine.SetEvent(WE_DBLCLICK, _OnLineDblClickFnc);
//	m_wndLine.AddEvent(1, _T("Delete"), _OnLineDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApprove.SetEvent(WE_CLICK, _OnApproveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_szFromTime = _T("00:00:00");
	m_szToTime = _T("23:59:00");
	SetMode(VM_VIEW);

}
void CHMSPrescriptionApprove::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndTotalPatient.GetDlgCtrlID(), m_nTotalPatient);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Text(pDX, m_wndSheetNo.GetDlgCtrlID(), m_szSheetNo);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndApprovedOrder.GetDlgCtrlID(), m_bApprovedOrder);

}
void CHMSPrescriptionApprove::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionApprove::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescriptionApprove::SetDefaultValues(){

//	m_szID.Empty();
	m_nTotalPatient=0;
	m_nTotalAmount=0;
	m_szSheetNo.Empty();
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bApprovedOrder=FALSE;

}
int CHMSPrescriptionApprove::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndSheetNo.SetFocus();
			m_szFromDate = m_szToDate = pMF->GetSysDate();
			
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
/*void CHMSPrescriptionApprove::OnIDChange(){
	
} */
/*void CHMSPrescriptionApprove::OnIDSetfocus(){
	
} */
/*void CHMSPrescriptionApprove::OnIDKillfocus(){
	
} */
int CHMSPrescriptionApprove::OnIDCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionApprove::OnTotalPatientChange(){
	
} */
/*void CHMSPrescriptionApprove::OnTotalPatientSetfocus(){
	
} */
/*void CHMSPrescriptionApprove::OnTotalPatientKillfocus(){
	
} */
int CHMSPrescriptionApprove::OnTotalPatientCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionApprove::OnTotalAmountChange(){
	
} */
/*void CHMSPrescriptionApprove::OnTotalAmountSetfocus(){
	
} */
/*void CHMSPrescriptionApprove::OnTotalAmountKillfocus(){
	
} */
int CHMSPrescriptionApprove::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionApprove::OnSheetNoChange(){
	
} */
/*void CHMSPrescriptionApprove::OnSheetNoSetfocus(){
	
} */
/*void CHMSPrescriptionApprove::OnSheetNoKillfocus(){
	
} */
int CHMSPrescriptionApprove::OnSheetNoCheckValue(){
	OnOrderListLoadData();
	return 1;
} 
void CHMSPrescriptionApprove::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionApprove::OnDepartmentSelendok(){
	 OnOrderListLoadData();
}
/*void CHMSPrescriptionApprove::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPrescriptionApprove::OnDepartmentKillfocus(){
	
}*/
long CHMSPrescriptionApprove::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type='DT'  %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPrescriptionApprove::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionApprove::OnFromDateChange(){
	
} */
/*void CHMSPrescriptionApprove::OnFromDateSetfocus(){
	
} */
/*void CHMSPrescriptionApprove::OnFromDateKillfocus(){
	
} */
int CHMSPrescriptionApprove::OnFromDateCheckValue(){
	OnOrderListLoadData();
	return 0;
} 
/*void CHMSPrescriptionApprove::OnToDateChange(){
	
} */
/*void CHMSPrescriptionApprove::OnToDateSetfocus(){
	
} */
/*void CHMSPrescriptionApprove::OnToDateKillfocus(){
	
} */
int CHMSPrescriptionApprove::OnToDateCheckValue(){
	OnOrderListLoadData();
	return 0;
} 
void CHMSPrescriptionApprove::OnOrderListDblClick(){
	
} 
void CHMSPrescriptionApprove::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	UpdateData(true);
	m_nTransactionID = str2long(m_wndOrderList.GetItemText(nNewItem, 1));
	m_wndLine.DeleteAllItems();
	OnListLoadData();
	m_szID.Format(_T("%s - [%ld]"), m_wndOrderList.GetItemText(nNewItem, 0), m_nTransactionID);
	if(m_bApprovedOrder){
		m_wndApprove.EnableWindow(FALSE);
		m_wndDiscard.EnableWindow(TRUE);
	}
	else
	{
		m_wndApprove.EnableWindow(TRUE);
		m_wndDiscard.EnableWindow(FALSE);
	}

	UpdateData(FALSE);
} 
int CHMSPrescriptionApprove::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionApprove::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	if(m_bApprovedOrder)
	{
		szWhere.Format(_T(" and mt_processed='Y' "));
	}
	else
	{
		szWhere.Format(_T(" and mt_processed='N' "));
	}
	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and mt_department_to_id='%s' "), m_szDepartmentKey);
	}
	if (!m_szSheetNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and mt_orderno like '%%%s%%'"), m_szSheetNo);
	}
	szSQL.Format(_T("SELECT mt_orderno, mt_transaction_id, mt_storage_id, msl_code, mt_department_to_id ") \
		_T("FROM m_transaction ") \
		_T("LEFT JOIN m_storagelist ON(msl_storage_id=mt_storage_id) ") \
		_T("WHERE mt_doctype='DMO' and mt_status IN('S','A') ") \
		_T("and msl_category='S' ") \
		_T(" and mt_orderdate between TO_TIMESTAMP('%s %s', 'yyyy/mm/dd hh24:mi:ss') and TO_TIMESTAMP('%s %s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T(" %s ") \
		_T("ORDER BY mt_transaction_id "),
		 m_szFromDate, m_szFromTime, m_szToDate, m_szToTime, szWhere);

	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("mt_orderno")),
			rs.GetValue(_T("mt_transaction_id")),
			rs.GetValue(_T("msl_code")), 
			rs.GetValue(_T("mt_department_to_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad();
	return 0;
}


void CHMSPrescriptionApprove::OnApprovedOrderSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bApprovedOrder){
		m_wndApprove.EnableWindow(FALSE);
		m_wndDiscard.EnableWindow(TRUE);
	}
	else
	{
		m_wndApprove.EnableWindow(TRUE);
		m_wndDiscard.EnableWindow(FALSE);
	}
	OnOrderListLoadData();
}
void CHMSPrescriptionApprove::OnListDblClick(){
	
} 
void CHMSPrescriptionApprove::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nOrderID = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_nStorageID = str2int(m_wndList.GetItemText(nNewItem, 3));
	OnLineLoadData();
} 
int CHMSPrescriptionApprove::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionApprove::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	
	szSQL.Format(_T(" SELECT hpo_orderid,") \
	_T("	hpo_docno , hpo_transaction_id,") \
	_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
	_T("	TRUNC_DATE(hpo_orderdate) as hpo_orderdate,") \
	_T("	hpo_deptid,") \
	_T("	hpo_orderstatus, ") \
	_T("	hpo_processed, ") \
	_T("	TRUNC_DATE(hpo_processeddate) as hpo_processeddate, ") \
	_T("	hpo_processedby, ") \
	//_T("	sum(case when hpo_storage_id = 14 then (select sum(hfe_unitprice*hfe_quantity) from hms_fee where hfe_docno = hpo_docno and hfe_orderid = hpo_orderid) else hpo_amount end) as amount, ") \//
	_T("	CASE WHEN hpo_storage_id in (14,15) THEN SUM(hpol_qtyorder*hpol_unitprice)  ELSE hpo_amount  END AS amount,") \
	_T("	(SELECT SUM(hfe_amount) FROM hms_fee_deposit WHERE hfe_docno=hpo_docno)  as Deposit, ") \
	_T("	(SELECT Round(SUM(hms_fee_view.hfe_patdebt)) FROM hms_fee_view WHERE hfe_docno=hpo_docno and hfe_status not in('P','C') and hfe_category<>'Y' ) AS patdebt, hpo_storage_id storage_id ") \
	_T(" FROM hms_ipharmaorder") \
	_T(" LEFT JOIN hms_ipharmaorderline ON (hpo_docno = hpol_docno AND hpo_orderid = hpol_orderid)") \
	_T(" LEFT JOIN m_productitem_view ON (product_item_id     =hpol_product_item_id)") \
	_T(" LEFT JOIN hms_doc ON(hd_docno=hpo_docno) ") \
	_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
	_T(" WHERE hpo_transaction_id =%ld ") \
	_T(" and hpo_ordertype IN('P','D', 'M')  ") \
	_T(" GROUP BY hpo_orderid, hpo_docno, hp_surname, hp_midname, hp_firstname, ") \
	_T("	TRUNC_DATE(hpo_orderdate),") \
	_T("	hpo_deptid, hpo_processed, hpo_transaction_id, ") \
	_T("	TRUNC_DATE(hpo_processeddate), hpo_processedby, hpo_orderstatus, hpo_storage_id, hpo_amount") \
	_T(" ORDER BY hpo_docno "), m_nTransactionID);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	int nItem;
	double nTotalCost, nDeposit, nAmount=0;
	CString szOrderStatus, szProcessed, szWhere;

	m_nTotalAmount = 0;
	nCount = rs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hpo_orderstatus"), szOrderStatus);
		rs.GetValue(_T("hpo_processed"), szProcessed);
		rs.GetValue(_T("patdebt"), nTotalCost);
		rs.GetValue(_T("Deposit"), nDeposit);
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("hpo_orderid")), 
			CDate::Convert(rs.GetValue(_T("hpo_orderDate")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("hpo_docno")),
			rs.GetValue(_T("storage_id")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("amount")), 
			rs.GetValue(_T("patdebt")),
			rs.GetValue(_T("deposit")), 
			szProcessed, 
			rs.GetValue(_T("hpo_processedby")), 
			CDate::Convert(rs.GetValue(_T("hpo_processeddate")), yyyymmdd, ddmmyyyy), 
			rs.GetValue(_T("hpo_deptid")),			
			rs.GetValue(_T("copayment")),
			rs.GetValue(_T("hpo_transaction_id")),
			NULL);
		
		m_wndList.SetCheck(nItem, true);
		if(nDeposit < nTotalCost){
			if(szProcessed == _T("N") )
				m_wndList.SetCheck(nItem, false);
			m_wndList.SetSubItemBkColor(nItem, 5, RGB(255, 128, 0), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 5, RGB(255, 255, 255), FALSE);
		}

		rs.GetValue(_T("amount"), nAmount);
		m_nTotalAmount += nAmount;

		rs.MoveNext();
	}
	m_nTotalPatient = m_wndList.GetItemCount();
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSPrescriptionApprove::OnLineDblClick(){
	
} 
void CHMSPrescriptionApprove::OnLineSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
} 
int CHMSPrescriptionApprove::OnLineDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionApprove::OnLineLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndLine.BeginLoad(); 
	int nCount = 0;
	
	if (m_nStorageID == 14 || m_nStorageID == 15)
		szSQL.Format(_T(" SELECT product_name,") \
		_T("   product_uomname,") \
		_T("   hpol_unitprice as unitprice,") \
		_T("   SUM(hpol_qtyorder)                AS qty,") \
		_T("   SUM(hpol_qtyorder*hpol_unitprice) AS amount") \
		_T(" FROM hms_ipharmaorderline") \
		_T(" left join hms_ipharmaorder on (hpo_docno = hpol_docno AND hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(product_item_id     =hpol_product_item_id)") \
		_T(" WHERE hpol_orderid=%ld") \
		_T(" GROUP BY hpol_line,") \
		_T("   product_name,") \
		_T("   product_uomname,") \
		_T("   hpol_unitprice"), m_nOrderID);
	else
	
		szSQL.Format(_T(" SELECT product_name,") \
		_T("   product_uomname,") \
		_T("   hpol_unitprice AS unitprice,") \
		_T("   SUM(hpol_qtyorder)                AS qty,") \
		_T("   SUM(hpol_qtyorder*hpol_unitprice) AS amount") \
		_T(" FROM hms_ipharmaorderline") \
		_T(" left join hms_ipharmaorder on (hpo_docno = hpol_docno AND hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN m_product_view") \
		_T(" ON(product_id     =hpol_product_id)") \
		_T(" WHERE hpol_orderid=%ld") \
		_T(" GROUP BY hpol_line,") \
		_T("   product_name,") \
		_T("   product_uomname,") \
		_T("   hpol_unitprice"), m_nOrderID);

	nCount = rs.ExecSQL(szSQL);
	CString tmpStr;
	int nIndex=1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndLine.AddItems(
			tmpStr,
			rs.GetValue(_T("product_name")),
			rs.GetValue(_T("product_uomname")),
			rs.GetValue(_T("unitprice")),
			rs.GetValue(_T("qty")),
			rs.GetValue(_T("amount")),
			NULL);
		rs.MoveNext();
	}
	m_wndLine.EndLoad(); 
	return nCount;
}
void CHMSPrescriptionApprove::OnApproveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;

	UpdateData(true);
	if(m_bApprovedOrder)
		return;

	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0) return;
	int nRes;
	nRes = ShowMessageBox(_T("Do you want to approve?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(nRes == IDNO)
		return;

	szSQL.Format(_T("M_TRANSACTION_PROCESS(%ld, '%s') "), m_nTransactionID, pMF->GetCurrentUser());
	nRes = str2int(pMF->ExecDML(szSQL));
	if(nRes > 0)
	{
		CRecord rs(&pMF->m_db);
		CPrintForms printer;
		long nDocumentNo;
		printer.FM_PrintGeneralApprovedInOrder(m_nTransactionID);
/*
		szSQL.Format(_T("SELECT distinct hpo_docno as docno FROM hms_ipharmaorder WHERE hpo_transaction_id=%ld "), m_nTransactionID);
		rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("docno"), nDocumentNo);
		//	printer.FM_PrintDetailedApprovedInOrder(nDocumentNo, m_nTransactionID);
			rs.MoveNext();
		}
*/
		m_wndOrderList.DeleteItem(nSel);
	}
	else
	{
		ShowMessageBox(_T("Cannot process with current status."));
	}
} 
void CHMSPrescriptionApprove::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CString szSQL;
	UpdateData(true);
	if(!m_bApprovedOrder)
		return;
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0) return;
	int nRes;
	nRes = ShowMessageBox(_T("Do you want to unapprove?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(nRes == IDNO)
		return;

	szSQL.Format(_T("M_TRANSACTION_UNPROCESS(%ld, '%s') "), m_nTransactionID, pMF->GetCurrentUser());
	nRes = str2int(pMF->ExecDML(szSQL));
	if(nRes > 0)
	{
		m_wndOrderList.DeleteItem(nSel);
	}
	else
	{
		ShowMessageBox(_T("Cannot process with current status."));
	}
} 
int CHMSPrescriptionApprove::OnAddHMSPrescriptionApprove(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionApprove::OnEditHMSPrescriptionApprove(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionApprove::OnDeleteHMSPrescriptionApprove(){
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
 		OnCancelHMSPrescriptionApprove();
 	}
	return 0;
}
int CHMSPrescriptionApprove::OnSaveHMSPrescriptionApprove(){
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
 		//OnHMSPrescriptionApproveListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionApprove::OnCancelHMSPrescriptionApprove(){
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
int CHMSPrescriptionApprove::OnHMSPrescriptionApproveListLoadData(){
	return 0;
}

void CHMSPrescriptionApprove::OnPrintSummary(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	if(m_nTransactionID <= 0)
		return;
	CPrintForms printer;
	printer.FM_PrintGeneralApprovedInOrder(m_nTransactionID, true);
}

void CHMSPrescriptionApprove::OnPrintDetail(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	if(m_nTransactionID <= 0)
		return;

	CRecord rs(&pMF->m_db);
	CPrintForms printer;
	long nDocumentNo;
	CString szSQL;

	szSQL.Format(_T("SELECT distinct hpo_docno as docno FROM hms_ipharmaorder WHERE hpo_transaction_id=%ld "), m_nTransactionID);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("docno"), nDocumentNo);
		printer.FM_PrintDetailedApprovedInOrder(nDocumentNo, m_nTransactionID, true);
		rs.MoveNext();
	}

}

void CHMSPrescriptionApprove::OnPrintSummaryAndDetails(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	if(m_nTransactionID <= 0)
		return;

		CRecord rs(&pMF->m_db);
		CPrintForms printer;
		long nDocumentNo;
		CString szSQL;
		printer.FM_PrintGeneralApprovedInOrder(m_nTransactionID, true);

		szSQL.Format(_T("SELECT distinct hpo_docno as docno FROM hms_ipharmaorder WHERE hpo_transaction_id=%ld "), m_nTransactionID);
		rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("docno"), nDocumentNo);
			printer.FM_PrintDetailedApprovedInOrder(nDocumentNo, m_nTransactionID, true);
			rs.MoveNext();
		}
}

void CHMSPrescriptionApprove::OnRecalcAmount(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL;
	AfxGetApp()->BeginWaitCursor();
	szSQL.Format(_T("M_TRANSACTION_RECALCPRICE(%ld) "), m_nTransactionID);
	pMF->ExecDML(szSQL);
	AfxGetApp()->EndWaitCursor();
}

void CHMSPrescriptionApprove::OnPatientListPrint(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CPrintForms printer;
	long nDocumentNo;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0 || m_nTransactionID <= 0) return;
	 nDocumentNo = str2long(m_wndList.GetItemText(nSel, 2));

	printer.FM_PrintDetailedApprovedInOrder(nDocumentNo, m_nTransactionID, true);
}