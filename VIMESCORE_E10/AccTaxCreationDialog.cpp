#include "AccTaxCreationDialog.h"
#include "MainFrame_E10.h"
/*static void _OnFormNoChangeFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnFormNoChange();
} */
/*static void _OnFormNoSetfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnFormNoSetfocus();} */ 
/*static void _OnFormNoKillfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnFormNoKillfocus();
} */
static int _OnFormNoCheckValueFnc(CWnd *pWnd){
	return ((CAccTaxCreationDialog *)pWnd)->OnFormNoCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CAccTaxCreationDialog *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CAccTaxCreationDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CAccTaxCreationDialog *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnAccountingObjectNameChangeFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnAccountingObjectNameChange();
} */
/*static void _OnAccountingObjectNameSetfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnAccountingObjectNameSetfocus();} */ 
/*static void _OnAccountingObjectNameKillfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnAccountingObjectNameKillfocus();
} */
static int _OnAccountingObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CAccTaxCreationDialog *)pWnd)->OnAccountingObjectNameCheckValue();
} 
/*static void _OnVATCodeChangeFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnVATCodeChange();
} */
/*static void _OnVATCodeSetfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnVATCodeSetfocus();} */ 
/*static void _OnVATCodeKillfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnVATCodeKillfocus();
} */
static int _OnVATCodeCheckValueFnc(CWnd *pWnd){
	return ((CAccTaxCreationDialog *)pWnd)->OnVATCodeCheckValue();
} 
/*static void _OnAccountingObjectAddressChangeFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnAccountingObjectAddressChange();
} */
/*static void _OnAccountingObjectAddressSetfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnAccountingObjectAddressSetfocus();} */ 
/*static void _OnAccountingObjectAddressKillfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnAccountingObjectAddressKillfocus();
} */
static int _OnAccountingObjectAddressCheckValueFnc(CWnd *pWnd){
	return ((CAccTaxCreationDialog *)pWnd)->OnAccountingObjectAddressCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAccTaxCreationDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAccTaxCreationDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CAccTaxCreationDialog *pVw = (CAccTaxCreationDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAccTaxCreationDialog *pVw = (CAccTaxCreationDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddAccTaxCreationDialogFnc(CWnd *pWnd){
	 return ((CAccTaxCreationDialog*)pWnd)->OnAddAccTaxCreationDialog();
} 
static int _OnEditAccTaxCreationDialogFnc(CWnd *pWnd){
	 return ((CAccTaxCreationDialog*)pWnd)->OnEditAccTaxCreationDialog();
} 
static int _OnDeleteAccTaxCreationDialogFnc(CWnd *pWnd){
	 return ((CAccTaxCreationDialog*)pWnd)->OnDeleteAccTaxCreationDialog();
} 
static int _OnSaveAccTaxCreationDialogFnc(CWnd *pWnd){
	 return ((CAccTaxCreationDialog*)pWnd)->OnSaveAccTaxCreationDialog();
} 
static int _OnCancelAccTaxCreationDialogFnc(CWnd *pWnd){
	 return ((CAccTaxCreationDialog*)pWnd)->OnCancelAccTaxCreationDialog();
} 
CAccTaxCreationDialog::CAccTaxCreationDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 751;
	m_nDlgHeight = 474;
	SetDefaultValues();
}
CAccTaxCreationDialog::~CAccTaxCreationDialog(){
}
void CAccTaxCreationDialog::OnCreateComponents(){
	m_wndFormNoLabel.Create(this, _T("Form No"), 10, 29, 110, 54);
	m_wndTaxInformation.Create(this, _T("Tax Information"), 5, 5, 510, 209);
	m_wndFormNo.Create(this,115, 29, 260, 54); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 265, 29, 365, 54);
	m_wndSerialNo.Create(this,370, 29, 505, 54); 
	m_wndInvoiceNoLabel.Create(this, _T("Voucher No"), 10, 59, 110, 84);
	m_wndInvoiceNo.Create(this,115, 59, 260, 84); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 265, 59, 365, 84);
	m_wndInvoiceDate.Create(this,370, 59, 505, 84); 
	m_wndAccountingObjectNameLabel.Create(this, _T("Object Name"), 10, 89, 110, 114);
	m_wndAccountingObjectName.Create(this,115, 89, 505, 114); 
	m_wndVATCodeLabel.Create(this, _T("VAT Code"), 10, 119, 110, 144);
	m_wndVATCode.Create(this,115, 119, 260, 144); 
	m_wndAccountingObjectAddressLabel.Create(this, _T("Address"), 10, 149, 110, 174);
	m_wndAccountingObjectAddress.Create(this,115, 149, 505, 174); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 179, 110, 204);
	m_wndDescription.Create(this,115, 179, 505, 204); 
	m_wndApplyAll.Create(this, _T("Apply for all lines"), 10, 214, 200, 239 );
	m_wndOK.Create(this, _T("&OK"), 345, 214, 425, 239);
	m_wndCancel.Create(this, _T("&Cancel"), 430, 214, 510, 239);

}
void CAccTaxCreationDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndInvoiceNo.SetLimitText(32);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInvoiceDate.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(35);
	m_wndSerialNo.SetCheckValue(true);
	m_wndVATCode.SetLimitText(35);
