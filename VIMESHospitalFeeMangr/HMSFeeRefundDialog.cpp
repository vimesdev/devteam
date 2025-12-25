#include "HMSFeeRefundDialog.h"
#include "MainFrm.h"
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnPaymentNoChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentNoChange();
} */
/*static void _OnPaymentNoSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentNoSetfocus();} */ 
/*static void _OnPaymentNoKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentNoKillfocus();
} */
static int _OnPaymentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnPaymentNoCheckValue();
} 
/*static void _OnPaymentDateChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentDateChange();
} */
/*static void _OnPaymentDateSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentDateSetfocus();} */ 
/*static void _OnPaymentDateKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentDateKillfocus();
} */
static int _OnPaymentDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnPaymentDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnPaymentTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeeRefundDialog* )pWnd)->OnPaymentTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentTypeSelendokFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentTypeSelendok();
}
/*static void _OnPaymentTypeSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentTypeKillfocus();
}*/
/*static void _OnPaymentTypeKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentTypeKillfocus();
}*/
static long _OnPaymentTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnPaymentTypeLoadData();
}
/*static void _OnPaymentTypeAddNewFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnPaymentTypeAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSFeeRefundDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeRefundDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnPrintPaymentSelectFnc(CWnd *pWnd){
	 ((CHMSFeeRefundDialog*)pWnd)->OnPrintPaymentSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSFeeRefundDialog *pVw = (CHMSFeeRefundDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFeeRefundDialog *pVw = (CHMSFeeRefundDialog *)pWnd;
	pVw->OnCancelSelect();
}

static void _OnInputDescSelectFnc(CWnd *pWnd){
	 ((CHMSFeeRefundDialog*)pWnd)->OnInputDescSelect();
}

static int _OnAddHMSFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDialog*)pWnd)->OnAddHMSFeeRefundDialog();
} 
static int _OnEditHMSFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDialog*)pWnd)->OnEditHMSFeeRefundDialog();
} 
static int _OnDeleteHMSFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDialog*)pWnd)->OnDeleteHMSFeeRefundDialog();
} 
static int _OnSaveHMSFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDialog*)pWnd)->OnSaveHMSFeeRefundDialog();
} 
static int _OnCancelHMSFeeRefundDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeRefundDialog*)pWnd)->OnCancelHMSFeeRefundDialog();
} 
CHMSFeeRefundDialog::CHMSFeeRefundDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 465;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_szType = _T("E");
	m_nAmount = 0;
	m_bSalaryInput = false;
	m_bTerminated = false;
}
CHMSFeeRefundDialog::~CHMSFeeRefundDialog(){
}
void CHMSFeeRefundDialog::OnCreateComponents()
{
	/*m_wndPaymentInformation.Create(this, _T("Payment Information"), 5, 5, 455, 120);
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 30, 110, 55);
	m_wndSerialNo.Create(this,115, 30, 240, 55); 
	m_wndPaymentNoLabel.Create(this, _T("Payment No"), 245, 30, 345, 55);
	m_wndPaymentNo.Create(this,350, 30, 450, 55); 
	m_wndPaymentDateLabel.Create(this, _T("Payment Date"), 10, 60, 110, 85);
	m_wndPaymentDate.Create(this,115, 60, 240, 85); 
	m_wndAmountLabel.Create(this, _T("Amount"), 245, 60, 345, 85);
	m_wndAmount.Create(this,350, 60, 450, 85); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 90, 110, 115);
	m_wndDescription.Create(this,115, 90, 450, 115); 
	m_wndPrintPayment.Create(this, _T("&Print Payment"), 10, 125, 110, 150);
	m_wndOK.Create(this, _T("&Save"), 275, 125, 360, 150);
	m_wndCancel.Create(this, _T("&Close"), 365, 125, 450, 150);*/

	m_wndPaymentInformation.Create(this, _T("Payment Information"), 5, 5, 455, 120);
	
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 30, 110, 55);
	m_wndSerialNo.Create(this,115, 30, 240, 55); 

	m_wndPaymentNoLabel.Create(this, _T("Payment No"), 245, 30, 345, 55);
	m_wndPaymentNo.Create(this,350, 30, 450, 55); 
	m_wndPaymentDateLabel.Create(this, _T("Payment Date"), 10, 60, 110, 85);
	m_wndPaymentDate.Create(this,115, 60, 240, 85); 
	m_wndAmountLabel.Create(this, _T("Amount"), 245, 60, 345, 85);
	m_wndAmount.Create(this,350, 60, 450, 85); 

	m_wndPaymentTypeLabel.Create(this, _T("Payment Type"), 10, 90, 110, 115);
	m_wndPaymentType.Create(this,115, 90, 450, 115); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 120, 110, 145);
	m_wndDescription.Create(this,115, 120, 450, 145); 

	m_wndPrintPayment.Create(this, _T("&Print Payment"), 5, 155, 105, 180);

	m_wndOK.Create(this, _T("&Save"), 280, 155, 365, 180);
	m_wndCancel.Create(this, _T("&Close"), 370, 155, 455, 180);

	m_wndInputDesc.Create(this, _T(""), 0, 0, 0, 0);
	m_wndInputDesc.ShowWindow(SW_HIDE);
	m_wndInputDesc.EnableWindow(FALSE);

}
void CHMSFeeRefundDialog::OnInitializeComponents(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndSerialNo.SetCheckValue(true);
	m_wndSerialNo.LimitText(35);
	m_wndSerialNo.SetReadOnly(true);
	//m_wndPaymentNo.SetCheckValue(true);
	m_wndPaymentNo.SetReadOnly(true);
	m_wndPaymentDate.SetReadOnly(true);
	m_wndAmount.SetLimitText(10);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetCurrencyFormat(true);
//	m_wndDescription.SetReadOnly(true);
	m_wndDescription.LimitText(254);
	m_wndPrintPayment.ModifyStyle(WS_TABSTOP, 0);

	m_wndPaymentType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndPaymentType.SetCheckValue(true);
	
	m_hms_fee_refundTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_fee_refundTbl.AddField(_T("hfe_refidx"), dfInteger); 
	m_hms_fee_refundTbl.AddField(_T("hfe_patientno"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_fee_refundTbl.AddField(_T("hfe_objectid"), dfInteger); 
	m_hms_fee_refundTbl.AddField(_T("hfe_serialno"), dfText, 15); 
	m_hms_fee_refundTbl.AddField(_T("hfe_receiptno"), dfLong); 
	m_hms_fee_refundTbl.AddField(_T("hfe_date"), dfDateTime); 
	m_hms_fee_refundTbl.AddField(_T("hfe_staff"), dfText, 15); 
	m_hms_fee_refundTbl.AddField(_T("hfe_amount"), dfDouble); 
	m_hms_fee_refundTbl.AddField(_T("hfe_desc"), dfText, 128); 
	m_hms_fee_refundTbl.AddField(_T("hfe_moduleid"), dfText, 3); 
	m_hms_fee_refundTbl.AddField(_T("hfe_group"), dfText, 3); 
	
}
void CHMSFeeRefundDialog::OnSetWindowEvents()
{
	

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	TranslateString(_T("PAYMENT ORDER"), tmpStr);
	SetWindowText(tmpStr);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndPaymentNo.SetEvent(WE_CHANGE, _OnPaymentNoChangeFnc);
	//m_wndPaymentNo.SetEvent(WE_SETFOCUS, _OnPaymentNoSetfocusFnc);
	//m_wndPaymentNo.SetEvent(WE_KILLFOCUS, _OnPaymentNoKillfocusFnc);
	m_wndPaymentNo.SetEvent(WE_CHECKVALUE, _OnPaymentNoCheckValueFnc);
	//m_wndPaymentDate.SetEvent(WE_CHANGE, _OnPaymentDateChangeFnc);
	//m_wndPaymentDate.SetEvent(WE_SETFOCUS, _OnPaymentDateSetfocusFnc);
	//m_wndPaymentDate.SetEvent(WE_KILLFOCUS, _OnPaymentDateKillfocusFnc);
	m_wndPaymentDate.SetEvent(WE_CHECKVALUE, _OnPaymentDateCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndPaymentType.SetEvent(WE_SELENDOK, _OnPaymentTypeSelendokFnc);
	//m_wndPaymentType.SetEvent(WE_SETFOCUS, _OnPaymentTypeSetfocusFnc);
	//m_wndPaymentType.SetEvent(WE_KILLFOCUS, _OnPaymentTypeKillfocusFnc);
	m_wndPaymentType.SetEvent(WE_SELCHANGE, _OnPaymentTypeSelectChangeFnc);
	m_wndPaymentType.SetEvent(WE_LOADDATA, _OnPaymentTypeLoadDataFnc);
	//m_wndPaymentType.SetEvent(WE_ADDNEW, _OnPaymentTypeAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndPrintPayment.SetEvent(WE_CLICK, _OnPrintPaymentSelectFnc);
//	m_wndInputDesc.SetEvent(WE_CLICK, _OnInputDescSelectFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetWindowFont(&m_wndAmount, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndAmount.SetTextColor(RGB(0, 0, 255));
	
	int nMode = GetMode();

	if (nMode == VM_EDIT)
	{
		GetDataToScreen();
		SetMode(VM_EDIT);
	}
	else
	{

		if (pMF->IsDischarge())
		{
			m_szType = _T("F");
		}
		else
			m_szType = _T("E");

		if(m_bSalaryInput)
		{
			m_szType = _T("S");
		}

		if(m_bTerminated)
		{
			m_szType = _T("G");
		}
			
		pMF->GetSerialInformation();
		m_szSerialNo = _T("PC");
		m_nPaymentNo = pMF->m_nReceiptNo;
		m_szPaymentDate = pMF->m_szRecvDate;

		m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), _T("6"));
		if(m_szType == _T("S") && m_szDescription.IsEmpty())
		{
			m_szDescription = _T("\x43\x1EA5p l\x1B0\x1A1ng \x62\x1ED9 \x111\x1ED9i");

		}
		
		SetMode(VM_ADD);

		if (pMF->IsAutoSerialNo())
		{
			m_wndSerialNo.EnableWindow(FALSE);
			m_wndPaymentNo.EnableWindow(FALSE);
				
		}
	}
	
	

}
void CHMSFeeRefundDialog::OnDoDataExchange(CDataExchange* pDX)
{
	
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndPaymentNo.GetDlgCtrlID(), m_nPaymentNo);
	DDX_TextEx(pDX, m_wndPaymentDate.GetDlgCtrlID(), m_szPaymentDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_TextEx(pDX, m_wndPaymentType.GetDlgCtrlID(), m_szPaymentTypeKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndPrintPayment.GetDlgCtrlID(), m_bPrintPayment);

}
void CHMSFeeRefundDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	
	if (m_nInvoiceNo <= 0)
		return;

	szSQL.Format(_T("SELECT * FROM hms_fee_refund " ) \
		         _T("WHERE hfe_invoiceno=%ld "), m_nInvoiceNo);

	rs.ExecSQL(szSQL);

	SetDefaultValues();

	if (!rs.IsEOF())
	{
		CString szSerialNo;
		bool bCheck = false;

		rs.GetValue(_T("hfe_serialno"), szSerialNo);
		rs.GetValue(_T("hfe_date"), m_szPaymentDate);
		rs.GetValue(_T("hfe_receiptno"), m_nPaymentNo);
		rs.GetValue(_T("hfe_amount"), m_nAmount);
		rs.GetValue(_T("hfe_desc"), tmpStr);

		rs.GetValue(_T("hfe_group"), m_szPaymentTypeKey);

		tmpStr.Trim();
		if(tmpStr.GetLength() < 3)
		{
			for (int i = 0; i < tmpStr.GetLength(); i++)
			{
				if (!isdigit(tmpStr[i]))
				{
					bCheck = true;
					break;
				}
			}

			if (!bCheck)
			{
				m_szDescription = pMF->GetSelectionString(_T("hms_invoice_desc"), tmpStr);
			}
			else
			{
				m_szDescription = tmpStr;
			}
		}
		else
		{
			m_szDescription = tmpStr;
		}
		rs.GetValue(_T("hfe_type"), m_szType);
	}
}
void CHMSFeeRefundDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bSalaryInput)
	{
		m_szType = _T("S");
	}


	CString szPaymentDeptId = pMF->m_szReceiptDeptID;
	if(pMF->m_bIsRequest && !pMF->m_szRequestDept.IsEmpty())
		szPaymentDeptId = pMF->m_szRequestDept;

	m_hms_fee_refundTbl.SetValue(_T("hfe_type"), m_szType);
	m_hms_fee_refundTbl.SetValue(_T("hfe_deptid"), szPaymentDeptId);
	m_hms_fee_refundTbl.SetValue(_T("hfe_patientno"), m_nPID);
	m_hms_fee_refundTbl.SetValue(_T("hfe_docno"), m_nDocumentNo);	
	m_hms_fee_refundTbl.SetValue(_T("hfe_serialno"), m_szSerialNo);
	m_hms_fee_refundTbl.SetValue(_T("hfe_receiptno"), m_nPaymentNo);
	m_hms_fee_refundTbl.SetValue(_T("hfe_staff"), pMF->GetCurrentUser());

	CString tmpStr, szTemp;
	tmpStr.Format(_T("%s %s"), m_szPaymentDate.Left(10), pMF->GetSysTime());
	m_hms_fee_refundTbl.SetValue(_T("hfe_date"), tmpStr);

	if(m_bSalaryInput)
	{
		m_hms_fee_refundTbl.SetValue(_T("hfe_desc"), m_szDescription);

	}
	else
	{
		if (!m_bInputDesc)
			m_hms_fee_refundTbl.SetValue(_T("hfe_desc"), _T("6"));
		else
			m_hms_fee_refundTbl.SetValue(_T("hfe_desc"), m_szDescription);
	}

	m_hms_fee_refundTbl.SetValue(_T("hfe_amount"), m_nAmount);
	m_hms_fee_refundTbl.SetValue(_T("hfe_moduleid"), pMF->IsInPatient()?_T("TM"):_T("EM"));
	m_hms_fee_refundTbl.SetValue(_T("hfe_group"), m_szPaymentTypeKey);

}
void CHMSFeeRefundDialog::SetDefaultValues()
{

	m_nPaymentNo=0;
//	m_szPaymentDate.Empty();
	m_nAmount=0;
//	m_szDescription.Empty();
	m_bPrintPayment=TRUE;
	m_bInputDesc=FALSE;
	m_szSerialNo = _T("PC");
	if(m_szType == _T("S"))
	{
		
	}

}
int CHMSFeeRefundDialog::SetMode(int nMode){
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
			m_wndPaymentDate.EnableWindow(false);
		}
	//	if(m_szCategory == _T("D"))
	//		m_bPrintPayment = FALSE;
 		UpdateData(FALSE); 
 		return nOldMode; 
}


