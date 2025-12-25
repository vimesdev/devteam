#include "stdafx.h"
#include "HMSMainFrame.h"
#include "TMThuchienchitieu.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMThuchienchitieu *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMThuchienchitieu *)pWnd)->OnYearSetfocus();} */
	/*static void _OnYearKillfocusFnc(CWnd *pWnd){
		((CTMThuchienchitieu *)pWnd)->OnYearKillfocus();
	} */
static int _OnYearCheckValueFnc(CWnd* pWnd) {
	return ((CTMThuchienchitieu*)pWnd)->OnYearCheckValue();
}
static void _OnReportPeriodSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CTMThuchienchitieu*)pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnReportPeriodSelendokFnc(CWnd* pWnd) {
	((CTMThuchienchitieu*)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMThuchienchitieu *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMThuchienchitieu *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd* pWnd) {
	return ((CTMThuchienchitieu*)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMThuchienchitieu *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMThuchienchitieu *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMThuchienchitieu *)pWnd)->OnFromDateSetfocus();} */
	/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
		((CTMThuchienchitieu *)pWnd)->OnFromDateKillfocus();
	} */
static int _OnFromDateCheckValueFnc(CWnd* pWnd) {
	return ((CTMThuchienchitieu*)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMThuchienchitieu *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMThuchienchitieu *)pWnd)->OnToDateSetfocus();} */
	/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
		((CTMThuchienchitieu *)pWnd)->OnToDateKillfocus();
	} */
