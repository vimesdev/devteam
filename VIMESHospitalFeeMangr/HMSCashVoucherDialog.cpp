#include "HMSCashVoucherDialog.h"
#include "MainFrm.h"
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashVoucherDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashVoucherDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashVoucherDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashVoucherDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnVoucherTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCashVoucherDialog* )pWnd)->OnVoucherTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVoucherTypeSelendokFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnVoucherTypeSelendok();
}
/*static void _OnVoucherTypeSetfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnVoucherTypeKillfocus();
}*/
/*static void _OnVoucherTypeKillfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnVoucherTypeKillfocus();
}*/
static long _OnVoucherTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSCashVoucherDialog *)pWnd)->OnVoucherTypeLoadData();
}
/*static void _OnVoucherTypeAddNewFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnVoucherTypeAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSCashVoucherDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashVoucherDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSCashVoucherDialog*)pWnd)->OnPrintReceiptSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSCashVoucherDialog *pVw = (CHMSCashVoucherDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCashVoucherDialog *pVw = (CHMSCashVoucherDialog *)pWnd;
	pVw->OnCancelSelect();
}

static void _OnInputDescSelectFnc(CWnd *pWnd){
	 ((CHMSCashVoucherDialog*)pWnd)->OnInputDescSelect();
}

static int _OnAddHMSCashVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSCashVoucherDialog*)pWnd)->OnAddHMSCashVoucherDialog();
} 
static int _OnEditHMSCashVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSCashVoucherDialog*)pWnd)->OnEditHMSCashVoucherDialog();
} 
static int _OnDeleteHMSCashVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSCashVoucherDialog*)pWnd)->OnDeleteHMSCashVoucherDialog();
} 
static int _OnSaveHMSCashVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSCashVoucherDialog*)pWnd)->OnSaveHMSCashVoucherDialog();
} 
static int _OnCancelHMSCashVoucherDialogFnc(CWnd *pWnd){
	 return ((CHMSCashVoucherDialog*)pWnd)->OnCancelHMSCashVoucherDialog();
} 
CHMSCashVoucherDialog::CHMSCashVoucherDialog(CWnd *pParent, long nDocumentNo, int nMode):
	CGuiDialog(pParent)
{
	CGuiDialog::SetMode(nMode);
	
	m_nDlgWidth = 465;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_szType = _T("O");
	m_nAmount = 0;
	m_nDocumentNo = nDocumentNo;
}
CHMSCashVoucherDialog::~CHMSCashVoucherDialog(){
}
void CHMSCashVoucherDialog::OnCreateComponents()
{
	m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 455, 120);
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 30, 110, 55);
	m_wndSerialNo.Create(this,115, 30, 240, 55); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 245, 30, 345, 55);
	m_wndReceiptNo.Create(this,350, 30, 450, 55); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 60, 110, 85);
	m_wndReceiptDate.Create(this,115, 60, 240, 85); 
	m_wndAmountLabel.Create(this, _T("Amount"), 245, 60, 345, 85);
	m_wndAmount.Create(this,350, 60, 450, 85); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 90, 110, 115);
	m_wndDescription.Create(this,115, 90, 450, 115); 
	m_wndPrintReceipt.Create(this, _T("&Print Receipt"), 5, 125, 105, 150);
	m_wndOK.Create(this, _T("&Save"), 280, 125, 365, 150);
	m_wndCancel.Create(this, _T("&Close"), 370, 125, 455, 150);

	m_wndVoucherTypeLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndVoucherTypeLabel.ShowWindow(SW_HIDE);
	m_wndVoucherTypeLabel.EnableWindow(FALSE);
	m_wndVoucherType.Create(this, 0, 0, 0, 0);
	m_wndVoucherType.ShowWindow(SW_HIDE);
	m_wndVoucherType.EnableWindow(FALSE);
	m_wndInputDesc.Create(this, _T(""), 0, 0, 0, 0);
	m_wndInputDesc.ShowWindow(SW_HIDE);
	m_wndInputDesc.EnableWindow(FALSE);
}
void CHMSCashVoucherDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndSerialNo.SetCheckValue(true);
	m_wndSerialNo.LimitText(35);
	m_wndSerialNo.SetReadOnly(true);
	//m_wndReceiptNo.SetCheckValue(true);
	m_wndReceiptNo.SetReadOnly(true);
	m_wndReceiptDate.SetReadOnly(true);
	m_wndAmount.SetLimitText(10);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetCurrencyFormat(true);
//	m_wndDescription.SetReadOnly(true);
	m_wndDescription.LimitText(254);
	m_wndPrintReceipt.ModifyStyle(WS_TABSTOP, 0);

	/*m_wndVoucherType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVoucherType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndVoucherType.SetCheckValue(true);*/
	
	m_hms_fee_invoiceTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_fee_invoiceTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_fee_invoiceTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_fee_invoiceTbl.AddField(_T("hfe_serialno"), dfText, 15); 
	m_hms_fee_invoiceTbl.AddField(_T("hfe_receiptno"), dfLong); 
	m_hms_fee_invoiceTbl.AddField(_T("hfe_date"), dfDateTime); 
	m_hms_fee_invoiceTbl.AddField(_T("hfe_staff"), dfText, 15); 
	m_hms_fee_invoiceTbl.AddField(_T("hfe_amount"), dfDouble); 
	m_hms_fee_invoiceTbl.AddField(_T("hfe_desc"), dfText, 128); 
	m_hms_fee_invoiceTbl.AddField(_T("hfe_moduleid"), dfText, 3); 
}
void CHMSCashVoucherDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	TranslateString(_T("RECEIPT VOUCHER"), tmpStr);
	SetWindowText(tmpStr);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndVoucherType.SetEvent(WE_SELENDOK, _OnVoucherTypeSelendokFnc);
	////m_wndVoucherType.SetEvent(WE_SETFOCUS, _OnVoucherTypeSetfocusFnc);
	////m_wndVoucherType.SetEvent(WE_KILLFOCUS, _OnVoucherTypeKillfocusFnc);
	//m_wndVoucherType.SetEvent(WE_SELCHANGE, _OnVoucherTypeSelectChangeFnc);
	//m_wndVoucherType.SetEvent(WE_LOADDATA, _OnVoucherTypeLoadDataFnc);
	////m_wndVoucherType.SetEvent(WE_ADDNEW, _OnVoucherTypeAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
