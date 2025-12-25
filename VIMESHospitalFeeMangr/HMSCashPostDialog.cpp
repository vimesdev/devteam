#include "HMSCashPostDialog.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnYobCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnSexCheckValue();
} 
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnStaffChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnStaffChange();
} */
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnStaffSetfocus();} */ 
/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnStaffKillfocus();
} */
static int _OnStaffCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnStaffCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSCashPostDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashPostDialog *)pWnd)->OnDescriptionCheckValue();
}

static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCashPostDialog *pVw = (CHMSCashPostDialog *)pWnd;
	pVw->OnUnPostSelect();

}


static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSCashPostDialog *pVw = (CHMSCashPostDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCashPostDialog *pVw = (CHMSCashPostDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCashPostDialogFnc(CWnd *pWnd){
	 return ((CHMSCashPostDialog*)pWnd)->OnAddHMSCashPostDialog();
} 
static int _OnEditHMSCashPostDialogFnc(CWnd *pWnd){
	 return ((CHMSCashPostDialog*)pWnd)->OnEditHMSCashPostDialog();
} 
static int _OnDeleteHMSCashPostDialogFnc(CWnd *pWnd){
	 return ((CHMSCashPostDialog*)pWnd)->OnDeleteHMSCashPostDialog();
} 
static int _OnSaveHMSCashPostDialogFnc(CWnd *pWnd){
	 return ((CHMSCashPostDialog*)pWnd)->OnSaveHMSCashPostDialog();
} 
static int _OnCancelHMSCashPostDialogFnc(CWnd *pWnd){
	 return ((CHMSCashPostDialog*)pWnd)->OnCancelHMSCashPostDialog();
} 
CHMSCashPostDialog::CHMSCashPostDialog(CWnd *pParent, long nInvoiceNo):
	CGuiDialog(pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 275;
	SetDefaultValues();
	m_nInvoiceNo = nInvoiceNo;
}
CHMSCashPostDialog::~CHMSCashPostDialog(){
}
void CHMSCashPostDialog::OnCreateComponents(){
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 110, 55);
	m_wndDocumentNo.Create(this,115, 30, 215, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 220, 30, 320, 55);
	m_wndRecordNo.Create(this,325, 30, 425, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndReceiptPaymentOrderInformation.Create(this, _T("Receipt&&Payment Order Information"), 5, 5, 430, 240);
	m_wndPatientName.Create(this,115, 60, 425, 85); 
	m_wndYobLabel.Create(this, _T("Yob"), 10, 90, 110, 115);
	m_wndYob.Create(this,115, 90, 215, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 220, 90, 320, 115);
	m_wndSex.Create(this,325, 90, 425, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 110, 145);
	m_wndDepartment.Create(this,115, 120, 425, 145); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 10, 150, 110, 175);
	m_wndInvoiceNo.Create(this,115, 150, 215, 175); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 220, 150, 320, 175);
	m_wndInvoiceDate.Create(this,325, 150, 425, 175); 
	m_wndStaffLabel.Create(this, _T("Ng\x1B0\x1EDDi thu/\x63hi"), 10, 180, 110, 205);
	m_wndStaff.Create(this,115, 180, 215, 205); 
	m_wndAmountLabel.Create(this, _T("Amount"), 220, 180, 320, 205);
	m_wndAmount.Create(this,325, 180, 425, 205); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 210, 110, 235);
	m_wndDescription.Create(this,115, 210, 425, 235); 
	m_wndCancel.Create(this, _T("&Unpost"), 10, 245, 90, 270);
	m_wndCancel.ModifyStyle(WS_TABSTOP, 0);
	m_wndOK.Create(this, _T("&OK"), 265, 245, 345, 270);
	m_wndClose.Create(this, _T("&Close"), 350, 245, 430, 270);

}
void CHMSCashPostDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndYob.SetLimitText(35);
	m_wndYob.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetCheckValue(true);
	m_wndDepartment.SetLimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(16);
	m_wndInvoiceDate.SetReadOnly(TRUE);
	m_wndStaff.SetLimitText(35);
	m_wndAmount.SetLimitText(16);
	m_wndDescription.SetLimitText(35);

	m_wndAmount.SetCurrencyFormat(true);

}
void CHMSCashPostDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndYob.SetEvent(WE_CHANGE, _OnYobChangeFnc);
	//m_wndYob.SetEvent(WE_SETFOCUS, _OnYobSetfocusFnc);
	//m_wndYob.SetEvent(WE_KILLFOCUS, _OnYobKillfocusFnc);
	m_wndYob.SetEvent(WE_CHECKVALUE, _OnYobCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	//m_wndStaff.SetEvent(WE_CHANGE, _OnStaffChangeFnc);
	//m_wndStaff.SetEvent(WE_SETFOCUS, _OnStaffSetfocusFnc);
	//m_wndStaff.SetEvent(WE_KILLFOCUS, _OnStaffKillfocusFnc);
	m_wndStaff.SetEvent(WE_CHECKVALUE, _OnStaffCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	m_wndAmount.SetTextColor(RGB(255, 0, 0));
	SetWindowFont(&m_wndAmount, GetFaceName(), GetFaceSize()+1, TRUE);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));


	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CHMSCashPostDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_szYob);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartment);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_nInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSCashPostDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	SetDefaultValues();
	szSQL.Format(_T(" SELECT ") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T(" EXTRACT(YEAR FROM hp_birthdate) as yob, ") \
_T(" hp_sex as sex, ") \
_T("   hfe_docno       AS docno,") \
_T("   hfe_deptid      AS deptid,") \
_T("   CASE") \
_T("     WHEN hfe_class='I'") \
_T("     THEN hcr_recordno") \
_T("     ELSE CAST('' AS NVARCHAR2(15))") \
_T("   END        AS recordno,") \
_T("   hfe_payment AS amount, ") \
_T(" hfe_desc as description,  ") \
_T(" hfe_staff as staff, ") \
_T(" hfe_date as invoicedate, ") \
_T(" hfe_type, hfe_posted ") \
_T(" FROM hms_fee_invoice_view2") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_docno = hfe_docno)") \
_T(" LEFT JOIN hms_clinical_record") \
_T(" ON(hcr_docno = hfe_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hp_patientno     = hd_patientno)") \
_T(" WHERE hfe_invoiceno = %ld ") \
_T(" ORDER BY pname"), m_nInvoiceNo);
	rs.ExecSQL(szSQL);

	CString szType;
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_type"), szType);
		rs.GetValue(_T("invoicedate"), m_szInvoiceDate);
		rs.GetValue(_T("amount"), m_nAmount);
		rs.GetValue(_T("staff"), m_szStaff);
		rs.GetValue(_T("description"), m_szDescription);
		rs.GetValue(_T("deptid"), m_szDepartment);
		rs.GetValue(_T("docno"), m_nDocumentNo);
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("sex"), m_szSex);
		rs.GetValue(_T("yob"), m_szYob);
		rs.GetValue(_T("recordno"), m_szRecordNo);
		rs.GetValue(_T("hfe_posted"), m_szPosted);
		if(szType == _T("E") || szType == _T("F") || szType == _T("G") || szType == _T("S") || szType == _T("V"))
		{
			m_szTitle = _T("PHI\x1EBEU \x43HI TI\x1EC0N");
		}
		else
		{
			m_szTitle = _T("PHI\x1EBEU THU TI\x1EC0N");

		}
		SetWindowText(m_szTitle);
	}

}
void CHMSCashPostDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCashPostDialog::SetDefaultValues(){

	m_nDocumentNo=0;
	m_szRecordNo.Empty();
	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szSex.Empty();
	m_szDepartment.Empty();
	m_szInvoiceDate.Empty();
	m_szStaff.Empty();
	m_nAmount=0;
	m_szDescription.Empty();

}
int CHMSCashPostDialog::SetMode(int nMode){
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
 			EnableControls(FALSE);
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

		/*if(m_szPosted == _T("Y"))
		{
			m_wndOK.EnableWindow(FALSE);
			m_wndCancel.EnableWindow(TRUE);
		}
		else*/
		{
			m_wndOK.EnableWindow(TRUE);
			m_wndCancel.EnableWindow(TRUE);
		}
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSCashPostDialog::OnDocumentNoChange(){
	
} */
/*void CHMSCashPostDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSCashPostDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSCashPostDialog::OnRecordNoChange(){
	
} */
/*void CHMSCashPostDialog::OnRecordNoSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnRecordNoKillfocus(){
	
} */
int CHMSCashPostDialog::OnRecordNoCheckValue(){
	return 0;
} 
/*void CHMSCashPostDialog::OnPatientNameChange(){
	
} */
/*void CHMSCashPostDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnPatientNameKillfocus(){
	
} */
int CHMSCashPostDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSCashPostDialog::OnYobChange(){
	
} */
/*void CHMSCashPostDialog::OnYobSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnYobKillfocus(){
	
} */
int CHMSCashPostDialog::OnYobCheckValue(){
	return 0;
} 
/*void CHMSCashPostDialog::OnSexChange(){
	
} */
/*void CHMSCashPostDialog::OnSexSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnSexKillfocus(){
	
} */
int CHMSCashPostDialog::OnSexCheckValue(){
	return 0;
} 
/*void CHMSCashPostDialog::OnDepartmentChange(){
	
} */
/*void CHMSCashPostDialog::OnDepartmentSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnDepartmentKillfocus(){
	
} */
int CHMSCashPostDialog::OnDepartmentCheckValue(){
	return 0;
} 
/*void CHMSCashPostDialog::OnInvoiceNoChange(){
	
} */
/*void CHMSCashPostDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnInvoiceNoKillfocus(){
	
} */
int CHMSCashPostDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CHMSCashPostDialog::OnInvoiceDateChange(){
	
} */
/*void CHMSCashPostDialog::OnInvoiceDateSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnInvoiceDateKillfocus(){
	
} */
int CHMSCashPostDialog::OnInvoiceDateCheckValue(){
	return 0;
} 
/*void CHMSCashPostDialog::OnStaffChange(){
	
} */
/*void CHMSCashPostDialog::OnStaffSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnStaffKillfocus(){
	
} */
int CHMSCashPostDialog::OnStaffCheckValue(){
	return 0;
} 
/*void CHMSCashPostDialog::OnAmountChange(){
	
} */
/*void CHMSCashPostDialog::OnAmountSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnAmountKillfocus(){
	
} */
int CHMSCashPostDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CHMSCashPostDialog::OnDescriptionChange(){
	
} */
/*void CHMSCashPostDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSCashPostDialog::OnDescriptionKillfocus(){
	
} */
int CHMSCashPostDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSCashPostDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("HMS_FEE_INVOICE_POST(%ld, %ld, '%s') "), m_nDocumentNo, m_nInvoiceNo, pMF->GetCurrentUser());
	int  ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Kh\xF4ng \x64uy\x1EC7t \x111\x1B0\x1EE3\x63 h\xF3\x61 \x111\x1A1n"));
		return;
	}
	CGuiDialog::OnOK();
} 
void CHMSCashPostDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 


void CHMSCashPostDialog::OnUnPostSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	


	int ret = ShowMessageBox(_T("Bạn có muốn bỏ ghi sổ phiếu thu này không?"), MB_YESNO);
	if (ret == IDNO)
		return;
	szSQL.Format(_T("HMS_FEE_INVOICE_UNPOST(%ld, %ld, '%s') "), m_nDocumentNo, m_nInvoiceNo, pMF->GetCurrentUser());

	ret = str2int(pMF->ExecDML(szSQL));

	if(ret <= 0)
	{
		ShowMessageBox(_T("Không thể hủy được hóa đơn"));
		return;
	}
	
}

int CHMSCashPostDialog::OnAddHMSCashPostDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCashPostDialog::OnEditHMSCashPostDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCashPostDialog::OnDeleteHMSCashPostDialog(){
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
 		OnCancelHMSCashPostDialog();
 	}
	return 0;
}
int CHMSCashPostDialog::OnSaveHMSCashPostDialog(){
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
 		//OnHMSCashPostDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCashPostDialog::OnCancelHMSCashPostDialog(){
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
int CHMSCashPostDialog::OnHMSCashPostDialogListLoadData(){
	return 0;
}
