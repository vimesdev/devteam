#include "HMSReceiptDialog.h"
#include "MainFrm.h"
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeReceiptDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeReceiptDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeReceiptDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeReceiptDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSFeeReceiptDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeReceiptDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSFeeReceiptDialog*)pWnd)->OnPrintReceiptSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSFeeReceiptDialog *pVw = (CHMSFeeReceiptDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFeeReceiptDialog *pVw = (CHMSFeeReceiptDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSFeeReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeReceiptDialog*)pWnd)->OnAddHMSFeeReceiptDialog();
} 
static int _OnEditHMSFeeReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeReceiptDialog*)pWnd)->OnEditHMSFeeReceiptDialog();
} 
static int _OnDeleteHMSFeeReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeReceiptDialog*)pWnd)->OnDeleteHMSFeeReceiptDialog();
} 
static int _OnSaveHMSFeeReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeReceiptDialog*)pWnd)->OnSaveHMSFeeReceiptDialog();
} 
static int _OnCancelHMSFeeReceiptDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeReceiptDialog*)pWnd)->OnCancelHMSFeeReceiptDialog();
} 
CHMSFeeReceiptDialog::CHMSFeeReceiptDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_szType = _T("D");
	m_nAmount = 0;
}
CHMSFeeReceiptDialog::~CHMSFeeReceiptDialog(){
}
void CHMSFeeReceiptDialog::OnCreateComponents(){
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
void CHMSFeeReceiptDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndSerialNo.SetCheckValue(true);
	m_wndSerialNo.LimitText(35);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndReceiptDate.SetCheckValue(true);
	m_wndAmount.SetLimitText(10);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetCurrencyFormat(true);
	m_wndDescription.SetCheckValue(true);
	m_wndDescription.LimitText(254);

	m_wndPrintReceipt.ModifyStyle(WS_TABSTOP, 0);
	m_hms_fee_discountTbl.SetTableName(_T("hms_fee_discount"));
	m_hms_fee_discountTbl.AddField(_T("hfe_createdby"), dfText, 15); 
	m_hms_fee_discountTbl.AddField(_T("hfe_createddate"), dfDateTime); 
	m_hms_fee_discountTbl.AddField(_T("hfe_updatedby"), dfText, 15); 
	m_hms_fee_discountTbl.AddField(_T("hfe_updateddate"), dfDateTime); 
	m_hms_fee_discountTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_fee_discountTbl.AddField(_T("hfe_refidx"), dfInteger); 
	m_hms_fee_discountTbl.AddField(_T("hfe_patientno"), dfLong); 
	m_hms_fee_discountTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_fee_discountTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_fee_discountTbl.AddField(_T("hfe_class"), dfText, 1); 
	m_hms_fee_discountTbl.AddField(_T("hfe_objectid"), dfInteger); 
	m_hms_fee_discountTbl.AddField(_T("hfe_status"), dfText, 1); 
	m_hms_fee_discountTbl.AddField(_T("hfe_serialno"), dfText, 15); 
	m_hms_fee_discountTbl.AddField(_T("hfe_receiptno"), dfLong); 
	m_hms_fee_discountTbl.AddField(_T("hfe_date"), dfDateTime); 
	m_hms_fee_discountTbl.AddField(_T("hfe_staff"), dfText, 15); 
	m_hms_fee_discountTbl.AddField(_T("hfe_amount"), dfDouble); 
	m_hms_fee_discountTbl.AddField(_T("hfe_patpaid"), dfDouble); 
	m_hms_fee_discountTbl.AddField(_T("hfe_desc"), dfText, 254); 
	
}
void CHMSFeeReceiptDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetWindowText(_T("Discount receipt"));
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
	

	if(pMF->IsAutoSerialNo())
	{
		m_wndSerialNo.SetReadOnly(true);
		m_wndReceiptNo.SetReadOnly(true);
	}
	m_wndDescription.SetReadOnly(true);
	int nMode = GetMode();
