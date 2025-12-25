#include "FABankStatementGeneralView_MOVE.h"
#include "MainFrm.h"
/*static void _OnVoucherNoChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnVoucherNoChange();
} */
/*static void _OnVoucherNoSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnVoucherNoSetfocus();} */ 
/*static void _OnVoucherNoKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnVoucherNoKillfocus();
} */
static int _OnVoucherNoCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView_MOVE *)pWnd)->OnVoucherNoCheckValue();
} 
/*static void _OnVoucherDateChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnVoucherDateChange();
} */
/*static void _OnVoucherDateSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnVoucherDateSetfocus();} */ 
/*static void _OnVoucherDateKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnVoucherDateKillfocus();
} */
static int _OnVoucherDateCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView_MOVE *)pWnd)->OnVoucherDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView_MOVE *)pWnd)->OnAccountingDateCheckValue();
} 
/*static void _OnDocumentChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnDocumentChange();
} */
/*static void _OnDocumentSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnDocumentSetfocus();} */ 
/*static void _OnDocumentKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnDocumentKillfocus();
} */
static int _OnDocumentCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView_MOVE *)pWnd)->OnDocumentCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementGeneralView_MOVE* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView_MOVE *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnObjectNameChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnObjectNameChange();
} */
/*static void _OnObjectNameSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnObjectNameSetfocus();} */ 
/*static void _OnObjectNameKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnObjectNameKillfocus();
} */
static int _OnObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView_MOVE *)pWnd)->OnObjectNameCheckValue();
} 
static void _OnBankAccount2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFABankStatementGeneralView_MOVE* )pWnd)->OnBankAccount2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBankAccount2SelendokFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnBankAccount2Selendok();
}
/*static void _OnBankAccount2SetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnBankAccount2Killfocus();
}*/
/*static void _OnBankAccount2KillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnBankAccount2Killfocus();
}*/
static long _OnBankAccount2LoadDataFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView_MOVE *)pWnd)->OnBankAccount2LoadData();
}
/*static void _OnBankAccount2AddNewFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnBankAccount2AddNew();
}*/
/*static void _OnBankName2ChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnBankName2Change();
} */
/*static void _OnBankName2SetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnBankName2Setfocus();} */ 
/*static void _OnBankName2KillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnBankName2Killfocus();
} */
static int _OnBankName2CheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView_MOVE *)pWnd)->OnBankName2CheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CFABankStatementGeneralView_MOVE *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CFABankStatementGeneralView_MOVE *)pWnd)->OnReasonCheckValue();
} 
static int _OnAddFABankStatementGeneralView_MOVEFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView_MOVE*)pWnd)->OnAddFABankStatementGeneralView_MOVE();
} 
static int _OnEditFABankStatementGeneralView_MOVEFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView_MOVE*)pWnd)->OnEditFABankStatementGeneralView_MOVE();
} 
static int _OnDeleteFABankStatementGeneralView_MOVEFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView_MOVE*)pWnd)->OnDeleteFABankStatementGeneralView_MOVE();
} 
static int _OnSaveFABankStatementGeneralView_MOVEFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView_MOVE*)pWnd)->OnSaveFABankStatementGeneralView_MOVE();
} 
static int _OnCancelFABankStatementGeneralView_MOVEFnc(CWnd *pWnd){
	 return ((CFABankStatementGeneralView_MOVE*)pWnd)->OnCancelFABankStatementGeneralView_MOVE();
} 
CFABankStatementGeneralView_MOVE::CFABankStatementGeneralView_MOVE(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CFABankStatementGeneralView_MOVE::~CFABankStatementGeneralView_MOVE(){
}
void CFABankStatementGeneralView_MOVE::OnCreateComponents(){
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 5, 5, 225, 150);
	m_wndBank1Information.Create(this, _T("Applicant"), 230, 5, 800, 60);
	m_wndBank2Information.Create(this, _T("Benificiary"), 230, 65, 800, 120);
	m_wndVoucherNoLabel.Create(this, _T("Voucher No"), 10, 30, 110, 55);
	m_wndVoucherNo.Create(this,115, 30, 220, 55); 
	m_wndVoucherDateLabel.Create(this, _T("Voucher Date"), 10, 60, 110, 85);
	m_wndVoucherDate.Create(this,115, 60, 220, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 10, 90, 110, 115);
	m_wndAccountingDate.Create(this,115, 90, 220, 115); 
	m_wndDocumentLabel.Create(this, _T("Ref#"), 10, 120, 110, 145);
	m_wndDocument.Create(this,114, 120, 219, 145); 
	m_wndObjectLabel.Create(this, _T("Object"), 235, 30, 335, 55);
	m_wndObject.Create(this,340, 30, 460, 55); 
	m_wndObjectName.Create(this,465, 30, 795, 55); 
	m_wndBankAccount2Label.Create(this, _T("Account"), 235, 90, 335, 115);
	m_wndBankAccount2.Create(this,340, 90, 461, 115); 
	m_wndBankName2.Create(this,466, 90, 796, 115); 
	m_wndReasonLabel.Create(this, _T("Description"), 235, 125, 335, 150);
	m_wndReason.Create(this,340, 125, 795, 150); 

}
void CFABankStatementGeneralView_MOVE::OnInitializeComponents(){
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
	m_wndBankAccount2.SetCheckValue(true);
	m_wndBankAccount2.LimitText(35);
	m_wndBankName2.SetLimitText(35);
	m_wndBankName2.SetCheckValue(true);
	m_wndReason.SetLimitText(35);
	m_wndReason.SetCheckValue(true);




	m_wndBankAccount2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBankAccount2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFABankStatementGeneralView_MOVE::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFABankStatementGeneralView_MOVEFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFABankStatementGeneralView_MOVEFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFABankStatementGeneralView_MOVEFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFABankStatementGeneralView_MOVEFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFABankStatementGeneralView_MOVEFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFABankStatementGeneralView_MOVE::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndVoucherNo.GetDlgCtrlID(), m_szVoucherNo);
	DDX_TextEx(pDX, m_wndVoucherDate.GetDlgCtrlID(), m_szVoucherDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_Text(pDX, m_wndDocument.GetDlgCtrlID(), m_szDocument);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndObjectName.GetDlgCtrlID(), m_szObjectName);
	DDX_TextEx(pDX, m_wndBankAccount2.GetDlgCtrlID(), m_szBankAccount2Key);
	DDX_Text(pDX, m_wndBankName2.GetDlgCtrlID(), m_szBankName2);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);

}
void CFABankStatementGeneralView_MOVE::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFABankStatementGeneralView_MOVE::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFABankStatementGeneralView_MOVE::SetDefaultValues(){

	m_szVoucherNo.Empty();
	m_szVoucherDate.Empty();
	m_szAccountingDate.Empty();
	m_szDocument.Empty();
	m_szObjectKey.Empty();
	m_szObjectName.Empty();
	m_szBankAccount2Key.Empty();
	m_szBankName2.Empty();
	m_szReason.Empty();

}
int CFABankStatementGeneralView_MOVE::SetMode(int nMode){
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
/*void CFABankStatementGeneralView_MOVE::OnVoucherNoChange(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnVoucherNoSetfocus(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnVoucherNoKillfocus(){
	
} */
int CFABankStatementGeneralView_MOVE::OnVoucherNoCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView_MOVE::OnVoucherDateChange(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnVoucherDateSetfocus(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnVoucherDateKillfocus(){
	
} */
int CFABankStatementGeneralView_MOVE::OnVoucherDateCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView_MOVE::OnAccountingDateChange(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnAccountingDateSetfocus(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnAccountingDateKillfocus(){
	
} */
int CFABankStatementGeneralView_MOVE::OnAccountingDateCheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView_MOVE::OnDocumentChange(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnDocumentSetfocus(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnDocumentKillfocus(){
	
} */
int CFABankStatementGeneralView_MOVE::OnDocumentCheckValue(){
	return 0;
} 
void CFABankStatementGeneralView_MOVE::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFABankStatementGeneralView_MOVE::OnObjectSelendok(){
	 
}
/*void CFABankStatementGeneralView_MOVE::OnObjectSetfocus(){
	
}*/
/*void CFABankStatementGeneralView_MOVE::OnObjectKillfocus(){
	
}*/
long CFABankStatementGeneralView_MOVE::OnObjectLoadData(){
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
/*void CFABankStatementGeneralView_MOVE::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFABankStatementGeneralView_MOVE::OnObjectNameChange(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnObjectNameSetfocus(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnObjectNameKillfocus(){
	
} */
int CFABankStatementGeneralView_MOVE::OnObjectNameCheckValue(){
	return 0;
} 
void CFABankStatementGeneralView_MOVE::OnBankAccount2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFABankStatementGeneralView_MOVE::OnBankAccount2Selendok(){
	 
}
/*void CFABankStatementGeneralView_MOVE::OnBankAccount2Setfocus(){
	
}*/
/*void CFABankStatementGeneralView_MOVE::OnBankAccount2Killfocus(){
	
}*/
long CFABankStatementGeneralView_MOVE::OnBankAccount2LoadData(){
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
/*void CFABankStatementGeneralView_MOVE::OnBankAccount2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFABankStatementGeneralView_MOVE::OnBankName2Change(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnBankName2Setfocus(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnBankName2Killfocus(){
	
} */
int CFABankStatementGeneralView_MOVE::OnBankName2CheckValue(){
	return 0;
} 
/*void CFABankStatementGeneralView_MOVE::OnReasonChange(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnReasonSetfocus(){
	
} */
/*void CFABankStatementGeneralView_MOVE::OnReasonKillfocus(){
	
} */
int CFABankStatementGeneralView_MOVE::OnReasonCheckValue(){
	return 0;
} 
int CFABankStatementGeneralView_MOVE::OnAddFABankStatementGeneralView_MOVE(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFABankStatementGeneralView_MOVE::OnEditFABankStatementGeneralView_MOVE(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFABankStatementGeneralView_MOVE::OnDeleteFABankStatementGeneralView_MOVE(){
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
 		OnCancelFABankStatementGeneralView_MOVE();
 	}
	return 0;
}
int CFABankStatementGeneralView_MOVE::OnSaveFABankStatementGeneralView_MOVE(){
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
 		//OnFABankStatementGeneralView_MOVEListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFABankStatementGeneralView_MOVE::OnCancelFABankStatementGeneralView_MOVE(){
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
int CFABankStatementGeneralView_MOVE::OnFABankStatementGeneralView_MOVEListLoadData(){
	return 0;
}