//	m_wndVATCode.SetCheckValue(true);
	

	
	m_wndAccountingObjectName.SetReadOnly(true);
	m_wndAccountingObjectAddress.SetReadOnly(true);
	m_wndVATCode.SetReadOnly(true);
	

	m_wndDescription.SetLimitText(255);
	m_wndDescription.SetCheckValue(true);

	m_acc_invoice_vatTbl.SetTableName(_T("acc_invoice_vat"));
	m_acc_invoice_vatTbl.AddField(_T("vat_createdby"), dfText, 32); 
	m_acc_invoice_vatTbl.AddField(_T("vat_updatedby"), dfText, 32); 
	m_acc_invoice_vatTbl.AddField(_T("vat_reference_id"), dfText, 32); 
	m_acc_invoice_vatTbl.AddField(_T("vat_invoicetype"), dfText, 3); 
	m_acc_invoice_vatTbl.AddField(_T("vat_formno"), dfText, 32); 
	m_acc_invoice_vatTbl.AddField(_T("vat_serialno"), dfText, 32); 
	m_acc_invoice_vatTbl.AddField(_T("vat_invoiceno"), dfText, 32); 
	m_acc_invoice_vatTbl.AddField(_T("vat_invoicedate"), dfDate); 
	m_acc_invoice_vatTbl.AddField(_T("vat_vatcode"), dfText, 32); 
	m_acc_invoice_vatTbl.AddField(_T("vat_user_id"), dfText, 32); 


}

void CAccTaxCreationDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFormNo.SetEvent(WE_CHANGE, _OnFormNoChangeFnc);
	//m_wndFormNo.SetEvent(WE_SETFOCUS, _OnFormNoSetfocusFnc);
	//m_wndFormNo.SetEvent(WE_KILLFOCUS, _OnFormNoKillfocusFnc);
	m_wndFormNo.SetEvent(WE_CHECKVALUE, _OnFormNoCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	//m_wndAccountingObjectName.SetEvent(WE_CHANGE, _OnAccountingObjectNameChangeFnc);
	//m_wndAccountingObjectName.SetEvent(WE_SETFOCUS, _OnAccountingObjectNameSetfocusFnc);
	//m_wndAccountingObjectName.SetEvent(WE_KILLFOCUS, _OnAccountingObjectNameKillfocusFnc);
	m_wndAccountingObjectName.SetEvent(WE_CHECKVALUE, _OnAccountingObjectNameCheckValueFnc);
	//m_wndVATCode.SetEvent(WE_CHANGE, _OnVATCodeChangeFnc);
	//m_wndVATCode.SetEvent(WE_SETFOCUS, _OnVATCodeSetfocusFnc);
	//m_wndVATCode.SetEvent(WE_KILLFOCUS, _OnVATCodeKillfocusFnc);
	m_wndVATCode.SetEvent(WE_CHECKVALUE, _OnVATCodeCheckValueFnc);
	//m_wndAccountingObjectAddress.SetEvent(WE_CHANGE, _OnAccountingObjectAddressChangeFnc);
	//m_wndAccountingObjectAddress.SetEvent(WE_SETFOCUS, _OnAccountingObjectAddressSetfocusFnc);
	//m_wndAccountingObjectAddress.SetEvent(WE_KILLFOCUS, _OnAccountingObjectAddressKillfocusFnc);
	m_wndAccountingObjectAddress.SetEvent(WE_CHECKVALUE, _OnAccountingObjectAddressCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT)
	{
		GetDataToScreen();
	}
	SetMode(nMode);

}
void CAccTaxCreationDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFormNo.GetDlgCtrlID(), m_szFormNo);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_Text(pDX, m_wndAccountingObjectName.GetDlgCtrlID(), m_szAccountingObjectName);
	DDX_Text(pDX, m_wndVATCode.GetDlgCtrlID(), m_szVATCode);
	DDX_Text(pDX, m_wndAccountingObjectAddress.GetDlgCtrlID(), m_szAccountingObjectAddress);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndApplyAll.GetDlgCtrlID(), m_bApplyAll);

}
void CAccTaxCreationDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T(" SELECT vat_invoiceno,") \
_T(" 	vat_invoicedate,") \
_T(" 	vat_serialno,") \
_T(" 	vat_formno,") \
_T(" 	vat_vatcode,") \
_T(" 	fact_description,") \
_T(" 	fact_baseamt,") \
_T(" 	fact_tax_id,") \
_T(" 	fact_amount") \
_T(" FROM fa_cashtax ") \
_T(" LEFT JOIN acc_invoice_vat ON(fact_cash_id=vat_reference_id and fact_invoicetax_id=vat_invoiceno)") \
_T(" WHERE fact_cashtax_id='%s'"), m_szTaxInvoiceID);

