#include "stdafx.h"
#include "FMBaocaoTCN.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMBaocaoTPCN *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMBaocaoTPCN* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMBaocaoTPCN *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMBaocaoTPCN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMBaocaoTPCN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMBaocaoTPCN *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMBaocaoTPCN *pVw = (CFMBaocaoTPCN *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMBaocaoTPCN *pVw = (CFMBaocaoTPCN *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMTPCNReportFnc(CWnd *pWnd){
	 return ((CFMBaocaoTPCN*)pWnd)->OnAddFMTPCNReport();
} 
static int _OnEditFMTPCNReportFnc(CWnd *pWnd){
	 return ((CFMBaocaoTPCN*)pWnd)->OnEditFMTPCNReport();
} 
static int _OnDeleteFMTPCNReportFnc(CWnd *pWnd){
	 return ((CFMBaocaoTPCN*)pWnd)->OnDeleteFMTPCNReport();
} 
static int _OnSaveFMTPCNReportFnc(CWnd *pWnd){
	 return ((CFMBaocaoTPCN*)pWnd)->OnSaveFMTPCNReport();
} 
static int _OnCancelFMTPCNReportFnc(CWnd *pWnd){
	 return ((CFMBaocaoTPCN*)pWnd)->OnCancelFMTPCNReport();
} 

static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CFMBaocaoTPCN*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CFMBaocaoTPCN*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CFMBaocaoTPCN*)pWnd)->OnPolicySelect();
}
static void _OnThatthuSelectFnc(CWnd *pWnd){
	 ((CFMBaocaoTPCN*)pWnd)->OnThatthuSelect();
}

static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMBaocaoTPCN*)pWnd)->OnAllSelect();
}
static void _OnkotinhyeucauSelectFnc(CWnd *pWnd)
{
	 ((CFMBaocaoTPCN*)pWnd)->OnkotinhyeucauSelect();
}

CFMBaocaoTPCN::CFMBaocaoTPCN()
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CFMBaocaoTPCN::~CFMBaocaoTPCN()
{
}
void CFMBaocaoTPCN::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 91);
	m_wndYearLabel.Create(this, _T("Year"), 10, 31, 90, 56);
	m_wndYear.Create(this,95, 31, 215, 56); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 31, 300, 56);
	m_wndReportPeriod.Create(this,305, 31, 425, 56); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 61, 90, 86);
	m_wndFromDate.Create(this,95, 61, 215, 86); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 61, 300, 86);
	m_wndToDate.Create(this,305, 61, 425, 86); 
	m_wndInsurance.Create(this, _T("Insurance"), 10, 96, 101, 121);
	m_wndService.Create(this, _T("Service"), 106, 96, 197, 121);
	m_wndPolicy.Create(this, _T("Quân_CS"), 203, 96, 294, 121);
	m_wndExport.Create(this, _T("&ExportXLS"), 330, 126, 430, 151);
	m_wndThatthu.Create(this, _T("BN yêu cầu"), 10, 126, 197, 151);
	m_wndkotinhyeucau.Create(this, _T("Không tính BN Yêu cầu"), 10, 157, 197, 182);
	m_wndAll.Create(this, _T("Tất cả"), 301, 96, 425, 121);	
}
void CFMBaocaoTPCN::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
}
void CFMBaocaoTPCN::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	m_wndThatthu.SetEvent(WE_CLICK, _OnThatthuSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndkotinhyeucau.SetEvent(WE_CLICK, _OnkotinhyeucauSelectFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
}
void CFMBaocaoTPCN::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Check(pDX, m_wndThatthu.GetDlgCtrlID(), m_bThatthu);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Check(pDX, m_wndkotinhyeucau.GetDlgCtrlID(), m_bkotinhyeucau);

}
void CFMBaocaoTPCN::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMBaocaoTPCN::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMBaocaoTPCN::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nInsurance=1;
	m_nService=1;
	m_nPolicy=1;
	m_bThatthu=false;
	m_nAll=0;
	m_bkotinhyeucau=FALSE;


}
int CFMBaocaoTPCN::SetMode(int nMode){
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
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CFMBaocaoTPCN::OnYearChange(){
	
} */
/*void CFMBaocaoTPCN::OnYearSetfocus(){
	
} */
/*void CFMBaocaoTPCN::OnYearKillfocus(){
	
} */

void CFMBaocaoTPCN::OnThatthuSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	/*UpdateData(TRUE);
	m_bkotinhyeucau = false;
	m_bThatthu = true;
	UpdateData(false);*/
		
	
}

void CFMBaocaoTPCN::OnInsuranceSelect()
{
		
}
void CFMBaocaoTPCN::OnServiceSelect(){
	
}
void CFMBaocaoTPCN::OnPolicySelect(){
	
}

void CFMBaocaoTPCN::OnAllSelect()
{
	
}

void CFMBaocaoTPCN::OnkotinhyeucauSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	/*UpdateData(TRUE);
	m_bkotinhyeucau = true;
	m_bThatthu = false;
	UpdateData(false);*/
	
}

