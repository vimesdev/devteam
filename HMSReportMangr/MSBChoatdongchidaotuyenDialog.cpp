#include "MSBChoatdongchidaotuyenDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyenDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBChoatdongchidaotuyenDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyenDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnMonthSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBChoatdongchidaotuyenDialog* )pWnd)->OnMonthSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMonthSelendokFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnMonthSelendok();
}
/*static void _OnMonthSetfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnMonthKillfocus();
}*/
/*static void _OnMonthKillfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnMonthKillfocus();
}*/
static long _OnMonthLoadDataFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnMonthLoadData();
}
/*static void _OnMonthAddNewFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnMonthAddNew();
}*/
static void _OnQuarterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBChoatdongchidaotuyenDialog* )pWnd)->OnQuarterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnQuarterSelendokFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnQuarterSelendok();
}
/*static void _OnQuarterSetfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnQuarterKillfocus();
}*/
/*static void _OnQuarterKillfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnQuarterKillfocus();
}*/
static long _OnQuarterLoadDataFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnQuarterLoadData();
}
/*static void _OnQuarterAddNewFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnQuarterAddNew();
}*/
static void _OnYearSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBChoatdongchidaotuyenDialog* )pWnd)->OnYearSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnYearSelendokFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnYearSelendok();
}
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnYearKillfocus();
}*/
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnYearKillfocus();
}*/
static long _OnYearLoadDataFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnYearLoadData();
}
/*static void _OnYearAddNewFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnYearAddNew();
}*/
/*static void _OnDayChangeFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnDayChange();
} */
/*static void _OnDaySetfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnDaySetfocus();} */ 
/*static void _OnDayKillfocusFnc(CWnd *pWnd){
	((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnDayKillfocus();
} */
static int _OnDayCheckValueFnc(CWnd *pWnd){
	return ((CMSBChoatdongchidaotuyenDialog *)pWnd)->OnDayCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CMSBChoatdongchidaotuyenDialog *pVw = (CMSBChoatdongchidaotuyenDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CMSBChoatdongchidaotuyenDialog *pVw = (CMSBChoatdongchidaotuyenDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddMSBChoatdongchidaotuyenDialogFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyenDialog*)pWnd)->OnAddMSBChoatdongchidaotuyenDialog();
} 
static int _OnEditMSBChoatdongchidaotuyenDialogFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyenDialog*)pWnd)->OnEditMSBChoatdongchidaotuyenDialog();
} 
static int _OnDeleteMSBChoatdongchidaotuyenDialogFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyenDialog*)pWnd)->OnDeleteMSBChoatdongchidaotuyenDialog();
} 
static int _OnSaveMSBChoatdongchidaotuyenDialogFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyenDialog*)pWnd)->OnSaveMSBChoatdongchidaotuyenDialog();
} 
static int _OnCancelMSBChoatdongchidaotuyenDialogFnc(CWnd *pWnd){
	 return ((CMSBChoatdongchidaotuyenDialog*)pWnd)->OnCancelMSBChoatdongchidaotuyenDialog();
} 
CMSBChoatdongchidaotuyenDialog::CMSBChoatdongchidaotuyenDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CMSBChoatdongchidaotuyenDialog::~CMSBChoatdongchidaotuyenDialog()
{
}
void CMSBChoatdongchidaotuyenDialog::OnCreateComponents()
{
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 795, 565);
	m_wndList.Create(this,10, 90, 790, 560); 
	m_wndMonthLabel.Create(this, _T("Month"), 10, 30, 70, 55);
	m_wndMonth.Create(this,75, 30, 165, 55); 
	m_wndQuarterLabel.Create(this, _T("Quarter"), 170, 30, 230, 55);
	m_wndQuarter.Create(this,235, 30, 315, 55); 
	m_wndYearLabel.Create(this, _T("Year"), 320, 30, 380, 55);
	m_wndYear.Create(this,385, 30, 475, 55); 
	m_wndDayLabel.Create(this, _T("Day"), 10, 60, 70, 85);
	m_wndDay.Create(this,75, 60, 165, 85); 
	m_wndSave.Create(this, _T("&Save"), 630, 570, 710, 595);
	m_wndClose.Create(this, _T("&Close"), 715, 570, 795, 595);

}
void CMSBChoatdongchidaotuyenDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndMonth.SetCheckValue(true);
	m_wndMonth.LimitText(35);
	//m_wndQuarter.SetCheckValue(true);
	m_wndQuarter.LimitText(35);
	//m_wndYear.SetCheckValue(true);
	m_wndYear.LimitText(35);
	m_wndDay.SetMax(CDate(pMF->GetSysDate()));
	//m_wndDay.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Work"), CFMT_TEXT, 500);
	m_wndList.InsertColumn(2, _T("Quantity"), CFMT_NUMBER, 150);
	m_wndList.InsertColumn(3, _T("Serial"), CFMT_TEXT, 0);

	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.SetDisplayColor(true);
	m_wndList.SetEditLabel(2, GUI_NUMBERCTRL);

	m_wndMonth.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMonth.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndQuarter.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndQuarter.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndYear.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndYear.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_directedonline_report_Tbl.SetTableName(_T("mds_directedonline_report"));
	m_directedonline_report_Tbl.AddField(_T("mdsdr_serial"), dfLong);
	m_directedonline_report_Tbl.AddField(_T("mdsdr_refidx"), dfLong);
	m_directedonline_report_Tbl.AddField(_T("mdsdr_date"), dfDate);
	m_directedonline_report_Tbl.AddField(_T("mdsdr_month"), dfInteger);
	m_directedonline_report_Tbl.AddField(_T("mdsdr_quarter"), dfInteger);
	m_directedonline_report_Tbl.AddField(_T("mdsdr_year"), dfInteger);
	m_directedonline_report_Tbl.AddField(_T("mdsdr_quantity"), dfDouble);

}
void CMSBChoatdongchidaotuyenDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
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
	//m_wndDay.SetEvent(WE_CHANGE, _OnDayChangeFnc);
	//m_wndDay.SetEvent(WE_SETFOCUS, _OnDaySetfocusFnc);
	//m_wndDay.SetEvent(WE_KILLFOCUS, _OnDayKillfocusFnc);
	m_wndDay.SetEvent(WE_CHECKVALUE, _OnDayCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);
	if (m_szRptBy.MakeUpper() == _T("D"))
	{
		m_wndMonth.EnableWindow(FALSE);
		m_wndQuarter.EnableWindow(FALSE);
		m_wndYear.EnableWindow(FALSE);
		m_wndDay.SetCheckValue(true);
	}
	else if (m_szRptBy.MakeUpper() == _T("M"))
	{
		m_wndDay.EnableWindow(FALSE);
		m_wndQuarter.EnableWindow(FALSE);
		m_wndMonth.SetCheckValue(true);
		m_wndYear.SetCheckValue(true);
	}
	else
	{
		m_wndDay.EnableWindow(FALSE);
		m_wndMonth.EnableWindow(FALSE);
		m_wndQuarter.SetCheckValue(true);
		m_wndYear.SetCheckValue(true);
	}
	//UpdateData(FALSE);
	OnListLoadData();
}
void CMSBChoatdongchidaotuyenDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndMonth.GetDlgCtrlID(), m_szMonthKey);
	DDX_TextEx(pDX, m_wndQuarter.GetDlgCtrlID(), m_szQuarterKey);
	DDX_TextEx(pDX, m_wndYear.GetDlgCtrlID(), m_szYearKey);
	DDX_TextEx(pDX, m_wndDay.GetDlgCtrlID(), m_szDay);

}
void CMSBChoatdongchidaotuyenDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBChoatdongchidaotuyenDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBChoatdongchidaotuyenDialog::SetDefaultValues(){

	m_szMonthKey.Empty();
	m_szQuarterKey.Empty();
	m_szYearKey.Empty();
	m_szDay.Empty();

}
int CMSBChoatdongchidaotuyenDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL, szDate; 
 		CRecord rs(&pMF->m_db);
		int nQuarter;
		szDate = pMF->GetSysDate(); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues();
			m_szDay = pMF->GetSysDate();
			m_szMonthKey.Format(_T("%d"), ToInt(szDate.Mid(5, 2)));
			m_szYearKey = szDate.Left(4);
			nQuarter = ToInt(szDate.Mid(5, 2)) % 3;
			if (nQuarter != 0)
				nQuarter = ToInt(szDate.Mid(5, 2)) / 3 + 1;
			else
				nQuarter = ToInt(szDate.Mid(5, 2)) / 3;
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
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CMSBChoatdongchidaotuyenDialog::OnListDblClick()
{
	m_wndList.PostMessage(WM_KEYDOWN, VK_F2);
} 
void CMSBChoatdongchidaotuyenDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBChoatdongchidaotuyenDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBChoatdongchidaotuyenDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rrs(&pMF->m_db);
	CString szSQL, szDate;
	m_szCondition.Empty();
	m_bIsEmpty = true;
	if (m_szRptBy.MakeUpper() == _T("M"))
		szDate = GetDate(m_szRptBy, m_szMonthKey, m_szYearKey);
	else if (m_szRptBy.MakeUpper() == _T("Q"))
		szDate = GetDate(m_szRptBy, m_szQuarterKey, m_szYearKey);
	else
		szDate = m_szDay;
	szSQL.Format(_T("SELECT Count(*) FROM mds_directedonline_report WHERE mdsdr_date = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), szDate);
	rrs.ExecSQL(szSQL);
	if (rrs.GetIntValue() > 0)
	{
		m_szCondition.Format(_T(" AND mdsdr_date = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), szDate);
		m_bIsEmpty = false;
	}
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	if (!m_bIsEmpty)
		szSQL.Format(_T("SELECT mdsdl_idx AS pID, mdsdl_index||'  '||mdsdl_work AS pWork, mdsdr_quantity AS Quantity, mdsdr_serial AS Serial ")\
					 _T("FROM mds_directedonline_list ")\
					 _T("LEFT JOIN mds_directedonline_report ON(mdsdr_refidx=mdsdl_idx %s) ORDER BY mdsdl_idx"), m_szCondition);
	else
		szSQL.Format(_T("SELECT mdsdl_idx AS pID, mdsdl_index||'  '||mdsdl_work AS pWork, '' AS Quantity, '' AS Serial ")\
					 _T("FROM mds_directedonline_list ")\
					 _T("ORDER BY mdsdl_idx"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("pID")), 
			rs.GetValue(_T("pWork")), 
			rs.GetValue(_T("Quantity")),
			rs.GetValue(_T("Serial")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CMSBChoatdongchidaotuyenDialog::OnMonthSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBChoatdongchidaotuyenDialog::OnMonthSelendok()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CMSBChoatdongchidaotuyenDialog::OnMonthSetfocus(){
	
}*/
/*void CMSBChoatdongchidaotuyenDialog::OnMonthKillfocus(){
	
}*/
long CMSBChoatdongchidaotuyenDialog::OnMonthLoadData()
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
/*void CMSBChoatdongchidaotuyenDialog::OnMonthAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBChoatdongchidaotuyenDialog::OnQuarterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBChoatdongchidaotuyenDialog::OnQuarterSelendok()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CMSBChoatdongchidaotuyenDialog::OnQuarterSetfocus(){
	
}*/
/*void CMSBChoatdongchidaotuyenDialog::OnQuarterKillfocus(){
	
}*/
long CMSBChoatdongchidaotuyenDialog::OnQuarterLoadData()
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
/*void CMSBChoatdongchidaotuyenDialog::OnQuarterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBChoatdongchidaotuyenDialog::OnYearSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBChoatdongchidaotuyenDialog::OnYearSelendok()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CMSBChoatdongchidaotuyenDialog::OnYearSetfocus(){
	
}*/
/*void CMSBChoatdongchidaotuyenDialog::OnYearKillfocus(){
	
}*/
long CMSBChoatdongchidaotuyenDialog::OnYearLoadData()
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
/*void CMSBChoatdongchidaotuyenDialog::OnYearAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CMSBChoatdongchidaotuyenDialog::OnDayChange(){
	
} */
/*void CMSBChoatdongchidaotuyenDialog::OnDaySetfocus(){
	
} */
/*void CMSBChoatdongchidaotuyenDialog::OnDayKillfocus(){
	
} */
int CMSBChoatdongchidaotuyenDialog::OnDayCheckValue()
{
	UpdateData(TRUE);
	OnListLoadData();
	return 0;
} 
void CMSBChoatdongchidaotuyenDialog::OnSaveSelect()
{
	if (m_wndList.GetItemCount() == 0)
		return;
	/*if (!IsValidateData())
	{
		return;
	}*/
	UpdateData(TRUE);
	if (m_szRptBy.MakeUpper() == _T("D"))
	{
		CDate date;
		date.ParseDate(m_szDay);
		if (date.GetYear() == 1752)
			return;
	}
	else if (m_szRptBy.MakeUpper() == _T("M"))
	{
		if (m_szMonthKey.IsEmpty() || m_szYearKey.IsEmpty())
			return;
	}
	else
	{
		if (m_szQuarterKey.IsEmpty() || m_szYearKey.IsEmpty())
			return;
	}
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szCode, szQuantity;
	CString szInsExcept, szWhere, szDate;
	int nMonth = 0, nQuarter = 0, nYear = 0, ret;
	szInsExcept.Empty();
	if (m_szRptBy.MakeUpper() == _T("D"))
	{
		CDate date(m_szDay);
		nMonth = date.GetMonth();
		nYear = date.GetYear();
		if (nMonth % 3 != 0)
			nQuarter = nMonth / 3 + 1;
		else
			nQuarter = nMonth / 3;
		szInsExcept = _T("mdsdr_serial");
		//szWhere.Format(_T(" WHERE mdsdr_date=date('%s') "), m_szDay);
	}
	else if (m_szRptBy.MakeUpper() == _T("M"))
	{
		nMonth = ToInt(m_szMonthKey);
		nYear = ToInt(m_szYearKey);
		if (nMonth % 3 != 0)
			nQuarter = nMonth / 3 + 1;
		else
			nQuarter = nMonth / 3;
		szInsExcept = _T("mdsdr_serial");
		//szWhere.Format(_T(" WHERE mdsdr_month=%d AND mdsdr_year=%d "), nMonth, nYear);
	}
	else
	{
		nQuarter = ToInt(m_szQuarterKey);
		nYear = ToInt(m_szYearKey);
		szInsExcept = _T("mdsdr_serial, mdsdr_month");
		//szWhere.Format(_T(" WHERE mdsdr_quarter=%d AND mdsdr_year=%d "), nQuarter, nYear);
	}
	if (m_szRptBy.MakeUpper() == _T("M"))
		szDate = GetDate(m_szRptBy, m_szMonthKey, m_szYearKey);
	else if (m_szRptBy.MakeUpper() == _T("Q"))
		szDate = GetDate(m_szRptBy, m_szQuarterKey, m_szYearKey);
	else
		szDate = m_szDay;
	m_directedonline_report_Tbl.SetValue(_T("mdsdr_date"),  szDate);
	m_directedonline_report_Tbl.SetValue(_T("mdsdr_month"), nMonth);
	m_directedonline_report_Tbl.SetValue(_T("mdsdr_quarter"), nQuarter);
	m_directedonline_report_Tbl.SetValue(_T("mdsdr_year"), nYear);
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		szCode = m_wndList.GetItemText(i, 0);
		szQuantity = m_wndList.GetItemText(i, 2);
		if (!szQuantity.IsEmpty())
		{
			m_directedonline_report_Tbl.SetValue(_T("mdsdr_refidx"), ToInt(szCode));
			m_directedonline_report_Tbl.SetValue(_T("mdsdr_quantity"), ToDouble(szQuantity));
			szSQL.Format(_T("SELECT Count(*) FROM mds_directedonline_report WHERE mdsdr_serial=%ld"), ToInt(m_wndList.GetItemText(i, 3)));
			rs.ExecSQL(szSQL);
			if (rs.GetIntValue() > 0)
			{
				szSQL = m_directedonline_report_Tbl.GetUpdateSQL(_T("mdsdr_serial, mdsdr_refidx, mdsdr_date, mdsdr_month, mdsdr_quarter, mdsdr_year"));
				//szTemp.Format(_T(" AND mdsdr_refidx=%d "), ToInt(szCode));
				//szWhere += szTemp;
				szWhere.Format(_T(" WHERE mdsdr_serial=%ld "), ToInt(m_wndList.GetItemText(i, 3)));
				szSQL += szWhere;
				//MessageBox(szSQL);
			}
			else
			{
				szSQL = m_directedonline_report_Tbl.GetInsertSQL(szInsExcept);
				//MessageBox(szSQL);
			}
			ret = pMF->ExecSQL(szSQL);
			if (ret < 0)
				return;
		}
	}
	if (ret >= 0)
		OnListLoadData();
} 
void CMSBChoatdongchidaotuyenDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CMSBChoatdongchidaotuyenDialog::OnAddMSBChoatdongchidaotuyenDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CMSBChoatdongchidaotuyenDialog::OnEditMSBChoatdongchidaotuyenDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBChoatdongchidaotuyenDialog::OnDeleteMSBChoatdongchidaotuyenDialog(){
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
 		OnCancelMSBChoatdongchidaotuyenDialog(); 
 	}
	return 0;
}
int CMSBChoatdongchidaotuyenDialog::OnSaveMSBChoatdongchidaotuyenDialog(){
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
 		//OnMSBChoatdongchidaotuyenDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CMSBChoatdongchidaotuyenDialog::OnCancelMSBChoatdongchidaotuyenDialog(){
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
int CMSBChoatdongchidaotuyenDialog::OnMSBChoatdongchidaotuyenDialogListLoadData(){
	return 0;
}
CString CMSBChoatdongchidaotuyenDialog::GetDate(CString szReportBy, CString szInputKey, CString szYear)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szDate;
	CDate date;
	if (szReportBy.MakeUpper() == _T("M"))
	{
		date.SetDate(ToInt(szYear), ToInt(szInputKey), 1);
		szDate.Format(_T("%.4d/%.2d/%.2d"), ToInt(szYear), ToInt(szInputKey), date.GetMonthLastDay());
	}
	else if (szReportBy.MakeUpper() == _T("Q"))
	{
		switch (ToInt(szInputKey))
		{
			case 1:
				szDate.Format(_T("%.4d/03/31"), ToInt(szYear));
				break;
			case 2:
				szDate.Format(_T("%.4d/06/30"), ToInt(szYear));
				break;
			case 3:
				szDate.Format(_T("%.4d/09/30"), ToInt(szYear));
				break;
			case 4:
				szDate.Format(_T("%.4d/12/31"), ToInt(szYear));
				break;
		}
	}
	return szDate;
}