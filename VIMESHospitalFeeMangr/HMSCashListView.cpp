#include "HMSCashListView.h"
#include "MainFrm.h"
#include "HMSCashManagerView.h"
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
static int _OnPostedByCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashListView *)pWnd)->OnPostedByCheckValue();
}
static int _OnTotalPostAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashListView *)pWnd)->OnTotalPostAmountCheckValue();
} 
CHMSCashListView::CHMSCashListView(){

	m_nDlgWidth = 965;
	m_nDlgHeight = 255;
	SetDefaultValues();
	m_wndCashManager = NULL;
}
CHMSCashListView::~CHMSCashListView(){
}
void CHMSCashListView::OnCreateComponents(){
	/*m_wndReceiptAndPaymentInformation.Create(this, _T("Receipt && Payment Information"), 5, 5, 960, 195);
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
	m_wndPostReceiptAndPayment.Create(this, _T("Post receipt and payment"), 700, 200, 870, 225);
	m_wndPrint.Create(this, _T("&Print"), 875, 200, 955, 225);*/

	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	m_wndType.Create(this,95, 30, 270, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 275, 30, 355, 55);
	m_wndFromDate.Create(this,360, 30, 450, 55); 
	m_wndReceiptAndPaymentInformation.Create(this, _T("Receipt && Payment Information"), 5, 5, 960, 221);
	m_wndToDateLabel.Create(this, _T("To Date"), 455, 30, 535, 55);
	m_wndToDate.Create(this,540, 30, 630, 55); 
	m_wndInvoiceNoLabel.Create(this, _T("Invoice No"), 635, 30, 715, 55);
	m_wndInvoiceNo.Create(this,720, 30, 895, 55); 
	m_wndPostedByLabel.Create(this, _T("Ngu?i post"), 10, 60, 90, 85);
	m_wndPostedBy.Create(this,95, 60, 270, 85); 
	m_wndStaffLabel.Create(this, _T("Staff"), 275, 60, 355, 85);
	m_wndStaff.Create(this,360, 60, 535, 85); 
	m_wndSearchInfo.Create(this, _T("@"), 900, 30, 955, 85);
	m_wndCashList.Create(this,10, 90, 955, 216); 
	m_wndPostReceiptAndPayment.Create(this, _T("Post receipt and payment"), 700, 226, 870, 251);
	m_wndPrint.Create(this, _T("&Print"), 875, 226, 955, 251);
	m_wndTotalPostLabel.Create(this, _T("T?ng ti?n Post"), 10, 226, 108, 251);
	m_wndTotalPostAmount.Create(this,113, 226, 288, 251);
	m_wndTotalPostAmount.EnableWindow(false);
	
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


	m_wndCashList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCashList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 200);
	m_wndCashList.InsertColumn(2, _T("Date"), CFMT_DATE, 90);
	m_wndCashList.InsertColumn(3, _T("Staff"), CFMT_TEXT, 70);
	m_wndCashList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 90);
	m_wndCashList.InsertColumn(5, _T("Type"), CFMT_TEXT, 70);
	m_wndCashList.InsertColumn(6, _T("Status"), CFMT_TEXT, 70);
	m_wndCashList.InsertColumn(7, _T("Approved Date"), CFMT_DATE, 100);
	m_wndCashList.InsertColumn(8, _T("Approved By"), CFMT_TEXT, 100);
	m_wndCashList.InsertColumn(9, _T("Posted"), CFMT_TEXT, 55);
	m_wndCashList.InsertColumn(10, _T("Posted Date"), CFMT_DATE, 90);
	m_wndCashList.InsertColumn(11, _T("Posted By"), CFMT_TEXT, 80);
	m_wndCashList.InsertColumn(12, _T("invoicetype"), CFMT_TEXT,0);
	m_wndTotalPostAmount.SetCurrencyFormat();
	m_wndTotalPostAmount.SetReadOnly(true);



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
	m_wndPostedBy.SetEvent(WE_CHECKVALUE, _OnPostedByCheckValueFnc);
