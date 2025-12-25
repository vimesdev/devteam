#include "MSBChoatdongchidaotuyen.h"
#include "MainFrm.h"
#include "MSBChoatdongchidaotuyenDialog.h"
#include "ReportDocument.h"
#include "Excel.h"

static void _OnReportBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBChoatdongchidaotuyen* )pWnd)->OnReportBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportBySelendokFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnReportBySelendok();
}
/*static void _OnReportBySetfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnReportByKillfocus();
}*/
/*static void _OnReportByKillfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnReportByKillfocus();
}*/
static long _OnReportByLoadDataFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyen *)pWnd)->OnReportByLoadData();
}
/*static void _OnReportByAddNewFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnReportByAddNew();
}*/
static void _OnMonthSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBChoatdongchidaotuyen* )pWnd)->OnMonthSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMonthSelendokFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnMonthSelendok();
}
/*static void _OnMonthSetfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnMonthKillfocus();
}*/
/*static void _OnMonthKillfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnMonthKillfocus();
}*/
static long _OnMonthLoadDataFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyen *)pWnd)->OnMonthLoadData();
}
/*static void _OnMonthAddNewFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnMonthAddNew();
}*/
static void _OnQuarterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBChoatdongchidaotuyen* )pWnd)->OnQuarterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnQuarterSelendokFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnQuarterSelendok();
}
/*static void _OnQuarterSetfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnQuarterKillfocus();
}*/
/*static void _OnQuarterKillfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnQuarterKillfocus();
}*/
static long _OnQuarterLoadDataFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyen *)pWnd)->OnQuarterLoadData();
}
/*static void _OnQuarterAddNewFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnQuarterAddNew();
}*/
static void _OnYearSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBChoatdongchidaotuyen* )pWnd)->OnYearSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnYearSelendokFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnYearSelendok();
}
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnYearKillfocus();
}*/
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnYearKillfocus();
}*/
static long _OnYearLoadDataFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyen *)pWnd)->OnYearLoadData();
}
/*static void _OnYearAddNewFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnYearAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyen *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyen *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CMSBChoatdongchidaotuyen *pVw = (CMSBChoatdongchidaotuyen *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBChoatdongchidaotuyen *pVw = (CMSBChoatdongchidaotuyen *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMSBChoatdongchidaotuyen *pVw = (CMSBChoatdongchidaotuyen *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyen*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyen*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBChoatdongchidaotuyen*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyen*)pWnd)->OnListDeleteItem();
} 
static int _OnAddMSBChoatdongchidaotuyenFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyen*)pWnd)->OnAddMSBChoatdongchidaotuyen();
} 
static int _OnEditMSBChoatdongchidaotuyenFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyen*)pWnd)->OnEditMSBChoatdongchidaotuyen();
} 
static int _OnDeleteMSBChoatdongchidaotuyenFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyen*)pWnd)->OnDeleteMSBChoatdongchidaotuyen();
} 
static int _OnSaveMSBChoatdongchidaotuyenFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyen*)pWnd)->OnSaveMSBChoatdongchidaotuyen();
} 
static int _OnCancelMSBChoatdongchidaotuyenFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyen*)pWnd)->OnCancelMSBChoatdongchidaotuyen();
}
static int _OnLoadInputDataFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyen*)pWnd)->OnLoadInputData();
} 
CMSBChoatdongchidaotuyen::CMSBChoatdongchidaotuyen()
{
	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_rs = NULL;
}
CMSBChoatdongchidaotuyen::~CMSBChoatdongchidaotuyen()
{
	if (m_rs != NULL) delete m_rs;
}
void CMSBChoatdongchidaotuyen::OnCreateComponents()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_wndReportCriteria.Create(this, _T("Directed online activities"), 5, 5, 1000, 600);
	m_wndReportByLabel.Create(this, _T("Report By"), 10, 30, 90, 55);
	m_wndReportBy.Create(this,95, 30, 185, 55); 
	m_wndMonthLabel.Create(this, _T("Month"), 190, 30, 260, 55);
	m_wndMonth.Create(this,265, 30, 355, 55); 
	m_wndQuarterLabel.Create(this, _T("Quarter"), 360, 30, 440, 55);
	m_wndQuarter.Create(this,445, 30, 525, 55); 
	m_wndYear.Create(this,615, 30, 705, 55); 
	m_wndYearLabel.Create(this, _T("Year"), 530, 30, 610, 55);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 185, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 190, 60, 260, 85);
	m_wndToDate.Create(this,265, 60, 355, 85); 
	m_wndLoad.Create(this, _T("&Load"), 360, 60, 440, 85);
	m_wndPrint.Create(this, _T("&Print"), 445, 60, 525, 85);
	m_wndExport.Create(this, _T("&Export"), 530, 60, 610, 85);
	m_wndList.Create(this,10, 90, 980, 580); 

}
void CMSBChoatdongchidaotuyen::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndReportBy.SetCheckValue(true);
	m_wndReportBy.LimitText(35);
	//m_wndMonth.SetCheckValue(true);
	m_wndMonth.LimitText(35);
	//m_wndQuarter.SetCheckValue(true);
	m_wndQuarter.LimitText(35);
	//m_wndYear.SetCheckValue(true);
	m_wndYear.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);

	m_rs = new CRecord(&pMF->m_db);

	m_wndReportBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportBy.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndMonth.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMonth.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndQuarter.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndQuarter.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndYear.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndYear.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT | CFMT_CENTER, 70);
	m_wndList.InsertColumn(1, _T("Work"), CFMT_TEXT, 450);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_TEXT | CFMT_CENTER, 150);

	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(2);
	m_wndList.SetDisplayColor(true);
}
void CMSBChoatdongchidaotuyen::OnSetWindowEvents()
{
	m_wndReportBy.SetEvent(WE_SELENDOK, _OnReportBySelendokFnc);
	//m_wndReportBy.SetEvent(WE_SETFOCUS, _OnReportBySetfocusFnc);
	//m_wndReportBy.SetEvent(WE_KILLFOCUS, _OnReportByKillfocusFnc);
	m_wndReportBy.SetEvent(WE_SELCHANGE, _OnReportBySelectChangeFnc);
	m_wndReportBy.SetEvent(WE_LOADDATA, _OnReportByLoadDataFnc);
	//m_wndReportBy.SetEvent(WE_ADDNEW, _OnReportByAddNewFnc);
	m_wndMonth.SetEvent(WE_SELENDOK, _OnMonthSelendokFnc);
	//m_wndMonth.SetEvent(WE_SETFOCUS, _OnMonthSetfocusFnc);
	//m_wndMonth.SetEvent(WE_KILLFOCUS, _OnMonthKillfocusFnc);
	m_wndMonth.SetEvent(WE_SELCHANGE, _OnMonthSelectChangeFnc);
	m_wndMonth.SetEvent(WE_LOADDATA, _OnMonthLoadDataFnc);
	//m_wndMonth.SetEvent(WE_ADDNEW, _OnMonthAddNewFnc);
	m_wndQuarter.SetEvent(WE_SELENDOK, _OnQuarterSelendokFnc);
	//m_wndQuarter.SetEvent(WE_SETFOCUS, _OnQuarterSetfocusFnc);
	//m_wndQuarter.SetEvent(WE_KILLFOCUS, _OnQuarterKillfocusFnc);
	m_wndQuarter.SetEvent(WE_SELCHANGE, _OnQuarterSelectChangeFnc);
	m_wndQuarter.SetEvent(WE_LOADDATA, _OnQuarterLoadDataFnc);
	//m_wndQuarter.SetEvent(WE_ADDNEW, _OnQuarterAddNewFnc);
	m_wndYear.SetEvent(WE_SELENDOK, _OnYearSelendokFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_SELCHANGE, _OnYearSelectChangeFnc);
	m_wndYear.SetEvent(WE_LOADDATA, _OnYearLoadDataFnc);
	//m_wndYear.SetEvent(WE_ADDNEW, _OnYearAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Command"));
	m_wndList.AddEvent(1, _T("Input Data"), _OnLoadInputDataFnc, 0, 0, 0);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddMSBChoatdongchidaotuyenFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditMSBChoatdongchidaotuyenFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteMSBChoatdongchidaotuyenFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveMSBChoatdongchidaotuyenFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelMSBChoatdongchidaotuyenFnc, 0, 'T', VK_CONTROL);*/
	OnFormLoad();
}
void CMSBChoatdongchidaotuyen::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndReportBy.GetDlgCtrlID(), m_szReportByKey);
	DDX_TextEx(pDX, m_wndMonth.GetDlgCtrlID(), m_szMonthKey);
	DDX_TextEx(pDX, m_wndQuarter.GetDlgCtrlID(), m_szQuarterKey);
	DDX_TextEx(pDX, m_wndYear.GetDlgCtrlID(), m_szYearKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}
