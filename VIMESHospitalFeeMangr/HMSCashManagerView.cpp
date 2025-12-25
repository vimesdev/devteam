#include "HMSCashManagerView.h"
#include "MainFrm.h"
#include "HMSCashPostDialog.h"

static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSCashManagerView*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCashManagerView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSCashManagerView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCashManagerView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnListDeleteItem();
}

static int _OnListApproveItemFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnPostInvoice();
}


static int _OnListUnPostItemFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnUnPostInvoice();
}

/*static void _OnSearchPatientInfoChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnSearchPatientInfoChange();
} */
/*static void _OnSearchPatientInfoSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnSearchPatientInfoSetfocus();} */ 
/*static void _OnSearchPatientInfoKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnSearchPatientInfoKillfocus();
} */
static int _OnSearchPatientInfoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView *)pWnd)->OnSearchPatientInfoCheckValue();
} 
static void _OnSearchPatientSelectFnc(CWnd *pWnd){
	CHMSCashManagerView *pVw = (CHMSCashManagerView *)pWnd;
	pVw->OnSearchPatientSelect();
} 
/*static void _OnTotalRecvAmountChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalRecvAmountChange();
} */
/*static void _OnTotalRecvAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalRecvAmountSetfocus();} */ 
/*static void _OnTotalRecvAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalRecvAmountKillfocus();
} */
static int _OnTotalRecvAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView *)pWnd)->OnTotalRecvAmountCheckValue();
} 
/*static void _OnTotalPayAmountChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalPayAmountChange();
} */
/*static void _OnTotalPayAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalPayAmountSetfocus();} */ 
/*static void _OnTotalPayAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalPayAmountKillfocus();
} */
static int _OnTotalPayAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView *)pWnd)->OnTotalPayAmountCheckValue();
} 
static int _OnAddHMSCashManagerViewFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnAddHMSCashManagerView();
} 
static int _OnEditHMSCashManagerViewFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnEditHMSCashManagerView();
} 
static int _OnDeleteHMSCashManagerViewFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnDeleteHMSCashManagerView();
} 
static int _OnSaveHMSCashManagerViewFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnSaveHMSCashManagerView();
} 
static int _OnCancelHMSCashManagerViewFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnCancelHMSCashManagerView();
} 