//	m_wndCashList.AddEvent(1, _T("Delete"), _OnCashListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPostReceiptAndPayment.SetEvent(WE_CLICK, _OnPostReceiptAndPaymentSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndTotalPostAmount.SetEvent(WE_CHECKVALUE, _OnTotalPostAmountCheckValueFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSCashListViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSCashListViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSCashListViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSCashListViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSCashListViewFnc, 0, 'T', VK_CONTROL);
	*/
	SetWindowFont(&m_wndTotalPostAmount, GetFaceName(), GetFaceSize()+2, true);	
	m_wndTotalPostAmount.SetTextColor(RGB(255, 0, 0));


	SetWindowFont(&m_wndPostedBy, GetFaceName(), GetFaceSize()+2, true);	
	m_wndPostedBy.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndStaff, GetFaceName(), GetFaceSize()+2, true);	
	m_wndStaff.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndInvoiceNo, GetFaceName(), GetFaceSize()+2, true);	
	m_wndInvoiceNo.SetTextColor(RGB(0, 0, 255));

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);




}
void CHMSCashListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndStaff.GetDlgCtrlID(), m_szStaff);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_Text(pDX, m_wndPostedBy.GetDlgCtrlID(), m_szPostedBy);
	DDX_Text(pDX, m_wndTotalPostAmount.GetDlgCtrlID(), m_nTotalPostAmount);

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
	m_szPostedBy.Empty();
	m_szInvoiceNo.Empty();
	m_nTotalPostAmount=0;

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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
	m_wndType.AddItems(_T("A"), _T("T?t c?"), NULL);
	m_wndType.AddItems(_T("R"), _T("Phi?u thu"), NULL);
	m_wndType.AddItems(_T("P"), _T("Phi?u chi"), NULL);

	m_wndType.AddItems(_T("CASH"), _T("Ti?n m?t"), NULL);
	m_wndType.AddItems(_T("QR"), _T("Qrcode Online"), NULL);
	m_wndType.AddItems(_T("CK"), _T("Chuy?n kho?n"), NULL);
	m_wndType.AddItems(_T("ATM"), _T("Th? ATM"), NULL);


	return 0;
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
int CHMSCashListView::OnPostedByCheckValue(){
	return 0;
}
int CHMSCashListView::OnTotalPostAmountCheckValue(){
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
	OnCashListLoadData();
} 
void CHMSCashListView::OnCashListDblClick(){
	
} 
void CHMSCashListView::OnCashListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	UpdateData(TRUE);
	m_nCashID = str2long(m_wndCashList.GetItemText(nNewItem, 0));
	m_szInvoiceType = m_wndCashList.GetItemText(nNewItem, 12);

	CHMSCashManagerView *pManager = (CHMSCashManagerView*) m_wndCashManager;
	if(pManager == NULL)
		return;
	pManager->m_szFromDate = m_szFromDate;
	pManager->m_szToDate = m_szToDate;
	pManager->m_szInvoiceType = m_szInvoiceType;
	pManager->m_nCashID = m_nCashID;
	pManager->OnListLoadData();

} 
int CHMSCashListView::OnCashListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSCashListView::OnCashListLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	int nCount = 0;

	UpdateData(true);
	
	szWhere.Empty();

	if(!m_szPostedBy.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(FAC_POSTEDBY) like(chr(37)||lower('%s')||chr(37)) "), m_szPostedBy);
	}

	if(!m_szStaff.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(fac_client_id) like(chr(37)||lower('%s')||chr(37)) "), m_szStaff);
	}

	if(!m_szInvoiceNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(fac_invoiceno) like(chr(37)||lower('%s')||chr(37)) "), m_szInvoiceNo);
	}

	if(!m_szTypeKey.IsEmpty())
	{
		if(m_szTypeKey == _T("A"))
		{
			szWhere.AppendFormat(_T(" and fac_invoicetype IN('R','P') "));
		}
		else if (m_szTypeKey == _T("R"))
		{
			szWhere.AppendFormat(_T(" and fac_invoicetype IN('R') "));
		}

		else if (m_szTypeKey == _T("P"))
		{
			szWhere.AppendFormat(_T(" and fac_invoicetype IN('P') "));
		}
		else
		{
			szWhere.AppendFormat(_T(" and fac_cashbook_id='%s' "), m_szTypeKey);
		}
	}

	szWhere.AppendFormat(_T(" and fac_status <> 'O' "));

	szSQL.Format(_T(" SELECT fac_cash_id,") \
_T("   fac_invoiceno,") \
_T("   fac_invoicedate,") \
_T(" fac_status, ") \
_T("   fac_acctdate,") \
_T(" fac_posted, ") \
_T("   fac_posteddate,") \
_T("   fac_postedby,") \
_T(" fac_approved, ") \
_T("   fac_approveddate,") \
_T("   fac_approvedby,") \
_T("   fac_client_id,") \
_T("   fac_amount,") \
_T("   fac_invoicetype") \
_T(" FROM fa_cash") \
_T(" WHERE trunc(fac_acctdate) BETWEEN to_date('%s','YYYY-MM-DD') AND to_date('%s','YYYY-MM-DD') ") \
_T(" %s ") \
_T(" ORDER BY fac_cash_id"), m_szFromDate, m_szToDate, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
_fmsg(_T("%s"), szSQL);
	m_wndCashList.BeginLoad(); 

	CString szInvoiceType;
	CString szInvoiceTypeDesc;
	int nItem = 0;
	double nPostAmount = 0;
	double nTotalPostAmount = 0;
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("fac_invoicetype"), szInvoiceType);
		if(szInvoiceType == _T("R"))
		{
			szInvoiceTypeDesc = _T("Phi\x1EBFu thu");
		}
		else
		{
			szInvoiceTypeDesc = _T("Phi\x1EBFu \x63hi");
		}
		rs.GetValue(_T("fac_amount"), nPostAmount);
		nTotalPostAmount += nPostAmount;

		nItem = m_wndCashList.AddItems(
			rs.GetValue(_T("fac_cash_id")), 
			rs.GetValue(_T("fac_invoiceno")), 
			rs.GetValue(_T("fac_acctdate")), 
			rs.GetValue(_T("fac_client_id")), 
			rs.GetValue(_T("fac_amount")),
			szInvoiceTypeDesc,
			rs.GetValue(_T("fac_status")), 
			rs.GetValue(_T("fac_approveddate")), 
			rs.GetValue(_T("fac_approvedby")), 
			rs.GetValue(_T("fac_posted")), 
			rs.GetValue(_T("fac_posteddate")), 
			rs.GetValue(_T("fac_postedby")), 
			szInvoiceType,
			NULL);
		rs.MoveNext();
	}
	m_nTotalPostAmount = (nTotalPostAmount);
	//_msg(_T("%f"), m_nTotalPostAmount);
	UpdateData(FALSE);
	m_wndCashList.EndLoad(); 
	return nCount;

}
#include "FMCashBookDialog.h"

