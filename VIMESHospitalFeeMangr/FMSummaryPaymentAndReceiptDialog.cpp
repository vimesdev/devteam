#include "stdafx.h"
#include "FMSummaryPaymentAndReceiptDialog.h"
#include "MainFrm.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "FMReceiptReasonDialog.h"
#include "HMSReportForms\PrintForms.h"
#include "FMUpdateCashBookDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSummaryPaymentAndReceiptDialog* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnClerkAddNew();
}*/

/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceiptDialog *)pWnd)->OnOrderNoCheckValue();

}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnInPatientSelect();
}
static void _OnLockedSelectFnc(CWnd *pWnd){
	 ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnLockedSelect();
}
static void _OnWorkingDateSelectFnc(CWnd *pWnd){
	 ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnWorkingDateSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceiptDialog *pVw = (CFMSummaryPaymentAndReceiptDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintInvoiceSelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceiptDialog *pVw = (CFMSummaryPaymentAndReceiptDialog *)pWnd;
	pVw->OnPrintInvoiceSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceiptDialog *pVw = (CFMSummaryPaymentAndReceiptDialog *)pWnd;
	pVw->OnExportSelect();
}
static void _OnCloseOutSelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceiptDialog *pVw = (CFMSummaryPaymentAndReceiptDialog *)pWnd;
	pVw->OnCloseOutSelect();
}

static void _OnDataSummarySelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceiptDialog *pVw = (CFMSummaryPaymentAndReceiptDialog *)pWnd;
	pVw->OnDataSummarySelect();
} 

static void _OnRefreshSelectFnc(CWnd *pWnd){
	CFMSummaryPaymentAndReceiptDialog *pVw = (CFMSummaryPaymentAndReceiptDialog *)pWnd;
	pVw->OnRefreshSelect();
} 


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnListDeleteItem();
}
static int _OnAddFMSummaryPaymentAndReceiptDialogFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnAddFMSummaryPaymentAndReceiptDialog();
} 
static int _OnEditFMSummaryPaymentAndReceiptDialogFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnEditFMSummaryPaymentAndReceiptDialog();
} 
static int _OnDeleteFMSummaryPaymentAndReceiptDialogFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnDeleteFMSummaryPaymentAndReceiptDialog();
} 
static int _OnSaveFMSummaryPaymentAndReceiptDialogFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnSaveFMSummaryPaymentAndReceiptDialog();
} 
static int _OnCancelFMSummaryPaymentAndReceiptDialogFnc(CWnd *pWnd){
	 return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnCancelFMSummaryPaymentAndReceiptDialog();
}


static int _OnListPrintFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnListPrint();
}

static int _OnListPrintDetailItemFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnListPrintDetailItem();
}
static int _OnListPrintMultiCashFnc(CWnd *pWnd){
	return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnListPrintMultiCash();
}

static int _OnPrintUnpostPatientListFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnPrintUnpostPatientList();
	return 0;
}
static int _OnExportPatientListFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnExportPatientList();
	return 0;
}
static int _OnUpdateFACashFnc(CWnd *pWnd){
	((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnUpdateFACash();
	return 0;
}

static int _OnPrintTotalByUserFnc(CWnd *pWnd)
{
	return ((CFMSummaryPaymentAndReceiptDialog*)pWnd)->OnPrintTotalByUser();
}

CFMSummaryPaymentAndReceiptDialog::CFMSummaryPaymentAndReceiptDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 965;
	m_nDlgHeight = 425;
	SetDefaultValues();
	m_bPostedState = FALSE;
}


CFMSummaryPaymentAndReceiptDialog::~CFMSummaryPaymentAndReceiptDialog(){
}
void CFMSummaryPaymentAndReceiptDialog::OnCreateComponents()
{

	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 960, 60);	
	m_wndPaymentReceiptList.Create(this, _T("Payment && receipt list"), 5, 65, 960, 385);
	
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 230, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 30, 315, 55);
	m_wndToDate.Create(this,320, 30, 455, 55); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 460, 30, 540, 55);
	m_wndClerk.Create(this,545, 30, 745, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 750, 30, 830, 55);
	m_wndOrderNo.Create(this,835, 30, 925, 55); 
	m_wndRefresh.Create(this, _T("@"), 930, 29, 955, 54);
	m_wndList.Create(this,10, 90, 955, 380); 
	m_wndCloseOut.Create(this, _T("&Close out"), 5, 390, 125, 415);
	m_wndDataSummary.Create(this, _T("Data  Summary"), 130, 390, 250, 415);
	m_wndPrintPreview.Create(this, _T("&Print"), 715, 390, 835, 415);
	m_wndExport.Create(this, _T("&Export XLS"), 840, 390, 960, 415);

	m_wndPostedState.Create(this, _T("\x42\x1EC7nh nh\xE2n n\x1ED9p ti\x1EC1n qu\x61 qu\x1EF9"), 300, 390, 500, 415);

}

void CFMSummaryPaymentAndReceiptDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(35);
	m_wndOrderNo.SetLimitText(35);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderNo.SetNotEmpty(false);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 270);

	m_wndList.GetHeaderControl()->SetItemHeight(2);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Receipt No"), CFMT_TEXT, 110);
	m_wndList.InsertColumn(2, _T("Created Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(3, _T("Acct Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(4, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(5, _T("Posted Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(6, _T("Staff"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T(""), CFMT_TEXT, 0);	
	m_wndList.InsertColumn(8, _T("Type"), CFMT_TEXT, 90);	
	m_wndList.InsertColumn(9, _T("Status"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(10, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(11, _T("locked"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(12, _T("Approved"), CFMT_TEXT,30);
	m_wndList.InsertColumn(13, _T("Approved Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(14, _T("Posted"), CFMT_TEXT,30);
	m_wndList.InsertColumn(15, _T("Posted Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(16, _T("Cashbookid"), CFMT_TEXT, 100);

	m_wndList.SetCheckBox(TRUE);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

}
void CFMSummaryPaymentAndReceiptDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);


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
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Print Detail Item"), _OnListPrintDetailItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Print Multi Cash"), _OnListPrintMultiCashFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("\x44\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n \x111\xE3 \x64uy\x1EC7t \x63h\x1B0\x61 qu\x61 qu\x1EF9"), _OnPrintUnpostPatientListFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("Export chi tiết danh sách bệnh nhân"), _OnExportPatientListFnc);
	if(pMF->CheckPermission(_T("FM.100.04")))
	{
		m_wndList.AddEvent(0, _T("-"), NULL);
		m_wndList.AddEvent(6, _T("Cập nhật lại kiểu phiếu thu chi"), _OnUpdateFACashFnc);
	}
	
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(9, _T("Bảng kê thu tiền theo người thu"), _OnPrintTotalByUserFnc);

	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT trunc(hfc_lastlockeddate) as lastdate FROM hms_fee_control WHERE hfc_userid='%s' "), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("lastdate"), tmpStr);
	
	if (!tmpStr.IsEmpty())
	{
		m_szFromDate = tmpStr;
	}
	else
	{
		m_szFromDate.Format(_T("%s 00:00"), pMF->GetSysDate());
	}

	m_szToDate.Format(_T("%s 23:59"), pMF->GetSysDate());
	m_szClerkKey = pMF->GetCurrentUser();
	UpdateData(false);

//	OnDataSummarySelect();

	OnListLoadData();
	
	
	CString szPaymentMethod = AfxGetApp()->GetProfileString(_T("FEE"), _T("PAYMENT_METHOD"), _T("TM1"));
	if(szPaymentMethod == _T("QUY"))
	{
//		m_bPostedState = TRUE;
	}
	else
	{
//		m_bPostedState = FALSE;

	}
	SetMode(VM_EDIT);
	
}
void CFMSummaryPaymentAndReceiptDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Check(pDX, m_wndPostedState.GetDlgCtrlID(), m_bPostedState);

//	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
//	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_bInPatient);
//	DDX_Check(pDX, m_wndLocked.GetDlgCtrlID(), m_bLocked);

	//DDX_Check(pDX, m_wndWorkingDate.GetDlgCtrlID(), m_bWorkingDate);
}
void CFMSummaryPaymentAndReceiptDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	
}
void CFMSummaryPaymentAndReceiptDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMSummaryPaymentAndReceiptDialog::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bOutPatient=TRUE;
	m_bInPatient=FALSE;
	m_bLocked=FALSE;
	m_bWorkingDate=FALSE;
	m_nTotal = 0;
	m_szOrderNo.Empty();

}
int CFMSummaryPaymentAndReceiptDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1); 
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
/*void CFMSummaryPaymentAndReceiptDialog::OnFromDateChange(){
	
} */
/*void CFMSummaryPaymentAndReceiptDialog::OnFromDateSetfocus(){
	
} */
/*void CFMSummaryPaymentAndReceiptDialog::OnFromDateKillfocus(){
	
} */
int CFMSummaryPaymentAndReceiptDialog::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CFMSummaryPaymentAndReceiptDialog::OnToDateChange(){
	
} */
/*void CFMSummaryPaymentAndReceiptDialog::OnToDateSetfocus(){
	
} */
/*void CFMSummaryPaymentAndReceiptDialog::OnToDateKillfocus(){
	
} */
int CFMSummaryPaymentAndReceiptDialog::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
} 
void CFMSummaryPaymentAndReceiptDialog::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMSummaryPaymentAndReceiptDialog::OnClerkSelendok(){
	 OnListLoadData();
}
/*void CFMSummaryPaymentAndReceiptDialog::OnClerkSetfocus(){
	
}*/
/*void CFMSummaryPaymentAndReceiptDialog::OnClerkKillfocus(){
	
}*/
long CFMSummaryPaymentAndReceiptDialog::OnClerkLoadData()
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
/*void CFMSummaryPaymentAndReceiptDialog::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


/*void CFMSummaryPaymentAndReceiptDialog::OnOrderNoChange(){
	
} */
/*void CFMSummaryPaymentAndReceiptDialog::OnOrderNoSetfocus(){
	
} */
/*void CFMSummaryPaymentAndReceiptDialog::OnOrderNoKillfocus(){
	
} */

int CFMSummaryPaymentAndReceiptDialog::OnOrderNoCheckValue(){
	OnListLoadData();
	return 1;
}

void CFMSummaryPaymentAndReceiptDialog::OnOutPatientSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bInPatient = FALSE;
	UpdateData(FALSE);
}
void CFMSummaryPaymentAndReceiptDialog::OnInPatientSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bOutPatient = FALSE;
	UpdateData(FALSE);
}
void CFMSummaryPaymentAndReceiptDialog::OnLockedSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	//m_bLocked = TRUE;
	m_bWorkingDate = FALSE;
	UpdateData(FALSE);
}
void CFMSummaryPaymentAndReceiptDialog::OnWorkingDateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bLocked = FALSE;
	//m_bWorkingDate = TRUE;
	UpdateData(FALSE);
}
#include "FMCashBookDialog.h"

void CFMSummaryPaymentAndReceiptDialog::OnListDblClick(){
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
void CFMSummaryPaymentAndReceiptDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	if(nNewItem < 0) return;
	CString szInvoiceType, szLocked;
	szInvoiceType = m_wndList.GetItemText(nNewItem, 7);
	m_szInvoiceType = szInvoiceType;
	m_nCashID = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_szReceiptNo = m_wndList.GetItemText(nNewItem, 1);
	m_szRefundNo = m_szReceiptNo;
	m_szCashBookID = m_wndList.GetItemText(nNewItem, 1).Right(2);
	m_szCashBookID2 = m_wndList.GetItemText(nNewItem, 16);
	//_msg(_T("%s"), m_wndList.GetItemText(nNewItem, 1).Right(2));
	m_szCashBookID.Empty();
	if(szInvoiceType == _T("R"))
	{
		m_szReceiptReason = m_wndList.GetItemText(nNewItem, 10);
	}
	else
	{
		m_szRefundReason = m_wndList.GetItemText(nNewItem, 10);
	}
	szSQL.Format(_T("select fac_locked from fa_cash where fac_cash_id=%ld "), m_nCashID);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	rs.GetValue(_T("fac_locked"), szLocked);
	if (szLocked == _T("N"))
	{
		m_wndCloseOut.EnableWindow(TRUE);		
	}
	//Always enable print function
	//szSQL.Format(_T("SELECT distinct hfe_class FROM hms_fee_invoice WHERE hfe_cash_id = %ld"), m_nCashID);
	//rs.ExecSQL(szSQL);
	//int nCount = 0;
	//while (!rs.IsEOF())
	//{
	//	if (rs.GetStringValue() == _T("A") || rs.GetStringValue() == _T("I"))
	//		nCount++;
	//	rs.MoveNext();
	//}
	//if (nCount > 0)
	//	m_wndList.SetMenuState(2, FALSE);
	//else
	//	m_wndList.SetMenuState(2, TRUE);
	
} 
int CFMSummaryPaymentAndReceiptDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMSummaryPaymentAndReceiptDialog::OnListLoadData()
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
	szWhere.AppendFormat(_T(" and fac_updateddate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') "),m_szFromDate, m_szToDate);

	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.Format(_T(" and lower(fac_invoiceno) like(chr(37)||lower('%s')||chr(37)) "), m_szOrderNo);
	}

	if(pMF->CheckPermission(_T("FM.100.02")))
		{
		szSQL.Format(_T(" SELECT fac_cash_id,fac_user_id, fac_invoicetype, fac_locked, ") \
	_T("   fac_invoiceno,") \
	_T("   fac_invoicedate,") \
	_T("   fac_acctdate,") \
	_T("   fac_baseamt as  fac_amount, fac_reason, fac_approvedby, fac_approveddate, fac_posted, fac_posteddate, fac_postedamt, FAC_CASHBOOK_ID ") \
	_T(" FROM fa_cash") \
	_T(" WHERE fac_org_id='FM' %s ORDER BY fac_cash_id "), szWhere);
		}
	else
		{
	   szSQL.Format(_T(" SELECT fac_cash_id,fac_user_id, fac_invoicetype, fac_locked, ") \
	_T("   fac_invoiceno,") \
	_T("   fac_invoicedate,") \
	_T("   fac_acctdate,") \
	_T("   fac_baseamt as  fac_amount, fac_reason, fac_approvedby, fac_approveddate, fac_posted, fac_posteddate, fac_postedamt, FAC_CASHBOOK_ID ") \
	_T(" FROM fa_cash") \
	_T(" WHERE fac_org_id='FM' AND fac_user_id not in (select ss_code from sys_sel where ss_id='hms_user_kinhmat') %s ORDER BY fac_cash_id "), szWhere);
		}
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
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
			rs.GetValue(_T("fac_postedamt")),
			rs.GetValue(_T("fac_user_id")), 
			szInvoiceType, 
			szDesc,
			szLockDesc,
			rs.GetValue(_T("fac_reason")),
			szLocked,
			rs.GetValue(_T("fac_approvedby")),
			rs.GetValue(_T("fac_approveddate")),
			rs.GetValue(_T("fac_posted")),
			rs.GetValue(_T("fac_posteddate")),
			rs.GetValue(_T("FAC_CASHBOOK_ID")),
			
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

