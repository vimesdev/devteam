#include "HMSCloseoutDialog.h"
#include "MainFrm.h"
/*static void _OnCurrentDateChangeFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnCurrentDateChange();
} */
/*static void _OnCurrentDateSetfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnCurrentDateSetfocus();} */ 
/*static void _OnCurrentDateKillfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnCurrentDateKillfocus();
} */
static int _OnCurrentDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCloseoutDialog *)pWnd)->OnCurrentDateCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCloseoutDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCloseoutDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnNextInvoiceDateChangeFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnNextInvoiceDateChange();
} */
/*static void _OnNextInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnNextInvoiceDateSetfocus();} */ 
/*static void _OnNextInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnNextInvoiceDateKillfocus();
} */
static int _OnNextInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCloseoutDialog *)pWnd)->OnNextInvoiceDateCheckValue();
} 
/*static void _OnDepositAmountChangeFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnDepositAmountChange();
} */
/*static void _OnDepositAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnDepositAmountSetfocus();} */ 
/*static void _OnDepositAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnDepositAmountKillfocus();
} */
static int _OnDepositAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCloseoutDialog *)pWnd)->OnDepositAmountCheckValue();
} 
/*static void _OnRefundAmountChangeFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnRefundAmountChange();
} */
/*static void _OnRefundAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnRefundAmountSetfocus();} */ 
/*static void _OnRefundAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnRefundAmountKillfocus();
} */
static int _OnRefundAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCloseoutDialog *)pWnd)->OnRefundAmountCheckValue();
} 
/*static void _OnExternalAmountChangeFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnExternalAmountChange();
} */
/*static void _OnExternalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnExternalAmountSetfocus();} */ 
/*static void _OnExternalAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnExternalAmountKillfocus();
} */
static int _OnExternalAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCloseoutDialog *)pWnd)->OnExternalAmountCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCloseoutDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCloseoutDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnCloseoutSelectFnc(CWnd *pWnd){
	CHMSCloseoutDialog *pVw = (CHMSCloseoutDialog *)pWnd;
	pVw->OnCloseoutSelect();
}