//	m_wndDescription.EnableWindow(false);
	if(nMode == VM_EDIT){
		GetDataToScreen();
		SetMode(VM_EDIT);
	}
	else
	{
		if(pMF->IsInPatient())
		{
			TranslateString(_T("Inpatient discharge discount"), m_szDescription);
		}
		else
			TranslateString(_T("Outpatient discount"), m_szDescription);
		SetMode(VM_ADD);

	}

}
void CHMSFeeReceiptDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndPrintReceipt.GetDlgCtrlID(), m_bPrintReceipt);

}
void CHMSFeeReceiptDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	
	if(m_nInvoiceNo <= 0)
		return;
	szSQL.Format(_T("SELECT * FROM hms_fee_discount WHERE hfe_invoiceno=%ld "), m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
	if(!rs.IsEOF())
	{
		CString szSerialNo;
		rs.GetValue(_T("hfe_serialno"), szSerialNo);
		rs.GetValue(_T("hfe_date"), m_szReceiptDate);
		rs.GetValue(_T("hfe_receiptno"), m_nReceiptNo);
		rs.GetValue(_T("hfe_amount"), m_nAmount);
		rs.GetValue(_T("hfe_desc"), tmpStr);
		m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), tmpStr);
		rs.GetValue(_T("hfe_type"), m_szType);

	}
}
void CHMSFeeReceiptDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_fee_discountTbl.SetValue(_T("hfe_createdby"), pMF->GetCurrentUser());
	m_hms_fee_discountTbl.SetValue(_T("hfe_createddate"), pMF->GetSysDateTime());
	m_hms_fee_discountTbl.SetValue(_T("hfe_updatedby"), pMF->GetCurrentUser());
	m_hms_fee_discountTbl.SetValue(_T("hfe_updateddate"), pMF->GetSysDateTime());
	m_hms_fee_discountTbl.SetValue(_T("hfe_type"), m_szType);
	m_hms_fee_discountTbl.SetValue(_T("hfe_class"), pMF->m_nInpatient == 0?_T("E"): _T("I"));
	m_hms_fee_discountTbl.SetValue(_T("hfe_deptid"), pMF->m_szReceiptDeptID);
	m_hms_fee_discountTbl.SetValue(_T("hfe_patientno"), m_nPID);
	m_hms_fee_discountTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);	
	m_hms_fee_discountTbl.SetValue(_T("hfe_serialno"), m_szSerialNo);
	if(m_szSerialNo == pMF->GetCurrentUser() || m_szSerialNo.IsEmpty()){
		CString szSQL;
		m_szSerialNo = pMF->GetCurrentUser();
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT MAX(hfe_receiptno) FROM hms_fee_deposit"));
		rs.ExecSQL(szSQL);
		m_nReceiptNo = rs.GetIntValue()+1;
	}
	m_hms_fee_discountTbl.SetValue(_T("hfe_receiptno"), m_nReceiptNo);
	m_hms_fee_discountTbl.SetValue(_T("hfe_staff"), pMF->GetCurrentUser());
	m_hms_fee_discountTbl.SetValue(_T("hfe_status"), _T("O"));
	CString tmpStr;
	tmpStr.Format(_T("%s %s"), m_szReceiptDate, pMF->GetSysTime());
	m_hms_fee_discountTbl.SetValue(_T("hfe_date"), tmpStr);
	m_hms_fee_discountTbl.SetValue(_T("hfe_desc"), _T("1"));
	m_hms_fee_discountTbl.SetValue(_T("hfe_amount"), m_nAmount);
}
void CHMSFeeReceiptDialog::SetDefaultValues(){

	m_nReceiptNo=0;
//	m_szReceiptDate.Empty();
	m_nAmount=0;
//	m_szDescription.Empty();
	m_bPrintReceipt=TRUE;

}
int CHMSFeeReceiptDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
		case VM_ADD:
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 		//	SetDefaultValues(); 
			m_szReceiptDate= pMF->m_szRecvDate;
			m_nReceiptNo = pMF->m_nReceiptNo;
			m_wndAmount.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndOK.EnableWindow(false);
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
	//		m_wndDescription.EnableWindow(false);
			m_wndReceiptDate.EnableWindow(false);
			
		}
	//	if(m_szCategory == _T("D"))
	//		m_bPrintReceipt = FALSE;
 		UpdateData(FALSE); 
 		return nOldMode; 
}