CHMSCashManagerView::CHMSCashManagerView(){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSCashManagerView::~CHMSCashManagerView(){
}
void CHMSCashManagerView::OnCreateComponents()
{
	
	/*m_wndTab.Create(this,5, 5, 960, 265); 
	m_wndPatientReceiptPaymentList.Create(this, _T("Patient List"), 5, 270, 960, 590);
	m_wndList.Create(this,10, 295, 955, 555); 
	m_wndSearchPatientInfoLabel.Create(this, _T("Search Patient"), 10, 560, 110, 585);
	m_wndSearchPatientInfo.Create(this,115, 560, 315, 585); 
	m_wndSearchPatient.Create(this, _T("@"), 320, 560, 345, 585);
	m_wndTotalRecvAmountLabel.Create(this, _T("Total Recv Amount"), 540, 560, 640, 585);
	m_wndTotalRecvAmount.Create(this,645, 560, 745, 585); 
	m_wndTotalPayAmountLabel.Create(this, _T("Total Pay Amount"), 750, 560, 850, 585);
	m_wndTotalPayAmount.Create(this,855, 560, 955, 585); */
	
	m_wndPatientReceiptPaymentList.Create(this, _T("Patient List"), 5, 329, 959, 585);
	m_wndTab.Create(this,5, 5, 960, 324); 
	m_wndList.Create(this,10, 350, 955, 555); 
	m_wndSearchPatientInfoLabel.Create(this, _T("Search Patient"), 10, 560, 110, 585);
	m_wndSearchPatientInfo.Create(this,115, 560, 315, 585); 
	m_wndSearchPatient.Create(this, _T("@"), 320, 560, 345, 585);
	m_wndTotalRecvAmountLabel.Create(this, _T("Total Recv Amount"), 540, 560, 640, 585);
	m_wndTotalRecvAmount.Create(this,645, 560, 745, 585); 
	m_wndTotalPayAmountLabel.Create(this, _T("Total Pay Amount"), 750, 560, 850, 585);
	m_wndTotalPayAmount.Create(this,855, 560, 955, 585); 

	//Bỏ chức năng nộp quỹ theo từng phiếu thu / chi nhỏ
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

	m_wndCashList.Create(&m_wndTab);
	m_wndTab.Add(_T("Cash Order List"), &m_wndCashList);
	m_wndCashList.m_wndCashManager = this;
	if(pMF->CheckPermission(_T("40.03")))
	{
		m_wndCashOrder.Create(&m_wndTab);
		m_wndTab.Add(_T("Receipt && Payment"), &m_wndCashOrder);
		m_wndCashOrder.m_wndCashManager = this;
	}
	
	
}
void CHMSCashManagerView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearchPatientInfo.SetLimitText(35);
	m_wndSearchPatientInfo.SetCheckValue(true);
	m_wndTotalRecvAmount.SetLimitText(16);
	m_wndTotalRecvAmount.SetCheckValue(true);
	m_wndTotalPayAmount.SetLimitText(16);
	m_wndTotalPayAmount.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Invoice No"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(1, _T("Posted Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(3, _T("Document No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(4, _T("Record No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Department"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("RECEIVABLE_AMOUNT"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(7, _T("PAYABLE_AMOUNT"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(8, _T("Invoice Type"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(9, _T("Staff"), CFMT_TEXT, 80);
//	m_wndList.SetSortHeader(false);

	
	m_wndTotalRecvAmount.SetCurrencyFormat(true);
	m_wndTotalPayAmount.SetReadOnly(true);
	m_wndTotalPayAmount.SetCurrencyFormat(true);


}
void CHMSCashManagerView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Approve"), _OnListApproveItemFnc);
	m_wndList.AddEvent(0, _T("-"),NULL);
//	m_wndList.AddEvent(2, _T("UnPost"), _OnListUnPostItemFnc);
	//m_wndSearchPatientInfo.SetEvent(WE_CHANGE, _OnSearchPatientInfoChangeFnc);
	//m_wndSearchPatientInfo.SetEvent(WE_SETFOCUS, _OnSearchPatientInfoSetfocusFnc);
	//m_wndSearchPatientInfo.SetEvent(WE_KILLFOCUS, _OnSearchPatientInfoKillfocusFnc);
	m_wndSearchPatientInfo.SetEvent(WE_CHECKVALUE, _OnSearchPatientInfoCheckValueFnc);
	m_wndSearchPatient.SetEvent(WE_CLICK, _OnSearchPatientSelectFnc);
	//m_wndTotalRecvAmount.SetEvent(WE_CHANGE, _OnTotalRecvAmountChangeFnc);
	//m_wndTotalRecvAmount.SetEvent(WE_SETFOCUS, _OnTotalRecvAmountSetfocusFnc);
	//m_wndTotalRecvAmount.SetEvent(WE_KILLFOCUS, _OnTotalRecvAmountKillfocusFnc);
	m_wndTotalRecvAmount.SetEvent(WE_CHECKVALUE, _OnTotalRecvAmountCheckValueFnc);
	//m_wndTotalPayAmount.SetEvent(WE_CHANGE, _OnTotalPayAmountChangeFnc);
	//m_wndTotalPayAmount.SetEvent(WE_SETFOCUS, _OnTotalPayAmountSetfocusFnc);
	//m_wndTotalPayAmount.SetEvent(WE_KILLFOCUS, _OnTotalPayAmountKillfocusFnc);
	m_wndTotalPayAmount.SetEvent(WE_CHECKVALUE, _OnTotalPayAmountCheckValueFnc);
	

	m_wndTotalRecvAmount.SetTextColor(RGB(0, 0, 255));
	m_wndTotalPayAmount.SetTextColor(RGB(255, 0, 0));


	m_wndTab.SetCurSel(0);

	m_wndTotalRecvAmount.EnableWindow(FALSE);
	m_wndTotalPayAmount.EnableWindow(FALSE);

}
void CHMSCashManagerView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearchPatientInfo.GetDlgCtrlID(), m_szSearchPatientInfo);
	DDX_Text(pDX, m_wndTotalRecvAmount.GetDlgCtrlID(), m_nTotalRecvAmount);
	DDX_Text(pDX, m_wndTotalPayAmount.GetDlgCtrlID(), m_nTotalPayAmount);

}
void CHMSCashManagerView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCashManagerView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCashManagerView::SetDefaultValues(){

	m_szSearchPatientInfo.Empty();
	m_nTotalRecvAmount=0;
	m_nTotalPayAmount=0;

}
int CHMSCashManagerView::SetMode(int nMode){
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
		m_wndTotalRecvAmount.EnableWindow(FALSE);
		m_wndTotalPayAmount.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSCashManagerView::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.DeleteAllItems();
	if(nNew == 0)
	{
		m_wndSearchPatientInfo.EnableWindow(TRUE);
		m_wndSearchPatientInfo.ShowWindow(SW_SHOW);
		m_wndSearchPatientInfoLabel.ShowWindow(SW_SHOW);
		m_wndSearchPatient.ShowWindow(SW_SHOW);
	}
	else
	{
		m_wndSearchPatientInfo.EnableWindow(FALSE);
		m_wndSearchPatientInfo.ShowWindow(SW_HIDE);
		m_wndSearchPatientInfoLabel.ShowWindow(SW_HIDE);
		m_wndSearchPatient.ShowWindow(SW_HIDE);

	}
} 
void CHMSCashManagerView::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	if(m_nCashID > 0)
		return;

	long nInvoiceNo;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	nInvoiceNo = str2long(m_wndList.GetItemText(nSel, 0));
	szSQL.Format(_T("SELECT hfe_posted FROM hms_fee_invoice_view2 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	rs.ExecSQL(szSQL);

	CString szPosted;
	rs.GetValue(_T("hfe_posted"), szPosted);
_tprintf(_T("\r\n%s"), szPosted);
	if(szPosted == _T("Y"))
	{
		ShowMessageBox(_T("INVOICENO_HAS_BEEN_POSTED"));
		return;
	}

	CHMSCashPostDialog dlg(this, nInvoiceNo);
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	m_wndList.SetFocus();

} 
void CHMSCashManagerView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCashManagerView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSCashManagerView::OnListLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szPosted;
	
	UpdateData(TRUE);
	szWhere.Empty();

	if(m_nCashID > 0)
	{
		if(!m_szSearchPatientInfo.IsEmpty())
		{
			szWhere.Format(_T(" and (lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) or TO_CHAR(hd_docno) like(chr(37)||'%s'||chr(37))) "), m_szSearchPatientInfo, m_szSearchPatientInfo);

		}
		if(m_szInvoiceType == _T("R"))
		{
			szWhere.AppendFormat(_T(" and hfe_invoicetype in('I','D') "));
		}
		else
		{
			szWhere.AppendFormat(_T(" and hfe_invoicetype in('R') "));

		}

		szSQL.Format(_T(" SELECT hfe_invoiceno as invoiceno, hfe_posteddate as posteddate, NVL(hfe_posted, 'N') as Posted, ") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname) AS pname,") \
	_T("   hfe_docno       AS docno,") \
	_T("   hfe_deptid      AS deptid,") \
	_T("   CASE") \
	_T("     WHEN hfe_class='I'") \
	_T("     THEN hcr_recordno") \
	_T("     ELSE CAST('' AS NVARCHAR2(15))") \
	_T("   END        AS recordno,") \
	_T("   hfe_payment AS amount") \
	_T(" FROM hms_fee_invoice_view2 ") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno = hfe_docno)") \
	_T(" LEFT JOIN hms_clinical_record") \
	_T(" ON(hcr_docno = hfe_docno)") \
	_T(" LEFT JOIN hms_patient") \
	_T(" ON(hp_patientno   = hd_patientno)") \
	_T(" WHERE hfe_cash_id = %ld and hfe_status in('P','R')   ") \
	_T(" %s ") \
	_T(" ORDER BY hfe_posteddate, pname"), m_nCashID, szWhere);

	_fmsg(_T("%s"), szSQL);
		m_wndList.BeginLoad(); 
		int nCount = 0;
		double nAmount;
		m_nTotalRecvAmount = 0;
		m_nTotalPayAmount = 0;
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			rs.GetValue(_T("amount"), nAmount);
			if(m_szInvoiceType == _T("R"))
				m_nTotalRecvAmount += nAmount;
			else
				m_nTotalPayAmount += nAmount;
			rs.GetValue(_T("Posted"), szPosted);

			int nItem = m_wndList.AddItems(
				rs.GetValue(_T("invoiceno")), 
				rs.GetValue(_T("posteddate")), 
				rs.GetValue(_T("pname")), 
				rs.GetValue(_T("docno")), 
				rs.GetValue(_T("RecordNo")), 
				rs.GetValue(_T("deptid")), 
				m_szInvoiceType == _T("R")?rs.GetValue(_T("Amount")):_T(""), 
				m_szInvoiceType != _T("R")?rs.GetValue(_T("Amount")):_T(""), 
				NULL);
			rs.MoveNext();

			if(szPosted == _T("N"))
			{
				m_wndList.SetSubItemBkColor(nItem, 2, RGB(244, 164, 96), FALSE);
				m_wndList.SetSubItemTextColor(nItem, 2, RGB(255, 255, 255), FALSE);
			}


		}
		m_wndList.EndLoad(); 
	}
	else
	{




		if(m_szPosted == _T("Y"))
		{
			szWhere.AppendFormat(_T(" and trunc(hfe_posteddate) between TO_DATE('%s', 'YYYY-MM-DD') and TO_DATE('%s','YYYY-MM-DD') "),
				 m_szFromDate, m_szToDate);
		}
		else
		{
			szWhere.AppendFormat(_T(" and trunc(hfe_date) between TO_DATE('%s', 'YYYY-MM-DD') and TO_DATE('%s','YYYY-MM-DD') "),
				m_szFromDate, m_szToDate);

		}

		if(!m_szSearchPatientInfo.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and (lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) or TO_CHAR(hfe_docno) like(chr(37)||'%s'||chr(37))) "), m_szSearchPatientInfo, m_szSearchPatientInfo);

		}



		if(m_nDocumentNo > 0)
		{
			szWhere.Format(_T(" and hfe_docno=%ld "), m_nDocumentNo);
		}

		if(m_nInvoiceNo > 0)
		{
			szWhere.Format(_T(" and hfe_invoiceno=%ld "), m_nInvoiceNo);
		}
		if(!m_szPatientName.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and (lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) ) "), m_szPatientName);
		}

		if(!m_szPosted.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and hfe_posted='%s' "), m_szPosted);
		}
		

		if(m_szPosted == _T("Y"))
		{
			szWhere.AppendFormat(_T(" and hfe_postedby='%s' "), pMF->GetCurrentUser());
		}
		else
		{
		//	szWhere.AppendFormat(_T(" and NVL(hfe_cash_id, 0) =0 "));

		}


		if(m_szInvoiceType == _T("R"))
		{
			szWhere.AppendFormat(_T(" and hfe_invoicetype in('I','D') "));
		}
		if (m_szInvoiceType == _T("P"))
		{ 
			szWhere.AppendFormat(_T(" and hfe_invoicetype in('R') "));
		}

		
		szSQL.Format(_T(" SELECT hfe_class, hfe_desc, hfe_invoiceno as invoiceno, hfe_posteddate as posteddate,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   hfe_docno as docno,") \
_T("   hcr_recordno AS recordno,") \
_T("   hfe_deptid as deptid,") \
_T("   hfe_payment as amount,") \
_T("   hfe_invoicetype as invoicetype, hfe_staff as staff") \
_T(" FROM hms_fee_invoice_view2") \
_T(" LEFT JOIN hms_clinical_record") \
_T(" ON(hcr_docno = hfe_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hfe_patientno    = hp_patientno)") \
_T(" WHERE hfe_invoicetype <> 'F' and hfe_status ='P' ") \
_T(" AND hfe_payment     > 0") \
_T(" %s ") \
_T(" ORDER BY pname") , szWhere);

		_tprintf(_T("%s"), szSQL);
		m_wndList.BeginLoad(); 
		int nCount = 0;
		double nAmount;
		m_nTotalRecvAmount = 0;
		m_nTotalPayAmount = 0;
		CString szInvoiceType;
		CString szInvoiceTypeDesc;
		int nItem;
		CString szPatientName;
		CString	szClass;
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			rs.GetValue(_T("invoicetype"), szInvoiceType);
			rs.GetValue(_T("amount"), nAmount);
			if(szInvoiceType == _T("I"))
			{
				szInvoiceTypeDesc.Format(_T("Phi\x1EBFu thu"));
				m_nTotalRecvAmount += nAmount;
			}
			else if(szInvoiceType == _T("D"))
			{
				szInvoiceTypeDesc.Format(_T("Phi\x1EBFu thu t\x1EA1m \x1EE9ng"));
				m_nTotalRecvAmount += nAmount;
			}
			else
			{
				szInvoiceTypeDesc.Format(_T("Phi\x1EBFu \x63hi"));
				m_nTotalPayAmount += nAmount;
			}
			
			
			rs.GetValue(_T("pname"), szPatientName);
			nItem = m_wndList.AddItems(
				rs.GetValue(_T("invoiceno")), 
				rs.GetValue(_T("posteddate")), 
				szPatientName, 
				rs.GetValue(_T("docno")), 
				rs.GetValue(_T("RecordNo")), 
				rs.GetValue(_T("deptid")), 
				szInvoiceType != _T("R")?rs.GetValue(_T("Amount")):_T(""), 
				szInvoiceType == _T("R")?rs.GetValue(_T("Amount")):_T(""), 
				szInvoiceTypeDesc,
				rs.GetValue(_T("staff")), 
				NULL);
			if(szInvoiceType == _T("R"))
			{
				m_wndList.SetSubItemBkColor(nItem, 0, RGB(255,128, 64), FALSE);
				m_wndList.SetSubItemTextColor(nItem, 0, RGB(255, 255, 255), FALSE);
			}
			rs.MoveNext();
		}
		m_wndList.EndLoad(); 


	}

	UpdateData(FALSE);
	return 0;

}

