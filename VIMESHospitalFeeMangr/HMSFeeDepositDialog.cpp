#include "HMSFeeDepositDialog.h"
#include "MainFrm.h"
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDepositDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDepositDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDepositDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDepositDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDepositDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDepositDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSFeeDepositDialog*)pWnd)->OnPrintReceiptSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSFeeDepositDialog *pVw = (CHMSFeeDepositDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFeeDepositDialog *pVw = (CHMSFeeDepositDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSFeeDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDepositDialog*)pWnd)->OnAddHMSFeeDepositDialog();
} 
static int _OnEditHMSFeeDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDepositDialog*)pWnd)->OnEditHMSFeeDepositDialog();
} 
static int _OnDeleteHMSFeeDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDepositDialog*)pWnd)->OnDeleteHMSFeeDepositDialog();
} 
static int _OnSaveHMSFeeDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDepositDialog*)pWnd)->OnSaveHMSFeeDepositDialog();
} 
static int _OnCancelHMSFeeDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDepositDialog*)pWnd)->OnCancelHMSFeeDepositDialog();
} 
CHMSFeeDepositDialog::CHMSFeeDepositDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 405;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_szType = _T("A");
	
	
}
CHMSFeeDepositDialog::~CHMSFeeDepositDialog(){
}
void CHMSFeeDepositDialog::OnCreateComponents(){
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
	m_wndPrintReceipt.Create(this, _T("&Print Receipt"), 10, 125, 110, 150);
	m_wndOK.Create(this, _T("&Save"), 275, 125, 360, 150);
	m_wndCancel.Create(this, _T("&Close"), 365, 125, 450, 150);

}
void CHMSFeeDepositDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndSerialNo.SetCheckValue(true);
	m_wndSerialNo.LimitText(35);
	m_wndSerialNo.SetReadOnly(true);
//	m_wndReceiptNo.SetCheckValue(true);
	m_wndReceiptNo.SetReadOnly(true);
	m_wndReceiptDate.SetReadOnly(true);

	m_wndAmount.SetLimitText(10);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetCurrencyFormat(true);
	m_wndDescription.SetReadOnly(true);
	m_wndDescription.LimitText(254);
	m_wndPrintReceipt.ModifyStyle(WS_TABSTOP, 0);

	m_hms_fee_depositTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_fee_depositTbl.AddField(_T("hfe_refidx"), dfInteger); 
	m_hms_fee_depositTbl.AddField(_T("hfe_patientno"), dfLong); 
	m_hms_fee_depositTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_fee_depositTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_fee_depositTbl.AddField(_T("hfe_objectid"), dfInteger); 
	m_hms_fee_depositTbl.AddField(_T("hfe_serialno"), dfText, 15); 
	m_hms_fee_depositTbl.AddField(_T("hfe_receiptno"), dfLong); 
	m_hms_fee_depositTbl.AddField(_T("hfe_date"), dfDateTime); 
	m_hms_fee_depositTbl.AddField(_T("hfe_staff"), dfText, 15); 
	m_hms_fee_depositTbl.AddField(_T("hfe_amount"), dfDouble); 
	m_hms_fee_depositTbl.AddField(_T("hfe_desc"), dfText, 128); 
	m_hms_fee_depositTbl.AddField(_T("hfe_moduleid"), dfText, 3); 
	
}
void CHMSFeeDepositDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	TranslateString(_T("Deposit receipt"), tmpStr);
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
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndPrintReceipt.SetEvent(WE_CLICK, _OnPrintReceiptSelectFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetWindowFont(&m_wndAmount, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndAmount.SetTextColor(RGB(0, 0, 255));
	

	int nMode = GetMode();

	if(nMode == VM_EDIT || nMode == VM_VIEW){
		GetDataToScreen();
	}
	else
	{
		if(pMF->IsInPatient())
		{
			if(m_szType == _T("A"))
				m_szType = _T("T");
		}
		
		pMF->GetSerialInformation();
		m_szSerialNo = pMF->m_szSerialNo;
		m_nReceiptNo = pMF->m_nReceiptNo;
		m_szReceiptDate = pMF->m_szRecvDate;
		m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), _T("5"));
		SetMode(VM_ADD);
		if(pMF->IsAutoSerialNo()){
			m_wndSerialNo.EnableWindow(FALSE);
			m_wndReceiptNo.EnableWindow(FALSE);
				
		}
	}
	SetMode(nMode);
	

}
void CHMSFeeDepositDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndPrintReceipt.GetDlgCtrlID(), m_bPrintReceipt);

}
void CHMSFeeDepositDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szStatus;
	
	if(m_nInvoiceNo <= 0)
		return;
	szSQL.Format(_T("SELECT * " )\
		_T("FROM hms_fee_deposit " )\
		_T("WHERE hfe_invoiceno=%ld "), 
		 m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_docno"), m_nDocumentNo);
		rs.GetValue(_T("hfe_status"), szStatus);
		rs.GetValue(_T("hfe_serialno"), m_szSerialNo);
		rs.GetValue(_T("hfe_date"), m_szReceiptDate);
		rs.GetValue(_T("hfe_receiptno"), m_nReceiptNo);
		rs.GetValue(_T("hfe_amount"), m_nAmount);
		rs.GetValue(_T("hfe_desc"), tmpStr);
		m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), tmpStr);

		rs.GetValue(_T("hfe_type"), m_szType);
		if(szStatus == _T("C") || szStatus == _T("R"))
		{
			szSQL.Format(_T("SELECT hfcr_reason FROM hms_fee_cancel_reason WHERE hfcr_docno =%ld and hfcr_invoiceno=%ld "), m_nDocumentNo, m_nInvoiceNo);

			rs.ExecSQL(szSQL);
			rs.GetValue(_T("hfcr_reason"), m_szDescription);
		}

	}
	

}
void CHMSFeeDepositDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	m_hms_fee_depositTbl.SetValue(_T("hfe_type"), m_szType);

	if(pMF->m_bIsRequest && !pMF->m_szRequestDept.IsEmpty())
		m_szDeptID = pMF->m_szRequestDept;

	m_hms_fee_depositTbl.SetValue(_T("hfe_deptid"), m_szDeptID);
	m_hms_fee_depositTbl.SetValue(_T("hfe_patientno"), m_nPID);
	m_hms_fee_depositTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);	
	m_hms_fee_depositTbl.SetValue(_T("hfe_serialno"), m_szSerialNo);
	m_hms_fee_depositTbl.SetValue(_T("hfe_receiptno"), m_nReceiptNo);
	m_hms_fee_depositTbl.SetValue(_T("hfe_staff"), pMF->GetCurrentUser());

	tmpStr.Format(_T("%s %s"), m_szReceiptDate.Left(10), pMF->GetSysTime());
	m_hms_fee_depositTbl.SetValue(_T("hfe_date"), tmpStr);
	m_hms_fee_depositTbl.SetValue(_T("hfe_desc"), _T("5"));
	m_hms_fee_depositTbl.SetValue(_T("hfe_status"), _T("P"));
	m_hms_fee_depositTbl.SetValue(_T("hfe_amount"), m_nAmount);
