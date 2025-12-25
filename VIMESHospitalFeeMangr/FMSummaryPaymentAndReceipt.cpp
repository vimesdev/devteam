#include "stdafx.h"
#include "FMSummaryPaymentAndReceipt.h"
#include "MainFrm.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "FMReceiptReasonDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceipt *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceipt *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSummaryPaymentAndReceipt* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceipt *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt *)pWnd)->OnClerkAddNew();
}*/
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CFMSummaryPaymentAndReceipt*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CFMSummaryPaymentAndReceipt*)pWnd)->OnInPatientSelect();
}
static void _OnLockedSelectFnc(CWnd *pWnd){
	 ((CFMSummaryPaymentAndReceipt*)pWnd)->OnLockedSelect();
}
static void _OnWorkingDateSelectFnc(CWnd *pWnd){
	 ((CFMSummaryPaymentAndReceipt*)pWnd)->OnWorkingDateSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceipt *pVw = (CFMSummaryPaymentAndReceipt *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintInvoiceSelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceipt *pVw = (CFMSummaryPaymentAndReceipt *)pWnd;
	pVw->OnPrintInvoiceSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceipt *pVw = (CFMSummaryPaymentAndReceipt *)pWnd;
	pVw->OnExportSelect();
}
static void _OnCloseOutSelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceipt *pVw = (CFMSummaryPaymentAndReceipt *)pWnd;
	pVw->OnCloseOutSelect();
}

static void _OnDataSummarySelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceipt *pVw = (CFMSummaryPaymentAndReceipt *)pWnd;
	pVw->OnDataSummarySelect();
} 

static void _OnRefreshSelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceipt *pVw = (CFMSummaryPaymentAndReceipt *)pWnd;
	pVw->OnRefreshSelect();
} 


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceipt*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceipt*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMSummaryPaymentAndReceipt*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceipt*)pWnd)->OnListDeleteItem();
}
static int _OnAddFMSearchInformationFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceipt*)pWnd)->OnAddFMSearchInformation();
} 
static int _OnEditFMSearchInformationFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceipt*)pWnd)->OnEditFMSearchInformation();
} 
static int _OnDeleteFMSearchInformationFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceipt*)pWnd)->OnDeleteFMSearchInformation();
} 
static int _OnSaveFMSearchInformationFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceipt*)pWnd)->OnSaveFMSearchInformation();
} 
static int _OnCancelFMSearchInformationFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceipt*)pWnd)->OnCancelFMSearchInformation();
}


static int _OnListPrintFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceipt*)pWnd)->OnListPrint();
}


CFMSummaryPaymentAndReceipt::CFMSummaryPaymentAndReceipt(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 520;
	SetDefaultValues();
}

CFMSummaryPaymentAndReceipt::~CFMSummaryPaymentAndReceipt(){
}
void CFMSummaryPaymentAndReceipt::OnCreateComponents()
{

	m_wndPaymentReceiptList.Create(this, _T("Payment && receipt list"), 5, 65, 800, 385);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 800, 60);
	m_wndClerkLabel.Create(this, _T("Clerk"), 490, 30, 570, 55);
	m_wndClerk.Create(this,575, 30, 770, 55); 
	m_wndRefresh.Create(this, _T("@"), 775, 30, 795, 55);
	m_wndList.Create(this,10, 90, 795, 380); 
	m_wndCloseOut.Create(this, _T("&Close out"), 5, 390, 125, 415);
	m_wndDataSummary.Create(this, _T("Data  Summary"), 130, 390, 250, 415);
	m_wndPrintPreview.Create(this, _T("&Print"), 555, 390, 675, 415);
	m_wndExport.Create(this, _T("&Export XLS"), 680, 390, 800, 415);

}

