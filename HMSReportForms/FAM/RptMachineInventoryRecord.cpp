#include "stdafx.h"
#include "RptMachineInventoryRecord.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRptMachineInventoryRecord* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRptMachineInventoryRecord *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRptMachineInventoryRecord *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRptMachineInventoryRecord *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRptMachineInventoryRecord *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRptMachineInventoryRecord *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnPreInventoryDateChangeFnc(CWnd *pWnd){
	((CRptMachineInventoryRecord *)pWnd)->OnPreInventoryDateChange();
} */
/*static void _OnPreInventoryDateSetfocusFnc(CWnd *pWnd){
	((CRptMachineInventoryRecord *)pWnd)->OnPreInventoryDateSetfocus();} */ 
/*static void _OnPreInventoryDateKillfocusFnc(CWnd *pWnd){
	((CRptMachineInventoryRecord *)pWnd)->OnPreInventoryDateKillfocus();
} */
static int _OnPreInventoryDateCheckValueFnc(CWnd *pWnd){
	return ((CRptMachineInventoryRecord *)pWnd)->OnPreInventoryDateCheckValue();
} 
/*static void _OnInventoryDateChangeFnc(CWnd *pWnd){
	((CRptMachineInventoryRecord *)pWnd)->OnInventoryDateChange();
} */
/*static void _OnInventoryDateSetfocusFnc(CWnd *pWnd){
	((CRptMachineInventoryRecord *)pWnd)->OnInventoryDateSetfocus();} */ 