int CHMSFeeRefundDialog::OnSerialNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(m_wndSerialNo.GetWindowTextLength() == 0){
		m_szSerialNo = pMF->GetCurrentUser();
		m_wndPaymentNo.EnableWindow(FALSE);
		UpdateData(false);
	}
	else
		m_wndPaymentNo.EnableWindow(FALSE);
	return 0;
} 
/*void CHMSFeeRefundDialog::OnPaymentNoChange(){
	
} */
/*void CHMSFeeRefundDialog::OnPaymentNoSetfocus(){
	
} */
/*void CHMSFeeRefundDialog::OnPaymentNoKillfocus(){
	
} */
int CHMSFeeRefundDialog::OnPaymentNoCheckValue(){
	UpdateData(true);
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	if(GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_refund " ) \
			_T("WHERE hfe_docno<>%ld and trunc_date(hfe_date)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and hfe_serialno='%s' and hfe_receiptno=%ld"), 
			m_nDocumentNo, m_szPaymentDate, m_szSerialNo,  m_nPaymentNo);

		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			m_wndPaymentNo.SetToolTipMessage(_T("Invoice No is existing in the database."));
			return -1;
		}
	}
	else
	{
		szSQL.Format(_T("SELECT * FROM hms_fee_refund " ) \
			_T("WHERE trunc_date(hfe_date)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and hfe_serialno='%s' and hfe_receiptno=%ld"), 
			 m_szPaymentDate, m_szSerialNo,  m_nPaymentNo);

		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			m_wndPaymentNo.SetToolTipMessage(_T("Invoice No is existing in the database."));
				return -1;
		}
	}
	
	return 0;
} 
/*void CHMSFeeRefundDialog::OnPaymentDateChange(){
	
} */
/*void CHMSFeeRefundDialog::OnPaymentDateSetfocus(){
	
} */
/*void CHMSFeeRefundDialog::OnPaymentDateKillfocus(){
	
} */
int CHMSFeeRefundDialog::OnPaymentDateCheckValue(){
	return 0;
} 
/*void CHMSFeeRefundDialog::OnAmountChange(){
	
} */
/*void CHMSFeeRefundDialog::OnAmountSetfocus(){
	
} */
/*void CHMSFeeRefundDialog::OnAmountKillfocus(){
	
} */
int CHMSFeeRefundDialog::OnAmountCheckValue(){
	UpdateData(true);
	if(m_nAmount <= 0)
		return -1;
	return 0;
} 
void CHMSFeeRefundDialog::OnPaymentTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeRefundDialog::OnPaymentTypeSelendok(){
	UpdateData(TRUE);
	//if(m_szDescription.IsEmpty())
	{
		m_szDescription = m_wndPaymentType.GetCurrent(1);
	}
	UpdateData(FALSE);
}
/*void CHMSFeeRefundDialog::OnPaymentTypeSetfocus(){
	
}*/
/*void CHMSFeeRefundDialog::OnPaymentTypeKillfocus(){
	
}*/
long CHMSFeeRefundDialog::OnPaymentTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndPaymentType, _T("CA_PAYMENT_REASON"), m_szPaymentTypeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentType.IsSearchKey() && !m_szPaymentTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentTypeKey
};
	m_wndPaymentType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeeRefundDialog::OnPaymentTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFeeRefundDialog::OnDescriptionChange(){
	
} */
/*void CHMSFeeRefundDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSFeeRefundDialog::OnDescriptionKillfocus(){
	
} */
int CHMSFeeRefundDialog::OnDescriptionCheckValue(){
	return 0;
} 
	void CHMSFeeRefundDialog::OnPrintPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSFeeRefundDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSFeeRefundDialog();	

} 
void CHMSFeeRefundDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}

