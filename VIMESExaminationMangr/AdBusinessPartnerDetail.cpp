#include "AdBusinessPartnerDetail.h"
#include "MainFrm.h"
int LoadDeliveryMethodList(CWnd* pWnd, CString szKey, CString szFilter){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and addm_delivery_method_id='%s' "), szKey);
	};
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT addm_delivery_method_id as id, addm_description as name FROM ad_delivery_method WHERE addm_isactive='Y' %s %s ORDER BY addm_delivery_method_id "), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	
}


int LoadDeliveryTermList(CWnd* pWnd, CString szKey, CString szFilter){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and addt_delivery_term_id='%s' "), szKey);
	};
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT addt_delivery_term_id as id, addt_description as name FROM ad_delivery_term WHERE addt_isactive='Y' %s %s ORDER BY addt_delivery_term_id "), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	
}



/*static void _OnDebitLimitChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDebitLimitChange();
} */
/*static void _OnDebitLimitSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDebitLimitSetfocus();} */ 
/*static void _OnDebitLimitKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDebitLimitKillfocus();
} */
static int _OnDebitLimitCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDetail *)pWnd)->OnDebitLimitCheckValue();
} 
/*static void _OnDeadLineChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeadLineChange();
} */
/*static void _OnDeadLineSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeadLineSetfocus();} */ 
/*static void _OnDeadLineKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeadLineKillfocus();
} */
static int _OnDeadLineCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDetail *)pWnd)->OnDeadLineCheckValue();
} 
static void _OnDeliveryMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerDetail* )pWnd)->OnDeliveryMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryMethodSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeliveryMethodSelendok();
}
/*static void _OnDeliveryMethodSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeliveryMethodKillfocus();
}*/
/*static void _OnDeliveryMethodKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeliveryMethodKillfocus();
}*/
static long _OnDeliveryMethodLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDetail *)pWnd)->OnDeliveryMethodLoadData();
}
/*static void _OnDeliveryMethodAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeliveryMethodAddNew();
}*/
static void _OnDeliveryTermsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerDetail* )pWnd)->OnDeliveryTermsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliveryTermsSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeliveryTermsSelendok();
}
/*static void _OnDeliveryTermsSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeliveryTermsKillfocus();
}*/
/*static void _OnDeliveryTermsKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeliveryTermsKillfocus();
}*/
static long _OnDeliveryTermsLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDetail *)pWnd)->OnDeliveryTermsLoadData();
}
/*static void _OnDeliveryTermsAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnDeliveryTermsAddNew();
}*/
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerDetail* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDetail *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnPaymentTermsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerDetail* )pWnd)->OnPaymentTermsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentTermsSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnPaymentTermsSelendok();
}
/*static void _OnPaymentTermsSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnPaymentTermsKillfocus();
}*/
/*static void _OnPaymentTermsKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnPaymentTermsKillfocus();
}*/
static long _OnPaymentTermsLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerDetail *)pWnd)->OnPaymentTermsLoadData();
}
/*static void _OnPaymentTermsAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerDetail *)pWnd)->OnPaymentTermsAddNew();
}*/

static int _OnAddAdBusinessPartnerDetailFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerDetail*)pWnd)->OnAddAdBusinessPartnerDetail();
} 
static int _OnEditAdBusinessPartnerDetailFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerDetail*)pWnd)->OnEditAdBusinessPartnerDetail();
} 
static int _OnDeleteAdBusinessPartnerDetailFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerDetail*)pWnd)->OnDeleteAdBusinessPartnerDetail();
} 
static int _OnSaveAdBusinessPartnerDetailFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerDetail*)pWnd)->OnSaveAdBusinessPartnerDetail();
} 
static int _OnCancelAdBusinessPartnerDetailFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerDetail*)pWnd)->OnCancelAdBusinessPartnerDetail();
} 
CAdBusinessPartnerDetail::CAdBusinessPartnerDetail(){

	m_nDlgWidth = 785;
	m_nDlgHeight = 145;
	SetDefaultValues();
}
CAdBusinessPartnerDetail::~CAdBusinessPartnerDetail(){
}
void CAdBusinessPartnerDetail::OnCreateComponents(){
	m_wndTerms.Create(this, _T("Terms"), 0, 0, 790, 115);
	m_wndDebitLimitLabel.Create(this, _T("Debit Limit"), 5, 25, 160, 50);
	m_wndDebitLimit.Create(this,165, 25, 270, 50); 
	m_wndDeadLineLabel.Create(this, _T("DeadLine"), 395, 25, 550, 50);
	m_wndDeadLine.Create(this,555, 25, 665, 50); 
	m_wndDeliveryMethodLabel.Create(this, _T("Delivery Method"), 5, 55, 160, 80);
	m_wndDeliveryMethod.Create(this,165, 55, 390, 80); 
	m_wndDeliveryTermsLabel.Create(this, _T("Delivery Terms"), 395, 55, 550, 80);
	m_wndDeliveryTerms.Create(this,555, 55, 785, 80); 
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 5, 85, 160, 110);
	m_wndPaymentMethod.Create(this,165, 85, 390, 110); 
	m_wndPaymentTermsLabel.Create(this, _T("Payment Terms"), 395, 85, 550, 110);
	m_wndPaymentTerms.Create(this,555, 85, 785, 110); 

	m_wndBankAccountInformation.Create(this, _T(""), 0, 0, 0, 0);
	m_wndBankAccountInformation.ShowWindow(SW_HIDE);
	m_wndBankAccountInformation.EnableWindow(FALSE);

}
void CAdBusinessPartnerDetail::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTerms.ModifyStyle(WS_BORDER, 0);
	m_wndDebitLimit.SetLimitText(16);
	m_wndDebitLimit.SetCurrencyFormat(true);
	m_wndDeadLine.SetLimitText(16);
	m_wndDeliveryMethod.LimitText(35);
	m_wndDeliveryTerms.LimitText(35);
	m_wndPaymentMethod.LimitText(35);
	m_wndPaymentTerms.LimitText(35);



	m_wndDeliveryMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndDeliveryMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 270);


	m_wndDeliveryTerms.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDeliveryTerms.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPaymentTerms.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndPaymentTerms.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_ad_partnerTbl.SetTableName(_T("ad_partner"));
	m_ad_partnerTbl.AddField(_T("adp_maxdebit"), dfDouble); 
	m_ad_partnerTbl.AddField(_T("adp_deadline"), dfInteger); 
	m_ad_partnerTbl.AddField(_T("adp_delivery_method_id"), dfText, 15); 
	m_ad_partnerTbl.AddField(_T("adp_delivery_terms_id"), dfText, 15); 
	m_ad_partnerTbl.AddField(_T("adp_payment_terms_id"), dfText, 15 );
	m_ad_partnerTbl.AddField(_T("adp_payment_method_id"), dfText, 15);
}
void CAdBusinessPartnerDetail::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDebitLimit.SetEvent(WE_CHANGE, _OnDebitLimitChangeFnc);
	//m_wndDebitLimit.SetEvent(WE_SETFOCUS, _OnDebitLimitSetfocusFnc);
	//m_wndDebitLimit.SetEvent(WE_KILLFOCUS, _OnDebitLimitKillfocusFnc);
	m_wndDebitLimit.SetEvent(WE_CHECKVALUE, _OnDebitLimitCheckValueFnc);
	//m_wndDeadLine.SetEvent(WE_CHANGE, _OnDeadLineChangeFnc);
	//m_wndDeadLine.SetEvent(WE_SETFOCUS, _OnDeadLineSetfocusFnc);
	//m_wndDeadLine.SetEvent(WE_KILLFOCUS, _OnDeadLineKillfocusFnc);
	m_wndDeadLine.SetEvent(WE_CHECKVALUE, _OnDeadLineCheckValueFnc);
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
	//m_wndAccountName.SetEvent(WE_CHANGE, _OnAccountNameChangeFnc);
	//m_wndAccountName.SetEvent(WE_SETFOCUS, _OnAccountNameSetfocusFnc);
	//m_wndAccountName.SetEvent(WE_KILLFOCUS, _OnAccountNameKillfocusFnc);

	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdBusinessPartnerDetailFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdBusinessPartnerDetailFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdBusinessPartnerDetailFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdBusinessPartnerDetailFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdBusinessPartnerDetailFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAdBusinessPartnerDetail::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDebitLimit.GetDlgCtrlID(), m_nDebitLimit);
	DDX_Text(pDX, m_wndDeadLine.GetDlgCtrlID(), m_nDeadLine);
	DDX_TextEx(pDX, m_wndDeliveryMethod.GetDlgCtrlID(), m_szDeliveryMethodKey);
	DDX_TextEx(pDX, m_wndDeliveryTerms.GetDlgCtrlID(), m_szDeliveryTermsKey);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_TextEx(pDX, m_wndPaymentTerms.GetDlgCtrlID(), m_szPaymentTermsKey);


}
void CAdBusinessPartnerDetail::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ad_partner WHERE adp_partner_id = '%s'"), m_szPartnerID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("adp_maxdebit"), m_nDebitLimit); 
		rs.GetValue(_T("adp_deadline"), m_nDeadLine); 
		rs.GetValue(_T("adp_delivery_method_id"), m_szDeliveryMethodKey); 
		rs.GetValue(_T("adp_delivery_terms_id"), m_szDeliveryTermsKey); 
		rs.GetValue(_T("adp_payment_terms_id"), m_szPaymentTermsKey);
		rs.GetValue(_T("adp_payment_method_id"), m_szPaymentMethodKey);
		UpdateData(false);
	}

}
void CAdBusinessPartnerDetail::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_ad_partnerTbl.SetValue(_T("adp_maxdebit"), m_nDebitLimit); 
	m_ad_partnerTbl.SetValue(_T("adp_deadline"), m_nDeadLine); 
	m_ad_partnerTbl.SetValue(_T("adp_delivery_method_id"), m_szDeliveryMethodKey); 
	m_ad_partnerTbl.SetValue(_T("adp_delivery_terms_id"), m_szDeliveryTermsKey); 
	m_ad_partnerTbl.SetValue(_T("adp_payment_terms_id"), m_szPaymentTermsKey);
	m_ad_partnerTbl.SetValue(_T("adp_payment_method_id"), m_szPaymentMethodKey);

}
void CAdBusinessPartnerDetail::SetDefaultValues(){

	m_nDebitLimit=0;
	m_nDeadLine=0;
	m_szDeliveryMethodKey.Empty();
	m_szDeliveryTermsKey.Empty();
	m_szPaymentMethodKey.Empty();
	m_szPaymentTermsKey.Empty();
	m_szAccountName.Empty();
	m_szAccountNumber.Empty();
	m_szBranch.Empty();

}
int CAdBusinessPartnerDetail::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
/*void CAdBusinessPartnerDetail::OnDebitLimitChange(){
	
} */
/*void CAdBusinessPartnerDetail::OnDebitLimitSetfocus(){
	
} */
/*void CAdBusinessPartnerDetail::OnDebitLimitKillfocus(){
	
} */
int CAdBusinessPartnerDetail::OnDebitLimitCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerDetail::OnDeadLineChange(){
	
} */
/*void CAdBusinessPartnerDetail::OnDeadLineSetfocus(){
	
} */
/*void CAdBusinessPartnerDetail::OnDeadLineKillfocus(){
	
} */
int CAdBusinessPartnerDetail::OnDeadLineCheckValue(){
	return 0;
} 
void CAdBusinessPartnerDetail::OnDeliveryMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerDetail::OnDeliveryMethodSelendok(){
	 
}
/*void CAdBusinessPartnerDetail::OnDeliveryMethodSetfocus(){
	
}*/
/*void CAdBusinessPartnerDetail::OnDeliveryMethodKillfocus(){
	
}*/
long CAdBusinessPartnerDetail::OnDeliveryMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return LoadDeliveryMethodList(&m_wndDeliveryMethod, m_szDeliveryMethodKey);
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
/*void CAdBusinessPartnerDetail::OnDeliveryMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerDetail::OnDeliveryTermsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerDetail::OnDeliveryTermsSelendok(){
	 
}
/*void CAdBusinessPartnerDetail::OnDeliveryTermsSetfocus(){
	
}*/
/*void CAdBusinessPartnerDetail::OnDeliveryTermsKillfocus(){
	
}*/
long CAdBusinessPartnerDetail::OnDeliveryTermsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return LoadDeliveryTermList(&m_wndDeliveryTerms, m_szDeliveryTermsKey);
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
/*void CAdBusinessPartnerDetail::OnDeliveryTermsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerDetail::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerDetail::OnPaymentMethodSelendok(){
	 
}
/*void CAdBusinessPartnerDetail::OnPaymentMethodSetfocus(){
	
}*/
/*void CAdBusinessPartnerDetail::OnPaymentMethodKillfocus(){
	
}*/
long CAdBusinessPartnerDetail::OnPaymentMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CAdBusinessPartnerDetail::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerDetail::OnPaymentTermsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerDetail::OnPaymentTermsSelendok(){
	 
}
/*void CAdBusinessPartnerDetail::OnPaymentTermsSetfocus(){
	
}*/
/*void CAdBusinessPartnerDetail::OnPaymentTermsKillfocus(){
	
}*/
long CAdBusinessPartnerDetail::OnPaymentTermsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return LoadPaymentTermList(&m_wndPaymentTerms, m_szPaymentTermsKey);
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
/*void CAdBusinessPartnerDetail::OnPaymentTermsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CAdBusinessPartnerDetail::OnAddAdBusinessPartnerDetail(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerDetail::OnEditAdBusinessPartnerDetail(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerDetail::OnDeleteAdBusinessPartnerDetail(){
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
 		OnCancelAdBusinessPartnerDetail();
 	}
	return 0;
}
int CAdBusinessPartnerDetail::OnSaveAdBusinessPartnerDetail(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szWhere;
 	szWhere.Format(_T(" WHERE adp_partner_id = '%s'"), m_szPartnerID);
 	szSQL = m_ad_partnerTbl.GetUpdateSQL();
 	szSQL += szWhere;
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	return ret;
}
int CAdBusinessPartnerDetail::OnCancelAdBusinessPartnerDetail(){
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
int CAdBusinessPartnerDetail::OnAdBusinessPartnerDetailListLoadData(){
	return 0;
}