static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSCloseoutDialog *pVw = (CHMSCloseoutDialog *)pWnd;
	pVw->OnOkSelect();
}
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCloseoutDialog *pVw = (CHMSCloseoutDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSCloseoutDialogFnc(CWnd *pWnd){
	 return ((CHMSCloseoutDialog*)pWnd)->OnAddHMSCloseoutDialog();
} 
static int _OnEditHMSCloseoutDialogFnc(CWnd *pWnd){
	 return ((CHMSCloseoutDialog*)pWnd)->OnEditHMSCloseoutDialog();
} 
static int _OnDeleteHMSCloseoutDialogFnc(CWnd *pWnd){
	 return ((CHMSCloseoutDialog*)pWnd)->OnDeleteHMSCloseoutDialog();
} 
static int _OnSaveHMSCloseoutDialogFnc(CWnd *pWnd){
	 return ((CHMSCloseoutDialog*)pWnd)->OnSaveHMSCloseoutDialog();
} 
static int _OnCancelHMSCloseoutDialogFnc(CWnd *pWnd){
	 return ((CHMSCloseoutDialog*)pWnd)->OnCancelHMSCloseoutDialog();
} 
CHMSCloseoutDialog::CHMSCloseoutDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 570;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CHMSCloseoutDialog::~CHMSCloseoutDialog(){
}
void CHMSCloseoutDialog::OnCreateComponents(){
	m_wndInvoiceCreationDateSettings.Create(this, _T("Invoice Creation Date Settings"), 5, 5, 280, 150);
	m_wndAmountOfReceiptInformation.Create(this, _T("Amount of receipt information"), 285, 5, 520, 150);
	m_wndCurrentDateLabel.Create(this, _T("Last Date"), 10, 30, 160, 55);
	m_wndCurrentDate.Create(this,165, 30, 275, 55); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 10, 60, 160, 85);
	m_wndSerialNo.Create(this,165, 60, 275, 85); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 10, 90, 160, 115);
	m_wndReceiptNo.Create(this,165, 90, 275, 115); 
	m_wndNextInvoiceDateLabel.Create(this, _T("Working Date"), 10, 120, 160, 145);
	m_wndNextInvoiceDate.Create(this,165, 120, 275, 145); 
	m_wndDepositAmountLabel.Create(this, _T("Deposit Amount"), 290, 30, 410, 55);
	m_wndDepositAmount.Create(this,415, 30, 515, 55); 
	m_wndRefundAmountLabel.Create(this, _T("Refund Amount"), 290, 60, 410, 85);
	m_wndRefundAmount.Create(this,415, 60, 515, 85); 
	m_wndExternalAmountLabel.Create(this, _T("External Amount"), 290, 90, 410, 115);
	m_wndExternalAmount.Create(this,415, 90, 515, 115); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 290, 120, 410, 145);
	m_wndTotalAmount.Create(this,415, 120, 515, 145); 
	m_wndCloseout.Create(this, _T("&Apply"), 5, 155, 95, 180);
	m_wndOk.Create(this, _T("&Ok"), 335, 155, 426, 180);
	m_wndCancel.Create(this, _T("&Close"), 430, 155, 520, 180);
	m_wndCloseout.ModifyStyle(WS_TABSTOP, 0);
}
void CHMSCloseoutDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCurrentDate.SetCheckValue(true);
	m_wndCurrentDate.SetReadOnly(true);
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndReceiptNo.SetLimitText(16);
	m_wndReceiptNo.SetCheckValue(true);
	m_wndNextInvoiceDate.SetCheckValue(true);
	m_wndDepositAmount.SetLimitText(16);
	m_wndDepositAmount.SetCurrencyFormat(TRUE);
	m_wndDepositAmount.SetReadOnly(true);
	m_wndRefundAmount.SetLimitText(16);
	m_wndRefundAmount.SetCurrencyFormat(TRUE);
	m_wndRefundAmount.SetReadOnly(true);
	m_wndExternalAmount.SetLimitText(16);
	m_wndExternalAmount.SetCurrencyFormat(TRUE);
	m_wndExternalAmount.SetReadOnly(true);
	m_wndTotalAmount.SetLimitText(16);
	m_wndTotalAmount.SetCurrencyFormat(TRUE);
	m_wndTotalAmount.SetReadOnly(true);
}
void CHMSCloseoutDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCurrentDate.SetEvent(WE_CHANGE, _OnCurrentDateChangeFnc);
	//m_wndCurrentDate.SetEvent(WE_SETFOCUS, _OnCurrentDateSetfocusFnc);
	//m_wndCurrentDate.SetEvent(WE_KILLFOCUS, _OnCurrentDateKillfocusFnc);
	m_wndCurrentDate.SetEvent(WE_CHECKVALUE, _OnCurrentDateCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	//m_wndNextInvoiceDate.SetEvent(WE_CHANGE, _OnNextInvoiceDateChangeFnc);
	//m_wndNextInvoiceDate.SetEvent(WE_SETFOCUS, _OnNextInvoiceDateSetfocusFnc);
	//m_wndNextInvoiceDate.SetEvent(WE_KILLFOCUS, _OnNextInvoiceDateKillfocusFnc);
	m_wndNextInvoiceDate.SetEvent(WE_CHECKVALUE, _OnNextInvoiceDateCheckValueFnc);
	//m_wndDepositAmount.SetEvent(WE_CHANGE, _OnDepositAmountChangeFnc);
	//m_wndDepositAmount.SetEvent(WE_SETFOCUS, _OnDepositAmountSetfocusFnc);
	//m_wndDepositAmount.SetEvent(WE_KILLFOCUS, _OnDepositAmountKillfocusFnc);
	m_wndDepositAmount.SetEvent(WE_CHECKVALUE, _OnDepositAmountCheckValueFnc);
	//m_wndRefundAmount.SetEvent(WE_CHANGE, _OnRefundAmountChangeFnc);
	//m_wndRefundAmount.SetEvent(WE_SETFOCUS, _OnRefundAmountSetfocusFnc);
	//m_wndRefundAmount.SetEvent(WE_KILLFOCUS, _OnRefundAmountKillfocusFnc);
	m_wndRefundAmount.SetEvent(WE_CHECKVALUE, _OnRefundAmountCheckValueFnc);
	//m_wndExternalAmount.SetEvent(WE_CHANGE, _OnExternalAmountChangeFnc);
	//m_wndExternalAmount.SetEvent(WE_SETFOCUS, _OnExternalAmountSetfocusFnc);
	//m_wndExternalAmount.SetEvent(WE_KILLFOCUS, _OnExternalAmountKillfocusFnc);
	m_wndExternalAmount.SetEvent(WE_CHECKVALUE, _OnExternalAmountCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	m_wndCloseout.SetEvent(WE_CLICK, _OnCloseoutSelectFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();

}
void CHMSCloseoutDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCurrentDate.GetDlgCtrlID(), m_szCurrentDate);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_nReceiptNo);
	DDX_TextEx(pDX, m_wndNextInvoiceDate.GetDlgCtrlID(), m_szNextInvoiceDate);
	DDX_Text(pDX, m_wndDepositAmount.GetDlgCtrlID(), m_nDepositAmount);
	DDX_Text(pDX, m_wndRefundAmount.GetDlgCtrlID(), m_nRefundAmount);
	DDX_Text(pDX, m_wndExternalAmount.GetDlgCtrlID(), m_nExternalAmount);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CHMSCloseoutDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_fee_control WHERE hfc_userid='%s' "), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfc_recvdate"), m_szCurrentDate);
		rs.GetValue(_T("hfc_serialno"), m_szSerialNo);
		rs.GetValue(_T("hfc_receiptno"), m_nReceiptNo);
		m_szNextInvoiceDate = m_szCurrentDate;
		if(m_szSerialNo.IsEmpty())
			m_szSerialNo = pMF->GetCurrentUser();
	}
	else
	{
		m_szCurrentDate = pMF->GetSysDateTime();
		m_szNextInvoiceDate = pMF->GetSysDateTime();
		m_szSerialNo = pMF->GetCurrentUser();
		m_nReceiptNo = 1;

		szSQL.Format(_T("INSERT INTO hms_fee_control(hfc_userid, hfc_recvdate,hfc_serialno,hfc_receiptno) ") \
			_T("VALUES('%s', '%s','%s',%d"), pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->GetCurrentUser(), 1);
		pMF->ExecSQL(szSQL);
	}

	szSQL.Format(_T("SELECT sum(hfe_amount) as deposit FROM hms_fee_deposit WHERE hfe_staff='%s' and trunc_date(hfe_date)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and hfe_status <>'C' and hfe_locked='N'"), pMF->GetCurrentUser(), m_szCurrentDate);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("deposit"), m_nDepositAmount);
	szSQL.Format(_T("SELECT sum(hfe_amount) as refund FROM hms_fee_refund WHERE hfe_staff='%s' and trunc_date(hfe_date)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and hfe_status <>'C' and hfe_locked='N'"), pMF->GetCurrentUser(), m_szCurrentDate);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("refund"), m_nRefundAmount);

	szSQL.Format(_T("SELECT sum(hfe_amount) as examount FROM hms_fee_invoice WHERE hfe_staff='%s' and trunc_date(hfe_date)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and hfe_class='X' and hfe_status <>'C' and hfe_locked='N'"), pMF->GetCurrentUser(), m_szCurrentDate);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("examount"), m_nExternalAmount);


	double nAmount;
	szSQL.Format(_T("SELECT sum(hfe_amount) as amount FROM hms_fee_invoice WHERE hfe_staff='%s' and trunc_date(hfe_date)=to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and hfe_class <>'X' and hfe_status<>'C' and hfe_locked='N' "), pMF->GetCurrentUser(), m_szCurrentDate);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("amount"), nAmount);
	m_nTotalAmount = (m_nDepositAmount+m_nExternalAmount+nAmount)-m_nRefundAmount;
	SetMode(GetMode());

}
void CHMSCloseoutDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCloseoutDialog::SetDefaultValues(){

	m_szCurrentDate.Empty();
	m_szSerialNo.Empty();
	m_nReceiptNo=0;
	m_szNextInvoiceDate.Empty();
	m_nDepositAmount=0;
	m_nRefundAmount=0;
	m_nExternalAmount=0;
	m_nTotalAmount=0;

}
int CHMSCloseoutDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndOk.ShowWindow(SW_HIDE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndCloseout.ShowWindow(SW_HIDE);
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
/*void CHMSCloseoutDialog::OnCurrentDateChange(){
	
} */
/*void CHMSCloseoutDialog::OnCurrentDateSetfocus(){
	
} */
/*void CHMSCloseoutDialog::OnCurrentDateKillfocus(){
	
} */
int CHMSCloseoutDialog::OnCurrentDateCheckValue(){
	return 0;
} 
/*void CHMSCloseoutDialog::OnSerialNoChange(){
	
} */
/*void CHMSCloseoutDialog::OnSerialNoSetfocus(){
	
} */
/*void CHMSCloseoutDialog::OnSerialNoKillfocus(){
	
} */
int CHMSCloseoutDialog::OnSerialNoCheckValue(){
	return 0;
} 
/*void CHMSCloseoutDialog::OnReceiptNoChange(){
	
} */
/*void CHMSCloseoutDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSCloseoutDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSCloseoutDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSCloseoutDialog::OnNextInvoiceDateChange(){
	
} */
/*void CHMSCloseoutDialog::OnNextInvoiceDateSetfocus(){
	
} */
/*void CHMSCloseoutDialog::OnNextInvoiceDateKillfocus(){
	
} */
int CHMSCloseoutDialog::OnNextInvoiceDateCheckValue()
{
	UpdateData(TRUE);
	int n = CompareDate(m_szNextInvoiceDate, m_szCurrentDate);
	_debug(_T("%d"), n);
	if(n < 0 || n > 7)
		return -1;

	return 0;
} 
/*void CHMSCloseoutDialog::OnDepositAmountChange(){
	
} */
/*void CHMSCloseoutDialog::OnDepositAmountSetfocus(){
	
} */
/*void CHMSCloseoutDialog::OnDepositAmountKillfocus(){
	
} */
int CHMSCloseoutDialog::OnDepositAmountCheckValue(){
	return 0;
} 
/*void CHMSCloseoutDialog::OnRefundAmountChange(){
	
} */
/*void CHMSCloseoutDialog::OnRefundAmountSetfocus(){
	
} */
/*void CHMSCloseoutDialog::OnRefundAmountKillfocus(){
	
} */
int CHMSCloseoutDialog::OnRefundAmountCheckValue(){
	return 0;
} 
/*void CHMSCloseoutDialog::OnExternalAmountChange(){
	
} */
/*void CHMSCloseoutDialog::OnExternalAmountSetfocus(){
	
} */
/*void CHMSCloseoutDialog::OnExternalAmountKillfocus(){
	
} */
int CHMSCloseoutDialog::OnExternalAmountCheckValue(){
	return 0;
} 
/*void CHMSCloseoutDialog::OnTotalAmountChange(){
	
} */
/*void CHMSCloseoutDialog::OnTotalAmountSetfocus(){
	
} */
/*void CHMSCloseoutDialog::OnTotalAmountKillfocus(){
	
} */
int CHMSCloseoutDialog::OnTotalAmountCheckValue(){
	return 0;
} 
void CHMSCloseoutDialog::OnCloseoutSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCloseoutDialog();
	
}