void CHMSCashListView::OnPostReceiptAndPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndCashList.GetCurSel();
	if(nSel < 0) return;

	CString szStatus = m_wndCashList.GetItemText(nSel, 6);
	if(szStatus == _T("O"))
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return;
	}
	CString szPosted = m_wndCashList.GetItemText(nSel, 9);

	if(szPosted == _T("Y") && !pMF->CheckPermission(_T("15.20")))
	{
		ShowMessageBox(_T("Phi\x1EBFu \x111\xE3 \x111\x1B0\x1EE3\x63 ghi s\x1ED5"));
		m_wndCashList.SetFocus();
		m_wndCashList.SetCurSel(nSel);
		return;
	}
	CString szMsg;
	CString szInvoiceNo;
	szInvoiceNo = m_wndCashList.GetItemText(nSel, 1);
	szMsg.Format(_T("\x42\x1EA1n \x63\xF3 mu\x1ED1n \x64uy\x1EC7t phi\x1EBFu thu s\x1ED1 [%s] kh\xF4ng?(Y/N)"), szInvoiceNo);
	
	CFMCashBookDialog dlg(this);
	dlg.m_nCashID = 0;
	dlg.m_szReceiptDate = m_wndCashList.GetItemText(nSel, 7);
	if(dlg.DoModal() != IDOK)
	{
		m_wndCashList.SetFocus();
		m_wndCashList.SetCurSel(nSel);
		return;
	}
	//FA_CASH_POST_V2
	//FA_CASH_POST
	CString szSQL;
	szSQL.Format(_T(" FA_CASH_POST(%ld, '%s', '%s') "), m_nCashID, pMF->GetCurrentUser(), dlg.m_szReceiptDate);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("Cannot process width current status"));
		m_wndCashList.SetFocus();
		m_wndCashList.SetCurSel(nSel);
		return;
	}
	OnCashListLoadData();
	m_wndCashList.SetCurSel(nSel);

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
