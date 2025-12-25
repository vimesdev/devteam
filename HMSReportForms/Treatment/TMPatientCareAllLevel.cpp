#include "TMPatientCareAllLevel.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientCareAllLevel *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientCareAllLevel* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientCareAllLevel *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientCareAllLevel *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientCareAllLevel *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMPatientCareAllLevel *pVw = (CTMPatientCareAllLevel *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMPatientCareAllLevel *pVw = (CTMPatientCareAllLevel *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientCareAllLevel* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientCareAllLevel *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CTMPatientCareAllLevel *)pWnd)->OnDeptAddNew();
}*/
static int _OnAddTMPatientCareAllLevelFnc(CWnd *pWnd){
	 return ((CTMPatientCareAllLevel*)pWnd)->OnAddTMPatientCareAllLevel();
} 
static int _OnEditTMPatientCareAllLevelFnc(CWnd *pWnd){
	 return ((CTMPatientCareAllLevel*)pWnd)->OnEditTMPatientCareAllLevel();
} 
static int _OnDeleteTMPatientCareAllLevelFnc(CWnd *pWnd){
	 return ((CTMPatientCareAllLevel*)pWnd)->OnDeleteTMPatientCareAllLevel();
} 
static int _OnSaveTMPatientCareAllLevelFnc(CWnd *pWnd){
	 return ((CTMPatientCareAllLevel*)pWnd)->OnSaveTMPatientCareAllLevel();
} 
static int _OnCancelTMPatientCareAllLevelFnc(CWnd *pWnd){
	 return ((CTMPatientCareAllLevel*)pWnd)->OnCancelTMPatientCareAllLevel();
} 
CTMPatientCareAllLevel::CTMPatientCareAllLevel(CWnd* pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMPatientCareAllLevel::~CTMPatientCareAllLevel(){
}
void CTMPatientCareAllLevel::OnCreateComponents(){
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
void CTMPatientCareAllLevel::OnInitializeComponents(){
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
void CTMPatientCareAllLevel::OnSetWindowEvents(){
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
void CTMPatientCareAllLevel::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);

}
void CTMPatientCareAllLevel::UpdateJson(BOOL bSave){
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
void CTMPatientCareAllLevel::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMPatientCareAllLevel::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMPatientCareAllLevel::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();

}
int CTMPatientCareAllLevel::SetMode(int nMode){
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
/*void CTMPatientCareAllLevel::OnYearChange(){
	
} */
/*void CTMPatientCareAllLevel::OnYearSetfocus(){
	
} */
/*void CTMPatientCareAllLevel::OnYearKillfocus(){
	
} */
int CTMPatientCareAllLevel::OnYearCheckValue(){
	return 0;
} 
void CTMPatientCareAllLevel::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientCareAllLevel::OnReportPeriodSelendok(){
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
/*void CTMPatientCareAllLevel::OnReportPeriodSetfocus(){
	
}*/
/*void CTMPatientCareAllLevel::OnReportPeriodKillfocus(){
	
}*/
long CTMPatientCareAllLevel::OnReportPeriodLoadData(){
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
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
/*void CTMPatientCareAllLevel::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMPatientCareAllLevel::OnFromDateChange(){
	
} */
/*void CTMPatientCareAllLevel::OnFromDateSetfocus(){
	
} */
/*void CTMPatientCareAllLevel::OnFromDateKillfocus(){
	
} */
int CTMPatientCareAllLevel::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMPatientCareAllLevel::OnToDateChange(){
	
} */
/*void CTMPatientCareAllLevel::OnToDateSetfocus(){
	
} */
/*void CTMPatientCareAllLevel::OnToDateKillfocus(){
	
} */
int CTMPatientCareAllLevel::OnToDateCheckValue(){
	return 0;
} 
void CTMPatientCareAllLevel::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientCareAllLevel::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;

	CExcel xls;
	if (!xls.Load(_T("Exports\\BaoCao_ChiTietChamSoc_Caccap_Temp.xls")))
	{
		AfxMessageBox(_T("Không tìm thấy file mẫu Excel trong thư mục Exports"));
		return;
	}

	xls.SetWorksheet(0);

	// Ghi tiêu đề

	tmpStr.Format(_T("Từ %s đến %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	xls.SetCellText(0, 1, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	double nTotal[40] = { 0 };

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	// Ghi dữ liệu
	nRow = 4;
	while (!rs.IsEOF())
	{
		nCol = 0;

		//xls.SetCellText(nCol++, nRow, int2str(stt++), FMT_INTEGER);

		CString tmpStr;
		rs.GetValue(_T("KHOA"), tmpStr);
		xls.SetCellText(nCol++, nRow, tmpStr, FMT_TEXT);

		long nLoai;
		rs.GetValue(_T("LOAI"), nLoai);
		xls.SetCellText(nCol++, nRow, int2str(nLoai), FMT_INTEGER);

		for (int day = 1; day <= 31; ++day)
		{
			CString colName;
			colName.Format(_T("%d"), day);
			long nVal = 0;
			rs.GetValue(colName, nVal);
			nTotal[nCol] += nVal;
			xls.SetCellText(nCol++, nRow, int2str(nVal), FMT_INTEGER);
		}

		long nTong = 0;
		rs.GetValue(_T("TONG_THANG"), nTong);
		nTotal[nCol] += nTong;
		xls.SetCellText(nCol, nRow, int2str(nTong), FMT_INTEGER);

		nRow++;
		rs.MoveNext();
	}

	nRow++;
	nCol = 0;
	xls.SetCellText(nCol, nRow, _T("TỔNG CỘNG"), FMT_TEXT, true);

	for (int i = 1; i < 1 + 31; ++i) // 31 ngày + tổng tháng
	{
		xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	}
	// Lưu file xuất ra
	xls.Save(_T("Exports\\BaoCao_ChiTietChamSoc_Caccap.xls"));

} 
void CTMPatientCareAllLevel::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientCareAllLevel::OnDeptSelendok(){
	 
}
/*void CTMPatientCareAllLevel::OnDeptSetfocus(){
	
}*/
/*void CTMPatientCareAllLevel::OnDeptKillfocus(){
	
}*/
long CTMPatientCareAllLevel::OnDeptLoadData(){
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
/*void CTMPatientCareAllLevel::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
int CTMPatientCareAllLevel::OnAddTMPatientCareAllLevel(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMPatientCareAllLevel::OnEditTMPatientCareAllLevel(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMPatientCareAllLevel::OnDeleteTMPatientCareAllLevel(){
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
 		OnCancelTMPatientCareAllLevel();
 	}
	return 0;
}
int CTMPatientCareAllLevel::OnSaveTMPatientCareAllLevel(){
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
 		//OnTMPatientCareAllLevelListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMPatientCareAllLevel::OnCancelTMPatientCareAllLevel(){
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
int CTMPatientCareAllLevel::OnTMPatientCareAllLevelListLoadData(){
	return 0;
}

CString CTMPatientCareAllLevel::GetQueryString()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CString szWhere;
	if (!m_szDeptKey.IsEmpty())
	{
		//szWhere.AppendFormat(_T("AND hvi_deptid = '%s'"), m_szDeptKey);
	}
	szSQL.Format(_T("WITH ds_loai AS ( ") \
		_T("  SELECT LEVEL AS LOAI FROM dual CONNECT BY LEVEL <= 3 ") \
		_T("), ds_khoa AS ( ") \
		_T("  SELECT DISTINCT HCI_DEPTID FROM HMS_CAREINFO ") \
		_T("  WHERE HCI_LOCKED = 'N' ") \
		_T("    AND TRUNC(HCI_DATE) BETWEEN TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T("), ds_combination AS ( ") \
		_T("  SELECT k.HCI_DEPTID, l.LOAI ") \
		_T("  FROM ds_khoa k CROSS JOIN ds_loai l ") \
		_T("), dulieu_goc AS ( ") \
		_T("  SELECT HCI_DEPTID, ") \
		_T("    CASE WHEN HCI_TYPE = 'CS' THEN 1 ") \
		_T("         WHEN HCI_TYPE = 'CSC1' THEN 2 ") \
		_T("         WHEN HCI_TYPE IN ('CSC2','CSC3') THEN 3 ELSE 0 END AS LOAI, ") \
		_T("    TRUNC(HCI_DATE) AS NGAY ") \
		_T("  FROM HMS_CAREINFO ") \
		_T("  WHERE HCI_LOCKED = 'N' ") \
		_T("    AND HCI_TYPE IN ('CSC1', 'CSC2', 'CSC3', 'CS') ") \
		_T("    AND TRUNC(HCI_DATE) BETWEEN TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(") ") \
		_T("SELECT c.HCI_DEPTID AS KHOA, c.LOAI, ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '01' THEN 1 ELSE 0 END) AS \"1\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '02' THEN 1 ELSE 0 END) AS \"2\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '03' THEN 1 ELSE 0 END) AS \"3\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '04' THEN 1 ELSE 0 END) AS \"4\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '05' THEN 1 ELSE 0 END) AS \"5\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '06' THEN 1 ELSE 0 END) AS \"6\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '07' THEN 1 ELSE 0 END) AS \"7\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '08' THEN 1 ELSE 0 END) AS \"8\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '09' THEN 1 ELSE 0 END) AS \"9\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '10' THEN 1 ELSE 0 END) AS \"10\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '11' THEN 1 ELSE 0 END) AS \"11\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '12' THEN 1 ELSE 0 END) AS \"12\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '13' THEN 1 ELSE 0 END) AS \"13\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '14' THEN 1 ELSE 0 END) AS \"14\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '15' THEN 1 ELSE 0 END) AS \"15\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '16' THEN 1 ELSE 0 END) AS \"16\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '17' THEN 1 ELSE 0 END) AS \"17\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '18' THEN 1 ELSE 0 END) AS \"18\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '19' THEN 1 ELSE 0 END) AS \"19\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '20' THEN 1 ELSE 0 END) AS \"20\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '21' THEN 1 ELSE 0 END) AS \"21\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '22' THEN 1 ELSE 0 END) AS \"22\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '23' THEN 1 ELSE 0 END) AS \"23\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '24' THEN 1 ELSE 0 END) AS \"24\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '25' THEN 1 ELSE 0 END) AS \"25\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '26' THEN 1 ELSE 0 END) AS \"26\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '27' THEN 1 ELSE 0 END) AS \"27\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '28' THEN 1 ELSE 0 END) AS \"28\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '29' THEN 1 ELSE 0 END) AS \"29\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '30' THEN 1 ELSE 0 END) AS \"30\", ") \
		_T("  SUM(CASE WHEN TO_CHAR(g.NGAY, 'DD') = '31' THEN 1 ELSE 0 END) AS \"31\", ") \
		_T("  COUNT(g.NGAY) AS TONG_THANG ") \
		_T("FROM ds_combination c ") \
		_T("LEFT JOIN dulieu_goc g ON c.HCI_DEPTID = g.HCI_DEPTID AND c.LOAI = g.LOAI ") \
		_T("GROUP BY c.HCI_DEPTID, c.LOAI ") \
		_T("ORDER BY c.HCI_DEPTID, c.LOAI"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);



	return szSQL;
}