//	m_hms_fee_depositTbl.SetValue(_T("hfe_org_id"), pMF->IsInPatient()?_T("TM"):_T("EM"));
}
void CHMSFeeDepositDialog::SetDefaultValues(){
	//m_nInvoiceNo = 0;
	m_nReceiptNo=0;
//	m_szReceiptDate.Empty();
	m_nAmount=0;
//	m_szDescription.Empty();
	m_bPrintReceipt=TRUE;

}
int CHMSFeeDepositDialog::SetMode(int nMode){
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

			if (m_wndOK.IsWindowVisible())
			{
                m_wndOK.SetWindowText(_T("&Print"));
                m_wndOK.EnableWindow(true);
			}
			
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0,  -1); 			
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		if(m_nAmount > 0){
			m_wndAmount.EnableWindow(false);
		}
 		UpdateData(FALSE); 
 		return nOldMode; 
}


int CHMSFeeDepositDialog::OnSerialNoCheckValue(){
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
/*void CHMSFeeDepositDialog::OnReceiptNoChange(){
	
} */
/*void CHMSFeeDepositDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSFeeDepositDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSFeeDepositDialog::OnReceiptNoCheckValue(){
	UpdateData(true);
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	if(GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_deposit " ) \
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
		szSQL.Format(_T("SELECT * FROM hms_fee_deposit " ) \
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
/*void CHMSFeeDepositDialog::OnReceiptDateChange(){
	
} */
/*void CHMSFeeDepositDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSFeeDepositDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSFeeDepositDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSFeeDepositDialog::OnAmountChange(){
	
} */
/*void CHMSFeeDepositDialog::OnAmountSetfocus(){
	
} */
/*void CHMSFeeDepositDialog::OnAmountKillfocus(){
	
} */
int CHMSFeeDepositDialog::OnAmountCheckValue(){
	UpdateData(true);
	if(m_nAmount <= 0)
		return -1;
	return 0;
} 
/*void CHMSFeeDepositDialog::OnDescriptionChange(){
	
} */
/*void CHMSFeeDepositDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSFeeDepositDialog::OnDescriptionKillfocus(){
	
} */
int CHMSFeeDepositDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSFeeDepositDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSFeeDepositDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSFeeDepositDialog();	

} 
void CHMSFeeDepositDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSFeeDepositDialog::OnAddHMSFeeDepositDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFeeDepositDialog::OnEditHMSFeeDepositDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeDepositDialog::OnDeleteHMSFeeDepositDialog(){
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
 		OnCancelHMSFeeDepositDialog(); 
 	}
	return 0;
}
int CHMSFeeDepositDialog::OnSaveHMSFeeDepositDialog(){

	/*if(GetMode() != VM_ADD ) 
 		return -1; */

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL, szSQL2; 
		
 	if(!IsValidateData()) 
	{
 		return -1; 
	}
	
	if(GetMode() == VM_ADD )
	{
		szSQL.Format(_T("HMS_FEE_DEPOSIT_CREATE(%s) "), m_hms_fee_depositTbl.FormatSQL());
 		m_nInvoiceNo = str2long(pMF->ExecDML(szSQL));
		if(m_nInvoiceNo > 0 && pMF->IsSmartCard())
		{
			szSQL.Format(_T("UPDATE hms_fee_deposit SET hfe_payment_method='THE' WHERE hfe_docno=%ld and hfe_invoiceno=%ld"), m_nDocumentNo, m_nInvoiceNo);
			pMF->ExecSQL(szSQL);
		}

	}
	
 	if(m_nInvoiceNo > 0) 
 	{ 
		if(m_bPrintReceipt)
		{
			pMF->PrintDeposit(m_nInvoiceNo);
		}
		CGuiDialog::OnOK();
		return 1;
	}

	return 0;
}
int CHMSFeeDepositDialog::OnCancelHMSFeeDepositDialog(){
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
int CHMSFeeDepositDialog::OnHMSFeeDepositDialogListLoadData(){
	return 0;
}
