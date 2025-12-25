#include "stdafx.h"
#include "FMPaidPatientList.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPaidPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPaidPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPaidPatientList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMPaidPatientList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnClerkAddNew();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMPaidPatientList *)pWnd)->OnStatusLoadData();
}
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMPaidPatientList *)pWnd)->OnStatusSelendok();
}
static long _OnFeeTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMPaidPatientList *)pWnd)->OnFeeTypeLoadData();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CFMPaidPatientList*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CFMPaidPatientList*)pWnd)->OnInPatientSelect();
}
static void _OnLockedSelectFnc(CWnd *pWnd){
	 ((CFMPaidPatientList*)pWnd)->OnLockedSelect();
}
static void _OnWorkingDateSelectFnc(CWnd *pWnd){
	 ((CFMPaidPatientList*)pWnd)->OnWorkingDateSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMPaidPatientList *pVw = (CFMPaidPatientList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintInvoiceSelectFnc(CWnd *pWnd){
	CFMPaidPatientList *pVw = (CFMPaidPatientList *)pWnd;
	pVw->OnPrintInvoiceSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPaidPatientList *pVw = (CFMPaidPatientList *)pWnd;
	pVw->OnExportSelect();
}
static void _OnCloseOutSelectFnc(CWnd *pWnd){
	CFMPaidPatientList *pVw = (CFMPaidPatientList *)pWnd;
	pVw->OnCloseOutSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMPaidPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMPaidPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPaidPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPaidPatientList*)pWnd)->OnListDeleteItem();
}
static int _OnAddFMPaidPatientListFnc(CWnd *pWnd){
	 return ((CFMPaidPatientList*)pWnd)->OnAddFMPaidPatientList();
} 
static int _OnEditFMPaidPatientListFnc(CWnd *pWnd){
	 return ((CFMPaidPatientList*)pWnd)->OnEditFMPaidPatientList();
} 
static int _OnDeleteFMPaidPatientListFnc(CWnd *pWnd){
	 return ((CFMPaidPatientList*)pWnd)->OnDeleteFMPaidPatientList();
} 
static int _OnSaveFMPaidPatientListFnc(CWnd *pWnd){
	 return ((CFMPaidPatientList*)pWnd)->OnSaveFMPaidPatientList();
} 
static int _OnCancelFMPaidPatientListFnc(CWnd *pWnd){
	 return ((CFMPaidPatientList*)pWnd)->OnCancelFMPaidPatientList();
}


static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CFMPaidPatientList*)pWnd)->OnListCheckAll();
}

static int _OnListUncheckAllFnc(CWnd *pWnd){
	return ((CFMPaidPatientList*)pWnd)->OnListUncheckAll();
} 

CFMPaidPatientList::CFMPaidPatientList(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 520;
	SetDefaultValues();
}

CFMPaidPatientList::~CFMPaidPatientList(){
}
void CFMPaidPatientList::OnCreateComponents()
{
	/*m_wndPaidPatientList.Create(this, _T("Paid Patient List"), 5, 5, 490, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 60, 90, 85);
	m_wndClerk.Create(this,95, 60, 485, 85); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 285, 155, 385, 180);
	m_wndExport.Create(this, _T("&Export"), 390, 155, 490, 180);
	m_wndCloseOut.Create(this, _T("&Close out"), 5, 155, 105, 180);
	m_wndOutPatient.Create(this, _T("OutPatient"), 320, 90, 400, 115);
	m_wndInPatient.Create(this, _T("InPatient"), 405, 90, 485, 115);
	m_wndLocked.Create(this, _T("Locked"), 320, 120, 485, 145);*/

	m_wndPaidPatientList.Create(this, _T("Paid Patient List"), 5, 5, 430, 480);
	m_wndStockInfo.Create(this, _T("Stock Information"), 10, 120, 425, 445);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 60, 90, 85);
	m_wndClerk.Create(this,95, 60, 215, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 60, 300, 85);
	m_wndStatus.Create(this,305, 60, 425, 85); 
	m_wndFeeTypeLabel.Create(this, _T("Fee Type"), 10, 90, 90, 115);
	m_wndFeeType.Create(this,95, 90, 215, 115); 
	m_wndOutPatient.Create(this, _T("OutPatient"), 10, 450, 90, 475);
	m_wndInPatient.Create(this, _T("InPatient"), 95, 450, 175, 475);
	m_wndLocked.Create(this, _T("Locked"), 180, 450, 270, 475);
	m_wndSOD.Create(this, _T("Service On Demand"), 275, 450, 425, 475);
	m_wndCloseOut.Create(this, _T("&Close out"), 5, 485, 105, 510);
	m_wndList.Create(this,15, 145, 420, 440); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 225, 485, 325, 510);
	//m_wndPrintInvoice.Create(this, _T(""), 0, 0, 25, 25);
	m_wndExport.Create(this, _T("&Export"), 330, 485, 430, 510);
	//m_wndWorkingDate.Create(this, _T(""), 0, 0, 25, 25);
	m_wndCloseOut.ShowWindow(SW_HIDE);
	m_wndLocked.ShowWindow(SW_HIDE);
}