void CFMSummaryPaymentAndReceiptDialog::OnPrintPreviewSelect()
{
	OnPrint();
	
} 
void CFMSummaryPaymentAndReceiptDialog::OnPrintInvoiceSelect()
{
	
	
}
void CFMSummaryPaymentAndReceiptDialog::OnExportSelect()
{
	OnExportReceiptList();
	OnExportRefundList();
}

int CFMSummaryPaymentAndReceiptDialog::OnExportReceiptList()
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
int CFMSummaryPaymentAndReceiptDialog::OnAddFMSummaryPaymentAndReceiptDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

#include "HMSInvoiceDateSettingDialog.h"

void CFMSummaryPaymentAndReceiptDialog::OnCloseOutSelect()
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
	int ret = ShowMessageBox(_T("Bạn có muốn DataSummary lại trước khi khóa sổ để đảm bảo số liệu được cập nhật mới nhất?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	
	if (ret != IDNO)	
		return;


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
		szSQL.Format(_T("SELECT fac_cash_id, fac_invoicetype,fac_invoiceno FROM fa_cash WHERE fac_user_id='%s' and (fac_locked='N' or fac_locked is null) and fac_status='O' "), m_szClerkKey);
		rs.ExecSQL(szSQL);
		int res = 0;
		long nCashID;
		CString szReceiptNo = m_szReceiptNo;
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("fac_cash_id"), nCashID);
			rs.GetValue(_T("fac_invoicetype"), szInvoiceType);
			rs.GetValue(_T("fac_invoiceno"), m_szReceiptNo);

			szSQL.Format(_T("HMS_FEE_INVOICE_CLOSEBOOK(%ld, '%s', '', 0) "), nCashID, m_szClerkKey);

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
		m_szReceiptNo = szReceiptNo;
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
int CFMSummaryPaymentAndReceiptDialog::OnEditFMSummaryPaymentAndReceiptDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMSummaryPaymentAndReceiptDialog::OnDeleteFMSummaryPaymentAndReceiptDialog(){
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
 		OnCancelFMSummaryPaymentAndReceiptDialog();
 	}
	return 0;
}
int CFMSummaryPaymentAndReceiptDialog::OnSaveFMSummaryPaymentAndReceiptDialog(){
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
 		//OnFMSummaryPaymentAndReceiptDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMSummaryPaymentAndReceiptDialog::OnCancelFMSummaryPaymentAndReceiptDialog(){
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
int CFMSummaryPaymentAndReceiptDialog::OnFMSummaryPaymentAndReceiptDialogListLoadData(){
	return 0;
}

CString CFMSummaryPaymentAndReceiptDialog::GetReceiptQueryString(CString szFeeType)
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) 
		return 0;
	
	m_nCashID = str2long(m_wndList.GetItemText(nSel, 0));
	m_szCashBookID = m_wndList.GetItemText(nSel, 16);
	
	CString szSQL, szWhere, szWhere1;
	CString szStocks;
	CString szDrugCondition;

	szWhere.Empty();
	szStocks.Empty();
	
	szWhere.Format(_T(" and i.hfe_cash_id=%ld "), m_nCashID);
	if(!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hfe_staff='%s' "), m_szClerkKey);
	if (!szFeeType.IsEmpty())
		szWhere1.AppendFormat(_T(" AND fee_type = '%s'"), szFeeType);

	

	if (m_szCashBookID != _T("DV") && m_szCashBookID != _T("QR"))
	{
		szSQL.Format(_T(" SELECT *") \
					_T(" FROM") \
					_T(" (") \
					_T("  SELECT distinct i.hfe_invoiceno as invoiceno,") \
					_T("         hd_docno as docno,") \
					_T("		 hcr_recordno recordno,") \
					_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS pname,") \
					_T("         i.hfe_date as recvdate,") \
					_T("         i.hfe_deptid AS deptid,") \
					_T("         '' AS roomid,") \
					_T("         i.hfe_payment AS amount,") \
					_T("         (SELECT DISTINCT su_name FROM sys_user WHERE su_userid=i.hfe_staff) AS staff,") \
					_T("         i.hfe_class AS fclass, HFIB_ACCOUNTNO as ma_tham_chieu ") \
					_T("  FROM hms_patient") \
					_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T("  LEFT JOIN hms_fee_invoice i ON(hd_docno=hfe_docno)") \
					_T("  LEFT JOIN HMS_FEE_INVOICE_BANK ON(hfe_docno = HFIB_DOCNO AND HFE_INVOICENO=HFIB_INVOICENO)") \
					_T("  LEFT JOIN hms_clinical_record ON (hcr_docno = hd_docno)") \
					//_T("  WHERE i.hfe_payment >= 0 and i.hfe_refund <= 0 AND i.hfe_status = 'P'  %s") \//
					_T("  WHERE i.hfe_payment >= 0 AND (i.hfe_refund    <= 0 OR (i.hfe_refund>0 AND i.HFE_EXTINS_PAID>0)) AND i.hfe_status     = 'P'  %s") \
					_T(" ) Tbl") \
					_T(" ORDER BY fclass, recvdate, docno"),szWhere);
	}
	else if (m_szCashBookID == _T("QR"))
	{
				szSQL.Format(_T(" SELECT *") \
				_T(" FROM") \
				_T("   ( SELECT DISTINCT i.hfe_invoiceno AS invoiceno,") \
				_T("     hd_docno                        AS docno,") \
				_T("     hcr_recordno recordno,") \
				_T("     trim(hp_surname") \
				_T("     ||' '") \
				_T("     ||hp_midname") \
				_T("     ||' '") \
				_T("     ||hp_firstname) AS pname,") \
				_T("     i.hfe_date      AS recvdate,") \
				_T("     i.hfe_deptid    AS deptid,") \
				_T("     ''              AS roomid,") \
				_T("     i.hfe_payment   AS amount,") \
				_T("     (SELECT DISTINCT su_name FROM sys_user WHERE su_userid=i.hfe_staff") \
				_T("     )              AS staff,") \
				_T("     i.hfe_class    AS fclass,") \
				_T("     HFIB_ACCOUNTNO AS ma_tham_chieu") \
				_T("   FROM hms_patient") \
				_T("   LEFT JOIN hms_doc") \
				_T("   ON(hd_patientno=hp_patientno)") \
				_T("   LEFT JOIN hms_fee_invoice i") \
				_T("   ON(hd_docno=hfe_docno)") \
				_T("   LEFT JOIN HMS_FEE_INVOICE_BANK") \
				_T("   ON(hfe_docno     = HFIB_DOCNO") \
				_T("   AND HFE_INVOICENO=HFIB_INVOICENO)") \
				_T("   LEFT JOIN hms_clinical_record") \
				_T("   ON (hcr_docno        = hd_docno)") \
				_T("   WHERE i.hfe_payment >= 0") \
				_T("   AND (i.hfe_refund   <= 0") \
				_T("   OR (i.hfe_refund     >0") \
				_T("   AND i.HFE_EXTINS_PAID>0))") \
				_T("   AND i.hfe_status     = 'P' %s ") \
				_T("   UNION ALL") \
				_T("   SELECT DISTINCT i.hfe_invoiceno AS invoiceno,") \
				_T("     hd_docno                        AS docno,") \
				_T("     hcr_recordno recordno,") \
				_T("     trim(hp_surname") \
				_T("     ||' '") \
				_T("     ||hp_midname") \
				_T("     ||' '") \
				_T("     ||hp_firstname) AS pname,") \
				_T("     i.hfe_date      AS recvdate,") \
				_T("     i.hfe_deptid    AS deptid,") \
				_T("     ''              AS roomid,") \
				_T("     i.hfe_amount   AS amount,") \
				_T("     (SELECT DISTINCT su_name FROM sys_user WHERE su_userid=i.hfe_staff") \
				_T("     )              AS staff,") \
				_T("     i.hfe_class    AS fclass,") \
				_T("     NULL AS ma_tham_chieu") \
				_T("   FROM hms_patient") \
				_T("   LEFT JOIN hms_doc") \
				_T("   ON(hd_patientno=hp_patientno)") \
				_T("   LEFT JOIN hms_fee_deposit i") \
				_T("   ON(hd_docno=hfe_docno)") \
				_T("   LEFT JOIN hms_fee_invoice_mb") \
				_T("   ON(hfe_docno     = HFB_DOCNO") \
				_T("   AND HFE_INVOICENO=HFB_INVOICENO)") \
				_T("   LEFT JOIN hms_clinical_record") \
				_T("   ON (hcr_docno        = hd_docno)") \
				_T("   WHERE ") \
				_T("   i.hfe_status     IN ('P', 'R') %s ") \
				
				_T("   ) Tbl") \
				_T(" ORDER BY fclass,") \
				_T("   recvdate,") \
				_T("   docno"), szWhere, szWhere); 
	}
	else
		szSQL.Format(_T(" SELECT fee_type, ") \
					_T("        doc_no, ") \
					_T("        Get_patientname(doc_no) pname, ") \
					_T("        dept, ") \
					_T("        Round(SUM(pat_paid)) amount ") \
					_T(" FROM   (SELECT    CASE WHEN i.hfe_class = 'E' AND f.hfe_type = 'D' THEN 0 ") \
					_T("                   ELSE 1 ") \
					_T("                   END fee_type, ") \
					_T("				   i.hfe_invoiceno invoice_no,") \
					_T("                   i.hfe_docno doc_no, ") \
					_T("                   i.hfe_deptid dept, ") \
					_T("                   f.hfe_patpaid pat_paid ") \
					_T("         FROM      hms_fee_invoice i ") \
					_T("         LEFT JOIN hms_fee f ON ( i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno ) ") \
					_T("         WHERE     i.hfe_patpaid > 0 AND i.hfe_status IN ('P', 'R')") \
					_T("		 AND f.hfe_status <> 'C' AND i.hfe_class <> 'I' %s") \
					_T("		 UNION ALL") \
					_T("		 SELECT 1, i.hfe_invoiceno, i.hfe_docno, i.hfe_deptid, i.hfe_payment") \
					_T("		 FROM hms_fee_invoice i") \
					_T("		 WHERE i.hfe_payment >= 0 and i.hfe_refund <=0 AND i.hfe_class = 'I' AND i.hfe_status IN ('P', 'R') %s) ") \
					_T(" WHERE 1=1 %s") \
					_T(" GROUP  BY fee_type,doc_no,dept, invoice_no ") \
					_T(" ORDER  BY fee_type, invoice_no"), szWhere, szWhere, szWhere1);

	//MessageBox(szSQL);
	//QueryOpener(szSQL);

	return szSQL;
}