void CFMSummaryPaymentAndReceipt::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(35);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 270);

	m_wndList.GetHeaderControl()->SetItemHeight(2);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(2, _T("Created Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(3, _T("Acct Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(5, _T("Staff"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(6, _T(""), CFMT_TEXT, 0);	
	m_wndList.InsertColumn(7, _T("Type"), CFMT_TEXT, 80);	
	m_wndList.InsertColumn(8, _T("Status"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Description"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(10, _T("locked"), CFMT_TEXT, 0);
	//m_wndList.SetCheckBox(TRUE);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

}
void CFMSummaryPaymentAndReceipt::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	m_wndLocked.SetEvent(WE_CLICK, _OnLockedSelectFnc);
	m_wndWorkingDate.SetEvent(WE_CLICK, _OnWorkingDateSelectFnc);
	
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndDataSummary.SetEvent(WE_CLICK, _OnDataSummarySelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrintInvoice.SetEvent(WE_CLICK, _OnPrintInvoiceSelectFnc);

	
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndCloseOut.SetEvent(WE_CLICK, _OnCloseOutSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);

	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Summary receipt && payment"));
	m_wndList.AddEvent(1, _T("Print"), _OnListPrintFnc);

	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT trunc(hfc_lastlockeddate) as lastdate FROM hms_fee_control WHERE hfc_userid='%s' "), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	m_szFromDate = m_szToDate = pMF->GetSysDateTime();
	rs.GetValue(_T("lastdate"), tmpStr);
	m_szFromDate.Format(_T("%s 00:00:00"), tmpStr);
	m_szToDate.Format(_T("%s 23:59:59"), pMF->GetSysDate());
	m_szClerkKey = pMF->GetCurrentUser();
	UpdateData(false);

//	OnDataSummarySelect();

	OnListLoadData();
	SetMode(VM_EDIT);
}
void CFMSummaryPaymentAndReceipt::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_bInPatient);
	DDX_Check(pDX, m_wndLocked.GetDlgCtrlID(), m_bLocked);
	//DDX_Check(pDX, m_wndWorkingDate.GetDlgCtrlID(), m_bWorkingDate);
}
void CFMSummaryPaymentAndReceipt::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMSummaryPaymentAndReceipt::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMSummaryPaymentAndReceipt::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bOutPatient=TRUE;
	m_bInPatient=FALSE;
	m_bLocked=FALSE;
	m_bWorkingDate=FALSE;
	m_nTotal = 0;

}
int CFMSummaryPaymentAndReceipt::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
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
		m_wndCloseOut.EnableWindow(FALSE);
 		return nOldMode; 
}
/*void CFMSummaryPaymentAndReceipt::OnFromDateChange(){
	
} */
/*void CFMSummaryPaymentAndReceipt::OnFromDateSetfocus(){
	
} */
/*void CFMSummaryPaymentAndReceipt::OnFromDateKillfocus(){
	
} */
int CFMSummaryPaymentAndReceipt::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CFMSummaryPaymentAndReceipt::OnToDateChange(){
	
} */
/*void CFMSummaryPaymentAndReceipt::OnToDateSetfocus(){
	
} */
/*void CFMSummaryPaymentAndReceipt::OnToDateKillfocus(){
	
} */
int CFMSummaryPaymentAndReceipt::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
} 
void CFMSummaryPaymentAndReceipt::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMSummaryPaymentAndReceipt::OnClerkSelendok(){
	 OnListLoadData();
}
/*void CFMSummaryPaymentAndReceipt::OnClerkSetfocus(){
	
}*/
/*void CFMSummaryPaymentAndReceipt::OnClerkKillfocus(){
	
}*/
long CFMSummaryPaymentAndReceipt::OnClerkLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty())
	{
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	}

	m_wndClerk.DeleteAllItems(); 
	szSQL.Format(_T("SELECT su_userid as userid, su_name as name ") \
		         _T("FROM sys_user WHERE su_groupid in('A', 'F') %s ORDER BY su_userid"), szWhere);

	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("userid")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFMSummaryPaymentAndReceipt::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFMSummaryPaymentAndReceipt::OnOutPatientSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bInPatient = FALSE;
	UpdateData(FALSE);
}
void CFMSummaryPaymentAndReceipt::OnInPatientSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bOutPatient = FALSE;
	UpdateData(FALSE);
}
void CFMSummaryPaymentAndReceipt::OnLockedSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	//m_bLocked = TRUE;
	m_bWorkingDate = FALSE;
	UpdateData(FALSE);
}
void CFMSummaryPaymentAndReceipt::OnWorkingDateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bLocked = FALSE;
	//m_bWorkingDate = TRUE;
	UpdateData(FALSE);
}
#include "FMCashBookDialog.h"

void CFMSummaryPaymentAndReceipt::OnListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szLocked;
	CRecord rs(&pMF->m_db);
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	if(!pMF->CheckPermission(_T("15.11")))
	{
		ShowMessageBox(_T("Permission denied."));
		return;
	}
	m_nCashID = str2long(m_wndList.GetItemText(nSel, 0));
	szSQL.Format(_T("SELECT fac_locked FROM fa_cash WHERE fac_org_id='%s' and fac_cash_id=%ld "), pMF->GetModuleID(), m_nCashID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	rs.GetValue(_T("fac_locked"), szLocked);
	if(szLocked != _T("Y"))
		return;

	CFMCashBookDialog dlg(this);
	dlg.m_nCashID = m_nCashID;

	if(dlg.DoModal() == IDOK){
		
		OnListLoadData();
		m_wndList.SetCurSel(nSel);
	}

} 
void CFMSummaryPaymentAndReceipt::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	CString szInvoiceType;
	szInvoiceType = m_wndList.GetItemText(nNewItem, 6);
	m_nCashID = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_szReceiptNo = m_wndList.GetItemText(nNewItem, 1);
	m_szRefundNo = m_szReceiptNo;
	if(szInvoiceType == _T("R"))
	{
		m_szReceiptReason = m_wndList.GetItemText(nNewItem, 9);
	}
	else
	{
		m_szRefundReason = m_wndList.GetItemText(nNewItem, 9);
	}
	
} 
int CFMSummaryPaymentAndReceipt::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMSummaryPaymentAndReceipt::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	UpdateData(true);

	szWhere.Empty();
	if(!m_szClerkKey.IsEmpty())
	{
		szWhere.Format(_T(" and fac_user_id='%s' "), m_szClerkKey);
	}
	szWhere.AppendFormat(_T(" and fac_invoicedate between cast_string2timestamp('%s') and cast_string2timestamp('%s') "),m_szFromDate, m_szToDate);


	szSQL.Format(_T(" SELECT fac_cash_id,fac_user_id, fac_invoicetype, fac_locked, ") \
_T("   fac_invoiceno,") \
_T("   fac_invoicedate,") \
_T("   fac_acctdate,") \
_T("   fac_baseamt as  fac_amount, fac_reason ") \
_T(" FROM fa_cash") \
_T(" WHERE fac_org_id='FM' %s ORDER BY fac_cash_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	int nItem;
	CString szInvoiceType;
	CString szLocked;
	CString szDesc, szAcctDate, szLockDesc;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("fac_invoicetype"), szInvoiceType);
		rs.GetValue(_T("fac_locked"), szLocked);
		if(szInvoiceType == _T("R"))
		{
			szDesc = _T("Phi\x1EBFu thu");
		}
		else
			szDesc = _T("Phi\x1EBFu \x63hi");
		szAcctDate.Empty();
		szLockDesc.Empty();
		if(szLocked == _T("Y"))
		{
			rs.GetValue(_T("fac_acctdate"), szAcctDate);
			szLockDesc = _T("\x110\xE3 kh\xF3\x61 s\x1ED5");
		}

		nItem = m_wndList.AddItems(
			rs.GetValue(_T("fac_cash_id")), 
			rs.GetValue(_T("fac_invoiceno")), 
			rs.GetValue(_T("fac_invoicedate")), 
			szAcctDate, 
			rs.GetValue(_T("fac_amount")), 
			rs.GetValue(_T("fac_user_id")), 
			szInvoiceType, 
			szDesc,
			szLockDesc,
			rs.GetValue(_T("fac_reason")),
			szLocked,
			NULL);
		if(szInvoiceType == _T("P"))
		{
			m_wndList.SetSubItemBkColor(nItem, 0, RGB(255, 128, 64), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 0, RGB(255, 255, 255), FALSE);
		}
		if(szLocked == _T("N"))
			{
				m_wndList.SetSubItemBkColor(nItem, 1, RGB(0, 128, 192), FALSE);
				m_wndList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255), FALSE);
			}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CFMSummaryPaymentAndReceipt::OnPrintPreviewSelect()
{
	OnPrint();
	
} 
void CFMSummaryPaymentAndReceipt::OnPrintInvoiceSelect()
{
	
	
}
void CFMSummaryPaymentAndReceipt::OnExportSelect()
{
//	OnExportReceiptList();
//	OnExportRefundList();
}

