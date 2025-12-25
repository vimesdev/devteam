#include "HMSBankPaymentInfoDialog.h"
#include "MainFrm.h"
/*static void _OnPOSChangeFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnPOSChange();
} */
/*static void _OnPOSSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnPOSSetfocus();} */ 
/*static void _OnPOSKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnPOSKillfocus();
} */
static int _OnPOSCheckValueFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnPOSCheckValue();
} 
static void _OnMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CHMSBankPaymentInfoDialog* )pWnd)->OnMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMethodSelendokFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnMethodSelendok();
}
/*static void _OnMethodSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnMethodKillfocus();
}*/
/*static void _OnMethodKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnMethodKillfocus();
}*/
static long _OnMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnMethodLoadData();
}
/*static void _OnMethodAddNewFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnMethodAddNew();
}*/
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnAccountNoChangeFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAccountNoChange();
} */
/*static void _OnAccountNoSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAccountNoSetfocus();} */ 
/*static void _OnAccountNoKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAccountNoKillfocus();
} */
static int _OnAccountNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnAccountNoCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnAccountNameChangeFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAccountNameChange();
} */
/*static void _OnAccountNameSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAccountNameSetfocus();} */ 
/*static void _OnAccountNameKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAccountNameKillfocus();
} */
static int _OnAccountNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnAccountNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnAddressCheckValue();
} 
static void _OnBankNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBankPaymentInfoDialog* )pWnd)->OnBankNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBankNameSelendokFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnBankNameSelendok();
}
/*static void _OnBankNameSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnBankNameKillfocus();
}*/
/*static void _OnBankNameKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnBankNameKillfocus();
}*/
static long _OnBankNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnBankNameLoadData();
}
/*static void _OnBankNameAddNewFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnBankNameAddNew();
}*/
/*static void _OnBrandChangeFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnBrandChange();
} */
/*static void _OnBrandSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnBrandSetfocus();} */ 
/*static void _OnBrandKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnBrandKillfocus();
} */
static int _OnBrandCheckValueFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnBrandCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSBankPaymentInfoDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSBankPaymentInfoDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSBankPaymentInfoDialog *pVw = (CHMSBankPaymentInfoDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSBankPaymentInfoDialog *pVw = (CHMSBankPaymentInfoDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSBankPaymentInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSBankPaymentInfoDialog*)pWnd)->OnAddHMSBankPaymentInfoDialog();
} 
static int _OnEditHMSBankPaymentInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSBankPaymentInfoDialog*)pWnd)->OnEditHMSBankPaymentInfoDialog();
} 
static int _OnDeleteHMSBankPaymentInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSBankPaymentInfoDialog*)pWnd)->OnDeleteHMSBankPaymentInfoDialog();
} 
static int _OnSaveHMSBankPaymentInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSBankPaymentInfoDialog*)pWnd)->OnSaveHMSBankPaymentInfoDialog();
} 
static int _OnCancelHMSBankPaymentInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSBankPaymentInfoDialog*)pWnd)->OnCancelHMSBankPaymentInfoDialog();
} 
CHMSBankPaymentInfoDialog::CHMSBankPaymentInfoDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 525;
	m_nDlgHeight = 325;
	SetDefaultValues();
	m_nInvoiceNo = 0;
	m_szStatus = _T("O");
	m_bDeposit = false;
	m_nAmount=0;
}
CHMSBankPaymentInfoDialog::~CHMSBankPaymentInfoDialog()
{
}
void CHMSBankPaymentInfoDialog::OnCreateComponents()
{
	m_wndBankPaymentInformation.Create(this, _T("Thông tin thanh toán ngân hàng"), 5, 5, 490, 300);
	m_wndPOSLabel.Create(this, _T("TID"), 10, 28, 130, 53);
	m_wndPOS.Create(this,135, 28, 255, 53); 
	m_wndMethodLabel.Create(this, _T("Hình thức TT"), 260, 29, 360, 54);
	m_wndMethod.Create(this,365, 29, 484, 54); 
	m_wndReceiptNoLabel.Create(this, _T("Số hóa đơn"), 10, 58, 130, 83);
	m_wndReceiptNo.Create(this,135, 58, 255, 83); 
	m_wndAmountLabel.Create(this, _T("Amount"), 260, 58, 360, 83);
	m_wndAmount.Create(this,365, 58, 484, 83); 
	m_wndAccountNoLabel.Create(this, _T("Ref No/Số tham chiếu"), 10, 88, 130, 113);
	m_wndAccountNo.Create(this,135, 88, 484, 113); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 118, 130, 143);
	m_wndCardNo.Create(this,135, 118, 484, 143); 
	m_wndAccountNameLabel.Create(this, _T("Name/Chủ thẻ"), 10, 148, 130, 173);
	m_wndAccountName.Create(this,135, 148, 484, 173); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 178, 130, 203);
	m_wndAddress.Create(this,135, 178, 484, 203); 
	m_wndBankNameLabel.Create(this, _T("Bank Name"), 10, 208, 130, 233);
	m_wndBankName.Create(this,135, 208, 484, 233); 
	m_wndBrandLabel.Create(this, _T("Brand"), 10, 238, 130, 263);
	m_wndBrand.Create(this,135, 238, 484, 263); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 268, 130, 293);
	m_wndNote.Create(this,135, 268, 484, 293); 
	m_wndOK.Create(this, _T("&OK"), 325, 305, 405, 330);
	m_wndCancel.Create(this, _T("&Cancel"), 410, 305, 490, 330);

}
void CHMSBankPaymentInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPOS.ModifyStyle(WS_TABSTOP, 0);
	m_wndPOS.SetCheckValue(true);
	m_wndPOS.SetLimitText(15);
	
	m_wndReceiptNo.SetLimitText(15);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetReadOnly(true);
	m_wndAccountNo.SetLimitText(20);
	m_wndAccountNo.SetCheckValue(true);
	m_wndCardNo.SetLimitText(20);
	//m_wndCardNo.SetCheckValue(true);
	m_wndAccountName.SetLimitText(65);
	m_wndAccountName.SetCheckValue(true);
	m_wndAccountName.SetInitCap(1);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(false);
	m_wndBankName.SetCheckValue(true);
	m_wndBankName.LimitText(254);
	m_wndBrand.SetLimitText(254);
	//m_wndBrand.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(false);

	m_wndMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndBankName.InsertColumn(0, _T("ID"), CFMT_LEFT, 0);
	m_wndBankName.InsertColumn(1, _T("Code"), CFMT_LEFT, 120);
	m_wndBankName.InsertColumn(2, _T("Name"), CFMT_LEFT, 400);
	m_wndBankName.Format(3, 2);

	m_wndAmount.SetTextColor(RGB(0, 0, 255));
	m_wndAmount.SetCurrencyFormat(true);

}
void CHMSBankPaymentInfoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPOS.SetEvent(WE_CHANGE, _OnPOSChangeFnc);
	//m_wndPOS.SetEvent(WE_SETFOCUS, _OnPOSSetfocusFnc);
	//m_wndPOS.SetEvent(WE_KILLFOCUS, _OnPOSKillfocusFnc);
	m_wndPOS.SetEvent(WE_CHECKVALUE, _OnPOSCheckValueFnc);
	m_wndMethod.SetEvent(WE_SELENDOK, _OnMethodSelendokFnc);
	//m_wndMethod.SetEvent(WE_SETFOCUS, _OnMethodSetfocusFnc);
	//m_wndMethod.SetEvent(WE_KILLFOCUS, _OnMethodKillfocusFnc);
	m_wndMethod.SetEvent(WE_SELCHANGE, _OnMethodSelectChangeFnc);
	m_wndMethod.SetEvent(WE_LOADDATA, _OnMethodLoadDataFnc);
	//m_wndMethod.SetEvent(WE_ADDNEW, _OnMethodAddNewFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndAccountNo.SetEvent(WE_CHANGE, _OnAccountNoChangeFnc);
	//m_wndAccountNo.SetEvent(WE_SETFOCUS, _OnAccountNoSetfocusFnc);
	//m_wndAccountNo.SetEvent(WE_KILLFOCUS, _OnAccountNoKillfocusFnc);
	m_wndAccountNo.SetEvent(WE_CHECKVALUE, _OnAccountNoCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndAccountName.SetEvent(WE_CHANGE, _OnAccountNameChangeFnc);
	//m_wndAccountName.SetEvent(WE_SETFOCUS, _OnAccountNameSetfocusFnc);
	//m_wndAccountName.SetEvent(WE_KILLFOCUS, _OnAccountNameKillfocusFnc);
	m_wndAccountName.SetEvent(WE_CHECKVALUE, _OnAccountNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndBankName.SetEvent(WE_SELENDOK, _OnBankNameSelendokFnc);
	//m_wndBankName.SetEvent(WE_SETFOCUS, _OnBankNameSetfocusFnc);
	//m_wndBankName.SetEvent(WE_KILLFOCUS, _OnBankNameKillfocusFnc);
	m_wndBankName.SetEvent(WE_SELCHANGE, _OnBankNameSelectChangeFnc);
	m_wndBankName.SetEvent(WE_LOADDATA, _OnBankNameLoadDataFnc);
	//m_wndBankName.SetEvent(WE_ADDNEW, _OnBankNameAddNewFnc);
	//m_wndBrand.SetEvent(WE_CHANGE, _OnBrandChangeFnc);
	//m_wndBrand.SetEvent(WE_SETFOCUS, _OnBrandSetfocusFnc);
	//m_wndBrand.SetEvent(WE_KILLFOCUS, _OnBrandKillfocusFnc);
	m_wndBrand.SetEvent(WE_CHECKVALUE, _OnBrandCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	int nMode = GetMode();
	m_szMethodKey = m_szPaymentMethod;
	//if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	
	if(m_szStatus != _T("O"))
		nMode = VM_VIEW;

	SetMode(nMode);
	if(!m_bDeposit)
	{
	//	m_wndMethod.EnableWindow(FALSE);
	}

}
void CHMSBankPaymentInfoDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndPOS.GetDlgCtrlID(), m_szPOSNo);
	DDX_TextEx(pDX, m_wndMethod.GetDlgCtrlID(), m_szMethodKey);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_szReceiptNo);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndAccountNo.GetDlgCtrlID(), m_szAccountNo);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndAccountName.GetDlgCtrlID(), m_szAccountName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_TextEx(pDX, m_wndBankName.GetDlgCtrlID(), m_szBankNameKey);
	DDX_Text(pDX, m_wndBrand.GetDlgCtrlID(), m_szBrand);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSBankPaymentInfoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("POS")] =  m_szPOSNo;
	m_jData[_T("Method")] =  m_szMethodKey;
	m_jData[_T("ReceiptNo")] =  m_szReceiptNo;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("AccountNo")] =  m_szAccountNo;
	m_jData[_T("CardNo")] =  m_szCardNo;
	m_jData[_T("AccountName")] =  m_szAccountName;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("BankName")] =  m_szBankNameKey;
	m_jData[_T("Brand")] =  m_szBrand;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("POS")].GetValue(m_szPOSNo);
	m_jData[_T("Method")].GetValue(m_szMethodKey);
	m_jData[_T("ReceiptNo")].GetValue(m_szReceiptNo);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("AccountNo")].GetValue(m_szAccountNo);
	m_jData[_T("CardNo")].GetValue(m_szCardNo);
	m_jData[_T("AccountName")].GetValue(m_szAccountName);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("BankName")].GetValue(m_szBankNameKey);
	m_jData[_T("Brand")].GetValue(m_szBrand);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSBankPaymentInfoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	SetDefaultValues();
	if(m_nInvoiceNo <= 0)
	{
		m_szPOSNo = AfxGetApp()->GetProfileString(_T("POS"), pMF->GetCurrentUser(), _T("POS001"));
		return;
	}

	szSQL.Format(_T("SELECT * FROM hms_fee_invoice_bank WHERE hfib_docno=%ld and hfib_invoiceno=%ld and hfib_status<>'C' "), pMF->m_nDocumentNo, m_nInvoiceNo);
	//_msg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfib_posno"), m_szPOSNo);
		rs.GetValue(_T("hfib_receiptno"), m_szReceiptNo);
		rs.GetValue(_T("hfib_receipt_date"), m_szReceiptDate);
		rs.GetValue(_T("hfib_accountno"), m_szAccountNo);
		rs.GetValue(_T("hfib_account_name"), m_szAccountName);
		rs.GetValue(_T("hfib_address"), m_szAddress);
		rs.GetValue(_T("hfib_cardno"), m_szCardNo);
		rs.GetValue(_T("hfib_bank_id"), m_szBankNameKey);
		rs.GetValue(_T("hfib_bank_name"), m_szBankName);
		rs.GetValue(_T("hfib_bank_brand"), m_szBrand);
		rs.GetValue(_T("hfib_amount"), m_nAmount);
		rs.GetValue(_T("hfib_note"), m_szNote);
		
		rs.GetValue(_T("hfib_status"), m_szStatus);
		
		//rs.GetValue(_T("hfib_payment_method"), m_szPaymentMethod);
	}
	else
	{
		m_szPOSNo = AfxGetApp()->GetProfileString(_T("POS"), pMF->GetCurrentUser(), _T("POS001"));
	}

}
void CHMSBankPaymentInfoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBankPaymentInfoDialog::SetDefaultValues(){

	//m_szPOSNo.Empty();
	m_szMethodKey=m_szPaymentMethod;
	m_szReceiptNo.Empty();
	
	m_szAccountNo.Empty();
	m_szCardNo.Empty();
	m_szAccountName.Empty();
	m_szAddress.Empty();
	m_szBankNameKey.Empty();
	m_szBrand.Empty();
	m_szNote.Empty();

}
int CHMSBankPaymentInfoDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			m_wndOK.EnableWindow(TRUE);
 			SetDefaultValues();
			m_wndAccountNo.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
			m_wndOK.EnableWindow(TRUE);
