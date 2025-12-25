#include "FATaxView.h"
#include "MainFrm.h"
static void _OnTaxrateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFATaxView* )pWnd)->OnTaxrateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxrateSelendokFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxrateSelendok();
}
/*static void _OnTaxrateSetfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxrateKillfocus();
}*/
/*static void _OnTaxrateKillfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxrateKillfocus();
}*/
static long _OnTaxrateLoadDataFnc(CWnd *pWnd){
	return ((CFATaxView *)pWnd)->OnTaxrateLoadData();
}
/*static void _OnTaxrateAddNewFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxrateAddNew();
}*/
/*static void _OnTaxAmountChangeFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxAmountChange();
} */
/*static void _OnTaxAmountSetfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxAmountSetfocus();} */ 
/*static void _OnTaxAmountKillfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxAmountKillfocus();
} */
static int _OnTaxAmountCheckValueFnc(CWnd *pWnd){
	return ((CFATaxView *)pWnd)->OnTaxAmountCheckValue();
} 
static void _OnTaxAcctSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFATaxView* )pWnd)->OnTaxAcctSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxAcctSelendokFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxAcctSelendok();
}
/*static void _OnTaxAcctSetfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxAcctKillfocus();
}*/
/*static void _OnTaxAcctKillfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxAcctKillfocus();
}*/
static long _OnTaxAcctLoadDataFnc(CWnd *pWnd){
	return ((CFATaxView *)pWnd)->OnTaxAcctLoadData();
}
/*static void _OnTaxAcctAddNewFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnTaxAcctAddNew();
}*/
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFATaxView* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CFATaxView *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceTypeAddNew();
}*/
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CFATaxView *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CFATaxView *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceTemplateChangeFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceTemplateChange();
} */
/*static void _OnInvoiceTemplateSetfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceTemplateSetfocus();} */ 
/*static void _OnInvoiceTemplateKillfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceTemplateKillfocus();
} */
static int _OnInvoiceTemplateCheckValueFnc(CWnd *pWnd){
	return ((CFATaxView *)pWnd)->OnInvoiceTemplateCheckValue();
} 
/*static void _OnInvoiceSignedChangeFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceSignedChange();
} */
/*static void _OnInvoiceSignedSetfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceSignedSetfocus();} */ 
/*static void _OnInvoiceSignedKillfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnInvoiceSignedKillfocus();
} */
static int _OnInvoiceSignedCheckValueFnc(CWnd *pWnd){
	return ((CFATaxView *)pWnd)->OnInvoiceSignedCheckValue();
} 
static void _OnGroupServiceItemsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFATaxView* )pWnd)->OnGroupServiceItemsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupServiceItemsSelendokFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnGroupServiceItemsSelendok();
}
/*static void _OnGroupServiceItemsSetfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnGroupServiceItemsKillfocus();
}*/
/*static void _OnGroupServiceItemsKillfocusFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnGroupServiceItemsKillfocus();
}*/
static long _OnGroupServiceItemsLoadDataFnc(CWnd *pWnd){
	return ((CFATaxView *)pWnd)->OnGroupServiceItemsLoadData();
}
/*static void _OnGroupServiceItemsAddNewFnc(CWnd *pWnd){
	((CFATaxView *)pWnd)->OnGroupServiceItemsAddNew();
}*/
static int _OnAddFATaxViewFnc(CWnd *pWnd){
	 return ((CFATaxView*)pWnd)->OnAddFATaxView();
} 
static int _OnEditFATaxViewFnc(CWnd *pWnd){
	 return ((CFATaxView*)pWnd)->OnEditFATaxView();
} 
static int _OnDeleteFATaxViewFnc(CWnd *pWnd){
	 return ((CFATaxView*)pWnd)->OnDeleteFATaxView();
} 
static int _OnSaveFATaxViewFnc(CWnd *pWnd){
	 return ((CFATaxView*)pWnd)->OnSaveFATaxView();
} 
static int _OnCancelFATaxViewFnc(CWnd *pWnd){
	 return ((CFATaxView*)pWnd)->OnCancelFATaxView();
} 
CFATaxView::CFATaxView(){

	m_nDlgWidth = 265;
	m_nDlgHeight = 305;
	SetDefaultValues();
}
CFATaxView::~CFATaxView(){
}
void CFATaxView::OnCreateComponents(){
	m_wndFATAXINFORMATION.Create(this, _T("FA_TAXINFORMATION"), 5, 5, 260, 300);
	m_wndTaxrateLabel.Create(this, _T("Taxrate"), 10, 30, 130, 55);
	m_wndTaxrate.Create(this,135, 30, 255, 55); 
	m_wndTaxAmountLabel.Create(this, _T("Tax Amount"), 10, 61, 130, 86);
	m_wndTaxAmount.Create(this,135, 61, 255, 86); 
	m_wndTaxAcctLabel.Create(this, _T("Tax Acct"), 10, 92, 130, 117);
	m_wndTaxAcct.Create(this,135, 92, 255, 117); 
	m_wndInvoiceTypeLabel.Create(this, _T("Invoice Type"), 10, 122, 130, 147);
	m_wndInvoiceType.Create(this,135, 122, 255, 147); 
	m_wndInvoiceDateLabel.Create(this, _T("Invoice Date"), 10, 152, 130, 177);
	m_wndInvoiceDate.Create(this,135, 152, 255, 177); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 10, 182, 130, 207);
	m_wndInvoiceNo.Create(this,135, 182, 255, 207); 
	m_wndInvoiceTemplateLabel.Create(this, _T("Invoice Template"), 10, 210, 130, 235);
	m_wndInvoiceTemplate.Create(this,135, 210, 255, 235); 
	m_wndInvoiceSignedLabel.Create(this, _T("Invoice signed"), 10, 240, 130, 265);
	m_wndInvoiceSigned.Create(this,135, 240, 255, 265); 
	m_wndGroupServiceItemsLabel.Create(this, _T("GroupServiceItems"), 10, 270, 130, 295);
	m_wndGroupServiceItems.Create(this,135, 270, 255, 295); 

}
void CFATaxView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTaxrate.SetCheckValue(true);
	m_wndTaxrate.LimitText(35);
	m_wndTaxAmount.SetLimitText(16);
	m_wndTaxAmount.SetCheckValue(true);
	m_wndTaxAcct.SetCheckValue(true);
	m_wndTaxAcct.LimitText(35);
	m_wndInvoiceType.SetCheckValue(true);
	m_wndInvoiceType.LimitText(35);
	m_wndInvoiceDate.SetLimitText(35);
	m_wndInvoiceDate.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(35);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceTemplate.SetLimitText(35);
	m_wndInvoiceTemplate.SetCheckValue(true);
	m_wndInvoiceSigned.SetLimitText(35);
	m_wndInvoiceSigned.SetCheckValue(true);
	m_wndGroupServiceItems.SetCheckValue(true);
	m_wndGroupServiceItems.LimitText(35);


	m_wndTaxrate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTaxrate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTaxAcct.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTaxAcct.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndInvoiceType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndInvoiceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGroupServiceItems.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroupServiceItems.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFATaxView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTaxrate.SetEvent(WE_SELENDOK, _OnTaxrateSelendokFnc);
	//m_wndTaxrate.SetEvent(WE_SETFOCUS, _OnTaxrateSetfocusFnc);
	//m_wndTaxrate.SetEvent(WE_KILLFOCUS, _OnTaxrateKillfocusFnc);
	m_wndTaxrate.SetEvent(WE_SELCHANGE, _OnTaxrateSelectChangeFnc);
	m_wndTaxrate.SetEvent(WE_LOADDATA, _OnTaxrateLoadDataFnc);
	//m_wndTaxrate.SetEvent(WE_ADDNEW, _OnTaxrateAddNewFnc);
	//m_wndTaxAmount.SetEvent(WE_CHANGE, _OnTaxAmountChangeFnc);
	//m_wndTaxAmount.SetEvent(WE_SETFOCUS, _OnTaxAmountSetfocusFnc);
	//m_wndTaxAmount.SetEvent(WE_KILLFOCUS, _OnTaxAmountKillfocusFnc);
	m_wndTaxAmount.SetEvent(WE_CHECKVALUE, _OnTaxAmountCheckValueFnc);
	m_wndTaxAcct.SetEvent(WE_SELENDOK, _OnTaxAcctSelendokFnc);
	//m_wndTaxAcct.SetEvent(WE_SETFOCUS, _OnTaxAcctSetfocusFnc);
	//m_wndTaxAcct.SetEvent(WE_KILLFOCUS, _OnTaxAcctKillfocusFnc);
	m_wndTaxAcct.SetEvent(WE_SELCHANGE, _OnTaxAcctSelectChangeFnc);
	m_wndTaxAcct.SetEvent(WE_LOADDATA, _OnTaxAcctLoadDataFnc);
	//m_wndTaxAcct.SetEvent(WE_ADDNEW, _OnTaxAcctAddNewFnc);
	m_wndInvoiceType.SetEvent(WE_SELENDOK, _OnInvoiceTypeSelendokFnc);
	//m_wndInvoiceType.SetEvent(WE_SETFOCUS, _OnInvoiceTypeSetfocusFnc);
	//m_wndInvoiceType.SetEvent(WE_KILLFOCUS, _OnInvoiceTypeKillfocusFnc);
	m_wndInvoiceType.SetEvent(WE_SELCHANGE, _OnInvoiceTypeSelectChangeFnc);
	m_wndInvoiceType.SetEvent(WE_LOADDATA, _OnInvoiceTypeLoadDataFnc);
	//m_wndInvoiceType.SetEvent(WE_ADDNEW, _OnInvoiceTypeAddNewFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceTemplate.SetEvent(WE_CHANGE, _OnInvoiceTemplateChangeFnc);
	//m_wndInvoiceTemplate.SetEvent(WE_SETFOCUS, _OnInvoiceTemplateSetfocusFnc);
	//m_wndInvoiceTemplate.SetEvent(WE_KILLFOCUS, _OnInvoiceTemplateKillfocusFnc);
	m_wndInvoiceTemplate.SetEvent(WE_CHECKVALUE, _OnInvoiceTemplateCheckValueFnc);
	//m_wndInvoiceSigned.SetEvent(WE_CHANGE, _OnInvoiceSignedChangeFnc);
	//m_wndInvoiceSigned.SetEvent(WE_SETFOCUS, _OnInvoiceSignedSetfocusFnc);
	//m_wndInvoiceSigned.SetEvent(WE_KILLFOCUS, _OnInvoiceSignedKillfocusFnc);
	m_wndInvoiceSigned.SetEvent(WE_CHECKVALUE, _OnInvoiceSignedCheckValueFnc);
	m_wndGroupServiceItems.SetEvent(WE_SELENDOK, _OnGroupServiceItemsSelendokFnc);
	//m_wndGroupServiceItems.SetEvent(WE_SETFOCUS, _OnGroupServiceItemsSetfocusFnc);
	//m_wndGroupServiceItems.SetEvent(WE_KILLFOCUS, _OnGroupServiceItemsKillfocusFnc);
	m_wndGroupServiceItems.SetEvent(WE_SELCHANGE, _OnGroupServiceItemsSelectChangeFnc);
	m_wndGroupServiceItems.SetEvent(WE_LOADDATA, _OnGroupServiceItemsLoadDataFnc);
	//m_wndGroupServiceItems.SetEvent(WE_ADDNEW, _OnGroupServiceItemsAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFATaxViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFATaxViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFATaxViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFATaxViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFATaxViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFATaxView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTaxrate.GetDlgCtrlID(), m_szTaxrateKey);
	DDX_Text(pDX, m_wndTaxAmount.GetDlgCtrlID(), m_nTaxAmount);
	DDX_TextEx(pDX, m_wndTaxAcct.GetDlgCtrlID(), m_szTaxAcctKey);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);
	DDX_Text(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_Text(pDX, m_wndInvoiceTemplate.GetDlgCtrlID(), m_szInvoiceTemplate);
	DDX_Text(pDX, m_wndInvoiceSigned.GetDlgCtrlID(), m_szInvoiceSigned);
	DDX_TextEx(pDX, m_wndGroupServiceItems.GetDlgCtrlID(), m_szGroupServiceItemsKey);

}
void CFATaxView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFATaxView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFATaxView::SetDefaultValues(){

	m_szTaxrateKey.Empty();
	m_nTaxAmount=0;
	m_szTaxAcctKey.Empty();
	m_szInvoiceTypeKey.Empty();
	m_szInvoiceDate.Empty();
	m_szInvoiceNo.Empty();
	m_szInvoiceTemplate.Empty();
	m_szInvoiceSigned.Empty();
	m_szGroupServiceItemsKey.Empty();

}
int CFATaxView::SetMode(int nMode){
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
void CFATaxView::OnTaxrateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFATaxView::OnTaxrateSelendok(){
	 
}
/*void CFATaxView::OnTaxrateSetfocus(){
	
}*/
/*void CFATaxView::OnTaxrateKillfocus(){
	
}*/
long CFATaxView::OnTaxrateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxrate.IsSearchKey() && !m_szTaxrateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTaxrateKey
};
	m_wndTaxrate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxrate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFATaxView::OnTaxrateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFATaxView::OnTaxAmountChange(){
	
} */
/*void CFATaxView::OnTaxAmountSetfocus(){
	
} */
/*void CFATaxView::OnTaxAmountKillfocus(){
	
} */
int CFATaxView::OnTaxAmountCheckValue(){
	return 0;
} 
void CFATaxView::OnTaxAcctSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFATaxView::OnTaxAcctSelendok(){
	 
}
/*void CFATaxView::OnTaxAcctSetfocus(){
	
}*/
/*void CFATaxView::OnTaxAcctKillfocus(){
	
}*/
long CFATaxView::OnTaxAcctLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxAcct.IsSearchKey() && !m_szTaxAcctKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTaxAcctKey
};
	m_wndTaxAcct.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxAcct.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFATaxView::OnTaxAcctAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFATaxView::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFATaxView::OnInvoiceTypeSelendok(){
	 
}
/*void CFATaxView::OnInvoiceTypeSetfocus(){
	
}*/
/*void CFATaxView::OnInvoiceTypeKillfocus(){
	
}*/
long CFATaxView::OnInvoiceTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CFATaxView::OnInvoiceTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFATaxView::OnInvoiceDateChange(){
	
} */
/*void CFATaxView::OnInvoiceDateSetfocus(){
	
} */
/*void CFATaxView::OnInvoiceDateKillfocus(){
	
} */
int CFATaxView::OnInvoiceDateCheckValue(){
	return 0;
} 
/*void CFATaxView::OnInvoiceNoChange(){
	
} */
/*void CFATaxView::OnInvoiceNoSetfocus(){
	
} */
/*void CFATaxView::OnInvoiceNoKillfocus(){
	
} */
int CFATaxView::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CFATaxView::OnInvoiceTemplateChange(){
	
} */
/*void CFATaxView::OnInvoiceTemplateSetfocus(){
	
} */
/*void CFATaxView::OnInvoiceTemplateKillfocus(){
	
} */
int CFATaxView::OnInvoiceTemplateCheckValue(){
	return 0;
} 
/*void CFATaxView::OnInvoiceSignedChange(){
	
} */
/*void CFATaxView::OnInvoiceSignedSetfocus(){
	
} */
/*void CFATaxView::OnInvoiceSignedKillfocus(){
	
} */
int CFATaxView::OnInvoiceSignedCheckValue(){
	return 0;
} 
void CFATaxView::OnGroupServiceItemsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFATaxView::OnGroupServiceItemsSelendok(){
	 
}
/*void CFATaxView::OnGroupServiceItemsSetfocus(){
	
}*/
/*void CFATaxView::OnGroupServiceItemsKillfocus(){
	
}*/
long CFATaxView::OnGroupServiceItemsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroupServiceItems.IsSearchKey() && !m_szGroupServiceItemsKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupServiceItemsKey
};
	m_wndGroupServiceItems.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroupServiceItems.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFATaxView::OnGroupServiceItemsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CFATaxView::OnAddFATaxView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFATaxView::OnEditFATaxView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFATaxView::OnDeleteFATaxView(){
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
 		OnCancelFATaxView();
 	}
	return 0;
}
int CFATaxView::OnSaveFATaxView(){
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
 		//OnFATaxViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFATaxView::OnCancelFATaxView(){
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
int CFATaxView::OnFATaxViewListLoadData(){
	return 0;
}