//	m_wndInputDesc.SetEvent(WE_CLICK, _OnInputDescSelectFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetWindowFont(&m_wndAmount, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndAmount.SetTextColor(RGB(0, 0, 255));
	
	int nMode = GetMode();

	if (nMode == VM_EDIT || nMode == VM_VIEW)
	{
		GetDataToScreen();
		SetMode(nMode);
	}
	else
	{
		pMF->GetSerialInformation();
		m_szSerialNo = _T("PC");
		m_nReceiptNo = pMF->m_nReceiptNo;
		m_szReceiptDate = pMF->m_szRecvDate;
		SetMode(VM_ADD);
		if (pMF->IsAutoSerialNo())
		{
			m_wndSerialNo.EnableWindow(FALSE);
			m_wndReceiptNo.EnableWindow(FALSE);
				
		}
	}
	
	

}
void CHMSCashVoucherDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
//	DDX_TextEx(pDX, m_wndVoucherType.GetDlgCtrlID(), m_szVoucherTypeKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndPrintReceipt.GetDlgCtrlID(), m_bPrintReceipt);

}
void CHMSCashVoucherDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	
	if (m_nInvoiceNo <= 0)
		return;

	szSQL.Format(_T("SELECT * FROM hms_fee_invoice " ) \
		         _T("WHERE hfe_invoiceno=%ld "), m_nInvoiceNo);

	rs.ExecSQL(szSQL);

	SetDefaultValues();

	if (!rs.IsEOF())
	{
		CString szSerialNo;
		bool bCheck = false;

		rs.GetValue(_T("hfe_serialno"), szSerialNo);
		rs.GetValue(_T("hfe_date"), m_szReceiptDate);
		rs.GetValue(_T("hfe_receiptno"), m_nReceiptNo);
		rs.GetValue(_T("hfe_amount"), m_nAmount);
		rs.GetValue(_T("hfe_desc"), tmpStr);
		m_szDescription = tmpStr;
		rs.GetValue(_T("hfe_type"), m_szType);
	}
}
void CHMSCashVoucherDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_hms_fee_invoiceTbl.SetValue(_T("hfe_type"), m_szType);
	m_hms_fee_invoiceTbl.SetValue(_T("hfe_deptid"), pMF->m_szReceiptDeptID);
	m_hms_fee_invoiceTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);	
	m_hms_fee_invoiceTbl.SetValue(_T("hfe_serialno"), m_szSerialNo);
	m_hms_fee_invoiceTbl.SetValue(_T("hfe_receiptno"), m_nReceiptNo);
	m_hms_fee_invoiceTbl.SetValue(_T("hfe_staff"), pMF->GetCurrentUser());

	CString tmpStr, szTemp;
	tmpStr.Format(_T("%s %s"), m_szReceiptDate.Left(10), pMF->GetSysTime());
	m_hms_fee_invoiceTbl.SetValue(_T("hfe_date"), tmpStr);

	m_hms_fee_invoiceTbl.SetValue(_T("hfe_desc"), m_szDescription);

	m_hms_fee_invoiceTbl.SetValue(_T("hfe_amount"), m_nAmount);
	m_hms_fee_invoiceTbl.SetValue(_T("hfe_moduleid"), pMF->GetModuleID());


}
void CHMSCashVoucherDialog::SetDefaultValues()
{

	m_nReceiptNo=0;
//	m_szReceiptDate.Empty();
	m_nAmount=0;
//	m_szDescription.Empty();
	m_bPrintReceipt=TRUE;
	m_bInputDesc=FALSE;
	m_szSerialNo = _T("PT");

}
int CHMSCashVoucherDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
		case VM_ADD:
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndAmount.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndOK.SetWindowText(_T("&Print"));
			m_wndOK.EnableWindow(true);
			m_wndInputDesc.EnableWindow(FALSE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1);
			m_wndInputDesc.EnableWindow(FALSE);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues(); 
 			break; 
 		};

		if (m_nAmount > 0)
		{
			m_wndAmount.EnableWindow(false);
			m_wndDescription.EnableWindow(false);
			m_wndReceiptDate.EnableWindow(false);
		}
	//	if(m_szCategory == _T("D"))
	//		m_bPrintReceipt = FALSE;
 		UpdateData(FALSE); 
 		return nOldMode; 
}