/*
			if(m_szMethodKey == _T("ATM") || m_szMethodKey == _T("TTD"))
			{
				m_wndCardNo.EnableWindow(TRUE);
				//m_wndAccountNo.SetCheckValue(false);
				m_wndCardNo.SetCheckValue(true);
			}
			else
			{
				//m_wndCardNo.EnableWindow(FALSE);
				//m_wndCardNo.SetCheckValue(false);
				m_wndAccountNo.SetCheckValue(true);
			}
*/
			m_wndAccountNo.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			m_wndOK.EnableWindow(TRUE);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		
		m_wndCancel.EnableWindow(TRUE);
		m_wndReceiptNo.EnableWindow(false);	
		m_wndCardNo.EnableWindow(false);
		m_wndAddress.EnableWindow(false);
		m_wndBankName.EnableWindow(false);
		m_wndBrand.EnableWindow(false);

 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSBankPaymentInfoDialog::OnPOSChange(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnPOSSetfocus(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnPOSKillfocus(){
	
} */
int CHMSBankPaymentInfoDialog::OnPOSCheckValue(){
	return 0;
} 
void CHMSBankPaymentInfoDialog::OnMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	

} 
void CHMSBankPaymentInfoDialog::OnMethodSelendok(){
	UpdateData(TRUE);
	EnableControls(TRUE);
	/*
	if(m_szMethodKey == _T("ATM") || m_szMethodKey == _T("TTD"))
	{
		m_wndCardNo.EnableWindow(TRUE);
		m_wndAccountNo.SetCheckValue(false);
		m_wndCardNo.SetCheckValue(true);
	}
	else if(m_szMethodKey == _T("CK"))
	{
		m_wndCardNo.EnableWindow(FALSE);
		m_wndCardNo.SetCheckValue(false);
		m_wndAccountNo.SetCheckValue(true);
		m_szCardNo.Empty();
	} 
	else
	{
		EnableControls(FALSE);
		m_wndMethod.EnableWindow(true);
	}
	*/
	UpdateData(FALSE);
}
/*void CHMSBankPaymentInfoDialog::OnMethodSetfocus(){
	
}*/
/*void CHMSBankPaymentInfoDialog::OnMethodKillfocus(){
	
}*/
long CHMSBankPaymentInfoDialog::OnMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMethod.IsSearchKey() && !m_szMethodKey.IsEmpty()){
		szWhere.Format(_T(" and adpm_payment_method_id='%s' "), m_szMethodKey);
	};
	
	if(pMF->CheckPermission(_T("40.09")))
	{
		szWhere.AppendFormat(_T(" or adpm_org_id IN ('ALL') "));
	}

	m_wndMethod.DeleteAllItems(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT adpm_payment_method_id as id, adpm_description as name FROM ad_payment_method WHERE (adpm_org_id='FM' %s) and adpm_isactive='Y' %s ORDER BY adpm_line "), szWhere, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSBankPaymentInfoDialog::OnMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSBankPaymentInfoDialog::OnReceiptNoChange(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSBankPaymentInfoDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSBankPaymentInfoDialog::OnAmountChange(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnAmountSetfocus(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnAmountKillfocus(){
	
} */
int CHMSBankPaymentInfoDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CHMSBankPaymentInfoDialog::OnAccountNoChange(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnAccountNoSetfocus(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnAccountNoKillfocus(){
	
} */
int CHMSBankPaymentInfoDialog::OnAccountNoCheckValue(){
	return 0;
} 
/*void CHMSBankPaymentInfoDialog::OnCardNoChange(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnCardNoKillfocus(){
	
} */
int CHMSBankPaymentInfoDialog::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSBankPaymentInfoDialog::OnAccountNameChange(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnAccountNameSetfocus(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnAccountNameKillfocus(){
	
} */
int CHMSBankPaymentInfoDialog::OnAccountNameCheckValue(){
	return 0;
} 
/*void CHMSBankPaymentInfoDialog::OnAddressChange(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnAddressSetfocus(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnAddressKillfocus(){
	
} */
int CHMSBankPaymentInfoDialog::OnAddressCheckValue(){
	return 0;
} 
void CHMSBankPaymentInfoDialog::OnBankNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBankPaymentInfoDialog::OnBankNameSelendok(){
	 
}
/*void CHMSBankPaymentInfoDialog::OnBankNameSetfocus(){
	
}*/
/*void CHMSBankPaymentInfoDialog::OnBankNameKillfocus(){
	
}*/
long CHMSBankPaymentInfoDialog::OnBankNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBankName.IsSearchKey() && !m_szBankNameKey.IsEmpty()){
		 szWhere.Format(_T(" and adb_bank_id='%s' "), m_szBankNameKey);
	};
	m_wndBankName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adb_bank_id as id, adb_enname as code, adb_name as name FROM ad_bank WHERE adb_isactive='Y' %s ORDER BY id "), szWhere);
_tprintf(_T("\r\n%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBankName.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("code")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;


}
/*void CHMSBankPaymentInfoDialog::OnBankNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSBankPaymentInfoDialog::OnBrandChange(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnBrandSetfocus(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnBrandKillfocus(){
	
} */
int CHMSBankPaymentInfoDialog::OnBrandCheckValue(){
	return 0;
} 
/*void CHMSBankPaymentInfoDialog::OnNoteChange(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnNoteSetfocus(){
	
} */
/*void CHMSBankPaymentInfoDialog::OnNoteKillfocus(){
	
} */
int CHMSBankPaymentInfoDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSBankPaymentInfoDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsValidateData())
	{
		return;
	}
	m_szBankName = m_wndBankName.GetCurrent(2);
	CString szcash_id_check = _T("and nvl(hfe_cash_id,0)=0");

	if (!pMF->CheckPermission(_T("40.01")))
	{
		szcash_id_check = _T("and nvl(hfe_cash_id,0)=0");	
	}
	else
		szcash_id_check = _T("");	

	if(m_nInvoiceNo > 0)
	{
		CString szSQL;

		CDbfMap tbl;

		if(m_bDeposit)
		{
			szSQL.Format(_T("UPDATE hms_fee_deposit SET hfe_payment_method='%s' WHERE hfe_docno=%ld and hfe_invoiceno=%ld %s and hfe_locked='N' and hfe_posted='N' "),
				m_szMethodKey, pMF->m_nDocumentNo, m_nInvoiceNo, szcash_id_check);
			int ret = pMF->ExecSQL(szSQL);
			if(ret <= 0)
			{
				ShowMessageBox(_T("Không cập nhật được thông tin thanh toán"));
				return;
			}
			else
			{
				szSQL.Format(_T(" INSERT INTO hms_fee_invoice_bank_log VALUES(%ld, %ld, '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), '%s') "), pMF->m_nDocumentNo,m_nInvoiceNo, pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->GetLocalIP());
				pMF->ExecSQL(szSQL);
			}
		}
		else
		{
			szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_payment_method='%s' WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_locked='N' and hfe_posted='N' "),
				m_szMethodKey, pMF->m_nDocumentNo, m_nInvoiceNo, szcash_id_check);
			int ret = pMF->ExecSQL(szSQL);
			if(ret <= 0)
			{
				ShowMessageBox(_T("Không cập nhật được thông tin thanh toán"));
				return;
			}			
			else
			{
				szSQL.Format(_T(" INSERT INTO hms_fee_invoice_bank_log VALUES(%ld, %ld, '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), '%s') "), pMF->m_nDocumentNo,m_nInvoiceNo, pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->GetLocalIP());
				pMF->ExecSQL(szSQL);
			}

		}
		if(m_szMethodKey != _T("ATM") && m_szMethodKey != _T("TTD") && m_szMethodKey  != _T("CK"))
		{
			szSQL.Format(_T("DELETE FROM hms_fee_invoice_bank WHERE hfib_docno=%ld and hfib_invoiceno=%ld and hfib_status='O' "),
					pMF->m_nDocumentNo, m_nInvoiceNo);
			int ret = pMF->ExecSQL(szSQL);
			if(ret <= 0)
			{
				_tprintf(_T("Cannot delete invoice bank"));
				
			}
			return;
		}

		
		tbl.AddField(_T("user_id"), dfText, 15);
		tbl.AddField(_T("docno"), dfLong);
		tbl.AddField(_T("invoiceno"), dfLong);
		tbl.AddField(_T("payment_method"), dfText, 3);
		tbl.AddField(_T("pos_no"), dfText, 20);
		tbl.AddField(_T("receipt_no"), dfText, 15);
		tbl.AddField(_T("receipt_date"), dfDateTime);
		tbl.AddField(_T("account_no"), dfText, 20);
		tbl.AddField(_T("account_name"), dfText, 65);
		tbl.AddField(_T("account_address"), dfText, 254);
		tbl.AddField(_T("card_no"), dfText, 20);
		tbl.AddField(_T("bank_id"), dfText, 35);
		tbl.AddField(_T("bank_name"), dfText, 254);
		tbl.AddField(_T("bank_brand"), dfText, 254);
		tbl.AddField(_T("amount"), dfDouble);
		tbl.AddField(_T("note"), dfText, 254);

		tbl.SetValue(_T("user_id"), pMF->GetCurrentUser());
		tbl.SetValue(_T("docno"), pMF->m_nDocumentNo);
		tbl.SetValue(_T("invoiceno"), m_nInvoiceNo);
		tbl.SetValue(_T("pos_no"), m_szPOSNo);
		tbl.SetValue(_T("payment_method"), m_szMethodKey);
		tbl.SetValue(_T("receipt_no"), m_szReceiptNo);
		tbl.SetValue(_T("receipt_date"), m_szReceiptDate);
		tbl.SetValue(_T("account_no"), m_szAccountNo);
		tbl.SetValue(_T("account_name"), m_szAccountName);
		tbl.SetValue(_T("account_address"), m_szAddress);
		tbl.SetValue(_T("card_no"), m_szCardNo);
		tbl.SetValue(_T("bank_id"), m_szBankNameKey);
		tbl.SetValue(_T("bank_name"), m_szBankName);
		tbl.SetValue(_T("bank_brand"), m_szBrand);
		tbl.SetValue(_T("amount"), m_nAmount);
		tbl.SetValue(_T("note"), m_szNote);

		
		szSQL.Format(_T("HMS_FEE_INVOICE_BANK_CREATE(%s)"), tbl.FormatSQL());
_tprintf(_T("%s"), szSQL);
		int res = str2int(pMF->ExecDML(szSQL));
		if(res <= 0)
		{
			ShowMessageBox(_T("Không lưu được thông tin thẻ tín dụng. Vui lòng kiểm tra lại"));
			return;
		}
		AfxGetApp()->WriteProfileString(_T("POS"), pMF->GetCurrentUser(), m_szPOSNo);

		
	}

	CGuiDialog::OnOK();
} 
void CHMSBankPaymentInfoDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!IsValidateData())
	{
		m_nAmount = 0;
	}
	CGuiDialog::OnCancel();
} 
int CHMSBankPaymentInfoDialog::OnAddHMSBankPaymentInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSBankPaymentInfoDialog::OnEditHMSBankPaymentInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBankPaymentInfoDialog::OnDeleteHMSBankPaymentInfoDialog(){
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
 		OnCancelHMSBankPaymentInfoDialog();
 	}
	return 0;
}
int CHMSBankPaymentInfoDialog::OnSaveHMSBankPaymentInfoDialog(){
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
 		//OnHMSBankPaymentInfoDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSBankPaymentInfoDialog::OnCancelHMSBankPaymentInfoDialog(){
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
int CHMSBankPaymentInfoDialog::OnHMSBankPaymentInfoDialogListLoadData(){
	return 0;
}