int CHMSFeeReceiptDialog::OnSerialNoCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szSerialNo == pMF->GetCurrentUser() || m_szSerialNo.IsEmpty()){
		m_szSerialNo = pMF->GetCurrentUser();
		m_wndReceiptNo.EnableWindow(FALSE);
		UpdateData(FALSE);
	}
	else
		m_wndReceiptNo.EnableWindow(TRUE);

	return 0;
} 
/*void CHMSFeeReceiptDialog::OnReceiptNoChange(){
	
} */
/*void CHMSFeeReceiptDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSFeeReceiptDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSFeeReceiptDialog::OnReceiptNoCheckValue(){
	UpdateData(true);
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	if(GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_discount WHERE hfe_docno<>%ld and hfe_serialno='%s' and hfe_receiptno=%ld"), 
			m_nDocumentNo, m_szSerialNo,  m_nReceiptNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			m_wndReceiptNo.SetToolTipMessage(_T("Invoice No is existing in the database."));
			return -1;
		}
	}
	else
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_discount WHERE hfe_serialno='%s' and hfe_receiptno=%ld"), 
			m_szSerialNo,  m_nReceiptNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			m_wndReceiptNo.SetToolTipMessage(_T("Invoice No is existing in the database."));
				return -1;
		}
	}
	
	return 0;
} 
/*void CHMSFeeReceiptDialog::OnReceiptDateChange(){
	
} */
/*void CHMSFeeReceiptDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSFeeReceiptDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSFeeReceiptDialog::OnReceiptDateCheckValue(){
	return 0;
} 
/*void CHMSFeeReceiptDialog::OnAmountChange(){
	
} */
/*void CHMSFeeReceiptDialog::OnAmountSetfocus(){
	
} */
/*void CHMSFeeReceiptDialog::OnAmountKillfocus(){
	
} */
int CHMSFeeReceiptDialog::OnAmountCheckValue(){
	UpdateData(true);
	if(m_nAmount <= 0)
		return -1;
	return 0;
} 
/*void CHMSFeeReceiptDialog::OnDescriptionChange(){
	
} */
/*void CHMSFeeReceiptDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSFeeReceiptDialog::OnDescriptionKillfocus(){
	
} */
int CHMSFeeReceiptDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CHMSFeeReceiptDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSFeeReceiptDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSFeeReceiptDialog();	

} 
void CHMSFeeReceiptDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSFeeReceiptDialog::OnAddHMSFeeReceiptDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFeeReceiptDialog::OnEditHMSFeeReceiptDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeReceiptDialog::OnDeleteHMSFeeReceiptDialog(){
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
 		OnCancelHMSFeeReceiptDialog(); 
 	}
	return 0;
}
int CHMSFeeReceiptDialog::OnSaveHMSFeeReceiptDialog(){

	int nMode = GetMode();
 	if(nMode != VM_ADD) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL, szSQL2; 
	
	

	m_wndReceiptDate.SetMax(CDateTime(pMF->GetSysDateTime()));
 	if(!IsValidateData()) 
	{
 		return -1; 
	}
/*
	docno integer;
	 serialNo    VARCHAR2,
               receiptNo   INTEGER,
               receiptDate VARCHAR2,
               receiptDept VARCHAR2,
               staffid     VARCHAR2,
               reason      VARCHAR2,
               classType   VARCHAR2,
               feeType     VARCHAR2,
               depositPay  VARCHAR
*/
	
	szSQL.Format(_T("HMS_FEE_INVOICE_CREATERECEIPT(%ld, '%s', %d, '%s', '%s', '%s', '%s', '%s', 'E', '%s', 'N') "),
		m_nDocumentNo, m_szSerialNo, m_nReceiptNo, m_szReceiptDate, 
		pMF->m_szReceiptDeptID, pMF->m_szDepartments,  pMF->GetCurrentUser(), m_szDescription, pMF->m_szFeeTypes);


 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0) 
 	{ 
		if(m_bPrintReceipt){
			pMF->PrintReceipt(m_nReceiptNo);
		}
		CGuiDialog::OnOK();
		return 1;
	}
	return 0;
}
int CHMSFeeReceiptDialog::OnCancelHMSFeeReceiptDialog(){
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
int CHMSFeeReceiptDialog::OnHMSFeeReceiptDialogListLoadData(){
	return 0;
}