int CFMSummaryPaymentAndReceipt::OnExportReceiptList()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nCol = 0, nRow = 0, nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0;
	szSQL = GetReceiptQueryString();
	//MessageBox(szSQL);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return 0;
	}

	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 15);

	xls.SetRowHeight(4, 40);
	
	//Header
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);

	xls.SetCellMergedColumns(nCol + 3, nRow, 4);
	xls.SetCellMergedColumns(nCol + 3, nRow + 1, 4);

	xls.SetCellMergedColumns(nCol, nRow + 2, 5);
	xls.SetCellMergedColumns(nCol, nRow + 3, 5);

	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellText(nCol + 3, nRow, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol + 3, nRow + 1, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(nCol, nRow + 2, _T("\x42\x1EA2NG TH\x1ED0NG K\xCA \x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N N\x1ED8P TI\x1EC0N"), FMT_TEXT | FMT_CENTER, true, 11);	
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);	
	
	//Column Header
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("T\xEAn \x62\x1EC7nh nh\xE2n"));
	arrCol.Add(_T("S\x1ED1 h\x1ED3 s\x1A1"));
	arrCol.Add(_T("Ph\xF2ng kh\xE1m"));
	arrCol.Add(_T("S\x1ED1 ti\x1EC1n"));

	nRow = 4;

	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol + i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 10); 
	}
	nRow = 5;

	while (!rs.IsEOF())
	{
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		if (!rs.GetValue(_T("roomid")).IsEmpty())
			tmpStr.Format(_T("%s - %s"), rs.GetValue(_T("deptid")), rs.GetValue(_T("roomid")));
		else
			tmpStr.Format(_T("%s"), rs.GetValue(_T("deptid")));

		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("amount"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		nTotal += nAmount;
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);
		nRow++;
		rs.MoveNext();
	}
	
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellText(nCol, nRow, _T("T\x1ED5ng ti\x1EC1n"), FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("%.2Lf"), nTotal);
	xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true, 10);

	xls.Save(_T("Exports\\Danh Sach Benh Nhan Nop Tien.xls"));
	return 0;
} 
int CFMSummaryPaymentAndReceipt::OnAddFMSearchInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

#include "HMSInvoiceDateSettingDialog.h"

