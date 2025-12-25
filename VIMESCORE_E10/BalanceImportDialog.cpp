#include "BalanceImportDialog.h"
#include "MainFrame_E10.h"
#include "HMSReportForms/PrintForms.h"

static void _OnWarehouseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBalanceImportDialog* )pWnd)->OnWarehouseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseSelendokFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnWarehouseSelendok();
}
/*static void _OnWarehouseSetfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnWarehouseKillfocus();
}*/
/*static void _OnWarehouseKillfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnWarehouseKillfocus();
}*/
static long _OnWarehouseLoadDataFnc(CWnd *pWnd){
	return ((CBalanceImportDialog *)pWnd)->OnWarehouseLoadData();
}
/*static void _OnWarehouseAddNewFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnWarehouseAddNew();
}*/
/*static void _OnDelivererChangeFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnDelivererChange();
} */
/*static void _OnDelivererSetfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnDelivererSetfocus();} */ 
/*static void _OnDelivererKillfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnDelivererKillfocus();
} */
static int _OnDelivererCheckValueFnc(CWnd *pWnd){
	return ((CBalanceImportDialog *)pWnd)->OnDelivererCheckValue();
} 
/*static void _OnReceiverChangeFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnReceiverChange();
} */
/*static void _OnReceiverSetfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnReceiverSetfocus();} */ 
/*static void _OnReceiverKillfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnReceiverKillfocus();
} */
static int _OnReceiverCheckValueFnc(CWnd *pWnd){
	return ((CBalanceImportDialog *)pWnd)->OnReceiverCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CBalanceImportDialog *)pWnd)->OnReasonCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CBalanceImportDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CBalanceImportDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CBalanceImportDialog *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CBalanceImportDialog *)pWnd)->OnApprovedDateCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CBalanceImportDialog *pVw = (CBalanceImportDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CBalanceImportDialog *pVw = (CBalanceImportDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CBalanceImportDialog *pVw = (CBalanceImportDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CBalanceImportDialog *pVw = (CBalanceImportDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CBalanceImportDialog *pVw = (CBalanceImportDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBalanceImportDialog *pVw = (CBalanceImportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CBalanceImportDialog *pVw = (CBalanceImportDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CBalanceImportDialog *pVw = (CBalanceImportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CBalanceImportDialog *pVw = (CBalanceImportDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CBalanceImportDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddBalanceImportDialogFnc(CWnd *pWnd){
	 return ((CBalanceImportDialog*)pWnd)->OnAddBalanceImportDialog();
} 
static int _OnEditBalanceImportDialogFnc(CWnd *pWnd){
	 return ((CBalanceImportDialog*)pWnd)->OnEditBalanceImportDialog();
} 
static int _OnDeleteBalanceImportDialogFnc(CWnd *pWnd){
	 return ((CBalanceImportDialog*)pWnd)->OnDeleteBalanceImportDialog();
} 
static int _OnSaveBalanceImportDialogFnc(CWnd *pWnd){
	 return ((CBalanceImportDialog*)pWnd)->OnSaveBalanceImportDialog();
} 
static int _OnCancelBalanceImportDialogFnc(CWnd *pWnd){
	 return ((CBalanceImportDialog*)pWnd)->OnCancelBalanceImportDialog();
} 
CBalanceImportDialog::CBalanceImportDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1010;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = _T("BIO");
	SetWindowTitle(_T("Balance Import Order"));

}
CBalanceImportDialog::~CBalanceImportDialog(){
}
void CBalanceImportDialog::OnCreateComponents(){
	m_wndPurchaseOrderInformation.Create(this, _T("Purchase Order Information"), 690, 5, 1005, 120);
	m_wndSupplierInformation.Create(this, _T("General Information"), 5, 5, 685, 120);
	m_wndWarehouseLabel.Create(this, _T("Warehouse"), 10, 30, 160, 55);
	m_wndWarehouse.Create(this,165, 30, 680, 55); 
	m_wndDelivererLabel.Create(this, _T("Deliverer"), 10, 60, 160, 85);
	m_wndDeliverer.Create(this,165, 60, 360, 85); 
	m_wndReceiverLabel.Create(this, _T("Receiver"), 365, 60, 470, 85);
	m_wndReceiver.Create(this,475, 60, 680, 85); 
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 90, 160, 115);
	m_wndReason.Create(this,165, 90, 680, 115); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 695, 30, 845, 55);
	m_wndOrderNo.Create(this,850, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 695, 60, 845, 85);
	m_wndOrderDate.Create(this,850, 60, 1000, 85); 
	m_wndApprovedDateLabel.Create(this, _T("Approved Date"), 695, 89, 845, 114);
	m_wndApprovedDate.Create(this,850, 89, 1000, 114); 
	m_wndAdd.Create(this, _T("&Add"), 250, 575, 340, 600);
	m_wndEdit.Create(this, _T("&Edit"), 345, 575, 435, 600);
	m_wndDelete.Create(this, _T("&Delete"), 440, 575, 530, 600);
	m_wndSave.Create(this, _T("&Save"), 535, 575, 625, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 630, 575, 720, 600);
	m_wndPrint.Create(this, _T("&Print"), 725, 575, 815, 600);
	m_wndPost.Create(this, _T("Approval"), 820, 575, 910, 600);
	m_wndClose.Create(this, _T("&Close"), 915, 575, 1005, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	m_wndTab.Create(this,5, 125, 1005, 570); 
	CreateTabViews();
}
void CBalanceImportDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	m_wndOrderNo.SetLimitText(15);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetCheckValue(true);
//	m_wndOrderDate.SetReadOnly(TRUE);
	m_wndReason.SetLimitText(254);
//	m_wndReason.SetCheckValue(true);

	m_wndOrderNo.SetReadOnly(true);
	m_wndOrderDate.SetReadOnly(true);
	m_wndApprovedDate.SetReadOnly(TRUE);
	m_wndDeliverer.SetInitCap(1);
	m_wndReceiver.SetInitCap(1);
	
	m_wndWarehouse.SetCheckValue(true);
	m_wndWarehouse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWarehouse.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_transactionTbl.SetTableName(_T("m_transaction"));
	m_transactionTbl.AddField(_T("mt_transaction_id"), dfLong); 
	m_transactionTbl.AddField(_T("mt_client_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_org_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_createdby"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_updatedby"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_updateddate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_doctype"), dfText, 1); 
	m_transactionTbl.AddField(_T("mt_orderno"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_orderdate"), dfDateTime); 
	m_transactionTbl.AddField(_T("mt_acctdate"), dfDate); 
	m_transactionTbl.AddField(_T("mt_currency_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_exchangerate"), dfDouble); 
	m_transactionTbl.AddField(_T("mt_expense_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_contract_id"), dfText, 32);
	m_transactionTbl.AddField(_T("mt_partner_id"), dfText, 32); 
	m_transactionTbl.AddField(_T("mt_description"), dfText, 255); 
	m_transactionTbl.AddField(_T("mt_reference"), dfText, 255); 
	m_transactionTbl.AddField(_T("mt_note"), dfText, 1024); 
	m_transactionTbl.AddField(_T("mt_deliveryby"), dfText, 60); 
	m_transactionTbl.AddField(_T("mt_receiveby"), dfText, 60); 
	m_transactionTbl.AddField(_T("mt_storage_id"), dfInteger); 
	m_transactionTbl.AddField(_T("mt_storage_to_id"), dfInteger); 	
	m_wndOrderDate.SetCheckValue(TRUE);
	m_wndOrderDate.SetMax(pMF->GetSysDateTime());

	m_wndApprovedDate.SetCheckValue(TRUE);
	m_wndApprovedDate.SetMax(pMF->GetSysDateTime());

}

void CBalanceImportDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndWarehouse.SetEvent(WE_SELENDOK, _OnWarehouseSelendokFnc);
	//m_wndWarehouse.SetEvent(WE_SETFOCUS, _OnWarehouseSetfocusFnc);
	//m_wndWarehouse.SetEvent(WE_KILLFOCUS, _OnWarehouseKillfocusFnc);
	m_wndWarehouse.SetEvent(WE_SELCHANGE, _OnWarehouseSelectChangeFnc);
	m_wndWarehouse.SetEvent(WE_LOADDATA, _OnWarehouseLoadDataFnc);
	//m_wndWarehouse.SetEvent(WE_ADDNEW, _OnWarehouseAddNewFnc);
	//m_wndDeliverer.SetEvent(WE_CHANGE, _OnDelivererChangeFnc);
	//m_wndDeliverer.SetEvent(WE_SETFOCUS, _OnDelivererSetfocusFnc);
	//m_wndDeliverer.SetEvent(WE_KILLFOCUS, _OnDelivererKillfocusFnc);
	m_wndDeliverer.SetEvent(WE_CHECKVALUE, _OnDelivererCheckValueFnc);
	//m_wndReceiver.SetEvent(WE_CHANGE, _OnReceiverChangeFnc);
	//m_wndReceiver.SetEvent(WE_SETFOCUS, _OnReceiverSetfocusFnc);
	//m_wndReceiver.SetEvent(WE_KILLFOCUS, _OnReceiverKillfocusFnc);
	m_wndReceiver.SetEvent(WE_CHECKVALUE, _OnReceiverCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndApprovedDate.SetEvent(WE_CHANGE, _OnApprovedDateChangeFnc);
	//m_wndApprovedDate.SetEvent(WE_SETFOCUS, _OnApprovedDateSetfocusFnc);
	//m_wndApprovedDate.SetEvent(WE_KILLFOCUS, _OnApprovedDateKillfocusFnc);
	m_wndApprovedDate.SetEvent(WE_CHECKVALUE, _OnApprovedDateCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
	{
		GetDataToScreen();	
	}
	SetMode(nMode);

}
void CBalanceImportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndWarehouse.GetDlgCtrlID(), m_szWarehouseKey);
	DDX_Text(pDX, m_wndDeliverer.GetDlgCtrlID(), m_szDeliverer);
	DDX_Text(pDX, m_wndReceiver.GetDlgCtrlID(), m_szReceiver);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);

}
void CBalanceImportDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsv(&pMF->m_db);
	CString szSQL, szWhere;
	
	szWhere.Format(_T(" and mt_org_id IN('GL','%s') "), pMF->GetModuleID());
	szWhere.AppendFormat(_T(" and mt_doctype='BIO' "));

	szSQL.Format(_T("SELECT * ") \
	_T(" FROM m_transaction ") \
	_T("WHERE mt_transaction_id=%ld %s "), m_nID, szWhere);

	//Notice(szSQL);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mt_orderno"), m_szOrderNo);
		rs.GetValue(_T("mt_orderdate"), m_szOrderDate);
		rs.GetValue(_T("mt_acctdate"), m_szApprovedDate);

		rs.GetValue(_T("mt_currency_id"), m_szCurrencyKey);
		rs.GetValue(_T("mt_exchangerate"), m_nExchangeRate);
		
		rs.GetValue(_T("mt_status"), m_szStatus);
		rs.GetValue(_T("mt_posted"), m_szPosted);
		rs.GetValue(_T("mt_deliveryby"), m_szDeliverer);
		rs.GetValue(_T("mt_receiveby"), m_szReceiver);
		rs.GetValue(_T("mt_reference"), m_szReference);
		rs.GetValue(_T("mt_description"), m_szReason);
		rs.GetValue(_T("mt_note"), m_szNote);
		rs.GetValue(_T("mt_storage_to_id"), m_szWarehouseKey);
		rs.GetValue(_T("mt_tax_id"), m_nTaxID);
		rs.GetValue(_T("mt_note"), m_szNote);
		m_wndLines.m_nStorageID = str2int(m_szWarehouseKey);
		m_wndLines.Refresh(m_nID);
	}

}

void CBalanceImportDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
	
	m_transactionTbl.SetValue(_T("mt_createdby"), pMF->GetCurrentUser());

	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE mt_transaction_id=%ld "), m_nID);
		m_transactionTbl.Open(&pMF->m_db, szWhere);
	}
	m_transactionTbl.SetValue(_T("mt_client_id"), _T(""));
	m_transactionTbl.SetValue(_T("mt_org_id"), pMF->GetModuleID());
	m_transactionTbl.SetValue(_T("mt_updatedby"), pMF->GetCurrentUser());
	m_transactionTbl.SetValue(_T("mt_updateddate"), pMF->GetSysDateTime());
	m_transactionTbl.SetValue(_T("mt_doctype"), m_szType);
	m_transactionTbl.SetValue(_T("mt_orderno"), m_szOrderNo);
	m_transactionTbl.SetValue(_T("mt_orderdate"), m_szOrderDate);
	m_transactionTbl.SetValue(_T("mt_acctdate"), m_szApprovedDate);
	m_transactionTbl.SetValue(_T("mt_currency_id"), m_szCurrencyKey);
	
	if(m_szCurrencyKey == pMF->m_szDefaultCurrency)
		m_nExchangeRate = 1;

	m_transactionTbl.SetValue(_T("mt_exchangerate"), m_nExchangeRate);
	m_transactionTbl.SetValue(_T("mt_deliveryby"), m_szDeliverer);
	m_transactionTbl.SetValue(_T("mt_receiveby"), m_szReceiver);
	m_transactionTbl.SetValue(_T("mt_reference"), m_szReference);
	m_transactionTbl.SetValue(_T("mt_description"), m_szReason);
	m_transactionTbl.SetValue(_T("mt_note"), m_szNote);
	m_transactionTbl.SetValue(_T("mt_storage_to_id"), m_szWarehouseKey);

}

void CBalanceImportDialog::SetDefaultValues(){

	//m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_nExchangeRate=1;
	m_szDeliverer.Empty();
	m_szReceiver.Empty();
	m_szAddress.Empty();
	m_szReason.Empty();
	m_szReference.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szApprovedDate.Empty();
	m_szCurrencyKey.Empty();
	
	m_szNote.Empty();
	m_szStatus=_T("O");
	m_szPosted = _T("N");
}

int CBalanceImportDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL;
		CString tmpStr;
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_szOrderDate =  pMF->GetSysDateTime();
			szSQL.Format(_T("AD_GETNEXTVAL('BALANCE_IMPORT_ORDER_NO','Y') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_szApprovedDate= m_szOrderDate;
			m_szCurrencyKey = pMF->m_szDefaultCurrency;
			m_wndWarehouse.SetFocus();
			m_wndLines.Refresh(-1);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			
			m_wndWarehouse.EnableWindow(FALSE);
			m_wndDeliverer.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 7, -1); 
 			SetDefaultValues(); 
			m_szOrderNo.Empty();
 			break; 
 		};	//switch


		if(!pMF->IsMultipleCurrency()){
			m_nExchangeRate = 1;
		}


		if(m_szStatus != _T("O"))
		{
			m_wndPost.EnableWindow(FALSE);
//			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
			m_wndWarehouse.EnableWindow(FALSE);
		}

		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

void CBalanceImportDialog::OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CBalanceImportDialog::OnWarehouseSelendok(){
	 
}
/*void CBalanceImportDialog::OnWarehouseSetfocus(){
	
}*/
/*void CBalanceImportDialog::OnWarehouseKillfocus(){
	
}*/
long CBalanceImportDialog::OnWarehouseLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();

	return pMF->LoadStorageList(&m_wndWarehouse, m_szWarehouseKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWarehouse.IsSearchKey() && !m_szWarehouseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szWarehouseKey
};
	m_wndWarehouse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CBalanceImportDialog::OnWarehouseAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CBalanceImportDialog::OnDelivererChange(){
	
} */
/*void CBalanceImportDialog::OnDelivererSetfocus(){
	
} */
/*void CBalanceImportDialog::OnDelivererKillfocus(){
	
} */
int CBalanceImportDialog::OnDelivererCheckValue(){
	return 0;
}
 
/*void CBalanceImportDialog::OnReceiverChange(){
	
} */
/*void CBalanceImportDialog::OnReceiverSetfocus(){
	
} */
/*void CBalanceImportDialog::OnReceiverKillfocus(){
	
} */
int CBalanceImportDialog::OnReceiverCheckValue(){
	return 0;
}
 
/*void CBalanceImportDialog::OnReasonChange(){
	
} */
/*void CBalanceImportDialog::OnReasonSetfocus(){
	
} */
/*void CBalanceImportDialog::OnReasonKillfocus(){
	
} */
int CBalanceImportDialog::OnReasonCheckValue(){
	return 0;
} 
/*void CBalanceImportDialog::OnOrderNoChange(){
	
} */
/*void CBalanceImportDialog::OnOrderNoSetfocus(){
	
} */
/*void CBalanceImportDialog::OnOrderNoKillfocus(){
	
} */
int CBalanceImportDialog::OnOrderNoCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return 0;
	
	szWhere.Empty();
	if(GetMode() == VM_EDIT)
		szWhere.Format(_T(" and mt_transaction_id<> %ld "), m_nID);

	szWhere.AppendFormat(_T(" and trunc_date(sysdate, 'year')=trunc_date(mt_orderdate, 'year') "));

	szSQL.Format(_T("SELECT count(*) FROM m_transaction WHERE mt_orderno='%s'  %s "), m_szOrderNo, szWhere);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}
	return 0;
}
 