int CFMSummaryPaymentAndReceiptDialog::OnPrintSummaryReceipt()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	

	if (m_szCashBookID == _T("DV"))
		OnPrintSummaryReceipt_DV();
	else
		OnPrintSummaryReceipt_BH();
	return 0;
}

void CFMSummaryPaymentAndReceiptDialog::OnPrintSummaryReceipt_BH()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	CReport rpt;
	CRecord rs(&pMF->m_db), ors(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL, tmpStr, szSysDate, szTemp, szPosteddate, szpaymenttype;

	
	int nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0;

	m_nTotal = 0;

	szSQL.Format(_T("SELECT fac_invoiceno, to_char(fac_posteddate, 'YYYY-MM-DD') as posted_date, substr(FAC_CASHBOOK_ID,1,3) as payment_type FROM fa_cash WHERE fac_cash_id=%ld "), m_nCashID);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fac_invoiceno"), m_szReceiptNo);
		rs.GetValue(_T("posted_date"), szPosteddate);
		rs.GetValue(_T("payment_type"), szpaymenttype);
		//_msg(_T("%s"),szPosteddate);
	}

	szSQL.Format(_T("SELECT coalesce(sum(hfe_payment), 0) FROM hms_fee_invoice WHERE hfe_cash_id=%ld and hfe_staff='%s' and hfe_status='P' and hfe_payment > 0"), 
		m_nCashID, m_szClerkKey);
	rs.ExecSQL(szSQL);
	m_nTotal = rs.GetDoubleValue();

	szSQL.Format(_T("SELECT coalesce(sum(hfe_amount), 0) FROM hms_fee_deposit WHERE hfe_cash_id=%ld and hfe_staff='%s' and hfe_status IN ('P', 'R') "), 
		m_nCashID, m_szClerkKey);
	rs.ExecSQL(szSQL);
	m_nTotal += rs.GetDoubleValue();
	if(m_nTotal <= 0)
		return;

	if (!rpt.Init(_T("Reports/HMS/HF_PHIEUTHUC30BB.rpt"), false, false, 1))
		return;

	CReportSection *rptDetail;

	CString szFromDate, szToDate;
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status in('R','P') "), m_nCashID);
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
	tmpStr += _T(" \x111\x1ED3ng");
	rptDetail->SetValue(_T("SumInWord"), tmpStr);
	rptDetail->SetValue(_T("SumInWord1"), tmpStr);
	CDateTime dt;
	dt.ParseDateTime(m_szToDate);
	CDate date = dt.GetDate();
	szSysDate = date.GetDate();

	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));

	rptDetail->SetValue(_T("PrintDate"), tmpStr);
	

	tmpStr.Format(rptDetail->GetValue(_T("Posted_date")),
		          szPosteddate.Mid(8, 2), szPosteddate.Mid(5, 2), szPosteddate.Left(4));

	rptDetail->SetValue(_T("Posted_date"), tmpStr);

	
		if ((szpaymenttype) == _T("THE") || (szpaymenttype) == _T("CK-"))
		{
			rptDetail->SetValue(_T("thuquy"), _T("Thiếu Tá Nguyễn Thị Hải Yến"));		
		}
		else
			rptDetail->SetValue(_T("thuquy"), _T("Nguyễn Thị Anh Thư"));	

	rpt.PrintPreview();
}

