#include "AdPaymentTermDialog.h"
#include "MainFrame_E10.h"
#include "AdPaymentTerm.h"
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CAdPaymentTermDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdPaymentTermDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnDueDateChangeFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDueDateChange();
} */
/*static void _OnDueDateSetfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDueDateSetfocus();} */ 
/*static void _OnDueDateKillfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDueDateKillfocus();
} */
static int _OnDueDateCheckValueFnc(CWnd *pWnd){
	return ((CAdPaymentTermDialog *)pWnd)->OnDueDateCheckValue();
} 
/*static void _OnInstallmentNoChangeFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnInstallmentNoChange();
} */
/*static void _OnInstallmentNoSetfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnInstallmentNoSetfocus();} */ 
/*static void _OnInstallmentNoKillfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnInstallmentNoKillfocus();
} */
static int _OnInstallmentNoCheckValueFnc(CWnd *pWnd){
	return ((CAdPaymentTermDialog *)pWnd)->OnInstallmentNoCheckValue();
} 
/*static void _OnDiscountDateChangeFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDiscountDateChange();
} */
/*static void _OnDiscountDateSetfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDiscountDateSetfocus();} */ 
/*static void _OnDiscountDateKillfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDiscountDateKillfocus();
} */
static int _OnDiscountDateCheckValueFnc(CWnd *pWnd){
	return ((CAdPaymentTermDialog *)pWnd)->OnDiscountDateCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CAdPaymentTermDialog *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CAdPaymentTermDialog *)pWnd)->OnDiscountCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdPaymentTermDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdPaymentTermDialog *pVw = (CAdPaymentTermDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CAdPaymentTermDialog *pVw = (CAdPaymentTermDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddAdPaymentTermDialogFnc(CWnd *pWnd){
	 return ((CAdPaymentTermDialog*)pWnd)->OnAddAdPaymentTermDialog();
} 
static int _OnEditAdPaymentTermDialogFnc(CWnd *pWnd){
	 return ((CAdPaymentTermDialog*)pWnd)->OnEditAdPaymentTermDialog();
} 
static int _OnDeleteAdPaymentTermDialogFnc(CWnd *pWnd){
	 return ((CAdPaymentTermDialog*)pWnd)->OnDeleteAdPaymentTermDialog();
} 
static int _OnSaveAdPaymentTermDialogFnc(CWnd *pWnd){
	 return ((CAdPaymentTermDialog*)pWnd)->OnSaveAdPaymentTermDialog();
} 
static int _OnCancelAdPaymentTermDialogFnc(CWnd *pWnd){
	 return ((CAdPaymentTermDialog*)pWnd)->OnCancelAdPaymentTermDialog();
} 
CAdPaymentTermDialog::CAdPaymentTermDialog(CWnd *pParent, int nMode):
CGuiDialog(pParent){
	m_nDlgWidth = 805;
	m_nDlgHeight = 110;
	m_nMode = nMode;
	SetDefaultValues();
}
CAdPaymentTermDialog::~CAdPaymentTermDialog(){
}
void CAdPaymentTermDialog::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 5, 5, 760, 90);
	m_wndCodeLabel.Create(this, _T("Code"), 10, 30, 100, 55);
	m_wndCode.Create(this,105, 30, 205, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 210, 30, 300, 55);
	m_wndDescription.Create(this,305, 30, 755, 55); 
	m_wndDueDateLabel.Create(this, _T("Due Date"), 10, 60, 100, 85);
	m_wndDueDate.Create(this,105, 60, 205, 85); 
	m_wndInstallmentNoLabel.Create(this, _T("Installment No"), 210, 60, 300, 85);
	m_wndInstallmentNo.Create(this,305, 60, 370, 85); 
	m_wndDiscountDateLabel.Create(this, _T("Discount Date"), 375, 60, 480, 85);
	m_wndDiscountDate.Create(this,485, 60, 570, 85); 
	m_wndDiscountLabel.Create(this, _T("Discount %"), 575, 60, 675, 85);
	m_wndDiscount.Create(this,680, 60, 755, 85); 
	m_wndActive.Create(this, _T("Active"), 10, 95, 90, 120);
	m_wndSave.Create(this, _T("&Save"), 595, 95, 675, 120);
	m_wndDiscard.Create(this, _T("&Discard"), 680, 95, 760, 120);

}
void CAdPaymentTermDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndCode.SetLimitText(15);
	m_wndCode.SetCheckValue(true);
	m_wndCode.ModifyStyle(0, ES_UPPERCASE);
	m_wndDescription.SetInitCap(2);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	m_ad_payment_termTbl.SetTableName(_T("ad_payment_term"));
	m_ad_payment_termTbl.AddField(_T("adpt_payment_term_id"), dfText, 32); 
	m_ad_payment_termTbl.AddField(_T("adpt_client_id"), dfText, 32); 
	m_ad_payment_termTbl.AddField(_T("adpt_org_id"), dfText, 32); 
	m_ad_payment_termTbl.AddField(_T("adpt_user_id"), dfText, 32); 
	m_ad_payment_termTbl.AddField(_T("adpt_createdby"), dfText, 15); 
	m_ad_payment_termTbl.AddField(_T("adpt_createddate"), dfDateTime); 
	m_ad_payment_termTbl.AddField(_T("adpt_updatedby"), dfText, 15); 
	m_ad_payment_termTbl.AddField(_T("adpt_updateddate"), dfDateTime); 
	m_ad_payment_termTbl.AddField(_T("adpt_payment_no"), dfLong); 
	m_ad_payment_termTbl.AddField(_T("adpt_description"), dfText, 254); 
	m_ad_payment_termTbl.AddField(_T("adpt_due_date"), dfText, 20); 
	m_ad_payment_termTbl.AddField(_T("adpt_discount_date"), dfText, 20); 
	m_ad_payment_termTbl.AddField(_T("adpt_discount_percent"), dfLong); 
	m_ad_payment_termTbl.AddField(_T("adpt_isactive"), dfText, 1); 
}

void CAdPaymentTermDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndDueDate.SetEvent(WE_CHANGE, _OnDueDateChangeFnc);
	//m_wndDueDate.SetEvent(WE_SETFOCUS, _OnDueDateSetfocusFnc);
	//m_wndDueDate.SetEvent(WE_KILLFOCUS, _OnDueDateKillfocusFnc);
	m_wndDueDate.SetEvent(WE_CHECKVALUE, _OnDueDateCheckValueFnc);
	//m_wndInstallmentNo.SetEvent(WE_CHANGE, _OnInstallmentNoChangeFnc);
	//m_wndInstallmentNo.SetEvent(WE_SETFOCUS, _OnInstallmentNoSetfocusFnc);
	//m_wndInstallmentNo.SetEvent(WE_KILLFOCUS, _OnInstallmentNoKillfocusFnc);
	m_wndInstallmentNo.SetEvent(WE_CHECKVALUE, _OnInstallmentNoCheckValueFnc);
	//m_wndDiscountDate.SetEvent(WE_CHANGE, _OnDiscountDateChangeFnc);
	//m_wndDiscountDate.SetEvent(WE_SETFOCUS, _OnDiscountDateSetfocusFnc);
	//m_wndDiscountDate.SetEvent(WE_KILLFOCUS, _OnDiscountDateKillfocusFnc);
	m_wndDiscountDate.SetEvent(WE_CHECKVALUE, _OnDiscountDateCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	SetMode(m_nMode);
	if (m_nMode == VM_EDIT)
		GetDataToScreen();
}
void CAdPaymentTermDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndDueDate.GetDlgCtrlID(), m_szDueDate);
	DDX_Text(pDX, m_wndInstallmentNo.GetDlgCtrlID(), m_nInstallmentNo);
	DDX_Text(pDX, m_wndDiscountDate.GetDlgCtrlID(), m_szDiscountDate);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdPaymentTermDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	szSQL.Format(_T("SELECT * FROM ad_payment_term WHERE adpt_payment_term_id='%s' "), m_szCode);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("adpt_description"), m_szDescription);
		rs.GetValue(_T("adpt_due_date"), m_szDueDate);
		rs.GetValue(_T("adpt_discount_date"), m_szDiscountDate);
		rs.GetValue(_T("adpt_discount_percent"), m_nDiscount);
		rs.GetValue(_T("adpt_payment_no"), m_nInstallmentNo);
		rs.GetValue(_T("adpt_isactive"), szActive);
		if(szActive==_T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(FALSE);
	}

}

void CAdPaymentTermDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	m_ad_payment_termTbl.SetValue(_T("adpt_createdby"), pMF->GetCurrentUser());
	m_ad_payment_termTbl.SetValue(_T("adpt_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE adpt_payment_term_id='%s' "), m_szCode);
		m_ad_payment_termTbl.Open(&pMF->m_db, szWhere);
	}
	m_ad_payment_termTbl.SetValue(_T("adpt_createddate"), pMF->GetSysDateTime());
	m_ad_payment_termTbl.SetValue(_T("adpt_updateddate"), pMF->GetSysDateTime());
	m_ad_payment_termTbl.SetValue(_T("adpt_payment_term_id"), m_szCode);
	m_ad_payment_termTbl.SetValue(_T("adpt_description"), m_szDescription);
	m_ad_payment_termTbl.SetValue(_T("adpt_payment_no"), m_nInstallmentNo);
	m_ad_payment_termTbl.SetValue(_T("adpt_due_date"), m_szDueDate);
	m_ad_payment_termTbl.SetValue(_T("adpt_discount_date"), m_szDiscountDate);
	m_ad_payment_termTbl.SetValue(_T("adpt_discount_percent"), m_nDiscount);
	m_ad_payment_termTbl.SetValue(_T("adpt_isactive"), m_bActive?_T("Y"):_T("N"));

}