int CHMSCashVoucherDialog::OnSerialNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(m_wndSerialNo.GetWindowTextLength() == 0){
		m_szSerialNo = pMF->GetCurrentUser();
		m_wndReceiptNo.EnableWindow(FALSE);
		UpdateData(false);
	}
	else
		m_wndReceiptNo.EnableWindow(FALSE);
	return 0;
} 
/*void CHMSCashVoucherDialog::OnReceiptNoChange(){
	
} */
/*void CHMSCashVoucherDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSCashVoucherDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSCashVoucherDialog::OnReceiptNoCheckValue(){
	UpdateData(true);
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	if(GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_refund " ) \
			_T("WHERE hfe_docno<>%ld and trunc_date(hfe_date)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and hfe_serialno='%s' and hfe_receiptno=%ld"), 
			m_nDocumentNo, m_szReceiptDate, m_szSerialNo,  m_nReceiptNo);

		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			m_wndReceiptNo.SetToolTipMessage(_T("Invoice No is existing in the database."));
			return -1;
		}
	}
	else
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_refund " ) \
			_T("WHERE trunc_date(hfe_date)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and hfe_serialno='%s' and hfe_receiptno=%ld"), 
			 m_szReceiptDate, m_szSerialNo,  m_nReceiptNo);

		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			m_wndReceiptNo.SetToolTipMessage(_T("Invoice No is existing in the database."));
				return -1;
		}
	}
	
	return 0;
} 
/*void CHMSCashVoucherDialog::OnReceiptDateChange(){
	
} */
/*void CHMSCashVoucherDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSCashVoucherDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSCashVoucherDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSCashVoucherDialog::OnAmountChange(){
	
} */
/*void CHMSCashVoucherDialog::OnAmountSetfocus(){
	
} */
/*void CHMSCashVoucherDialog::OnAmountKillfocus(){
	
} */
int CHMSCashVoucherDialog::OnAmountCheckValue(){
	UpdateData(true);
	if(m_nAmount <= 0)
		return -1;
	return 0;
} 
void CHMSCashVoucherDialog::OnVoucherTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashVoucherDialog::OnVoucherTypeSelendok(){
	UpdateData(TRUE);
	//if(m_szDescription.IsEmpty())
	{
		m_szDescription = m_wndVoucherType.GetCurrent(1);
	}
	UpdateData(FALSE);
}
/*void CHMSCashVoucherDialog::OnVoucherTypeSetfocus(){
	
}*/
/*void CHMSCashVoucherDialog::OnVoucherTypeKillfocus(){
	
}*/
long CHMSCashVoucherDialog::OnVoucherTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndVoucherType, _T("CA_PAYMENT_REASON"), m_szVoucherTypeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVoucherType.IsSearchKey() && !m_szVoucherTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szVoucherTypeKey
};
	m_wndVoucherType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVoucherType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCashVoucherDialog::OnVoucherTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCashVoucherDialog::OnDescriptionChange(){
	
} */
/*void CHMSCashVoucherDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSCashVoucherDialog::OnDescriptionKillfocus(){
	
} */
int CHMSCashVoucherDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CHMSCashVoucherDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSCashVoucherDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCashVoucherDialog();	

} 
void CHMSCashVoucherDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}