void CFMSummaryPaymentAndReceiptDialog::OnPrintSummaryReceipt_DV(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rsm(&pMF->m_db), rs(&pMF->m_db);

	CString szSQL, tmpStr, szSysDate, szTemp, szOldType, szNewType, szPostedDate, szpaymenttype;

	
	int nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0;

	m_nTotal = 0;

	szSQL.Format(_T("SELECT fac_invoiceno, fac_posteddate as posted_date, substr(FAC_CASHBOOK_ID,1,3) as payment_type FROM fa_cash WHERE fac_cash_id=%ld "), m_nCashID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fac_invoiceno"), m_szReceiptNo);
		rs.GetValue(_T("posted_date"), szPostedDate);
		rs.GetValue(_T("payment_type"), szpaymenttype);
	}
	//_msg(_T("%s"),szpaymenttype);
	CReportSection *rptDetail;

	CString szFromDate, szToDate;
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status IN ('R', 'P') "), m_nCashID);
	CRecord rsd(&pMF->m_db);
	rsd.ExecSQL(szSQL);
	rsd.GetValue(_T("from_date"), szFromDate);
	rsd.GetValue(_T("to_date"), szToDate);
	szSQL.Format(_T("SELECT fee_category, sum(pat_paid) receipt_amount FROM ( ") \
				 _T(" SELECT case when i.hfe_class = 'E' AND f.hfe_type = 'D' then 0 else 1 end fee_category, ") \
				 _T("		 coalesce(f.hfe_patpaid, 0) pat_paid ") \
				 _T(" FROM hms_fee_invoice i") \
				 _T(" LEFT JOIN hms_fee f ON (i.hfe_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno)") \
				 _T(" WHERE i.hfe_cash_id=%ld and i.hfe_staff='%s' and i.hfe_status IN ('P', 'R') and i.hfe_patpaid > 0 ") \
				 _T(" AND f.hfe_category <> 'Y' AND f.hfe_status <> 'C' AND i.hfe_class <> 'I'") \
				 _T(" UNION ALL") \
				 _T(" SELECT 1, hfe_payment") \
				 _T(" FROM hms_fee_invoice") \
				 _T(" WHERE hfe_cash_id = %ld AND hfe_staff = '%s' AND hfe_status IN ('P', 'R') AND hfe_payment > 0 ") \
				 _T(" AND hfe_class = 'I'") \
				 _T(" UNION ALL ") \
				 _T(" SELECT 1, coalesce(sum(hfe_amount), 0) ") \
				 _T(" FROM hms_fee_deposit ") \
				 _T(" WHERE hfe_cash_id=%ld and hfe_staff='%s' and hfe_status IN ('P', 'R') ") \
				 _T(" HAVING coalesce(sum(hfe_amount), 0) > 0)") \
				 _T(" GROUP BY fee_category ORDER BY fee_category")
				 , m_nCashID, m_szClerkKey, m_nCashID, m_szClerkKey, m_nCashID, m_szClerkKey);
	rsm.ExecSQL(szSQL);
	while (!rsm.IsEOF())
	{
		rsm.GetValue(_T("fee_category"), szNewType);
		if (!rpt.Init(_T("Reports/HMS/HF_PHIEUTHUC30BB.rpt"), false, false, 1))
			return;

		rptDetail = rpt.AddDetail();

		rptDetail->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
		rptDetail->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);

		tmpStr.Format(rptDetail->GetValue(_T("ReportDate")),
					CDateTime::Convert(szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
					CDateTime::Convert(szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

		rptDetail->SetValue(_T("ReportDate"), tmpStr);
		/*if (szNewType == _T("0"))
			tmpStr.Format(_T("%s.THUOC"), m_szReceiptNo);
		else
			tmpStr.Format(_T("%s.CLSTT"), m_szReceiptNo);
		rptDetail->SetValue(_T("ReceiptNo"), tmpStr);*/

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
		if (szNewType == _T("0"))
			rptDetail->SetValue(_T("reason"), _T("Thu ti\x1EC1n thu\x1ED1\x63"));
		else
			rptDetail->SetValue(_T("reason"), m_szReceiptReason);
		
		//nTotal += 0.5;
		//long double nTemp = floor(nTotal);
		rsm.GetValue(_T("receipt_amount"), nAmount);
		m_nTotal += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("TotalAmount"), tmpStr);

		szTemp.Format(_T("%.0Lf"), nAmount);
		MoneyToString(szTemp, tmpStr);
		tmpStr += _T(" \x111\x1ED3ng");
		rptDetail->SetValue(_T("SumInWord"), tmpStr);
		rptDetail->SetValue(_T("SumInWord1"), tmpStr);
		CDateTime dt;
		dt.ParseDateTime(m_szToDate);
		CDate date = dt.GetDate();
		szSysDate = date.GetDate();

		tmpStr.Format(rptDetail->GetValue(_T("ReportDate")),
					szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));

		rptDetail->SetValue(_T("PrintDate"), tmpStr);
		tmpStr.Format(rptDetail->GetValue(_T("Posted_date")),
			szPostedDate.Mid(8, 2), szPostedDate.Mid(5, 2), szPostedDate.Left(4));

		rptDetail->SetValue(_T("Posted_date"), tmpStr);
		//_msg(_T("%s"),szpaymenttype);

		if ((szpaymenttype) == _T("THE") || (szpaymenttype) == _T("CK-"))
		{
			rptDetail->SetValue(_T("thuquy"), _T("Thiếu Tá Nguyễn Thị Hải Yến"));		
		}
		else
			rptDetail->SetValue(_T("thuquy"), _T("Nguyễn Thị Anh Thư"));		

		rpt.PrintPreview();
		rsm.MoveNext();
	}

}


int CFMSummaryPaymentAndReceiptDialog::OnPrintReceiptList()
{
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if (m_szCashBookID == _T("DV"))
	{

		OnPrintReceiptList_DV();
	}
	else
	{
		OnPrintReceiptList_BH();
	}
	return 0;
}

void CFMSummaryPaymentAndReceiptDialog::OnPrintReceiptList_BH()
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
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANNOPTIEN.rpt"), false, false, 1))
		return;

	CString szFromDate, szToDate;
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status='P' "), m_nCashID);

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
	CString szGroup[] = {_T("I"), _T("II"), _T("III")};
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

		rs.GetValue(_T("recordno"), tmpStr);
		rptDetail->SetValue(_T("3.1"), tmpStr);

		if (!rs.GetValue(_T("roomid")).IsEmpty())
			tmpStr.Format(_T("%s - %s"), rs.GetValue(_T("deptid")), rs.GetValue(_T("roomid")));
		else
			tmpStr.Format(_T("%s"), rs.GetValue(_T("deptid")));

		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("amount"), nAmount);
		nGroupTotal += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		rs.GetValue(_T("ma_tham_chieu"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);


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
	return;
} 