void CAdPaymentTermDialog::SetDefaultValues(){

	m_szCode.Empty();
	m_szDescription.Empty();
	m_szDueDate.Empty();
	m_szDiscountDate.Empty();
	m_nDiscount = 0;
	m_nInstallmentNo = 0;
	m_bActive=TRUE;
}

int CAdPaymentTermDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			SetDefaultValues(); 
			m_wndCode.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndCode.EnableWindow(FALSE);
			m_wndDescription.SetFocus();
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
		m_wndSave.EnableWindow(TRUE);
 		return nOldMode; 
}

/*void CAdPaymentTermDialog::OnCodeChange(){
	
} */
/*void CAdPaymentTermDialog::OnCodeSetfocus(){
	
} */
/*void CAdPaymentTermDialog::OnCodeKillfocus(){
	
} */
int CAdPaymentTermDialog::OnCodeCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_payment_term WHERE adpt_payment_term_id='%s' "), m_szCode);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndCode.SetToolTipMessage(_T("This [Code] is existing"));
		return -1;
	}
	return 0;
} 
/*void CAdPaymentTermDialog::OnDescriptionChange(){
	
} */
/*void CAdPaymentTermDialog::OnDescriptionSetfocus(){
	
} */
/*void CAdPaymentTermDialog::OnDescriptionKillfocus(){
	
} */
int CAdPaymentTermDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CAdPaymentTermDialog::OnDueDateChange(){
	
} */
/*void CAdPaymentTermDialog::OnDueDateSetfocus(){
	
} */
/*void CAdPaymentTermDialog::OnDueDateKillfocus(){
	
} */
int CAdPaymentTermDialog::OnDueDateCheckValue(){
	return 0;
} 
/*void CAdPaymentTermDialog::OnInstallmentNoChange(){
	
} */
/*void CAdPaymentTermDialog::OnInstallmentNoSetfocus(){
	
} */
/*void CAdPaymentTermDialog::OnInstallmentNoKillfocus(){
	
} */
int CAdPaymentTermDialog::OnInstallmentNoCheckValue(){
	return 0;
} 
/*void CAdPaymentTermDialog::OnDiscountDateChange(){
	
} */
/*void CAdPaymentTermDialog::OnDiscountDateSetfocus(){
	
} */
/*void CAdPaymentTermDialog::OnDiscountDateKillfocus(){
	
} */
int CAdPaymentTermDialog::OnDiscountDateCheckValue(){
	return 0;
} 
/*void CAdPaymentTermDialog::OnDiscountChange(){
	
} */
/*void CAdPaymentTermDialog::OnDiscountSetfocus(){
	
} */
/*void CAdPaymentTermDialog::OnDiscountKillfocus(){
	
} */
int CAdPaymentTermDialog::OnDiscountCheckValue(){
	return 0;
} 
void CAdPaymentTermDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdPaymentTermDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdPaymentTermDialog();
}
 
void CAdPaymentTermDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}

int CAdPaymentTermDialog::OnAddAdPaymentTermDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CAdPaymentTermDialog::OnEditAdPaymentTermDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdPaymentTermDialog::OnDeleteAdPaymentTermDialog(){
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
 		OnCancelAdPaymentTermDialog(); 
 	}
	return 0;
}

int CAdPaymentTermDialog::OnSaveAdPaymentTermDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_payment_termTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE adpt_payment_term_id='%s' "), m_szCode); 
 		szSQL = m_ad_payment_termTbl.GetUpdateSQL(_T("adpt_payment_term_id")); 
 		szSQL += szWhere; 
 	}
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 	if(GetMode() == VM_EDIT) 
		CGuiDialog::OnOK();
		else
			SetMode(VM_ADD);
	((CAdPaymentTerm*)m_pParentWnd)->OnListLoadData();
 		
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}

int CAdPaymentTermDialog::OnCancelAdPaymentTermDialog(){
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
 
int CAdPaymentTermDialog::OnAdPaymentTermDialogListLoadData(){
	return 0;
}