int CFMBaocaoTPCN::OnYearCheckValue()
{
	UpdateData(TRUE);
	if (m_nYear > 0)
	{
		CDateTime dt;
		CDate date;
		CString szTemp;

		dt.ParseDateTime(m_szFromDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szFromDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}
	UpdateData(FALSE);
	return 0;
} 
void CFMBaocaoTPCN::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMBaocaoTPCN::OnReportPeriodSelendok()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	UpdateData(false); 
}
/*void CFMBaocaoTPCN::OnReportPeriodSetfocus(){
	
}*/
/*void CFMBaocaoTPCN::OnReportPeriodKillfocus(){
	
}*/
long CFMBaocaoTPCN::OnReportPeriodLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szReportPeriodKey));
	}
	m_wndReportPeriod.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMBaocaoTPCN::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMBaocaoTPCN::OnFromDateChange(){
	
} */
/*void CFMBaocaoTPCN::OnFromDateSetfocus(){
	
} */
/*void CFMBaocaoTPCN::OnFromDateKillfocus(){
	
} */
int CFMBaocaoTPCN::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMBaocaoTPCN::OnToDateChange(){
	
} */
/*void CFMBaocaoTPCN::OnToDateSetfocus(){
	
} */
/*void CFMBaocaoTPCN::OnToDateKillfocus(){
	
} */
int CFMBaocaoTPCN::OnToDateCheckValue()
{
	return 0;
} 
void CFMBaocaoTPCN::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMBaocaoTPCN::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	AfxMessageBox(_T("Báo cáo thu tiền thực phẩm chức năng từ hóa đơn và phơi ra viện, thời gian post quỹ!"));
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\THONGKE_TPCN.xls"))) AfxMessageBox(_T("Load fail!"));	
	xls.SetWorksheet(0);
	xls.SetSheetName(_T("Sheet 0"));
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString_v2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	nRow = 9;
	nCol = 0;
	
	while(!rs.IsEOF())
	{
				
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("hoten"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("tenthuoc"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("soluong"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("dongia"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("fac_invoiceno"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
			
		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[7] > 0)
	{
		xls.SetCellText(5, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[7] > 0)
	{
		xls.SetCellText(5, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\Template\\THONGKE_TPCN2.xls"));
} 
int CFMBaocaoTPCN::OnAddFMTPCNReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMBaocaoTPCN::OnEditFMTPCNReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMBaocaoTPCN::OnDeleteFMTPCNReport(){
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
 		OnCancelFMTPCNReport(); 
 	}
	return 0;
}
int CFMBaocaoTPCN::OnSaveFMTPCNReport(){
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
 		//OnFMTPCNReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMBaocaoTPCN::OnCancelFMTPCNReport(){
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
int CFMBaocaoTPCN::OnFMTPCNReportListLoadData(){
	return 0;
}

CString CFMBaocaoTPCN::GetQueryString_v2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	
	CRecord rs(&pMF->m_db);

			if(m_nInsurance == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C') "));
			}
			else if(m_nService == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('S') "));
			}
			else if (m_nPolicy == 0)
			{
				szWhere.AppendFormat(_T(" AND ho_type in ('D', 'P') "));
			}
			else if (m_nAll)
			{
				szWhere.AppendFormat(_T(" AND 1=1 "));
			}
			else
				szWhere.AppendFormat(_T(" AND 1=1 "));


			if (m_bThatthu)
			{
				szWhere.AppendFormat(_T(" and iv.hfe_deptid in ('TYC', 'PTTYC') "));
			}

			if (m_bkotinhyeucau)
			{
				szWhere.AppendFormat(_T(" and iv.hfe_deptid not in ('TYC', 'PTTYC') "));
			}

		szSQL.Format(_T(" SELECT ") \
		_T(" get_patientname(iv.hfe_docno)  AS hoten,") \
		_T(" iv.hfe_docno as sohoso,") \
		_T(" fe.hfe_deptid                  AS khoa,") \
		_T(" fe.hfe_desc AS tenthuoc,") \
		_T(" SUM(fe.HFE_QUANTITY) AS soluong,") \
		_T(" fe.HFE_UNITPRICE as dongia,") \
		_T(" SUM(fe.HFE_PATPAID) as thanhtien,") \
		_T(" fac_invoiceno as fac_invoiceno") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN HMS_FEE_INVOICE_VIEW_AB_V3 iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN fa_cash ON (iv.hfe_cash_id = FAC_CASH_ID)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.HFE_OBJECTID = HO_ID)") \
		_T(" WHERE iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND iv.hfe_status              ='P' ") \
		_T(" AND fe.hfe_type               IN ('D', 'M')") \
		_T(" AND fe.hfe_status = 'P'") \
		_T(" AND fe.hfe_group IN ('A1700') %s ") \
		_T(" GROUP BY iv.hfe_docno, fe.hfe_deptid, iv.hfe_docno, fe.hfe_desc, fe.HFE_UNITPRICE, fac_invoiceno ") \
		_T(" ORDER BY fe.hfe_deptid, iv.hfe_docno, fe.hfe_desc"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}