static int _OnToDateCheckValueFnc(CWnd* pWnd) {
	return ((CTMThuchienchitieu*)pWnd)->OnToDateCheckValue();
}
static void _OnPrintPreviewSelectFnc(CWnd* pWnd) {
	CTMThuchienchitieu* pVw = (CTMThuchienchitieu*)pWnd;
	pVw->OnPrintPreviewSelect();
}
static void _OnExportSelectFnc(CWnd* pWnd) {
	CTMThuchienchitieu* pVw = (CTMThuchienchitieu*)pWnd;
	pVw->OnExportSelect();
}
static int _OnAddTMThuchienchitieuFnc(CWnd* pWnd) {
	return ((CTMThuchienchitieu*)pWnd)->OnAddTMThuchienchitieu();
}
static int _OnEditTMThuchienchitieuFnc(CWnd* pWnd) {
	return ((CTMThuchienchitieu*)pWnd)->OnEditTMThuchienchitieu();
}
static int _OnDeleteTMThuchienchitieuFnc(CWnd* pWnd) {
	return ((CTMThuchienchitieu*)pWnd)->OnDeleteTMThuchienchitieu();
}
static int _OnSaveTMThuchienchitieuFnc(CWnd* pWnd) {
	return ((CTMThuchienchitieu*)pWnd)->OnSaveTMThuchienchitieu();
}
static int _OnCancelTMThuchienchitieuFnc(CWnd* pWnd) {
	return ((CTMThuchienchitieu*)pWnd)->OnCancelTMThuchienchitieu();
}
static void _OnAllSelectFnc(CWnd* pWnd) {
	((CTMThuchienchitieu*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd* pWnd) {
	((CTMThuchienchitieu*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd* pWnd) {
	((CTMThuchienchitieu*)pWnd)->OnOutPatientSelect();
}
CTMThuchienchitieu::CTMThuchienchitieu(CWnd* pWnd) {

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMThuchienchitieu::~CTMThuchienchitieu() {
}
void CTMThuchienchitieu::OnCreateComponents() {
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this, 95, 30, 215, 55);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this, 305, 30, 425, 55);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this, 95, 60, 215, 85);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 91);
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this, 305, 60, 425, 85);
	m_wndAll.Create(this, _T("All"), 6, 97, 86, 122);
	m_wndInPatient.Create(this, _T("InPatient"), 90, 97, 170, 122);
	m_wndOutPatient.Create(this, _T("OutPatient"), 174, 97, 254, 122);
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 235, 126, 345, 151);
	m_wndExport.Create(this, _T("&Export"), 350, 126, 425, 151);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
}
void CTMThuchienchitieu::OnInitializeComponents() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);





}
void CTMThuchienchitieu::OnSetWindowEvents() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
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
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	m_wndAll.SetCheck(true);
	m_szCondition = _T("A");
}
void CTMThuchienchitieu::OnDoDataExchange(CDataExchange* pDX) {
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CTMThuchienchitieu::GetDataToScreen() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMThuchienchitieu::GetScreenToData() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();

}
void CTMThuchienchitieu::SetDefaultValues() {

	m_nYear = 0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll = 0;
	m_nInPatient = 1;
	m_nOutPatient = 1;

}
int CTMThuchienchitieu::SetMode(int nMode) {
	int nOldMode = GetMode();
	CGuiView::SetMode(nMode);
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	switch (nMode) {
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
	UpdateData(FALSE);
	return nOldMode;
}
/*void CTMThuchienchitieu::OnYearChange(){

} */
/*void CTMThuchienchitieu::OnYearSetfocus(){

} */
/*void CTMThuchienchitieu::OnYearKillfocus(){

} */
int CTMThuchienchitieu::OnYearCheckValue() {
	return 0;
}
void CTMThuchienchitieu::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel) {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();

}
void CTMThuchienchitieu::OnReportPeriodSelendok() {
	CString tmpStr;
	CDate date;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		date.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, date.GetMonthLastDay());
	}
	if (nMonth == 13) {
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if (nMonth == 14) {
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if (nMonth == 15) {
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if (nMonth == 16) {
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if (nMonth == 17) {
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	UpdateData(false);
}
/*void CTMThuchienchitieu::OnReportPeriodSetfocus(){

}*/
/*void CTMThuchienchitieu::OnReportPeriodKillfocus(){

}*/
long CTMThuchienchitieu::OnReportPeriodLoadData() {
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
/*void CTMThuchienchitieu::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */
/*void CTMThuchienchitieu::OnFromDateChange(){

} */
/*void CTMThuchienchitieu::OnFromDateSetfocus(){

} */
/*void CTMThuchienchitieu::OnFromDateKillfocus(){

} */
int CTMThuchienchitieu::OnFromDateCheckValue() {
	return 0;
}
/*void CTMThuchienchitieu::OnToDateChange(){

} */
/*void CTMThuchienchitieu::OnToDateSetfocus(){

} */
/*void CTMThuchienchitieu::OnToDateKillfocus(){

} */
int CTMThuchienchitieu::OnToDateCheckValue() {
	return 0;
}
void CTMThuchienchitieu::OnAllSelect() {
	m_szCondition = _T("A");
}
void CTMThuchienchitieu::OnInPatientSelect() {
	m_szCondition = _T("I");
}
void CTMThuchienchitieu::OnOutPatientSelect() {
	m_szCondition = _T("E");
}
void CTMThuchienchitieu::OnPrintPreviewSelect() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
}
void CTMThuchienchitieu::OnExportSelect() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0;
	long nTmp = 0;
	int c[20];
	float tc[20], tc2[20], tc3[20];
	for (int i = 1; i <= 19; i++)
	{
		c[i] = 0;
		tc[i] = 0;
		tc2[i] = 0;
		tc3[i] = 0;
	}

	CExcel xls;
	if (!xls.Load(_T("Exports\\Thuchienchitieu.xls"))) AfxMessageBox(_T("Chưa có Files này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 8;
	nCol = 0;
	if (rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("1"), FMT_TEXT | FMT_CENTER);
		xls.SetCellText(nCol + 1, nRow, _T("T\x1ED5ng s\x1ED1 ng\xE0y n\x1EB1m \x110T"), FMT_TEXT);
		nRow++;
	}
	while (!rs.IsEOF()) {
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		for (int i = 3; i <= 19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			tc[i] += str2int(tmpStr);
			xls.SetCellText(nCol + i - 1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	xls.SetCellText(nCol, nRow, _T("2"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(nCol + 1, nRow, _T("T\x42 \x31 ng\xE0y \x42N n\x1EB1m"), FMT_TEXT);
	while (!rs.IsEOF()) {
		rs.GetValue(_T("report_day"), nTmp);
		for (int i = 3; i <= 19; i++)
		{
			tc2[i] = tc[i] / nTmp;
			tmpStr.Format(_T("%.2f"), tc2[i]);
			xls.SetCellText(nCol + i - 1, nRow, tmpStr, FMT_DECIMAL | FMT_CENTER);
		}
		rs.MoveNext();
	}
	nRow++;

	for (int i = 3; i <= 19; i++)
	{
		tc[i] = 0;
	}
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("3"), FMT_TEXT | FMT_CENTER);
		xls.SetCellText(nCol + 1, nRow, _T("T\x1EF7 l\x1EC7 S\x44G tr\xEAn gi\x61o(0)"), FMT_TEXT);
		nRow++;
	}
	while (!rs.IsEOF()) {
		rs.GetValue(_T("planned"), nTmp);
		xls.SetCellText(nCol, nRow, _T("3"), FMT_TEXT | FMT_CENTER);
		tmpStr.Format(_T("T\x1EF7 l\x1EC7 S\x44G tr\xEAn gi\x61o(%ld)"), nTmp);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		for (int i = 3; i <= 19; i++)
		{
			tc[i] = tc2[i] * 100 / nTmp;
			tmpStr.Format(_T("%.2f"), tc[i]);
			xls.SetCellText(nCol + i - 1, nRow, tmpStr, FMT_DECIMAL | FMT_CENTER);
		}
		rs.MoveNext();
	}
	nRow++;

	for (int i = 3; i <= 19; i++)
	{
		tc[i] = 0;
	}
	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("4"), FMT_TEXT | FMT_CENTER);
		xls.SetCellText(nCol + 1, nRow, _T("T\x1EF7 l\x1EC7 S\x44G vi\x1EC7n gi\x61o(0)"), FMT_TEXT);
		nRow++;
	}
	while (!rs.IsEOF()) {
		rs.GetValue(_T("avaiable"), nTmp);
		xls.SetCellText(nCol, nRow, _T("4"), FMT_TEXT | FMT_CENTER);
		tmpStr.Format(_T("T\x1EF7 l\x1EC7 S\x44G vi\x1EC7n gi\x61o(%ld)"), nTmp);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		for (int i = 3; i <= 19; i++)
		{
			tc[i] = tc2[i] * 100 / nTmp;
			tmpStr.Format(_T("%.2f"), tc[i]);
			xls.SetCellText(nCol + i - 1, nRow, tmpStr, FMT_DECIMAL | FMT_CENTER);
		}

		rs.MoveNext();
	}
	nRow++;

	for (int i = 3; i <= 19; i++)
	{
		tc[i] = 0;
	}
	szSQL = GetQueryString4();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("5"), FMT_TEXT | FMT_CENTER);
		xls.SetCellText(nCol + 1, nRow, _T("TS ng\xE0y n\x1EB1m \x110T gi\x1EA3m"), FMT_TEXT);
		nRow++;
	}
	while (!rs.IsEOF()) {
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		for (int i = 3; i <= 19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			tc[i] += str2int(tmpStr);
			xls.SetCellText(nCol + i - 1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	for (int i = 3; i <= 19; i++)
	{
		tc2[i] = 0;
	}
	szSQL = GetQueryString5();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("6"), FMT_TEXT | FMT_CENTER);
		xls.SetCellText(nCol + 1, nRow, _T("T\x42 \x31 \x42N \x110T gi\x1EA3m"), FMT_TEXT);
		nRow++;
	}
	while (!rs.IsEOF()) {
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		for (int i = 3; i <= 19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			tc2[i] += tc[i] / str2int(tmpStr);
			tmpStr.Format(_T("%.2f"), tc2[i]);
			xls.SetCellText(nCol + i - 1, nRow, tmpStr, FMT_DECIMAL | FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	for (int i = 3; i <= 19; i++)
	{
		tc[i] = 0;
		tc2[i] = 0;
	}
	szSQL = GetQueryString6();
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		for (int i = 3; i <= 19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			tc[i] += str2float(tmpStr);
		}
		rs.MoveNext();
	}
	szSQL = GetQueryString7();
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		for (int i = 3; i <= 19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			tc2[i] += str2float(tmpStr);
		}
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("7"), FMT_TEXT | FMT_CENTER);
	xls.SetCellText(nCol + 1, nRow, _T("T\x1EF7 l\x1EC7 kh\x1ECFi r\x61 vi\x1EC7n"), FMT_TEXT);
	for (int i = 3; i <= 19; i++)
	{
		szTemp.Format(_T("c%d"), i);
		rs.GetValue(szTemp, tmpStr);
		tc3[i] += tc[i] * 100 / tc2[i];
		tmpStr.Format(_T("%.2f"), tc3[i]);
		xls.SetCellText(nCol + i - 1, nRow, tmpStr, FMT_DECIMAL | FMT_CENTER);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Thuchienchitieu2.xls"));
}
int CTMThuchienchitieu::OnAddTMThuchienchitieu() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CTMThuchienchitieu::OnEditTMThuchienchitieu() {
	if (GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;
}
int CTMThuchienchitieu::OnDeleteTMThuchienchitieu() {
	if (GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
		return -1;
	szSQL.Format(_T("DELETE FROM  WHERE  AND"));
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnCancelTMThuchienchitieu();
	}
	return 0;
}
int CTMThuchienchitieu::OnSaveTMThuchienchitieu() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if (!IsValidateData())
		return -1;
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	if (GetMode() == VM_ADD) {
		//szSQL = m_tblTbl.GetInsertSQL();
	}
	else if (GetMode() == VM_EDIT) {
		CString szWhere;
		szWhere.Format(_T(" WHERE"));
		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
		szSQL += szWhere;
	}
	_fmsg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL);
	if (ret > 0)
	{
		//OnTMThuchienchitieuListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CTMThuchienchitieu::OnCancelTMThuchienchitieu() {
	if (GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	return 0;
}
int CTMThuchienchitieu::OnTMThuchienchitieuListLoadData() {
	return 0;
}
CString CTMThuchienchitieu::GetQueryString()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank, szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	szSQL.Format(_T(" SELECT") \
		_T(" 1 AS c1,") \
		_T(" 'T\x1ED5ng s\x1ED1 ng\xE0y n\x1EB1m \x110T' AS c2,") \
		_T("  SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 1") \
		_T("     AND hd_rank   IN(15, 16, 17, 18, 21, 22, 23, 24)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c3,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 1") \
		_T("     AND hd_rank   IN(13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c4,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object   = 1") \
		_T("     AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c5,") \
		//Tách thành 3 cột//			

		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 11 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c6,") \

		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 11 AND hd_rank IN(13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c7,") \

		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 11 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c8,") \


		//Tách thành 3 cột//

		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 10") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c9,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2, 12)") \
		_T("     AND hd_rank    IN(15, 16, 17, 18, 21, 22, 23, 24)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c10,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2, 12)") \
		_T("     AND hd_rank    IN(13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c11,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object  IN(2, 12)") \
		_T("     AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c12,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 8") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c13,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 9") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c14,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 3") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c15,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 7") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c16,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 4") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c17,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 5") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END)           AS c18,") \
		_T("   SUM(DECODE(treat_day, 0, 1, treat_day)) AS c19") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" hcr_docno,") \
		_T(" hd_object,") \
		_T(" hd_rank,") \
		_T(" CASE WHEN htr_status = 'I' AND htr_admitdate <  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))  ") \
		_T(" WHEN htr_status = 'I' AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), htr_admitdate)  ") \
		_T(" WHEN htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate <= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(htr_dischargedate, TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')) ") \
		_T(" WHEN htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')) ") \
		_T(" WHEN htr_admitdate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate <= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(htr_dischargedate, htr_admitdate) ") \
		_T(" WHEN htr_admitdate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), htr_admitdate) ") \
		_T(" ELSE 0 END AS treat_day") \
		_T(" FROM hms_treatment_record") \
		_T(" LEFT JOIN hms_clinical_record ") \
		_T(" ON(htr_docno=hcr_docno and hcr_refidx=htr_idx)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno=htr_docno) ") \
		_T(" WHERE NVL(htr_outpatient, 'X') <> 'Y'") \
		_T(" AND htr_deptid = '%s'") \
		_T(" AND (htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" OR htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" OR (htr_admitdate     < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND htr_status       IN('I') )") \
		_T(" OR (htr_admitdate     < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND htr_dischargedate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND htr_status        ='T') ) %s") \
		_T(" )"), m_szFromDate, m_szToDate, m_szFromDate,
		m_szFromDate, m_szToDate, m_szToDate,
		m_szFromDate, m_szToDate, m_szFromDate,
		m_szFromDate, m_szToDate, m_szToDate, m_szFromDate,
		m_szFromDate, m_szToDate,
		m_szFromDate, m_szToDate, m_szToDate,
		pMF->GetCurrentDepartmentID(),
		m_szFromDate, m_szToDate,
		m_szFromDate, m_szToDate,
		m_szFromDate, m_szFromDate, m_szFromDate, szWhere);
	return szSQL;
}

CString CTMThuchienchitieu::GetQueryString1()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T(" SELECT") \
		_T(" DECODE(report_day, 0, 1, report_day) AS report_day") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT getdaysbetween(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')) AS report_day") \
		_T(" FROM dual") \
		_T(" )"), m_szToDate, m_szFromDate);
	return szSQL;
}

CString CTMThuchienchitieu::GetQueryString2()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T(" SELECT sd_planned_bed AS planned FROM sys_dept WHERE sd_id = '%s'"), pMF->GetCurrentDepartmentID());
	return szSQL;
}

