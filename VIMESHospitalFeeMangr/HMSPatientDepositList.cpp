#include "HMSPatientDepositList.h"
#include "MainFrm.h"
#include "HMSAdmissionDepositDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientDepositList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnDocumentNoCheckValue();
}
/*static void _OnNumberInwardChangeFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnNumberInwardChange();
} */
/*static void _OnNumberInwardSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnNumberInwardSetfocus();} */ 
/*static void _OnNumberInwardKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnNumberInwardKillfocus();
} */
static int _OnNumberInwardCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnNumberInwardCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientDepositList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList *)pWnd)->OnPatientNameCheckValue();
}
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSPatientDepositList *pVw = (CHMSPatientDepositList *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPatientDepositList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientDepositList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CHMSPatientDepositList*)pWnd)->OnListAddItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientDepositList*)pWnd)->OnListDeleteItem();
}

static int _OnListPrintItemFnc(CWnd *pWnd){
	 return ((CHMSPatientDepositList*)pWnd)->OnListPrintItem();
}

static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPatientDepositList *pVw = (CHMSPatientDepositList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPatientDepositList *pVw = (CHMSPatientDepositList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPatientDepositList *pVw = (CHMSPatientDepositList *)pWnd;
	pVw->OnPrintSelect();
}

static int _OnCreateRefundInvoiceFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList*)pWnd)->OnCreateRefundInvoice();
}

static int _OnPrintRefundFnc(CWnd *pWnd){
	return ((CHMSPatientDepositList*)pWnd)->OnPrintRefund();
}

CHMSPatientDepositList::CHMSPatientDepositList(){

	m_nDlgWidth = 1025;
	m_nDlgHeight = 610;
	SetDefaultValues();
}
CHMSPatientDepositList::~CHMSPatientDepositList(){
}
void CHMSPatientDepositList::OnCreateComponents()
{
	
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1015, 60);
	m_wndPatientInformation.Create(this, _T("Patient List"), 5, 65, 1015, 570);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 75, 55);
	m_wndFromDate.Create(this,80, 30, 165, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 170, 30, 235, 55);
	m_wndToDate.Create(this,240, 30, 325, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 330, 30, 400, 55);
	m_wndDepartment.Create(this,405, 30, 465, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 470, 30, 535, 55);
	m_wndDocumentNo.Create(this,540, 30, 630, 55); 
	m_wndNumberInwardLabel.Create(this, _T("Number Inward"), 635, 30, 725, 55);
	m_wndNumberInward.Create(this,730, 30, 800, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 805, 30, 890, 55);
	m_wndPatientName.Create(this,895, 30, 975, 55); 
	m_wndSearch.Create(this, _T("@"), 980, 30, 1005, 55);
	m_wndList.Create(this,10, 90, 1010, 565); 
	m_wndAdd.Create(this, _T("&Add"), 734, 575, 824, 600);
	m_wndDelete.Create(this, _T("&Delete"), 829, 575, 919, 600);
	m_wndPrint.Create(this, _T("&Print"), 924, 575, 1014, 600);

}
void CHMSPatientDepositList::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndPatientName.SetLimitText(35);
//	m_wndPatientName.SetCheckValue(true);
//	m_wndPatientName.SetNotEmpty(false);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetNotEmpty(false);

	m_wndNumberInward.SetLimitText(15);
	m_wndNumberInward.SetCheckValue(true);
	m_wndNumberInward.SetNotEmpty(false);
	m_wndNumberInward.ModifyStyle(0, ES_UPPERCASE);

	m_wndPatientName.SetLimitText(75);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetNotEmpty(false);

	m_wndSearch.ModifyStyle(WS_TABSTOP, 0);
