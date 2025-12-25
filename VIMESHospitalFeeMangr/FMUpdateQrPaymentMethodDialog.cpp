#include "FMUpdateQrPaymentMethodDialog.h"
#include "MainFrm.h"
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CFMUpdateQrPaymentDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CFMUpdateQrPaymentDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CFMUpdateQrPaymentDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CFMUpdateQrPaymentDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnReceiptByChangeFnc(CWnd *pWnd){
	((CFMUpdateQrPaymentDialog *)pWnd)->OnReceiptByChange();
} */
/*static void _OnReceiptBySetfocusFnc(CWnd *pWnd){
	((CFMUpdateQrPaymentDialog *)pWnd)->OnReceiptBySetfocus();} */ 
/*static void _OnReceiptByKillfocusFnc(CWnd *pWnd){
	((CFMUpdateQrPaymentDialog *)pWnd)->OnReceiptByKillfocus();
} */
static int _OnReceiptByCheckValueFnc(CWnd *pWnd){
	return ((CFMUpdateQrPaymentDialog *)pWnd)->OnReceiptByCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CFMUpdateQrPaymentDialog *pVw = (CFMUpdateQrPaymentDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFMUpdateQrPaymentDialog *pVw = (CFMUpdateQrPaymentDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFMQrPaymentDialogFnc(CWnd *pWnd){
	 return ((CFMUpdateQrPaymentDialog*)pWnd)->OnAddFMQrPaymentDialog();
} 
static int _OnEditFMQrPaymentDialogFnc(CWnd *pWnd){
	 return ((CFMUpdateQrPaymentDialog*)pWnd)->OnEditFMQrPaymentDialog();
} 
static int _OnDeleteFMQrPaymentDialogFnc(CWnd *pWnd){
	 return ((CFMUpdateQrPaymentDialog*)pWnd)->OnDeleteFMQrPaymentDialog();
} 
static int _OnSaveFMQrPaymentDialogFnc(CWnd *pWnd){
	 return ((CFMUpdateQrPaymentDialog*)pWnd)->OnSaveFMQrPaymentDialog();
} 
static int _OnCancelFMQrPaymentDialogFnc(CWnd *pWnd){
	 return ((CFMUpdateQrPaymentDialog*)pWnd)->OnCancelFMQrPaymentDialog();
}
static long _OnCashTypeLoadDataFnc(CWnd *pWnd)
{
	return ((CFMUpdateQrPaymentDialog *)pWnd)->OnCashTypeLoadData();
}
CFMUpdateQrPaymentDialog::CFMUpdateQrPaymentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 385;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CFMUpdateQrPaymentDialog::~CFMUpdateQrPaymentDialog(){
}
void CFMUpdateQrPaymentDialog::OnCreateComponents()
{
	m_wndReceiptDateLabel.Create(this, _T("Date"), 10, 30, 110, 55);
	m_wndReceiptDate.Create(this,115, 30, 245, 55); 
	m_wndReceiptByLabel.Create(this, _T("Hình thức"), 10, 60, 110, 85);
	m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 369, 150);
	m_wndReceiptBy.Create(this,115, 60, 365, 85); 
	m_wndCashNameLabel.Create(this, _T("Số phiếu"), 10, 91, 110, 116);
	m_wndCashName.Create(this,115, 91, 365, 116); 
	m_wndCashTypeLabel.Create(this, _T("Loại phiếu"), 10, 121, 110, 146);
	m_wndCashType.Create(this,115, 121, 365, 146); 
	m_wndOK.Create(this, _T("&OK"), 185, 156, 275, 181);
	m_wndCancel.Create(this, _T("&Cancel"), 280, 156, 370, 181);
	m_wndReceiptDate.SetReadOnly(true);
	m_wndCashName.SetReadOnly(true);

}
void CFMUpdateQrPaymentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndReceiptDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndReceiptDate.SetCheckValue(true);
//	m_wndReceiptDate.SetReadOnly(true);
	m_wndReceiptBy.SetLimitText(35);
//	m_wndReceiptBy.SetCheckValue(true);
	m_wndReceiptBy.SetReadOnly(true);

	m_wndCashType.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndCashType.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	
}
void CFMUpdateQrPaymentDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	//m_wndReceiptBy.SetEvent(WE_CHANGE, _OnReceiptByChangeFnc);
	//m_wndReceiptBy.SetEvent(WE_SETFOCUS, _OnReceiptBySetfocusFnc);
	//m_wndReceiptBy.SetEvent(WE_KILLFOCUS, _OnReceiptByKillfocusFnc);
	m_wndReceiptBy.SetEvent(WE_CHECKVALUE, _OnReceiptByCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndCashType.SetEvent(WE_LOADDATA, _OnCashTypeLoadDataFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CFMUpdateQrPaymentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndReceiptBy.GetDlgCtrlID(), m_szReceiptBy);
	DDX_Text(pDX, m_wndCashName.GetDlgCtrlID(), m_szCashName);
	DDX_TextEx(pDX, m_wndCashType.GetDlgCtrlID(), m_szCashTypeKey);

}
void CFMUpdateQrPaymentDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT hfe_date, hfe_staff, hfe_invoiceno, hfe_payment_method ") \
	_T(" from hms_fee_invoice") \
	_T(" where hfe_docno=%ld") \
	_T(" and hfe_invoiceno=%ld"), pMF->m_nDocumentNo, m_nInvoiceNo);

	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_date"), m_szReceiptDate);
		rs.GetValue(_T("hfe_payment_method"), m_szReceiptBy);
		rs.GetValue(_T("hfe_invoiceno"), m_szCashName);
	}	

}
void CFMUpdateQrPaymentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMUpdateQrPaymentDialog::SetDefaultValues(){

	m_szReceiptDate.Empty();
	m_szReceiptBy.Empty();
	m_szCashName.Empty();
	m_szCashTypeKey.Empty();

}
int CFMUpdateQrPaymentDialog::SetMode(int nMode){
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
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CFMUpdateQrPaymentDialog::OnReceiptDateChange(){
	
} */
/*void CFMUpdateQrPaymentDialog::OnReceiptDateSetfocus(){
	
} */
/*void CFMUpdateQrPaymentDialog::OnReceiptDateKillfocus(){
	
} */
int CFMUpdateQrPaymentDialog::OnReceiptDateCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSysDate;
	szSysDate = pMF->GetSysDate();
	int n = CompareDate(m_szReceiptDate, szSysDate);
_tprintf(_T("\r\n%d"),n);
	if (n < -365 || n > 365)
		return -1;
	return 0;
} 
/*void CFMUpdateQrPaymentDialog::OnReceiptByChange(){
	
} */
/*void CFMUpdateQrPaymentDialog::OnReceiptBySetfocus(){
	
} */
/*void CFMUpdateQrPaymentDialog::OnReceiptByKillfocus(){
	
} */
int CFMUpdateQrPaymentDialog::OnReceiptByCheckValue(){
	return 0;
}

