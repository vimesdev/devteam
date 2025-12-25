#include "HMSAcceptInsuranceDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAcceptInsuranceDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAcceptInsuranceDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAcceptInsuranceDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSAcceptInsuranceDialog *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnDiscountPaidChangeFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnDiscountPaidChange();
} */
/*static void _OnDiscountPaidSetfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnDiscountPaidSetfocus();} */ 
/*static void _OnDiscountPaidKillfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnDiscountPaidKillfocus();
} */
static int _OnDiscountPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSAcceptInsuranceDialog *)pWnd)->OnDiscountPaidCheckValue();
} 
/*static void _OnPatientPaidChangeFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnPatientPaidChange();
} */
/*static void _OnPatientPaidSetfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnPatientPaidSetfocus();} */ 
/*static void _OnPatientPaidKillfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnPatientPaidKillfocus();
} */
static int _OnPatientPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSAcceptInsuranceDialog *)pWnd)->OnPatientPaidCheckValue();
} 
/*static void _OnUnpaidChangeFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnUnpaidChange();
} */
/*static void _OnUnpaidSetfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnUnpaidSetfocus();} */ 
/*static void _OnUnpaidKillfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnUnpaidKillfocus();
} */
static int _OnUnpaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSAcceptInsuranceDialog *)pWnd)->OnUnpaidCheckValue();
} 
/*static void _OnReceiveNoChangeFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnReceiveNoChange();
} */
/*static void _OnReceiveNoSetfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnReceiveNoSetfocus();} */ 
/*static void _OnReceiveNoKillfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnReceiveNoKillfocus();
} */
static int _OnReceiveNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAcceptInsuranceDialog *)pWnd)->OnReceiveNoCheckValue();
} 
/*static void _OnAcceptDateChangeFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnAcceptDateChange();
} */
/*static void _OnAcceptDateSetfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnAcceptDateSetfocus();} */ 
/*static void _OnAcceptDateKillfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnAcceptDateKillfocus();
} */
static int _OnAcceptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAcceptInsuranceDialog *)pWnd)->OnAcceptDateCheckValue();
} 
static void _OnDescriptionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAcceptInsuranceDialog* )pWnd)->OnDescriptionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDescriptionSelendokFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnDescriptionSelendok();
}
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnDescriptionKillfocus();
}*/
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnDescriptionKillfocus();
}*/
static long _OnDescriptionLoadDataFnc(CWnd *pWnd){
	return ((CHMSAcceptInsuranceDialog *)pWnd)->OnDescriptionLoadData();
}
/*static void _OnDescriptionAddNewFnc(CWnd *pWnd){
	((CHMSAcceptInsuranceDialog *)pWnd)->OnDescriptionAddNew();
}*/
static void _OnAcceptSelectFnc(CWnd *pWnd){
	CHMSAcceptInsuranceDialog *pVw = (CHMSAcceptInsuranceDialog *)pWnd;
	pVw->OnAcceptSelect();
} 
static void _OnDischargeSelectFnc(CWnd *pWnd){
	CHMSAcceptInsuranceDialog *pVw = (CHMSAcceptInsuranceDialog *)pWnd;
	pVw->OnDischargeSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAcceptInsuranceDialog *pVw = (CHMSAcceptInsuranceDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAcceptInsuranceDialog *pVw = (CHMSAcceptInsuranceDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAcceptInsuranceDialogFnc(CWnd *pWnd){
	 return ((CHMSAcceptInsuranceDialog*)pWnd)->OnAddHMSAcceptInsuranceDialog();
} 
static int _OnEditHMSAcceptInsuranceDialogFnc(CWnd *pWnd){
	 return ((CHMSAcceptInsuranceDialog*)pWnd)->OnEditHMSAcceptInsuranceDialog();
} 
static int _OnDeleteHMSAcceptInsuranceDialogFnc(CWnd *pWnd){
	 return ((CHMSAcceptInsuranceDialog*)pWnd)->OnDeleteHMSAcceptInsuranceDialog();
} 
static int _OnSaveHMSAcceptInsuranceDialogFnc(CWnd *pWnd){
	 return ((CHMSAcceptInsuranceDialog*)pWnd)->OnSaveHMSAcceptInsuranceDialog();
} 
static int _OnCancelHMSAcceptInsuranceDialogFnc(CWnd *pWnd){
	 return ((CHMSAcceptInsuranceDialog*)pWnd)->OnCancelHMSAcceptInsuranceDialog();
} 
CHMSAcceptInsuranceDialog::CHMSAcceptInsuranceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 910;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nDocumentNo = 0;
	m_nRecvNo = 0;
	m_nInvoiceNo = 0;
}
CHMSAcceptInsuranceDialog::~CHMSAcceptInsuranceDialog(){
}
void CHMSAcceptInsuranceDialog::OnCreateComponents(){
	m_wndGeneralCost.Create(this, _T("General Cost"), 5, 5, 905, 570);
	m_wndList.Create(this,10, 30, 900, 505); 
	m_wndTotalCostLabel.Create(this, _T("Total Cost"), 10, 510, 120, 535);
	m_wndTotalCost.Create(this,125, 510, 225, 535); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 230, 510, 340, 535);
	m_wndDiscountPaid.Create(this,345, 510, 445, 535); 
	m_wndPatientPaidLabel.Create(this, _T("Patient Paid"), 450, 510, 560, 535);
	m_wndPatientPaid.Create(this,565, 510, 665, 535); 
	m_wndUnpaidLabel.Create(this, _T("Unpaid"), 670, 510, 780, 535);
	m_wndUnpaid.Create(this,785, 510, 900, 535); 
	m_wndReceiveNoLabel.Create(this, _T("Receive No"), 10, 540, 120, 565);
	m_wndReceiveNo.Create(this,125, 540, 225, 565); 
	m_wndAcceptDateLabel.Create(this, _T("Accept Date"), 230, 540, 340, 565);
	m_wndAcceptDate.Create(this,345, 540, 445, 565); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 450, 540, 560, 565);
	m_wndDescription.Create(this,565, 540, 900, 565); 
	m_wndAccept.Create(this, _T("&Accept"), 590, 575, 665, 600);
	m_wndDischarge.Create(this, _T("&Discharge"), 670, 575, 745, 600);
	m_wndPrint.Create(this, _T("&Print"), 750, 575, 825, 600);
	m_wndClose.Create(this, _T("&Close"), 830, 575, 905, 600);

}
void CHMSAcceptInsuranceDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndTotalCost.SetLimitText(16);
	m_wndTotalCost.SetCheckValue(true);
	m_wndDiscountPaid.SetLimitText(16);
	m_wndDiscountPaid.SetCheckValue(true);
	m_wndPatientPaid.SetLimitText(16);
	m_wndPatientPaid.SetCheckValue(true);
	m_wndUnpaid.SetLimitText(16);
	m_wndUnpaid.SetCheckValue(true);
	m_wndReceiveNo.SetLimitText(16);
	m_wndReceiveNo.SetCheckValue(true);
	m_wndAcceptDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAcceptDate.SetCheckValue(true);
	m_wndDescription.SetCheckValue(true);
	m_wndDescription.LimitText(35);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 210);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Cost"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Discount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(7, _T("Payment"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("Unpaid"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(9, _T("Select"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(10, _T("idx"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("groupid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(12, _T("idx"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(13, _T("Type"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(14, _T("itemid"), CFMT_TEXT, 0);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);


	m_wndDescription.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDescription.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSAcceptInsuranceDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndTotalCost.SetEvent(WE_CHANGE, _OnTotalCostChangeFnc);
	//m_wndTotalCost.SetEvent(WE_SETFOCUS, _OnTotalCostSetfocusFnc);
	//m_wndTotalCost.SetEvent(WE_KILLFOCUS, _OnTotalCostKillfocusFnc);
	m_wndTotalCost.SetEvent(WE_CHECKVALUE, _OnTotalCostCheckValueFnc);
	//m_wndDiscountPaid.SetEvent(WE_CHANGE, _OnDiscountPaidChangeFnc);
	//m_wndDiscountPaid.SetEvent(WE_SETFOCUS, _OnDiscountPaidSetfocusFnc);
	//m_wndDiscountPaid.SetEvent(WE_KILLFOCUS, _OnDiscountPaidKillfocusFnc);
	m_wndDiscountPaid.SetEvent(WE_CHECKVALUE, _OnDiscountPaidCheckValueFnc);
	//m_wndPatientPaid.SetEvent(WE_CHANGE, _OnPatientPaidChangeFnc);
	//m_wndPatientPaid.SetEvent(WE_SETFOCUS, _OnPatientPaidSetfocusFnc);
	//m_wndPatientPaid.SetEvent(WE_KILLFOCUS, _OnPatientPaidKillfocusFnc);
	m_wndPatientPaid.SetEvent(WE_CHECKVALUE, _OnPatientPaidCheckValueFnc);
	//m_wndUnpaid.SetEvent(WE_CHANGE, _OnUnpaidChangeFnc);
	//m_wndUnpaid.SetEvent(WE_SETFOCUS, _OnUnpaidSetfocusFnc);
	//m_wndUnpaid.SetEvent(WE_KILLFOCUS, _OnUnpaidKillfocusFnc);
	m_wndUnpaid.SetEvent(WE_CHECKVALUE, _OnUnpaidCheckValueFnc);
	//m_wndReceiveNo.SetEvent(WE_CHANGE, _OnReceiveNoChangeFnc);
	//m_wndReceiveNo.SetEvent(WE_SETFOCUS, _OnReceiveNoSetfocusFnc);
	//m_wndReceiveNo.SetEvent(WE_KILLFOCUS, _OnReceiveNoKillfocusFnc);
	m_wndReceiveNo.SetEvent(WE_CHECKVALUE, _OnReceiveNoCheckValueFnc);
	//m_wndAcceptDate.SetEvent(WE_CHANGE, _OnAcceptDateChangeFnc);
	//m_wndAcceptDate.SetEvent(WE_SETFOCUS, _OnAcceptDateSetfocusFnc);
	//m_wndAcceptDate.SetEvent(WE_KILLFOCUS, _OnAcceptDateKillfocusFnc);
	m_wndAcceptDate.SetEvent(WE_CHECKVALUE, _OnAcceptDateCheckValueFnc);
	m_wndDescription.SetEvent(WE_SELENDOK, _OnDescriptionSelendokFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_SELCHANGE, _OnDescriptionSelectChangeFnc);
	m_wndDescription.SetEvent(WE_LOADDATA, _OnDescriptionLoadDataFnc);
	//m_wndDescription.SetEvent(WE_ADDNEW, _OnDescriptionAddNewFnc);
	m_wndAccept.SetEvent(WE_CLICK, _OnAcceptSelectFnc);
	m_wndDischarge.SetEvent(WE_CLICK, _OnDischargeSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(GetMode());
	OnListLoadData();
	if(GetMode() == VM_ADD)
	{
		m_szReceiveDate = pMF->m_szRecvDate;
		UpdateData(false);
		m_wndPayment.SetFocus();
	}
	else
		GetDataToScreen();
	
	
}
void CHMSAcceptInsuranceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTotalCost.GetDlgCtrlID(), m_nTotalCost);
	DDX_Text(pDX, m_wndDiscountPaid.GetDlgCtrlID(), m_nDiscountPaid);
	DDX_Text(pDX, m_wndPatientPaid.GetDlgCtrlID(), m_nPatientPaid);
	DDX_Text(pDX, m_wndUnpaid.GetDlgCtrlID(), m_nUnpaid);
	DDX_Text(pDX, m_wndReceiveNo.GetDlgCtrlID(), m_nReceiveNo);
	DDX_TextEx(pDX, m_wndAcceptDate.GetDlgCtrlID(), m_szAcceptDate);
	DDX_TextEx(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescriptionKey);

}
void CHMSAcceptInsuranceDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_nInvoiceNo > 0)
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_invoice WHERE hfi_invoiceno=%ld "), m_nInvoiceNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			CString tmpStr;
			rs.GetValue(_T("hfi_serialno"), m_szSerial);
			rs.GetValue(_T("hfi_bookno"), m_nBookNo);
			rs.GetValue(_T("hfi_recvno"), m_nRecvNo);
			rs.GetValue(_T("hfi_recvdate"), m_szReceiveDate);
			UpdateData(false);
			m_szSerialNo.Format(_T("%s-%ld"), m_szSerial, m_nBookNo);
			m_wndSerialNo.SetWindowText(m_szSerialNo);
			m_wndPrint.SetFocus();
		}

	}

}
void CHMSAcceptInsuranceDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAcceptInsuranceDialog::SetDefaultValues(){

	m_nTotalCost=0;
	m_nDiscountPaid=0;
	m_nPatientPaid=0;
	m_nUnpaid=0;
	m_nReceiveNo=0;
	m_szAcceptDate.Empty();
	m_szDescriptionKey.Empty();

}
int CHMSAcceptInsuranceDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 3, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, 2, 3, -1); 
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
		m_wndTotalCost.EnableWindow(false);
		m_wndInsurancePaid.EnableWindow(false);
		m_wndDiscountPaid.EnableWindow(false);
		m_wndAdvance.EnableWindow(false);
		m_wndUnpaid.EnableWindow(false);
		if(nMode == VM_EDIT){
			m_wndPayable.EnableWindow(false);
			m_wndSerialNo.EnableWindow(false);
			m_wndRecvNo.EnableWindow(false);
		}
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSAcceptInsuranceDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0 || GetMode() == VM_EDIT) return;
	long nIdx = 0;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CString szSQL, tmpStr, itemID, groupId, szFeeType;
	tmpStr = m_wndList.GetItemText(nSel, 9);
	nIdx = ToLong(m_wndList.GetItemText(nSel, 10));
	itemID = m_wndList.GetItemText(nSel, 14);
	groupId = m_wndList.GetItemText(nSel, 11);
	szFeeType = m_wndList.GetItemText(nSel, 12);
	if(tmpStr == _T("X")){
		if(groupId[0] == _T('D'))
			szSQL.Format(_T("UPDATE hms_exam SET hfe_status='C' WHERE he_docno=%ld AND he_receptidx=%ld and hfe_status='O' "), m_nDocumentNo, nIdx);
		else if(groupId.Left(2) == _T("B1") || groupId.Left(2) == _T("B2") || groupId.Left(2) == _T("B3"))
			szSQL.Format(_T("UPDATE pcms_order_line SET hfe_status='C' WHERE pcmsol_order=%ld AND pcmsol_itemid='%s' and hfe_status='O'"), nIdx, itemID);
		else if(groupId.Left(2) == _T("B4") || groupId.Left(2) == _T("B5"))
			szSQL.Format(_T("UPDATE hms_operation SET hfe_status='C' WHERE ho_docno=%ld AND ho_idx=%ld and hfe_status='O' "), m_nDocumentNo, nIdx);
		else if(groupId.Left(1) == _T("A"))
			szSQL.Format(_T("UPDATE hms_pharmacyorder_line SET hfe_status='C' WHERE hpol_orderid in(select hpo_orderid from hms_pharmacyorder where hpo_docno=%ld ) AND hpol_stockline=%ld and hfe_status='O'"), m_nDocumentNo, nIdx);
		else if(groupId.Left(1) == _T("C"))
			szSQL.Format(_T(" UPDATE hms_bed SET hfe_status='C' WHERE hb_docno=%ld AND hb_idx=%ld AND hfe_status='O' "), m_nDocumentNo, nIdx);
		m_wndList.SetItemText(nSel, 9, _T(""));
	}
	else
	{
		if(groupId[0] == _T('D'))
			szSQL.Format(_T("UPDATE hms_exam SET hfe_status='O' WHERE he_docno=%ld AND he_receptidx=%ld and hfe_status='C' "), m_nDocumentNo, nIdx);
		else if(groupId.Left(2) == _T("B1") || groupId.Left(2) == _T("B2") || groupId.Left(2) == _T("B3"))
			szSQL.Format(_T("UPDATE pcms_order_line SET hfe_status='O' WHERE pcmsol_order=%ld AND pcmsol_itemid='%s' and hfe_status='C'"), nIdx, itemID);
		else if(groupId.Left(2) == _T("B4") || groupId.Left(2) == _T("B5"))
			szSQL.Format(_T("UPDATE hms_operation SET hfe_status='O' WHERE ho_docno=%ld AND ho_idx=%ld and hfe_status='C' "), m_nDocumentNo, nIdx);
		else if(groupId.Left(1) == _T("A"))
			szSQL.Format(_T("UPDATE hms_pharmacyorder_line SET hfe_status='O' WHERE hpol_orderid in(select hpo_orderid from hms_pharmacyorder where hpo_docno=%ld ) AND hpol_stockline=%ld and hfe_status='C'"), m_nDocumentNo, nIdx);
		else if(groupId.Left(1) == _T("C"))
			szSQL.Format(_T(" UPDATE hms_bed SET hfe_status='O' WHERE hb_docno=%ld AND hb_idx=%ld AND hfe_status='C' "), m_nDocumentNo, nIdx);

		m_wndList.SetItemText(nSel, 9, _T("X"));
	}
	pMF->ExecSQL(szSQL);
} 
void CHMSAcceptInsuranceDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAcceptInsuranceDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSAcceptInsuranceDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord grs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szFeeID, szID;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex, nChapterID=0;
	double dTotal[5];
	double dGroup1[5];
	double dGroup2[5];
	double dAmount = 0;
	int nItem=0, nOldItem=0, nItem2;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup;
	for (int i =0; i < 5; i++){
		dTotal[i] = 0;
		dGroup1[i] = 0;
		dGroup2[i] = 0;
	}
	
	if(GetMode() == VM_EDIT){
		szWhere.Format(_T(" AND hfe_iaccept='Y' "));
	}
	else 
		szWhere.Format(_T(" AND (hfe_iaccept<>'Y' OR hfe_iaccept IS NULL) AND date(hfe_entrydate)<=date('%s') AND hfe_deptid in(%s) "), pMF->m_szRecvDate, pMF->m_szDepartments);

	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_id "));
	grs.ExecSQL(szSQL);

	szSQL.Format(_T(" SELECT") \
		_T("		hfe_deptid as deptid, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_idx as idx,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_qty) as qty,") \
		_T(" 		hfe_unitprice-hfe_difcost/hfe_qty as unitprice,") \
		_T(" 		sum(hfe_cost-hfe_difcost) as cost,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patpaid) as patpaid,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_patdebt) as unpaid") \
		_T(" FROM hmsv_fee") \
		_T(" WHERE hfe_docno=%ld and hfe_cost > 0 %s ") \
		_T(" GROUP BY groupid, feetype, idx, itemid, name, unit, unitprice, deptid") \
		_T(" ORDER BY groupid, feetype, name, unit, unitprice"), m_nDocumentNo, szWhere);
	rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
	nIndex = 0;
	CString szSubItem;
	int nSubItem = 1;
	nChapterID = 0;
	
	m_szDepartments.Empty();

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
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			m_wndList.SetItemText(nItem, 13, _T("Type"));
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 9, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			nIndex = 0;
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			nItem = m_wndList.AddItems(tmpStr, grs.GetValue(_T("name")), NULL);
			//m_wndList.SetItemBkColor(nItem, RGB(0, 128, 128), FALSE);
			//m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.SetItemBkColor(nItem, RGB(64, 128, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 9);
			m_wndList.SetItemText(nItem, 13, _T("Group"));
			dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
		}
		
		if(szSubItem == _T("Y"))
		{
			nSubItem = 0;
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("deptid"), tmpStr);
				if(!tmpStr.IsEmpty() && m_szDepartments.Find(tmpStr) == -1){
					if(!m_szDepartments.IsEmpty())
						m_szDepartments += _T(",");
					m_szDepartments += tmpStr;
				}

					rs.GetValue(_T("groupid"), szNewGroup);
					szNewGroup.Trim();
					if(szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
							szOldGroup = szNewGroup;
							if(dGroup2[0] > 0 && nOldItem > 0){
								m_wndList.SetItemText(nOldItem, 5, dGroup2[0]>0?ToString(dGroup2[0]):_T(""));
								m_wndList.SetItemText(nOldItem, 6, dGroup2[1]>0?ToString(dGroup2[1]):_T(""));
								m_wndList.SetItemText(nOldItem, 7, dGroup2[2]>0?ToString(dGroup2[2]):_T(""));
								m_wndList.SetItemText(nOldItem, 8, dGroup2[3]>0?ToString(dGroup2[3]):_T(""));
							}
							szSQL.Format(_T("SELECT hfg_name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&pMF->m_db);
							rs2.ExecSQL(szSQL);
							
							nItem2 = m_wndList.AddItems(_T("*"), rs2.GetValue(_T("hfg_name")), NULL);
							m_wndList.SetItemText(nItem2, 13, _T("SubGroup"));
							nOldItem = nItem2;
							m_wndList.SetItemBkColor(nItem2, RGB(200, 200, 228), FALSE);
							m_wndList.SetItemTextColor(nItem2, COLOR_BLUE, FALSE);
							m_wndList.MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

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
						m_wndList.AddItems(_T(""), 
							rs.GetValue(_T("name")),
							rs.GetValue(_T("unit")),
							rs.GetValue(_T("qty")),
							rs.GetValue(_T("unitprice")),
							rs.GetValue(_T("cost")),
							rs.GetValue(_T("discount")),
							rs.GetValue(_T("patpaid")),
							rs.GetValue(_T("patdebt")),
							_T("X"),
							rs.GetValue(_T("idx")),
							rs.GetValue(_T("groupid")),
							rs.GetValue(_T("feetype")),
							_T("Item"),
							rs.GetValue(_T("itemid")),
							NULL);
						bDeleteParent = false;
					}
					else
						break;
					rs.MoveNext();

			}
			if(dGroup1[0] > 0)
			{
				
				if(dGroup2[0] > 0){
					m_wndList.SetItemText(nOldItem, 5, dGroup2[0] > 0?ToString(dGroup2[0]):_T(""));
					m_wndList.SetItemText(nOldItem, 6, dGroup2[1]> 0?ToString(dGroup2[1]):_T(""));
					m_wndList.SetItemText(nOldItem, 7, dGroup2[2] > 0?ToString(dGroup2[2]):_T(""));
					m_wndList.SetItemText(nOldItem, 8, dGroup2[3] > 0?ToString(dGroup2[3]):_T(""));
				}
				dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
				nOldItem = 0;
				CString szLabel;
				TranslateString(_T("Sub Amount"), szLabel);
				nItem = m_wndList.AddItems(_T(""), szLabel, NULL);
				m_wndList.SetItemText(nItem, 13, _T("SubAmount"));
				m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
				m_wndList.SetItemText(nItem, 5, dGroup1[0] > 0?ToString(dGroup1[0]):_T(""));
				m_wndList.SetItemText(nItem, 6, dGroup1[1] > 0?ToString(dGroup1[1]):_T(""));
				m_wndList.SetItemText(nItem, 7, dGroup1[2] > 0?ToString(dGroup1[2]):_T(""));
				m_wndList.SetItemText(nItem, 8, dGroup1[3] > 0?ToString(dGroup1[3]):_T(""));
				m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
				dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
			}

		}

		grs.MoveNext();
	
	}
	
	if(dTotal[0] > 0){
			TranslateString(_T("Total Amount"), tmpStr);
			nItem = m_wndList.AddItems(_T(""), 
			tmpStr,
			_T(""),
			_T(""),
			_T(""),
			dTotal[0]>0?ToString(dTotal[0]):_T(""),
			dTotal[1]>0?ToString(dTotal[1]):_T(""),
			dTotal[2]>0?ToString(dTotal[2]):_T(""),
			dTotal[3]>0?ToString(dTotal[3]):_T(""),
			NULL);
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
			m_wndList.SetItemText(nItem, 13, _T("TotalAmount"));
	}

	m_nTotalCost = dTotal[0];
	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
		m_nInsurancePaid = dTotal[1];
	else
		m_nDiscountPaid = dTotal[1];
	m_nPatientPaid = dTotal[2];
	m_nUnpaid = dTotal[3];
	m_nPayable = m_nUnpaid;
	m_wndList.EndLoad();
	m_wndList.EnsureVisible(m_wndList.GetItemCount()-1, TRUE);
	return 0;

	UpdateData(false);
	if(m_wndList.GetItemCount() <= 0)
		m_wndPayment.EnableWindow(false);
	return 0;
}
/*void CHMSAcceptInsuranceDialog::OnTotalCostChange(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnTotalCostSetfocus(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnTotalCostKillfocus(){
	
} */
int CHMSAcceptInsuranceDialog::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSAcceptInsuranceDialog::OnDiscountPaidChange(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnDiscountPaidSetfocus(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnDiscountPaidKillfocus(){
	
} */
int CHMSAcceptInsuranceDialog::OnDiscountPaidCheckValue(){
	return 0;
} 
/*void CHMSAcceptInsuranceDialog::OnPatientPaidChange(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnPatientPaidSetfocus(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnPatientPaidKillfocus(){
	
} */
int CHMSAcceptInsuranceDialog::OnPatientPaidCheckValue(){
	return 0;
} 
/*void CHMSAcceptInsuranceDialog::OnUnpaidChange(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnUnpaidSetfocus(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnUnpaidKillfocus(){
	
} */
int CHMSAcceptInsuranceDialog::OnUnpaidCheckValue(){
	return 0;
} 
/*void CHMSAcceptInsuranceDialog::OnReceiveNoChange(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnReceiveNoSetfocus(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnReceiveNoKillfocus(){
	
} */
int CHMSAcceptInsuranceDialog::OnReceiveNoCheckValue(){
	return 0;
} 
/*void CHMSAcceptInsuranceDialog::OnAcceptDateChange(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnAcceptDateSetfocus(){
	
} */
/*void CHMSAcceptInsuranceDialog::OnAcceptDateKillfocus(){
	
} */
int CHMSAcceptInsuranceDialog::OnAcceptDateCheckValue(){
	return 0;
} 
void CHMSAcceptInsuranceDialog::OnDescriptionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAcceptInsuranceDialog::OnDescriptionSelendok(){
	 
}
/*void CHMSAcceptInsuranceDialog::OnDescriptionSetfocus(){
	
}*/
/*void CHMSAcceptInsuranceDialog::OnDescriptionKillfocus(){
	
}*/
long CHMSAcceptInsuranceDialog::OnDescriptionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndDescription, _T("hms_invoice_desc"), m_szDescriptionKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDescription.IsSearchKey() && !m_szDescriptionKey.IsEmpty()){
	};
	m_wndDescription.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDescription.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAcceptInsuranceDialog::OnDescriptionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAcceptInsuranceDialog::OnAcceptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDesc, tmpStr;
	
	if(!IsValidateData())
		return;
	if(m_szSerial == _T("AUTO")){
		tmpStr.Format(_T("%s"), pMF->GetSysDate());
		tmpStr.Replace(_T("/"), _T(""));
		m_nBookNo = ToLong(tmpStr);
		tmpStr.Format(_T("%s"), pMF->GetSysTime());
		tmpStr.Replace(_T(":"), _T(""));
		tmpStr.Trim();
		m_nRecvNo = ToInt(tmpStr);
	}

	szDesc = m_wndDescription.GetCurrent(1);
	if(szDesc.IsEmpty()){
		m_wndDescription.SetCurrent(0, _T("0"));
		szDesc = m_wndDescription.GetCurrent(1);
	}
	szSQL.Format(_T("select hms_fee_createinvoice(%ld, '%s', %ld, %ld, '%s', '%s', '%s', '', '%s') "),
		m_nDocumentNo, m_szSerial, m_nBookNo, m_nRecvNo, m_szReceiveDate, pMF->GetCurrentUser(), m_szDepartments, szDesc);
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
	{
		ShowMessageBox(_T("Can not create invoice"), MB_ICONWARNING|MB_OK);
		return;
	}
	szSQL.Format(_T("UPDATE hms_invfeectl_line SET hifcl_recvno=%ld WHERE lower(hifcl_userid)=lower('%s') AND hifcl_serialno='%s' AND hifcl_bookno=%ld AND hifcl_recvno<%ld"), 
		m_nRecvNo, pMF->GetCurrentUser(), m_szSerial, m_nBookNo, m_nRecvNo);
	pMF->ExecSQL(szSQL);
	m_nInvoiceNo = rs.GetIntValue();
//Neu co muc phi nao chon khong thu thi tinh lai phi
	bool bRecalc = false;
	CString szFlag;
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		tmpStr = m_wndList.GetItemText(i, 9);
		szFlag = m_wndList.GetItemText(i, 13);
		if(szFlag == _T("Item") && tmpStr != _T("X")){
			bRecalc = true;
			break;
		}
	}
	if(bRecalc)
	{
		szSQL.Format(_T("SELECT hms_fee_create('%s', %ld) "), pMF->GetCurrentUser(), m_nDocumentNo);
		pMF->ExecSQL(szSQL);
	}
	OnPrintSelect();
	OnOK();
} 
void CHMSAcceptInsuranceDialog::OnDischargeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select hms_fee_cancelinvoice(%ld, %ld, '%s') "),
		m_nDocumentNo, m_nInvoiceNo, pMF->GetCurrentUser());
//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
	{
		ShowMessageBox(_T("Can not cancel invoice"), MB_ICONWARNING|MB_OK);
		return;
	}
	CGuiDialog::OnOK();
} 
void CHMSAcceptInsuranceDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->PrintDischargePayment(m_nInvoiceNo);
	
} 
void CHMSAcceptInsuranceDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSAcceptInsuranceDialog::OnAddHMSAcceptInsuranceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSAcceptInsuranceDialog::OnEditHMSAcceptInsuranceDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAcceptInsuranceDialog::OnDeleteHMSAcceptInsuranceDialog(){
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
 		OnCancelHMSAcceptInsuranceDialog(); 
 	}
	return 0;
}
int CHMSAcceptInsuranceDialog::OnSaveHMSAcceptInsuranceDialog(){
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
 		//OnHMSAcceptInsuranceDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSAcceptInsuranceDialog::OnCancelHMSAcceptInsuranceDialog(){
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
int CHMSAcceptInsuranceDialog::OnHMSAcceptInsuranceDialogListLoadData(){
	return 0;
}