/*void CBalanceImportDialog::OnOrderDateChange(){
	
} */
/*void CBalanceImportDialog::OnOrderDateSetfocus(){
	
} */
/*void CBalanceImportDialog::OnOrderDateKillfocus(){
	
} */
int CBalanceImportDialog::OnOrderDateCheckValue(){
	return 0;
}
 
/*void CBalanceImportDialog::OnApprovedDateChange(){
	
} */
/*void CBalanceImportDialog::OnApprovedDateSetfocus(){
	
} */
/*void CBalanceImportDialog::OnApprovedDateKillfocus(){
	
} */
int CBalanceImportDialog::OnApprovedDateCheckValue(){
	return 0;
}
  
void CBalanceImportDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddBalanceImportDialog();
}
 
void CBalanceImportDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditBalanceImportDialog();
}
 
void CBalanceImportDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteBalanceImportDialog();
}
 
void CBalanceImportDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveBalanceImportDialog();
}
 
void CBalanceImportDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelBalanceImportDialog();
}
 
void CBalanceImportDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPrintForms printer;
	//printer.PrintPurchaseOrder(m_nID);
	printer.TM_PrintInSurgeryPayment(11747, 14012836, _T("B11"));
}
 
void CBalanceImportDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	if(m_szStatus != _T("O"))
		return;

	szSQL.Format(_T("M_TRANSACTION_POST(%ld, '%s') "), m_nID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		CString tmpStr;
		RecalcAmount();
		if(m_szStatus != _T("O")){
			m_wndPost.EnableWindow(FALSE);
			m_wndEdit.EnableWindow(FALSE);
			m_wndDelete.EnableWindow(FALSE);
			m_wndAddLine.EnableWindow(FALSE);
		}

	}
	else
	{
		ShowMessageBox(_T("Cannot post purchase order"));
	}
}
 
void CBalanceImportDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
void CBalanceImportDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return;
	}
	m_wndLines.OnListAddItem();

}
 
void CBalanceImportDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
int CBalanceImportDialog::OnAddBalanceImportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CBalanceImportDialog::OnEditBalanceImportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CBalanceImportDialog::OnDeleteBalanceImportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	if(m_szStatus != _T("O"))
	{
		ShowMessageBox(_T("Can not process with current status."));
		return -1;
	}
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
	
 	if(ShowMessageBox(_T("Do you want to delete order?(Y/"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szSQL.Format(_T("M_TRANSACTION_DELETE(%ld, '%s') "), m_nID, pMF->GetCurrentUser()); 
 	int ret = str2int(pMF->ExecDML(szSQL)); 
 	if(ret > 0){ 
 		OnCancelBalanceImportDialog(); 
 	}
	else
	{
		ShowMessageBox(_T("Can not delete order"));
	}
	return 0;
}

int CBalanceImportDialog::OnSaveBalanceImportDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	m_wndOrderDate.SetMax(pMF->GetSysDateTime());
	m_wndApprovedDate.SetMax(pMF->GetSysDateTime());
 	if(!IsValidateData()) 
 		return -1; 

 	CString szSQL; 
/*
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("m_transaction_create(%s) "), m_transactionTbl.FormatSQL());
	else
		szSQL.Format(_T("m_transaction_update(%s) "),  m_transactionTbl.FormatSQL());
 
 //Notice(szSQL);

 	CString szRes  = pMF->ExecDML(szSQL); 

 	if(szRes != _T("ERR")) 
*/
	if(GetMode() == VM_ADD){
		szSQL.Format(_T("select m_transaction_id_asq.nextval from dual"));
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		m_nID = (long)rs.GetIntValue();
		if(m_nID <= 0) return -1;
		m_transactionTbl.SetValue(_T("mt_transaction_id"), m_nID);
		szSQL.Format(_T("%s"), m_transactionTbl.GetInsertSQL());
	}
	else
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE mt_transaction_id=%ld"), m_nID);

		szSQL = m_transactionTbl.GetUpdateSQL(_T("mt_transaction_id,mt_orderno,mt_orderdate,mt_approveddte,mt_doctype,mt_partner_id"));
		szSQL.AppendFormat(_T(" %s "), szWhere);

	}
//Notice(szSQL);
	int res = pMF->ExecSQL(szSQL);
	if(res > 0)
 	{ 

		
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);

		}
		else{
			GetDataToScreen();
			SetMode(VM_VIEW);
			m_wndAddLine.SetFocus();
		}
		return 1;
 	} 
 	return -1; 
}