long CFMUpdateQrPaymentDialog::OnCashTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCashType.AddItems(_T("TM1"), _T("Tiền mặt"), NULL);
	m_wndCashType.AddItems(_T("ATM"), _T("Thẻ ngân hàng"), NULL);
	m_wndCashType.AddItems(_T("CK"), _T("Chuyển khoản"), NULL);
	m_wndCashType.AddItems(_T("QR"), _T("QR"), NULL);
	return 0;
}

void CFMUpdateQrPaymentDialog::OnOKSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szInvoiceno, szCashtype, szInvoicheck, szPaymentMethod;		
	szPaymentMethod = m_wndCashType.GetCurrent(0);
	
	if(!IsValidateData())
 		return;	

	 int ret = ShowMessageBox(_T("Chức năng này sẽ cập nhật lại phiếu, OK?"),MB_YESNO);
		if(ret == IDNO)
		return;
		else	
	 if(!szPaymentMethod.IsEmpty())
	{
			szSQL.Format(_T(" UPDATE hms_fee_invoice") \
			_T(" set hfe_payment_method='%s', hfe_cash_id = 0, hfe_staff = '%s' ") \
			_T(" where hfe_docno=%ld") \
			_T(" and hfe_invoiceno=%ld"), szPaymentMethod, pMF->GetCurrentUser(), pMF->m_nDocumentNo, m_nInvoiceNo);
		pMF->ExecSQL(szSQL);		
	}

	//Cập nhật thêm phiếu tạm gửi, nếu có

	 if(!szPaymentMethod.IsEmpty())
	{
			szSQL.Format(_T(" UPDATE hms_fee_deposit") \
			_T(" set hfe_payment_method='%s', hfe_cash_id = 0, hfe_staff = '%s' ") \
			_T(" where hfe_docno=%ld") \
			_T(" and hfe_invoiceno=%ld"), szPaymentMethod, pMF->GetCurrentUser(), pMF->m_nDocumentNo, m_nInvoiceNo);
		pMF->ExecSQL(szSQL);		
	}

	CGuiDialog::OnOK();
} 
void CFMUpdateQrPaymentDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFMUpdateQrPaymentDialog::OnAddFMQrPaymentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMUpdateQrPaymentDialog::OnEditFMQrPaymentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMUpdateQrPaymentDialog::OnDeleteFMQrPaymentDialog(){
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
 		OnCancelFMQrPaymentDialog();
 	}
	return 0;
}
int CFMUpdateQrPaymentDialog::OnSaveFMQrPaymentDialog(){
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
 		//OnFMQrPaymentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMUpdateQrPaymentDialog::OnCancelFMQrPaymentDialog(){
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
int CFMUpdateQrPaymentDialog::OnFMQrPaymentDialogListLoadData(){
	return 0;
}