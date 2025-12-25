#include "HMSCashListView.h"
#include "MainFrm.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCashListView* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSCashListView *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashListView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashListView *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnStaffChangeFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnStaffChange();
} */
/*static void _OnStaffSetfocusFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnStaffSetfocus();} */ 
/*static void _OnStaffKillfocusFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnStaffKillfocus();
} */
static int _OnStaffCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashListView *)pWnd)->OnStaffCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CHMSCashListView *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashListView *)pWnd)->OnInvoiceNoCheckValue();
} 
static void _OnSearchInfoSelectFnc(CWnd *pWnd){
	CHMSCashListView *pVw = (CHMSCashListView *)pWnd;
	pVw->OnSearchInfoSelect();
} 
static long _OnCashListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCashListView*)pWnd)->OnCashListLoadData();
} 
static void _OnCashListDblClickFnc(CWnd *pWnd){
	((CHMSCashListView*)pWnd)->OnCashListDblClick();
} 
static void _OnCashListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCashListView*)pWnd)->OnCashListSelectChange(nOldItem, nNewItem);
} 
static int _OnCashListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCashListView*)pWnd)->OnCashListDeleteItem();
} 
static void _OnPostReceiptAndPaymentSelectFnc(CWnd *pWnd){
	CHMSCashListView *pVw = (CHMSCashListView *)pWnd;
	pVw->OnPostReceiptAndPaymentSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSCashListView *pVw = (CHMSCashListView *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSCashListViewFnc(CWnd *pWnd){
	 return ((CHMSCashListView*)pWnd)->OnAddHMSCashListView();
} 
static int _OnEditHMSCashListViewFnc(CWnd *pWnd){
	 return ((CHMSCashListView*)pWnd)->OnEditHMSCashListView();
} 
static int _OnDeleteHMSCashListViewFnc(CWnd *pWnd){
	 return ((CHMSCashListView*)pWnd)->OnDeleteHMSCashListView();
} 
static int _OnSaveHMSCashListViewFnc(CWnd *pWnd){
	 return ((CHMSCashListView*)pWnd)->OnSaveHMSCashListView();
} 
static int _OnCancelHMSCashListViewFnc(CWnd *pWnd){
	 return ((CHMSCashListView*)pWnd)->OnCancelHMSCashListView();
} 
CHMSCashListView::CHMSCashListView(){

	m_nDlgWidth = 965;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CHMSCashListView::~CHMSCashListView(){
}
void CHMSCashListView::OnCreateComponents(){
	m_wndReceiptAndPaymentInformation.Create(this, _T("Receipt && Payment Information"), 5, 5, 960, 195);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	m_wndType.Create(this,95, 30, 205, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 210, 30, 290, 55);
	m_wndFromDate.Create(this,295, 30, 385, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 390, 30, 470, 55);
	m_wndToDate.Create(this,475, 30, 565, 55); 
	m_wndStaffLabel.Create(this, _T("Staff"), 570, 30, 650, 55);
	m_wndStaff.Create(this,655, 30, 745, 55); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 750, 30, 830, 55);
	m_wndInvoiceNo.Create(this,835, 29, 925, 54); 
	m_wndSearchInfo.Create(this, _T("@"), 930, 30, 955, 55);
	m_wndCashList.Create(this,10, 60, 955, 190); 
	m_wndPostReceiptAndPayment.Create(this, _T("Post Receipt and payment"), 700, 200, 870, 225);
	m_wndPrint.Create(this, _T("&Print"), 875, 200, 955, 225);

}
void CHMSCashListView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndStaff.SetLimitText(35);
	m_wndStaff.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(35);
	m_wndInvoiceNo.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCashList.InsertColumn(0, _T("Cash ID"), CFMT_TEXT, 90);
	m_wndCashList.InsertColumn(1, _T("Date"), CFMT_DATE, 90);
	m_wndCashList.InsertColumn(2, _T("Staff ID"), CFMT_TEXT, 70);
	m_wndCashList.InsertColumn(3, _T("Staff Name"), CFMT_TEXT, 200);
	m_wndCashList.InsertColumn(4, _T("Amount"), CFMT_NUMBER, 200);

}
void CHMSCashListView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndStaff.SetEvent(WE_CHANGE, _OnStaffChangeFnc);
	//m_wndStaff.SetEvent(WE_SETFOCUS, _OnStaffSetfocusFnc);
	//m_wndStaff.SetEvent(WE_KILLFOCUS, _OnStaffKillfocusFnc);
	m_wndStaff.SetEvent(WE_CHECKVALUE, _OnStaffCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	m_wndSearchInfo.SetEvent(WE_CLICK, _OnSearchInfoSelectFnc);
	m_wndCashList.SetEvent(WE_SELCHANGE, _OnCashListSelectChangeFnc);
	m_wndCashList.SetEvent(WE_LOADDATA, _OnCashListLoadDataFnc);
	m_wndCashList.SetEvent(WE_DBLCLICK, _OnCashListDblClickFnc);
	m_wndCashList.AddEvent(1, _T("Delete"), _OnCashListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPostReceiptAndPayment.SetEvent(WE_CLICK, _OnPostReceiptAndPaymentSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSCashListViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSCashListViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSCashListViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSCashListViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSCashListViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSCashListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);

}
void CHMSCashListView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCashListView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCashListView::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStaff.Empty();
	m_szInvoiceNo.Empty();

}
int CHMSCashListView::SetMode(int nMode){
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
void CHMSCashListView::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashListView::OnTypeSelendok(){
	 
}
/*void CHMSCashListView::OnTypeSetfocus(){
	
}*/
/*void CHMSCashListView::OnTypeKillfocus(){
	
}*/
long CHMSCashListView::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCashListView::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCashListView::OnFromDateChange(){
	
} */
/*void CHMSCashListView::OnFromDateSetfocus(){
	
} */
/*void CHMSCashListView::OnFromDateKillfocus(){
	
} */
int CHMSCashListView::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSCashListView::OnToDateChange(){
	
} */
/*void CHMSCashListView::OnToDateSetfocus(){
	
} */
/*void CHMSCashListView::OnToDateKillfocus(){
	
} */
int CHMSCashListView::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSCashListView::OnStaffChange(){
	
} */
/*void CHMSCashListView::OnStaffSetfocus(){
	
} */
/*void CHMSCashListView::OnStaffKillfocus(){
	
} */
int CHMSCashListView::OnStaffCheckValue(){
	return 0;
} 
/*void CHMSCashListView::OnInvoiceNoChange(){
	
} */
/*void CHMSCashListView::OnInvoiceNoSetfocus(){
	
} */
/*void CHMSCashListView::OnInvoiceNoKillfocus(){
	
} */
int CHMSCashListView::OnInvoiceNoCheckValue(){
	return 0;
} 
void CHMSCashListView::OnSearchInfoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashListView::OnCashListDblClick(){
	
} 
void CHMSCashListView::OnCashListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCashListView::OnCashListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSCashListView::OnCashListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndCashList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCashList.AddItems(
			rs.GetValue(_T("CashID")), 
			rs.GetValue(_T("Date")), 
			rs.GetValue(_T("StaffID")), 
			rs.GetValue(_T("StaffName")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndCashList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSCashListView::OnPostReceiptAndPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashListView::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCashListView::OnAddHMSCashListView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCashListView::OnEditHMSCashListView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCashListView::OnDeleteHMSCashListView(){
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
 		OnCancelHMSCashListView();
 	}
	return 0;
}
int CHMSCashListView::OnSaveHMSCashListView(){
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
 		//OnHMSCashListViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCashListView::OnCancelHMSCashListView(){
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
int CHMSCashListView::OnHMSCashListViewListLoadData(){
	return 0;
}