//	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_CENTER, 70);
//	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndDepartment.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);

	m_wndDepartment.Format(3, 0, 10);

	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);	//InvoiceNo
	m_wndList.InsertColumn(1, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(2, _T("Receipt No"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(3, _T("Receipt Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(4, _T("Document No"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(5, _T("Number Inward"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(6, _T("Patient Name"), CFMT_TEXT, 160);
	m_wndList.InsertColumn(7, _T("Age"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(8, _T("Sex"), CFMT_TEXT, 45);
	m_wndList.InsertColumn(9, _T("Object"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(10, _T("Department"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(11, _T("In Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(12, _T("Amount"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(13, _T("Status"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(14, _T("Locked"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(15, _T("Refund"), CFMT_NUMBER, 0);
	m_wndList.GetHeaderControl()->SetItemHeight(2);


	m_szFromDate = m_szToDate = pMF->GetSysDate();
//	m_szFromDate = _T("2012/09/30");
//	m_szDepartmentKey = pMF->GetCurrentDepartmentID();

}
void CHMSPatientDepositList::OnSetWindowEvents()
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndNumberInward.SetEvent(WE_CHECKVALUE, _OnNumberInwardCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);

	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Patient Deposit"));
	m_wndList.AddEvent(1, _T("Create Deposit Receipt"), _OnListAddItemFnc, 0, _T('A'), VK_CONTROL);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Delete Deposit Receipt"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Print Deposit"), _OnListPrintItemFnc, 0, _T('P'), VK_CONTROL);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(4, _T("Create Refund Invoice"), _OnCreateRefundInvoiceFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(5, _T("Print Refund"), _OnPrintRefundFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndNumberInward, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndNumberInward.SetTextColor(RGB(0, 0, 255));

	SetMode(VM_VIEW);

}
void CHMSPatientDepositList::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndNumberInward.GetDlgCtrlID(), m_szNumberInward);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSPatientDepositList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientDepositList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientDepositList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nDocumentNo=0;
	m_szNumberInward.Empty();
	m_szPatientName.Empty();
}
int CHMSPatientDepositList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
			m_wndList.SetFocus();
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndAdd.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSPatientDepositList::OnFromDateChange(){
	
} */
/*void CHMSPatientDepositList::OnFromDateSetfocus(){
	
} */
/*void CHMSPatientDepositList::OnFromDateKillfocus(){
	
} */
int CHMSPatientDepositList::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPatientDepositList::OnToDateChange(){
	
} */
/*void CHMSPatientDepositList::OnToDateSetfocus(){
	
} */
/*void CHMSPatientDepositList::OnToDateKillfocus(){
	
} */
int CHMSPatientDepositList::OnToDateCheckValue(){
	return 0;
} 
void CHMSPatientDepositList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientDepositList::OnDepartmentSelendok(){
	 //OnListLoadData();
}
/*void CHMSPatientDepositList::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPatientDepositList::OnDepartmentKillfocus(){
	
}*/
long CHMSPatientDepositList::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	}

	szWhere.AppendFormat(_T(" AND sd_type ='DT' "));
	
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_dept WHERE 1=1 %s ORDER BY sd_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), 
			rs.GetValue(_T("sd_type")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPatientDepositList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientDepositList::OnDocumentNoChange(){
	
} */
/*void CHMSPatientDepositList::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientDepositList::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientDepositList::OnDocumentNoCheckValue()
{
	if(m_wndDocumentNo.GetWindowTextLength() == 0)
	{
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	OnListLoadData();
	return 1;
}
/*void CHMSPatientDepositList::OnNumberInwardChange(){
	
} */
/*void CHMSPatientDepositList::OnNumberInwardSetfocus(){
	
} */
/*void CHMSPatientDepositList::OnNumberInwardKillfocus(){
	
} */
int CHMSPatientDepositList::OnNumberInwardCheckValue()
{
	if(m_wndDocumentNo.GetWindowTextLength() == 0)
	{
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	OnListLoadData();
	return 1;
} 
/*void CHMSPatientDepositList::OnPatientNameChange(){
	
} */
/*void CHMSPatientDepositList::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientDepositList::OnPatientNameKillfocus(){
	
} */
int CHMSPatientDepositList::OnPatientNameCheckValue()
{
	if(m_wndDocumentNo.GetWindowTextLength() == 0)
	{
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	OnListLoadData();
	return 1;
} 
void CHMSPatientDepositList::OnSearchSelect()
{
	OnListLoadData();
}
void CHMSPatientDepositList::OnListDblClick()
{
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;

	CString szStatus;
	CHMSAdmissionDepositDialog dlg(this, VM_VIEW);
	szStatus = m_wndList.GetItemText(nSel, 13);
	long nInvoiceNo = str2long(m_wndList.GetItemText(nSel, 0));

	if (szStatus == _T("R"))
		dlg.m_bRefund = true;
	else
		dlg.m_bRefund = false;

	dlg.m_nInvoiceNo = nInvoiceNo;

	if (dlg.DoModal() == IDOK)
	{
	}
} 
void CHMSPatientDepositList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

int CHMSPatientDepositList::OnListAddItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddSelect();
	 return 0;
}
int CHMSPatientDepositList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSelect();
	 return 0;
}
int CHMSPatientDepositList::OnListPrintItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrintSelect();
	 return 0;
} 
long CHMSPatientDepositList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szObjects;
	CString szTemp;
	UpdateData(true);
	
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	
	if (!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and d.hfe_deptid='%s' "), m_szDepartmentKey);
	}

	
	szWhere.AppendFormat(_T(" and d.hfe_staff='%s' "), pMF->GetCurrentUser());
	szWhere.AppendFormat(_T(" and trunc_date(d.hfe_date) BETWEEN CAST_STRING2DATE('%s') AND CAST_STRING2DATE('%s')  "), m_szFromDate, m_szToDate);
	
	if (m_nDocumentNo > 0)
	{
		szWhere.Format(_T(" and d.hfe_docno=%ld "), m_nDocumentNo);
	}

	if (!m_szNumberInward.IsEmpty())
	{
		szWhere.Format(_T(" and hcr_recordno='%s' "), m_szNumberInward);
	}

	szSQL.Format(_T(" SELECT d.hfe_invoiceno as invoiceno, d.hfe_receiptno as receiptno,") \
				_T("   d.hfe_date as receiptdate,") \
				_T("   hd_docno AS docno,") \
				_T(" hcr_recordno as numinward, ") \
				_T("   trim(hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname)                               AS patientname,") \
				_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
				_T("   hms_getsex(hp_sex)                            AS sex,") \
				_T("   hms_getobjectname(d.hfe_objectid)                  AS objectname,") \
				_T("   d.hfe_deptid                                    AS deptid,") \
				_T("   trunc_date(hd_admitdate)                           AS admitdate, ") \
				_T(" d.hfe_amount as amount, ") \
				_T(" d.hfe_status as status, ") \
				_T(" d.hfe_locked as flocked, ") \
				_T(" r.hfe_invoiceno as refinvoice ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_fee_deposit d") \
				_T(" ON (d.hfe_docno       =hd_docno)") \
				_T(" LEFT JOIN hms_fee_refund r ON(r.hfe_refidx=d.hfe_invoiceno)") \
				_T(" WHERE d.hfe_status<>'C' ") \
				_T(" %s ") \
				_T(" ORDER BY d.hfe_receiptno,") \
				_T("   patientname "), szWhere);

	_fmsg(_T("%s"), szSQL);

	//_msg(_T("%s"), szSQL);
	int nIndex=1;

	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	nCount = rs.ExecSQL(szSQL);

	while (!rs.IsEOF())
	{ 
		rs.GetValue(_T("patientname"), tmpStr);

		if (!m_szPatientName.IsEmpty())
		{
			CString szPatientName;
			
			StringLower(tmpStr, szPatientName);

			SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
			GetShortName(szPatientName, szShortName);

			if (szShortName != m_szPatientName)
			{
				if (!szFirstName.IsEmpty() && szFirstName != szFirstName2)
				{
					rs.MoveNext();
					continue;
				}
			}
				
			if (!szSurName.IsEmpty() && szSurName != szSurName2)
			{
				rs.MoveNext();
				continue;
			}

			if (!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1)
			{
				rs.MoveNext();
				continue;
			}
			
		}

		tmpStr.Format(_T("%d"), nIndex++);
		int nItem = m_wndList.AddItems
		(
			rs.GetValue(_T("invoiceno")),
			tmpStr,
			rs.GetValue(_T("receiptno")),
			rs.GetValue(_T("receiptdate")),
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("numinward")),
			rs.GetValue(_T("patientname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("objectname")), 
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("admitdate")), 
			rs.GetValue(_T("amount")), 
			rs.GetValue(_T("status")),
			rs.GetValue(_T("flocked")),
			rs.GetValue(_T("refinvoice")),
			NULL);

		rs.GetValue(_T("status"), szTemp);

		if (szTemp == _T("R"))
		{
			m_wndList.SetItemBkColor(nItem, RGB(220, 220, 220), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(0, 0, 200), FALSE);
		}

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSPatientDepositList::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CHMSAdmissionDepositDialog dlg(this, VM_ADD);
	dlg.m_bRefund = false;

	if(dlg.DoModal() == IDOK)
	{
		if (dlg.m_nDepositInvoice > 0)
			pMF->PrintDeposit(dlg.m_nDepositInvoice);

		OnListLoadData();
	}
} 
void CHMSPatientDepositList::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;

	CString szStatus = m_wndList.GetItemText(nSel, 13);
	CString szLocked = m_wndList.GetItemText(nSel, 14);
	if (szStatus == _T("R") || szLocked == _T("Y"))
		return;

	long nInvoiceNo = str2long(m_wndList.GetItemText(nSel, 0));
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 4));
	long nAmount = str2long(m_wndList.GetItemText(nSel, 12)); 

	int ret = ShowMessageBox(_T("Do you want to delete invoice?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if (ret != IDYES)
		return;

	szSQL.Format(_T("DELETE FROM hms_fee_deposit WHERE hfe_invoiceno=%ld and hfe_staff='%s' and hfe_locked<>'Y' "),
		         nInvoiceNo, pMF->GetCurrentUser());
	pMF->ExecSQL(szSQL);

//	szSQL.Format(_T("UPDATE hms_doc SET hfe_deposit_amount=hfe_deposit_amount-%ld WHERE hd_docno=%ld"),
//		         nAmount, nDocNo);
//	pMF->ExecSQL(szSQL);

	OnListLoadData();
} 
void CHMSPatientDepositList::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;

	int nInvoiceNo = str2long(m_wndList.GetItemText(nSel, 0));
	pMF->PrintDeposit(nInvoiceNo);
} 

int CHMSPatientDepositList::OnCreateRefundInvoice()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;

	CString szStatus = m_wndList.GetItemText(nSel, 13);
	CString szLocked = m_wndList.GetItemText(nSel, 14);

	if (szStatus == _T("R") || szLocked != _T("Y"))
		return 0;

	CHMSAdmissionDepositDialog dlg(this, VM_ADD);
	long nInvoiceNo = str2long(m_wndList.GetItemText(nSel, 0));
	dlg.m_bRefund = true;
	dlg.m_nInvoiceNo = nInvoiceNo;
	//dlg.m_nDocumentNo = str2long(m_wndList.GetItemText(nSel, 4));
	//dlg.m_nRecordNo = str2long(m_wndList.GetItemText(nSel, 5));
	//dlg.m_nAmount = str2long(m_wndList.GetItemText(nSel, 12));

	if (dlg.DoModal() == IDOK)
	{
		if (dlg.m_nRefundInvoice > 0)
			pMF->PrintRefund(dlg.m_nRefundInvoice, true);

		OnListLoadData();
	}
	return 1;
}

int CHMSPatientDepositList::OnPrintRefund()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;

	CString szStatus = m_wndList.GetItemText(nSel, 13);
	if (szStatus != _T("R"))
		return 0;

	long nInvoiceNo = str2long(m_wndList.GetItemText(nSel, 15));
	pMF->PrintRefund(nInvoiceNo, true);

	return 1;
}