int CBalanceImportDialog::OnCancelBalanceImportDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CBalanceImportDialog::OnBalanceImportDialogListLoadData(){
	return 0;
}



void CBalanceImportDialog::RecalcAmount(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT mt_status, mt_netamount, mt_taxamount, ") \
		_T("mt_disamount, mt_totalamount, mt_totalamount*mt_exchangerate as mt_exchangeamount ") \
		_T("FROM m_transaction ") \
		_T("WHERE mt_transaction_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		//rs.GetValue(_T("mt_netamount"), m_nNetAmount);
		//rs.GetValue(_T("mt_taxamount"), m_nTaxesAmount);
		//rs.GetValue(_T("mt_totalamount"), m_nTotalAmount);
		//rs.GetValue(_T("mt_exchangeamount"), m_nTotalExchangeAmount);
		rs.GetValue(_T("mt_status"), m_szStatus);

	}
	else
	{
		//m_nNetAmount = 0;
		//m_nTaxesAmount = 0;
		//m_nTotalAmount = 0;
		//m_nTotalExchangeAmount = 0;
		m_szStatus = _T("O");
	}
	UpdateData(FALSE);
}


BOOL CBalanceImportDialog::PreTranslateMessage(MSG* pMsg){
	if(pMsg->message == WM_KEYDOWN){
		if(pMsg->wParam == VK_F3){
			CPrintForms printer;
			printer.PrintPurchaseOrder(m_nID);
			return TRUE;
		}
		if(pMsg->wParam == VK_F2)
		{
			OnPostSelect();
			return TRUE;	
		}
		
	}


	return CGuiDialog::PreTranslateMessage(pMsg);
}

void CBalanceImportDialog::CreateTabViews(){
	m_wndLines.m_pWndOrder = this;
	m_wndLines.Create(&m_wndTab);
	m_wndLines.OnInitDialog();
	m_wndTab.Add(_T("Items"), &m_wndLines);
//	m_wndTab.Add(_T("Tax"), NULL);
//	m_wndTab.Add(_T("Basic Discounts"), NULL);

	
	m_wndTab.SetCurSel(0);
}
