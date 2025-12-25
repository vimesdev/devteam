#include "FABankStatementGeneralView.h"
#include "MainFrm.h"
/*static void _OnVoucherNoChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherNoChange();
} */
/*static void _OnVoucherNoSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherNoSetfocus();} */ 
/*static void _OnVoucherNoKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherNoKillfocus();
} */
static int _OnVoucherNoCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnVoucherNoCheckValue();
} 
/*static void _OnVoucherDateChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherDateChange();
} */
/*static void _OnVoucherDateSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherDateSetfocus();} */ 
/*static void _OnVoucherDateKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnVoucherDateKillfocus();
} */
static int _OnVoucherDateCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnVoucherDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnAccountingDateCheckValue();
} 
/*static void _OnDocumentChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnDocumentChange();
} */
/*static void _OnDocumentSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnDocumentSetfocus();} */ 
/*static void _OnDocumentKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnDocumentKillfocus();
} */
static int _OnDocumentCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnDocumentCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementGeneralView* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnObjectNameChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectNameChange();
} */
/*static void _OnObjectNameSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectNameSetfocus();} */ 
/*static void _OnObjectNameKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnObjectNameKillfocus();
} */
static int _OnObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnObjectNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnBankAccount1ChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankAccount1Change();
} */
/*static void _OnBankAccount1SetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankAccount1Setfocus();} */ 
/*static void _OnBankAccount1KillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankAccount1Killfocus();
} */
static int _OnBankAccount1CheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnBankAccount1CheckValue();
} 
/*static void _OnBankAccount1NameChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankAccount1NameChange();
} */
/*static void _OnBankAccount1NameSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankAccount1NameSetfocus();} */ 
/*static void _OnBankAccount1NameKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankAccount1NameKillfocus();
} */
static int _OnBankAccount1NameCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnBankAccount1NameCheckValue();
} 
static void _OnBankAccount2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementGeneralView* )pWnd)->OnBankAccount2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBankAccount2SelendokFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankAccount2Selendok();
}
/*static void _OnBankAccount2SetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankAccount2Killfocus();
}*/
/*static void _OnBankAccount2KillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankAccount2Killfocus();
}*/
static long _OnBankAccount2LoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnBankAccount2LoadData();
}
/*static void _OnBankAccount2AddNewFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankAccount2AddNew();
}*/
/*static void _OnBankName2ChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankName2Change();
} */
/*static void _OnBankName2SetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankName2Setfocus();} */ 
/*static void _OnBankName2KillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnBankName2Killfocus();
} */
static int _OnBankName2CheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnBankName2CheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView *)pWnd)->OnReasonCheckValue();
} 
static int _OnAddFABankStatementGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView*)pWnd)->OnAddFABankStatementGeneralView();
} 
static int _OnEditFABankStatementGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView*)pWnd)->OnEditFABankStatementGeneralView();
} 
static int _OnDeleteFABankStatementGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView*)pWnd)->OnDeleteFABankStatementGeneralView();
} 
static int _OnSaveFABankStatementGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView*)pWnd)->OnSaveFABankStatementGeneralView();
} 
static int _OnCancelFABankStatementGeneralViewFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView*)pWnd)->OnCancelFABankStatementGeneralView();
} 
CFABankStatementGeneralView::CFABankStatementGeneralView(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 437;
	SetDefaultValues();
}
CFABankStatementGeneralView::~CFABankStatementGeneralView(){
}
void CFABankStatementGeneralView::OnCreateComponents(){
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 4, 5, 224, 210);
	m_wndBank1Information.Create(this, _T("Applicant"), 230, 5, 800, 120);
	m_wndBank2Information.Create(this, _T("Benificiary"), 230, 125, 800, 210);
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
	m_wndBankAccount1Label.Create(this, _T("Account"), 235, 90, 335, 115);
	m_wndBankAccount1.Create(this,340, 90, 460, 115); 
	m_wndBankAccount1Name.Create(this,465, 90, 795, 115); 
	m_wndBankAccount2Label.Create(this, _T("Account"), 235, 150, 335, 175);
	m_wndBankAccount2.Create(this,340, 150, 461, 175); 
	m_wndBankName2.Create(this,466, 150, 796, 175); 
	m_wndReasonLabel.Create(this, _T("Description"), 235, 180, 335, 205);
	m_wndReason.Create(this,340, 179, 795, 204); 

}
void CFABankStatementGeneralView::OnInitializeComponents(){
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
	m_wndBankAccount1.SetLimitText(35);
	m_wndBankAccount1.SetCheckValue(true);
	m_wndBankAccount1Name.SetLimitText(35);
	m_wndBankAccount1Name.SetCheckValue(true);
	m_wndBankAccount2.SetCheckValue(true);
	m_wndBankAccount2.LimitText(35);
	m_wndBankName2.SetLimitText(35);
	m_wndBankName2.SetCheckValue(true);
	m_wndReason.SetLimitText(35);
	m_wndReason.SetCheckValue(true);




	m_wndBankAccount2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBankAccount2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFABankStatementGeneralView::OnSetWindowEvents(){
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
	//m_wndBankAccount1.SetEvent(WE_CHANGE, _OnBankAccount1ChangeFnc);
	//m_wndBankAccount1.SetEvent(WE_SETFOCUS, _OnBankAccount1SetfocusFnc);
	//m_wndBankAccount1.SetEvent(WE_KILLFOCUS, _OnBankAccount1KillfocusFnc);
	m_wndBankAccount1.SetEvent(WE_CHECKVALUE, _OnBankAccount1CheckValueFnc);
	//m_wndBankAccount1Name.SetEvent(WE_CHANGE, _OnBankAccount1NameChangeFnc);
	//m_wndBankAccount1Name.SetEvent(WE_SETFOCUS, _OnBankAccount1NameSetfocusFnc);
	//m_wndBankAccount1Name.SetEvent(WE_KILLFOCUS, _OnBankAccount1NameKillfocusFnc);
	m_wndBankAccount1Name.SetEvent(WE_CHECKVALUE, _OnBankAccount1NameCheckValueFnc);
	m_wndBankAccount2.SetEvent(WE_SELENDOK, _OnBankAccount2SelendokFnc);
	//m_wndBankAccount2.SetEvent(WE_SETFOCUS, _OnBankAccount2SetfocusFnc);
	//m_wndBankAccount2.SetEvent(WE_KILLFOCUS, _OnBankAccount2KillfocusFnc);
	m_wndBankAccount2.SetEvent(WE_SELCHANGE, _OnBankAccount2SelectChangeFnc);
	m_wndBankAccount2.SetEvent(WE_LOADDATA, _OnBankAccount2LoadDataFnc);
	//m_wndBankAccount2.SetEvent(WE_ADDNEW, _OnBankAccount2AddNewFnc);
	//m_wndBankName2.SetEvent(WE_CHANGE, _OnBankName2ChangeFnc);
	//m_wndBankName2.SetEvent(WE_SETFOCUS, _OnBankName2SetfocusFnc);
	//m_wndBankName2.SetEvent(WE_KILLFOCUS, _OnBankName2KillfocusFnc);
	m_wndBankName2.SetEvent(WE_CHECKVALUE, _OnBankName2CheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFABankStatementGeneralViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFABankStatementGeneralViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFABankStatementGeneralViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFABankStatementGeneralViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFABankStatementGeneralViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFABankStatementGeneralView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndVoucherNo.GetDlgCtrlID(), m_szVoucherNo);
	DDX_TextEx(pDX, m_wndVoucherDate.GetDlgCtrlID(), m_szVoucherDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_Text(pDX, m_wndDocument.GetDlgCtrlID(), m_szDocument);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndObjectName.GetDlgCtrlID(), m_szObjectName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndBankAccount1.GetDlgCtrlID(), m_szBankAccount1);
	DDX_Text(pDX, m_wndBankAccount1Name.GetDlgCtrlID(), m_szBankAccount1Name);
	DDX_TextEx(pDX, m_wndBankAccount2.GetDlgCtrlID(), m_szBankAccount2Key);
	DDX_Text(pDX, m_wndBankName2.GetDlgCtrlID(), m_szBankName2);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);

}
void CFABankStatementGeneralView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFABankStatementGeneralView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFABankStatementGeneralView::SetDefaultValues(){

	m_szVoucherNo.Empty();
	m_szVoucherDate.Empty();
	m_szAccountingDate.Empty();
	m_szDocument.Empty();
	m_szObjectKey.Empty();
	m_szObjectName.Empty();
	m_szAddress.Empty();
	m_szBankAccount1.Empty();
	m_szBankAccount1Name.Empty();
	m_szBankAccount2Key.Empty();
	m_szBankName2.Empty();
	m_szReason.Empty();

}
int CFABankStatementGeneralView::SetMode(int nMode){
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
/*void CFABankStatementGeneralView::OnVoucherNoChange(){
	
} */
/*void CFABankStatementGeneralView::OnVoucherNoSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnVoucherNoKillfocus(){
	
} */
int CFABankStatementGeneralView::OnVoucherNoCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnVoucherDateChange(){
	
} */
/*void CFABankStatementGeneralView::OnVoucherDateSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnVoucherDateKillfocus(){
	
} */
int CFABankStatementGeneralView::OnVoucherDateCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnAccountingDateChange(){
	
} */
/*void CFABankStatementGeneralView::OnAccountingDateSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnAccountingDateKillfocus(){
	
} */
int CFABankStatementGeneralView::OnAccountingDateCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnDocumentChange(){
	
} */
/*void CFABankStatementGeneralView::OnDocumentSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnDocumentKillfocus(){
	
} */
int CFABankStatementGeneralView::OnDocumentCheckValue(){
	return 0;
} 
void CFABankStatementGeneralView::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFABankStatementGeneralView::OnObjectSelendok(){
	 
}
/*void CFABankStatementGeneralView::OnObjectSetfocus(){
	
}*/
/*void CFABankStatementGeneralView::OnObjectKillfocus(){
	
}*/
long CFABankStatementGeneralView::OnObjectLoadData(){
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
/*void CFABankStatementGeneralView::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFABankStatementGeneralView::OnObjectNameChange(){
	
} */
/*void CFABankStatementGeneralView::OnObjectNameSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnObjectNameKillfocus(){
	
} */
int CFABankStatementGeneralView::OnObjectNameCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnAddressChange(){
	
} */
/*void CFABankStatementGeneralView::OnAddressSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnAddressKillfocus(){
	
} */
int CFABankStatementGeneralView::OnAddressCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnBankAccount1Change(){
	
} */
/*void CFABankStatementGeneralView::OnBankAccount1Setfocus(){
	
} */
/*void CFABankStatementGeneralView::OnBankAccount1Killfocus(){
	
} */
int CFABankStatementGeneralView::OnBankAccount1CheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnBankAccount1NameChange(){
	
} */
/*void CFABankStatementGeneralView::OnBankAccount1NameSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnBankAccount1NameKillfocus(){
	
} */
int CFABankStatementGeneralView::OnBankAccount1NameCheckValue(){
	return 0;
} 
void CFABankStatementGeneralView::OnBankAccount2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFABankStatementGeneralView::OnBankAccount2Selendok(){
	 
}
/*void CFABankStatementGeneralView::OnBankAccount2Setfocus(){
	
}*/
/*void CFABankStatementGeneralView::OnBankAccount2Killfocus(){
	
}*/
long CFABankStatementGeneralView::OnBankAccount2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBankAccount2.IsSearchKey() && !m_szBankAccount2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBankAccount2Key
};
	m_wndBankAccount2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBankAccount2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFABankStatementGeneralView::OnBankAccount2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFABankStatementGeneralView::OnBankName2Change(){
	
} */
/*void CFABankStatementGeneralView::OnBankName2Setfocus(){
	
} */
/*void CFABankStatementGeneralView::OnBankName2Killfocus(){
	
} */
int CFABankStatementGeneralView::OnBankName2CheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView::OnReasonChange(){
	
} */
/*void CFABankStatementGeneralView::OnReasonSetfocus(){
	
} */
/*void CFABankStatementGeneralView::OnReasonKillfocus(){
	
} */
int CFABankStatementGeneralView::OnReasonCheckValue(){
	return 0;
} 
int CFABankStatementGeneralView::OnAddFABankStatementGeneralView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFABankStatementGeneralView::OnEditFABankStatementGeneralView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFABankStatementGeneralView::OnDeleteFABankStatementGeneralView(){
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
 		OnCancelFABankStatementGeneralView();
 	}
	return 0;
}
int CFABankStatementGeneralView::OnSaveFABankStatementGeneralView(){
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
 		//OnFABankStatementGeneralViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFABankStatementGeneralView::OnCancelFABankStatementGeneralView(){
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
int CFABankStatementGeneralView::OnFABankStatementGeneralViewListLoadData(){
	return 0;
}
