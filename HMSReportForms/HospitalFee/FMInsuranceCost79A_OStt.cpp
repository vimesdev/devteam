#include "stdafx.h"
#include "FMInsuranceCost79A_OStt.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_OStt *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceCost79A_OStt* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_OStt *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_OStt *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceCost79A_OStt *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceCost79A_OStt *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79A_OStt *pVw = (CFMInsuranceCost79A_OStt *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79A_OStt *pVw = (CFMInsuranceCost79A_OStt *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFMInsuranceCost79A_OStt *pVw = (CFMInsuranceCost79A_OStt *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_OStt*)pWnd)->OnAddEMStatisticsGeneralPatientReport();
} 
static int _OnEditEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_OStt*)pWnd)->OnEditEMStatisticsGeneralPatientReport();
} 
static int _OnDeleteEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_OStt*)pWnd)->OnDeleteEMStatisticsGeneralPatientReport();
} 
static int _OnSaveEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_OStt*)pWnd)->OnSaveEMStatisticsGeneralPatientReport();
} 
static int _OnCancelEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CFMInsuranceCost79A_OStt*)pWnd)->OnCancelEMStatisticsGeneralPatientReport();
} 
CFMInsuranceCost79A_OStt::CFMInsuranceCost79A_OStt(CWnd *pParent)
{
	m_nDlgWidth = 420;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CFMInsuranceCost79A_OStt::~CFMInsuranceCost79A_OStt()
{
}
void CFMInsuranceCost79A_OStt::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 215, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 410, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 90);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 410, 85); 
	//m_wndPrint.Create(this, _T("&Print"), 250, 95, 330, 120);
	m_wndExport.Create(this, _T("&Export"), 335, 95, 415, 120);

}
void CFMInsuranceCost79A_OStt::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(false);
	m_wndReportPeriod.SetCheckValue(false);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(false);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(false);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
}
void CFMInsuranceCost79A_OStt::OnSetWindowEvents(){
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
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	SetMode(VM_EDIT);
}
void CFMInsuranceCost79A_OStt::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}
void CFMInsuranceCost79A_OStt::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CFMInsuranceCost79A_OStt::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMInsuranceCost79A_OStt::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CFMInsuranceCost79A_OStt::SetMode(int nMode){
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
 			EnableButtons(TRUE,0,1,2,3,-1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CFMInsuranceCost79A_OStt::OnYearChange(){
	
} */
/*void CFMInsuranceCost79A_OStt::OnYearSetfocus(){
	
} */
/*void CFMInsuranceCost79A_OStt::OnYearKillfocus(){
	
} */
int CFMInsuranceCost79A_OStt::OnYearCheckValue(){
	return 0;
} 
void CFMInsuranceCost79A_OStt::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceCost79A_OStt::OnReportPeriodSelendok(){
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);	 
	 
}
/*void CFMInsuranceCost79A_OStt::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceCost79A_OStt::OnReportPeriodKillfocus(){
	
}*/
long CFMInsuranceCost79A_OStt::OnReportPeriodLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
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
/*void CFMInsuranceCost79A_OStt::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsuranceCost79A_OStt::OnFromDateChange(){
	
} */
/*void CFMInsuranceCost79A_OStt::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceCost79A_OStt::OnFromDateKillfocus(){
	
} */
int CFMInsuranceCost79A_OStt::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMInsuranceCost79A_OStt::OnToDateChange(){
	
} */
/*void CFMInsuranceCost79A_OStt::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceCost79A_OStt::OnToDateKillfocus(){
	
} */
int CFMInsuranceCost79A_OStt::OnToDateCheckValue(){
	return 0;
} 
void CFMInsuranceCost79A_OStt::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);
	if(!rpt.Init(_T("Reports/HMS/HE_THONGKEBENHNHANCAPTUONG.RPT")) )
	return ;
	BeginWaitCursor();
	UpdateData(true);
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	rs.GetValue(_T("tenkhoa"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);

	int nIndex = 1;
	CReportSection* rptDetail;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();		
		tmpStr.Format(_T("%ld"), nIndex ++);
		rptDetail->SetValue(_T("0"), tmpStr);
		
		rs.GetValue(_T("docno"),tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("tenBN"),tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("tencapbac"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("chucvu"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("donvi"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		rs.GetValue(_T("tendoituong"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("icd10"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.GetValue(_T("benhchinh"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.MoveNext();	
	}	
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
	
} 
void CFMInsuranceCost79A_OStt::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, tmpStr;
	int nTmp = 0, nQty = 0, nIdx = 1;
	double nRate = 0;
	CRecord rs(&pMF->m_db);
	BeginWaitCursor();
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 17);
	xls.SetColumnWidth(2, 17);
	xls.SetColumnWidth(3, 7);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 16);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 25);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 5);
	xls.SetColumnWidth(15, 14);
	xls.SetColumnWidth(16, 10);
	xls.SetColumnWidth(17, 8);

	int nCol = 0;
	int nRow = 0;	

	xls.SetCellText(0, 1, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 2, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N \x42\x1ECA KH\xD4I PH\x1EE4\x43 H\x1ED2 S\x1A0"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 18);
	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 5, _T("H\x1ECD t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 5, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 5, _T("Gi\x1EDBi t\xEDnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 6, _T("N\x61m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 6, _T("N\x1EEF"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 5, _T("M\xE3 th\x1EBB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 5, _T("M\xE3 \x111\x103ng k\xFD \x62\x61n \x111\x1EA7u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 5, _T("M\xE3 I\x43\x44"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, 5, _T("T\xEAn \x62\x1EC7nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 5, _T("Ng\xE0y v\xE0o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 5, _T("Ng\xE0y r\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 5, _T("T\x1ED5ng \x63hi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 5, _T("T\x1ED5ng \x42N \x63hi tr\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 5, _T("\x42H th\x61nh to\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, 5, _T("Kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 5, _T("Ng\xE0y th\x61nh to\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 0);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 2);
	xls.SetMerge(3, 3, 0, 15);
	xls.SetMerge(4, 4, 0, 15);
	xls.SetMerge(5, 6, 0, 0);
	xls.SetMerge(5, 6, 1, 1);
	xls.SetMerge(5, 6, 2, 2);
	xls.SetMerge(5, 6, 5, 5);
	xls.SetMerge(5, 6, 6, 6);
	xls.SetMerge(5, 6, 7, 7);
	xls.SetMerge(5, 6, 8, 8);
	xls.SetMerge(5, 6, 9, 9);
	xls.SetMerge(5, 6, 10, 10);
	xls.SetMerge(5, 6, 11, 11);
	xls.SetMerge(5, 6, 12, 12);
	xls.SetMerge(5, 6, 13, 13);
	xls.SetMerge(5, 6, 14, 14);
	xls.SetMerge(5, 6, 15, 15);

	nRow = 7;
	while(!rs.IsEOF()){
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sex"), tmpStr);
		if(tmpStr == _T("M"))
			{
				rs.GetValue(_T("mbirthyear"), tmpStr);
				xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
			}
		else
			{
				rs.GetValue(_T("fbirthyear"), tmpStr);
				xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
			}
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hd_icd"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("examdate"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("enddate"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("cost"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("patpaid"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("inspaid"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("invoicedate"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_DATE);
		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DSBN bi khoi phuc ho so.xls"));
} 
void CFMInsuranceCost79A_OStt::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceCost79A_OStt::OnAddEMStatisticsGeneralPatientReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMInsuranceCost79A_OStt::OnEditEMStatisticsGeneralPatientReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsuranceCost79A_OStt::OnDeleteEMStatisticsGeneralPatientReport(){
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
 		OnCancelEMStatisticsGeneralPatientReport(); 
 	}
	return 0;
}
int CFMInsuranceCost79A_OStt::OnSaveEMStatisticsGeneralPatientReport(){
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
 		//OnEMStatisticsGeneralPatientReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMInsuranceCost79A_OStt::OnCancelEMStatisticsGeneralPatientReport(){
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
int CFMInsuranceCost79A_OStt::OnEMStatisticsGeneralPatientReportListLoadData(){
	return 0;
}
CString CFMInsuranceCost79A_OStt::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szSQL.Format(_T(" SELECT hd_docno    AS docno,") \
		_T("   MAX(invoiceno)   AS invoiceno,") \
		_T("   MAX(invoicedate) AS invoicedate,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname) AS pname,") \
		_T("   CASE") \
		_T("     WHEN hp_sex='M'") \
		_T("     THEN extract(YEAR FROM hp_birthdate)") \
		_T("     ELSE 0") \
		_T("   END AS mbirthyear,") \
		_T("   CASE") \
		_T("     WHEN hp_sex='F'") \
		_T("     THEN extract(YEAR FROM hp_birthdate)") \
		_T("     ELSE 0") \
		_T("   END                                             AS fbirthyear,") \
		_T("   hp_sex                                          AS sex,") \
		_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("   CASE") \
		_T("     WHEN LENGTH(hd_cardno) > 15") \
		_T("     THEN SUBSTR(hd_cardno,1,15)") \
		_T("     ELSE hd_cardno") \
		_T("   END           AS cardno,") \
		_T("   hc_regcode AS regplace,") \
		_T("   TO_CHAR(hd_admitdate, 'DD/MM/YYYY')                                 AS examdate,") \
		_T("   TO_CHAR(hd_enddate, 'DD/MM/YYYY')                                   AS enddate,") \
		_T("   trunc(hd_enddate)-trunc(hd_admitdate)+1 AS totaltreat,") \
		_T("   hd_icd,") \
		_T("   CASE") \
		_T("     WHEN LENGTH(hd_icd) > 0") \
		_T("     THEN hi_name") \
		_T("       ||'['") \
		_T("       ||hd_icd") \
		_T("       ||']'") \
		_T("     ELSE NULL") \
		_T("   END AS icd10,") \
		_T("   NVL(lower(deptid), lower(hd_admitdept)) AS deptid,") \
		_T("   ROUND(SUM(inspaid))          AS cost,") \
		_T("   ROUND(SUM(discount))         AS inspaid,") \
		_T("   ROUND(SUM(inspaid-discount)) AS patpaid,") \
		_T("   ROUND(SUM(diffpaid))         AS diffpaid") \
		_T(" FROM") \
		_T("   (SELECT fi.hfe_deptid AS deptid,") \
		_T("     fi.hfe_class,") \
		_T("     fi.hfe_docno     AS docno,") \
		_T("     fi.hfe_invoiceno AS invoiceno,") \
		_T("     fi.hfe_date      AS invoicedate,") \
		_T("     fe.hfe_group     AS groupid,") \
		_T("     fe.hfe_cost     AS cost,") \
		_T("     fe.hfe_inspaid  AS inspaid,") \
		_T("     fe.hfe_discount AS discount,") \
		_T("     fe.hfe_diffpaid AS diffpaid") \
		_T("   FROM hms_fee_invoice fi") \
		_T("   LEFT JOIN hms_fee_view fe") \
		_T("   ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("   AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON (hfl_feeid       = hfe_itemid)") \
		_T("   WHERE fi.hfe_class IN('E')") \
		_T("   AND fe.hfe_discount > 0") \
		_T("   AND fi.hfe_status   ='P'") \
		_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T("   UNION ALL") \
		_T("   SELECT fi.hfe_deptid AS deptid,") \
		_T("     fi.hfe_class,") \
		_T("     fi.hfe_docno     AS docno,") \
		_T("     fi.hfe_invoiceno AS invoiceno,") \
		_T("     fi.hfe_date      AS invoicedate,") \
		_T("     fe.hfe_group     AS groupid,") \
		_T("     0,0,0,") \
		_T("     DECODE('P', fe.hfe_status, fe.hfe_patpaid, fe.hfe_patdebt) AS diffpaid") \
		_T("   FROM hms_fee_invoice fi") \
		_T("   LEFT JOIN hms_fee_view fe") \
		_T("   ON(fe.hfe_invoiceno=fi.hfe_invoiceno") \
		_T("   AND fe.hfe_docno   =fi.hfe_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON (hfl_feeid       = hfe_itemid)") \
		_T("   WHERE fi.hfe_class IN('E')") \
		_T("   AND fe.hfe_discount = 0") \
		_T("   AND fi.hfe_status   ='P'") \
		_T("   AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T("   ) tbl") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(docno=hd_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card") \
		_T(" ON(hc_patientno=hp_patientno") \
		_T(" AND hc_idx     =hd_cardidx)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id=hd_object)") \
		_T(" LEFT JOIN hms_icd") \
		_T(" ON(hd_icd             =hi_icd)") \
		_T(" WHERE hd_status       ='O'") \
		_T(" AND ho_type          IN ('I', 'C')") \
		_T(" AND LENGTH(hc_cardno) > 0") \
		_T(" GROUP BY hd_docno,") \
		_T("   hp_surname,") \
		_T("   hp_midname,") \
		_T("   hp_firstname,") \
		_T("   hp_birthdate,") \
		_T("   hp_sex,") \
		_T("   hd_cardno,") \
		_T("   hc_regcode,") \
		_T("   hd_icd,") \
		_T("   hd_admitdate,") \
		_T("   hd_enddate,") \
		_T("   hp_provid,") \
		_T("   hp_distid,") \
		_T("   hp_villid,") \
		_T("   hi_name,") \
		_T("   deptid,") \
		_T("   hd_admitdept") \
		_T(" ORDER BY to_date(enddate, 'dd/mm/yyyy'),") \
		_T("   deptid,") \
		_T("   hp_surname,") \
		_T("   hp_midname,") \
		_T("   hp_firstname"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);
	return szSQL;
}