void CHMSCloseoutDialog::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnOK();
}

void CHMSCloseoutDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSCloseoutDialog::OnAddHMSCloseoutDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSCloseoutDialog::OnEditHMSCloseoutDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCloseoutDialog::OnDeleteHMSCloseoutDialog(){
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
 		OnCancelHMSCloseoutDialog(); 
 	}
	return 0;
}
int CHMSCloseoutDialog::OnSaveHMSCloseoutDialog(){
 	if(GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	CString szSQL; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int ret;
	/*
	ret = CompareDate(m_szCurrentDate, pMF->GetSysDate());
	if(ret > 0){
		ShowMessageBox(_T("Working date > current date. Cannot close out"));
		return 0;
	}

	ret = ShowMessageBox(_T("Do you want to close out. All receipted fee will be  look?(Y/N)"), MB_YESNO|MB_DEFBUTTON2|MB_ICONQUESTION);
	if(ret != IDYES)
		return 0;

	ret = CompareDate(m_szNextInvoiceDate, pMF->GetSysDate());

	if(ret > 1){
		ret = ShowMessageBox(_T("Next receipt date > current date +1. Do you want to close out?(Y/N)"), MB_YESNO|MB_DEFBUTTON2|MB_ICONQUESTION);
		if(ret == IDNO)
			return 0;
	}
*/
 /*
 AfxGetApp()->BeginWaitCursor();

 szSQL.Format(_T("HMS_FEE_INVOICE_LOCK('%s','%s', '%s', %ld, '%s') "), 
	 pMF->GetCurrentUser(), 
	 m_szCurrentDate,
	 m_szSerialNo,
	 m_nReceiptNo,
	 m_szNextInvoiceDate);
	
 ret = str2int(pMF->ExecDML(szSQL)); 

AfxGetApp()->EndWaitCursor();
*/
	szSQL.Format(_T("UPDATE hms_fee_control SET hfc_recvdate=TO_DATE('%s', 'YYYY-MM-DD'), hfc_serialno='%s', hfc_receiptno=%ld") \
		_T("WHERE hfc_userid='%s' "), 
		m_szNextInvoiceDate, 
		m_szSerialNo,
		m_nReceiptNo,
		pMF->GetCurrentUser());
	ret = pMF->ExecSQL(szSQL);
	if(ret >= 0) 
 	{
		CGuiDialog::OnOK();
	} 
 	else 
 	{ 

 	} 
 	return ret; 
}
int CHMSCloseoutDialog::OnCancelHMSCloseoutDialog(){
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
int CHMSCloseoutDialog::OnHMSCloseoutDialogListLoadData(){
	return 0;
}
