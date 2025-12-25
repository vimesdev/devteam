#include "stdafx.h"
#include "SRMThuthapthongtinPTTT.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinPTTT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinPTTT *)pWnd)->OnToDateCheckValue();
} 
static void _OnOperationGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinPTTT* )pWnd)->OnOperationGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationGroupSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT *)pWnd)->OnOperationGroupSelendok();
}
/*static void _OnOperationGroupSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT *)pWnd)->OnOperationGroupKillfocus();
}*/
/*static void _OnOperationGroupKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT *)pWnd)->OnOperationGroupKillfocus();
}*/
static long _OnOperationGroupLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinPTTT *)pWnd)->OnOperationGroupLoadData();
}
/*static void _OnOperationGroupAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT *)pWnd)->OnOperationGroupAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinPTTT *pVw = (CSRMThuthapthongtinPTTT *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinPTTT *pVw = (CSRMThuthapthongtinPTTT *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinPTTT *pVw = (CSRMThuthapthongtinPTTT *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CSRMThuthapthongtinPTTT*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CSRMThuthapthongtinPTTT*)pWnd)->OnInPatientSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinPTTT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSRMThuthapthongtinPTTT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMThuthapthongtinPTTT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinPTTT*)pWnd)->OnListDeleteItem();
} 
static int _OnAddSRMThuthapthongtinPTTTFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinPTTT*)pWnd)->OnAddSRMThuthapthongtinPTTT();
} 
static int _OnEditSRMThuthapthongtinPTTTFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinPTTT*)pWnd)->OnEditSRMThuthapthongtinPTTT();
} 
static int _OnDeleteSRMThuthapthongtinPTTTFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinPTTT*)pWnd)->OnDeleteSRMThuthapthongtinPTTT();
} 
static int _OnSaveSRMThuthapthongtinPTTTFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinPTTT*)pWnd)->OnSaveSRMThuthapthongtinPTTT();
} 
static int _OnCancelSRMThuthapthongtinPTTTFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinPTTT*)pWnd)->OnCancelSRMThuthapthongtinPTTT();
}
static int _OnSelectAllFnc(CWnd *pWnd)
{
	return ((CSRMThuthapthongtinPTTT*)pWnd)->OnSelectAll();
}
static int _OnUnSelectAllFnc(CWnd *pWnd)
{
	return ((CSRMThuthapthongtinPTTT*)pWnd)->OnUnSelectAll();
}
CSRMThuthapthongtinPTTT::CSRMThuthapthongtinPTTT(CWnd *pParent)
{

	m_nDlgWidth = 445;
	m_nDlgHeight = 390;
	SetDefaultValues();
}
CSRMThuthapthongtinPTTT::~CSRMThuthapthongtinPTTT(){
}
void CSRMThuthapthongtinPTTT::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 350);
	m_wndDepartment.Create(this, _T("Department"), 10, 90, 430, 315);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 105, 55);
	m_wndFromDate.Create(this,110, 30, 230, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 430, 55); 
	m_wndOperationGroupLabel.Create(this, _T("Operation Group"), 10, 60, 105, 85);
	m_wndOperationGroup.Create(this,110, 60, 430, 85); 
	//m_wndPrint.Create(this, _T("&Print"), 185, 355, 265, 380);
	m_wndExport.Create(this, _T("&Export"), 355, 355, 435, 380);
	//m_wndClose.Create(this, _T("&Close"), 355, 355, 435, 380);
	m_wndOutPatient.Create(this, _T("OutPatient"), 265, 320, 345, 345);
	m_wndInPatient.Create(this, _T("InPatient"), 350, 320, 430, 345);
	m_wndList.Create(this,15, 115, 425, 310);
}
void CSRMThuthapthongtinPTTT::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndOperationGroup.SetCheckValue(true);
	m_wndOperationGroup.LimitText(81);
	m_wndOperationGroup.SetCheckBox(TRUE);
	m_wndList.SetCheckBox(TRUE);

	m_wndOperationGroup.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 70);
	m_wndOperationGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);

}
void CSRMThuthapthongtinPTTT::OnSetWindowEvents()
{
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndOperationGroup.SetEvent(WE_SELENDOK, _OnOperationGroupSelendokFnc);
	//m_wndOperationGroup.SetEvent(WE_SETFOCUS, _OnOperationGroupSetfocusFnc);
	//m_wndOperationGroup.SetEvent(WE_KILLFOCUS, _OnOperationGroupKillfocusFnc);
	m_wndOperationGroup.SetEvent(WE_SELCHANGE, _OnOperationGroupSelectChangeFnc);
	m_wndOperationGroup.SetEvent(WE_LOADDATA, _OnOperationGroupLoadDataFnc);
	//m_wndOperationGroup.SetEvent(WE_ADDNEW, _OnOperationGroupAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Command"));
	m_wndList.AddEvent(1, _T("Select All"), _OnSelectAllFnc);
	m_wndList.AddEvent(2, _T("Unselect All"), _OnUnSelectAllFnc);
	SetMode(VM_EDIT);
	OnListLoadData();
}
void CSRMThuthapthongtinPTTT::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndOperationGroup.GetDlgCtrlID(), m_szOperationGroupKey);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
}
void CSRMThuthapthongtinPTTT::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMThuthapthongtinPTTT::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMThuthapthongtinPTTT::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOperationGroupKey.Empty();
	m_nOutPatient=0;
	m_nInPatient=1;

}
int CSRMThuthapthongtinPTTT::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db);
		CDate date;
		date.ParseDate(pMF->GetSysDate());
		CDateTime dt1, dt2;
		dt1.SetDate(date.GetYear(), date.GetMonth(), date.GetDay());
		dt1.SetTime(0, 1, 0);
		dt2.SetDate(date.GetYear(), date.GetMonth(), date.GetDay());
		dt2.SetTime(23, 59, 0);
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_szFromDate = dt1.GetDateTime();
			m_szToDate = dt2.GetDateTime();
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
/*void CSRMThuthapthongtinPTTT::OnFromDateChange(){
	
} */
/*void CSRMThuthapthongtinPTTT::OnFromDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinPTTT::OnFromDateKillfocus(){
	
} */
int CSRMThuthapthongtinPTTT::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMThuthapthongtinPTTT::OnToDateChange(){
	
} */
/*void CSRMThuthapthongtinPTTT::OnToDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinPTTT::OnToDateKillfocus(){
	
} */
int CSRMThuthapthongtinPTTT::OnToDateCheckValue(){
	return 0;
} 
void CSRMThuthapthongtinPTTT::OnOperationGroupSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinPTTT::OnOperationGroupSelendok(){
	 
}
/*void CSRMThuthapthongtinPTTT::OnOperationGroupSetfocus(){
	
}*/
/*void CSRMThuthapthongtinPTTT::OnOperationGroupKillfocus(){
	
}*/
long CSRMThuthapthongtinPTTT::OnOperationGroupLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndOperationGroup.IsSearchKey() && !m_szOperationGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szOperationGroupKey);
	}
	m_wndOperationGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name ")\
		         _T("FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN ('B4', 'B5') %s ORDER BY hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperationGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThuthapthongtinPTTT::OnOperationGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinPTTT::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinPTTT::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szTemp, tmpStr;
	CString szDepartment, szOperation;
	CExcel xls;

	UpdateData(TRUE);
	BeginWaitCursor();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 51);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 11);
	xls.SetColumnWidth(4, 17);
	xls.SetColumnWidth(5, 17);

	int nRow = 0, nCol = 0;

	if (m_nOutPatient == 0)
		szWhere.AppendFormat(_T(" and ho_deptid IN('C1.1', 'C1.2', 'C1.3') "));
	else
		szWhere.AppendFormat(_T(" and ho_deptid NOT IN('C1.1', 'C1.2', 'C1.3') "));

	for (int i = 0 ; i < m_wndOperationGroup.GetCount(); i++)
	{
		if (m_wndOperationGroup.GetCheck(i))
		{
			if (!szOperation.IsEmpty())
				szOperation += _T(", ");
			szOperation.AppendFormat(_T("'%s'"), m_wndOperationGroup.GetCheck(i, 0));
		}
	}
	
	if (!szOperation.IsEmpty())
		szWhere.AppendFormat(_T(" and i.hfl_groupid in(%s) "), szOperation); 

	for (int i = 0 ; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szDepartment.IsEmpty())
				szDepartment += _T(", ");
			if (m_nOutPatient == 0)
				szDepartment.AppendFormat(_T("%d"), ToInt(m_wndList.GetItemText(i, 0)));
			else
				szDepartment.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));		
		}
	}

	if (!szDepartment.IsEmpty())
	{
		if (m_nOutPatient == 0)
		{
			szWhere.AppendFormat(_T(" and ho_roomid in (%s) "), szDepartment);
		}
		else
		{
			szWhere.AppendFormat(_T(" and ho_deptid in (%s) "), szDepartment);
		}
	}

	xls.SetCellMergedColumns(nCol, nRow, 6);
	xls.SetCellMergedColumns(nCol, nRow + 1, 6);

	xls.SetCellText(nCol, nRow,pMF->m_szHealthService, FMT_TEXT, true, 12);
	xls.SetCellText(nCol, nRow + 1,pMF->m_szHospitalName, FMT_TEXT, true, 12);

	xls.SetCellMergedColumns(nCol, nRow + 2, 6);

	xls.SetCellText(nCol, nRow + 3, _T("Thu th\x1EADp th\xF4ng tin PTTT"), FMT_TEXT, true, 16);	
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), 
			      CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
		          CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, true, 12);
	
	xls.SetCellText(nCol, nRow + 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 1, nRow + 5, _T("T\xEAn PTTT"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 2, nRow + 5, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 3, nRow + 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 4, nRow + 5, _T("Gi\xE1 ti\x1EC1n"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol + 5, nRow + 5, _T("T\x1ED5ng ti\x1EC1n"), FMT_TEXT | FMT_CENTER, true, 12);

	szSQL.Format(_T(" SELECT") \
		_T(" (SELECT hfg_name FROM hms_fee_group WHERE hfg_id=groupid") \
		_T(" ) AS groupname,") \
		_T(" groupid,") \
		_T(" operatename,") \
		_T(" unit,") \
		_T(" SUM(soluong) AS soluong,") \
		_T(" servprice,") \
		_T(" insprice,") \
		_T(" SUM(soluong * servprice) AS sumservprice,") \
		_T(" SUM(soluong * insprice)  AS suminsprice") \
		_T(" FROM") \
		_T(" (SELECT ho_deptid,") \
		_T(" i.hfl_groupid     AS groupid,") \
		_T(" hfl_name      AS operatename,") \
		_T(" hfl_unit      AS unit,") \
		_T(" SUM(1)        AS soluong,") \
		_T(" hfl_servprice AS servprice,") \
		_T(" hfl_insprice  AS insprice") \
		_T(" FROM hms_operation") \
		_T(" LEFT JOIN hms_fee_list i") \
		_T(" ON (hfl_groupid=i.hfl_groupid") \
		_T(" AND hfl_feeid  =ho_itemid)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno=ho_docno)") \
		_T(" WHERE ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND ho_status NOT IN('O') %s") \
		_T(" GROUP BY ho_deptid,") \
		_T(" i.hfl_groupid,") \
		_T(" hfl_name ,") \
		_T(" hfl_unit,") \
		_T(" hfl_servprice,") \
		_T(" hfl_insprice ") \
		_T(" ) tb1") \
		_T(" WHERE servprice > 0.0") \
		_T(" GROUP BY ho_deptid,") \
		_T(" groupid,") \
		_T(" operatename,") \
		_T(" unit,") \
		_T(" servprice,") \
		_T(" insprice") \
		_T(" ORDER BY groupid,") \
		_T(" operatename"), m_szFromDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);

	nRow += 6;
	int nIndex;
	double nGroupQuantity = 0, nQuantity = 0;
	double nGroupTotal = 0, nTotal = 0;
	while (!rs.IsEOF())
	{
		if (szTemp.IsEmpty() || szTemp != rs.GetValue(_T("groupid")))
		{
			if (nGroupTotal > 0)
			{
				xls.SetCellMergedColumns(nCol, nRow, 3);
				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng nh\xF3m"), FMT_TEXT | FMT_CENTER, true);
				xls.SetCellText(nCol + 3, nRow, double2str(nGroupQuantity), FMT_INTEGER, true);
				xls.SetCellText(nCol + 5, nRow, double2str(nGroupTotal), FMT_NUMBER1, true);
				nTotal += nGroupTotal;
				nQuantity += nGroupQuantity;
				nGroupTotal = 0;
				nGroupQuantity = 0;
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 6);
			xls.SetCellText(nCol, nRow, rs.GetValue(_T("groupname")), FMT_TEXT, true);
			nIndex = 1;
			nRow++;
		}
		tmpStr.Format(_T("%d"), nIndex);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		tmpStr = rs.GetValue(_T("operatename"));
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);

		tmpStr = rs.GetValue(_T("unit"));
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		tmpStr = rs.GetValue(_T("soluong"));
		nGroupQuantity += ToDouble(tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_INTEGER);

		tmpStr = rs.GetValue(_T("servprice"));
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_NUMBER1);

		tmpStr = rs.GetValue(_T("sumservprice"));
		nGroupTotal += ToDouble(tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1);

		szTemp = rs.GetValue(_T("groupid"));
		nIndex++;
		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 3);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng nh\xF3m"), FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(nCol + 3, nRow, double2str(nGroupQuantity), FMT_INTEGER, true);
		xls.SetCellText(nCol + 5, nRow, double2str(nGroupTotal), FMT_NUMBER1, true);
		nTotal += nGroupTotal;
		nQuantity += nGroupQuantity;
		nRow++;
	}
	if (nTotal > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 3);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER, true);
		xls.SetCellText(nCol + 3, nRow, double2str(nQuantity), FMT_INTEGER, true);
		xls.SetCellText(nCol + 5, nRow, double2str(nTotal), FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\SRMThuthapthongtinPTTT.xls"));
} 
void CSRMThuthapthongtinPTTT::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 
void CSRMThuthapthongtinPTTT::OnOutPatientSelect()
{
	UpdateData(TRUE);
	OnListLoadData();
}
void CSRMThuthapthongtinPTTT::OnInPatientSelect()
{
	UpdateData(TRUE);
	OnListLoadData();
}
int CSRMThuthapthongtinPTTT::OnSelectAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!m_wndList.GetCheck(i))
			m_wndList.SetCheck(i);
	}
	return 0;
}
int CSRMThuthapthongtinPTTT::OnUnSelectAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, FALSE);
	}
	return 0;
}
void CSRMThuthapthongtinPTTT::OnListDblClick()
{	
} 
void CSRMThuthapthongtinPTTT::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CSRMThuthapthongtinPTTT::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSRMThuthapthongtinPTTT::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	if (m_nOutPatient == 0)
	{
		szSQL.Format(_T("SELECT hrl_id AS ID, hrl_name AS Name FROM hms_roomlist ")\
					 _T("LEFT JOIN sys_dept ON(sd_id=hrl_deptid) WHERE sd_type ='KB' ORDER BY hrl_id"));
	}
	else
	{
		szSQL.Format(_T("SELECT sd_id AS ID, sd_name AS Name ")\
				     _T("FROM sys_dept WHERE sd_type='DT' ORDER BY sd_id"));
	}
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CSRMThuthapthongtinPTTT::OnAddSRMThuthapthongtinPTTT()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSRMThuthapthongtinPTTT::OnEditSRMThuthapthongtinPTTT()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMThuthapthongtinPTTT::OnDeleteSRMThuthapthongtinPTTT()
{
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
 		OnCancelSRMThuthapthongtinPTTT(); 
 	}
	return 0;
}
int CSRMThuthapthongtinPTTT::OnSaveSRMThuthapthongtinPTTT()
{
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
 		//OnSRMThuthapthongtinPTTTListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSRMThuthapthongtinPTTT::OnCancelSRMThuthapthongtinPTTT(){
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
int CSRMThuthapthongtinPTTT::OnSRMThuthapthongtinPTTTListLoadData(){
	return 0;
}
