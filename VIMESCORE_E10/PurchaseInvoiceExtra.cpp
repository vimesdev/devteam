#include "PurchaseInvoiceExtra.h"
#include "MainFrame_E10.h"
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseInvoiceExtra* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseInvoiceExtra *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnPaymentTermsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseInvoiceExtra* )pWnd)->OnPaymentTermsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentTermsSelendokFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnPaymentTermsSelendok();
}
/*static void _OnPaymentTermsSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnPaymentTermsKillfocus();
}*/
/*static void _OnPaymentTermsKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnPaymentTermsKillfocus();
}*/
static long _OnPaymentTermsLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseInvoiceExtra *)pWnd)->OnPaymentTermsLoadData();
}
/*static void _OnPaymentTermsAddNewFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnPaymentTermsAddNew();
}*/
/*static void _OnDueDateChangeFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDueDateChange();
} */
/*static void _OnDueDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDueDateSetfocus();} */ 
/*static void _OnDueDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDueDateKillfocus();
} */
static int _OnDueDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseInvoiceExtra *)pWnd)->OnDueDateCheckValue();
} 
/*static void _OnBillToChangeFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnBillToChange();
} */
/*static void _OnBillToSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnBillToSetfocus();} */ 
/*static void _OnBillToKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnBillToKillfocus();
} */
static int _OnBillToCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseInvoiceExtra *)pWnd)->OnBillToCheckValue();
} 
static void _OnDeliveryMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseInvoiceExtra* )pWnd)->OnDeliveryMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryMethodSelendokFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryMethodSelendok();
}
/*static void _OnDeliveryMethodSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryMethodKillfocus();
}*/
/*static void _OnDeliveryMethodKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryMethodKillfocus();
}*/
static long _OnDeliveryMethodLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryMethodLoadData();
}
/*static void _OnDeliveryMethodAddNewFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryMethodAddNew();
}*/
static void _OnDeliveryTermsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPurchaseInvoiceExtra* )pWnd)->OnDeliveryTermsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryTermsSelendokFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryTermsSelendok();
}
/*static void _OnDeliveryTermsSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryTermsKillfocus();
}*/
/*static void _OnDeliveryTermsKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryTermsKillfocus();
}*/
static long _OnDeliveryTermsLoadDataFnc(CWnd *pWnd){
	return ((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryTermsLoadData();
}
/*static void _OnDeliveryTermsAddNewFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryTermsAddNew();
}*/
/*static void _OnDeliveryDateChangeFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryDateChange();
} */
/*static void _OnDeliveryDateSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryDateSetfocus();} */ 
/*static void _OnDeliveryDateKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryDateKillfocus();
} */
static int _OnDeliveryDateCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryDateCheckValue();
} 
/*static void _OnDeliveryAddressChangeFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryAddressChange();
} */
/*static void _OnDeliveryAddressSetfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryAddressSetfocus();} */ 
/*static void _OnDeliveryAddressKillfocusFnc(CWnd *pWnd){
	((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryAddressKillfocus();
} */
static int _OnDeliveryAddressCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseInvoiceExtra *)pWnd)->OnDeliveryAddressCheckValue();
} 
static int _OnAddPurchaseInvoiceExtraFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceExtra*)pWnd)->OnAddPurchaseInvoiceExtra();
} 
static int _OnEditPurchaseInvoiceExtraFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceExtra*)pWnd)->OnEditPurchaseInvoiceExtra();
} 
static int _OnDeletePurchaseInvoiceExtraFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceExtra*)pWnd)->OnDeletePurchaseInvoiceExtra();
} 
static int _OnSavePurchaseInvoiceExtraFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceExtra*)pWnd)->OnSavePurchaseInvoiceExtra();
} 
static int _OnCancelPurchaseInvoiceExtraFnc(CWnd *pWnd){
	 return ((CPurchaseInvoiceExtra*)pWnd)->OnCancelPurchaseInvoiceExtra();
} 
CPurchaseInvoiceExtra::CPurchaseInvoiceExtra(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
CPurchaseInvoiceExtra::~CPurchaseInvoiceExtra(){
}
void CPurchaseInvoiceExtra::OnCreateComponents(){
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 10, 30, 160, 55);
	m_wndPaymentMethod.Create(this,165, 30, 345, 55); 
	m_wndPaymentTermsLabel.Create(this, _T("Payment Terms"), 350, 30, 500, 55);
	m_wndPaymentTerms.Create(this,505, 30, 685, 55); 
	m_wndDueDateLabel.Create(this, _T("Due Date"), 690, 30, 840, 55);
	m_wndPaymentInfo.Create(this, _T("Payment Info"), 5, 5, 970, 120);
	m_wndDeliveryInfo.Create(this, _T("Delivery Info"), 5, 125, 970, 240);
	m_wndDueDate.Create(this,845, 30, 965, 55); 
	m_wndBillToLabel.Create(this, _T("Bill To"), 10, 60, 160, 85);
	m_wndBillTo.Create(this,165, 60, 965, 115); 
	m_wndDeliveryMethodLabel.Create(this, _T("Delivery Method"), 10, 150, 160, 175);
	m_wndDeliveryMethod.Create(this,165, 150, 345, 175); 
	m_wndDeliveryTermsLabel.Create(this, _T("Delivery Terms"), 350, 150, 500, 175);
	m_wndDeliveryTerms.Create(this,505, 150, 685, 175); 
	m_wndDeliveryDateLabel.Create(this, _T("Delivery Date"), 690, 150, 840, 175);
	m_wndDeliveryDate.Create(this,845, 150, 965, 175); 
	m_wndDeliveryAddressLabel.Create(this, _T("Delivery Address"), 10, 180, 160, 205);
	m_wndDeliveryAddress.Create(this,165, 180, 965, 235); 

}
void CPurchaseInvoiceExtra::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(35);
	m_wndPaymentTerms.SetCheckValue(true);
	m_wndPaymentTerms.LimitText(35);
	m_wndDueDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDueDate.SetCheckValue(true);
	m_wndBillTo.SetLimitText(35);
	m_wndBillTo.SetCheckValue(true);
	m_wndDeliveryMethod.SetCheckValue(true);
	m_wndDeliveryMethod.LimitText(35);
	m_wndDeliveryTerms.SetCheckValue(true);
	m_wndDeliveryTerms.LimitText(35);
	m_wndDeliveryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDeliveryDate.SetCheckValue(true);
	m_wndDeliveryAddress.SetLimitText(35);
	m_wndDeliveryAddress.SetCheckValue(true);


	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPaymentTerms.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPaymentTerms.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDeliveryMethod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDeliveryMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDeliveryTerms.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDeliveryTerms.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPurchaseInvoiceExtra::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	m_wndPaymentTerms.SetEvent(WE_SELENDOK, _OnPaymentTermsSelendokFnc);
	//m_wndPaymentTerms.SetEvent(WE_SETFOCUS, _OnPaymentTermsSetfocusFnc);
	//m_wndPaymentTerms.SetEvent(WE_KILLFOCUS, _OnPaymentTermsKillfocusFnc);
	m_wndPaymentTerms.SetEvent(WE_SELCHANGE, _OnPaymentTermsSelectChangeFnc);
	m_wndPaymentTerms.SetEvent(WE_LOADDATA, _OnPaymentTermsLoadDataFnc);
	//m_wndPaymentTerms.SetEvent(WE_ADDNEW, _OnPaymentTermsAddNewFnc);
	//m_wndDueDate.SetEvent(WE_CHANGE, _OnDueDateChangeFnc);
	//m_wndDueDate.SetEvent(WE_SETFOCUS, _OnDueDateSetfocusFnc);
	//m_wndDueDate.SetEvent(WE_KILLFOCUS, _OnDueDateKillfocusFnc);
	m_wndDueDate.SetEvent(WE_CHECKVALUE, _OnDueDateCheckValueFnc);
	//m_wndBillTo.SetEvent(WE_CHANGE, _OnBillToChangeFnc);
	//m_wndBillTo.SetEvent(WE_SETFOCUS, _OnBillToSetfocusFnc);
	//m_wndBillTo.SetEvent(WE_KILLFOCUS, _OnBillToKillfocusFnc);
	m_wndBillTo.SetEvent(WE_CHECKVALUE, _OnBillToCheckValueFnc);
	m_wndDeliveryMethod.SetEvent(WE_SELENDOK, _OnDeliveryMethodSelendokFnc);
	//m_wndDeliveryMethod.SetEvent(WE_SETFOCUS, _OnDeliveryMethodSetfocusFnc);
	//m_wndDeliveryMethod.SetEvent(WE_KILLFOCUS, _OnDeliveryMethodKillfocusFnc);
	m_wndDeliveryMethod.SetEvent(WE_SELCHANGE, _OnDeliveryMethodSelectChangeFnc);
	m_wndDeliveryMethod.SetEvent(WE_LOADDATA, _OnDeliveryMethodLoadDataFnc);
	//m_wndDeliveryMethod.SetEvent(WE_ADDNEW, _OnDeliveryMethodAddNewFnc);
	m_wndDeliveryTerms.SetEvent(WE_SELENDOK, _OnDeliveryTermsSelendokFnc);
	//m_wndDeliveryTerms.SetEvent(WE_SETFOCUS, _OnDeliveryTermsSetfocusFnc);
	//m_wndDeliveryTerms.SetEvent(WE_KILLFOCUS, _OnDeliveryTermsKillfocusFnc);
	m_wndDeliveryTerms.SetEvent(WE_SELCHANGE, _OnDeliveryTermsSelectChangeFnc);
	m_wndDeliveryTerms.SetEvent(WE_LOADDATA, _OnDeliveryTermsLoadDataFnc);
	//m_wndDeliveryTerms.SetEvent(WE_ADDNEW, _OnDeliveryTermsAddNewFnc);
	//m_wndDeliveryDate.SetEvent(WE_CHANGE, _OnDeliveryDateChangeFnc);
	//m_wndDeliveryDate.SetEvent(WE_SETFOCUS, _OnDeliveryDateSetfocusFnc);
	//m_wndDeliveryDate.SetEvent(WE_KILLFOCUS, _OnDeliveryDateKillfocusFnc);
	m_wndDeliveryDate.SetEvent(WE_CHECKVALUE, _OnDeliveryDateCheckValueFnc);
	//m_wndDeliveryAddress.SetEvent(WE_CHANGE, _OnDeliveryAddressChangeFnc);
	//m_wndDeliveryAddress.SetEvent(WE_SETFOCUS, _OnDeliveryAddressSetfocusFnc);
	//m_wndDeliveryAddress.SetEvent(WE_KILLFOCUS, _OnDeliveryAddressKillfocusFnc);
	m_wndDeliveryAddress.SetEvent(WE_CHECKVALUE, _OnDeliveryAddressCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseInvoiceExtraFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseInvoiceExtraFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseInvoiceExtraFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseInvoiceExtraFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseInvoiceExtraFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPurchaseInvoiceExtra::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_TextEx(pDX, m_wndPaymentTerms.GetDlgCtrlID(), m_szPaymentTermsKey);
	DDX_TextEx(pDX, m_wndDueDate.GetDlgCtrlID(), m_szDueDate);
	DDX_Text(pDX, m_wndBillTo.GetDlgCtrlID(), m_szBillTo);
	DDX_TextEx(pDX, m_wndDeliveryMethod.GetDlgCtrlID(), m_szDeliveryMethodKey);
	DDX_TextEx(pDX, m_wndDeliveryTerms.GetDlgCtrlID(), m_szDeliveryTermsKey);
	DDX_TextEx(pDX, m_wndDeliveryDate.GetDlgCtrlID(), m_szDeliveryDate);
	DDX_Text(pDX, m_wndDeliveryAddress.GetDlgCtrlID(), m_szDeliveryAddress);

}
void CPurchaseInvoiceExtra::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseInvoiceExtra::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseInvoiceExtra::SetDefaultValues(){

	m_szPaymentMethodKey.Empty();
	m_szPaymentTermsKey.Empty();
	m_szDueDate.Empty();
	m_szBillTo.Empty();
	m_szDeliveryMethodKey.Empty();
	m_szDeliveryTermsKey.Empty();
	m_szDeliveryDate.Empty();
	m_szDeliveryAddress.Empty();

}
int CPurchaseInvoiceExtra::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 3, 4, -1);
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
void CPurchaseInvoiceExtra::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseInvoiceExtra::OnPaymentMethodSelendok(){
	 
}
/*void CPurchaseInvoiceExtra::OnPaymentMethodSetfocus(){
	
}*/
/*void CPurchaseInvoiceExtra::OnPaymentMethodKillfocus(){
	
}*/
long CPurchaseInvoiceExtra::OnPaymentMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentMethodKey
};
	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseInvoiceExtra::OnPaymentMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseInvoiceExtra::OnPaymentTermsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseInvoiceExtra::OnPaymentTermsSelendok(){
	 
}
/*void CPurchaseInvoiceExtra::OnPaymentTermsSetfocus(){
	
}*/
/*void CPurchaseInvoiceExtra::OnPaymentTermsKillfocus(){
	
}*/
long CPurchaseInvoiceExtra::OnPaymentTermsLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentTerms.IsSearchKey() && !m_szPaymentTermsKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentTermsKey
};
	m_wndPaymentTerms.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentTerms.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseInvoiceExtra::OnPaymentTermsAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseInvoiceExtra::OnDueDateChange(){
	
} */
/*void CPurchaseInvoiceExtra::OnDueDateSetfocus(){
	
} */
/*void CPurchaseInvoiceExtra::OnDueDateKillfocus(){
	
} */
int CPurchaseInvoiceExtra::OnDueDateCheckValue(){
	return 0;
} 
/*void CPurchaseInvoiceExtra::OnBillToChange(){
	
} */
/*void CPurchaseInvoiceExtra::OnBillToSetfocus(){
	
} */
/*void CPurchaseInvoiceExtra::OnBillToKillfocus(){
	
} */
int CPurchaseInvoiceExtra::OnBillToCheckValue(){
	return 0;
} 
void CPurchaseInvoiceExtra::OnDeliveryMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseInvoiceExtra::OnDeliveryMethodSelendok(){
	 
}
/*void CPurchaseInvoiceExtra::OnDeliveryMethodSetfocus(){
	
}*/
/*void CPurchaseInvoiceExtra::OnDeliveryMethodKillfocus(){
	
}*/
long CPurchaseInvoiceExtra::OnDeliveryMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeliveryMethod.IsSearchKey() && !m_szDeliveryMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeliveryMethodKey
};
	m_wndDeliveryMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeliveryMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseInvoiceExtra::OnDeliveryMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPurchaseInvoiceExtra::OnDeliveryTermsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPurchaseInvoiceExtra::OnDeliveryTermsSelendok(){
	 
}
/*void CPurchaseInvoiceExtra::OnDeliveryTermsSetfocus(){
	
}*/
/*void CPurchaseInvoiceExtra::OnDeliveryTermsKillfocus(){
	
}*/
long CPurchaseInvoiceExtra::OnDeliveryTermsLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeliveryTerms.IsSearchKey() && !m_szDeliveryTermsKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeliveryTermsKey
};
	m_wndDeliveryTerms.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeliveryTerms.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPurchaseInvoiceExtra::OnDeliveryTermsAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPurchaseInvoiceExtra::OnDeliveryDateChange(){
	
} */
/*void CPurchaseInvoiceExtra::OnDeliveryDateSetfocus(){
	
} */
/*void CPurchaseInvoiceExtra::OnDeliveryDateKillfocus(){
	
} */
int CPurchaseInvoiceExtra::OnDeliveryDateCheckValue(){
	return 0;
} 
/*void CPurchaseInvoiceExtra::OnDeliveryAddressChange(){
	
} */
/*void CPurchaseInvoiceExtra::OnDeliveryAddressSetfocus(){
	
} */
/*void CPurchaseInvoiceExtra::OnDeliveryAddressKillfocus(){
	
} */
int CPurchaseInvoiceExtra::OnDeliveryAddressCheckValue(){
	return 0;
} 
int CPurchaseInvoiceExtra::OnAddPurchaseInvoiceExtra(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseInvoiceExtra::OnEditPurchaseInvoiceExtra(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseInvoiceExtra::OnDeletePurchaseInvoiceExtra(){
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
 		OnCancelPurchaseInvoiceExtra();
 	}
	return 0;
}
int CPurchaseInvoiceExtra::OnSavePurchaseInvoiceExtra(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPurchaseInvoiceExtraListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseInvoiceExtra::OnCancelPurchaseInvoiceExtra(){
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
int CPurchaseInvoiceExtra::OnPurchaseInvoiceExtraListLoadData(){
	return 0;
}