CString CTMThuchienchitieu::GetQueryString3()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T(" SELECT sd_avaiable_bed AS avaiable FROM sys_dept WHERE sd_id = '%s'"), pMF->GetCurrentDepartmentID());
	return szSQL;
}

CString CTMThuchienchitieu::GetQueryString4()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank, szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	szSQL.Format(_T(" SELECT") \
		_T(" 5 AS c1,") \
		_T(" 'TS ng\xE0y n\x1EB1m \x110T gi\x1EA3m' AS c2,") \
		_T("  SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 1") \
		_T("     AND hd_rank   IN(15, 16, 17, 18, 21, 22, 23, 24)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c3,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 1") \
		_T("     AND hd_rank   IN(13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c4,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object   = 1") \
		_T("     AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c5,") \


		//Tách thành 3 cột//
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 11 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c6,") \


		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 11 AND hd_rank IN(13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c7,") \


		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 11 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c8,") \
		//Tách thành 3 cột//
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 10") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c9,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2, 12)") \
		_T("     AND hd_rank    IN(15, 16, 17, 18, 21, 22, 23, 24)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c10,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2, 12)") \
		_T("     AND hd_rank    IN(13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c11,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object  IN(2, 12)") \
		_T("     AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14)") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c12,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 8") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c13,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 9") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c14,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 3") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c15,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 7") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c16,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 4") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END) AS c17,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object = 5") \
		_T("     THEN DECODE(treat_day, 0, 1, treat_day)") \
		_T("     ELSE 0") \
		_T("   END)           AS c18,") \
		_T("   SUM(DECODE(treat_day, 0, 1, treat_day)) AS c19") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" hcr_docno,") \
		_T(" hd_object,") \
		_T(" hd_rank,") \
		_T(" CASE WHEN htr_status = 'I' AND htr_admitdate <  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))  ") \
		_T(" WHEN htr_status = 'I' AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), htr_admitdate)  ") \
		_T(" WHEN htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate <= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(htr_dischargedate, TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')) ") \
		_T(" WHEN htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')) ") \
		_T(" WHEN htr_admitdate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate <= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(htr_dischargedate, htr_admitdate) ") \
		_T(" WHEN htr_admitdate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" THEN getdaysbetween(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), htr_admitdate) ") \
		_T(" ELSE 0 END AS treat_day") \
		_T(" FROM hms_treatment_record") \
		_T(" LEFT JOIN hms_clinical_record ") \
		_T(" ON(htr_docno=hcr_docno and hcr_refidx=htr_idx)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno=htr_docno) ") \
		_T(" WHERE NVL(htr_outpatient, 'X') <> 'Y' AND htr_status = 'T'") \
		_T(" AND htr_deptid = '%s'") \
		_T(" AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" )"), m_szFromDate, m_szToDate, m_szFromDate,
		m_szFromDate, m_szToDate, m_szToDate,
		m_szFromDate, m_szToDate, m_szFromDate,
		m_szFromDate, m_szToDate, m_szToDate, m_szFromDate,
		m_szFromDate, m_szToDate,
		m_szFromDate, m_szToDate, m_szToDate,
		pMF->GetCurrentDepartmentID(),
		m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}

