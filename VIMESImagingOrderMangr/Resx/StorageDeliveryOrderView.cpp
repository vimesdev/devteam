#include "StorageDeliveryOrderView.h"
#include "MainFrm.h"
static void _OnTransactionTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDeliveryOrderView* )pWnd)->OnTransactionTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransactionTypeSelendokFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTransactionTypeSelendok();
}
/*static void _OnTransactionTypeSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTransactionTypeKillfocus();
}*/
/*static void _OnTransactionTypeKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTransactionTypeKillfocus();
}*/
static long _OnTransactionTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnTransactionTypeLoadData();
}
/*static void _OnTransactionTypeAddNewFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTransactionTypeAddNew();
}*/
static void _OnFromStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDeliveryOrderView* )pWnd)->OnFromStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromStorageSelendokFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnFromStorageSelendok();
}
/*static void _OnFromStorageSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnFromStorageKillfocus();
}*/
/*static void _OnFromStorageKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnFromStorageKillfocus();
}*/
static long _OnFromStorageLoadDataFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnFromStorageLoadData();
}
/*static void _OnFromStorageAddNewFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnFromStorageAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnAccountingDateCheckValue();
} 
/*static void _OnApprovedDateChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnApprovedDateChange();
} */
/*static void _OnApprovedDateSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnApprovedDateSetfocus();} */ 
/*static void _OnApprovedDateKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnApprovedDateKillfocus();
} */
static int _OnApprovedDateCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnApprovedDateCheckValue();
} 
/*static void _OnTotalLinesChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalLinesChange();
} */
/*static void _OnTotalLinesSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalLinesSetfocus();} */ 
/*static void _OnTotalLinesKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalLinesKillfocus();
} */
static int _OnTotalLinesCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnTotalLinesCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CStorageDeliveryOrderView *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CStorageDeliveryOrderView *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CStorageDeliveryOrderView *pVw = (CStorageDeliveryOrderView *)pWnd;
	pVw->OnAddLineSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CStorageDeliveryOrderView*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddStorageDeliveryOrderViewFnc(CWnd *pWnd){
	 return ((CStorageDeliveryOrderView*)pWnd)->OnAddStorageDeliveryOrderView();
} 
static int _OnEditStorageDeliveryOrderViewFnc(CWnd *pWnd){
	 return ((CStorageDeliveryOrderView*)pWnd)->OnEditStorageDeliveryOrderView();
} 
static int _OnDeleteStorageDeliveryOrderViewFnc(CWnd *pWnd){
	 return ((CStorageDeliveryOrderView*)pWnd)->OnDeleteStorageDeliveryOrderView();
} 
static int _OnSaveStorageDeliveryOrderViewFnc(CWnd *pWnd){
	 return ((CStorageDeliveryOrderView*)pWnd)->OnSaveStorageDeliveryOrderView();
} 
static int _OnCancelStorageDeliveryOrderViewFnc(CWnd *pWnd){
	 return ((CStorageDeliveryOrderView*)pWnd)->OnCancelStorageDeliveryOrderView();
} 
CStorageDeliveryOrderView::CStorageDeliveryOrderView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CStorageDeliveryOrderView::~CStorageDeliveryOrderView(){
}
void CStorageDeliveryOrderView::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 685, 120);
	m_wndOrderInformation.Create(this, _T("Order Information"), 690, 5, 1005, 120);
	m_wndTransactionTypeLabel.Create(this, _T("Transaction Type"), 10, 30, 135, 55);
	m_wndTransactionType.Create(this,140, 30, 340, 55); 
	m_wndFromStorageLabel.Create(this, _T("From Storage"), 345, 30, 470, 55);
	m_wndFromStorage.Create(this,475, 30, 680, 55); 
	m_wndDescriptionLabel.Create(this, _T("Reason"), 10, 60, 135, 85);
	m_wndDescription.Create(this,140, 60, 680, 115); 
	m_wndOrderNoLabel.Create(this, _T("ORDERNO"), 695, 30, 845, 55);
	m_wndOrderNo.Create(this,850, 30, 1000, 55); 
	m_wndOrderDateLabel.Create(this, _T("ORDERDATE"), 695, 60, 845, 85);
	m_wndOrderDate.Create(this,850, 60, 1000, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 695, 90, 845, 115);
	m_wndAccountingDate.Create(this,850, 90, 1000, 115); 
	m_wndApprovedDate.Create(this,850, 90, 1000, 115); 
	m_wndTotalLinesLabel.Create(this, _T("Total Lines"), 4, 545, 104, 570);
	m_wndTotalLines.Create(this,109, 545, 184, 570); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 696, 545, 846, 570);
	m_wndTotalAmount.Create(this,851, 545, 1001, 570); 
	m_wndAdd.Create(this, _T("&Add"), 245, 575, 335, 600);
	m_wndEdit.Create(this, _T("&Edit"), 340, 575, 430, 600);
	m_wndDelete.Create(this, _T("&Delete"), 435, 575, 525, 600);
	m_wndSave.Create(this, _T("&Save"), 530, 575, 620, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 625, 575, 715, 600);
	m_wndPrint.Create(this, _T("&Print"), 720, 575, 810, 600);
	m_wndPost.Create(this, _T("Approval"), 815, 575, 905, 600);
	m_wndClose.Create(this, _T("&Close"), 910, 575, 1000, 600);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 575, 95, 600);
	m_wndTab.Create(this,5, 125, 1005, 540); 

}
void CStorageDeliveryOrderView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTransactionType.SetCheckValue(true);
	m_wndTransactionType.LimitText(1024);
	m_wndFromStorage.SetCheckValue(true);
	m_wndFromStorage.LimitText(1024);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndAccountingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAccountingDate.SetCheckValue(true);
	m_wndApprovedDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndApprovedDate.SetCheckValue(true);
	m_wndTotalLines.SetLimitText(1024);
	m_wndTotalLines.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(1024);
	m_wndTotalAmount.SetCheckValue(true);





}
void CStorageDeliveryOrderView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTransactionType.SetEvent(WE_SELENDOK, _OnTransactionTypeSelendokFnc);
	//m_wndTransactionType.SetEvent(WE_SETFOCUS, _OnTransactionTypeSetfocusFnc);
	//m_wndTransactionType.SetEvent(WE_KILLFOCUS, _OnTransactionTypeKillfocusFnc);
	m_wndTransactionType.SetEvent(WE_SELCHANGE, _OnTransactionTypeSelectChangeFnc);
	m_wndTransactionType.SetEvent(WE_LOADDATA, _OnTransactionTypeLoadDataFnc);
	//m_wndTransactionType.SetEvent(WE_ADDNEW, _OnTransactionTypeAddNewFnc);
	m_wndFromStorage.SetEvent(WE_SELENDOK, _OnFromStorageSelendokFnc);
	//m_wndFromStorage.SetEvent(WE_SETFOCUS, _OnFromStorageSetfocusFnc);
	//m_wndFromStorage.SetEvent(WE_KILLFOCUS, _OnFromStorageKillfocusFnc);
	m_wndFromStorage.SetEvent(WE_SELCHANGE, _OnFromStorageSelectChangeFnc);
	m_wndFromStorage.SetEvent(WE_LOADDATA, _OnFromStorageLoadDataFnc);
	//m_wndFromStorage.SetEvent(WE_ADDNEW, _OnFromStorageAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndAccountingDate.SetEvent(WE_CHANGE, _OnAccountingDateChangeFnc);
	//m_wndAccountingDate.SetEvent(WE_SETFOCUS, _OnAccountingDateSetfocusFnc);
	//m_wndAccountingDate.SetEvent(WE_KILLFOCUS, _OnAccountingDateKillfocusFnc);
	m_wndAccountingDate.SetEvent(WE_CHECKVALUE, _OnAccountingDateCheckValueFnc);
	//m_wndApprovedDate.SetEvent(WE_CHANGE, _OnApprovedDateChangeFnc);
	//m_wndApprovedDate.SetEvent(WE_SETFOCUS, _OnApprovedDateSetfocusFnc);
	//m_wndApprovedDate.SetEvent(WE_KILLFOCUS, _OnApprovedDateKillfocusFnc);
	m_wndApprovedDate.SetEvent(WE_CHECKVALUE, _OnApprovedDateCheckValueFnc);
	//m_wndTotalLines.SetEvent(WE_CHANGE, _OnTotalLinesChangeFnc);
	//m_wndTotalLines.SetEvent(WE_SETFOCUS, _OnTotalLinesSetfocusFnc);
	//m_wndTotalLines.SetEvent(WE_KILLFOCUS, _OnTotalLinesKillfocusFnc);
	m_wndTotalLines.SetEvent(WE_CHECKVALUE, _OnTotalLinesCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddStorageDeliveryOrderViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditStorageDeliveryOrderViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteStorageDeliveryOrderViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveStorageDeliveryOrderViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelStorageDeliveryOrderViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CStorageDeliveryOrderView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTransactionType.GetDlgCtrlID(), m_szTransactionTypeKey);
	DDX_TextEx(pDX, m_wndFromStorage.GetDlgCtrlID(), m_szFromStorageKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_TextEx(pDX, m_wndApprovedDate.GetDlgCtrlID(), m_szApprovedDate);
	DDX_Text(pDX, m_wndTotalLines.GetDlgCtrlID(), m_nTotalLines);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CStorageDeliveryOrderView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CStorageDeliveryOrderView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CStorageDeliveryOrderView::SetDefaultValues(){

	m_szTransactionTypeKey.Empty();
	m_szFromStorageKey.Empty();
	m_szDescription.Empty();
	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szAccountingDate.Empty();
	m_szApprovedDate.Empty();
	m_nTotalLines=0;
	m_nTotalAmount=0;

}
int CStorageDeliveryOrderView::SetMode(int nMode){
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
void CStorageDeliveryOrderView::OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnTransactionTypeSelendok(){
	 
}
/*void CStorageDeliveryOrderView::OnTransactionTypeSetfocus(){
	
}*/
/*void CStorageDeliveryOrderView::OnTransactionTypeKillfocus(){
	
}*/
long CStorageDeliveryOrderView::OnTransactionTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTransactionType.IsSearchKey() && !m_szTransactionTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTransactionTypeKey
};
	m_wndTransactionType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransactionType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageDeliveryOrderView::OnTransactionTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStorageDeliveryOrderView::OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnFromStorageSelendok(){
	 
}
/*void CStorageDeliveryOrderView::OnFromStorageSetfocus(){
	
}*/
/*void CStorageDeliveryOrderView::OnFromStorageKillfocus(){
	
}*/
long CStorageDeliveryOrderView::OnFromStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromStorage.IsSearchKey() && !m_szFromStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFromStorageKey
};
	m_wndFromStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromStorage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageDeliveryOrderView::OnFromStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CStorageDeliveryOrderView::OnDescriptionChange(){
	
} */
/*void CStorageDeliveryOrderView::OnDescriptionSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnDescriptionKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnDescriptionCheckValue(){
	return 0;
} 
/*void CStorageDeliveryOrderView::OnOrderNoChange(){
	
} */
/*void CStorageDeliveryOrderView::OnOrderNoSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnOrderNoKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnOrderNoCheckValue(){
	return 0;
} 
/*void CStorageDeliveryOrderView::OnOrderDateChange(){
	
} */
/*void CStorageDeliveryOrderView::OnOrderDateSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnOrderDateKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnOrderDateCheckValue(){
	return 0;
} 
/*void CStorageDeliveryOrderView::OnAccountingDateChange(){
	
} */
/*void CStorageDeliveryOrderView::OnAccountingDateSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnAccountingDateKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnAccountingDateCheckValue(){
	return 0;
} 
/*void CStorageDeliveryOrderView::OnApprovedDateChange(){
	
} */
/*void CStorageDeliveryOrderView::OnApprovedDateSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnApprovedDateKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnApprovedDateCheckValue(){
	return 0;
} 
/*void CStorageDeliveryOrderView::OnTotalLinesChange(){
	
} */
/*void CStorageDeliveryOrderView::OnTotalLinesSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnTotalLinesKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnTotalLinesCheckValue(){
	return 0;
} 
/*void CStorageDeliveryOrderView::OnTotalAmountChange(){
	
} */
/*void CStorageDeliveryOrderView::OnTotalAmountSetfocus(){
	
} */
/*void CStorageDeliveryOrderView::OnTotalAmountKillfocus(){
	
} */
int CStorageDeliveryOrderView::OnTotalAmountCheckValue(){
	return 0;
} 
void CStorageDeliveryOrderView::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnPostSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDeliveryOrderView::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CStorageDeliveryOrderView::OnAddStorageDeliveryOrderView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageDeliveryOrderView::OnEditStorageDeliveryOrderView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageDeliveryOrderView::OnDeleteStorageDeliveryOrderView(){
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
 		OnCancelStorageDeliveryOrderView();
 	}
	return 0;
}
int CStorageDeliveryOrderView::OnSaveStorageDeliveryOrderView(){
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
 		//OnStorageDeliveryOrderViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStorageDeliveryOrderView::OnCancelStorageDeliveryOrderView(){
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
int CStorageDeliveryOrderView::OnStorageDeliveryOrderViewListLoadData(){
	return 0;
}
