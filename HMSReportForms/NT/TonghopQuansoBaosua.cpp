#include "stdafx.h"
#include "TonghopQuansoBaosua.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTonghopQuansoBaosua *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTonghopQuansoBaosua* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTonghopQuansoBaosua *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTonghopQuansoBaosua *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTonghopQuansoBaosua *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTonghopQuansoBaosua *pVw = (CTonghopQuansoBaosua *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTonghopQuansoBaosua *pVw = (CTonghopQuansoBaosua *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CTonghopQuansoBaosua*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CTonghopQuansoBaosua*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTonghopQuansoBaosua*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CTonghopQuansoBaosua*)pWnd)->OnDeptListDeleteItem();
} 
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CTonghopQuansoBaosua*)pWnd)->OnListCheckAll();
}
static int _OnDeptListUncheckAllFnc(CWnd *pWnd){
	return ((CTonghopQuansoBaosua*)pWnd)->OnListUncheckAll();
}
CTonghopQuansoBaosua::CTonghopQuansoBaosua(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTonghopQuansoBaosua::~CTonghopQuansoBaosua()
{
}
void CTonghopQuansoBaosua::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 440, 490);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 90, 435, 485);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 310, 55);
	m_wndReportPeriod.Create(this,315, 30, 435, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDate.Create(this,315, 60, 435, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 310, 85);
	//m_wndPrint.Create(this, _T("&Print"), 235, 495, 335, 520);
	m_wndPrint.Create(this, _T("&Print"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 340, 495, 440, 520);
	m_wndDeptList.Create(this,15, 115, 430, 480); 

}
void CTonghopQuansoBaosua::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);

}
void CTonghopQuansoBaosua::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc, 0, 0, 0);
	m_wndDeptList.AddEvent(2, _T("Uncheck All"), _OnDeptListUncheckAllFnc, 0, 0, 0);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	OnDeptListLoadData();
	UpdateData(false);

}
void CTonghopQuansoBaosua::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CTonghopQuansoBaosua::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CTonghopQuansoBaosua::SetMode(int nMode){
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
/*void CTonghopQuansoBaosua::OnYearChange(){
	
} */
/*void CTonghopQuansoBaosua::OnYearSetfocus(){
	
} */
/*void CTonghopQuansoBaosua::OnYearKillfocus(){
	
} */
int CTonghopQuansoBaosua::OnYearCheckValue(){
	return 0;
} 
void CTonghopQuansoBaosua::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTonghopQuansoBaosua::OnReportPeriodSelendok(){
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
/*void CTonghopQuansoBaosua::OnReportPeriodSetfocus(){
	
}*/
/*void CTonghopQuansoBaosua::OnReportPeriodKillfocus(){
	
}*/
long CTonghopQuansoBaosua::OnReportPeriodLoadData(){
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
/*void CTonghopQuansoBaosua::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTonghopQuansoBaosua::OnFromDateChange(){
	
} */
/*void CTonghopQuansoBaosua::OnFromDateSetfocus(){
	
} */
/*void CTonghopQuansoBaosua::OnFromDateKillfocus(){
	
} */
int CTonghopQuansoBaosua::OnFromDateCheckValue(){
	return 0;
} 
/*void CTonghopQuansoBaosua::OnToDateChange(){
	
} */
/*void CTonghopQuansoBaosua::OnToDateSetfocus(){
	
} */
/*void CTonghopQuansoBaosua::OnToDateKillfocus(){
	
} */
int CTonghopQuansoBaosua::OnToDateCheckValue(){
	return 0;
} 
void CTonghopQuansoBaosua::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0, k = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos;
	long double nTotal[17];
	for (int i = 0; i < 17; i++)
	{
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_BANGTONGHOPCHAMANTHEOMUC.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		//Group Seperation
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("dept")));
			k = 0;
			for (int i = 0; i < 5; i++)
				for (int j = 0; j < 3; j++)
				{
					tmpStr.Format(_T("%d.%d"), i+3, j+1);
					rs.GetValue(tmpStr, nTmp);
					rptDetail->SetValue(tmpStr, double2str(nTmp));
					nTotal[k++] += nTmp;
				}
			rs.GetValue(_T("8"), nTmp);
			nTotal[15]+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
			rs.GetValue(_T("total"), nTmp);
			nTotal[16]+= nTmp;
			rptDetail->SetValue(_T("9"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	tmpStr = pMF->GetSysDate();
	/*szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);*/
	rpt.PrintPreview();
} 
void CTonghopQuansoBaosua::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[15], nGroupTotal[15];
	for(int i = 0; i < 15; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOPQUANSO_BAOSUA.xls"))) AfxMessageBox(_T("Chưa có Files TONGHOPQUANSO_BAOSUA.xls trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("khoa_alias"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenbenhnhan"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("sohoso"), tmpStr);		
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("foodname"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("Qty"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("unitprice"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("amount"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[8] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 15; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[8] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 15; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOPQUANSO_BAOSUA2.xls"));
} 
void CTonghopQuansoBaosua::OnDeptListDblClick(){
	
} 
void CTonghopQuansoBaosua::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTonghopQuansoBaosua::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTonghopQuansoBaosua::OnDeptListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDeptList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type='DT' ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad();
	return nCount;
}

int CTonghopQuansoBaosua::OnListCheckAll(){
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
		m_wndDeptList.SetCheck(i, true);
	return 0;
}

int CTonghopQuansoBaosua::OnListUncheckAll(){
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
		m_wndDeptList.SetCheck(i, false);
	return 0;
}

CString CTonghopQuansoBaosua::GetQueryString()
{
	CString szSQL, szWhere, szDepts;
	szWhere.Format(_T(" AND hfo_orderdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfo_deptid IN (%s)"), szDepts);

	szSQL.Format(_T(" SELECT ") \
				_T("   khoa,khoa_alias,") \
				_T("   sohoso,") \
				_T("   tenbenhnhan,  ") \
				_T("   foodname,") \
				_T("   unit,") \
				_T("   groupid,  ") \
				_T("   unitprice, ") \
				_T("   SUM(FoodQty - foodqtyC)           AS Qty,") \
				_T("   SUM(FoodQty - foodqtyC)*unitprice AS amount") \
				_T(" FROM") \
				_T("   (SELECT hfol_Line AS line,") \
				_T("     HFO_DEPTID      AS khoa, sd_id_alias as khoa_alias,") \
				_T("     GET_PATIENTNAME(HFO_DOCNO) as tenbenhnhan,") \
				_T("     HFO_DOCNO       AS sohoso,") \
				_T("     hfol_itemid     AS itemid,") \
				_T("     hfl_name2       AS foodid,") \
				_T("     hfl_name        AS foodname,") \
				_T("     hfol_type       AS type,") \
				_T("     hfol_groupid    AS groupid,") \
				_T("     hfl_unit        AS unit,") \
				_T("     hfol_unitprice  AS unitprice,") \
				_T("     hfol_qtyorder   AS FoodQty,") \
				_T("     CASE") \
				_T("       WHEN hfe_refstatus = 'C'") \
				_T("       THEN hfol_qtyorder") \
				_T("       ELSE 0") \
				_T("     END            AS foodqtyC") \
				_T("   FROM hms_feefood") \
				_T("   LEFT JOIN hms_feefoodline") \
				_T("   ON(hfo_orderid=hfol_orderid)") \
				_T("	LEFT JOIN sys_dept ON (sd_id = hfo_deptid) ") \
				_T("   LEFT JOIN hms_fee_list") \
				_T("   ON(hfl_feeid        =hfol_itemid)") \
				_T("   LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
				_T("   WHERE hfo_ordertype ='D'") \
				_T("   AND hfo_orderstatus in  ('A')") \
				_T("   %s ") \
				_T("   AND hfo_deptid NOT       IN ('PTTYC')") \
				_T("   AND NVL(hfl_deptid, 'X') <> 'HCKT'") \
				_T("   AND NVL(hfl_index1, 'N') = '212' AND NVL(hfos_milk,'N')='MILK'") \
				_T("   )") \
				_T(" GROUP BY line,") \
				_T("   khoa, khoa_alias,") \
				_T("   tenbenhnhan,") \
				_T("   sohoso,") \
				_T("   groupid,") \
				_T("   itemid,") \
				_T("   foodid,") \
				_T("   foodname,") \
				_T("   unit,") \
				_T("   unitprice") \
				_T("   HAVING  SUM(FoodQty - foodqtyC)*unitprice>0") \
				_T(" ORDER BY khoa,khoa_alias,sohoso,line,") \
				_T("   foodname,") \
				_T("   unit,") \
				_T("   unitprice"), szWhere);

_fmsg(_T("%s"), szSQL);
	return szSQL;
}