CString CTMThuchienchitieu::GetQueryString5()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank, szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	szSQL.Format(_T(" SELECT") \
		_T(" 6 AS c1,") \
		_T(" 'T\x42 \x31 \x42N \x110T gi\x1EA3m' AS c2,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 END), 1) AS c3,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 END), 1) AS c4,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 END), 1) AS c5,") \



		_T(" NVL(SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 END), 1) AS c6,") \
		_T(" NVL(SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 END), 1) AS c7,") \
		_T(" NVL(SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 END), 1) AS c8,") \




		_T(" NVL(SUM(CASE WHEN hd_object = 10 THEN 1 END), 1) AS c9,") \
		_T(" NVL(SUM(CASE WHEN hd_object IN(2, 12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 END), 1) AS c10,") \
		_T(" NVL(SUM(CASE WHEN hd_object IN(2, 12) AND hd_rank IN(13, 14) THEN 1 END), 1) AS c11,") \
		_T(" NVL(SUM(CASE WHEN hd_object IN(2, 12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 END), 1) AS c12,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 8 THEN 1 END), 1) AS c13,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 9 THEN 1 END), 1) AS c14,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 3 THEN 1 END), 1) AS c15,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 7 THEN 1 END), 1) AS c16,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 4 THEN 1 END), 1) AS c17,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 5 THEN 1 END), 1) AS c18,") \
		_T(" CASE WHEN COUNT(*) > 0 THEN COUNT(*) ELSE 1 END AS c19") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" hcr_docno,") \
		_T(" hd_object,") \
		_T(" hd_rank") \
		_T(" FROM hms_treatment_record") \
		_T(" LEFT JOIN hms_clinical_record ") \
		_T(" ON(htr_docno=hcr_docno and hcr_refidx=htr_idx)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno=htr_docno) ") \
		_T(" WHERE htr_status = 'T'") \
		_T(" AND NVL(htr_outpatient, 'X') <> 'Y'") \
		_T(" AND htr_deptid = '%s'") \
		_T(" AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" )"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}