/*static void _OnInventoryDateKillfocusFnc(CWnd *pWnd){
	((CRptMachineInventoryRecord *)pWnd)->OnInventoryDateKillfocus();
} */
static int _OnInventoryDateCheckValueFnc(CWnd *pWnd){
	return ((CRptMachineInventoryRecord *)pWnd)->OnInventoryDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRptMachineInventoryRecord *pVw = (CRptMachineInventoryRecord *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRptMachineInventoryRecord *pVw = (CRptMachineInventoryRecord *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddRptMachineInventoryRecordFnc(CWnd *pWnd){
	 return ((CRptMachineInventoryRecord*)pWnd)->OnAddRptMachineInventoryRecord();
} 
static int _OnEditRptMachineInventoryRecordFnc(CWnd *pWnd){
	 return ((CRptMachineInventoryRecord*)pWnd)->OnEditRptMachineInventoryRecord();
} 
static int _OnDeleteRptMachineInventoryRecordFnc(CWnd *pWnd){
	 return ((CRptMachineInventoryRecord*)pWnd)->OnDeleteRptMachineInventoryRecord();
} 
static int _OnSaveRptMachineInventoryRecordFnc(CWnd *pWnd){
	 return ((CRptMachineInventoryRecord*)pWnd)->OnSaveRptMachineInventoryRecord();
} 
static int _OnCancelRptMachineInventoryRecordFnc(CWnd *pWnd){
	 return ((CRptMachineInventoryRecord*)pWnd)->OnCancelRptMachineInventoryRecord();
} 
CRptMachineInventoryRecord::CRptMachineInventoryRecord(CWnd *pParent)
{

	m_nDlgWidth = 415;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CRptMachineInventoryRecord::~CRptMachineInventoryRecord(){
}
void CRptMachineInventoryRecord::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 405, 120);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 120, 55);
	m_wndDepartment.Create(this,125, 30, 400, 55); 
	m_wndPreInventoryDateLabel.Create(this, _T("Pre Inventory Date"), 10, 60, 120, 85);
	m_wndPreInventoryDate.Create(this,125, 60, 205, 85); 
	m_wndInventoryDateLabel.Create(this, _T("Inventory Date"), 210, 60, 315, 85);
	m_wndInventoryDate.Create(this,320, 60, 400, 85); 
	m_wndExport.Create(this, _T("Export"), 235, 90, 315, 115);
	m_wndClose.Create(this, _T("Close"), 320, 90, 400, 115);

}
void CRptMachineInventoryRecord::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndPreInventoryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPreInventoryDate.SetCheckValue(true);
	m_wndInventoryDate.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CRptMachineInventoryRecord::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndPreInventoryDate.SetEvent(WE_CHANGE, _OnPreInventoryDateChangeFnc);
	//m_wndPreInventoryDate.SetEvent(WE_SETFOCUS, _OnPreInventoryDateSetfocusFnc);
	//m_wndPreInventoryDate.SetEvent(WE_KILLFOCUS, _OnPreInventoryDateKillfocusFnc);
	m_wndPreInventoryDate.SetEvent(WE_CHECKVALUE, _OnPreInventoryDateCheckValueFnc);
	//m_wndInventoryDate.SetEvent(WE_CHANGE, _OnInventoryDateChangeFnc);
	//m_wndInventoryDate.SetEvent(WE_SETFOCUS, _OnInventoryDateSetfocusFnc);
	//m_wndInventoryDate.SetEvent(WE_KILLFOCUS, _OnInventoryDateKillfocusFnc);
	m_wndInventoryDate.SetEvent(WE_CHECKVALUE, _OnInventoryDateCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);

}
void CRptMachineInventoryRecord::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndPreInventoryDate.GetDlgCtrlID(), m_szPreInventoryDate);
	DDX_TextEx(pDX, m_wndInventoryDate.GetDlgCtrlID(), m_szInventoryDate);

}
void CRptMachineInventoryRecord::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRptMachineInventoryRecord::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRptMachineInventoryRecord::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szPreInventoryDate.Empty();
	m_szInventoryDate.Empty();

}
int CRptMachineInventoryRecord::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndPreInventoryDate.EnableWindow(FALSE);
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
void CRptMachineInventoryRecord::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	szDept = m_wndDepartment.GetCurrent(1);
} 
void CRptMachineInventoryRecord::OnDepartmentSelendok(){
	 
}
/*void CRptMachineInventoryRecord::OnDepartmentSetfocus(){
	
}*/
/*void CRptMachineInventoryRecord::OnDepartmentKillfocus(){
	
}*/
long CRptMachineInventoryRecord::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CRptMachineInventoryRecord::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRptMachineInventoryRecord::OnPreInventoryDateChange(){
	
} */
/*void CRptMachineInventoryRecord::OnPreInventoryDateSetfocus(){
	
} */
/*void CRptMachineInventoryRecord::OnPreInventoryDateKillfocus(){
	
} */
int CRptMachineInventoryRecord::OnPreInventoryDateCheckValue(){
	return 0;
} 
/*void CRptMachineInventoryRecord::OnInventoryDateChange(){
	
} */
/*void CRptMachineInventoryRecord::OnInventoryDateSetfocus(){
	
} */
/*void CRptMachineInventoryRecord::OnInventoryDateKillfocus(){
	
} */
int CRptMachineInventoryRecord::OnInventoryDateCheckValue(){
	return 0;
} 
void CRptMachineInventoryRecord::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString lpszChapter[] = {_T("A"), _T("B"), _T("C"), _T("D"), _T("E"), _T("F"),							_T("G"), _T("H"), _T("I"), _T("J"), _T("K"), _T("L"), _T("M"),							_T("N"), _T("O"), _T("P"), _T("Q"), _T("R"), _T("S"),							_T("T"), _T("U"), _T("V"), _T("X"), _T("Y"), _T("Z")};	CString szInfo, szNewLine, szOldLine, szIndex, szDate;	CString szSQL, szSQL1, szSQL2, tmpStr, szTemp, szWhere;	CDate dt;	dt.ParseDate(m_szInventoryDate);	int nDay = dt.GetDay();	int nMonth = dt.GetMonth();	int nYear = dt.GetYear();	CString m_szDate;	m_szDate.Format(_T("(\x30h ng\xE0y %d th\xE1ng %d n\x103m %d)"), nDay, nMonth, nYear);	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 30);	xls.SetColumnWidth(2, 5);	xls.SetColumnWidth(3, 10);	xls.SetRowHeight(3, 30);	xls.SetColumnWidth(4, 5);	xls.SetColumnWidth(5, 5);	xls.SetColumnWidth(6, 5);	xls.SetColumnWidth(7, 5);	xls.SetColumnWidth(8, 5);	xls.SetColumnWidth(9, 5);	xls.SetColumnWidth(10, 2);	xls.SetColumnWidth(11, 2);	xls.SetColumnWidth(12, 2);	xls.SetColumnWidth(13, 2);	xls.SetColumnWidth(14, 2);	xls.SetColumnWidth(15, 5);	xls.SetColumnWidth(16, 7);	xls.SetCellText(0, 0, _T("\x42\x1EC7nh vi\xEAn TWQ\x110 \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , true, 10);	if(!m_szDepartmentKey.IsEmpty())	{		xls.SetCellText(0, 1, szDept, FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	}	xls.SetCellText(0, 3, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(1, 3, _T("T\xEAn m\xE1y - Mo\x64\x65l - S\x65ri\x65 - N\x1B0\x1EDB\x63 s\x1EA3n \x78u\x1EA5t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(2, 3, _T("\x110\x1A1n v\x1ECB t\xEDnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(3, 0, _T("\x42I\xCAN \x42\x1EA2N KI\x1EC2M K\xCA M\xC1Y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , true, 10);	xls.SetCellText(3, 1, m_szDate, FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	szDate = CDate::Convert(m_szPreInventoryDate, yyyymmdd, ddmmyyyy);	tmpStr.Format(_T("S\x1ED1 li\x1EC7u ki\x1EC3m k\xEA \x30 gi\x1EDD %s"), szDate);	xls.SetCellText(3, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);		xls.SetCellText(4, 3, _T("T\x103ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(5, 3, _T("Gi\x1EA3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	szDate = CDate::Convert(m_szInventoryDate, yyyymmdd, ddmmyyyy);	tmpStr.Format(_T("Ki\x1EC3m k\xEA \x30h %s"), szDate);	xls.SetCellText(6, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(6, 4, _T("S\x1ED5 s\xE1\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(7, 4, _T("Th\x1EF1\x63 t\x1EBF"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(8, 3, _T("\x43h\xEAnh l\x1EC7\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(8, 4, _T("Th\x1EEB\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(9, 4, _T("Thi\x1EBFu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(10, 3, _T("Ph\xE2n \x63\x1EA5p \x63h\x1EA5t l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(10, 4, _T("\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(11, 4, _T("\x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(12, 4, _T("\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(13, 4, _T("\x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(14, 1, _T("M\x1EAAU KK S\x1ED0 \x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , true, 8);	xls.SetCellText(14, 4, _T("\x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(15, 3, _T("\x110\x1EC1 ngh\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(15, 4, _T("S\x1EED\x61 \x63h\x1EEF\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);	xls.SetCellText(16, 4, _T("Tr\x1EA3 tr\x61ng \x62\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING , false, 10);		xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(3, 4, 0, 0);	xls.SetMerge(3, 4, 1, 1);	xls.SetMerge(3, 4, 2, 2);	xls.SetMerge(0, 0, 3, 11);	xls.SetMerge(1, 1, 3, 11);	xls.SetMerge(3, 4, 3, 3);	xls.SetMerge(3, 4, 4, 4);	xls.SetMerge(3, 4, 5, 5);	xls.SetMerge(3, 3, 6, 7);	xls.SetMerge(3, 3, 8, 9);	xls.SetMerge(3, 3, 10, 14);	xls.SetMerge(1, 1, 14, 16);	xls.SetMerge(3, 3, 15, 16);	if(!m_szDepartmentKey.IsEmpty())	{		szWhere.Format(_T(" AND fa_department = '%s'"), m_szDepartmentKey);	}	szSQL.Format(_T(" SELECT fa_name, fa_model, fa_assetno, dvt, noisx, nhomtb, hangsx, sum(kkmoi) as kkmoi, sum(cap1) as cap1, sum(cap2) as cap2, ") \
		_T(" sum(cap3) as cap3, sum(cap4) as cap4, sum(cap5) as cap5 FROM ( ") \
		_T(" SELECT fa_name, ") \
				_T("        fa_model, ") \
				_T("        fa_assetno, ") \
				_T("        dvt, ") \
				_T("        noisx, ") \
				_T("        nhomtb, ") \
				_T("        hangsx, ") \
				_T("        (lvl1 + lvl2 + lvl3 + lvl4 + lvl5) AS kkmoi, ") \
				_T("        lvl1                             AS cap1, ") \
				_T("        lvl2                             AS cap2, ") \
				_T("        lvl3                             AS cap3, ") \
				_T("        lvl4                             AS cap4, ") \
				_T("        lvl5                             AS cap5 ") \
				_T(" FROM   (SELECT DISTINCT fa_name, ") \
				_T("                         fa_model, ") \
				_T("                         fa_assetno, ") \
				_T("                         (SELECT ss_desc ") \
				_T("                          FROM   sys_sel ") \
				_T("                          WHERE  ss_id = 'fam_uom' ") \
				_T("                                 AND ss_code = fa_unit)      AS dvt, ") \
				_T("                         (SELECT sc_name ") \
				_T("                          FROM   sys_country ") \
				_T("                          WHERE  sc_id = fa_madein)          AS noisx, ") \
				_T("                         (SELECT ss_desc ") \
				_T("                          FROM   sys_sel ") \
				_T("                          WHERE  ss_id = 'fam_group' ") \
				_T("                                 AND ss_code = famc_groupid) AS nhomtb, ") \
				_T("                         (SELECT famm_name ") \
				_T("                          FROM   fam_manufacture ") \
				_T("                          WHERE  famm_countryid = fa_madein ") \
				_T("                                 AND famm_id = fa_mfgid)     AS hangsx, ") \
				_T("                         CASE WHEN fil_qtylevel = 1 THEN 1 ") \
				_T("                         ELSE 0 ") \
				_T("                         END                                 AS lvl1, ") \
				_T("                         CASE WHEN fil_qtylevel = 2 THEN 1 ") \
				_T("                         ELSE 0 ") \
				_T("                         END                                 AS lvl2, ") \
				_T("                         CASE WHEN fil_qtylevel = 3 THEN 1 ") \
				_T("                         ELSE 0 ") \
				_T("                         END                                 AS lvl3, ") \
				_T("                         CASE WHEN fil_qtylevel = 4 THEN 1 ") \
				_T("                         ELSE 0 ") \
				_T("                         END                                 AS lvl4, ") \
				_T("                         CASE WHEN fil_qtylevel = 5 THEN 1 ") \
				_T("                         ELSE 0 ") \
				_T("                         END                                 AS lvl5 ") \
				_T("         FROM   fam_asset ") \
				_T("                LEFT JOIN fam_category ") \
				_T("                       ON ( famc_id = fa_category ) ") \
				_T("                LEFT JOIN fam_invent_line ") \
				_T("                       ON ( fil_assetno = fa_assetno ) ") \
				_T("                LEFT JOIN fam_invent ") \
				_T("                       ON( fi_orderno = fil_orderno ) ") \
				_T("         WHERE  fi_status = 'Y' %s ") \
				_T("                AND fi_inventdate BETWEEN To_timestamp('%s 00:00:00', 'YYYY/MM/DD HH24:MI:SS') AND To_timestamp('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS') ") \
				_T("				AND fi_orderdate = (select max(fi_orderdate) from fam_invent ") \
				_T("									left join fam_invent_line ON(fil_orderno = fi_orderno) ") \
				_T("									where fil_assetno = fa_assetno) ") \
				_T("         ORDER  BY fa_assetno, ") \
				_T("                   fa_name, ") \
				_T("                   nhomtb) ") \
				_T(" ORDER  BY nhomtb, fa_name, ") \
				_T("           fa_model, ") \
				_T("           fa_assetno, ") \
				_T("           dvt, ") \
				_T("           noisx, ") \
				_T("           hangsx  ) GROUP BY fa_name, fa_model, fa_assetno, dvt, noisx, nhomtb, hangsx, kkmoi, cap1, cap2, cap3, cap4, cap5 ") \
				_T(" ORDER BY nhomtb, fa_name, fa_model, fa_assetno, dvt, noisx, hangsx	"), szWhere, m_szInventoryDate, m_szInventoryDate);
	rs.ExecSQL(szSQL);	nRow = 6;	nCol = 0;	int nIndex = 0;	int nChapter = 0;	nIndex = 1;	if(rs.IsEOF())	{		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;	}	while(!rs.IsEOF()){		rs.GetValue(_T("nhomtb"), szNewLine);		if(szOldLine != szNewLine)		{			xls.SetCellText(nCol+1, nRow, szNewLine, FMT_TEXT, true);			szOldLine = szNewLine;			tmpStr.Format(_T("%s%s"), lpszChapter[nChapter], _T(". "));			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);			nChapter++;			nRow++;		}				szIndex.Format(_T("%d"), nIndex);		xls.SetCellText(nCol, nRow, szIndex, FMT_TEXT  | FMT_WRAPING);		szInfo.Format(_T("%s\r\nMo\x64\x65l:%s\r\nH\xE3ng \x58S: %s"), rs.GetValue(_T("fa_name")), rs.GetValue(_T("fa_model")), rs.GetValue(_T("noisx")));		xls.SetCellText(nCol+1, nRow, szInfo, FMT_TEXT  | FMT_WRAPING);		rs.GetValue(_T("dvt"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT );		/*Kiem ke moi*/		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT );		rs.GetValue(_T("kkmoi"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1 );		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT );		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT );		rs.GetValue(_T("cap1"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1 );		rs.GetValue(_T("cap2"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1 );		rs.GetValue(_T("cap3"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1 );		rs.GetValue(_T("cap4"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1 );		rs.GetValue(_T("cap5"), tmpStr);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1 ); 		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT );		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT );		nRow++;		nIndex++;		rs.MoveNext();	}	nRow = nRow + 1;	xls.SetMerge(nRow, nRow, nCol+1, nCol+2);	xls.SetCellText(nCol+1, nRow, _T("Ng\x1B0\x1EDDi t\x1ED5ng h\x1EE3p"), FMT_TEXT | FMT_CENTER, true);	xls.SetMerge(nRow+1, nRow+1, nCol+1, nCol+2);	xls.SetCellText(nCol+1, nRow+1, _T("(K\xFD v\xE0 ghi r\xF5 h\x1ECD t\xEAn)"), FMT_TEXT | FMT_CENTER);	xls.SetMerge(nRow, nRow, nCol+4, nCol+7);	xls.SetCellText(nCol+4, nRow, _T("\x110\x1EA1i \x64i\x1EC7n Tr\x61ng \x62\x1ECB"), FMT_TEXT | FMT_CENTER, true);	xls.SetMerge(nRow+1, nRow+1, nCol+4, nCol+7);	xls.SetCellText(nCol+4, nRow+1, _T("(K\xFD v\xE0 ghi r\xF5 h\x1ECD t\xEAn)"), FMT_TEXT | FMT_CENTER);	xls.SetMerge(nRow, nRow, nCol+10, nCol+16);	xls.SetCellText(nCol+10, nRow, _T("\x43h\x1EE7 nhi\x1EC7m Kho\x61"), FMT_TEXT | FMT_CENTER, true);	xls.SetMerge(nRow+1, nRow+1, nCol+10, nCol+16);	xls.SetCellText(nCol+10, nRow+1, _T("(K\xFD v\xE0 ghi r\xF5 h\x1ECD t\xEAn)"), FMT_TEXT | FMT_CENTER);	EndWaitCursor();	xls.Save(_T("Exports\\Bien ban kiem ke may.xls"));
} 
void CRptMachineInventoryRecord::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 
int CRptMachineInventoryRecord::OnAddRptMachineInventoryRecord(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRptMachineInventoryRecord::OnEditRptMachineInventoryRecord(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRptMachineInventoryRecord::OnDeleteRptMachineInventoryRecord(){
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
 		OnCancelRptMachineInventoryRecord();
 	}
	return 0;
}
int CRptMachineInventoryRecord::OnSaveRptMachineInventoryRecord(){
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
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRptMachineInventoryRecord::OnCancelRptMachineInventoryRecord(){
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
int CRptMachineInventoryRecord::OnRptMachineInventoryRecordListLoadData(){
	return 0;
}
