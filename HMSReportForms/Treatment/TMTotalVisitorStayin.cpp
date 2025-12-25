#include "TMTotalVisitorStayin.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMTotalVisitorStayin *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMTotalVisitorStayin* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMTotalVisitorStayin *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMTotalVisitorStayin *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMTotalVisitorStayin *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMTotalVisitorStayin *pVw = (CTMTotalVisitorStayin *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMTotalVisitorStayin *pVw = (CTMTotalVisitorStayin *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMTotalVisitorStayin* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CTMTotalVisitorStayin *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CTMTotalVisitorStayin *)pWnd)->OnDeptAddNew();
}*/
static int _OnAddTMTotalVisitorStayinFnc(CWnd *pWnd){
	 return ((CTMTotalVisitorStayin*)pWnd)->OnAddTMTotalVisitorStayin();
} 
static int _OnEditTMTotalVisitorStayinFnc(CWnd *pWnd){
	 return ((CTMTotalVisitorStayin*)pWnd)->OnEditTMTotalVisitorStayin();
} 
static int _OnDeleteTMTotalVisitorStayinFnc(CWnd *pWnd){
	 return ((CTMTotalVisitorStayin*)pWnd)->OnDeleteTMTotalVisitorStayin();
} 
static int _OnSaveTMTotalVisitorStayinFnc(CWnd *pWnd){
	 return ((CTMTotalVisitorStayin*)pWnd)->OnSaveTMTotalVisitorStayin();
} 
static int _OnCancelTMTotalVisitorStayinFnc(CWnd *pWnd){
	 return ((CTMTotalVisitorStayin*)pWnd)->OnCancelTMTotalVisitorStayin();
} 
CTMTotalVisitorStayin::CTMTotalVisitorStayin(CWnd* pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMTotalVisitorStayin::~CTMTotalVisitorStayin(){
}
void CTMTotalVisitorStayin::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 118);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 58, 90, 83);
	m_wndFromDate.Create(this,95, 58, 245, 83); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 59, 330, 84);
	m_wndToDate.Create(this,335, 59, 485, 84); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 294, 124, 404, 149);
	m_wndExport.Create(this, _T("&Export"), 409, 124, 484, 149);
	m_wndDeptLabel.Create(this, _T("DeptLabel"), 10, 88, 90, 113);
	m_wndDept.Create(this,95, 88, 485, 113); 

}
void CTMTotalVisitorStayin::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0, 1, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

}
void CTMTotalVisitorStayin::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = szSysDate + _T("00:00");
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate = szSysDate + _T("23:59");
	UpdateData(false);

}
void CTMTotalVisitorStayin::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);

}
void CTMTotalVisitorStayin::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Dept")] =  m_szDeptKey;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	}

}
void CTMTotalVisitorStayin::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMTotalVisitorStayin::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMTotalVisitorStayin::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();

}
int CTMTotalVisitorStayin::SetMode(int nMode){
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
 		return nOldMode;
}
/*void CTMTotalVisitorStayin::OnYearChange(){
	
} */
/*void CTMTotalVisitorStayin::OnYearSetfocus(){
	
} */
/*void CTMTotalVisitorStayin::OnYearKillfocus(){
	
} */
int CTMTotalVisitorStayin::OnYearCheckValue(){
	return 0;
} 
void CTMTotalVisitorStayin::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMTotalVisitorStayin::OnReportPeriodSelendok(){
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13) {
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14) {
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15) {
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16) {
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17) {
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	UpdateData(false);
}
/*void CTMTotalVisitorStayin::OnReportPeriodSetfocus(){
	
}*/
/*void CTMTotalVisitorStayin::OnReportPeriodKillfocus(){
	
}*/
long CTMTotalVisitorStayin::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0) {
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
	m_wndReportPeriod.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")),
			rs.GetValue(_T("hpr_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMTotalVisitorStayin::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMTotalVisitorStayin::OnFromDateChange(){
	
} */
/*void CTMTotalVisitorStayin::OnFromDateSetfocus(){
	
} */
/*void CTMTotalVisitorStayin::OnFromDateKillfocus(){
	
} */
int CTMTotalVisitorStayin::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMTotalVisitorStayin::OnToDateChange(){
	
} */
/*void CTMTotalVisitorStayin::OnToDateSetfocus(){
	
} */
/*void CTMTotalVisitorStayin::OnToDateKillfocus(){
	
} */
int CTMTotalVisitorStayin::OnToDateCheckValue(){
	return 0;
} 
void CTMTotalVisitorStayin::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMTotalVisitorStayin::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;

	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAO_NGUOI_NHA_O_LAI.xls")))
		AfxMessageBox(_T("Không thể mở file mẫu trong thư mục Exports"));

	xls.SetWorksheet(0);

	// Thông tin tiêu đề
	//xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	//xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("Từ %s đến %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	xls.SetCellText(0, 1, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	// Header
	nRow = 4;
	nCol = 0;
	/*xls.SetCellText(nCol++, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol++, nRow, _T("KHOA"), FMT_TEXT | FMT_CENTER, true);
	for (int i = 1; i <= 31; ++i)
	{
		tmpStr.Format(_T("%d"), i);
		xls.SetCellText(nCol++, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
	}
	xls.SetCellText(nCol++, nRow, _T("TỔNG THÁNG"), FMT_TEXT | FMT_CENTER, true);
	*/

	//nRow++;
	int nIndex = 1;
	double nTotal[40] = { 0 }; // tổng theo cột

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	// Duyệt dữ liệu
	while (!rs.IsEOF())
	{
		int nCol = 0;

		//xls.SetCellText(nCol++, nRow, int2str(nIndex++), FMT_INTEGER); // STT

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol++, nRow, tmpStr, FMT_TEXT);

		double value = 0;
		for (int i = 1; i <= 31; ++i)
		{
			tmpStr.Format(_T("%d"), i);
			rs.GetValue(tmpStr, value);
			nTotal[nCol] += value;
			xls.SetCellText(nCol++, nRow, double2str(value), FMT_NUMBER1);
		}

		// Tổng tháng
		rs.GetValue(_T("totalMonth"), value);
		nTotal[nCol] += value;
		xls.SetCellText(nCol++, nRow, double2str(value), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}

	// Dòng tổng cộng
	nRow++;
	nCol = 0;
	xls.SetCellText(nCol, nRow, _T("TỔNG CỘNG"), FMT_TEXT, true);

	for (int i = 1; i < 1 + 31; ++i) // 31 ngày + tổng tháng
	{
		xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	}

	xls.Save(_T("Exports\\BAOCAO_NGUOI_NHA_O_LAI_RESULT.xls"));

} 
void CTMTotalVisitorStayin::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMTotalVisitorStayin::OnDeptSelendok(){
	 
}
/*void CTMTotalVisitorStayin::OnDeptSetfocus(){
	
}*/
/*void CTMTotalVisitorStayin::OnDeptKillfocus(){
	
}*/
long CTMTotalVisitorStayin::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey
};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CTMTotalVisitorStayin::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
int CTMTotalVisitorStayin::OnAddTMTotalVisitorStayin(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMTotalVisitorStayin::OnEditTMTotalVisitorStayin(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMTotalVisitorStayin::OnDeleteTMTotalVisitorStayin(){
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
 		OnCancelTMTotalVisitorStayin();
 	}
	return 0;
}
int CTMTotalVisitorStayin::OnSaveTMTotalVisitorStayin(){
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
 		//OnTMTotalVisitorStayinListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMTotalVisitorStayin::OnCancelTMTotalVisitorStayin(){
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
int CTMTotalVisitorStayin::OnTMTotalVisitorStayinListLoadData(){
	return 0;
}
CString CTMTotalVisitorStayin::GetQueryString()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CString szWhere;
	if (!m_szDeptKey.IsEmpty())
	{
		//szWhere.AppendFormat(_T("AND hvi_deptid = '%s'"), m_szDeptKey);
	}
	szSQL.Format(_T("SELECT t.*, ") \
		_T(" NVL(\"1\", 0) + NVL(\"2\", 0) + NVL(\"3\", 0) + NVL(\"4\", 0) + NVL(\"5\", 0) + ") \
		_T(" NVL(\"6\", 0) + NVL(\"7\", 0) + NVL(\"8\", 0) + NVL(\"9\", 0) + NVL(\"10\", 0) + ") \
		_T(" NVL(\"11\", 0) + NVL(\"12\", 0) + NVL(\"13\", 0) + NVL(\"14\", 0) + NVL(\"15\", 0) + ") \
		_T(" NVL(\"16\", 0) + NVL(\"17\", 0) + NVL(\"18\", 0) + NVL(\"19\", 0) + NVL(\"20\", 0) + ") \
		_T(" NVL(\"21\", 0) + NVL(\"22\", 0) + NVL(\"23\", 0) + NVL(\"24\", 0) + NVL(\"25\", 0) + ") \
		_T(" NVL(\"26\", 0) + NVL(\"27\", 0) + NVL(\"28\", 0) + NVL(\"29\", 0) + NVL(\"30\", 0) + NVL(\"31\", 0) AS totalMonth ") \
		_T(" FROM ( ") \
		_T("   SELECT * FROM ( ") \
		_T("     SELECT ") \
		_T("       hfe_deptid AS khoa, ") \
		_T("       TO_CHAR(hfe_orderdate, 'DD') AS ngay, ") \
		_T("       CASE WHEN hfel_itemid IN ('F0000100', 'F0000127') THEN 1 ELSE 0 END AS tong_o_lai ") \
		_T("     FROM VIMES.HMS_FEE_EXTRA ") \
		_T("     LEFT JOIN VIMES.HMS_FEE_EXTRALINE ON hfel_fee_extra_id = hfe_fee_extra_id ") \
		_T("     WHERE hfe_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') + 0.99999 ") \
		_T("     AND NVL(hfel_status, 'O') NOT IN ('O', 'C') ") \
		_T("     AND hfel_itemid IN ('F0000100', 'F0000127') ") \
		_T("   ) ") \
		_T("   PIVOT ( ") \
		_T("     SUM(tong_o_lai) FOR ngay IN ( ") \
		_T("       '01' AS \"1\", '02' AS \"2\", '03' AS \"3\", '04' AS \"4\", '05' AS \"5\", ") \
		_T("       '06' AS \"6\", '07' AS \"7\", '08' AS \"8\", '09' AS \"9\", '10' AS \"10\", ") \
		_T("       '11' AS \"11\", '12' AS \"12\", '13' AS \"13\", '14' AS \"14\", '15' AS \"15\", ") \
		_T("       '16' AS \"16\", '17' AS \"17\", '18' AS \"18\", '19' AS \"19\", '20' AS \"20\", ") \
		_T("       '21' AS \"21\", '22' AS \"22\", '23' AS \"23\", '24' AS \"24\", '25' AS \"25\", ") \
		_T("       '26' AS \"26\", '27' AS \"27\", '28' AS \"28\", '29' AS \"29\", '30' AS \"30\", '31' AS \"31\" ") \
		_T("     ) ") \
		_T("   ) ") \
		_T(" ) t ") \
		_T(" ORDER BY khoa"), m_szFromDate, m_szToDate);


	return szSQL;
}