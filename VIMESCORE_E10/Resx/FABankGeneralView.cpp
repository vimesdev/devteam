#include "FABankGeneralView.h"
#include "MainFrm.h"
/*static void _OnVoucherNoChangeFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnVoucherNoChange();
} */
/*static void _OnVoucherNoSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnVoucherNoSetfocus();} */ 
/*static void _OnVoucherNoKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnVoucherNoKillfocus();
} */
static int _OnVoucherNoCheckValueFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnVoucherNoCheckValue();
} 
/*static void _OnVoucherDateChangeFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnVoucherDateChange();
} */
/*static void _OnVoucherDateSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnVoucherDateSetfocus();} */ 
/*static void _OnVoucherDateKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnVoucherDateKillfocus();
} */
static int _OnVoucherDateCheckValueFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnVoucherDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnAccountingDateCheckValue();
} 
/*static void _OnDocumentChangeFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnDocumentChange();
} */
/*static void _OnDocumentSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnDocumentSetfocus();} */ 
/*static void _OnDocumentKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnDocumentKillfocus();
} */
static int _OnDocumentCheckValueFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnDocumentCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankGeneralView* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnObjectNameChangeFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnObjectNameChange();
} */
/*static void _OnObjectNameSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnObjectNameSetfocus();} */ 
/*static void _OnObjectNameKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnObjectNameKillfocus();
} */
static int _OnObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnObjectNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnPBankAccountChangeFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnPBankAccountChange();
} */
/*static void _OnPBankAccountSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnPBankAccountSetfocus();} */ 
/*static void _OnPBankAccountKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnPBankAccountKillfocus();
} */
static int _OnPBankAccountCheckValueFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnPBankAccountCheckValue();
} 
/*static void _OnPBankNameChangeFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnPBankNameChange();
} */
/*static void _OnPBankNameSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnPBankNameSetfocus();} */ 
/*static void _OnPBankNameKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnPBankNameKillfocus();
} */
static int _OnPBankNameCheckValueFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnPBankNameCheckValue();
} 
static void _OnBankAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankGeneralView* )pWnd)->OnBankAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBankAccountSelendokFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnBankAccountSelendok();
}
/*static void _OnBankAccountSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnBankAccountKillfocus();
}*/
/*static void _OnBankAccountKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnBankAccountKillfocus();
}*/
static long _OnBankAccountLoadDataFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnBankAccountLoadData();
}
/*static void _OnBankAccountAddNewFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnBankAccountAddNew();
}*/
/*static void _OnBankNameChangeFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnBankNameChange();
} */
/*static void _OnBankNameSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnBankNameSetfocus();} */ 
/*static void _OnBankNameKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnBankNameKillfocus();
} */
static int _OnBankNameCheckValueFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnBankNameCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CFABankGeneralView *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CFABankGeneralView *)pWnd)->OnReasonCheckValue();
} 
static int _OnAddFABankGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankGeneralView*)pWnd)->OnAddFABankGeneralView();
} 
static int _OnEditFABankGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankGeneralView*)pWnd)->OnEditFABankGeneralView();
} 
static int _OnDeleteFABankGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankGeneralView*)pWnd)->OnDeleteFABankGeneralView();
} 
static int _OnSaveFABankGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankGeneralView*)pWnd)->OnSaveFABankGeneralView();
} 
static int _OnCancelFABankGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankGeneralView*)pWnd)->OnCancelFABankGeneralView();
} 
CFABankGeneralView::CFABankGeneralView(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 215;
	SetDefaultValues();
}
CFABankGeneralView::~CFABankGeneralView(){
}
void CFABankGeneralView::OnCreateComponents(){
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 5, 5, 225, 210);
	m_wndParnterInformation.Create(this, _T("Parner Information"), 230, 5, 800, 120);
	m_wndBankInformation.Create(this, _T("Bank Information"), 230, 125, 800, 210);
	m_wndVoucherNoLabel.Create(this, _T("Voucher No"), 10, 30, 110, 55);
	m_wndVoucherNo.Create(this,115, 30, 220, 55); 
	m_wndVoucherDateLabel.Create(this, _T("Voucher Date"), 10, 60, 110, 85);
	m_wndVoucherDate.Create(this,115, 60, 220, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 10, 90, 110, 115);
	m_wndAccountingDate.Create(this,115, 90, 220, 115); 
	m_wndDocumentLabel.Create(this, _T("Document#"), 9, 120, 109, 145);
	m_wndDocument.Create(this,114, 120, 219, 145); 
	m_wndObjectLabel.Create(this, _T("Object"), 235, 30, 335, 55);
	m_wndObject.Create(this,340, 30, 460, 55); 
	m_wndObjectName.Create(this,465, 30, 795, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 235, 60, 335, 85);
	m_wndAddress.Create(this,340, 60, 795, 85); 
	m_wndPBankAccountLabel.Create(this, _T("PBankAccount"), 235, 90, 335, 115);
	m_wndPBankAccount.Create(this,340, 90, 460, 115); 
	m_wndPBankName.Create(this,465, 90, 795, 115); 
	m_wndBankAccountLabel.Create(this, _T("Bank Account"), 235, 150, 335, 175);
	m_wndBankAccount.Create(this,340, 150, 461, 175); 
	m_wndBankName.Create(this,466, 150, 796, 175); 
	m_wndReasonLabel.Create(this, _T("Description"), 235, 180, 335, 205);
	m_wndReason.Create(this,340, 179, 795, 204); 

}
void CFABankGeneralView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndVoucherNo.SetLimitText(1024);
	m_wndVoucherNo.SetCheckValue(true);
	m_wndVoucherDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndVoucherDate.SetCheckValue(true);
	m_wndAccountingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAccountingDate.SetCheckValue(true);
	m_wndDocument.SetLimitText(35);
	m_wndDocument.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndObjectName.SetLimitText(35);
	m_wndObjectName.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndPBankAccount.SetLimitText(35);
	m_wndPBankAccount.SetCheckValue(true);
	m_wndPBankName.SetLimitText(35);
	m_wndPBankName.SetCheckValue(true);
	m_wndBankAccount.SetCheckValue(true);
	m_wndBankAccount.LimitText(35);
	m_wndBankName.SetLimitText(35);
	m_wndBankName.SetCheckValue(true);
	m_wndReason.SetLimitText(35);
	m_wndReason.SetCheckValue(true);




	m_wndBankAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBankAccount.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFABankGeneralView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndVoucherNo.SetEvent(WE_CHANGE, _OnVoucherNoChangeFnc);
	//m_wndVoucherNo.SetEvent(WE_SETFOCUS, _OnVoucherNoSetfocusFnc);
	//m_wndVoucherNo.SetEvent(WE_KILLFOCUS, _OnVoucherNoKillfocusFnc);
	m_wndVoucherNo.SetEvent(WE_CHECKVALUE, _OnVoucherNoCheckValueFnc);
	//m_wndVoucherDate.SetEvent(WE_CHANGE, _OnVoucherDateChangeFnc);
	//m_wndVoucherDate.SetEvent(WE_SETFOCUS, _OnVoucherDateSetfocusFnc);
	//m_wndVoucherDate.SetEvent(WE_KILLFOCUS, _OnVoucherDateKillfocusFnc);
	m_wndVoucherDate.SetEvent(WE_CHECKVALUE, _OnVoucherDateCheckValueFnc);
	//m_wndAccountingDate.SetEvent(WE_CHANGE, _OnAccountingDateChangeFnc);
	//m_wndAccountingDate.SetEvent(WE_SETFOCUS, _OnAccountingDateSetfocusFnc);
	//m_wndAccountingDate.SetEvent(WE_KILLFOCUS, _OnAccountingDateKillfocusFnc);
	m_wndAccountingDate.SetEvent(WE_CHECKVALUE, _OnAccountingDateCheckValueFnc);
	//m_wndDocument.SetEvent(WE_CHANGE, _OnDocumentChangeFnc);
	//m_wndDocument.SetEvent(WE_SETFOCUS, _OnDocumentSetfocusFnc);
	//m_wndDocument.SetEvent(WE_KILLFOCUS, _OnDocumentKillfocusFnc);
	m_wndDocument.SetEvent(WE_CHECKVALUE, _OnDocumentCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndObjectName.SetEvent(WE_CHANGE, _OnObjectNameChangeFnc);
	//m_wndObjectName.SetEvent(WE_SETFOCUS, _OnObjectNameSetfocusFnc);
	//m_wndObjectName.SetEvent(WE_KILLFOCUS, _OnObjectNameKillfocusFnc);
	m_wndObjectName.SetEvent(WE_CHECKVALUE, _OnObjectNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndPBankAccount.SetEvent(WE_CHANGE, _OnPBankAccountChangeFnc);
	//m_wndPBankAccount.SetEvent(WE_SETFOCUS, _OnPBankAccountSetfocusFnc);
	//m_wndPBankAccount.SetEvent(WE_KILLFOCUS, _OnPBankAccountKillfocusFnc);
	m_wndPBankAccount.SetEvent(WE_CHECKVALUE, _OnPBankAccountCheckValueFnc);
	//m_wndPBankName.SetEvent(WE_CHANGE, _OnPBankNameChangeFnc);
	//m_wndPBankName.SetEvent(WE_SETFOCUS, _OnPBankNameSetfocusFnc);
	//m_wndPBankName.SetEvent(WE_KILLFOCUS, _OnPBankNameKillfocusFnc);
	m_wndPBankName.SetEvent(WE_CHECKVALUE, _OnPBankNameCheckValueFnc);
	m_wndBankAccount.SetEvent(WE_SELENDOK, _OnBankAccountSelendokFnc);
	//m_wndBankAccount.SetEvent(WE_SETFOCUS, _OnBankAccountSetfocusFnc);
	//m_wndBankAccount.SetEvent(WE_KILLFOCUS, _OnBankAccountKillfocusFnc);
	m_wndBankAccount.SetEvent(WE_SELCHANGE, _OnBankAccountSelectChangeFnc);
	m_wndBankAccount.SetEvent(WE_LOADDATA, _OnBankAccountLoadDataFnc);
	//m_wndBankAccount.SetEvent(WE_ADDNEW, _OnBankAccountAddNewFnc);
	//m_wndBankName.SetEvent(WE_CHANGE, _OnBankNameChangeFnc);
	//m_wndBankName.SetEvent(WE_SETFOCUS, _OnBankNameSetfocusFnc);
	//m_wndBankName.SetEvent(WE_KILLFOCUS, _OnBankNameKillfocusFnc);
	m_wndBankName.SetEvent(WE_CHECKVALUE, _OnBankNameCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFABankGeneralViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFABankGeneralViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFABankGeneralViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFABankGeneralViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFABankGeneralViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFABankGeneralView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndVoucherNo.GetDlgCtrlID(), m_szVoucherNo);
	DDX_TextEx(pDX, m_wndVoucherDate.GetDlgCtrlID(), m_szVoucherDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_Text(pDX, m_wndDocument.GetDlgCtrlID(), m_szDocument);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndObjectName.GetDlgCtrlID(), m_szObjectName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndPBankAccount.GetDlgCtrlID(), m_szPBankAccount);
	DDX_Text(pDX, m_wndPBankName.GetDlgCtrlID(), m_szPBankName);
	DDX_TextEx(pDX, m_wndBankAccount.GetDlgCtrlID(), m_szBankAccountKey);
	DDX_Text(pDX, m_wndBankName.GetDlgCtrlID(), m_szBankName);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);

}
void CFABankGeneralView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFABankGeneralView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFABankGeneralView::SetDefaultValues(){

	m_szVoucherNo.Empty();
	m_szVoucherDate.Empty();
	m_szAccountingDate.Empty();
	m_szDocument.Empty();
	m_szObjectKey.Empty();
	m_szObjectName.Empty();
	m_szAddress.Empty();
	m_szPBankAccount.Empty();
	m_szPBankName.Empty();
	m_szBankAccountKey.Empty();
	m_szBankName.Empty();
	m_szReason.Empty();

}
int CFABankGeneralView::SetMode(int nMode){
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
/*void CFABankGeneralView::OnVoucherNoChange(){
	
} */
/*void CFABankGeneralView::OnVoucherNoSetfocus(){
	
} */
/*void CFABankGeneralView::OnVoucherNoKillfocus(){
	
} */
int CFABankGeneralView::OnVoucherNoCheckValue(){
	return 0;
} 
/*void CFABankGeneralView::OnVoucherDateChange(){
	
} */
/*void CFABankGeneralView::OnVoucherDateSetfocus(){
	
} */
/*void CFABankGeneralView::OnVoucherDateKillfocus(){
	
} */
int CFABankGeneralView::OnVoucherDateCheckValue(){
	return 0;
} 
/*void CFABankGeneralView::OnAccountingDateChange(){
	
} */
/*void CFABankGeneralView::OnAccountingDateSetfocus(){
	
} */
/*void CFABankGeneralView::OnAccountingDateKillfocus(){
	
} */
int CFABankGeneralView::OnAccountingDateCheckValue(){
	return 0;
} 
/*void CFABankGeneralView::OnDocumentChange(){
	
} */
/*void CFABankGeneralView::OnDocumentSetfocus(){
	
} */
/*void CFABankGeneralView::OnDocumentKillfocus(){
	
} */
int CFABankGeneralView::OnDocumentCheckValue(){
	return 0;
} 
void CFABankGeneralView::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFABankGeneralView::OnObjectSelendok(){
	 
}
/*void CFABankGeneralView::OnObjectSetfocus(){
	
}*/
/*void CFABankGeneralView::OnObjectKillfocus(){
	
}*/
long CFABankGeneralView::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFABankGeneralView::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFABankGeneralView::OnObjectNameChange(){
	
} */
/*void CFABankGeneralView::OnObjectNameSetfocus(){
	
} */
/*void CFABankGeneralView::OnObjectNameKillfocus(){
	
} */
int CFABankGeneralView::OnObjectNameCheckValue(){
	return 0;
} 
/*void CFABankGeneralView::OnAddressChange(){
	
} */
/*void CFABankGeneralView::OnAddressSetfocus(){
	
} */
/*void CFABankGeneralView::OnAddressKillfocus(){
	
} */
int CFABankGeneralView::OnAddressCheckValue(){
	return 0;
} 
/*void CFABankGeneralView::OnPBankAccountChange(){
	
} */
/*void CFABankGeneralView::OnPBankAccountSetfocus(){
	
} */
/*void CFABankGeneralView::OnPBankAccountKillfocus(){
	
} */
int CFABankGeneralView::OnPBankAccountCheckValue(){
	return 0;
} 
/*void CFABankGeneralView::OnPBankNameChange(){
	
} */
/*void CFABankGeneralView::OnPBankNameSetfocus(){
	
} */
/*void CFABankGeneralView::OnPBankNameKillfocus(){
	
} */
int CFABankGeneralView::OnPBankNameCheckValue(){
	return 0;
} 
void CFABankGeneralView::OnBankAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFABankGeneralView::OnBankAccountSelendok(){
	 
}
/*void CFABankGeneralView::OnBankAccountSetfocus(){
	
}*/
/*void CFABankGeneralView::OnBankAccountKillfocus(){
	
}*/
long CFABankGeneralView::OnBankAccountLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBankAccount.IsSearchKey() && !m_szBankAccountKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBankAccountKey
};
	m_wndBankAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBankAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFABankGeneralView::OnBankAccountAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFABankGeneralView::OnBankNameChange(){
	
} */
/*void CFABankGeneralView::OnBankNameSetfocus(){
	
} */
/*void CFABankGeneralView::OnBankNameKillfocus(){
	
} */
int CFABankGeneralView::OnBankNameCheckValue(){
	return 0;
} 
/*void CFABankGeneralView::OnReasonChange(){
	
} */
/*void CFABankGeneralView::OnReasonSetfocus(){
	
} */
/*void CFABankGeneralView::OnReasonKillfocus(){
	
} */
int CFABankGeneralView::OnReasonCheckValue(){
	return 0;
} 
int CFABankGeneralView::OnAddFABankGeneralView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFABankGeneralView::OnEditFABankGeneralView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFABankGeneralView::OnDeleteFABankGeneralView(){
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
 		OnCancelFABankGeneralView();
 	}
	return 0;
}
int CFABankGeneralView::OnSaveFABankGeneralView(){
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
 		//OnFABankGeneralViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFABankGeneralView::OnCancelFABankGeneralView(){
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
int CFABankGeneralView::OnFABankGeneralViewListLoadData(){
	return 0;
}