void CFMSummaryPaymentAndReceipt::OnCloseOutSelect()
{
	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szReceiptDate;
	CString szCloseDate;
	CString tmpStr, szInvoiceType;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	m_nCashID = str2long(m_wndList.GetItemText(nSel, 0));
	szCloseDate = m_wndList.GetItemText(nSel, 2);

	UpdateData(TRUE);
	if(m_szClerkKey.IsEmpty())
	{
		ShowMessageBox(_T("You much select user name"));
		return;
	}
	if(m_szClerkKey != pMF->GetCurrentUser())
	{
		ShowMessageBox(_T("Cannot close out of other user"));
		return;
	}
	CHMSInvoiceDateSettingDialog dlg(this);
	dlg.m_szWorkingDate = szCloseDate;
	if (dlg.DoModal() == IDOK)
	{
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT fac_cash_id, fac_invoicetype FROM fa_cash WHERE fac_user_id='%s' and (fac_locked='N' or fac_locked is null) and fac_status='O' "), m_szClerkKey);
		rs.ExecSQL(szSQL);
		int res = 0;
		long nCashID;
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("fac_cash_id"), nCashID);
			rs.GetValue(_T("fac_invoicetype"), szInvoiceType);
			szSQL.Format(_T("HMS_FEE_INVOICE_CLOSEBOOK(%ld, '%s', '', 0) "),
				nCashID, m_szClerkKey);
			long n = str2long(pMF->ExecDML(szSQL));
			if(n > 0)
			{
				res += n;
				m_nCashID = nCashID;
				if(szInvoiceType == _T("R"))
					OnPrintSummaryReceipt();
				else
					OnPrintSummaryRefund();


			}

			rs.MoveNext();
		}
		CString szMsg;
		szMsg.Format(_T("Close out [%ld] receipt"), res);
		ShowMessageBox(szMsg);

		CString szRecvDate = dlg.m_szWorkingDate;
		CString szStatusLabel, szStatus;
		TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
		szStatus.Format(szStatusLabel, pMF->GetCurrentUser(), CDate::Convert(szRecvDate));
		szStatus.AppendFormat(_T(" - Server:%s"), pMF->GetHost());
		//pMF->SetStatusText(szStatus, 1);
		OnListLoadData();
	}

}
int CFMSummaryPaymentAndReceipt::OnEditFMSearchInformation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMSummaryPaymentAndReceipt::OnDeleteFMSearchInformation(){
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
 		OnCancelFMSearchInformation();
 	}
	return 0;
}
int CFMSummaryPaymentAndReceipt::OnSaveFMSearchInformation(){
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
 		//OnFMSearchInformationListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMSummaryPaymentAndReceipt::OnCancelFMSearchInformation(){
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
int CFMSummaryPaymentAndReceipt::OnFMSearchInformationListLoadData(){
	return 0;
}

CString CFMSummaryPaymentAndReceipt::GetReceiptQueryString()
{
	CString szSQL, szWhere;
	CString szStocks;
	CString szDrugCondition;

	szWhere.Empty();
	szStocks.Empty();
	szDrugCondition.Empty();

	szWhere.Format(_T(" and fi.hfe_cash_id=%ld "), m_nCashID);
	if(!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hfe_staff='%s' "), m_szClerkKey);


	szSQL.Format(_T(" SELECT *") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT distinct fi.hfe_invoiceno as invoiceno,") \
				_T("         hd_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
				_T("         fi.hfe_date as recvdate,") \
				_T("         fi.hfe_deptid AS deptid,") \
				_T("         '' AS roomid,") \
				_T("         fi.hfe_payment AS amount,") \
				_T("         (SELECT DISTINCT su_name FROM sys_user WHERE su_userid=fi.hfe_staff) AS staff,") \
				_T("         fi.hfe_class AS fclass") \
				_T("  FROM hms_patient") \
				_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_fee_invoice fi ON(hd_docno=hfe_docno)") \
				_T("  %s") \
				_T("  WHERE fi.hfe_payment > 0 AND fi.hfe_status='P'  %s") \
				_T(" ) Tbl") \
				_T(" ORDER BY fclass, recvdate, docno"),
				szDrugCondition, szWhere);

	//MessageBox(szSQL);
	//QueryOpener(szSQL);
	return szSQL;
}

int CFMSummaryPaymentAndReceipt::OnPrintSummaryReceipt()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_nTotal <= 0)
		return 0;

	CReport rpt;
	CRecord rs(&pMF->m_db), ors(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL, tmpStr, szSysDate, szTemp;

	
	int nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0;

	m_nTotal = 0;

	szSQL.Format(_T("SELECT coalesce(sum(hfe_payment), 0) FROM hms_fee_invoice WHERE hfe_cash_id=%ld and hfe_staff='%s' and hfe_status<>'C' and hfe_payment > 0"), 
		m_nCashID, m_szClerkKey);
	rs.ExecSQL(szSQL);
	m_nTotal = rs.GetDoubleValue();

	szSQL.Format(_T("SELECT coalesce(sum(hfe_amount), 0) FROM hms_fee_deposit WHERE hfe_cash_id=%ld and hfe_staff='%s' and hfe_status<>'C' "), 
		m_nCashID, m_szClerkKey);
	rs.ExecSQL(szSQL);
	m_nTotal += rs.GetDoubleValue();

	if (!rpt.Init(_T("Reports/HMS/HF_PHIEUTHUC30BB.rpt"), false, false, 3))
		return 0;

	CReportSection *rptDetail;

	CString szFromDate, szToDate;
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status <>'C' "), m_nCashID);
	CRecord rsd(&pMF->m_db);
	rsd.ExecSQL(szSQL);
	rsd.GetValue(_T("from_date"), szFromDate);
	rsd.GetValue(_T("to_date"), szToDate);

	rptDetail = rpt.AddDetail();



	rptDetail->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rptDetail->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);

	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")),
		         CDateTime::Convert(szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				 CDateTime::Convert(szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rptDetail->SetValue(_T("ReportDate"), tmpStr);
	rptDetail->SetValue(_T("ReceiptNo"), m_szReceiptNo);

	if (!m_szClerkKey.IsEmpty())
	{
		szSQL.Format(_T(" SELECT su_name AS staff,") \
				_T("        sd_name AS deptname") \
				_T(" FROM sys_user") \
				_T(" LEFT JOIN sys_dept ON(sd_id=su_deptid)") \
				_T(" WHERE su_userid='%s'"), m_szClerkKey);

		rs.ExecSQL(szSQL);

		if (!rs.IsEOF())
		{
			rs.GetValue(_T("deptname"), tmpStr);
			rptDetail->SetValue(_T("address"), tmpStr);

			rs.GetValue(_T("staff"), tmpStr);
			rptDetail->SetValue(_T("ReceiveBy"), tmpStr);
			rptDetail->SetValue(_T("patientname"), tmpStr);
		}
	}
	/*else
	{
		rptDetail->SetValue(_T("address"), pMF->GetDepartmentName(pMF->GetCurrentDepartmentID()));
		tmpStr = pMF->GetCurrentUser();
	}*/

	/*while (!rs.IsEOF())
	{
		rs.GetValue(_T("amount"), nAmount);
		nTotal += nAmount;
		rs.MoveNext();
	}*/

	//rptDetail->SetValue(_T("patientname"), tmpStr);

	/*
	tmpStr = _T("Thu ti\x1EC1n vi\x1EC7n ph\xED");
	szSQL.Format(_T("SELECT count(*) FROM sys_userperm WHERE sup_moduleid = 'FM' AND sup_userid = '%s' AND (sup_permid = '01.15' OR sup_permid = '01.16')"), m_szClerkKey);
	ors.ExecSQL(szSQL);

	if (ors.GetIntValue() > 0)
		tmpStr = _T("Thu ti\x1EC1n vi\x1EC7n ph\xED");
	else 
	{
		szSQL.Format(_T(" select sup_permid as permid") \
					_T(" from sys_userperm") \
					_T(" where sup_permid in('01.01.E','01.01.P','01.01.O','01.01.D','01.01.X')") \
					_T(" and sup_userid='%s'"), m_szClerkKey);
		ors.ExecSQL(szSQL);
		if (ors.GetRecordCount() == 1)
		{
			szSQL.Format(_T(" select sp_name as itemname") \
						_T(" from sys_permission") \
						_T(" where sp_moduleid='FM' and sp_id='%s'"),
						ors.GetValue(_T("permid")));
			rss.ExecSQL(szSQL);

			if (!rss.IsEOF())
				rss.GetValue(_T("itemname"), tmpStr);
			
		}
		else
			tmpStr = _T("\x43\xE1\x63 kho\x1EA3n vi\x1EC7n ph\xED ph\x1EA3i thu");
	}
	*/
	rptDetail->SetValue(_T("reason"), m_szReceiptReason);
	
	//nTotal += 0.5;
	//long double nTemp = floor(nTotal);

	FormatCurrency(m_nTotal, tmpStr);
	rptDetail->SetValue(_T("TotalAmount"), tmpStr);

	szTemp.Format(_T("%.0Lf"), m_nTotal);
	MoneyToString(szTemp, tmpStr);

	rptDetail->SetValue(_T("SumInWord"), tmpStr);

	CDateTime dt;
	dt.ParseDateTime(m_szToDate);
	CDate date = dt.GetDate();
	szSysDate = date.GetDate();

	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));

	rptDetail->SetValue(_T("PrintDate"), tmpStr);

	rpt.PrintPreview();

	return 1;
}