void CFMSummaryPaymentAndReceiptDialog::OnPrintReceiptList_DV()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db), rsm(&pMF->m_db);
	CReport rpt;
	CReportSection *rptHeader = NULL, *rptDetail = NULL;
	CString szSQL, szWhere, szFromDate, szToDate, tmpStr, szOldType, szNewType, szSysDate, szMoney, szFeeCategory;
	CString szGroup[] = {_T("I"), _T("II"), _T("III")};
	int nIdx = 1, nIndex = 0;
	double nAmt = 0, nGrpAmt = 0, nTtlAmt = 0;
	if (!rpt.Init(_T("Reports\\HMS\\HF_DANHSACHBENHNHANNOPTIENCHUAQUAQUY.RPT")))
		return;

	//Chuoi Tu ngay -> ngay
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status='P' "), m_nCashID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("from_date"), szFromDate);
	rs.GetValue(_T("to_date"), szToDate);

	//Fee Types
	szSQL.Format(_T(" SELECT distinct case when i.hfe_class = 'E' AND f.hfe_type = 'D' then 0 else 1 end fee_category FROM hms_fee_invoice i ") \
				 _T(" LEFT JOIN hms_fee f ON (i.hfe_invoiceno = f.hfe_invoiceno AND i.hfe_docno = f.hfe_docno) ") \
				 _T(" WHERE i.hfe_cash_id = %ld AND i.hfe_payment > 0 AND i.hfe_status = 'P' ") \
				 _T(" AND f.hfe_category <> 'Y' AND f.hfe_status <> 'C' ORDER BY fee_category"), m_nCashID);
	rsm.ExecSQL(szSQL);



	while (!rsm.IsEOF())
	{
		nGrpAmt = 0;
		//Print by fee type
		rsm.GetValue(_T("fee_category"), szFeeCategory);
		szSQL = GetReceiptQueryString(szFeeCategory);
		rs.ExecSQL(szSQL);
		if (!rpt.Init(_T("Reports\\HMS\\HF_DANHSACHBENHNHANNOPTIEN.RPT")))
			return;
		rptHeader = rpt.GetReportHeader();
		if (rptHeader)
		{
			rptHeader->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
			rptHeader->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
			tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
					CDateTime::Convert(szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
					CDateTime::Convert(szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
			rptHeader->SetValue(_T("ReportDate"), tmpStr);
			if (szFeeCategory == _T("0"))
				tmpStr.Format(_T("%s.THUOC"), m_szReceiptNo);
			else
				tmpStr.Format(_T("%s.CLSTT"), m_szReceiptNo);
			rptHeader->SetValue(_T("ReceiptNo"), tmpStr);
		}
		while (!rs.IsEOF())
		{
			rs.GetValue(_T("fee_type"), szNewType);
			if (szNewType != szOldType)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
				if (szNewType == _T("0"))
					tmpStr = _T("Ph\xED thu\x1ED1\x63");
				else if (szNewType == _T("1"))
					tmpStr = _T("Ph\xED kh\xE1m, \x43LS, TT");
				rptDetail->SetValue(_T("GroupName"), tmpStr);
				szOldType = szNewType;
			}
			
			
			rptDetail = rpt.AddDetail();
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("pname")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("dept")));
			rs.GetValue(_T("amount"), nAmt);
			nGrpAmt += nAmt;
			FormatCurrency(nAmt, tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("ma_tham_chieu"), tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			

			rs.MoveNext();
		}
		rptHeader = rpt.GetReportFooter();
		if (rptHeader)
		{
			if (nGrpAmt > 0)
			{
				rptHeader->SetValue(_T("TotalAmount"), _T("T\x1ED5ng \x63\x1ED9ng"));
				FormatCurrency(nGrpAmt, tmpStr);
				rptHeader->SetValue(_T("SumTotalAmount"), tmpStr);
			}
			tmpStr.Format(_T("%f"), nGrpAmt);
			MoneyToString(tmpStr, szMoney);
			szMoney += _T(" \x111\x1ED3ng.");
			rptHeader->SetValue(_T("SumInWord"), szMoney);
			szSysDate = pMF->GetSysDate();
			tmpStr.Format(rptHeader->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));

			rptHeader->SetValue(_T("PrintDate"), tmpStr);
			if (!m_szClerkKey.IsEmpty())
				rptHeader->SetValue(_T("ReceiverBy"), m_wndClerk.GetCurrent(1));
		}
		rpt.PrintPreview();
		rsm.MoveNext();
	}
}

int CFMSummaryPaymentAndReceiptDialog::OnListPrint(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	m_nCashID = str2long(m_wndList.GetItemText(nSel, 0));
	CString szType = m_wndList.GetItemText(nSel, 7);
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

int CFMSummaryPaymentAndReceiptDialog::OnListPrintDetailItem(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	CPrintForms printer;
	m_nCashID = str2long(m_wndList.GetItemText(nSel, 0));
	_tprintf(_T("Type: %s|Cash ID: %ld"), m_szInvoiceType, m_nCashID);
	if (m_szInvoiceType == _T("R"))
		printer.FM_PrintCollectDetailbyItem_(m_nCashID);
	else
	{
		printer.FM_PrintSpendDetailbyItem(m_nCashID);
		printer.FM_PrintCollectDetailbyItem_(m_nCashID);
	}
	return 0;
}


int CFMSummaryPaymentAndReceiptDialog::OnPrintRefundList()
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
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status='P' "), m_nCashID);

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


int CFMSummaryPaymentAndReceiptDialog::OnExportRefundList()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	UpdateData(TRUE);
	pMF->BeginWaitCursor();

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

	pMF->EndWaitCursor();
	xls.Save(_T("Exports\\DSBNHoanUng.xls"));
	return 0;
}


int CFMSummaryPaymentAndReceiptDialog::OnExportDepositList()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	UpdateData(TRUE);
	pMF->BeginWaitCursor();

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

	pMF->EndWaitCursor();
	xls.Save(_T("Exports\\DSBNTamGui.xls"));
	return 0;
}

int CFMSummaryPaymentAndReceiptDialog::OnPrintSummaryRefund(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db), ors(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL, tmpStr, szSysDate, szTemp, szPosteddate, szpaymenttype;

	
	int nIdx = 0;
	double nAmount = 0;
	long double nTotal = 0;

	m_nTotal = 0;

	szSQL.Format(_T("SELECT fac_invoiceno, to_char(fac_posteddate,'YYYY-MM-DD') as posted_date, substr(FAC_CASHBOOK_ID,1,3) as payment_type FROM fa_cash WHERE fac_cash_id=%ld "), m_nCashID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fac_invoiceno"), m_szReceiptNo);
		rs.GetValue(_T("posted_date"), szPosteddate);
		rs.GetValue(_T("payment_type"), szpaymenttype);
	}

	m_szRefundNo = m_szReceiptNo;

	szSQL.Format(_T("SELECT coalesce(sum(hfe_amount), 0) FROM hms_fee_refund WHERE hfe_cash_id=%ld and hfe_staff='%s' and hfe_status='P' "), 
		m_nCashID, m_szClerkKey);
	rs.ExecSQL(szSQL);
	m_nTotal = rs.GetDoubleValue();
	if(m_nTotal <= 0)
		return 0;

	if (!rpt.Init(_T("Reports/HMS/HF_PHIEUCHI30BB.rpt"), false, false, 1))
		return 0;

	CReportSection *rptDetail;


	CString szFromDate, szToDate;
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status in('R','P') "), m_nCashID);
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
	tmpStr += _T(" \x111\x1ED3ng");
	rptDetail->SetValue(_T("SumInWord"), tmpStr);
	rptDetail->SetValue(_T("SumInWord1"), tmpStr);
	CDateTime dt;
	dt.ParseDateTime(m_szToDate);
	CDate date = dt.GetDate();
	szSysDate = date.GetDate();

	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));

	rptDetail->SetValue(_T("PrintDate"), tmpStr);
	tmpStr.Format(rptDetail->GetValue(_T("Posted_date")),
		          szPosteddate.Mid(8, 2), szPosteddate.Mid(5, 2), szPosteddate.Left(4));

	rptDetail->SetValue(_T("Posted_date"), tmpStr);

	
		if ((szpaymenttype) == _T("THE") || (szpaymenttype) == _T("CK-"))
		{
			rptDetail->SetValue(_T("thuquy"), _T("Thiếu Tá Nguyễn Thị Hải Yến"));		
		}
		else
			rptDetail->SetValue(_T("thuquy"), _T("Nguyễn Thị Anh Thư"));	


	rpt.PrintPreview();

	return 1;

}