CString CTMThuchienchitieu::GetQueryString6()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank, szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	szSQL.Format(_T(" SELECT") \
		_T(" typeid AS c1,") \
		_T(" typename AS c2,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c3,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c4,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c5,") \



		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c6,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c7,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c8,") \


		_T(" SUM(CASE WHEN hd_object = 10 THEN 1 ELSE 0 END) AS c9,") \
		_T(" SUM(CASE WHEN hd_object IN(2, 12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c10,") \
		_T(" SUM(CASE WHEN hd_object IN(2, 12) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c11,") \
		_T(" SUM(CASE WHEN hd_object IN(2, 12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c12,") \
		_T(" SUM(CASE WHEN hd_object = 8 THEN 1 ELSE 0 END) AS c13,") \
		_T(" SUM(CASE WHEN hd_object = 9 THEN 1 ELSE 0 END) AS c14,") \
		_T(" SUM(CASE WHEN hd_object = 3 THEN 1 ELSE 0 END) AS c15,") \
		_T(" SUM(CASE WHEN hd_object = 7 THEN 1 ELSE 0 END) AS c16,") \
		_T(" SUM(CASE WHEN hd_object = 4 THEN 1 ELSE 0 END) AS c17,") \
		_T(" SUM(CASE WHEN hd_object = 5 THEN 1 ELSE 0 END) AS c18,") \
		_T(" COUNT(*) AS c19") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" CASE WHEN htr_suggestion NOT IN('M', 'F') AND hcr_result NOT IN(4, 5, 6, 7) THEN 7") \
		_T(" END AS typeid,") \
		_T(" CASE WHEN htr_suggestion NOT IN('M', 'F') AND hcr_result NOT IN(4, 5, 6, 7) THEN 'T\x1EF7 l\x1EC7 kh\x1ECFi r\x61 vi\x1EC7n'") \
		_T(" END AS typename,") \
		_T(" hd_docno,") \
		_T(" hd_object,") \
		_T(" hd_rank") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON ( hcr_docno       = hd_docno )") \
		_T(" WHERE htr_status       = 'T'") \
		_T(" AND htr_deptid       ='%s'") \
		_T(" AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" )") \
		_T(" tbl") \
		_T(" WHERE length(typename) > 0") \
		_T(" GROUP BY") \
		_T(" typeid,") \
		_T(" typename") \
		_T(" ORDER BY") \
		_T(" typeid"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}