int CFMSummaryPaymentAndReceipt::OnPrintReceiptList()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	UpdateData(true);

	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate;
	CString szTemp, szClass;

	int nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0;
	long double nGroupTotal = 0;
	m_nTotal = 0;

	szSQL = GetReceiptQueryString();
	int nCount = rs.ExecSQL(szSQL);

	if (nCount <= 0)
	{
		//ShowMessage(150, MB_ICONSTOP);
		return 0;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANNOPTIEN.rpt"), false, false, 2))
		return 0;

	CString szFromDate, szToDate;
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status<>'C' "), m_nCashID);

	CRecord rsd(&pMF->m_db);
	rsd.ExecSQL(szSQL);
	rsd.GetValue(_T("from_date"), szFromDate);
	rsd.GetValue(_T("to_date"), szToDate);


	

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ReceiptNo"), m_szReceiptNo);

	CReportSection *rptDetail;
	CString szGroup[] = {_T("I"), _T("II")};
	int nIndex = 0;

	while (!rs.IsEOF())
	{
		if (szClass != rs.GetValue(_T("fclass")))
		{
			if (nGroupTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
				TranslateString(_T("Total Amt"), tmpStr);
				tmpStr.AppendFormat(_T(" %s"), szGroup[nIndex++]);
				rptDetail->SetValue(_T("GroupName"), tmpStr);
				//tmpStr.Format(_T("%.2lf"), nGroupTotal);
				FormatCurrency(nGroupTotal, tmpStr);
				rptDetail->SetValue(_T("SumGroupName"), tmpStr);

				nTotal += nGroupTotal;
				nGroupTotal = 0;
			}

			nIdx = 1;

			rs.GetValue(_T("fclass"), szClass);
			if (szClass == _T("X"))
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
				rptDetail->SetValue(_T("GroupName"), _T("\x43\xE1\x63 kho\x61 n\x1ED9i tr\xFA"));
			}
		}

		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIdx++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		if (!rs.GetValue(_T("roomid")).IsEmpty())
			tmpStr.Format(_T("%s - %s"), rs.GetValue(_T("deptid")), rs.GetValue(_T("roomid")));
		else
			tmpStr.Format(_T("%s"), rs.GetValue(_T("deptid")));

		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("amount"), nAmount);
		nGroupTotal += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.MoveNext();
	}

	if (nGroupTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
		TranslateString(_T("Total Amt"), tmpStr);
		tmpStr.AppendFormat(_T(" %s"), szGroup[nIndex++]);
		rptDetail->SetValue(_T("GroupName"), tmpStr);
		//tmpStr.Format(_T("%.2lf"), nGroupTotal);
		FormatCurrency(nGroupTotal, tmpStr);
		rptDetail->SetValue(_T("SumGroupName"), tmpStr);

		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	//rptDetail = rpt.AddDetail(rpt.GetReportFooter());
	tmpStr.Format(_T("%s"), _T("T\x1ED5ng \x63\x1ED9ng"));
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);

	nTotal += 0.5;
	long double nTemp = floor(nTotal);

	m_nTotal = nTemp;

	FormatCurrency(nTemp, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumTotalAmount"), tmpStr);

	tmpStr.Format(_T("%.0lf"), nTemp);
	CString szMoney = tmpStr;
	MoneyToString(szMoney, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));

	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	if (!m_szClerkKey.IsEmpty())
		rpt.GetReportFooter()->SetValue(_T("ReceiverBy"), m_wndClerk.GetCurrent(1));
	rpt.PrintPreview();

	if (!m_szClerkKey.IsEmpty() && m_bLocked && m_nTotal > 0)
	{
		OnPrintSummaryReceipt();
	}
	return 0;
} 


int CFMSummaryPaymentAndReceipt::OnListPrint(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	m_nCashID = str2long(m_wndList.GetItemText(nSel, 0));
	CString szType = m_wndList.GetItemText(nSel, 6);
	CString szLocked = m_wndList.GetItemText(nSel, 10);
	//In phieu thu
	if(szType == _T("R"))
	{
		OnPrintReceiptList();
		OnPrintDepositList();
		if(szLocked == _T("Y"))
			OnPrintSummaryReceipt();
	}
	else
	{
		OnPrintRefundList();
		if(szLocked == _T("Y"))
			OnPrintSummaryRefund();
	}
	return  0;
}



int CFMSummaryPaymentAndReceipt::OnPrintRefundList()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	CReport rpt;
	CString szSQL, tmpStr, szSysDate;
	CString szObject, szTemp;

	CRecord rs(&pMF->m_db);
	double nCost = 0;
	long double nTotal[8];

	szSQL = GetRefundQueryString();
	rs.ExecSQL(szSQL);

	for (int i = 0; i < 8; i++)
		nTotal[i] = 0;

	if (rs.IsEOF())
	{
	//	ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return 0;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANHOANUNG.RPT")))
		return 0;

	CString szFromDate, szToDate;
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status<>'C' "), m_nCashID);

	CRecord rsd(&pMF->m_db);
	rsd.ExecSQL(szSQL);
	rsd.GetValue(_T("from_date"), szFromDate);
	rsd.GetValue(_T("to_date"), szToDate);

	

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PaymentNo"), m_szRefundNo);

	CReportSection *rptDetail;



	int nIndex = 1;

	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("recordno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("deptid"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("insamount"), nCost);
		nTotal[5] += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("servamount"), nCost);
		nTotal[6] += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("amount"), nCost);
		nTotal[7] += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.MoveNext();
	}

	if (nTotal[7] > 0)
	{
		for (int  i = 5; i < 8; i++)
		{
			szTemp.Format(_T("s%d"), i + 1);
			//tmpStr.Format(_T("%.2Lf"), nTotal[i]);
			FormatCurrency(nTotal[i], tmpStr);
			rpt.GetReportFooter()->SetValue(szTemp, tmpStr);
		}
	}

	szSysDate = pMF->GetSysDate();

	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), 
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	return 0;
} 