int CFMSummaryPaymentAndReceiptDialog::OnPrintDepositList(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	//_msg(_T("Hi"));
	CReport rpt;
	CString szSQL, tmpStr, szSysDate;
	CString szObject, szTemp;
	CString szRecord;

	CRecord rs(&pMF->m_db);
	double nCost = 0;
	long double nTotal[8];

	szSQL = GetDepositQueryString();

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

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
	szSQL.Format(_T("select coalesce(min(hfe_date), sysdate) as from_date, coalesce(max(hfe_date), sysdate) as to_date from hms_fee_invoice_view2 where hfe_cash_id =%ld and hfe_status='P' "), m_nCashID);

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

		rs.GetValue(_T("ma_tham_chieu"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

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



CString CFMSummaryPaymentAndReceiptDialog::GetDepositQueryString()
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
				_T("		 HFIB_ACCOUNTNO as ma_tham_chieu, ") \
				_T("        case when ho_type not in('S') then coalesce(sum(hfe_amount), 0) else 0 end as insamount,") \
				_T("        case when ho_type in('S') then coalesce(sum(hfe_amount), 0) else 0 end as servamount,") \
				_T("        coalesce(sum(hfe_amount), 0) as amount") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_clinical_record on(hcr_docno=hd_docno)") \
				_T(" left join hms_fee_deposit on(hfe_docno=hd_docno)") \
				_T(" LEFT JOIN HMS_FEE_INVOICE_BANK ON(hfe_docno = HFIB_DOCNO AND HFE_INVOICENO=HFIB_INVOICENO)") \
				_T(" left join hms_object on(ho_id=hfe_objectid)") \
				_T(" where hfe_status IN ('P', 'R') and hd_object is not null and hd_object<>'0' %s") \
				_T(" group by hfe_invoiceno, HFIB_INVOICENO, HFIB_ACCOUNTNO, hd_docno, hcr_recordno, hp_surname, hp_midname, hp_firstname, hfe_deptid, ho_type") \
				_T(" order by hfe_invoiceno"),
				szWhere);

	return szSQL;
}



CString CFMSummaryPaymentAndReceiptDialog::GetRefundQueryString()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere;
	CString szObject;
	szWhere.Empty();
	
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfe_staff='%s' "), m_szClerkKey);

	szWhere.AppendFormat(_T(" and hfe_cash_id=%ld "), m_nCashID);
	

	szSQL.Format(_T(" select hfe_date, hfe_docno as docno, ") \
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
				_T(" group by hfe_invoiceno, hfe_docno, hcr_recordno, hp_surname, hp_midname, hp_firstname, hfe_deptid, ho_type, hcr_admitdate, hfe_date") \
				_T(" order by pname"), szWhere);

	return szSQL;
}


void CFMSummaryPaymentAndReceiptDialog::OnDataSummarySelect()
{
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
	CString szPosted = _T("N");
	if(m_bPostedState)
		szPosted = _T("Y");

	if(dlg.DoModal() == IDOK)
	{
		szSQL.Format(_T("HMS_FEE_INVOICE_DATASUMMARY('%s', '%s', '%s', '%s') "), m_szClerkKey, dlg.m_szReceiptReason, dlg.m_szRefundReason, szPosted);
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
			OnListLoadData();
		}
	}	
} 


void CFMSummaryPaymentAndReceiptDialog::OnPrint(){
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
		szSQL.Format(_T("SELECT fac_cash_id, fac_invoiceno, fac_reason, fac_locked ") \
			_T("FROM fa_cash WHERE fac_org_id='FM' and fac_user_id='%s' and (fac_locked='N' or fac_locked is null) and fac_invoicetype='R' "), m_szClerkKey);
		rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("fac_cash_id"), m_nCashID);
			rs.GetValue(_T("fac_invoiceno"), m_szReceiptNo);
			rs.GetValue(_T("fac_reason"), m_szReceiptReason);
			rs.GetValue(_T("fac_locked"), szLocked);
			OnPrintReceiptList();
			OnPrintDepositList();
			if( szLocked == _T("Y"))
				OnPrintSummaryReceipt();
			rs.MoveNext();
		}
		szSQL.Format(_T("SELECT fac_cash_id, fac_invoiceno, fac_reason, fac_locked ") \
			_T("FROM fa_cash WHERE fac_org_id='FM' and fac_user_id='%s' and (fac_locked='N' or fac_locked is null) and fac_invoicetype='P' "), m_szClerkKey);
		rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("fac_cash_id"), m_nCashID);
			rs.GetValue(_T("fac_invoiceno"), m_szRefundNo);
			rs.GetValue(_T("fac_reason"), m_szRefundReason);
			rs.GetValue(_T("fac_locked"), szLocked);
			OnPrintRefundList();
			if(szLocked == _T("Y"))
				OnPrintSummaryRefund();
			rs.MoveNext();
		}
	
	}
}

void CFMSummaryPaymentAndReceiptDialog::OnRefreshSelect(){
	OnListLoadData();
}

int CFMSummaryPaymentAndReceiptDialog::OnListPrintMultiCash(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPaymentStr, szReceiptStr, szCashStr;
	CString szInsReceiptStr, szInsPaymentStr;
	CString szPolReceiptStr, szPolPaymentStr;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szCashStr.IsEmpty())
				szCashStr += _T(", ");
			szCashStr += m_wndList.GetItemText(i, 0);
		}
	}

	if (szCashStr.IsEmpty())
	{
		_debug(_T("No cash selected!"));
		return -1;
	}

	szSQL.Format(_T("SELECT fac_cash_id, substr(fac_cashbook_id, 1, 2) as cashbook_id, fac_invoicetype ") \
				 _T("FROM fa_cash WHERE fac_cash_id IN (%s)"), szCashStr);
	rs.ExecSQL(szSQL);

	szReceiptStr.Empty();
	szPaymentStr.Empty();

	szInsReceiptStr.Empty();
	szInsPaymentStr.Empty();

	szPolReceiptStr.Empty();
	szPolPaymentStr.Empty();
	long nCashID = 0;
	CString szInvoiceType;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("cashbook_id"), tmpStr);
		rs.GetValue(_T("fac_cash_id"),nCashID);
		rs.GetValue(_T("fac_invoicetype"), szInvoiceType);
		if(tmpStr == _T("DV"))
		{
			if(szInvoiceType == _T("R"))
			{
				if(!szReceiptStr.IsEmpty())
					szReceiptStr.AppendFormat(_T(","));
				szReceiptStr.AppendFormat(_T("%ld"), nCashID);
			}

			if(szInvoiceType == _T("P"))
			{
				if(!szPaymentStr.IsEmpty())
					szPaymentStr.AppendFormat(_T(","));
				szPaymentStr.AppendFormat(_T("%ld"), nCashID);
			}

		}
		if(tmpStr == _T("BH"))
		{
			if(szInvoiceType == _T("R"))
			{
				if(!szInsReceiptStr.IsEmpty())
					szInsReceiptStr.AppendFormat(_T(","));
				szInsReceiptStr.AppendFormat(_T("%ld"), nCashID);
			}

			if(szInvoiceType == _T("P"))
			{
				if(!szInsPaymentStr.IsEmpty())
					szInsPaymentStr.AppendFormat(_T(","));
				szInsPaymentStr.AppendFormat(_T("%ld"), nCashID);
			}

		}
		if(tmpStr == _T("QU"))
		{
			if(szInvoiceType == _T("R"))
			{
				if(!szPolReceiptStr.IsEmpty())
					szPolReceiptStr.AppendFormat(_T(","));
				szPolReceiptStr.AppendFormat(_T("%ld"), nCashID);
			}

			if(szInvoiceType == _T("P"))
			{
				if(!szPolPaymentStr.IsEmpty())
					szPolPaymentStr.AppendFormat(_T(","));
				szPolPaymentStr.AppendFormat(_T("%ld"), nCashID);
			}

		}
		rs.MoveNext();
	}

	CPrintForms printer;
	//In phieu thu chi dich vu
	if (!szReceiptStr.IsEmpty())
			printer.FM_OnPrintServiceIncomeList2(szReceiptStr);
	if (!szPaymentStr.IsEmpty())
			printer.FM_OnPrintServiceOutlayList2(szPaymentStr);
	
	//In phieu thu chi BH
	if (!szInsReceiptStr.IsEmpty())
		printer.FM_OnPrintInsuranceIncomeList2(szInsReceiptStr);
	if (!szInsPaymentStr.IsEmpty())
		printer.FM_OnPrintInsuranceOutlayList2(szInsPaymentStr);
	
	//In phieu thu chi quan
	if (!szPolReceiptStr.IsEmpty())
		printer.FM_OnPrintPolicyIncomeList2(szPolReceiptStr);
	else
		_tprintf(_T("\nPolReceiptStr  empty"));
	if (!szPolPaymentStr.IsEmpty())
		printer.FM_OnPrintPolicyOutlayList2(szPolPaymentStr);
	else
		_tprintf(_T("\nPolPaymentStr empty"));

	return 0;
}