//Notice(szSQL);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("vat_invoiceno"), m_szInvoiceNo);
		rs.GetValue(_T("vat_invoicedate"), tmpStr);
	//	rs.GetValue(_T("vat_serialno"), m_szSerialNo);
	//	rs.GetValue(_T("vat_formno"), m_szFormNo);
		rs.GetValue(_T("fact_description"), m_szDescription);
		if(!tmpStr.IsEmpty())
			m_szInvoiceDate = tmpStr;
		
	}
	
	if(m_szFormNo.IsEmpty())
	{
		szSQL.Format(_T("acc_get_defvalue('ACC_INVOICE_VAT_RFORMNO') "));
		m_szFormNo = pMF->ExecDML(szSQL);
		szSQL.Format(_T("acc_get_defvalue('ACC_INVOICE_VAT_RSERIALNO') "));
		m_szSerialNo = pMF->ExecDML(szSQL);
	}

}

void CAccTaxCreationDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_acc_invoice_vatTbl.SetValue(_T("vat_createdby"), pMF->GetCurrentUser()); 
	m_acc_invoice_vatTbl.SetValue(_T("vat_updatedby"), pMF->GetCurrentUser()); 
	m_acc_invoice_vatTbl.SetValue(_T("vat_user_id"), pMF->GetCurrentUser()); 
	m_acc_invoice_vatTbl.SetValue(_T("vat_reference_id"), m_szReferenceID); 
	m_acc_invoice_vatTbl.SetValue(_T("vat_invoicetype"), m_szInvoiceType); 
	m_acc_invoice_vatTbl.SetValue(_T("vat_invoiceno"), m_szInvoiceNo); 
	m_acc_invoice_vatTbl.SetValue(_T("vat_invoicedate"), m_szInvoiceDate); 
	m_acc_invoice_vatTbl.SetValue(_T("vat_serialno"), m_szSerialNo); 
	m_acc_invoice_vatTbl.SetValue(_T("vat_formno"), m_szFormNo); 
	m_acc_invoice_vatTbl.SetValue(_T("vat_vatcode"), m_szVATCode); 
	//m_acc_invoice_vatTbl.SetValue(_T("vat_description"), m_szDescription); 
	

}

void CAccTaxCreationDialog::SetDefaultValues(){

	m_szInvoiceNo.Empty();
	m_szInvoiceDate.Empty();
	m_szSerialNo.Empty();
	m_szVATCode.Empty();
	m_szFormNo.Empty();
	m_szDescription.Empty();
	m_bApplyAll = FALSE;

}

int CAccTaxCreationDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			
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

/*void CAccTaxCreationDialog::OnFormNoChange(){
	
} */
/*void CAccTaxCreationDialog::OnFormNoSetfocus(){
	
} */
/*void CAccTaxCreationDialog::OnFormNoKillfocus(){
	
} */
int CAccTaxCreationDialog::OnFormNoCheckValue(){
	return 0;
} 
/*void CAccTaxCreationDialog::OnSerialNoChange(){
	
} */
/*void CAccTaxCreationDialog::OnSerialNoSetfocus(){
	
} */
/*void CAccTaxCreationDialog::OnSerialNoKillfocus(){
	
} */
int CAccTaxCreationDialog::OnSerialNoCheckValue(){
	return 0;
}
 
/*void CAccTaxCreationDialog::OnInvoiceNoChange(){
	
} */
/*void CAccTaxCreationDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CAccTaxCreationDialog::OnInvoiceNoKillfocus(){
	
} */
int CAccTaxCreationDialog::OnInvoiceNoCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
szSQL.Format(_T(" SELECT vat_invoice_vat_id, vat_invoiceno,") \
_T(" 	vat_invoicedate,") \
_T(" 	vat_serialno,") \
_T(" 	vat_formno,") \
_T(" 	vat_vatcode,") \
_T(" 	vat_reference_id ") \
_T(" FROM acc_invoice_vat ") \
_T(" WHERE vat_invoiceno='%s' "), m_szInvoiceNo);
rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("vat_reference_id"), tmpStr);
		if(tmpStr != m_szReferenceID)
		{
			m_wndInvoiceNo.SetToolTipMessage(_T("This invoice no is existing in the database."));
			return -1;
		}
		rs.GetValue(_T("vat_invoice_vat_id"), m_szID);
		rs.GetValue(_T("vat_invoiceno"), m_szInvoiceNo);
		rs.GetValue(_T("vat_invoicedate"), m_szInvoiceDate);
		rs.GetValue(_T("vat_serialno"), m_szSerialNo);
		rs.GetValue(_T("vat_formno"), m_szFormNo);
		SetMode(VM_EDIT);
		return 0;
	}
	SetMode(VM_ADD);
	return 0;
}
 