CString CTMThuchienchitieu::GetQueryString7()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank, szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	szSQL.Format(_T(" SELECT") \
		_T(" 7 AS c1,") \
		_T(" 'T\x1EF7 l\x1EC7 kh\x1ECFi r\x61 vi\x1EC7n' AS c2,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 END), 1) AS c3,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 END), 1) AS c4,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 END), 1) AS c5,") \

		_T(" NVL(SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 END), 1) AS c6,") \
		_T(" NVL(SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 END), 1) AS c7,") \
		_T(" NVL(SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 END), 1) AS c8,") \

		_T(" NVL(SUM(CASE WHEN hd_object = 10 THEN 1 END), 1) AS c9,") \
		_T(" NVL(SUM(CASE WHEN hd_object IN(2, 12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 END), 1) AS c10,") \
		_T(" NVL(SUM(CASE WHEN hd_object IN(2, 12) AND hd_rank IN(13, 14) THEN 1 END), 1) AS c11,") \
		_T(" NVL(SUM(CASE WHEN hd_object IN(2, 12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 END), 1) AS c12,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 8 THEN 1 END), 1) AS c13,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 9 THEN 1 END), 1) AS c14,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 3 THEN 1 END), 1) AS c15,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 7 THEN 1 END), 1) AS c16,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 4 THEN 1 END), 1) AS c17,") \
		_T(" NVL(SUM(CASE WHEN hd_object = 5 THEN 1 END), 1) AS c18,") \
		_T(" CASE WHEN COUNT(*) > 0 THEN COUNT(*) ELSE 1 END AS c19") \
		_T(" FROM hms_treatment_record") \
		_T(" LEFT JOIN hms_clinical_record ") \
		_T(" ON(htr_docno=hcr_docno and hcr_refidx=htr_idx)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno=htr_docno) ") \
		_T(" WHERE htr_deptid = '%s'") \
		_T(" AND (htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" OR htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" OR (htr_admitdate     < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND htr_status       IN('I') )") \
		_T(" OR (htr_admitdate     < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND htr_dischargedate > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND htr_status        ='T') ) %s"), pMF->GetCurrentDepartmentID(),
		m_szFromDate, m_szToDate,
		m_szFromDate, m_szToDate,
		m_szFromDate, m_szFromDate, m_szFromDate, szWhere);
	return szSQL;
}