void CFMSummaryPaymentAndReceiptDialog::OnPrintUnpostPatientList(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	CReport rpt;
	CString szSQL, tmpStr, szSysDate;
	CString szObject, szTemp;

	CRecord rs(&pMF->m_db);
	double nCost = 0;

	szSQL.Format(_T(" SELECT hfe_invoiceno as invoiceno,") \
_T("   TO_CHAR(hfe_date,'DD/MM/YYYY') as invoicedate,") \
_T("   hfe_docno AS docno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   hfe_deptid as deptid,") \
_T("   CASE") \
_T("     WHEN hfe_invoicetype ='I'") \
_T("     THEN hfe_payment") \
_T("     ELSE 0") \
_T("   END AS amount,") \
_T("   CASE") \
_T("     WHEN hfe_invoicetype ='D'") \
_T("     THEN hfe_payment") \
_T("     ELSE 0") \
_T("   END AS deposit,") \
_T("   CASE") \
_T("     WHEN hfe_invoicetype ='R'") \
_T("     THEN hfe_payment") \
_T("     ELSE 0") \
_T("   END AS refund,") \
_T("   hfe_invoicetype") \
_T(" FROM hms_fee_invoice_view2") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hfe_patientno  = hp_patientno)") \
_T(" WHERE hfe_cash_id =%ld ") \
_T(" AND hfe_posted   <> 'Y'") \
_T(" AND hfe_payment   > 0 "), m_nCashID);
	rs.ExecSQL(szSQL);


	if (rs.IsEOF())
	{
	//	ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANNOPTIENCHUAQUAQUY.RPT")))
		return;


	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);

	rpt.GetReportHeader()->SetValue(_T("PaymentNo"), m_szRefundNo);

	CReportSection *rptDetail;



	int nIndex = 1;
	double nTtlAmount=0, nTtlDeposit = 0, nTtlRefund = 0;

	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("invoiceno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("invoicedate"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("deptid"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("amount"), nCost);
		nTtlAmount += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("deposit"), nCost);
		nTtlDeposit += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("refund"), nCost);
		nTtlRefund += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);


		rs.MoveNext();
	}

	
	FormatCurrency(nTtlAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("GrandAmount"), tmpStr);
	
	FormatCurrency(nTtlDeposit, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("GrandDeposit"), tmpStr);

	FormatCurrency(nTtlRefund, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("GrandRefund"), tmpStr);

	szSysDate = pMF->GetSysDate();

	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), 
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();

}

int CFMSummaryPaymentAndReceiptDialog::OnExportPatientList()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	UpdateData(true);

	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0, ntotal=0;
	double nTotal[30], nGroupTotal[30];

	CString szSQL, tmpStr;
	CString szObject, szTemp;

	CRecord rs(&pMF->m_db);	

	szSQL.Format(_T(" select ") \
	_T(" iv.hfe_docno as docno, ") \
	_T(" GET_PATIENTNAME(iv.hfe_docno) as tenbenhnhan, ") \
	_T(" hp_workplace AS workplace, ") \
	_T(" fe.hfe_desc as danhmuc,") \
	_T(" fe.HFE_QUANTITY as soluong,") \
	_T(" fe.HFE_UNITPRICE dongia,") \
	_T(" fe.HFE_PATPAID as benhnhantra") \
	_T(" from hms_fee fe") \
	_T(" left join HMS_FEE_INVOICE iv ON (fe.hfe_docno = iv.hfe_docno AND fe.HFE_INVOICENO=iv.hfe_invoiceno)") \
	_T(" left join hms_patient ON (iv.hfe_patientno = hp_patientno)") \
	_T(" where iv.HFE_CASH_ID=%ld AND fe.hfe_status in ('P','R') and iv.hfe_status='P' and iv.hfe_payment>0 ") \
	_T(" and fe.HFE_CATEGORY <> 'Y'") \
	_T(" ORDER BY iv.hfe_docno, fe.hfe_desc"), m_nCashID);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\DANHSACHBENHNHAN_CHITIET.xls"))) AfxMessageBox(_T("Chưa có Files trong thư mục Exports\Template"));

	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("tenbenhnhan"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("workplace"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);	
		
		rs.GetValue(_T("danhmuc"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("soluong"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("dongia"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);		

		rs.GetValue(_T("benhnhantra"), nTemp);
		ntotal += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);	
			
		nRow++;
		rs.MoveNext();
	}

	if (ntotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng Cộng"), FMT_TEXT, true);		
		xls.SetCellText(7, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHBENHNHAN_CHITIET2.xls"));
	return 0;
}
int CFMSummaryPaymentAndReceiptDialog::OnUpdateFACash()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szLocked;
	CRecord rs(&pMF->m_db);
	
	//ShowMessageBox(_T("Chức năng đang xây dựng!"));
	//return 0;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) 
		return 0;

	/*if(!pMF->CheckPermission(_T("15.11")))
	{
		ShowMessageBox(_T("Permission denied."));
		return 0;
	}*/
	m_nCashID = str2long(m_wndList.GetItemText(nSel, 0));
	m_szCashBookID = m_wndList.GetItemText(nSel, 16);
	szSQL.Format(_T("SELECT fac_locked FROM fa_cash WHERE fac_org_id='%s' and fac_cash_id=%ld "), pMF->GetModuleID(), m_nCashID);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;
	rs.GetValue(_T("fac_locked"), szLocked);

	if(szLocked != _T("Y"))
	{
		ShowMessageBox(_T("Phiếu chưa khóa sổ, không thao tác được!"));
		return 0;
	}
	CFMUpdateCashBookDialog dlg(this);
	dlg.m_nCashID = m_nCashID;
	dlg.m_szCashBookID = m_szCashBookID;

	if(dlg.DoModal() == IDOK){
		
		OnListLoadData();
		m_wndList.SetCurSel(nSel);
	}
	return 0;
}

int CFMSummaryPaymentAndReceiptDialog::OnPrintTotalByUser()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	CPrintForms printer;
	CString szNguoiThu;
	szNguoiThu = pMF->GetCurrentUser();

	printer.InVienPhiTienMat(szNguoiThu, _T("TM") ,m_szFromDate, m_szToDate);
	printer.InVienPhiTienMat(szNguoiThu, _T("ATM") ,m_szFromDate, m_szToDate);
	printer.InVienPhiTienMat(szNguoiThu, _T("CK") ,m_szFromDate, m_szToDate);

	return 0;
}