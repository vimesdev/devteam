#include "stdafx.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "RMGeneralExaminationInformationC11AReport.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMGeneralExaminationInformationC11AReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRMGeneralExaminationInformationC11AReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CRMGeneralExaminationInformationC11AReport *pVw = (CRMGeneralExaminationInformationC11AReport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRMGeneralExaminationInformationC11AReport *pVw = (CRMGeneralExaminationInformationC11AReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddRMGeneralExaminationInformationC11AReportFnc(CWnd *pWnd){
	 return ((CRMGeneralExaminationInformationC11AReport*)pWnd)->OnAddRMGeneralExaminationInformationC11AReport();
} 
static int _OnEditRMGeneralExaminationInformationC11AReportFnc(CWnd *pWnd){
	 return ((CRMGeneralExaminationInformationC11AReport*)pWnd)->OnEditRMGeneralExaminationInformationC11AReport();
} 
static int _OnDeleteRMGeneralExaminationInformationC11AReportFnc(CWnd *pWnd){
	 return ((CRMGeneralExaminationInformationC11AReport*)pWnd)->OnDeleteRMGeneralExaminationInformationC11AReport();
} 
static int _OnSaveRMGeneralExaminationInformationC11AReportFnc(CWnd *pWnd){
	 return ((CRMGeneralExaminationInformationC11AReport*)pWnd)->OnSaveRMGeneralExaminationInformationC11AReport();
} 
static int _OnCancelRMGeneralExaminationInformationC11AReportFnc(CWnd *pWnd){
	 return ((CRMGeneralExaminationInformationC11AReport*)pWnd)->OnCancelRMGeneralExaminationInformationC11AReport();
} 
CRMGeneralExaminationInformationC11AReport::CRMGeneralExaminationInformationC11AReport(CWnd* pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CRMGeneralExaminationInformationC11AReport::~CRMGeneralExaminationInformationC11AReport(){
}
void CRMGeneralExaminationInformationC11AReport::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 90, 84);
	m_wndFromDate.Create(this,95, 59, 245, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 95, 410, 120);
	m_wndExport.Create(this, _T("&Export"), 415, 95, 490, 120);

}
void CRMGeneralExaminationInformationC11AReport::OnInitializeComponents(){
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
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);



}
void CRMGeneralExaminationInformationC11AReport::OnSetWindowEvents(){
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
	
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = szSysDate + _T("00:00");
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate = szSysDate + _T("23:59");
	UpdateData(false);

}
void CRMGeneralExaminationInformationC11AReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CRMGeneralExaminationInformationC11AReport::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CRMGeneralExaminationInformationC11AReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRMGeneralExaminationInformationC11AReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRMGeneralExaminationInformationC11AReport::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CRMGeneralExaminationInformationC11AReport::SetMode(int nMode){
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
/*void CRMGeneralExaminationInformationC11AReport::OnYearChange(){
	
} */
/*void CRMGeneralExaminationInformationC11AReport::OnYearSetfocus(){
	
} */
/*void CRMGeneralExaminationInformationC11AReport::OnYearKillfocus(){
	
} */
int CRMGeneralExaminationInformationC11AReport::OnYearCheckValue(){
	return 0;
} 
void CRMGeneralExaminationInformationC11AReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRMGeneralExaminationInformationC11AReport::OnReportPeriodSelendok(){
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
/*void CRMGeneralExaminationInformationC11AReport::OnReportPeriodSetfocus(){
	
}*/
/*void CRMGeneralExaminationInformationC11AReport::OnReportPeriodKillfocus(){
	
}*/
long CRMGeneralExaminationInformationC11AReport::OnReportPeriodLoadData(){
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
/*void CRMGeneralExaminationInformationC11AReport::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRMGeneralExaminationInformationC11AReport::OnFromDateChange(){
	
} */
/*void CRMGeneralExaminationInformationC11AReport::OnFromDateSetfocus(){
	
} */
/*void CRMGeneralExaminationInformationC11AReport::OnFromDateKillfocus(){
	
} */
int CRMGeneralExaminationInformationC11AReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CRMGeneralExaminationInformationC11AReport::OnToDateChange(){
	
} */
/*void CRMGeneralExaminationInformationC11AReport::OnToDateSetfocus(){
	
} */
/*void CRMGeneralExaminationInformationC11AReport::OnToDateKillfocus(){
	
} */
int CRMGeneralExaminationInformationC11AReport::OnToDateCheckValue(){
	return 0;
} 
void CRMGeneralExaminationInformationC11AReport::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szSQL1, szWhere;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	UpdateData(true);

	if (!rpt.Init(_T("Reports/HMS/RM_TONGHOPTHONGTINKHAMBENHC11A.RPT"))) return;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd || hhmm, ddmmyyyy | hhmm), CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	szSQL = GetQueryString();
	//_msg(L"%s", szSQL);
	rs.ExecSQL(szSQL);
	
	int nTong = 0;
	int nIndex = 0;
	CString tmpStr1;
	CReportSection* rptDetail;
	long double  nTotal[4];
	for (int i = 1; i <= 3; i++)
	{
		nTotal[i] = 0.0;
	}

	while (!rs1.IsEOF() || !rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIndex++;
		if (!rs.IsEOF())
		{
			rs.GetValue(_T("hrl_index"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);

			rs.GetValue(_T("name"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);

			rs.GetValue(_T("he_receptreg_ser"), tmpStr);
			nTotal[1] += ToLong(tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);

			rs.GetValue(_T("he_receptreg_ins"), tmpStr);
			nTotal[2] += ToLong(tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);

			rs.GetValue(_T("reg"), tmpStr);
			nTotal[3] += ToLong(tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);

			rs.MoveNext();
		}
	}

	tmpStr.Format(_T("%d"), nTong);
	rpt.GetReportFooter()->SetValue(_T("sum3"), tmpStr);
	CString szSum;
	for (int i = 1; i <= 3; i++)
	{
		szSum.Format(_T("s%d"), i + 5);
		tmpStr.Format(_T("%.2f"), nTotal[i]);
		rpt.GetReportFooter()->SetValue(szSum, tmpStr);
	}
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void CRMGeneralExaminationInformationC11AReport::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//_msg(L"click");
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 50);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetCellText(0, 0, _T("TỔNG HỢP THÔNG TIN KHÁM BỆNH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	szTemp.Format(_T("KHOA %s"), pMF->m_szDept);
	xls.SetCellText(0, 1, szTemp, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	szTemp.Format(_T("Từ ngày %s đến ngày %s"), m_szFromDate, m_szToDate);
	xls.SetCellText(0, 2, szTemp, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 3, _T("Phòng khám"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 3, _T("Dịch vụ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 3, _T("BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 3, _T("Tổng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 4);
	xls.SetMerge(1, 1, 0, 4);
	xls.SetMerge(2, 2, 0, 4);

	rs.ExecSQL(GetQueryString());
	nRow = 5;
	nCol = 0;
	int nIndex = 1;
	while (!rs.IsEOF()) {
		rs.GetValue(_T("hrl_index"), tmpStr);
		xls.SetCellText(nCol + 0, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("he_receptreg_ser"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("he_receptreg_ins"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("reg"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
		nIndex++;
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\RM_TONGHOPTHONGTINKHAMBENHC11A.xls"));
} 
int CRMGeneralExaminationInformationC11AReport::OnAddRMGeneralExaminationInformationC11AReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRMGeneralExaminationInformationC11AReport::OnEditRMGeneralExaminationInformationC11AReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRMGeneralExaminationInformationC11AReport::OnDeleteRMGeneralExaminationInformationC11AReport(){
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
 		OnCancelRMGeneralExaminationInformationC11AReport();
 	}
	return 0;
}
int CRMGeneralExaminationInformationC11AReport::OnSaveRMGeneralExaminationInformationC11AReport(){
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
 		//OnRMGeneralExaminationInformationC11AReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRMGeneralExaminationInformationC11AReport::OnCancelRMGeneralExaminationInformationC11AReport(){
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
int CRMGeneralExaminationInformationC11AReport::OnRMGeneralExaminationInformationC11AReportListLoadData(){
	return 0;
}

CString CRMGeneralExaminationInformationC11AReport::GetQueryString()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL;
	CString szWhere1, szWhere;
	bool bWardOnly = false;
	if (bWardOnly)
		szWhere1.Format(_T(""));

	szWhere.Format(_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY/MM/DD HH24:MI:SS') "), m_szFromDate, m_szToDate);

	szSQL.Format(_T(" SELECT he_deptid,hrl_index,") \
		_T("   hrl_name      AS name, ") \
		_T("   SUM(he_receptreg_ser + he_receptreg_ins) AS reg,") \
		_T("   SUM(he_receptreg_ser) as he_receptreg_ser,") \
		_T("   SUM(he_receptreg_ins) as he_receptreg_ins,") \
		_T("   ") \
		_T("   SUM(he_examed_ser + he_examed_ins) AS examed,") \
		_T("   SUM(he_examed_ser) as he_examed_ser,") \
		_T("   SUM(he_examed_ins) as he_examed_ins  ") \
		_T(" FROM") \
		_T("   (SELECT he_deptid,") \
		_T("     he_roomid,") \
		_T("     he_docno as docno,") \
		_T("     ho_type,") \
		_T("     case when ho_type = 'S' then 1 else 0 end as he_receptreg_ser,") \
		_T("     case when ho_type <> 'S' then 1 else 0 end as he_receptreg_ins,") \
		_T("     case when ho_type = 'S' and he_status in ('P','T') then 1 else 0 end as he_examed_ser,") \
		_T("     case when ho_type <> 'S' and he_status in ('P','T') then 1 else 0 end as he_examed_ins    ") \
		_T("   FROM hms_exam") \
		_T("   LEFT JOIN hms_doc ON (he_docno = hd_docno)") \
		_T("   LEFT JOIN hms_object ON (hd_object = ho_id)") \
		_T("   WHERE 1=1 %s ") \
		_T("   ) Tbl") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON(hrl_deptid      =he_deptid") \
		_T(" AND hrl_id         =he_roomid)") \
		_T(" WHERE hrl_id       > 0") \
		_T(" AND he_deptid='%s'") \
		_T(" GROUP BY he_deptid,") \
		_T("   hrl_index,") \
		_T("   hrl_id,") \
		_T("   hrl_name ") \
		_T(" ORDER BY he_deptid,") \
		_T("   hrl_index"), szWhere, pMF->m_szDept);



	return szSQL;
}