void CFMPaidPatientList::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 340);
	
	m_wndList.SetCheckBox(TRUE);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 270);

	m_wndFeeType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndFeeType.InsertColumn(1, _T("Name"), CFMT_TEXT, 270);
}
void CFMPaidPatientList::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	m_wndFeeType.SetEvent(WE_LOADDATA, _OnFeeTypeLoadDataFnc);
	m_wndLocked.SetEvent(WE_CLICK, _OnLockedSelectFnc);
	//m_wndWorkingDate.SetEvent(WE_CLICK, _OnWorkingDateSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	//m_wndPrintInvoice.SetEvent(WE_CLICK, _OnPrintInvoiceSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndCloseOut.SetEvent(WE_CLICK, _OnCloseOutSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);

	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Stock List"));
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUncheckAllFnc);
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_szClerkKey = pMF->GetCurrentUser();
	UpdateData(false);

	OnListLoadData();
}
void CFMPaidPatientList::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_bInPatient);
	DDX_Check(pDX, m_wndLocked.GetDlgCtrlID(), m_bLocked);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndFeeType.GetDlgCtrlID(), m_szFeeTypeKey);
	//DDX_Check(pDX, m_wndWorkingDate.GetDlgCtrlID(), m_bWorkingDate);
}
void CFMPaidPatientList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMPaidPatientList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMPaidPatientList::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bOutPatient=TRUE;
	m_bInPatient=FALSE;
	m_bLocked=FALSE;
	m_bWorkingDate=FALSE;
	m_nTotal = 0;
	m_bSOD = FALSE;
	m_szStatusKey = _T("01");

}
int CFMPaidPatientList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
		m_wndCloseOut.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CFMPaidPatientList::OnFromDateChange(){
	
} */
/*void CFMPaidPatientList::OnFromDateSetfocus(){
	
} */
/*void CFMPaidPatientList::OnFromDateKillfocus(){
	
} */
int CFMPaidPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMPaidPatientList::OnToDateChange(){
	
} */
/*void CFMPaidPatientList::OnToDateSetfocus(){
	
} */
/*void CFMPaidPatientList::OnToDateKillfocus(){
	
} */
int CFMPaidPatientList::OnToDateCheckValue(){
	return 0;
} 
void CFMPaidPatientList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMPaidPatientList::OnClerkSelendok(){
	 
}
/*void CFMPaidPatientList::OnClerkSetfocus(){
	
}*/
/*void CFMPaidPatientList::OnClerkKillfocus(){
	
}*/
long CFMPaidPatientList::OnClerkLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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

void CFMPaidPatientList::OnStatusSelendok(){
}

long CFMPaidPatientList::OnStatusLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndStatus.AddItems(_T("01"), _T("Ng\xE0y kh\xF3\x61 s\x1ED5"), NULL);
	m_wndStatus.AddItems(_T("02"), _T("Ng\xE0y \x78\xE1\x63 nh\x1EADn"), NULL);
	m_wndStatus.AddItems(_T("03"), _T("Ng\xE0y ghi s\x1ED5(n\x1ED9p qu\x1EF9)"), NULL);
	m_wndStatus.AddItems(_T("04"), _T("\x43h\x1B0\x61 kh\xF3\x61 s\x1ED5"), NULL);
	return 3;

}

long CFMPaidPatientList::OnFeeTypeLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFeeType.AddItems(_T("01"), _T("Ph\xED kh\xE1m"), NULL);
	m_wndFeeType.AddItems(_T("02"), _T("Ph\xED \x43LS"), NULL);
	m_wndFeeType.AddItems(_T("03"), _T("Ph\xED PTTT"), NULL);
	m_wndFeeType.AddItems(_T("04"), _T("Ph\xED thu\x1ED1\x63"), NULL);
	m_wndFeeType.AddItems(_T("05"), _T("Ph\xED v\x1EADt t\x1B0"), NULL);
	return 3;

}

