#include "HMSOtherInvoiceDialog.h"
#include "MainFrm.h"
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceDateCheckValue();
} 
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOtherInvoiceDialog* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnInvoiceTypeAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOtherInvoiceDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSOtherInvoiceDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherInvoiceDialog *)pWnd)->OnReasonCheckValue();
} 
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOtherInvoiceDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CHMSOtherInvoiceDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSOtherInvoiceDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherInvoiceDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOtherInvoiceDialog *pVw = (CHMSOtherInvoiceDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOtherInvoiceDialog *pVw = (CHMSOtherInvoiceDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSOtherInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherInvoiceDialog*)pWnd)->OnAddHMSOtherInvoiceDialog();
} 
static int _OnEditHMSOtherInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherInvoiceDialog*)pWnd)->OnEditHMSOtherInvoiceDialog();
} 
static int _OnDeleteHMSOtherInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherInvoiceDialog*)pWnd)->OnDeleteHMSOtherInvoiceDialog();
} 
static int _OnSaveHMSOtherInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherInvoiceDialog*)pWnd)->OnSaveHMSOtherInvoiceDialog();
} 
static int _OnCancelHMSOtherInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSOtherInvoiceDialog*)pWnd)->OnCancelHMSOtherInvoiceDialog();
} 
CHMSOtherInvoiceDialog::CHMSOtherInvoiceDialog(CWnd *pParent, int nMode, CString szInvoiceType):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 495;
	m_nDlgHeight = 195;
	SetDefaultValues();
	m_szVoucherType = szInvoiceType;
	m_bRefresh = false;

}
CHMSOtherInvoiceDialog::~CHMSOtherInvoiceDialog(){
}
void CHMSOtherInvoiceDialog::OnCreateComponents(){
	m_wndInvoiceInformation.Create(this, _T("Invoice Information"), 6, 5, 486, 150);
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 10, 30, 110, 55);
	m_wndInvoiceNo.Create(this,115, 30, 260, 55); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 265, 30, 365, 55);
	m_wndInvoiceDate.Create(this,370, 30, 480, 55); 
	m_wndInvoiceTypeLabel.Create(this, _T("Type"), 10, 60, 110, 85);
	m_wndInvoiceType.Create(this,115, 60, 260, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 265, 60, 365, 85);
	m_wndDepartment.Create(this,370, 60, 481, 85); 
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 90, 110, 115);
	m_wndReason.Create(this,115, 90, 480, 115); 
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 10, 120, 110, 145);
	m_wndPaymentMethod.Create(this,115, 120, 260, 145); 
	m_wndAmountLabel.Create(this, _T("Amount"), 265, 120, 365, 145);
	m_wndAmount.Create(this,370, 120, 480, 145); 
	m_wndSave.Create(this, _T("&Save"), 320, 155, 400, 180);
	m_wndClose.Create(this, _T("&Close"), 405, 155, 485, 180);

}
void CHMSOtherInvoiceDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInvoiceNo.SetLimitText(35);
//	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceDate.SetMax(CDateTime(pMF->GetSysDateTime()));
//	m_wndInvoiceDate.SetCheckValue(true);
	m_wndInvoiceType.SetCheckValue(true);
	m_wndInvoiceType.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndReason.SetLimitText(35);
	m_wndReason.SetCheckValue(true);
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(35);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);


	m_wndInvoiceNo.SetReadOnly(true);
	m_wndInvoiceDate.SetReadOnly(true);

	m_wndInvoiceType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndInvoiceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSOtherInvoiceDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	m_wndInvoiceType.SetEvent(WE_SELENDOK, _OnInvoiceTypeSelendokFnc);
	//m_wndInvoiceType.SetEvent(WE_SETFOCUS, _OnInvoiceTypeSetfocusFnc);
	//m_wndInvoiceType.SetEvent(WE_KILLFOCUS, _OnInvoiceTypeKillfocusFnc);
	m_wndInvoiceType.SetEvent(WE_SELCHANGE, _OnInvoiceTypeSelectChangeFnc);
	m_wndInvoiceType.SetEvent(WE_LOADDATA, _OnInvoiceTypeLoadDataFnc);
	//m_wndInvoiceType.SetEvent(WE_ADDNEW, _OnInvoiceTypeAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndAmount.SetTextColor(RGB(0, 0, 255));
	
	m_szPaymentMethodKey = pMF->GetPaymentMethod();

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

}
void CHMSOtherInvoiceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CHMSOtherInvoiceDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_fee_invoice_view WHERE hfe_invoiceno=%ld "), m_nInvoice_ID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{

	}

}
void CHMSOtherInvoiceDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOtherInvoiceDialog::SetDefaultValues(){

	m_szInvoiceNo.Empty();
	m_szInvoiceDate.Empty();
	m_szInvoiceTypeKey.Empty();
	m_szDepartmentKey.Empty();
	m_szReason.Empty();
	m_nAmount=0;

}
int CHMSOtherInvoiceDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
		CString szSerialNo;
		int nReceiptNo;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			pMF->GetSerialInformation();
			szSerialNo = pMF->m_szSerialNo;
			nReceiptNo = pMF->m_nReceiptNo;
			m_szInvoiceDate = pMF->m_szRecvDate;
			m_szInvoiceNo.Format(_T("%s-%ld"), szSerialNo, nReceiptNo);
			m_wndInvoiceType.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		if(m_szVoucherType == _T("RECEIPT_ORDER"))
		{
			m_wndInvoiceType.EnableWindow(false);
			m_wndInvoiceType.SetCheckValue(false);
		}
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSOtherInvoiceDialog::OnInvoiceNoChange(){
	
} */
/*void CHMSOtherInvoiceDialog::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSOtherInvoiceDialog::OnInvoiceNoKillfocus(){
	
} */
int CHMSOtherInvoiceDialog::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CHMSOtherInvoiceDialog::OnInvoiceDateChange(){
	
} */
/*void CHMSOtherInvoiceDialog::OnInvoiceDateSetfocus(){
	
} */
/*void CHMSOtherInvoiceDialog::OnInvoiceDateKillfocus(){
	
} */
int CHMSOtherInvoiceDialog::OnInvoiceDateCheckValue(){
	return 0;
} 
void CHMSOtherInvoiceDialog::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOtherInvoiceDialog::OnInvoiceTypeSelendok(){
	 
}
/*void CHMSOtherInvoiceDialog::OnInvoiceTypeSetfocus(){
	
}*/
/*void CHMSOtherInvoiceDialog::OnInvoiceTypeKillfocus(){
	
}*/
long CHMSOtherInvoiceDialog::OnInvoiceTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T("and ss_code in('07','08','09') "));
	return pMF->LoadSelectionList(&m_wndInvoiceType, _T("CA_PAYMENT_REASON"), m_szInvoiceTypeKey, szFilter);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInvoiceType.IsSearchKey() && !m_szInvoiceTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szInvoiceTypeKey
};
	m_wndInvoiceType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOtherInvoiceDialog::OnInvoiceTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOtherInvoiceDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOtherInvoiceDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSOtherInvoiceDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSOtherInvoiceDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSOtherInvoiceDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOtherInvoiceDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOtherInvoiceDialog::OnReasonChange(){
	
} */
/*void CHMSOtherInvoiceDialog::OnReasonSetfocus(){
	
} */
/*void CHMSOtherInvoiceDialog::OnReasonKillfocus(){
	
} */
int CHMSOtherInvoiceDialog::OnReasonCheckValue(){
	return 0;
} 
void CHMSOtherInvoiceDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOtherInvoiceDialog::OnPaymentMethodSelendok(){
	 
}
/*void CHMSOtherInvoiceDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CHMSOtherInvoiceDialog::OnPaymentMethodKillfocus(){
	
}*/
long CHMSOtherInvoiceDialog::OnPaymentMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
		szWhere.Format(_T(" and adpm_payment_method_id='%s' "), m_szPaymentMethodKey);
	};
	
	if(pMF->CheckPermission(_T("40.09")))
	{
		szWhere.AppendFormat(_T(" or adpm_org_id IN ('ALL') "));
	}

	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT adpm_payment_method_id as id, adpm_description as name FROM ad_payment_method WHERE (adpm_org_id='FM' %s) and adpm_isactive='Y' %s ORDER BY adpm_line "), szWhere, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOtherInvoiceDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOtherInvoiceDialog::OnAmountChange(){
	
} */
/*void CHMSOtherInvoiceDialog::OnAmountSetfocus(){
	
} */
/*void CHMSOtherInvoiceDialog::OnAmountKillfocus(){
	
} */
int CHMSOtherInvoiceDialog::OnAmountCheckValue(){
	if(m_nAmount <= 0)
		return -1;
	return 0;
} 
void CHMSOtherInvoiceDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSOtherInvoiceDialog();
} 
void CHMSOtherInvoiceDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSOtherInvoiceDialog::OnAddHMSOtherInvoiceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOtherInvoiceDialog::OnEditHMSOtherInvoiceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOtherInvoiceDialog::OnDeleteHMSOtherInvoiceDialog(){
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
 		OnCancelHMSOtherInvoiceDialog();
 	}
	return 0;
}
int CHMSOtherInvoiceDialog::OnSaveHMSOtherInvoiceDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CDbfMap payTbl;
	CString szItemDesc;
	CString szSQL;

	szItemDesc = m_wndInvoiceType.GetCurrent(1);
	payTbl.AddField(_T("org_id"), dfText, 3);
	payTbl.AddField(_T("type"), dfText, 1);
	payTbl.AddField(_T("deptid"), dfText, 7);
	payTbl.AddField(_T("staff"), dfText, 20);
	payTbl.AddField(_T("serialno"), dfText, 15);
	payTbl.AddField(_T("receiptno"), dfLong);
	payTbl.AddField(_T("date"), dfDateTime);
	payTbl.AddField(_T("desc"), dfText, 254);
	payTbl.AddField(_T("payment_method"), dfText, 3);
	payTbl.AddField(_T("itemid"), dfText, 15);
	payTbl.AddField(_T("item_desc"), dfText, 254);
	payTbl.AddField(_T("amount"), dfDouble);
	
	payTbl.SetValue(_T("org_id"), _T("FM"));
	
	payTbl.SetValue(_T("deptid"), m_szDepartmentKey);
	payTbl.SetValue(_T("staff"), pMF->GetCurrentUser());
	payTbl.SetValue(_T("receiptno"), m_nReceiptNo);
	payTbl.SetValue(_T("date"), m_szInvoiceDate);
	payTbl.SetValue(_T("desc"), m_szReason);
	payTbl.SetValue(_T("payment_method"), m_szPaymentMethodKey);
	payTbl.SetValue(_T("itemid"), m_szInvoiceTypeKey);
	payTbl.SetValue(_T("item_desc"), szItemDesc);
	payTbl.SetValue(_T("amount"), m_nAmount);

	if(m_szVoucherType == _T("RECEIPT_ORDER"))
	{
		payTbl.SetValue(_T("type"), _T("L")); //Phieu chi
		payTbl.SetValue(_T("serialno"), _T("PT"));
		szSQL.Format(_T(" HMS_FEE_RECEIPT_CREATE_OV4(%s) "), payTbl.FormatSQL());
	}
	else
	{
		payTbl.SetValue(_T("type"), _T("U")); //Phieu chi
		payTbl.SetValue(_T("serialno"), _T("PC"));
		szSQL.Format(_T(" HMS_FEE_PAYMENT_CREATE_OV4(%s) "), payTbl.FormatSQL());
	}
	
	long nInvoice_ID = str2long(pMF->ExecDML(szSQL));
	
 	if(nInvoice_ID > 0)
 	{
 		m_nInvoice_ID = nInvoice_ID;
		m_bRefresh = true;
		if(m_szVoucherType == _T("PAYMENT_ORDER"))
		{
			pMF->PrintRefund(m_nInvoice_ID, true);
		}
		else
		{
			pMF->PrintInvoice(m_nInvoice_ID, true);

		}

		CGuiDialog::OnOK();
 	}
 	else
 	{
		ShowMessageBox(_T("Cannot create payment order"));
 	}

 	return 0;
}
int CHMSOtherInvoiceDialog::OnCancelHMSOtherInvoiceDialog(){
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
int CHMSOtherInvoiceDialog::OnHMSOtherInvoiceDialogListLoadData(){
	return 0;
}