int CFMSummaryPaymentAndReceipt::OnExportRefundList()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	UpdateData(TRUE);
	BeginWaitCursor();

	szSQL = GetRefundQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		//ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return 0;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 9);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 28);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 15);

	int nRow = 1;
	int nCol = 0;

	xls.SetRowHeight(6, 45);

	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellMergedColumns(0, 2, 3);

	xls.SetCellMergedColumns(nCol + 3, nRow, 4);
	xls.SetCellMergedColumns(nCol + 3, nRow + 1, 4);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(nCol + 3, nRow, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol + 3, nRow + 1, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);

	xls.SetCellMergedColumns(nCol, nRow + 3, 6);
	xls.SetCellMergedColumns(nCol, nRow + 4, 6);

	xls.SetCellText(nCol, nRow + 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N HO\xC0N \x1EE8NG"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);


	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Admission No"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellText(nCol + 2, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Dept"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Health Insurance"), tmpStr);
	xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Service"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	nRow = 6;
	long double nTotal[6];
	double nCost = 0;
	int nIndex = -1;

	for (int i = 0; i < 6; i++)
		nTotal[i] = 0;

	while (!rs.IsEOF())
	{
		nRow++;

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("recordno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("deptname"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("insamount"), nCost);
		nTotal[4] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("servamount"), nCost);
		nTotal[5] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.MoveNext();
	}

	if (nTotal[4] + nTotal[5] > 0)
	{
		nRow++;
		xls.SetCellMergedColumns(nCol, nRow, 4);
		TranslateString(_T("Total Sum"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

		for (int i = 4; i < 6; i++)
		{
			tmpStr.Format(_T("%.2Lf"), nTotal[i]);
			xls.SetCellText(nCol + i, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
		}
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DSBNHoanUng.xls"));
	return 0;
}


int CFMSummaryPaymentAndReceipt::OnExportDepositList()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	UpdateData(TRUE);
	BeginWaitCursor();

	szSQL = GetDepositQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
	//	ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return 0;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 9);
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 22);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 15);
	xls.SetColumnWidth(6, 15);

	int nRow = 1;
	int nCol = 0;

	xls.SetRowHeight(6, 45);

	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellMergedColumns(0, 2, 3);

	xls.SetCellMergedColumns(4, 1, 3);
	xls.SetCellMergedColumns(4, 2, 3);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(4, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(4, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);

	xls.SetCellMergedColumns(nCol, nRow + 3, 6);
	xls.SetCellMergedColumns(nCol, nRow + 4, 6);

	xls.SetCellText(nCol, nRow + 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N T\x1EA0M G\x1EECI"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Admission No"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellText(nCol + 2, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Dept"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 4, nRow + 5, _T("\x110\x1ED5i \x111\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Health Insurance"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Service"), tmpStr);
	xls.SetCellText(nCol + 6, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	nRow = 6;
	long double nTotal[7];
	double nCost = 0;
	int nIndex = -1;
	CString szRecord;

	for (int i = 0; i < 7; i++)
		nTotal[i] = 0;

	while (!rs.IsEOF())
	{
		nRow++;

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		szRecord.Empty();
		rs.GetValue(_T("recordno"), tmpStr);
		szRecord = tmpStr;
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("insamount"), nCost);
		nTotal[5] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		if (nCost > 0)
		{
			if (szRecord.Left(2) == _T("DV"))
				xls.SetCellText(nCol + 4, nRow, _T("X"), FMT_TEXT | FMT_WRAPING, true);
		}

		rs.GetValue(_T("servamount"), nCost);
		nTotal[6] += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.MoveNext();
	}

	if (nTotal[5] + nTotal[6] > 0)
	{
		nRow++;
		xls.SetCellMergedColumns(nCol, nRow, 5);
		TranslateString(_T("Total Sum"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

		for (int i = 5; i < 7; i++)
		{
			tmpStr.Format(_T("%.2Lf"), nTotal[i]);
			xls.SetCellText(nCol + i, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
		}
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DSBNTamGui.xls"));
	return 0;
}

int CFMSummaryPaymentAndReceipt::OnPrintSummaryRefund(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db), ors(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL, tmpStr, szSysDate, szTemp;

	
	int nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0;

m_nTotal = 0;

	szSQL.Format(_T("SELECT coalesce(sum(hfe_amount), 0) FROM hms_fee_refund WHERE hfe_cash_id=%ld and hfe_staff='%s' and hfe_status<>'C' "), 
		m_nCashID, m_szClerkKey);
	rs.ExecSQL(szSQL);
	m_nTotal = rs.GetDoubleValue();
	if(m_nTotal <= 0)
		return 0;

	if (!rpt.Init(_T("Reports/HMS/HF_PHIEUCHI30BB.rpt"), false, false, 3))
		return 0;

	CReportSection *rptDetail;


	CString szFromDate, szToDate;
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status <>'C' "), m_nCashID);
	CRecord rsd(&pMF->m_db);
	rsd.ExecSQL(szSQL);
	rsd.GetValue(_T("from_date"), szFromDate);
	rsd.GetValue(_T("to_date"), szToDate);

	rptDetail = rpt.AddDetail();

	rptDetail->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rptDetail->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);

	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")),
		         CDateTime::Convert(szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				 CDateTime::Convert(szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rptDetail->SetValue(_T("ReportDate"), tmpStr);
	rptDetail->SetValue(_T("PaymentNo"), m_szRefundNo);

	if (!m_szClerkKey.IsEmpty())
	{
		szSQL.Format(_T(" SELECT su_name AS staff,") \
				_T("        sd_name AS deptname") \
				_T(" FROM sys_user") \
				_T(" LEFT JOIN sys_dept ON(sd_id=su_deptid)") \
				_T(" WHERE su_userid='%s'"), m_szClerkKey);

		rs.ExecSQL(szSQL);

		if (!rs.IsEOF())
		{
			rs.GetValue(_T("deptname"), tmpStr);
			rptDetail->SetValue(_T("address"), tmpStr);

			rs.GetValue(_T("staff"), tmpStr);
			rptDetail->SetValue(_T("ReceiveBy"), tmpStr);
			rptDetail->SetValue(_T("patientname"), tmpStr);
		}
	}
	/*else
	{
		rptDetail->SetValue(_T("address"), pMF->GetDepartmentName(pMF->GetCurrentDepartmentID()));
		tmpStr = pMF->GetCurrentUser();
	}*/

	/*while (!rs.IsEOF())
	{
		rs.GetValue(_T("amount"), nAmount);
		nTotal += nAmount;
		rs.MoveNext();
	}*/

	//rptDetail->SetValue(_T("patientname"), tmpStr);
/*
	tmpStr = _T("Thu ti\x1EC1n vi\x1EC7n ph\xED");
	szSQL.Format(_T("SELECT count(*) FROM sys_userperm WHERE sup_moduleid = 'FM' AND sup_userid = '%s' AND (sup_permid = '01.15' OR sup_permid = '01.16')"), m_szClerkKey);
	ors.ExecSQL(szSQL);

	if (ors.GetIntValue() > 0)
		tmpStr = _T("Thu ti\x1EC1n vi\x1EC7n ph\xED");
	else 
	{
		szSQL.Format(_T(" select sup_permid as permid") \
					_T(" from sys_userperm") \
					_T(" where sup_permid in('01.01.E','01.01.P','01.01.O','01.01.D','01.01.X')") \
					_T(" and sup_userid='%s'"), m_szClerkKey);
		ors.ExecSQL(szSQL);
		if (ors.GetRecordCount() == 1)
		{
			szSQL.Format(_T(" select sp_name as itemname") \
						_T(" from sys_permission") \
						_T(" where sp_moduleid='FM' and sp_id='%s'"),
						ors.GetValue(_T("permid")));
			rss.ExecSQL(szSQL);

			if (!rss.IsEOF())
				rss.GetValue(_T("itemname"), tmpStr);
			
		}
		else
			tmpStr = _T("\x43\xE1\x63 kho\x1EA3n vi\x1EC7n ph\xED ph\x1EA3i thu");
	}
	*/

	rptDetail->SetValue(_T("reason"), m_szRefundReason);
	
	//nTotal += 0.5;
	//long double nTemp = floor(nTotal);

	FormatCurrency(m_nTotal, tmpStr);
	rptDetail->SetValue(_T("TotalAmount"), tmpStr);

	szTemp.Format(_T("%.0Lf"), m_nTotal);
	MoneyToString(szTemp, tmpStr);

	rptDetail->SetValue(_T("SumInWord"), tmpStr);

	CDateTime dt;
	dt.ParseDateTime(m_szToDate);
	CDate date = dt.GetDate();
	szSysDate = date.GetDate();

	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));

	rptDetail->SetValue(_T("PrintDate"), tmpStr);

	rpt.PrintPreview();

	return 1;

}

int CFMSummaryPaymentAndReceipt::OnPrintDepositList(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	CReport rpt;
	CString szSQL, tmpStr, szSysDate;
	CString szObject, szTemp;
	CString szRecord;

	CRecord rs(&pMF->m_db);
	double nCost = 0;
	long double nTotal[8];

	szSQL = GetDepositQueryString();

	rs.ExecSQL(szSQL);

	for (int i = 0; i < 8; i++)
		nTotal[i] = 0;

	if (rs.IsEOF())
	{
//		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return 0;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANTAMGUI.RPT")))
		return 0;


	CString szFromDate, szToDate;
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status<>'C' "), m_nCashID);

	CRecord rsd(&pMF->m_db);
	rsd.ExecSQL(szSQL);
	rsd.GetValue(_T("from_date"), szFromDate);
	rsd.GetValue(_T("to_date"), szToDate);

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ReceiptNo"), m_szReceiptNo);

	CReportSection *rptDetail;

	int nIndex = 1;

	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		szRecord.Empty();
		rs.GetValue(_T("recordno"), tmpStr);
		szRecord = tmpStr;
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("deptid"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("insamount"), nCost);
		nTotal[5] += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		
		if (szRecord.Left(2) == _T("DV"))
		{
			if (nCost > 0)
			{
				rptDetail->SetValue(_T("9"), _T("X"));
			}
		}

		rs.GetValue(_T("servamount"), nCost);
		nTotal[6] += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("amount"), nCost);
		nTotal[7] += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		m_nTotal += nTotal[7];
		rs.MoveNext();
	}

	if (nTotal[7] > 0)
	{
		for (int  i = 5; i < 8; i++)
		{
			szTemp.Format(_T("s%d"), i + 1);
			//tmpStr.Format(_T("%.2Lf"), nTotal[i]);
			FormatCurrency(nTotal[i], tmpStr);
			rpt.GetReportFooter()->SetValue(szTemp, tmpStr);
		}
	}

	szSysDate = pMF->GetSysDate();

	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), 
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();

	return 0;
}



CString CFMSummaryPaymentAndReceipt::GetDepositQueryString()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere;
	CString szObject;

	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hfe_staff='%s' "), m_szClerkKey);
	szWhere.AppendFormat(_T(" and hfe_cash_id =%ld "), m_nCashID);


	szSQL.Format(_T(" select hd_docno as docno, ") \
		        _T("        hcr_recordno as recordno,") \
		        _T("        hfe_invoiceno as invoiceno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hfe_deptid as deptid,") \
				_T("        (select distinct sd_name from sys_dept where sd_id=hfe_deptid) as deptname,") \
				_T("        case when ho_type not in('S') then coalesce(sum(hfe_amount), 0) else 0 end as insamount,") \
				_T("        case when ho_type in('S') then coalesce(sum(hfe_amount), 0) else 0 end as servamount,") \
				_T("        coalesce(sum(hfe_amount), 0) as amount") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_clinical_record on(hcr_docno=hd_docno)") \
				_T(" left join hms_fee_deposit on(hfe_docno=hd_docno)") \
				_T(" left join hms_object on(ho_id=hfe_objectid)") \
				_T(" where hfe_status <> 'C' and hd_object is not null and hd_object<>'0' %s") \
				_T(" group by hfe_invoiceno, hd_docno, hcr_recordno, hp_surname, hp_midname, hp_firstname, hfe_deptid, ho_type") \
				_T(" order by hfe_invoiceno"),
				szWhere);

	return szSQL;
}



CString CFMSummaryPaymentAndReceipt::GetRefundQueryString()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere;
	CString szObject;
	szWhere.Empty();
	
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_staff='%s' "), m_szClerkKey);

	szWhere.AppendFormat(_T(" and hfe_cash_id=%ld "), m_nCashID);
	

	szSQL.Format(_T(" select hfe_docno as docno, ") \
		        _T("        hcr_recordno as recordno,") \
				_T("        hfe_invoiceno as invoiceno,") \
				_T("        hfe_deptid as deptid,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        (select distinct sd_name from sys_dept where sd_id=hfe_deptid) as deptname,") \
				_T("        case when ho_type not in('S') and length(ho_type) > 0 then coalesce(sum(hfe_amount), 0) else 0 end as insamount,") \
				_T("        case when (ho_type in('S') or ho_type is null) then coalesce(sum(hfe_amount), 0) else 0 end as servamount,") \
				_T("        coalesce(sum(hfe_amount), 0) as amount") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_clinical_record on(hcr_docno=hd_docno)") \
				_T(" left join hms_fee_refund on(hfe_docno=hd_docno)") \
				_T(" left join hms_object on(ho_id=hfe_objectid)") \
				_T(" where hfe_status='P' %s")
				_T(" group by hfe_invoiceno, hfe_docno, hcr_recordno, hp_surname, hp_midname, hp_firstname, hfe_deptid, ho_type, hcr_admitdate") \
				_T(" order by pname, hfe_invoiceno"), szWhere);

	return szSQL;
}


void CFMSummaryPaymentAndReceipt::OnDataSummarySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	m_nCashID = 0;
	UpdateData(TRUE);
	pMF->BeginWaitCursor();

	if(m_szClerkKey.IsEmpty())
	{
		ShowMessageBox(_T("You much select user name"));
		return;
	}
	if(m_szClerkKey != pMF->GetCurrentUser())
	{
		ShowMessageBox(_T("Kh\xF4ng th\x1EC3 t\x1ED5ng h\x1EE3p s\x1ED1 li\x1EC7u \x63\x1EE7\x61 ng\x1B0\x1EDDi kh\xE1\x63"));
		return;
	}

	CFMReceiptReasonDialog dlg(this);
	dlg.m_szClerkID = m_szClerkKey;
	if(dlg.DoModal() == IDOK)
	{
		szSQL.Format(_T("HMS_FEE_INVOICE_DATASUMMARY('%s', '%s', '%s') "), m_szClerkKey, dlg.m_szReceiptReason, dlg.m_szRefundReason);
		long res = str2long(pMF->ExecDML(szSQL));

		pMF->EndWaitCursor();

		if(res > 0)
		{
			OnListLoadData();
			OnPrint();
			m_wndCloseOut.EnableWindow(TRUE);
		}
		else
		{
			ShowMessageBox(_T("No data"));
			m_wndCloseOut.EnableWindow(FALSE);
		}
	}	
} 


