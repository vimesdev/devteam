#include "HMSFeeDiscountDialog.h"
#include "MainFrm.h"
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSFeeDiscountDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnPrintReceiptSelectFnc(CWnd *pWnd){
	 ((CHMSFeeDiscountDialog*)pWnd)->OnPrintReceiptSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSFeeDiscountDialog *pVw = (CHMSFeeDiscountDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFeeDiscountDialog *pVw = (CHMSFeeDiscountDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSFeeDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountDialog*)pWnd)->OnAddHMSFeeDiscountDialog();
} 
static int _OnEditHMSFeeDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountDialog*)pWnd)->OnEditHMSFeeDiscountDialog();
} 
static int _OnDeleteHMSFeeDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountDialog*)pWnd)->OnDeleteHMSFeeDiscountDialog();
} 
static int _OnSaveHMSFeeDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountDialog*)pWnd)->OnSaveHMSFeeDiscountDialog();
} 
static int _OnCancelHMSFeeDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountDialog*)pWnd)->OnCancelHMSFeeDiscountDialog();
}

static void _OnLevel1SelectFnc(CWnd *pWnd){
	  ((CHMSFeeDiscountDialog*)pWnd)->OnLevel1Select();
}
static void _OnLevel2SelectFnc(CWnd *pWnd){
	  ((CHMSFeeDiscountDialog*)pWnd)->OnLevel2Select();
}
static void _OnNolevelSelectFnc(CWnd *pWnd){
	  ((CHMSFeeDiscountDialog*)pWnd)->OnNolevelSelect();
}
CHMSFeeDiscountDialog::CHMSFeeDiscountDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_szType = _T("D");
	m_nAmount = 0;
}
CHMSFeeDiscountDialog::~CHMSFeeDiscountDialog(){
}
void CHMSFeeDiscountDialog::OnCreateComponents()
{
	/*m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 455, 120);
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
	m_wndCancel.Create(this, _T("&Close"), 365, 125, 450, 150);*/

	m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 490, 120);
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 30, 110, 55);
	m_wndSerialNo.Create(this,115, 30, 240, 55); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 245, 30, 345, 55);
	m_wndReceiptNo.Create(this,350, 30, 484, 55); 
	m_wndReceiptDateLabel.Create(this, _T("Receipt Date"), 10, 60, 110, 85);
	m_wndReceiptDate.Create(this,115, 60, 240, 85); 
	m_wndAmountLabel.Create(this, _T("Amount"), 245, 60, 345, 85);
	m_wndAmount.Create(this,350, 60, 484, 85); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 90, 110, 115);
	m_wndDescription.Create(this,115, 90, 484, 115); 
	m_wndPrintReceipt.Create(this, _T("&Print Receipt"), 10, 158, 110, 183);
	m_wndOK.Create(this, _T("&Save"), 310, 158, 395, 183);
	m_wndCancel.Create(this, _T("&Close"), 400, 158, 485, 183);
	m_wndLevel1.Create(this, _T("10%"), 10, 127, 140, 152);
	m_wndLevel2.Create(this, _T("30%"), 146, 127, 276, 152);
	m_wndNolevel.Create(this, _T("No Level"), 282, 127, 412, 152);

}
void CHMSFeeDiscountDialog::OnInitializeComponents(){
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
	m_wndDescription.SetReadOnly(true);
	m_wndDescription.LimitText(254);
	m_wndPrintReceipt.ModifyStyle(WS_TABSTOP, 0);
	m_hms_fee_discountTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_fee_discountTbl.AddField(_T("hfe_refidx"), dfInteger); 
	m_hms_fee_discountTbl.AddField(_T("hfe_patientno"), dfLong); 
	m_hms_fee_discountTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_fee_discountTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_fee_discountTbl.AddField(_T("hfe_objectid"), dfInteger); 
	m_hms_fee_discountTbl.AddField(_T("hfe_serialno"), dfText, 15); 
	m_hms_fee_discountTbl.AddField(_T("hfe_receiptno"), dfLong); 
	m_hms_fee_discountTbl.AddField(_T("hfe_date"), dfDateTime); 
	m_hms_fee_discountTbl.AddField(_T("hfe_staff"), dfText, 15); 
	m_hms_fee_discountTbl.AddField(_T("hfe_amount"), dfDouble); 
	m_hms_fee_discountTbl.AddField(_T("hfe_desc"), dfText, 128); 
	m_hms_fee_discountTbl.AddField(_T("hfe_moduleid"), dfText, 3); 
	
}
void CHMSFeeDiscountDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	TranslateString(_T("Discount receipt"), tmpStr);
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
	

	m_wndLevel1.SetEvent(WE_CLICK, _OnLevel1SelectFnc);
	m_wndLevel2.SetEvent(WE_CLICK, _OnLevel2SelectFnc);
	m_wndNolevel.SetEvent(WE_CLICK, _OnNolevelSelectFnc);
	
	int nMode = GetMode();
	if(nMode == VM_EDIT){
		GetDataToScreen();
		SetMode(VM_EDIT);
	}
	else
	{

		pMF->GetSerialInformation();
		m_szSerialNo = _T("MG");
		m_nReceiptNo = pMF->m_nReceiptNo;
		m_szReceiptDate = pMF->m_szRecvDate;
		m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), _T("7"));
		SetMode(VM_ADD);
		if(pMF->IsAutoSerialNo()){
			m_wndSerialNo.EnableWindow(FALSE);
			m_wndReceiptNo.EnableWindow(FALSE);
		}


	}

}
void CHMSFeeDiscountDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndPrintReceipt.GetDlgCtrlID(), m_bPrintReceipt);
	DDX_Radio(pDX, m_wndLevel1.GetDlgCtrlID(), m_nLevel1);
	DDX_Radio(pDX, m_wndLevel2.GetDlgCtrlID(), m_nLevel2);
	DDX_Radio(pDX, m_wndNolevel.GetDlgCtrlID(), m_nNolevel);

}
void CHMSFeeDiscountDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	
	if(m_nInvoiceNo <= 0)
		return;
	
	szSQL.Format(_T("SELECT * FROM hms_fee_discount " ) \
		_T("WHERE hfe_invoiceno=%ld "),  m_nInvoiceNo);

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
void CHMSFeeDiscountDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_fee_discountTbl.SetValue(_T("hfe_type"), m_szType);
	m_hms_fee_discountTbl.SetValue(_T("hfe_deptid"), pMF->m_szReceiptDeptID);
	m_hms_fee_discountTbl.SetValue(_T("hfe_patientno"), m_nPID);
	m_hms_fee_discountTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);	
	m_hms_fee_discountTbl.SetValue(_T("hfe_serialno"), m_szSerialNo);
	m_hms_fee_discountTbl.SetValue(_T("hfe_receiptno"), m_nReceiptNo);
	m_hms_fee_discountTbl.SetValue(_T("hfe_staff"), pMF->GetCurrentUser());
	CString tmpStr;
	tmpStr.Format(_T("%s %s"), m_szReceiptDate, pMF->GetSysTime());
	m_hms_fee_discountTbl.SetValue(_T("hfe_date"), tmpStr);
	m_hms_fee_discountTbl.SetValue(_T("hfe_desc"), _T("7"));
	m_hms_fee_discountTbl.SetValue(_T("hfe_amount"), m_nAmount);
	m_hms_fee_discountTbl.SetValue(_T("hfe_moduleid"), pMF->IsInPatient()?_T("TM"):_T("EM"));
}
void CHMSFeeDiscountDialog::SetDefaultValues(){

	m_nReceiptNo=0;
//	m_szReceiptDate.Empty();
	m_nAmount=0;
//	m_szDescription.Empty();
	m_bPrintReceipt=TRUE;
	m_nLevel1=1;
	m_nLevel2=1;
	m_nNolevel=0;

}
int CHMSFeeDiscountDialog::SetMode(int nMode){
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
			m_wndAmount.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndOK.SetWindowText(_T("&Print"));
			m_wndOK.EnableWindow(true);
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
			m_wndDescription.EnableWindow(false);
			m_wndReceiptDate.EnableWindow(false);
		}
	//	if(m_szCategory == _T("D"))
	//		m_bPrintReceipt = FALSE;
 		UpdateData(FALSE); 
 		return nOldMode; 
}