/*void CFMPaidPatientList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMPaidPatientList::OnOutPatientSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bInPatient = FALSE;
	UpdateData(FALSE);
}
void CFMPaidPatientList::OnInPatientSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bOutPatient = FALSE;
	UpdateData(FALSE);
}
void CFMPaidPatientList::OnLockedSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	//m_bLocked = TRUE;
	m_bWorkingDate = FALSE;
	UpdateData(FALSE);
}
void CFMPaidPatientList::OnWorkingDateSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bLocked = FALSE;
	//m_bWorkingDate = TRUE;
	UpdateData(FALSE);
}

void CFMPaidPatientList::OnListDblClick(){
	
} 
void CFMPaidPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMPaidPatientList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMPaidPatientList::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT msl_storage_id as ID,") \
		         _T(" msl_name as Name") \
		         _T(" FROM m_storagelist") \
				 _T(" WHERE (msl_type in('A','B') OR msl_type in('C') and MSL_DEPT_ID in ('TYC','PTTYC')) and msl_isactive='Y' and MSL_STORAGE_ID>0") \
				 _T(" ORDER BY msl_storage_id"));

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CFMPaidPatientList::OnPrintPreviewSelect(){
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrintPreview.GetWindowRect(&rect);
	menu.CreatePopupMenu();
	TranslateString(_T("1st Version"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("2nd Version"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrintPreview(1);
			break;
		case 2:
			OnPrintPreview(2);
			break;
	}
}

void CFMPaidPatientList::OnPrintPreview(int nVersion){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	UpdateData(true);

	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate;
	CString szTemp, szClass, szOldClerk, szNewClerk, szNewType, szOldType;

	int nIdx = 1;
	double nAmount = 0;
	double nTotal = 0, nGroupTotal = 0, nTypeTotal = 0;
	m_nTotal = 0;
	if (nVersion == 1)
	{
		szSQL = GetQueryString();
	}
	else
	{
		szSQL = GetQueryString_v2();
	}
	//_msg(_T("szSQL: %s"), szSQL);
	//return;
	int nCount = rs.ExecSQL(szSQL);

	if (nCount <= 0){
		ShowMessage(150, MB_ICONSTOP);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_DANHSACHBENHNHANNOPTIEN.rpt")))
		return;

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	CReportSection * rptDetail = NULL, * rptOldGrpHeader = NULL, * rptGrpHeader = NULL, *rptOldTypeHeader = NULL;
	CString szGroup[] = {_T("I. \x42\x1EC7nh nh\xE2n tr\x1EA3"), _T("II. Ho\xE0n tr\x1EA3")};
	int nIndex = 0;

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("itype"), szNewType);
		rs.GetValue(_T("staff"), szNewClerk);
		if (szNewType != szOldType)
		{
			if (nGroupTotal > 0)
			{
				FormatCurrency(nGroupTotal, tmpStr);
				rptOldGrpHeader->SetValue(_T("SumGroupName"), tmpStr);
				nTypeTotal += nGroupTotal;
				nGroupTotal = 0;
			}
			if (nTypeTotal > 0){
				FormatCurrency(nTypeTotal, tmpStr);
				rptOldTypeHeader->SetValue(_T("SumGroupName"), tmpStr);
				if (szOldType == _T("0"))
					nTotal += nTypeTotal;
				else
					nTotal -= nTypeTotal;
				nTypeTotal = 0;
			}
			rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptGrpHeader->SetValue(_T("GroupName"), szGroup[str2int(szNewType)]);
			rptOldTypeHeader = rptGrpHeader;
			szOldType = szNewType;
			nIdx = 1;
		}
		if (szNewClerk != szOldClerk)
		{
			if (nGroupTotal > 0){
				FormatCurrency(nGroupTotal, tmpStr);
				rptOldGrpHeader->SetValue(_T("SumGroupName"), tmpStr);
				nTypeTotal += nGroupTotal;
				nGroupTotal = 0;
			}
			rptGrpHeader = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptGrpHeader->SetValue(_T("GroupName"), pMF->GetDoctorName(szNewClerk));
			rptOldGrpHeader = rptGrpHeader;
			szOldClerk = szNewClerk;
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

	if (nGroupTotal > 0){
		FormatCurrency(nGroupTotal, tmpStr);
		rptOldGrpHeader->SetValue(_T("SumGroupName"), tmpStr);
		nTypeTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if (nTypeTotal > 0){
		FormatCurrency(nTypeTotal, tmpStr);
		rptOldTypeHeader->SetValue(_T("SumGroupName"), tmpStr);
		if (szOldType == _T("0"))
			nTotal += nTypeTotal;
		else
			nTotal -= nTypeTotal;
	}

	//rptDetail = rpt.AddDetail(rpt.GetReportFooter());
	tmpStr.Format(_T("%s"), _T("T\x1ED5ng \x63\x1ED9ng"));
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);

	nTotal += 0.5;
	double nTemp = floor(nTotal);

	m_nTotal = nTemp;

	FormatCurrency(nTemp, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumTotalAmount"), tmpStr);

	tmpStr.Format(_T("%.0f"), nTemp);
	CString szMoney = tmpStr;
	MoneyToString(szMoney, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));

	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	if (!m_szClerkKey.IsEmpty())
		rpt.GetReportFooter()->SetValue(_T("ReceiverBy"), m_wndClerk.GetCurrent(1));
	rpt.PrintPreview();

	if (!m_szClerkKey.IsEmpty() && m_bLocked && m_nTotal > 0) OnPrintInvoice();
} 
void CFMPaidPatientList::OnPrintInvoiceSelect()
{
	
	
} 
void CFMPaidPatientList::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nCol = 0, nRow = 0, nIdx = 0;
	double nAmount = 0;
	double nTotal = 0;
	szSQL = GetQueryString();
	//MessageBox(szSQL);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
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
	
} 
int CFMPaidPatientList::OnAddFMPaidPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

#include "HMSInvoiceDateSettingDialog.h"

void CFMPaidPatientList::OnCloseOutSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szReceiptDate;
	CString tmpStr;
	
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
	szSQL.Format(_T("SELECT trunc(hfc_lastlockeddate) AS lockeddate FROM hms_fee_control where hfc_userid='%s' "), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		rs.GetValue(_T("lockeddate"), tmpStr);
		if (CompareDate(tmpStr, pMF->GetSysDate()) == 0)
		{
			ShowMessageBox(_T("Cannot perform close out two time in day"));
			return;
		}
	}

	szReceiptDate = pMF->GetSysDate();
	szSQL.Format(_T("HMS_FEE_INVOICE_LOCK('%s', '%s', '%s', %ld, '%s') "),
		pMF->GetCurrentUser(), szReceiptDate, _T(""), 0, pMF->GetSysDate());
	int res = str2long(pMF->ExecDML(szSQL));
	CString szMsg;
	szMsg.Format(_T("Close out [%ld] receipt"), res);
	ShowMessageBox(szMsg);
	CHMSInvoiceDateSettingDialog dlg(this);
	if (dlg.DoModal() == IDOK)
	{
		CString szRecvDate = dlg.m_szWorkingDate;
		CString szStatusLabel, szStatus;
		TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
		szStatus.Format(szStatusLabel, pMF->GetCurrentUser(), CDate::Convert(szRecvDate));
		szStatus.AppendFormat(_T(" - Server:%s"), pMF->GetHost());
		//pMF->SetStatusText(szStatus, 1);
	}

}
int CFMPaidPatientList::OnEditFMPaidPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMPaidPatientList::OnDeleteFMPaidPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelFMPaidPatientList();
 	}
	return 0;
}
int CFMPaidPatientList::OnSaveFMPaidPatientList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
 		//OnFMPaidPatientListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMPaidPatientList::OnCancelFMPaidPatientList(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CFMPaidPatientList::OnFMPaidPatientListListLoadData(){
	return 0;
}

CString CFMPaidPatientList::GetQueryString()
{
	GetConditionString();
	CString szSQL, szWhere, szFeeType, szRefundSQL, szPaidSQL;
	CString szStocks;
	CString szDrugCondition;

	szWhere.Empty();
	szStocks.Empty();
	szDrugCondition.Empty();
	
	for (int i = 0; i < m_wndList.GetItemCount();i++)
		if (m_wndList.GetCheck(i)){
			if (!szStocks.IsEmpty())
				szStocks += _T(", ");
			szStocks += m_wndList.GetItemText(i, 0);
		}
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND inv.hfe_staff='%s' "), m_szClerkKey);
	if (m_szStatusKey == _T("01"))
		szWhere.AppendFormat(_T(" AND fac_locked = 'Y' AND fac_invoicedate BETWEEN to_date('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_date('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	else if (m_szStatusKey == _T("02"))
		szWhere.AppendFormat(_T(" AND fac_locked = 'Y' AND FAC_APPROVED = 'Y' AND fac_approveddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	else if (m_szStatusKey == _T("03"))
		szWhere.AppendFormat(_T(" AND fac_locked = 'Y' AND FAC_posted = 'Y' AND fac_posteddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	else if (m_szStatusKey == _T("04"))
		szWhere.AppendFormat(_T(" AND NVL(inv.hfe_locked, 'N') <> 'Y' AND inv.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if (m_bOutPatient)
		szWhere.AppendFormat(_T(" AND inv.hfe_class IN('E','X')"));
	else
		szWhere.AppendFormat(_T(" AND inv.hfe_class NOT IN('E','X')"));
	if (!szStocks.IsEmpty())
		szDrugCondition.AppendFormat(_T(" AND p.hpo_storage_id IN (%s)"), szStocks);
	//szDrugCondition.AppendFormat(_T(" 
	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND inv.hfe_isreq = 'Y'"));
	if (m_szFeeTypeKey == _T("01"))
		szFeeType = _T("'E'");
	else if (m_szFeeTypeKey == _T("02"))
		szFeeType = _T("'P', 'T'");
	else if (m_szFeeTypeKey == _T("03"))
		szFeeType = _T("'O'");
	else if (m_szFeeTypeKey == _T("04"))
		szFeeType = _T("'D'");
	else if (m_szFeeTypeKey == _T("05"))
		szFeeType = _T("'M'");
	if (!szFeeType.IsEmpty())
		if (szFeeType.Find(',') != -1) szWhere.AppendFormat(_T(" AND fee_type IN (%s)"), szFeeType);
		else szWhere.AppendFormat(_T(" AND instr(fee_type, %s) > 0"), szFeeType);
	szWhere.AppendFormat(_T(" AND inv.hfe_status='P' AND NVL(hfe_category, 'N') <> 'Y'"));
	//szWhere = GetConditionString();
	szPaidSQL.Format(_T(" SELECT inv.hfe_staff staff, inv.hfe_docno docno,") \
				_T("		 get_patientname(inv.hfe_docno) pname,") \
				_T("		 inv.hfe_deptid deptid,") \
				_T("		 0 itype,") \
				_T("		 amount") \
				_T("  FROM hms_fee_invoice inv") \
				_T("  LEFT JOIN fa_cash ON (fac_cash_id = hfe_cash_id)") \
				_T("  INNER JOIN ") \
				_T(" (") \
				_T("  SELECT hfe_docno,") \
				_T("		 hfe_invoiceno,") \
				_T("		 CAST(DECODE(mp_org_id, 'PM', 'D', 'MA', 'M', 'X') AS NVARCHAR2(1)) fee_type, ") \
				_T("		 hfe_category,") \
				_T("         hfe_patpaid AS amount") \
				_T("  FROM hms_fee fe") \
				_T("  LEFT JOIN hms_pharmaretailorder_view p ON (fe.hfe_docno = p.hpo_docno AND hfe_orderid = p.hpo_orderid)") \
				_T("  LEFT JOIN m_product_item ON (cast(hfe_itemid as integer) = mpi_product_item_id)") \
				_T("  LEFT JOIN m_product ON (mp_product_id = mpi_product_id)") \
				_T("  WHERE hfe_patpaid > 0 AND fe.hfe_status IN ('P', 'R') AND hfe_type IN ('D', 'M', 'R') %s") \
				_T("  UNION ALL") \
				_T("  SELECT hfe_docno,") \
				_T("         hfe_invoiceno,") \
				_T("		 hfe_type fee_type,") \
				_T("		 hfe_category,") \
				_T("         hfe_patpaid") \
				_T("  FROM hms_fee") \
				_T("  WHERE hfe_patpaid > 0 AND hfe_status IN ('P', 'R') AND hfe_type NOT IN ('D', 'M', 'R')") \
				_T(" ) fe ON (fe.hfe_docno = inv.hfe_docno AND fe.hfe_invoiceno = inv.hfe_invoiceno)") \
				_T(" WHERE 1=1 %s"), szDrugCondition, szWhere);

	szRefundSQL.Format(_T(" SELECT inv.hfe_staff staff, inv.hfe_docno docno,") \
				_T("		 get_patientname(inv.hfe_docno) pname,") \
				_T("		 inv.hfe_deptid deptid,") \
				_T("		 1 itype,") \
				_T("		 amount") \
				_T("  FROM hms_fee_refund inv") \
				_T("  LEFT JOIN fa_cash ON (fac_cash_id = hfe_cash_id)") \
				_T("  INNER JOIN ") \
				_T(" (") \
				_T("  SELECT hfe_docno,") \
				_T("		 hfe_invoiceno,") \
				_T("		 CAST(DECODE(mp_org_id, 'PM', 'D', 'MA', 'M', 'X') AS NVARCHAR2(1)) fee_type, ") \
				_T("		 CAST('N' AS NVARCHAR2(1)) hfe_category,") \
				_T("         hfe_cost AS amount") \
				_T("  FROM v_drugrefund p") \
				_T("  WHERE 1=1 %s") \
				_T("  UNION ALL") \
				_T("  SELECT hfe_docno,") \
				_T("         (SELECT hfe_invoiceno FROM hms_fee_refundline WHERE hfe_fee_refundline_id = f.hfe_fee_id and rownum<=1) hfe_invoiceno,") \
				_T("		 hfe_type fee_type, ") \
				_T("		 hfe_category,") \
				_T("         hfe_patpaid") \
				_T("  FROM hms_fee f") \
				_T("  WHERE hfe_patpaid > 0 AND hfe_status IN ('R') AND hfe_type NOT IN ('D', 'M', 'R')") \
				_T(" ) fe ON (fe.hfe_docno = inv.hfe_docno AND fe.hfe_invoiceno = inv.hfe_invoiceno)") \
				_T(" WHERE 1=1 %s"), szDrugCondition, szWhere);

	szSQL.Format(_T(" SELECT staff, docno,") \
				_T("		 pname,") \
				_T("		 deptid,") \
				_T("		 itype,") \
				_T("		 SUM(amount) amount") \
				_T("  FROM (%s UNION ALL %s)") \
				_T(" GROUP BY staff, docno, deptid, itype, pname") \
				_T(" ORDER BY itype, staff, docno"), szPaidSQL, szRefundSQL);
//_msg(_T("%s"), szSQL);
	return szSQL;

}

CString CFMPaidPatientList::GetQueryString_v2()
{
	GetConditionString();
	CString szSQL, szWhere, szFeeType, szRefundSQL, szPaidSQL;
	CString szStocks;
	CString szDrugCondition, szCashCondition;

	szWhere.Empty();
	szStocks.Empty();
	szDrugCondition.Empty();
	szCashCondition.Empty();
	for (int i = 0; i < m_wndList.GetItemCount();i++)
		if (m_wndList.GetCheck(i)){
			if (!szStocks.IsEmpty())
				szStocks += _T(", ");
			szStocks += m_wndList.GetItemText(i, 0);
		}
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND inv.hfe_staff='%s' "), m_szClerkKey);
	if (m_szStatusKey == _T("01"))
		szCashCondition.AppendFormat(_T(" AND fac_locked = 'Y' AND fac_invoicedate BETWEEN to_date('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_date('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	else if (m_szStatusKey == _T("02"))
		szCashCondition.AppendFormat(_T(" AND fac_locked = 'Y' AND FAC_APPROVED = 'Y' AND fac_approveddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	else if (m_szStatusKey == _T("03"))
		szCashCondition.AppendFormat(_T(" AND fac_locked = 'Y' AND FAC_posted = 'Y' AND fac_posteddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	else if (m_szStatusKey == _T("04"))
		szCashCondition.AppendFormat(_T(" AND NVL(inv.hfe_locked, 'N') <> 'Y' AND inv.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if (m_bOutPatient)
		szWhere.AppendFormat(_T(" AND inv.hfe_class IN('E','X')"));
	else
		szWhere.AppendFormat(_T(" AND inv.hfe_class NOT IN('E','X')"));
	if (!szStocks.IsEmpty())
		szDrugCondition.AppendFormat(_T(" AND p.hpo_storage_id IN (%s)"), szStocks);
	//szDrugCondition.AppendFormat(_T(" 
	if (m_bSOD)
		szWhere.AppendFormat(_T(" AND inv.hfe_isreq = 'Y'"));
	if (m_szFeeTypeKey == _T("01"))
		szFeeType = _T("'E'");
	else if (m_szFeeTypeKey == _T("02"))
		szFeeType = _T("'P', 'T'");
	else if (m_szFeeTypeKey == _T("03"))
		szFeeType = _T("'O'");
	else if (m_szFeeTypeKey == _T("04"))
		szFeeType = _T("'D'");
	else if (m_szFeeTypeKey == _T("05"))
		szFeeType = _T("'M'");
	if (!szFeeType.IsEmpty())
		if (szFeeType.Find(',') != -1) szWhere.AppendFormat(_T(" AND fee_type IN (%s)"), szFeeType);
		else szWhere.AppendFormat(_T(" AND instr(fee_type, %s) > 0"), szFeeType);
	szWhere.AppendFormat(_T(" AND inv.hfe_status='P' AND NVL(hfe_category, 'N') <> 'Y' and fac_cash_id IN (select fac_cash_id from temp_cash)"));
	//szWhere = GetConditionString();
	szPaidSQL.Format(_T(" SELECT inv.hfe_staff staff, inv.hfe_docno docno,") \
				_T("		 get_patientname(inv.hfe_docno) pname,") \
				_T("		 inv.hfe_deptid deptid,") \
				_T("		 0 itype,") \
				_T("		 amount") \
				_T("  FROM hms_fee_invoice inv") \
				_T("  LEFT JOIN fa_cash ON (fac_cash_id = hfe_cash_id)") \
				_T("  INNER JOIN ") \
				_T(" (") \
				_T("  SELECT hfe_docno,") \
				_T("		 hfe_invoiceno,") \
				_T("		 CAST(DECODE(mp_org_id, 'PM', 'D', 'MA', 'M', 'X') AS NVARCHAR2(1)) fee_type, ") \
				_T("		 hfe_category,") \
				_T("         hfe_patpaid AS amount") \
				_T("  FROM hms_fee fe") \
				_T("  LEFT JOIN hms_pharmaretailorder_view p ON (fe.hfe_docno = p.hpo_docno AND hfe_orderid = p.hpo_orderid)") \
				_T("  LEFT JOIN m_product_item ON (cast(hfe_itemid as integer) = mpi_product_item_id)") \
				_T("  LEFT JOIN m_product ON (mp_product_id = mpi_product_id)") \
				_T("  WHERE fe.hfe_status IN ('P', 'R') AND hfe_type IN ('D', 'M', 'R') %s") \
				_T("  UNION ALL") \
				_T("  SELECT hfe_docno,") \
				_T("         hfe_invoiceno,") \
				_T("		 hfe_type fee_type,") \
				_T("		 hfe_category,") \
				_T("         hfe_patpaid") \
				_T("  FROM hms_fee") \
				_T("  WHERE hfe_status IN ('P', 'R') AND hfe_type NOT IN ('D', 'M', 'R')") \
				_T("  UNION ALL") \
				_T("  SELECT    hpo_docno,") \
				_T("            hpo_invoiceno,") \
				_T("		 CAST(DECODE(mp_org_id, 'PM', 'D', 'MA', 'M', 'X') AS NVARCHAR2(1)) fee_type, ") \
				_T("            Cast('N' AS NVARCHAR2(1)),") \
				_T("            HPOL_UNITPRICE * HPOL_QTYRETURN") \
				_T("  FROM      HMS_PHARMARETURNORDER p") \
				_T("  LEFT JOIN HMS_PHARMARETURNORDER_LINE ON (HPO_PHARmareturnorder_id = hpol_pharmareturnorder_id )") \
				_T("  LEFT JOIN m_product_item ON (hpol_product_item_id = mpi_product_item_id)") \
				_T("  LEFT JOIN m_product ON (mp_product_id = mpi_product_id)") \
				_T("  WHERE     HPO_STATUS = 'A' %s") \
				_T(" ) fe ON (fe.hfe_docno = inv.hfe_docno AND fe.hfe_invoiceno = inv.hfe_invoiceno)") \
				_T(" WHERE 1=1 %s"), szDrugCondition, szDrugCondition, szWhere);
	szSQL.Format(_T("WITH temp_cash ") \
	_T("     AS (SELECT fac_cash_id ") \
	_T("         FROM   fa_cash ") \
	_T("         WHERE  1=1 %s)") \
	_T(" SELECT staff, docno,") \
	_T("		 pname,") \
	_T("		 deptid,") \
	_T("		 itype,") \
	_T("		 SUM(amount) amount") \
	_T("  FROM (%s )") \
	_T(" GROUP BY staff, docno, deptid, itype, pname") \
	_T(" HAVING sum(amount) > 0") \
	_T(" ORDER BY itype, staff, docno"), szCashCondition, szPaidSQL);
//_msg(_T("%s"), szSQL);
	return szSQL;

}

CString CFMPaidPatientList::GetConditionString(){
	CString szWhere, szFromDate, szToDate, tmpStr, szFieldName, szKey;
	int nStat = 0;
	CString arr_strg[] = {_T(" AND inv.hfe_class IN ('E','X')"), _T(" AND inv.hfe_class NOT IN('E','X')")};
	//Combo box
	GetDataFromCombo(szWhere, &m_wndFeeType, szKey, szFieldName, true, false);
	//Date
	GetDataFromDate(szWhere, szFromDate, szToDate, true);
	//List
	GetDataFromList(szWhere, &m_wndList, szFieldName, true);
	//Check
	GetDataFromCheck(szWhere, m_bOutPatient, tmpStr);
	//Radio
	GetDataFromRadio(szWhere, nStat, arr_strg);

	GetDataFromList(szWhere, &m_wndList, _T("p.hpo_storage_id"), true); 
	GetDataFromCombo(szWhere, &m_wndClerk, m_szClerkKey, _T("inv.hfe_staff"));
	GetDataFromCheck(szWhere, m_bOutPatient, _T(" AND inv.hfe_class IN('E','X')"));
	GetDataFromCheck(szWhere, m_bInPatient, _T(" AND inv.hfe_class NOT IN ('E', 'X')"));
	GetDataFromCheck(szWhere, m_bSOD, _T(" AND inv.hfe_isreq = 'Y'"));
	return szWhere;
}

void CFMPaidPatientList::GetDataFromCombo(CString& szWhere, CGuiComboBox* pCombo, CString szKey, CString szFieldName, bool bCheck, bool bNumber){
	CString tmpStr;
	if (bCheck){
		if (!szKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND %s = '%s'"), szFieldName, szKey);
	}
	else 
		for (int i = 0; i < pCombo->GetItemCount(); i++){
			if (pCombo->GetCheck(i)){
				pCombo->SetCurSel(i);
				if (!tmpStr.IsEmpty())
					tmpStr += _T(",");
				if (bNumber)
					tmpStr.AppendFormat(_T("%s"), pCombo->GetCurrent(0));
				else
					tmpStr.AppendFormat(_T("'%s'"), pCombo->GetCurrent(0));
			}
		}
}

void CFMPaidPatientList::GetDataFromDate(CString& szWhere, CString szFromDate, CString szToDate, bool bTimestamp){
	if (bTimestamp)
		szWhere.AppendFormat(_T(" AND report_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	else
		szWhere.AppendFormat(_T(" AND report_date BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
}

void CFMPaidPatientList::GetDataFromList(CString& szWhere, CGuiListCtrl* pList, CString szFieldName, bool bNumber){
	CString tmpStr;
	for (int i = 0; i < pList->GetItemCount(); i++)
	{
		if (pList->GetCheck(i))
		{
			if (!tmpStr.IsEmpty())
				tmpStr += _T(",");
			if (bNumber)
				tmpStr.AppendFormat(_T("%s"), pList->GetItemText(i, 0));
			else
				tmpStr.AppendFormat(_T("'%s'"),pList->GetItemText(i, 0));
		}
	}
	if (!tmpStr.IsEmpty())
		szWhere.AppendFormat(_T(" AND %s IN (%s)"), szFieldName, tmpStr);
}

void CFMPaidPatientList::GetDataFromCheck(CString& szWhere, bool bStat, CString szReturnStr){
	CString tmpStr;
	tmpStr.Format(_T("%s"), szReturnStr);
	szWhere += bStat?tmpStr:_T("");
}

void CFMPaidPatientList::GetDataFromRadio(CString& szWhere, int nStat, CString arr_ReturnStr[]){
	szWhere.AppendFormat(_T("%s"), arr_ReturnStr[nStat]);
}

int CFMPaidPatientList::OnPrintInvoice()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	UpdateData(true);

	CReport rpt;
	CRecord rs(&pMF->m_db), ors(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL, tmpStr, szSysDate, szTemp;

	int nIdx = 0;
	double nAmount = 0;
	double nTotal = 0;

	//szSQL = GetQueryString();
	//int nCount = rs.ExecSQL(szSQL);

	/*if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return -1;
	}*/

	if (!rpt.Init(_T("Reports/HMS/HF_PHIEUTHUC30BB.rpt"), false, false, 3))
		return 0;

	CReportSection *rptDetail;

	rptDetail = rpt.AddDetail();

	rptDetail->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rptDetail->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);

	tmpStr.Format(rptDetail->GetValue(_T("ReportDate")),
		         CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				 CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rptDetail->SetValue(_T("ReportDate"), tmpStr);

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
	rptDetail->SetValue(_T("reason"), tmpStr);
	
	//nTotal += 0.5;
	//double nTemp = floor(nTotal);

	FormatCurrency(m_nTotal, tmpStr);
	rptDetail->SetValue(_T("TotalAmount"), tmpStr);

	szTemp.Format(_T("%.0f"), m_nTotal);
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


int CFMPaidPatientList::OnListCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!m_wndList.GetCheck(i))
		{
			m_wndList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMPaidPatientList::OnListUncheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCheck(i, FALSE);
		}
	}
	return 0;
}