void CHMSCashVoucherDialog::OnInputDescSelect()
{
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

	if (m_bInputDesc)
	{
		m_wndDescription.EnableWindow(TRUE);
		m_wndDescription.SetCheckValue(true);
		m_szDescription.Empty();
	}
	else
	{
		m_wndDescription.EnableWindow(FALSE);
		m_wndDescription.SetCheckValue(false);
		m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), _T("6"));
		if(m_szType == _T("S"))
		{
			m_szDescription.Format(_T("\x43\x1EA5p l\x1B0\x1A1ng \x63ho \x62\x1ED9 \x111\x1ED9i"));
		}

	}

	UpdateData(FALSE);
}

int CHMSCashVoucherDialog::OnAddHMSCashVoucherDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSCashVoucherDialog::OnEditHMSCashVoucherDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCashVoucherDialog::OnDeleteHMSCashVoucherDialog(){
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
 		OnCancelHMSCashVoucherDialog(); 
 	}
	return 0;
}
int CHMSCashVoucherDialog::OnSaveHMSCashVoucherDialog(){
	/*if(GetMode() != VM_ADD) 
 		return -1; */

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL, szSQL2; 

	if (!IsValidateData()) 
	{
 		return -1; 
	}
	
	if (GetMode() == VM_ADD)
	{	
		szSQL.Format(_T("HMS_FEE_INVOICE_CREATE_OV2(%s) "), m_hms_fee_invoiceTbl.FormatSQL());
 	    m_nInvoiceNo = str2long(pMF->ExecDML(szSQL));			
	}

 	if (m_nInvoiceNo > 0) 
 	{ 
		/*szSQL.Format(_T("UPDATE hms_doc SET hfe_deposit_amount=hfe_deposit_amount-%f WHERE hd_docno=%ld"),
			         m_nCostDiscount, m_nDocumentNo);
		pMF->ExecSQL(szSQL);*/

		if (m_bPrintReceipt)
		{			
			pMF->PrintReceipt(m_nInvoiceNo);
		}
		CGuiDialog::OnOK();
		return 1;
	}

	return 0;
}
int CHMSCashVoucherDialog::OnCancelHMSCashVoucherDialog(){
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
int CHMSCashVoucherDialog::OnHMSCashVoucherDialogListLoadData(){
	return 0;
}
