#include "HMSPrescriptionApproveDialog.h"
#include "MainFrm.h"
#include "HMSReportForms/PrintForms.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnListDeleteItem();
} 
static long _OnLineLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog*)pWnd)->OnLineLoadData();
} 
static void _OnLineDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnLineDblClick();
} 
static void _OnLineSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnLineSelectChange(nOldItem, nNewItem);
} 
static int _OnLineDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnLineDeleteItem();
} 
static void _OnIssueTypeSelectFnc(CWnd *pWnd){
	  ((CHMSPrescriptionApproveDialog*)pWnd)->OnIssueTypeSelect();
}
static void _OnReturnTypeSelectFnc(CWnd *pWnd){
	  ((CHMSPrescriptionApproveDialog*)pWnd)->OnReturnTypeSelect();
}
static void _OnApprovedOrdersSelectFnc(CWnd *pWnd){
	 ((CHMSPrescriptionApproveDialog*)pWnd)->OnApprovedOrdersSelect();
}
static void _OnApproveSelectFnc(CWnd *pWnd){
	CHMSPrescriptionApproveDialog *pVw = (CHMSPrescriptionApproveDialog *)pWnd;
	pVw->OnApproveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CHMSPrescriptionApproveDialog *pVw = (CHMSPrescriptionApproveDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPrescriptionApproveDialog *pVw = (CHMSPrescriptionApproveDialog *)pWnd;
	pVw->OnCancelSelect();
} 
/*static void _OnSheetNoChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnSheetNoChange();
} */
/*static void _OnSheetNoSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnSheetNoSetfocus();} */ 
/*static void _OnSheetNoKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnSheetNoKillfocus();
} */
static int _OnSheetNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnSheetNoCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionApproveDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnStorageKillfocus();
} */
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnStorageLoadData();
} 
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnDepositChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnDepositChange();
} */
/*static void _OnDepositSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnDepositSetfocus();} */ 
/*static void _OnDepositKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnDepositKillfocus();
} */
static int _OnDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnDepositCheckValue();
} 
/*static void _OnTotalPayableChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalPayableChange();
} */
/*static void _OnTotalPayableSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalPayableSetfocus();} */ 
/*static void _OnTotalPayableKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalPayableKillfocus();
} */
static int _OnTotalPayableCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnTotalPayableCheckValue();
} 
/*static void _OnSoDuChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnSoDuChange();
} */
/*static void _OnSoDuSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnSoDuSetfocus();} */ 
/*static void _OnSoDuKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog *)pWnd)->OnSoDuKillfocus();
} */
static int _OnSoDuCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionApproveDialog *)pWnd)->OnSoDuCheckValue();
} 
static int _OnAddHMSPrescriptionApproveDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnAddHMSPrescriptionApproveDialog();
} 
static int _OnEditHMSPrescriptionApproveDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnEditHMSPrescriptionApproveDialog();
} 
static int _OnDeleteHMSPrescriptionApproveDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnDeleteHMSPrescriptionApproveDialog();
} 
static int _OnSaveHMSPrescriptionApproveDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnSaveHMSPrescriptionApproveDialog();
} 
static int _OnCancelHMSPrescriptionApproveDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionApproveDialog*)pWnd)->OnCancelHMSPrescriptionApproveDialog();
} 
static int _OnPrintGeneralApprovedInOrderFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnPrintGeneralApprovedInOrder();
	return 0;
}
static int _OnPrintDetailedApprovedInOrderFnc(CWnd *pWnd){
	((CHMSPrescriptionApproveDialog*)pWnd)->OnPrintDetailedApprovedInOrder();
	return 0;
}
CHMSPrescriptionApproveDialog::CHMSPrescriptionApproveDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 705;
	SetDefaultValues();
}
CHMSPrescriptionApproveDialog::~CHMSPrescriptionApproveDialog(){
}
void CHMSPrescriptionApproveDialog::OnCreateComponents(){
	m_wndLines.Create(this, _T("Lines"), 5, 330, 705, 630);
	m_wndPrescriptionInformation.Create(this, _T("Prescription Information"), 5, 35, 995, 325);
	m_wndInformationPatpaid.Create(this, _T("Information Patpaid"), 710, 330, 995, 630);
	m_wndStorageLabel.Create(this, _T("Storage"), 5, 5, 95, 30);
	m_wndStorage.Create(this,100, 5, 300, 30); 
	m_wndSheetNoLabel.Create(this, _T("Sheet No"), 305, 5, 395, 30);
	m_wndSheetNo.Create(this,400, 5, 520, 30); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 525, 5, 615, 30);
	m_wndDocumentNo.Create(this,620, 5, 720, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 725, 5, 815, 30);
	m_wndPatientName.Create(this,820, 5, 995, 30); 
	m_wndList.Create(this,10, 60, 990, 320); 
	m_wndLine.Create(this,10, 355, 700, 625); 
	m_wndIssueType.Create(this, _T("Issue Type"), 5, 635, 125, 660);
	//m_wndReturnType.Create(this, _T("Return Type"), 130, 635, 250, 660);
	m_wndApprovedOrders.Create(this, _T("Approved Orders"), 255, 635, 455, 660);
	m_wndApprove.Create(this, _T("&Approve"), 710, 635, 800, 660);
	m_wndDiscard.Create(this, _T("&Discard"), 805, 635, 895, 660);
	m_wndCancel.Create(this, _T("&Exit"), 900, 635, 990, 660);	
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 715, 355, 835, 380);
	m_wndTotalCost.Create(this,840, 355, 990, 380); 
	m_wndDepositLabel.Create(this, _T("Deposit"), 715, 385, 835, 410);
	m_wndDeposit.Create(this,840, 385, 990, 410); 
	m_wndTotalPayableLabel.Create(this, _T("Total Payable"), 715, 415, 835, 440);
	m_wndTotalPayable.Create(this,840, 415, 990, 440); 
	m_wndSoDuLabel.Create(this, _T("So du"), 715, 445, 835, 470);
	m_wndSoDu.Create(this,840, 445, 990, 470);
}
void CHMSPrescriptionApproveDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndSheetNo.SetLimitText(35);
	m_wndSheetNo.SetCheckValue(true);
	//m_wndStorage.SetLimitText(35);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndTotalCost.SetLimitText(16);
	m_wndTotalCost.SetCheckValue(true);
	m_wndDeposit.SetLimitText(16);
	m_wndDeposit.SetCheckValue(true);
	m_wndTotalPayable.SetLimitText(16);
	m_wndTotalPayable.SetCheckValue(true);
	m_wndSoDu.SetLimitText(16);
	m_wndSoDu.SetCheckValue(true);
	m_wndTotalCost.SetCurrencyFormat(true);
	m_wndDeposit.SetCurrencyFormat(true);
	m_wndTotalPayable.SetCurrencyFormat(true);
	m_wndSoDu.SetCurrencyFormat(true);
	m_wndSheetNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("Order No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(2, _T("DocumentNo"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Total Cost"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(5, _T("Deposit"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("Processed"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndList.InsertColumn(7, _T("Approved By"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(8, _T("Approved Date"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(9, _T("Dept"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(10, _T("Patdept"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(11, _T("Transaction_ID"), CFMT_MONEY, 0);

	
	m_wndList.SetCheckBox(true);
	
	m_wndLine.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndLine.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndLine.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndLine.InsertColumn(3, _T("Unit Price"), CFMT_MONEY, 90);
	m_wndLine.InsertColumn(4, _T("Quantity"), CFMT_MONEY, 90);
	m_wndLine.InsertColumn(5, _T("Amount"), CFMT_MONEY, 90);

	m_hms_pharmaorderTbl.SetTableName(_T("hms_pharmaorder_process"));	
	m_hms_pharmaorderTbl.AddField(_T("hpo_orderid"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_createdby"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_createddate"), dfDateTime);
	m_hms_pharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime);
	m_hms_pharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7);		
	m_hms_pharmaorderTbl.AddField(_T("hpo_amount"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_deposit"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_patdebt"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_transaction_id"), dfLong);

}
void CHMSPrescriptionApproveDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Print General Approved InOrder"), _OnPrintGeneralApprovedInOrderFnc);
	m_wndList.AddEvent(2, _T("Print Detailed Approved InOrder"), _OnPrintDetailedApprovedInOrderFnc);
	//m_wndList.AddEvent(2, _T("Print Detailed Approved InOrder"), _OnPrintApprovedInOrder());
	m_wndLine.SetEvent(WE_SELCHANGE, _OnLineSelectChangeFnc);
	m_wndLine.SetEvent(WE_LOADDATA, _OnLineLoadDataFnc);
	m_wndLine.SetEvent(WE_DBLCLICK, _OnLineDblClickFnc);
	//m_wndLine.AddEvent(1, _T("Delete"), _OnLineDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndIssueType.SetEvent(WE_CLICK, _OnIssueTypeSelectFnc);
	m_wndReturnType.SetEvent(WE_CLICK, _OnReturnTypeSelectFnc);
	m_wndApprovedOrders.SetEvent(WE_CLICK, _OnApprovedOrdersSelectFnc);
	m_wndApprove.SetEvent(WE_CLICK, _OnApproveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//m_wndSheetNo.SetEvent(WE_CHANGE, _OnSheetNoChangeFnc);
	//m_wndSheetNo.SetEvent(WE_SETFOCUS, _OnSheetNoSetfocusFnc);
	//m_wndSheetNo.SetEvent(WE_KILLFOCUS, _OnSheetNoKillfocusFnc);
	m_wndSheetNo.SetEvent(WE_CHECKVALUE, _OnSheetNoCheckValueFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndTotalCost.SetEvent(WE_CHANGE, _OnTotalCostChangeFnc);
	//m_wndTotalCost.SetEvent(WE_SETFOCUS, _OnTotalCostSetfocusFnc);
	//m_wndTotalCost.SetEvent(WE_KILLFOCUS, _OnTotalCostKillfocusFnc);
	m_wndTotalCost.SetEvent(WE_CHECKVALUE, _OnTotalCostCheckValueFnc);
	//m_wndDeposit.SetEvent(WE_CHANGE, _OnDepositChangeFnc);
	//m_wndDeposit.SetEvent(WE_SETFOCUS, _OnDepositSetfocusFnc);
	//m_wndDeposit.SetEvent(WE_KILLFOCUS, _OnDepositKillfocusFnc);
	m_wndDeposit.SetEvent(WE_CHECKVALUE, _OnDepositCheckValueFnc);
	//m_wndTotalPayable.SetEvent(WE_CHANGE, _OnTotalPayableChangeFnc);
	//m_wndTotalPayable.SetEvent(WE_SETFOCUS, _OnTotalPayableSetfocusFnc);
	//m_wndTotalPayable.SetEvent(WE_KILLFOCUS, _OnTotalPayableKillfocusFnc);
	m_wndTotalPayable.SetEvent(WE_CHECKVALUE, _OnTotalPayableCheckValueFnc);
	//m_wndSoDu.SetEvent(WE_CHANGE, _OnSoDuChangeFnc);
	//m_wndSoDu.SetEvent(WE_SETFOCUS, _OnSoDuSetfocusFnc);
	//m_wndSoDu.SetEvent(WE_KILLFOCUS, _OnSoDuKillfocusFnc);
	m_wndSoDu.SetEvent(WE_CHECKVALUE, _OnSoDuCheckValueFnc);

	m_wndTotalCost.SetTextColor(RGB(0, 0, 255));
	m_wndTotalPayable.SetTextColor(RGB(0, 64, 128));
	m_wndDeposit.SetTextColor(RGB(0, 128, 192));
	m_wndSoDu.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndTotalCost, GetFaceName(), GetFaceSize()+1, TRUE);	
	SetWindowFont(&m_wndTotalPayable, GetFaceName(), GetFaceSize()+1, TRUE);
	SetWindowFont(&m_wndDeposit, GetFaceName(), GetFaceSize()+1, TRUE);
	SetWindowFont(&m_wndSoDu, GetFaceName(), GetFaceSize()+1, TRUE);
	

	SetMode(VM_NONE);

}
void CHMSPrescriptionApproveDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndIssueType.GetDlgCtrlID(), m_nType);
	DDX_Check(pDX, m_wndApprovedOrders.GetDlgCtrlID(), m_bApprovedOrders);
	DDX_Text(pDX, m_wndSheetNo.GetDlgCtrlID(), m_szSheetNo);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndDeposit.GetDlgCtrlID(), m_nDeposit);
	DDX_Text(pDX, m_wndTotalPayable.GetDlgCtrlID(), m_nTotalPayable);
	DDX_Text(pDX, m_wndSoDu.GetDlgCtrlID(), m_nSoDu);
}
void CHMSPrescriptionApproveDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionApproveDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharmaorderTbl.SetValue(_T("hpo_orderid"), m_nOrderID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_orderdate"), pMF->GetSysDateTime());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_docno"), m_nDocumentNo);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);	
	m_hms_pharmaorderTbl.SetValue(_T("hpo_transaction_id"),m_nTransaction_ID);
}
void CHMSPrescriptionApproveDialog::SetDefaultValues(){

	m_nType=0;
	m_bApprovedOrders=FALSE;
	m_szSheetNo.Empty();
	m_szStorageKey = _T("14");
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_nTotalCost=0;
	m_nDeposit=0;
	m_nTotalPayable=0;
	m_nSoDu=0;

}
int CHMSPrescriptionApproveDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
		
		m_wndPatientName.EnableWindow(true);
		m_wndDocumentNo.EnableWindow(true);
		m_wndSheetNo.EnableWindow(true);
		m_wndStorage.EnableWindow(true);
		m_wndSheetNo.SetFocus();
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSPrescriptionApproveDialog::OnListDblClick(){
	
} 
void CHMSPrescriptionApproveDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nDocumentNo = str2long(m_wndList.GetItemText(nNewItem, 2));
	m_nOrderID = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_nTotalPayable = str2long(m_wndList.GetItemText(nNewItem, 4));
	m_nDeposit = str2long(m_wndList.GetItemText(nNewItem, 5));	
	m_nTotalCost = str2long(m_wndList.GetItemText(nNewItem, 10));
	m_nSoDu = m_nDeposit - m_nTotalPayable;
	UpdateData(false);
	OnLineLoadData();
} 
int CHMSPrescriptionApproveDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionApproveDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderStatus, szProcessed, szWhere;
	UpdateData(true);	


	m_wndLine.DeleteAllItems();
	m_wndList.BeginLoad(); 

	//Neu la phieu tra lai thuoc
	
	if(m_szStorageKey.IsEmpty()){		
		return -1;
	}

	if(!m_szSheetNo.IsEmpty())
	{
		szWhere.Format(_T(" AND hpo_transaction_id IN(%s)"), m_szTransactionID);
	}

	if(m_nDocumentNo > 0)
	{
		szWhere.AppendFormat(_T(" AND hpo_docno = %ld "), m_nDocumentNo);	
	}

	if(m_bApprovedOrders)
	{
		szWhere.AppendFormat(_T(" and hpo_processed='Y' "));
		m_wndDiscard.EnableWindow(true);
		m_wndApprove.EnableWindow(false);
	}
	else
	{
		szWhere.AppendFormat(_T(" and hpo_processed='N' "));
		m_wndDiscard.EnableWindow(false);
		m_wndApprove.EnableWindow(true);
	}

	if(m_szSheetNo.IsEmpty() && m_nDocumentNo <= 0)
		return -1;

	//szWhere.AppendFormat(_T(" and hpo_transaction_id in(%s) "), m_szTransactionID);

	//if(m_nType == 1)
	//{
	//		szSQL.Format(_T(" SELECT hpo_pharmareturnorder_id as hpo_orderid,") \
	//_T("   TRUNC_DATE(hpo_orderdate),") \
	//_T("   hpo_deptid,") \
	//_T(" hpo_status, ") \
	//_T(" hpo_processed, ") \
	//_T(" TRUNC_DATE(hpo_approveddate), ") \
	//_T(" hpo_approvedby, ") \
	//_T("   hpo_amount") \
	//_T(" FROM hms_pharmareturnorder ") \
	//_T(" LEFT JOIN m_storagelist") \
	//_T(" ON (msl_storage_id  =hpo_storage_id)") \
	//_T(" WHERE hpo_docno     =%ld") \
	//_T(" and msl_category    ='S'") \
	//_T(" and hpo_isinpatient='Y' %s "), pMF->m_nDocumentNo, szWhere);

	//}
	//else
	//{
		szSQL.Format(_T(" SELECT hpo_orderid,") \
	_T("	hpo_docno , hpo_transaction_id,") \
	_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
	_T("	TRUNC_DATE(hpo_orderdate) as hpo_orderdate,") \
	_T("	hpo_deptid,") \
	_T("	hpo_orderstatus, ") \
	_T("	hpo_processed, ") \
	_T("	TRUNC_DATE(hpo_processeddate) as hpo_processeddate, ") \
	_T("	hpo_processedby, ") \
	_T("	(SELECT SUM(hfe_amount) FROM hms_fee_deposit WHERE hfe_docno=hpo_docno)  as Deposit, ") \
	_T("	(SELECT SUM(hms_fee_view.hfe_cost-hfe_discount) FROM hms_fee_view WHERE hfe_docno=hpo_docno) AS copayment, ") \
	_T("	(SELECT SUM(hms_fee_view.hfe_patdebt) FROM hms_fee_view WHERE hfe_docno=hpo_docno) AS patdebt ") \
	_T(" FROM hms_ipharmaorder") \
	_T(" LEFT JOIN hms_doc ON(hd_docno=hpo_docno) ") \
	_T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
	_T(" WHERE hpo_storage_id =%d") \
	_T(" and hpo_ordertype IN('P','D') %s ") \
	_T(" GROUP BY hpo_orderid, hpo_docno, hp_surname, hp_midname, hp_firstname, ") \
	_T("	TRUNC_DATE(hpo_orderdate),") \
	_T("	hpo_deptid, hpo_processed, hpo_transaction_id, ") \
	_T("	TRUNC_DATE(hpo_processeddate), hpo_processedby, hpo_orderstatus") \
	_T(" ORDER BY hpo_docno, TRUNC_DATE(hpo_orderdate)"), ToInt(m_szStorageKey), szWhere);
	//}
_fmsg(_T("%s"), szSQL);
//_msg(_T("%s"), szSQL);
	
	int nItem;
	long nTotalCost, nDeposit;

	CString szFirstName, szMidName, szSurName, szSearchName, tmpStr;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	CString szNewLine, szOldLine;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_transaction_id"), m_nTransaction_ID);
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

		rs.GetValue(_T("hpo_orderstatus"), szOrderStatus);
		rs.GetValue(_T("hpo_processed"), szProcessed);
		rs.GetValue(_T("patdebt"), nTotalCost);
		rs.GetValue(_T("Deposit"), nDeposit);
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("hpo_orderid")), 
			CDate::Convert(rs.GetValue(_T("hpo_orderDate")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("hpo_docno")),
			rs.GetValue(_T("pname")),
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
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	m_wndList.SetCurSel(0);

	return nCount;
}
void CHMSPrescriptionApproveDialog::OnLineDblClick(){
	
} 
void CHMSPrescriptionApproveDialog::OnLineSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionApproveDialog::OnLineDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionApproveDialog::OnLineLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndLine.BeginLoad(); 
	int nCount = 0;

	if(m_nType == 0)
	{
	szSQL.Format(_T(" SELECT product_name,") \
	_T("   product_uomname,") \
	_T("   hpol_unitprice                    AS unitprice,") \
	_T("   SUM(hpol_qtyorder)                AS qty,") \
	_T("   SUM(hpol_qtyorder*hpol_unitprice) AS amount") \
	_T(" FROM hms_ipharmaorderline") \
	_T(" LEFT JOIN m_product_view") \
	_T(" ON(product_id     =hpol_product_id)") \
	_T(" WHERE hpol_orderid=%ld") \
	_T(" GROUP BY hpol_line,") \
	_T("   product_name,") \
	_T("   product_uomname,") \
	_T("   hpol_unitprice"), m_nOrderID);
	}
	else
	{
	szSQL.Format(_T(" SELECT product_name,") \
		_T("   product_uomname,") \
		_T("   hpol_unitprice                    AS unitprice,") \
		_T("   SUM(hpol_qtyorder)                AS qty,") \
		_T("   SUM(hpol_qtyorder*hpol_unitprice) AS amount") \
		_T(" FROM hms_pharmareturnorder_line ") \
		_T(" LEFT JOIN m_product_view") \
		_T(" ON(product_id     =hpol_product_id)") \
		_T(" WHERE hpol_pharmareturnorder_id=%ld") \
		_T(" GROUP BY ") \
		_T("   product_name,") \
		_T("   product_uomname,") \
		_T("   hpol_unitprice"), m_nOrderID);

	}
	nCount = rs.ExecSQL(szSQL);
	CString tmpStr;
	int nIndex=0;
	while(!rs.IsEOF()){ 
		nIndex++;
		tmpStr.Format(_T("%d"), nIndex);
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

void CHMSPrescriptionApproveDialog::OnIssueTypeSelect(){
	OnListLoadData();
	
}
void CHMSPrescriptionApproveDialog::OnReturnTypeSelect(){
	OnListLoadData();
}

void CHMSPrescriptionApproveDialog::OnApprovedOrdersSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	OnListLoadData();	
}
void CHMSPrescriptionApproveDialog::OnApproveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szOrderDate;
	
	UpdateData(true);

	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			szOrderDate = m_wndList.GetItemText(i, 1);
			m_hms_pharmaorderTbl.SetValue(_T("hpo_orderdate"), szOrderDate);
			m_nDocumentNo = str2long(m_wndList.GetItemText(i, 2));
			m_hms_pharmaorderTbl.SetValue(_T("hpo_docno"), m_nDocumentNo);
			m_nOrderID = str2long(m_wndList.GetItemText(i, 0));
			m_hms_pharmaorderTbl.SetValue(_T("hpo_orderid"), m_nOrderID);
			m_nTotalCost = str2long(m_wndList.GetItemText(i, 4));			
			m_hms_pharmaorderTbl.SetValue(_T("hpo_amount"), m_nTotalCost);
			m_nDeposit = str2long(m_wndList.GetItemText(i, 5));
			m_hms_pharmaorderTbl.SetValue(_T("hpo_deposit"), m_nDeposit);
			m_nTotalPayable = str2long(m_wndList.GetItemText(i, 10));
			m_hms_pharmaorderTbl.SetValue(_T("hpo_patdebt"), m_nTotalPayable);
			m_nTransaction_ID = str2long(m_wndList.GetItemText(i, 11));
			m_hms_pharmaorderTbl.SetValue(_T("hpo_transaction_id"), m_nTransaction_ID);

			szSQL.Format(_T("UPDATE hms_ipharmaorder ") \
			_T(" SET hpo_processed='Y', hpo_processeddate=systimestamp, hpo_processedby='%s' ") \
			_T(" WHERE hpo_orderid =%ld and hpo_processed='N' and hpo_orderstatus='S' "), pMF->GetCurrentUser(), m_nOrderID);
		_fmsg(_T("%s"), szSQL);
			pMF->ExecSQL(szSQL);
			if(m_nTotalPayable > m_nDeposit){
				szSQL = m_hms_pharmaorderTbl.GetInsertSQL();				
				pMF->ExecSQL(szSQL);
			}
		}
	}

	/*if(m_nType == 0)
	{
		szSQL.Format(_T("UPDATE hms_ipharmaorder ") \
		_T(" SET hpo_processed='Y', hpo_processeddate=systimestamp, hpo_processedby='%s' ") \
		_T(" WHERE hpo_orderid in(%s) and hpo_processed='N' and hpo_orderstatus='S' "), pMF->GetCurrentUser(), szOrders);
		pMF->ExecSQL(szSQL);
	}
	else
	{
		for (int i =0; i < m_wndList.GetItemCount(); i++)
		{
			if(m_wndList.GetCheck(i))
			{
				long nOID = str2long(m_wndList.GetItemText(i, 0));
				szSQL.Format(_T("HMS_PHARMARETURNORDER_ACCEPT(%ld,'%s') "), nOID, pMF->GetCurrentUser());
				pMF->ExecDML(szSQL);
			}
		}
	}*/
	CPrintForms printer;
	printer.FM_PrintGeneralApprovedInOrder(m_nTransaction_ID);
	printer.FM_PrintDetailedApprovedInOrder(m_nDocumentNo, m_nTransaction_ID);
	CGuiDialog::OnOK();

	
} 
void CHMSPrescriptionApproveDialog::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szOrders;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	if(m_nType == 1)
		return;
	szOrders = _T("-1");
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_nOrderID = str2long(m_wndList.GetItemText(i, 0));
			
			szSQL.Format(_T("UPDATE hms_ipharmaorder ") \
				_T(" SET hpo_processed='N', hpo_processeddate=systimestamp, hpo_processedby='%s' ") \
				_T(" WHERE hpo_orderid =%ld and hpo_processed='Y' and hpo_orderstatus='S' "), pMF->GetCurrentUser(), m_nOrderID);

			pMF->ExecSQL(szSQL);

			szSQL.Format(_T(" DELETE FROM hms_pharmaorder_process WHERE hpo_orderid=%ld"), m_nOrderID);
			pMF->ExecSQL(szSQL);
			
		}
	}

	

	CGuiDialog::OnOK();

} 
void CHMSPrescriptionApproveDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();

} 
int CHMSPrescriptionApproveDialog::OnAddHMSPrescriptionApproveDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionApproveDialog::OnEditHMSPrescriptionApproveDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionApproveDialog::OnDeleteHMSPrescriptionApproveDialog(){
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
 		OnCancelHMSPrescriptionApproveDialog();
 	}
	return 0;
}
int CHMSPrescriptionApproveDialog::OnSaveHMSPrescriptionApproveDialog(){
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
 		//OnHMSPrescriptionApproveDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionApproveDialog::OnCancelHMSPrescriptionApproveDialog(){
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
int CHMSPrescriptionApproveDialog::OnHMSPrescriptionApproveDialogListLoadData(){
	return 0;
}
/*void CHMSPrescriptionApproveDialog::OnSheetNoChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnSheetNoSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnSheetNoKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnSheetNoCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_szTransactionID  = _T("-100");

		szSQL.Format(_T("SELECT mt_transaction_id, mt_storage_id ") \
			_T("FROM m_transaction WHERE mt_orderno='%s' AND mt_status IN('S','A') "), m_szSheetNo);
		rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{
			long nOrderID;
			int nStorageID;
			rs.GetValue(_T("mt_transaction_id"), nOrderID);
			rs.GetValue(_T("mt_storage_id"), nStorageID);			
			m_szTransactionID.AppendFormat(_T(",%ld"), nOrderID);
			
			rs.MoveNext();
		}

		OnListLoadData();
	return 0;
} 
void CHMSPrescriptionApproveDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSPrescriptionApproveDialog::OnStorageSelendok(){
	 
}
/*void CHMSPrescriptionApproveDialog::OnStorageSetfocus(){
	
}*/
/*void CHMSPrescriptionApproveDialog::OnStorageKillfocus(){
	
}*/
long CHMSPrescriptionApproveDialog::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_category      ='S'"));
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionApproveDialog::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} *//*void CHMSPrescriptionApproveDialog::OnDocumentNoChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnDocumentNoCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CHMSPrescriptionApproveDialog::OnPatientNameChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnPatientNameKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnPatientNameCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CHMSPrescriptionApproveDialog::OnTotalCostChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnTotalCostSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnTotalCostKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionApproveDialog::OnDepositChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnDepositSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnDepositKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnDepositCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionApproveDialog::OnTotalPayableChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnTotalPayableSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnTotalPayableKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnTotalPayableCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionApproveDialog::OnSoDuChange(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnSoDuSetfocus(){
	
} */
/*void CHMSPrescriptionApproveDialog::OnSoDuKillfocus(){
	
} */
int CHMSPrescriptionApproveDialog::OnSoDuCheckValue(){
	return 0;
} 
void CHMSPrescriptionApproveDialog::OnPrintGeneralApprovedInOrder(){
	if (!m_bApprovedOrders)
		return;
	CPrintForms printer;
	printer.FM_PrintGeneralApprovedInOrder(m_nTransaction_ID);
}
void CHMSPrescriptionApproveDialog::OnPrintDetailedApprovedInOrder(){
	if (!m_bApprovedOrders)
		return;
	CPrintForms printer;
	printer.FM_PrintDetailedApprovedInOrder(m_nDocumentNo, m_nTransaction_ID);
}