/*void CAccTaxCreationDialog::OnInvoiceDateChange(){
	
} */
/*void CAccTaxCreationDialog::OnInvoiceDateSetfocus(){
	
} */
/*void CAccTaxCreationDialog::OnInvoiceDateKillfocus(){
	
} */
int CAccTaxCreationDialog::OnInvoiceDateCheckValue(){
	return 0;
}
 
/*void CAccTaxCreationDialog::OnAccountingObjectNameChange(){
	
} */
/*void CAccTaxCreationDialog::OnAccountingObjectNameSetfocus(){
	
} */
/*void CAccTaxCreationDialog::OnAccountingObjectNameKillfocus(){
	
} */
int CAccTaxCreationDialog::OnAccountingObjectNameCheckValue(){
	return 0;
} 
/*void CAccTaxCreationDialog::OnVATCodeChange(){
	
} */
/*void CAccTaxCreationDialog::OnVATCodeSetfocus(){
	
} */
/*void CAccTaxCreationDialog::OnVATCodeKillfocus(){
	
} */
int CAccTaxCreationDialog::OnVATCodeCheckValue(){
	return 0;
} 
/*void CAccTaxCreationDialog::OnAccountingObjectAddressChange(){
	
} */
/*void CAccTaxCreationDialog::OnAccountingObjectAddressSetfocus(){
	
} */
/*void CAccTaxCreationDialog::OnAccountingObjectAddressKillfocus(){
	
} */
int CAccTaxCreationDialog::OnAccountingObjectAddressCheckValue(){
	return 0;
} 
/*void CAccTaxCreationDialog::OnDescriptionChange(){
	
} */
/*void CAccTaxCreationDialog::OnDescriptionSetfocus(){
	
} */
/*void CAccTaxCreationDialog::OnDescriptionKillfocus(){
	
} */
int CAccTaxCreationDialog::OnDescriptionCheckValue(){
	return 0;
}
 
void CAccTaxCreationDialog::OnOKSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(OnSaveAccTaxCreationDialog() > 0)
		CGuiDialog::OnOK();
}
 
void CAccTaxCreationDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
int CAccTaxCreationDialog::OnAddAccTaxCreationDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAccTaxCreationDialog::OnEditAccTaxCreationDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAccTaxCreationDialog::OnDeleteAccTaxCreationDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelAccTaxCreationDialog();
 	}
	return 0;
}

int CAccTaxCreationDialog::OnSaveAccTaxCreationDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_acc_invoice_vatTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE vat_reference_id='%s' and vat_invoice_vat_id='%s' "), m_szReferenceID, m_szID);
 		szSQL = m_acc_invoice_vatTbl.GetUpdateSQL(_T("vat_createdby,vat_createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		szSQL.Format(_T("acc_update_defvalue('ACC_INVOICE_VAT_RFORMNO', '%s') "), m_szFormNo);
		m_szFormNo = pMF->ExecDML(szSQL);
		szSQL.Format(_T("acc_update_defvalue('ACC_INVOICE_VAT_RSERIALNO', '%s') "), m_szSerialNo);
		m_szSerialNo = pMF->ExecDML(szSQL);

		if(m_bApplyAll )
		{
			szSQL.Format(_T("UPDATE fa_cashtax SET fact_description='%s', fact_invoicetax_id='%s' ") \
				_T("WHERE fact_cash_id='%s' "), m_szDescription, m_szInvoiceNo, m_szReferenceID);

		}
		else
		{
			szSQL.Format(_T("UPDATE fa_cashtax SET fact_description='%s', fact_invoicetax_id='%s' ") \
				_T("WHERE fact_cashtax_id='%s' and fact_cash_id='%s' "), m_szDescription, m_szInvoiceNo, m_szTaxInvoiceID, m_szReferenceID);
		}
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T(" DELETE FROM acc_invoice_vat") \
_T(" WHERE vat_reference_id='%s'") \
_T(" 	and vat_invoiceno not in") \
_T(" 	(select fact_invoicetax_id from fa_cashtax where fact_cash_id='%s')"), m_szReferenceID, m_szReferenceID);


		pMF->ExecSQL(szSQL);
 	}
 	else
 	{
 	}
 	return ret;
}

int CAccTaxCreationDialog::OnCancelAccTaxCreationDialog(){
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
 
int CAccTaxCreationDialog::OnAccTaxCreationDialogListLoadData(){
	return 0;
}