void CMSBChoatdongchidaotuyen::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CMSBChoatdongchidaotuyen::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBChoatdongchidaotuyen::SetDefaultValues(){

	m_szReportByKey.Empty();
	m_szMonthKey.Empty();
	m_szQuarterKey.Empty();
	m_szYearKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CMSBChoatdongchidaotuyen::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL, szDate, szYear, szMonth;
		int nQuarter;
 		CRecord rs(&pMF->m_db);
		szDate = pMF->GetSysDate();
		szYear = szDate.Left(4);
		szMonth.Format(_T("%d"), ToInt(szDate.Mid(5, 2)));
		nQuarter = ToInt(szMonth) % 3;
		if (nQuarter != 0)
			nQuarter = ToInt(szMonth) / 3 + 1;
		else
			nQuarter = ToInt(szMonth) / 3;
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			SetDefaultValues();
			m_szFromDate = m_szToDate = szDate;
			m_szReportByKey = m_szReportBy;
			m_szYearKey = szYear;
			m_szMonthKey = szMonth;
			m_szQuarterKey = int2str(nQuarter);
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
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			SetDefaultValues();
			m_szFromDate = m_szToDate = szDate;
 			break; 
 		}; 
 		UpdateData(FALSE);
		OnReportBySelendok();
		if (m_szReportByKey.MakeUpper() == _T("Q"))
			OnQuarterSelendok();
		else if (m_szReportByKey.MakeUpper() == _T("M"))
			OnMonthSelendok();
 		return nOldMode; 
}
void CMSBChoatdongchidaotuyen::OnReportBySelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBChoatdongchidaotuyen::OnReportBySelendok()
{
	UpdateData(TRUE);
	if (m_szReportByKey.MakeUpper() == _T("D"))
	{
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndMonth.EnableWindow(FALSE);
		m_wndQuarter.EnableWindow(FALSE);
		m_wndYear.EnableWindow(FALSE);
	}
	else if (m_szReportByKey.MakeUpper() == _T("M"))
	{
		m_wndFromDate.EnableWindow(FALSE);
		m_wndToDate.EnableWindow(FALSE);
		m_wndMonth.EnableWindow(TRUE);
		m_wndQuarter.EnableWindow(FALSE);
		m_wndYear.EnableWindow(TRUE);
	}
	else if (m_szReportByKey.MakeUpper() == _T("Q"))
	{
		m_wndFromDate.EnableWindow(FALSE);
		m_wndToDate.EnableWindow(FALSE);
		m_wndMonth.EnableWindow(FALSE);
		m_wndQuarter.EnableWindow(TRUE);
		m_wndYear.EnableWindow(TRUE);
	}
	else
	{
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
		m_wndMonth.EnableWindow(FALSE);
		m_wndQuarter.EnableWindow(FALSE);
		m_wndYear.EnableWindow(FALSE);
	}
	UpdateData(FALSE);
}
/*void CMSBChoatdongchidaotuyen::OnReportBySetfocus(){
	
}*/
/*void CMSBChoatdongchidaotuyen::OnReportByKillfocus(){
	
}*/
long CMSBChoatdongchidaotuyen::OnReportByLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndReportBy.IsSearchKey() && !m_szReportByKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szReportByKey);
	}
	m_wndReportBy.DeleteAllItems(); 
	int nCount = 0;
	if (m_szReportBy.MakeUpper() == _T("D"))
	{
		szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel WHERE ss_id='mds_report' %s ")\
					 _T(" ORDER BY ss_code "), szWhere);
	}
	else if (m_szReportBy.MakeUpper() == _T("M"))
	{
		szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel WHERE ss_id='mds_report' AND ss_code<>'D' %s ")\
					 _T(" ORDER BY ss_code "), szWhere);
	}
	else
	{
		szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel WHERE ss_id='mds_report' AND ss_code='Q' %s ")\
					 _T(" ORDER BY ss_code "), szWhere);
	}
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndReportBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMSBChoatdongchidaotuyen::OnReportByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBChoatdongchidaotuyen::OnMonthSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBChoatdongchidaotuyen::OnMonthSelendok()
{
	UpdateData(TRUE);
	int nMonth = ToInt(m_szMonthKey);
	int nYear = ToInt(m_szYearKey);
	CDate date(nYear, nMonth, 1);
	CString szTemp;
	szTemp.Format(_T("%.4d/%.2d/%.2d"), nYear, nMonth, 1);
	m_szFromDate = szTemp;
	szTemp.Format(_T("%.4d/%.2d/%.2d"), nYear, nMonth, date.GetMonthLastDay());
	m_szToDate = szTemp;
	UpdateData(FALSE);
}
/*void CMSBChoatdongchidaotuyen::OnMonthSetfocus(){
	
}*/
/*void CMSBChoatdongchidaotuyen::OnMonthKillfocus(){
	
}*/
long CMSBChoatdongchidaotuyen::OnMonthLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndMonth.IsSearchKey() && !m_szMonthKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szMonthKey);
	}
	m_wndMonth.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel WHERE ss_id='month' %s ")\
			     _T("ORDER BY cast(ss_code as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndMonth.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMSBChoatdongchidaotuyen::OnMonthAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBChoatdongchidaotuyen::OnQuarterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBChoatdongchidaotuyen::OnQuarterSelendok()
{
	UpdateData(TRUE);
	int nQuarter = ToInt(m_szQuarterKey);
	int nYear = ToInt(m_szYearKey);
	switch (nQuarter)
	{
		case 1:
			m_szFromDate.Format(_T("%.4d/%.2d/%.2d"), nYear, 1, 1);
			m_szToDate.Format(_T("%.4d/%.2d/%.2d"), nYear, 3, 31);
			break;
		case 2:
			m_szFromDate.Format(_T("%.4d/%.2d/%.2d"), nYear, 3, 1);
			m_szToDate.Format(_T("%.4d/%.2d/%.2d"), nYear, 6, 30);
			break;
		case 3:
			m_szFromDate.Format(_T("%.4d/%.2d/%.2d"), nYear, 6, 1);
			m_szToDate.Format(_T("%.4d/%.2d/%.2d"), nYear, 9, 30);
			break;
		case 4:
			m_szFromDate.Format(_T("%.4d/%.2d/%.2d"), nYear, 9, 1);
			m_szToDate.Format(_T("%.4d/%.2d/%.2d"), nYear, 12, 31);
			break;
	}
	UpdateData(FALSE);
}
/*void CMSBChoatdongchidaotuyen::OnQuarterSetfocus(){
	
}*/
/*void CMSBChoatdongchidaotuyen::OnQuarterKillfocus(){
	
}*/
long CMSBChoatdongchidaotuyen::OnQuarterLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndQuarter.IsSearchKey() && !m_szQuarterKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szQuarterKey);
	}
	m_wndQuarter.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel WHERE ss_id='quarter' %s ")\
			     _T("ORDER BY cast(ss_code as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndQuarter.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMSBChoatdongchidaotuyen::OnQuarterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBChoatdongchidaotuyen::OnYearSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBChoatdongchidaotuyen::OnYearSelendok()
{
	if (m_szReportByKey.MakeUpper() == _T("Q"))
		OnQuarterSelendok();
	else if (m_szReportByKey.MakeUpper() == _T("M"))
		OnMonthSelendok();
}
/*void CMSBChoatdongchidaotuyen::OnYearSetfocus(){
	
}*/
/*void CMSBChoatdongchidaotuyen::OnYearKillfocus(){
	
}*/
long CMSBChoatdongchidaotuyen::OnYearLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndYear.IsSearchKey() && !m_szYearKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szYearKey);
	}
	m_wndYear.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel WHERE ss_id='year' %s ")\
			     _T("ORDER BY cast(ss_code as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndYear.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMSBChoatdongchidaotuyen::OnYearAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CMSBChoatdongchidaotuyen::OnFromDateChange(){
	
} */
/*void CMSBChoatdongchidaotuyen::OnFromDateSetfocus(){
	
} */
/*void CMSBChoatdongchidaotuyen::OnFromDateKillfocus(){
	
} */
int CMSBChoatdongchidaotuyen::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBChoatdongchidaotuyen::OnToDateChange(){
	
} */
/*void CMSBChoatdongchidaotuyen::OnToDateSetfocus(){
	
} */
/*void CMSBChoatdongchidaotuyen::OnToDateKillfocus(){
	
} */
int CMSBChoatdongchidaotuyen::OnToDateCheckValue()
{
	return 0;
} 
void CMSBChoatdongchidaotuyen::OnLoadSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CMSBChoatdongchidaotuyen::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_rs->GetRecordCount() <= 0)
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONEXCLAMATION);
		return;
	}
	CReport rpt;
	if(!rpt.Init(_T("Reports/HMS/HOATDONGCHIDAOTUYEN.RPT")))
		return ;

	UpdateData(TRUE);
	BeginWaitCursor();

	CString szSQL, szTemp, tmpStr, szDate, szSysDate;
	szSysDate = pMF->GetSysDate();
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));

	m_rs->MoveFirst();
	CReportSection* rptDetail = rpt.GetDetail();
	rptDetail = rpt.AddDetail();
	int nTemp;
	while (!m_rs->IsEOF())
	{
		nTemp = ToInt(m_rs->GetValue(_T("mdsdl_idx")));
		szTemp.Format(_T("%d"), nTemp);
		FormatCurrencyStr(m_rs->GetValue(_T("Quantity")), tmpStr);
		rptDetail->SetValue(szTemp, tmpStr);
		m_rs->MoveNext();
	}

	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5,2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CMSBChoatdongchidaotuyen::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_rs->GetRecordCount() <= 0) 
		return;
	UpdateData(TRUE);
	CString tmpStr;

	BeginWaitCursor();

	int nRow = 0;
	int nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 61);
	xls.SetColumnWidth(2, 17);
	xls.SetColumnWidth(3, 17);

	xls.SetCellText(nCol, nRow, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT, true, 12, 0);
	xls.SetCellText(nCol, nRow + 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT, true, 12, 0);
	//xls.SetCellMergedColumns(nCol, nRow + 2, 6);	
	xls.SetCellText(nCol, nRow + 3, _T("\x42\xC1O \x43\xC1O HO\x1EA0T \x110\x1ED8NG \x43H\x1EC8 \x110\x1EA0O TUY\x1EBEN"), FMT_TEXT, true, 16, 0);
	//xls.SetCellMergedColumns(nCol, nRow + 3, 6);
	if (m_szReportByKey.MakeUpper() == _T("D") || m_szReportByKey.IsEmpty())
		tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	else if (m_szReportByKey.MakeUpper() == _T("M"))
		tmpStr.Format(_T("Th\xE1ng %s N\x103m %s"), m_szMonthKey, m_szYearKey);
	else
		tmpStr.Format(_T("Qu\xFD %s N\x103m %s"), m_szQuarterKey, m_szYearKey);
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, true, 12, 0);

	xls.SetCellText(nCol, nRow + 6, _T("STT"), FMT_TEXT | FMT_CENTER, true, 11, 0);
	TranslateString(_T("Norm"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 6, tmpStr, FMT_TEXT | FMT_CENTER, true, 11, 0);
	TranslateString(_T("Unit"), tmpStr);
	xls.SetCellText(nCol + 2, nRow + 6, tmpStr, FMT_TEXT | FMT_CENTER, true, 11, 0);
	TranslateString(_T("Quantity"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 6, tmpStr, FMT_TEXT | FMT_CENTER, true, 11, 0);

	m_rs->MoveFirst();
	//int nIndex;

	nRow += 7;
	while (!m_rs->IsEOF())
	{
		xls.SetCellText(nCol, nRow, m_rs->GetValue(_T("pIndex")), FMT_TEXT);
		xls.SetCellText(nCol + 1, nRow, m_rs->GetValue(_T("pWork")), FMT_TEXT);
		xls.SetCellText(nCol + 2, nRow, m_rs->GetValue(_T("Unit")), FMT_TEXT);
		xls.SetCellText(nCol + 3, nRow, m_rs->GetValue(_T("Quantity")), FMT_NUMBER1);
		nRow++;
		m_rs->MoveNext();
	}
	
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao chi dao tuyen.xls"));
	//UpdateData(FALSE);
} 
void CMSBChoatdongchidaotuyen::OnListDblClick(){
	
} 
void CMSBChoatdongchidaotuyen::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBChoatdongchidaotuyen::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBChoatdongchidaotuyen::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szCondition, szGroupBy;
	szCondition.Empty();
	szGroupBy.Empty();
	UpdateData(TRUE);
	
	szGroupBy = _T(" GROUP BY mdsdl_idx, mdsdl_index, mdsdl_work, mdsdl_unit ");
	szCondition.Format(_T(" AND mdsdr_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	//if (m_szReportByKey.MakeUpper().Trim() == _T("D"))
	//{
	//	szCondition.Format(_T(" AND mdsdr_date BETWEEN date('%s') AND date('%s')"), m_szFromDate, m_szToDate);
	//	//szGroupBy = _T(" GROUP BY mdsdl_idx, mdsdr_date, mdsdl_index, mdsdl_work, mdsdl_unit ");
	//}
	//else if (m_szReportByKey.MakeUpper().Trim() == _T("M"))
	//{
	//	szCondition.Format(_T(" AND mdsdr_month=%d AND mdsdr_year=%d "), ToInt(m_szMonthKey), ToInt(m_szYearKey));
	//	//szGroupBy = _T(" GROUP BY mdsdl_idx, mdsdr_month, mdsdl_index, mdsdl_work, mdsdl_unit ");
	//}
	//else
	//{
	//	szCondition.Format(_T(" AND mdsdr_quarter=%d AND mdsdr_year=%d "), ToInt(m_szQuarterKey), ToInt(m_szYearKey));
	//	//szGroupBy = _T(" GROUP BY mdsdl_idx, mdsdr_quarter, mdsdl_index, mdsdl_work, mdsdl_unit ");
	//}
	m_wndList.BeginLoad();
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mdsdl_idx, mdsdl_index AS pIndex, mdsdl_work AS pWork, mdsdl_unit AS Unit, Sum(mdsdr_quantity) AS Quantity FROM mds_directedonline_list ")\
				 _T("LEFT JOIN mds_directedonline_report ON(mdsdl_idx=mdsdr_refidx %s) %s ORDER BY mdsdl_idx"), szCondition, szGroupBy);
	//MessageBox(szSQL);
	nCount = m_rs->ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!m_rs->IsEOF())
	{ 
		m_wndList.AddItems(m_rs->GetValue(_T("pIndex")), 
						   m_rs->GetValue(_T("pWork")),
						   m_rs->GetValue(_T("Unit")),
						   m_rs->GetValue(_T("Quantity")), NULL);
		m_rs->MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CMSBChoatdongchidaotuyen::OnLoadInputData()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (!m_szReportBy.IsEmpty())
	{
		CMSBChoatdongchidaotuyenDialog dlg(pMF);
		dlg.m_szRptBy = m_szReportBy;
		dlg.DoModal();
	}
	else
		ShowMessageBox(_T("No Setup Data"), MB_OK | MB_ICONEXCLAMATION);
	return 0;
}
int CMSBChoatdongchidaotuyen::OnAddMSBChoatdongchidaotuyen(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CMSBChoatdongchidaotuyen::OnEditMSBChoatdongchidaotuyen(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBChoatdongchidaotuyen::OnDeleteMSBChoatdongchidaotuyen(){
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
 		OnCancelMSBChoatdongchidaotuyen(); 
 	}
	return 0;
}
int CMSBChoatdongchidaotuyen::OnSaveMSBChoatdongchidaotuyen(){
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
 		//OnMSBChoatdongchidaotuyenListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CMSBChoatdongchidaotuyen::OnCancelMSBChoatdongchidaotuyen(){
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
int CMSBChoatdongchidaotuyen::OnMSBChoatdongchidaotuyenListLoadData(){
	return 0;
}
void CMSBChoatdongchidaotuyen::OnFormLoad()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT mdssl_reportby FROM mds_setup_list WHERE mdssl_reftbl='mds_directedonline_report'"));
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		m_szReportBy = rs.GetValue(_T("mdssl_reportby"));
		SetMode(VM_ADD);
	}
	else
		SetMode(VM_NONE);
}