void CHMSFeeRefundDialog::OnInputDescSelect()
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
		if(m_szType == _T("S") && m_szDescription.IsEmpty())
		{
			m_szDescription.Format(_T("\x43\x1EA5p l\x1B0\x1A1ng \x63ho \x62\x1ED9 \x111\x1ED9i"));
		}

	}

	UpdateData(FALSE);
}

int CHMSFeeRefundDialog::OnAddHMSFeeRefundDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFeeRefundDialog::OnEditHMSFeeRefundDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeRefundDialog::OnDeleteHMSFeeRefundDialog(){
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
 		OnCancelHMSFeeRefundDialog(); 
 	}
	return 0;
}
int CHMSFeeRefundDialog::OnSaveHMSFeeRefundDialog(){
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
		szSQL.Format(_T("HMS_FEE_REFUND_CREATE(%s) "), m_hms_fee_refundTbl.FormatSQL());
 	    m_nInvoiceNo = str2long(pMF->ExecDML(szSQL));			
	}

 	if (m_nInvoiceNo > 0) 
 	{ 
		/*szSQL.Format(_T("UPDATE hms_doc SET hfe_deposit_amount=hfe_deposit_amount-%f WHERE hd_docno=%ld"),
			         m_nCostDiscount, m_nDocumentNo);
		pMF->ExecSQL(szSQL);*/

		if (m_bPrintPayment)
		{			
			pMF->PrintRefund(m_nInvoiceNo);
		}
		CGuiDialog::OnOK();
		return 1;
	}

	return 0;
}
int CHMSFeeRefundDialog::OnCancelHMSFeeRefundDialog(){
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
int CHMSFeeRefundDialog::OnHMSFeeRefundDialogListLoadData(){
	return 0;
}