int CHMSCashManagerView::OnPostInvoice(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}

int CHMSCashManagerView::OnUnPostInvoice(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	if(m_nCashID > 0)
		return 0;

	long nInvoiceNo;
	CRecord rs(&pMF->m_db);
	CString szSQL;

	nInvoiceNo = str2long(m_wndList.GetItemText(nSel, 0));
	szSQL.Format(_T("SELECT hfe_posted FROM hms_fee_invoice_view2 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	rs.ExecSQL(szSQL);

	CString szPosted;
	rs.GetValue(_T("hfe_posted"), szPosted);
_tprintf(_T("\r\n%s"), szPosted);
	if(szPosted != _T("Y"))
	{
		ShowMessageBox(_T("Hóa đơn chưa được ghi sổ"));
		return 0;
	}

	int retMsg = ShowMessageBox(_T("Bạn có muốn hủy ghi sổ số hóa đơn đã chọn không?"), MB_YESNO);
	if(retMsg == IDNO)
		return 0;
	szSQL.Format(_T("HMS_FEE_INVOICE_UNPOST(%ld, %ld, '%s') "), m_nDocumentNo, nInvoiceNo, pMF->GetCurrentUser());
	int  ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không thể bỏ ghi sổ hóa đơn đã chọn"));
		return 0;
	}

	return 0;
}

/*void CHMSCashManagerView::OnSearchPatientInfoChange(){
	
} */
/*void CHMSCashManagerView::OnSearchPatientInfoSetfocus(){
	
} */
/*void CHMSCashManagerView::OnSearchPatientInfoKillfocus(){
	
} */
int CHMSCashManagerView::OnSearchPatientInfoCheckValue(){
	OnListLoadData();
	return 0;
} 
void CHMSCashManagerView::OnSearchPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();

	
} 
/*void CHMSCashManagerView::OnTotalRecvAmountChange(){
	
} */
/*void CHMSCashManagerView::OnTotalRecvAmountSetfocus(){
	
} */
/*void CHMSCashManagerView::OnTotalRecvAmountKillfocus(){
	
} */
int CHMSCashManagerView::OnTotalRecvAmountCheckValue(){
	return 0;
} 
/*void CHMSCashManagerView::OnTotalPayAmountChange(){
	
} */
/*void CHMSCashManagerView::OnTotalPayAmountSetfocus(){
	
} */
/*void CHMSCashManagerView::OnTotalPayAmountKillfocus(){
	
} */
int CHMSCashManagerView::OnTotalPayAmountCheckValue(){
	return 0;
} 
int CHMSCashManagerView::OnAddHMSCashManagerView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCashManagerView::OnEditHMSCashManagerView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCashManagerView::OnDeleteHMSCashManagerView(){
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
 		OnCancelHMSCashManagerView();
 	}
	return 0;
}
int CHMSCashManagerView::OnSaveHMSCashManagerView(){
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
 		//OnHMSCashManagerViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCashManagerView::OnCancelHMSCashManagerView(){
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
int CHMSCashManagerView::OnHMSCashManagerViewListLoadData(){
	return 0;
}


void CHMSCashManagerView::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	
}

