#include "stdafx.h"
#include "EMTestnParaRatebyRoom2.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMTestnParaRatebyRoom2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMTestnParaRatebyRoom2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMTestnParaRatebyRoom2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMTestnParaRatebyRoom2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMTestnParaRatebyRoom2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnPTTYCSelendokFnc(CWnd *pWnd){
	((CEMTestnParaRatebyRoom2 *)pWnd)->OnPTTYCSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMTestnParaRatebyRoom2 *pVw = (CEMTestnParaRatebyRoom2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMTestnParaRatebyRoom2 *pVw = (CEMTestnParaRatebyRoom2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CEMTestnParaRatebyRoom2 *pVw = (CEMTestnParaRatebyRoom2 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMTestnParaRatebyRoom2*)pWnd)->OnAddEMStatisticsGeneralPatientReport();
} 
static int _OnEditEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMTestnParaRatebyRoom2*)pWnd)->OnEditEMStatisticsGeneralPatientReport();
} 
static int _OnDeleteEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMTestnParaRatebyRoom2*)pWnd)->OnDeleteEMStatisticsGeneralPatientReport();
} 
static int _OnSaveEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMTestnParaRatebyRoom2*)pWnd)->OnSaveEMStatisticsGeneralPatientReport();
} 
static int _OnCancelEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMTestnParaRatebyRoom2*)pWnd)->OnCancelEMStatisticsGeneralPatientReport();
} 
CEMTestnParaRatebyRoom2::CEMTestnParaRatebyRoom2(CWnd *pParent)
{
	m_nDlgWidth = 420;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CEMTestnParaRatebyRoom2::~CEMTestnParaRatebyRoom2()
{
}
void CEMTestnParaRatebyRoom2::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 215, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 410, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 90);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 410, 85); 
	m_wndPTTYC.Create(this, _T("Nhóm PK PTTYC"), 10, 95, 140, 120);
	//m_wndPrint.Create(this, _T("&Print"), 250, 95, 330, 120);
	m_wndExport.Create(this, _T("&Export"), 335, 95, 415, 120);

}
void CEMTestnParaRatebyRoom2::OnInitializeComponents(){
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
void CEMTestnParaRatebyRoom2::OnSetWindowEvents(){
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
	m_wndPTTYC.SetEvent(WE_CLICK, _OnPTTYCSelendokFnc);
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
void CEMTestnParaRatebyRoom2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndPTTYC.GetDlgCtrlID(), m_bPTTYC);
}
void CEMTestnParaRatebyRoom2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CEMTestnParaRatebyRoom2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMTestnParaRatebyRoom2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bPTTYC = FALSE;

}
int CEMTestnParaRatebyRoom2::SetMode(int nMode){
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
/*void CEMTestnParaRatebyRoom2::OnYearChange(){
	
} */
/*void CEMTestnParaRatebyRoom2::OnYearSetfocus(){
	
} */
/*void CEMTestnParaRatebyRoom2::OnYearKillfocus(){
	
} */
int CEMTestnParaRatebyRoom2::OnYearCheckValue(){
	return 0;
} 
void CEMTestnParaRatebyRoom2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMTestnParaRatebyRoom2::OnReportPeriodSelendok(){
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
/*void CEMTestnParaRatebyRoom2::OnReportPeriodSetfocus(){
	
}*/
/*void CEMTestnParaRatebyRoom2::OnReportPeriodKillfocus(){
	
}*/
long CEMTestnParaRatebyRoom2::OnReportPeriodLoadData()
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
/*void CEMTestnParaRatebyRoom2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMTestnParaRatebyRoom2::OnFromDateChange(){
	
} */
/*void CEMTestnParaRatebyRoom2::OnFromDateSetfocus(){
	
} */
/*void CEMTestnParaRatebyRoom2::OnFromDateKillfocus(){
	
} */
int CEMTestnParaRatebyRoom2::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMTestnParaRatebyRoom2::OnToDateChange(){
	
} */
/*void CEMTestnParaRatebyRoom2::OnToDateSetfocus(){
	
} */
/*void CEMTestnParaRatebyRoom2::OnToDateKillfocus(){
	
} */
int CEMTestnParaRatebyRoom2::OnToDateCheckValue(){
	return 0;
} 

void CEMTestnParaRatebyRoom2::OnPTTYCSelect(){

}

void CEMTestnParaRatebyRoom2::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
void CEMTestnParaRatebyRoom2::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1, nQty = 0;
	double nRate = 0;
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

	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 10);
	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(0, 2, _T("TH\x1ED0NG K\xCA T\x1EF6 L\x1EC6 \x58\xC9T NGHI\x1EC6M \x43\x1A0 \x42\x1EA2N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 4, _T("Ph\xF2ng kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 4, _T("S\x1ED1 \x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 4, _T("SH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 4, _T("HH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 4, _T("VS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 4, _T("M\x44"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 4, _T("SHPT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 4, _T("GP\x42L"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 4, _T("YHHN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 4, _T("N\x1ED9i Soi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 4, _T("\x58Q"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 4, _T("S\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 12);
	xls.SetMerge(3, 3, 0, 12);

	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF()){
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);
		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("examed"), nQty);
		xls.SetCellText(nCol+2, nRow, int2str(nQty), FMT_TEXT);
		rs.GetValue(_T("sh"), nQty);
		rs.GetValue(_T("shr"), nRate);
		tmpStr.Format(_T("%d (%.2f )"),nQty, nRate);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hh"), nQty);
		rs.GetValue(_T("hhr"), nRate);
		tmpStr.Format(_T("%d (%.2f )"),nQty, nRate);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("vs"), nQty);
		rs.GetValue(_T("vsr"), nRate);
		tmpStr.Format(_T("%d (%.2f )"),nQty, nRate);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("md"), nQty);
		rs.GetValue(_T("mdr"), nRate);
		tmpStr.Format(_T("%d (%.2f )"),nQty, nRate);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("shpt"), nQty);
		rs.GetValue(_T("shptr"), nRate);
		tmpStr.Format(_T("%d (%.2f )"),nQty, nRate);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("gpbl"), nQty);
		rs.GetValue(_T("gpblr"), nRate);
		tmpStr.Format(_T("%d (%.2f )"),nQty, nRate);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("yhhn"), nQty);
		rs.GetValue(_T("yhhnr"), nRate);
		tmpStr.Format(_T("%d (%.2f )"),nQty, nRate);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("noisoi"), nQty);
		rs.GetValue(_T("noisoir"), nRate);
		tmpStr.Format(_T("%d (%.2f )"),nQty, nRate);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("xq"), nQty);
		rs.GetValue(_T("xqr"), nRate);
		tmpStr.Format(_T("%d (%.2f )"),nQty, nRate);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sa"), nQty);
		rs.GetValue(_T("sar"), nRate);
		tmpStr.Format(_T("%d (%.2f )"),nQty, nRate);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
		xls.Save(_T("Exports\\Thong ke ti le xet nghiem.xls"));
} 
void CEMTestnParaRatebyRoom2::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMTestnParaRatebyRoom2::OnAddEMStatisticsGeneralPatientReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CEMTestnParaRatebyRoom2::OnEditEMStatisticsGeneralPatientReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMTestnParaRatebyRoom2::OnDeleteEMStatisticsGeneralPatientReport(){
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
int CEMTestnParaRatebyRoom2::OnSaveEMStatisticsGeneralPatientReport(){
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
int CEMTestnParaRatebyRoom2::OnCancelEMStatisticsGeneralPatientReport(){
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
int CEMTestnParaRatebyRoom2::OnEMStatisticsGeneralPatientReportListLoadData(){
	return 0;
}
CString CEMTestnParaRatebyRoom2::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szInnerWhere, szUser;
	szUser = pMF->GetCurrentUser();
	szUser.MakeLower();
	szInnerWhere.Format(_T(" AND hpc_deptid = '%s'"), pMF->GetCurrentDepartmentID());
	szInnerWhere.AppendFormat(_T(" AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if (szUser != _T("bvtan") && szUser != _T("bvtanc14"))
		szInnerWhere.AppendFormat(_T(" AND hpc_doctor = '%s'"), szUser);
	szWhere.Format(_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere.AppendFormat(_T(" AND he_deptid = '%s'"), pMF->GetCurrentDepartmentID());
	if (szUser != _T("bvtan") && szUser != _T("bvtanc14"))
		szWhere.AppendFormat(_T(" AND he_doctor = '%s'"), szUser);
	if (m_bPTTYC == TRUE)
		szWhere.AppendFormat(_T(" AND he_roomid IN(33, 34, 35)"));
	else
		szWhere.AppendFormat(_T(" AND he_roomid NOT IN(33, 34, 35)"));

	szSQL.Format(_T(" SELECT roomname,") \
		_T("   examed,") \
		_T("   sh,") \
		_T("   hh,") \
		_T("   vs,") \
		_T("   md,") \
		_T("   shpt,") \
		_T("   gpbl,") \
		_T("   yhhn,") \
		_T("   noisoi,") \
		_T("   xq,") \
		_T("   sa,") \
		_T("   sh    *100/examed AS shr,") \
		_T("   hh    *100/examed AS hhr,") \
		_T("   vs    *100/examed AS vsr,") \
		_T("   md    *100/examed AS mdr,") \
		_T("   shpt  *100/examed AS shptr,") \
		_T("   gpbl  *100/examed AS gpblr,") \
		_T("   yhhn  *100/examed AS yhhnr,") \
		_T("   noisoi*100/examed AS noisoir,") \
		_T("   xq    *100/examed AS xqr,") \
		_T("   sa    *100/examed AS sar") \
		_T(" FROM") \
		_T("   (SELECT he_roomid,") \
		_T("     (SELECT hrl_name") \
		_T("     FROM hms_roomlist") \
		_T("     WHERE hrl_id  =he_roomid") \
		_T("     AND hrl_deptid='%s'") \
		_T("     )               AS roomname,") \
		_T("     COUNT(he_docno) AS examed") \
		_T("   FROM hms_exam") \
		_T("   WHERE he_status IN ('P', 'T') %s") \
		_T("   GROUP BY he_roomid,") \
		_T("     he_deptid") \
		_T("   ORDER BY he_roomid") \
		_T("   ) tbl2") \
		_T(" LEFT JOIN") \
		_T("   (SELECT hpc_roomid,") \
		_T("     SUM(sh)     AS sh,") \
		_T("     SUM(hh)     AS hh,") \
		_T("     SUM(vs)     AS vs,") \
		_T("     SUM(md)     AS md,") \
		_T("     SUM(shpt)   AS shpt,") \
		_T("     SUM(gpbl)   AS gpbl,") \
		_T("     SUM(yhhn)   AS yhhn,") \
		_T("     SUM(noisoi) AS noisoi,") \
		_T("     SUM(xq)     AS xq,") \
		_T("     SUM(sa)     AS sa") \
		_T("   FROM") \
		_T("     (SELECT hpc_roomid,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(hpc_groupid, 1, 3)='B12'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS sh,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(hpc_groupid, 1, 3)='B11'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS hh,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(hpc_groupid, 1, 3)='B15'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS vs,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(hpc_groupid, 1, 3)='B14'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS md,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(hpc_groupid, 1, 3)='B1B'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS shpt,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(hpc_groupid, 1, 3)='B1E'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS gpbl,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(hpc_groupid, 1, 3)='B25'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS yhhn,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(hpc_groupid, 1, 3)='B31'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS noisoi,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(hpc_groupid, 1, 3)='B21'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS xq,") \
		_T("       CASE") \
		_T("         WHEN SUBSTR(hpc_groupid, 1, 3)='B32'") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS sa") \
		_T("     FROM") \
		_T("       (SELECT hpc_roomid,") \
		_T("         hpc_docno,") \
		_T("         hpc_groupid") \
		_T("       FROM hms_testorder") \
		_T("       WHERE hpc_status<>'O' %s") \
		_T("       GROUP BY hpc_roomid,") \
		_T("         hpc_groupid,") \
		_T("         hpc_docno") \
		_T("       UNION ALL") \
		_T("       SELECT hpc_roomid,") \
		_T("         hpc_docno,") \
		_T("         hpc_groupid") \
		_T("       FROM hms_pacsorder") \
		_T("       WHERE hpc_status<>'O' %s") \
		_T("       GROUP BY hpc_roomid,") \
		_T("         hpc_groupid,") \
		_T("         hpc_docno") \
		_T("       )tmp") \
		_T("     ) tbl0") \
		_T("   GROUP BY hpc_roomid") \
		_T("   ORDER BY hpc_roomid") \
		_T("   ) tbl1") \
		_T(" ON (hpc_roomid=he_roomid)") \
		_T(" ORDER BY roomname "),pMF->GetCurrentDepartmentID(), szWhere, szInnerWhere, szInnerWhere);
		_fmsg(_T("%s"), szSQL);
		return szSQL;
}