void CFMSummaryPaymentAndReceipt::OnPrint(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szLocked;
	m_nTotal = 0;
	if(m_nCashID > 0)
	{
		szSQL.Format(_T("SELECT fac_invoiceno, fac_reason, fac_locked FROM FA_CASH WHERE fac_cash_id=%ld "), m_nCashID);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("fac_invoiceno"), m_szReceiptNo);
			rs.GetValue(_T("fac_reason"), m_szReceiptReason);
			rs.GetValue(_T("fac_locked"), szLocked);

			OnPrintReceiptList();
			OnPrintDepositList();
			if(szLocked == _T("Y"))
				OnPrintSummaryReceipt();
			m_nTotal = 0;
			OnPrintRefundList();
			if(szLocked == _T("Y"))
				OnPrintSummaryRefund();
		}
	}
	else
	{
		szSQL.Format(_T("SELECT coalesce(max(fac_cash_id), 0) FROM fa_cash WHERE fac_org_id='FM' and fac_user_id='%s' and (fac_locked='N' or fac_locked is null) and fac_invoicetype='R' "), m_szClerkKey);
		rs.ExecSQL(szSQL);
		m_nCashID = rs.GetIntValue();
		if(m_nCashID > 0)
		{

			szSQL.Format(_T("SELECT fac_invoiceno, fac_reason, fac_locked FROM FA_CASH WHERE fac_cash_id=%ld "), m_nCashID);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("fac_invoiceno"), m_szReceiptNo);
			rs.GetValue(_T("fac_reason"), m_szReceiptReason);
			rs.GetValue(_T("fac_locked"), szLocked);
			OnPrintReceiptList();
			OnPrintDepositList();
			if( szLocked == _T("Y"))
				OnPrintSummaryReceipt();
		}
		szSQL.Format(_T("SELECT coalesce(max(fac_cash_id), 0) FROM fa_cash WHERE fac_org_id='FM' and fac_user_id='%s' and (fac_locked='N' or fac_locked is null) and fac_invoicetype='P' "), m_szClerkKey);
		rs.ExecSQL(szSQL);
		m_nCashID = rs.GetIntValue();
		if(m_nCashID > 0)
		{
			szSQL.Format(_T("SELECT fac_invoiceno, fac_reason, fac_locked FROM FA_CASH WHERE fac_cash_id=%ld "), m_nCashID);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("fac_invoiceno"), m_szRefundNo);
			rs.GetValue(_T("fac_reason"), m_szRefundReason);
			rs.GetValue(_T("fac_locked"), szLocked);
			OnPrintRefundList();
			if(szLocked == _T("Y"))
				OnPrintSummaryRefund();
		}

	}
}


void CFMSummaryPaymentAndReceipt::OnRefreshSelect(){
	OnListLoadData();
}