int CHMSFeeDiscountDialog::OnSerialNoCheckValue(){
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
/*void CHMSFeeDiscountDialog::OnReceiptNoChange(){
	
} */
/*void CHMSFeeDiscountDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSFeeDiscountDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSFeeDiscountDialog::OnReceiptNoCheckValue(){
	UpdateData(true);
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	if(GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_discount ") \
			_T("WHERE hfe_docno<>%ld and trunc_date(hfe_date) = to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
			_T(" and hfe_serialno='%s' and hfe_receiptno=%ld"), 
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
		szSQL.Format(_T("SELECT * FROM hms_fee_discount ") \
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


void CHMSFeeDiscountDialog::OnLevel1Select()
{
	double nTotalAmt=0;
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT NVL(sum(hfe_patdebt),0) as total_amt FROM hms_fee ") \
		_T("WHERE hfe_docno = %ld and hfe_status in('O','A') and hfe_category='N' "),
		m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("total_amt"), nTotalAmt);	
	m_nAmount = nTotalAmt*0.1;
	m_nLevel1 = 0;
	m_nLevel2 = 1;
	m_nNolevel = 1;
	UpdateData(false);	
}
void CHMSFeeDiscountDialog::OnLevel2Select()
{
	double nTotalAmt=0;
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT NVL(sum(hfe_patdebt),0) as total_amt FROM hms_fee ") \
		_T("WHERE hfe_docno = %ld and hfe_status in('O','A') and hfe_category='N' "),
		m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("total_amt"), nTotalAmt);	
	m_nAmount = nTotalAmt*0.3;
	m_nLevel1 = 1;
	m_nLevel2 = 0;
	m_nNolevel = 1;
	UpdateData(false);	
}
void CHMSFeeDiscountDialog::OnNolevelSelect()
{
	m_nAmount = 0;
	m_nLevel1 = 1;
	m_nLevel2 = 1;
	m_nNolevel = 0;
	UpdateData(false);	
}
/*void CHMSFeeDiscountDialog::OnReceiptDateChange(){
	
} */
/*void CHMSFeeDiscountDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSFeeDiscountDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSFeeDiscountDialog::OnReceiptDateCheckValue()
{
	return 0;
} 
/*void CHMSFeeDiscountDialog::OnAmountChange(){
	
} */
/*void CHMSFeeDiscountDialog::OnAmountSetfocus(){
	
} */
/*void CHMSFeeDiscountDialog::OnAmountKillfocus(){
	
} */
int CHMSFeeDiscountDialog::OnAmountCheckValue()
{
	UpdateData(true);
	if(m_nAmount <= 0)
		return -1;
	double nTotalAmt=0, nTotalDiscount;
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT sum(hfe_patdebt) as total_amt FROM hms_fee ") \
		_T("WHERE hfe_docno = %ld and hfe_status in('O','A') "),
		m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("total_amt"), nTotalAmt);
	//_msg(_T("%f"), nTotalAmt);
	szSQL.Format(_T("SELECT sum(hfe_amount) as total_amt FROM hms_fee_discount ") \
		_T("WHERE hfe_docno = %ld and hfe_status in('O','P') "),
		m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("total_amt"), nTotalDiscount);
	if(m_nAmount+nTotalDiscount > nTotalAmt)
		return -1;
	return 0;
} 
/*void CHMSFeeDiscountDialog::OnDescriptionChange(){
	
} */
/*void CHMSFeeDiscountDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSFeeDiscountDialog::OnDescriptionKillfocus(){
	
} */
int CHMSFeeDiscountDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CHMSFeeDiscountDialog::OnPrintReceiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSFeeDiscountDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSFeeDiscountDialog();	

} 
void CHMSFeeDiscountDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSFeeDiscountDialog::OnAddHMSFeeDiscountDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFeeDiscountDialog::OnEditHMSFeeDiscountDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeDiscountDialog::OnDeleteHMSFeeDiscountDialog(){
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
 		OnCancelHMSFeeDiscountDialog(); 
 	}
	return 0;
}
int CHMSFeeDiscountDialog::OnSaveHMSFeeDiscountDialog(){

 	if(GetMode() != VM_ADD) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL, szSQL2; 
	
 	if(!IsValidateData()) 
	{
 		return -1; 
	}
		
	szSQL.Format(_T("HMS_FEE_DISCOUNT_INSERT(%s) "), m_hms_fee_discountTbl.FormatSQL());
 		m_nInvoiceNo = str2long(pMF->ExecDML(szSQL));

	if(m_nInvoiceNo > 0) 
 	{ 
		if(m_bPrintReceipt){
			pMF->PrintDiscount(m_nInvoiceNo);
		}
		CGuiDialog::OnOK();
		return 1;
	}

	return 0;
}
int CHMSFeeDiscountDialog::OnCancelHMSFeeDiscountDialog(){
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
int CHMSFeeDiscountDialog::OnHMSFeeDiscountDialogListLoadData(){
	return 0;
}
