#include "stdafx.h"
#include "PACSQtyPerformDialogC8C.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "../PACS/PACSQtyPerform.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
0	((CPACSQtyPerformDialogC8C *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPACSQtyPerformDialogC8C *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSQtyPerformDialogC8C* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CPACSQtyPerformDialogC8C *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSQtyPerformDialogC8C *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSQtyPerformDialogC8C *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSQtyPerformDialogC8C *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSQtyPerformDialogC8C *pVw = (CPACSQtyPerformDialogC8C *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSQtyPerformDialogC8C *pVw = (CPACSQtyPerformDialogC8C *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnImportA11SelectFnc(CWnd *pWnd){
	CPACSQtyPerformDialogC8C *pVw = (CPACSQtyPerformDialogC8C *)pWnd;
	pVw->OnImportA11Select();
} 
static void _OnPerformDateSelectFnc(CWnd *pWnd){
	  ((CPACSQtyPerformDialogC8C*)pWnd)->OnPerformDateSelect();
}
static void _OnOrderdateSelectFnc(CWnd *pWnd){
	  ((CPACSQtyPerformDialogC8C*)pWnd)->OnOrderdateSelect();
}
static int _OnAddPACSQtyPerformDialogFnc(CWnd *pWnd){
	 return ((CPACSQtyPerformDialogC8C*)pWnd)->OnAddPACSQtyPerformDialog();
} 
static int _OnEditPACSQtyPerformDialogFnc(CWnd *pWnd){
	 return ((CPACSQtyPerformDialogC8C*)pWnd)->OnEditPACSQtyPerformDialog();
} 
static int _OnDeletePACSQtyPerformDialogFnc(CWnd *pWnd){
	 return ((CPACSQtyPerformDialogC8C*)pWnd)->OnDeletePACSQtyPerformDialog();
} 
static int _OnSavePACSQtyPerformDialogFnc(CWnd *pWnd){
	 return ((CPACSQtyPerformDialogC8C*)pWnd)->OnSavePACSQtyPerformDialog();
} 
static int _OnCancelPACSQtyPerformDialogFnc(CWnd *pWnd){
	 return ((CPACSQtyPerformDialogC8C*)pWnd)->OnCancelPACSQtyPerformDialog();
} 
CPACSQtyPerformDialogC8C::CPACSQtyPerformDialogC8C(CWnd* pParent){

	m_nDlgWidth = 475;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CPACSQtyPerformDialogC8C::~CPACSQtyPerformDialogC8C(){
}
void CPACSQtyPerformDialogC8C::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 465, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 115, 55);
	m_wndYear.Create(this,120, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 245, 30, 335, 55);
	m_wndReportPeriod.Create(this,340, 30, 460, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 115, 85);
	m_wndFromDate.Create(this,120, 60, 240, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 245, 60, 335, 85);
	m_wndToDate.Create(this,340, 60, 460, 85); 
	m_wndPrint.Create(this, _T("Xuất bệnh nhân"), 235, 121, 345, 146);
	m_wndExport.Create(this, _T("Xuất theo lượt"), 350, 121, 460, 146);
	m_wndPerformDate.Create(this, _T("Perform Date"), 179, 91, 340, 116);
	m_wndOrderdate.Create(this, _T("Order Date"), 11, 90, 174, 115);
	m_wndZone.Create(this, _T("Xuất theo khu"), 345, 90, 460, 115);
	m_wndImportA11.Create(this, _T("Import"), 11, 121, 91, 146);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CPACSQtyPerformDialogC8C::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CPACSQtyPerformDialogC8C::OnSetWindowEvents(){
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
	m_wndImportA11.SetEvent(WE_CLICK, _OnImportA11SelectFnc);
	m_wndPerformDate.SetEvent(WE_CLICK, _OnPerformDateSelectFnc);
	m_wndOrderdate.SetEvent(WE_CLICK, _OnOrderdateSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPACSQtyPerformDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPACSQtyPerformDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePACSQtyPerformDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePACSQtyPerformDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPACSQtyPerformDialogFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_ADD);
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_nOrderdate=1;
	m_nPerformDate=0;
	CRecord rs(&pMF->m_db);
	


	UpdateData(false);
}
void CPACSQtyPerformDialogC8C::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndPerformDate.GetDlgCtrlID(), m_nPerformDate);
	DDX_Radio(pDX, m_wndOrderdate.GetDlgCtrlID(), m_nOrderdate);
	DDX_Check(pDX, m_wndZone.GetDlgCtrlID(), m_bZone);
}
void CPACSQtyPerformDialogC8C::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSQtyPerformDialogC8C::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSQtyPerformDialogC8C::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nPerformDate=0;
	m_nOrderdate=0;
	m_bZone = FALSE;
}
int CPACSQtyPerformDialogC8C::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			//SetDefaultValues();
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
/*void CPACSQtyPerformDialogC8C::OnYearChange(){
	
} */
/*void CPACSQtyPerformDialogC8C::OnYearSetfocus(){
	
} */
/*void CPACSQtyPerformDialogC8C::OnYearKillfocus(){
	
} */
int CPACSQtyPerformDialogC8C::OnYearCheckValue(){
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
void CPACSQtyPerformDialogC8C::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSQtyPerformDialogC8C::OnReportPeriodSelendok(){
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
/*void CPACSQtyPerformDialogC8C::OnReportPeriodSetfocus(){
	
}*/
/*void CPACSQtyPerformDialogC8C::OnReportPeriodKillfocus(){
	
}*/
long CPACSQtyPerformDialogC8C::OnReportPeriodLoadData(){

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
/*void CPACSQtyPerformDialogC8C::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSQtyPerformDialogC8C::OnFromDateChange(){
	
} */
/*void CPACSQtyPerformDialogC8C::OnFromDateSetfocus(){
	
} */
/*void CPACSQtyPerformDialogC8C::OnFromDateKillfocus(){
	
} */
int CPACSQtyPerformDialogC8C::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSQtyPerformDialogC8C::OnToDateChange(){
	
} */
/*void CPACSQtyPerformDialogC8C::OnToDateSetfocus(){
	
} */
/*void CPACSQtyPerformDialogC8C::OnToDateKillfocus(){
	
} */
int CPACSQtyPerformDialogC8C::OnToDateCheckValue(){
	return 0;
}
void CPACSQtyPerformDialogC8C::OnPrintSelect()
{
	UpdateData(TRUE);
	if (m_bZone)
	{
		OnExportByZone(_T("P"));
		return;
	}
    CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	CString szSQL;
	CString tmpStr;
    CRecord rs( & pMF -> m_db);
    CRecord rss( & pMF -> m_db);
	BeginWaitCursor();
    
    szSQL = GetQueryString1();
	int nRow = 1;
	int nCol = 0;

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	rs.ExecSQL(szSQL);
    xls.SetColumnWidth(0, 30);
    xls.SetColumnWidth(1, 6);
    xls.SetColumnWidth(2, 6);
    xls.SetColumnWidth(3, 6);
    xls.SetColumnWidth(4, 6);
    xls.SetColumnWidth(5, 6);
    xls.SetColumnWidth(6, 6);
    xls.SetColumnWidth(7, 6);
    xls.SetColumnWidth(8, 6);
    xls.SetColumnWidth(9, 6);
    xls.SetColumnWidth(10, 6);
    xls.SetColumnWidth(11, 6);
    xls.SetColumnWidth(12, 6);
    xls.SetColumnWidth(13, 6);
    xls.SetColumnWidth(14, 6);
    xls.SetColumnWidth(15, 6);
    xls.SetColumnWidth(16, 6);
    xls.SetColumnWidth(17, 6);
    xls.SetColumnWidth(18, 6);

	xls.SetCellMergedColumns(nCol, 0, 6);
	xls.SetCellMergedColumns(nCol, 1, 6);
	xls.SetCellMergedColumns(nCol, 2, 6);
	xls.SetCellMergedColumns(nCol, 3, 6);

	xls.SetCellText(nCol, 0, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10, 0);
	xls.SetCellText(nCol, 1, _T("KHOA C8-C"), FMT_TEXT | FMT_CENTER, true, 10, 0);
    xls.SetCellText(nCol, 2, _T("BÁO CÁO SỐ LIỆU THEO BỆNH NHÂN"), FMT_TEXT | FMT_CENTER, true, 12);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 10, 0);

    nRow = 5;
    xls.SetCellMergedRows(nCol, nRow, 2);
    xls.SetCellText(nCol, nRow, _T("BỆNH NHÂN NỘI TRÚ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	/*xls.SetCellMergedColumns(nCol+1,nRow,6);
	xls.SetCellText(nCol+1,nRow,_T("ĐIỆN TIM"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+1,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+2,nRow+1,_T("CC, bất động"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+3,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+4,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+5,nRow+1,_T("Khám C1.2"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+6,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	xls.SetCellMergedColumns(nCol+7,nRow,2);
	xls.SetCellText(nCol+7,nRow,_T("ĐIỆN NÃO"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+7,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+8,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+7,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	xls.SetCellMergedColumns(nCol+9,nRow,2);
	xls.SetCellText(nCol+9,nRow,_T("LƯU HUYẾT NÃO"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+9,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+10,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+10,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	//xls.SetCellMergedColumns(nCol+11,nRow,3);
	xls.SetCellText(nCol+11,nRow,_T("ĐIỆN CƠ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+11,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+12,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+13,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	//xls.SetCellMergedColumns(nCol+10,nRow,2);
	xls.SetCellText(nCol+12,nRow,_T("THÔNG KHÍ PHỔI"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+12,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+11,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+16,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);*/

    xls.SetCellMergedColumns(nCol + 1, nRow, 5);
    xls.SetCellText(nCol + 1, nRow, _T("SIÊU ÂM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	/*xls.SetCellText(nCol+1,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+2,nRow+1,_T("CC, bất động"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+3,nRow+1,_T("Khoa khác"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+4,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+5,nRow+1,_T("A11"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);*/
	
    xls.SetCellText(nCol + 1, nRow + 1, _T("Bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(nCol + 2, nRow + 1, _T("CC, bất động"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(nCol + 3, nRow + 1, _T("Khám tuyến"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(nCol + 4, nRow + 1, _T("A11"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(nCol + 5, nRow + 1, _T("Khoa khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

    xls.SetCellMergedRows(nCol + 6, nRow, 2);
    xls.SetCellText(nCol + 6, nRow, _T("CỘNG SỐ BỆNH NHÂN NỘI TRÚ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

    CString szOldType, szNewType;
	double sumLine;
	double sumType[20];
	double sumTotal[20];
	sumLine = 0;
    for (int n = 0; n < 20; n++) {
        sumType[n] = 0;
	}

    for (int n = 0; n < 20; n++) {
        sumTotal[n] = 0;
	}

    double cost = 0;
    nRow = 7;
	
	szOldType.Empty();
    while (!rs.IsEOF()) {
        rs.GetValue(_T("intout"), szNewType);
        if (szNewType != szOldType && !szOldType.IsEmpty()) {
            if (sumType[6] > 0) {
                xls.SetCellText(nCol, nRow, _T("CỘNG"), FMT_TEXT, true, 10);
                xls.SetCellText(nCol + 1, nRow, double2str(sumType[1]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 2, nRow, double2str(sumType[2]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 3, nRow, double2str(sumType[3]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 4, nRow, double2str(sumType[4]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 5, nRow, double2str(sumType[5]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 6, nRow, double2str(sumType[6]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 7, nRow, double2str(sumType[7]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 8, nRow, double2str(sumType[8]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 9, nRow, double2str(sumType[9]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 10, nRow, double2str(sumType[10]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 11, nRow, double2str(sumType[11]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 12, nRow, double2str(sumType[12]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 13, nRow, double2str(sumType[13]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 14, nRow, double2str(sumType[14]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 15, nRow, double2str(sumType[15]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 16, nRow, double2str(sumType[16]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 17, nRow, double2str(sumType[17]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 18, nRow, double2str(sumType[18]), FMT_NUMBER1, true, 10);
                for (int i = 1; i < 20; i++) {
                    sumType[i] = 0;
				}
				nRow++;
			}
			
            xls.SetCellMergedRows(nCol, nRow, 2);
            xls.SetCellText(nCol, nRow, _T("BỆNH NHÂN NGOẠI TRÚ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	/*xls.SetCellMergedColumns(nCol+1,nRow,6);
	xls.SetCellText(nCol+1,nRow,_T("ĐIỆN TIM"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+1,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+2,nRow+1,_T("CC, bất động"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+3,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+4,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+5,nRow+1,_T("Khám C1.2"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+6,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	xls.SetCellMergedColumns(nCol+7,nRow,2);
	xls.SetCellText(nCol+7,nRow,_T("ĐIỆN NÃO"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+7,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+8,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+7,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	xls.SetCellMergedColumns(nCol+9,nRow,2);
	xls.SetCellText(nCol+9,nRow,_T("LƯU HUYẾT NÃO"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+9,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+10,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+10,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	//xls.SetCellMergedColumns(nCol+11,nRow,3);
	xls.SetCellText(nCol+11,nRow,_T("ĐIỆN CƠ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+11,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+12,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+13,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	//xls.SetCellMergedColumns(nCol+10,nRow,2);
	xls.SetCellText(nCol+12,nRow,_T("THÔNG KHÍ PHỔI"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+12,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+11,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+16,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);*/

            xls.SetCellMergedColumns(nCol + 1, nRow, 5);
            xls.SetCellText(nCol + 1, nRow, _T("SIÊU ÂM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	/*xls.SetCellText(nCol+1,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+2,nRow+1,_T("CC, bất động"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+3,nRow+1,_T("Khoa khác"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+4,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+5,nRow+1,_T("A11"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);*/

            xls.SetCellText(nCol + 1, nRow + 1, _T("Bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
            xls.SetCellText(nCol + 2, nRow + 1, _T("CC, bất động"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
            xls.SetCellText(nCol + 3, nRow + 1, _T("Khám tuyến"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
            xls.SetCellText(nCol + 4, nRow + 1, _T("A11"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
            xls.SetCellText(nCol + 5, nRow + 1, _T("Khoa khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

            xls.SetCellMergedRows(nCol + 6, nRow, 2);
            xls.SetCellText(nCol + 6, nRow, _T("CỘNG SỐ BỆNH NHÂN NGOẠI TRÚ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	nRow++;
	nRow++;		
		}
	/*	rs.GetValue(_T("intout"),tmpStr);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT,true, 10);*/

        rs.GetValue(_T("objectname"), tmpStr);
        xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, false, 10);

		/*rs.GetValue(_T("dientimqty"),cost);
		sumLine += cost;
		sumType[1] += cost;
		sumTotal[1] += cost;
		xls.SetCellText(nCol+1,nRow, double2str(cost),FMT_NUMBER1,false, 10);

		rs.GetValue(_T("dientimCCTGqty"),cost);
		sumLine += cost;
		sumType[2]+= cost;
		sumTotal[2] += cost;
		xls.SetCellText(nCol+2,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("dientimsk"),cost);
		sumLine += cost;
		sumType[3]+= cost;
		sumTotal[3] += cost;
		xls.SetCellText(nCol+3,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("dientimtuyen"),cost);
		sumLine += cost;
		sumType[4]+= cost;
		sumTotal[4] += cost;
		xls.SetCellText(nCol+4,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("dientimC12qty"),cost);
		sumLine += cost;
		sumType[5]+= cost;
		sumTotal[5] += cost;
		xls.SetCellText(nCol+5,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("dientimTYCqty"),cost);
		sumLine += cost;
		sumType[6]+= cost;
		sumTotal[6] += cost;
		xls.SetCellText(nCol+6,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("diennaoqty"),cost);
		sumLine += cost;
		sumType[7] += cost;
		sumTotal[7] += cost;
		xls.SetCellText(nCol+7,nRow, double2str(cost),FMT_NUMBER1,false, 10);

		rs.GetValue(_T("diennaoTYCqty"),cost);
		sumLine += cost;
		sumType[8] += cost;
		sumTotal[8] += cost;
		xls.SetCellText(nCol+8,nRow, double2str(cost),FMT_NUMBER1,false, 10);

		rs.GetValue(_T("luuhuyetnaoqty"),cost);
		sumLine += cost;
		sumType[9] += cost;
		sumTotal[9] += cost;
		xls.SetCellText(nCol+9,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("luuhuyetnaoTYCqty"),cost);
		sumLine += cost;
		sumType[10] += cost;
		sumTotal[10] += cost;
		xls.SetCellText(nCol+10,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("diencoqty"),cost);
		sumLine += cost;
		sumType[11]= cost;
		sumTotal[11] += cost;
		xls.SetCellText(nCol+11,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("thongkhiphoiqty"),cost);
		sumLine += cost;
		sumType[12] += cost;
		sumTotal[12] += cost;
		xls.SetCellText(nCol+12,nRow, double2str(cost),FMT_NUMBER1,false,10);

// 		rs.GetValue(_T("thongkhiphoisk"),cost);
// 		sumLine += cost;
// 		sumType[11] += cost;
// 		sumTotal[11] += cost;
// 		xls.SetCellText(nCol+11,nRow, double2str(cost),FMT_NUMBER1,false,10);*/

        rs.GetValue(_T("sieuamqty"), cost);
		sumLine += cost;
		sumType[1] += cost;
		sumTotal[1] += cost;
        xls.SetCellText(nCol + 1, nRow, double2str(cost), FMT_NUMBER1, false, 10);

        rs.GetValue(_T("sieuamCCTGqty"), cost);
		sumLine += cost;
		sumType[2] += cost;
		sumTotal[2] += cost;
        xls.SetCellText(nCol + 2, nRow, double2str(cost), FMT_NUMBER1, false, 10);

		/*rs.GetValue(_T("sieuamsk"),cost);
		sumLine += cost;
		sumType[3] += cost;
		sumTotal[3] += cost;
		xls.SetCellText(nCol+3,nRow, double2str(cost),FMT_NUMBER1,false,10);*/		

        rs.GetValue(_T("sieuamtuyen"), cost);
		sumLine += cost;
		sumType[3] += cost;
		sumTotal[3] += cost;
        xls.SetCellText(nCol + 3, nRow, double2str(cost), FMT_NUMBER1, false, 10);

        rs.GetValue(_T("sieuama11"), cost);
		sumLine += cost;
		sumType[4] += cost;
		sumTotal[4] += cost;
        xls.SetCellText(nCol + 4, nRow, double2str(cost), FMT_NUMBER1, false, 10);

        rs.GetValue(_T("sieuam_khoakhac"), cost);
		sumLine += cost;
		sumType[5] += cost;
		sumTotal[5] += cost;
        xls.SetCellText(nCol + 5, nRow, double2str(cost), FMT_NUMBER1, false, 10);

        xls.SetCellText(nCol + 6, nRow, double2str(sumLine), FMT_NUMBER1, false, 10);
        sumType[6] += sumLine;
		sumTotal[6] += sumLine;
        sumLine = 0;
		nRow++;
		rs.MoveNext();
        szOldType = szNewType;
	}
    if (sumType[6] > 0) {
        xls.SetCellText(nCol, nRow, _T("CỘNG"), FMT_TEXT, true, 10);
        xls.SetCellText(nCol + 1, nRow, double2str(sumType[1]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 2, nRow, double2str(sumType[2]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 3, nRow, double2str(sumType[3]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 4, nRow, double2str(sumType[4]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 5, nRow, double2str(sumType[5]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 6, nRow, double2str(sumType[6]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 7, nRow, double2str(sumType[7]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 8, nRow, double2str(sumType[8]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 9, nRow, double2str(sumType[9]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 10, nRow, double2str(sumType[10]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 11, nRow, double2str(sumType[11]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 12, nRow, double2str(sumType[12]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 13, nRow, double2str(sumType[13]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 14, nRow, double2str(sumType[14]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 15, nRow, double2str(sumType[15]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 16, nRow, double2str(sumType[16]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 17, nRow, double2str(sumType[17]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 18, nRow, double2str(sumType[18]), FMT_NUMBER1, true, 10);
        for (int i = 1; i < 20; i++) {
            sumType[i] = 0;
				}
				nRow++;
			}
    if (sumTotal[6] > 0) {
        xls.SetCellText(nCol, nRow, _T("TỔNG SỐ BỆNH NHÂN"), FMT_TEXT, true, 10);
        xls.SetCellText(nCol + 1, nRow, double2str(sumTotal[1]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 2, nRow, double2str(sumTotal[2]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 3, nRow, double2str(sumTotal[3]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 4, nRow, double2str(sumTotal[4]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 5, nRow, double2str(sumTotal[5]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 6, nRow, double2str(sumTotal[6]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 7, nRow, double2str(sumTotal[7]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 8, nRow, double2str(sumTotal[8]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 9, nRow, double2str(sumTotal[9]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 10, nRow, double2str(sumTotal[10]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 11, nRow, double2str(sumTotal[11]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 12, nRow, double2str(sumTotal[12]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 13, nRow, double2str(sumTotal[13]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 14, nRow, double2str(sumTotal[14]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 15, nRow, double2str(sumTotal[15]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 16, nRow, double2str(sumTotal[16]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 17, nRow, double2str(sumTotal[17]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 18, nRow, double2str(sumTotal[18]), FMT_NUMBER1, true, 10);
        for (int i = 1; i < 20; i++) {
            sumTotal[i] = 0;
				}
				nRow++;
			}

	xls.Save(_T("Exports\\TONGHOPKETQUANOINGOAITHEOSOBENHNHAN.xls"));
	EndWaitCursor();
} 
void CPACSQtyPerformDialogC8C::OnExportSelect(){
	UpdateData(TRUE);
	if (m_bZone)
	{
		return OnExportByZone();
	}
	
    CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	CString szSQL;
	CString tmpStr;
    CRecord rs( & pMF -> m_db);
    CRecord rss( & pMF -> m_db);
	BeginWaitCursor();
    
    szSQL = GetQueryString();
	int nRow = 1;
	int nCol = 0;

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	rs.ExecSQL(szSQL);
    xls.SetColumnWidth(0, 30);
    xls.SetColumnWidth(1, 6);
    xls.SetColumnWidth(2, 6);
    xls.SetColumnWidth(3, 6);
    xls.SetColumnWidth(4, 6);
    xls.SetColumnWidth(5, 6);
    xls.SetColumnWidth(6, 6);
    xls.SetColumnWidth(7, 6);
    xls.SetColumnWidth(8, 6);
    xls.SetColumnWidth(9, 6);
    xls.SetColumnWidth(10, 6);
    xls.SetColumnWidth(11, 6);
    xls.SetColumnWidth(12, 6);
    xls.SetColumnWidth(13, 6);
    xls.SetColumnWidth(14, 6);
    xls.SetColumnWidth(15, 6);
    xls.SetColumnWidth(16, 6);
    xls.SetColumnWidth(17, 6);
    xls.SetColumnWidth(18, 6);

	xls.SetCellMergedColumns(nCol, 0, 6);
	xls.SetCellMergedColumns(nCol, 1, 6);
	xls.SetCellMergedColumns(nCol, 2, 6);
	xls.SetCellMergedColumns(nCol, 3, 6);

	xls.SetCellText(nCol, 0, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10, 0);
	xls.SetCellText(nCol, 1, _T("KHOA C8-C"), FMT_TEXT | FMT_CENTER, true, 10, 0);
    xls.SetCellText(nCol, 2, _T("BÁO CÁO SỐ LIỆU THEO LƯỢT"), FMT_TEXT | FMT_CENTER, true, 12);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 10, 0);

    nRow = 5;
    xls.SetCellMergedRows(nCol, nRow, 2);
    xls.SetCellText(nCol, nRow, _T("BỆNH NHÂN NỘI TRÚ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	/*xls.SetCellMergedColumns(nCol+1,nRow,6);
	xls.SetCellText(nCol+1,nRow,_T("ĐIỆN TIM"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+1,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+2,nRow+1,_T("CC, bất động"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+3,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+4,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+5,nRow+1,_T("Khám C1.2"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+6,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	xls.SetCellMergedColumns(nCol+7,nRow,2);
	xls.SetCellText(nCol+7,nRow,_T("ĐIỆN NÃO"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+7,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+8,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+7,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	xls.SetCellMergedColumns(nCol+9,nRow,2);
	xls.SetCellText(nCol+9,nRow,_T("LƯU HUYẾT NÃO"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+9,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+10,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+10,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	//xls.SetCellMergedColumns(nCol+11,nRow,3);
	xls.SetCellText(nCol+11,nRow,_T("ĐIỆN CƠ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+11,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+12,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+13,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	//xls.SetCellMergedColumns(nCol+10,nRow,2);
	xls.SetCellText(nCol+12,nRow,_T("THÔNG KHÍ PHỔI"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+12,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+11,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+16,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);*/

    xls.SetCellMergedColumns(nCol + 1, nRow, 5);
    xls.SetCellText(nCol + 1, nRow, _T("SIÊU ÂM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

    xls.SetCellText(nCol + 1, nRow + 1, _T("Bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(nCol + 2, nRow + 1, _T("CC, bất động"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(nCol + 3, nRow + 1, _T("Khám tuyến"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(nCol + 4, nRow + 1, _T("A11"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(nCol + 5, nRow + 1, _T("Khoa khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

    xls.SetCellMergedRows(nCol + 6, nRow, 2);
    xls.SetCellText(nCol + 6, nRow, _T("CỘNG SỐ BỆNH NHÂN NỘI TRÚ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

    CString szOldType, szNewType;
	double sumLine;
	double sumType[20];
	double sumTotal[20];
	sumLine = 0;
    for (int n = 0; n < 20; n++) {
        sumType[n] = 0;
	}

    for (int n = 0; n < 20; n++) {
        sumTotal[n] = 0;
	}

    double cost = 0;
    nRow = 7;
	
	szOldType.Empty();
    while (!rs.IsEOF()) {
        rs.GetValue(_T("intout"), szNewType);
        if (szNewType != szOldType && !szOldType.IsEmpty()) {
            if (sumType[6] > 0) {
                xls.SetCellText(nCol, nRow, _T("CỘNG"), FMT_TEXT, true, 10);
                xls.SetCellText(nCol + 1, nRow, double2str(sumType[1]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 2, nRow, double2str(sumType[2]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 3, nRow, double2str(sumType[3]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 4, nRow, double2str(sumType[4]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 5, nRow, double2str(sumType[5]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 6, nRow, double2str(sumType[6]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 7, nRow, double2str(sumType[7]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 8, nRow, double2str(sumType[8]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 9, nRow, double2str(sumType[9]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 10, nRow, double2str(sumType[10]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 11, nRow, double2str(sumType[11]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 12, nRow, double2str(sumType[12]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 13, nRow, double2str(sumType[13]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 14, nRow, double2str(sumType[14]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 15, nRow, double2str(sumType[15]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 16, nRow, double2str(sumType[16]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 17, nRow, double2str(sumType[17]), FMT_NUMBER1, true, 10);
                xls.SetCellText(nCol + 18, nRow, double2str(sumType[18]), FMT_NUMBER1, true, 10);
                for (int i = 1; i < 20; i++) {
                    sumType[i] = 0;
				}
				nRow++;
			}
			
            xls.SetCellMergedRows(nCol, nRow, 2);
            xls.SetCellText(nCol, nRow, _T("BỆNH NHÂN NGOẠI TRÚ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	/*xls.SetCellMergedColumns(nCol+1,nRow,6);
	xls.SetCellText(nCol+1,nRow,_T("ĐIỆN TIM"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+1,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+2,nRow+1,_T("CC, bất động"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+3,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+4,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+5,nRow+1,_T("Khám C1.2"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+6,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	xls.SetCellMergedColumns(nCol+7,nRow,2);
	xls.SetCellText(nCol+7,nRow,_T("ĐIỆN NÃO"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+7,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+8,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+7,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	xls.SetCellMergedColumns(nCol+9,nRow,2);
	xls.SetCellText(nCol+9,nRow,_T("LƯU HUYẾT NÃO"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+9,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	xls.SetCellText(nCol+10,nRow+1,_T("Khám TYC"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+10,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	//xls.SetCellMergedColumns(nCol+11,nRow,3);
	xls.SetCellText(nCol+11,nRow,_T("ĐIỆN CƠ"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+11,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+12,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+13,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);

	//xls.SetCellMergedColumns(nCol+10,nRow,2);
	xls.SetCellText(nCol+12,nRow,_T("THÔNG KHÍ PHỔI"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+12,nRow+1,_T("Bệnh nhân"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+11,nRow+1,_T("Khám sức khỏe"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);
	//xls.SetCellText(nCol+16,nRow+1,_T("Khám tuyến"),FMT_TEXT|FMT_CENTER|FMT_WRAPING, true,10);*/

            xls.SetCellMergedColumns(nCol + 1, nRow, 5);
            xls.SetCellText(nCol + 1, nRow, _T("SIÊU ÂM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

            xls.SetCellText(nCol + 1, nRow + 1, _T("Bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
            xls.SetCellText(nCol + 2, nRow + 1, _T("CC, bất động"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
            xls.SetCellText(nCol + 3, nRow + 1, _T("Khám tuyến"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
            xls.SetCellText(nCol + 4, nRow + 1, _T("A11"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
            xls.SetCellText(nCol + 5, nRow + 1, _T("Khoa khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

            xls.SetCellMergedRows(nCol + 6, nRow, 2);
            xls.SetCellText(nCol + 6, nRow, _T("CỘNG SỐ BỆNH NHÂN NGOẠI TRÚ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	nRow++;
	nRow++;		
		}
	/*	rs.GetValue(_T("intout"),tmpStr);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT,true, 10);*/

        rs.GetValue(_T("objectname"), tmpStr);
        xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, false, 10);

		/*rs.GetValue(_T("dientimqty"),cost);
		sumLine += cost;
		sumType[1] += cost;
		sumTotal[1] += cost;
		xls.SetCellText(nCol+1,nRow, double2str(cost),FMT_NUMBER1,false, 10);

		rs.GetValue(_T("dientimCCTGqty"),cost);
		sumLine += cost;
		sumType[2]+= cost;
		sumTotal[2] += cost;
		xls.SetCellText(nCol+2,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("dientimsk"),cost);
		sumLine += cost;
		sumType[3]+= cost;
		sumTotal[3] += cost;
		xls.SetCellText(nCol+3,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("dientimtuyen"),cost);
		sumLine += cost;
		sumType[4]+= cost;
		sumTotal[4] += cost;
		xls.SetCellText(nCol+4,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("dientimC12qty"),cost);
		sumLine += cost;
		sumType[5]+= cost;
		sumTotal[5] += cost;
		xls.SetCellText(nCol+5,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("dientimTYCqty"),cost);
		sumLine += cost;
		sumType[6]+= cost;
		sumTotal[6] += cost;
		xls.SetCellText(nCol+6,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("diennaoqty"),cost);
		sumLine += cost;
		sumType[7] += cost;
		sumTotal[7] += cost;
		xls.SetCellText(nCol+7,nRow, double2str(cost),FMT_NUMBER1,false, 10);

		rs.GetValue(_T("diennaoTYCqty"),cost);
		sumLine += cost;
		sumType[8] += cost;
		sumTotal[8] += cost;
		xls.SetCellText(nCol+8,nRow, double2str(cost),FMT_NUMBER1,false, 10);

		rs.GetValue(_T("luuhuyetnaoqty"),cost);
		sumLine += cost;
		sumType[9] += cost;
		sumTotal[9] += cost;
		xls.SetCellText(nCol+9,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("luuhuyetnaoTYCqty"),cost);
		sumLine += cost;
		sumType[10] += cost;
		sumTotal[10] += cost;
		xls.SetCellText(nCol+10,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("diencoqty"),cost);
		sumLine += cost;
		sumType[11]= cost;
		sumTotal[11] += cost;
		xls.SetCellText(nCol+11,nRow, double2str(cost),FMT_NUMBER1,false,10);

		rs.GetValue(_T("thongkhiphoiqty"),cost);
		sumLine += cost;
		sumType[12] += cost;
		sumTotal[12] += cost;
		xls.SetCellText(nCol+12,nRow, double2str(cost),FMT_NUMBER1,false,10);

// 		rs.GetValue(_T("thongkhiphoisk"),cost);
// 		sumLine += cost;
// 		sumType[11] += cost;
// 		sumTotal[11] += cost;
// 		xls.SetCellText(nCol+11,nRow, double2str(cost),FMT_NUMBER1,false,10);*/

        rs.GetValue(_T("sieuamqty"), cost);
		sumLine += cost;
		sumType[1] += cost;
		sumTotal[1] += cost;
        xls.SetCellText(nCol + 1, nRow, double2str(cost), FMT_NUMBER1, false, 10);

        rs.GetValue(_T("sieuamCCTGqty"), cost);
		sumLine += cost;
		sumType[2] += cost;
		sumTotal[2] += cost;
        xls.SetCellText(nCol + 2, nRow, double2str(cost), FMT_NUMBER1, false, 10);

		/*rs.GetValue(_T("sieuamsk"),cost);
		sumLine += cost;
		sumType[3] += cost;
		sumTotal[3] += cost;
		xls.SetCellText(nCol+3,nRow, double2str(cost),FMT_NUMBER1,false,10);*/		

        rs.GetValue(_T("sieuamtuyen"), cost);
		sumLine += cost;
		sumType[3] += cost;
		sumTotal[3] += cost;
        xls.SetCellText(nCol + 3, nRow, double2str(cost), FMT_NUMBER1, false, 10);

        rs.GetValue(_T("sieuama11"), cost);
		sumLine += cost;
		sumType[4] += cost;
		sumTotal[4] += cost;
        xls.SetCellText(nCol + 4, nRow, double2str(cost), FMT_NUMBER1, false, 10);

        rs.GetValue(_T("sieuam_khoakhac"), cost);
		sumLine += cost;
		sumType[5] += cost;
		sumTotal[5] += cost;
        xls.SetCellText(nCol + 5, nRow, double2str(cost), FMT_NUMBER1, false, 10);

        xls.SetCellText(nCol + 6, nRow, double2str(sumLine), FMT_NUMBER1, false, 10);
        sumType[6] += sumLine;
		sumTotal[6] += sumLine;
        sumLine = 0;
		nRow++;
		rs.MoveNext();
        szOldType = szNewType;
	}
    if (sumType[6] > 0) {
        xls.SetCellText(nCol, nRow, _T("CỘNG"), FMT_TEXT, true, 10);
        xls.SetCellText(nCol + 1, nRow, double2str(sumType[1]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 2, nRow, double2str(sumType[2]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 3, nRow, double2str(sumType[3]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 4, nRow, double2str(sumType[4]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 5, nRow, double2str(sumType[5]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 6, nRow, double2str(sumType[6]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 7, nRow, double2str(sumType[7]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 8, nRow, double2str(sumType[8]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 9, nRow, double2str(sumType[9]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 10, nRow, double2str(sumType[10]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 11, nRow, double2str(sumType[11]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 12, nRow, double2str(sumType[12]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 13, nRow, double2str(sumType[13]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 14, nRow, double2str(sumType[14]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 15, nRow, double2str(sumType[15]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 16, nRow, double2str(sumType[16]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 17, nRow, double2str(sumType[17]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 18, nRow, double2str(sumType[18]), FMT_NUMBER1, true, 10);
        for (int i = 1; i < 20; i++) {
            sumType[i] = 0;
				}
				nRow++;
			}
    if (sumTotal[6] > 0) {
        xls.SetCellText(nCol, nRow, _T("TỔNG SỐ BỆNH NHÂN"), FMT_TEXT, true, 10);
        xls.SetCellText(nCol + 1, nRow, double2str(sumTotal[1]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 2, nRow, double2str(sumTotal[2]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 3, nRow, double2str(sumTotal[3]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 4, nRow, double2str(sumTotal[4]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 5, nRow, double2str(sumTotal[5]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 6, nRow, double2str(sumTotal[6]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 7, nRow, double2str(sumTotal[7]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 8, nRow, double2str(sumTotal[8]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 9, nRow, double2str(sumTotal[9]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 10, nRow, double2str(sumTotal[10]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 11, nRow, double2str(sumTotal[11]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 12, nRow, double2str(sumTotal[12]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 13, nRow, double2str(sumTotal[13]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 14, nRow, double2str(sumTotal[14]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 15, nRow, double2str(sumTotal[15]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 16, nRow, double2str(sumTotal[16]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 17, nRow, double2str(sumTotal[17]), FMT_NUMBER1, true, 10);
        xls.SetCellText(nCol + 18, nRow, double2str(sumTotal[18]), FMT_NUMBER1, true, 10);
        for (int i = 1; i < 20; i++) {
            sumTotal[i] = 0;
				}
				nRow++;
			}

	xls.Save(_T("Exports\\TONGHOPKETQUANOINGOAITHEOSOLUOT.xls"));
	EndWaitCursor();
} 
void CPACSQtyPerformDialogC8C::OnImportA11Select(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CPACSQtyPerform dlg(this);
	dlg.DoModal();
} 
void CPACSQtyPerformDialogC8C::OnPerformDateSelect(){
	
}
void CPACSQtyPerformDialogC8C::OnOrderdateSelect(){
	
}
int CPACSQtyPerformDialogC8C::OnAddPACSQtyPerformDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSQtyPerformDialogC8C::OnEditPACSQtyPerformDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSQtyPerformDialogC8C::OnDeletePACSQtyPerformDialog(){
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
 		OnCancelPACSQtyPerformDialog();
 	}
	return 0;
}
int CPACSQtyPerformDialogC8C::OnSavePACSQtyPerformDialog(){
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
 		//OnPACSQtyPerformDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSQtyPerformDialogC8C::OnCancelPACSQtyPerformDialog(){
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
int CPACSQtyPerformDialogC8C::OnPACSQtyPerformDialogListLoadData(){
	return 0;
}
CString CPACSQtyPerformDialogC8C::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL,szWhere,szCase1,szCase2;
	UpdateData(true);
	if(m_nOrderdate==0)
	{

		szWhere.Format(_T(" and hpcl_status in ('S','T') and hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
					    _T("    AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate,m_szToDate);
		szCase1.Format(_T("case when  hpcl_itemid='B330000336' and hpc_deptid not in ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A','A4-C','A2-C') then 1 else 0 end as dientimCCTGqty, "));
		szCase2.Format(_T("case when hpcl_itemid in ('B320002189','B320002194') then 1 else 0 end as sieuamCCTGqty"));

	}

    if(m_nPerformDate==0)
	{
		szWhere.Format(_T("and hpcl_status in ('T') and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					    _T("    AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate,m_szToDate);
		szCase1.Format(_T("case when  hpc_groupid='B3300' and hpcl_proomid in(21,22) then 1 else 0 end as dientimCCTGqty, "));
		szCase2.Format(_T("case when hpc_groupid='B3200' and hpcl_proomid in(21) then 1 else 0 end as sieuamCCTGqty"));
	}

	szSQL.Format(_T(" SELECT") \
		_T(" objectid,") \
		_T(" objectname,") \
		_T(" intout,") \
		_T("   0        AS dientimqty,") \
		_T("   0		AS dientimCCTGqty,") \
		_T("   0        AS dientimsk,") \
		_T("   0		AS dientimtuyen,") \
		_T("   0		AS dientimC12qty,") \
		_T("   0		AS dientimTYCqty,") \
		_T("   0        AS diennaoqty,") \
		_T("   0        AS diennaosk,") \
		_T("   0		AS diennaotuyen,") \
		_T("   0		AS diennaoTYCqty,") \
		_T("   0		AS luuhuyetnaoqty,") \
		_T("   0		AS luuhuyetnaosk,") \
		_T("   0		AS luuhuyetnaotuyen,") \
		_T("   0		AS luuhuyetnaoTYCqty,") \
		_T("   0        AS diencoqty,") \
		_T("   0		AS thongkhiphoiqty,") \
		_T("   0		AS thongkhiphoisk,") \
		_T("   0		AS thongkhiphoituyen,") \
		_T("   NVL(sieuamqty, 0) - NVL(sieuamCCTGqty, 0) -  NVL(sieuamsk, 0) - NVL(sieuamtuyen, 0) - NVL(sieuama11, 0) - NVL(sieuam_khoakhac, 0) AS sieuamqty,") \
		_T("   NVL(sieuamCCTGqty, 0)     AS sieuamCCTGqty,") \
		_T("   NVL(sieuamsk, 0)          AS sieuamsk,") \
		_T("   NVL(sieuamtuyen, 0)       AS sieuamtuyen,") \
		_T("   NVL(sieuama11, 0)         AS sieuama11,") \
		_T("   NVL(sieuam_khoakhac, 0)   AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" objectid,") \
		_T(" objectname,") \
		_T(" intout,") \
		_T("     SUM(dientimqty)        AS dientimqty,") \
		_T("     SUM(dientimCCTGqty)    AS dientimCCTGqty,") \
		_T("     SUM(dientimsk)         AS dientimsk,") \
		_T("     SUM(dientimtuyen)      AS dientimtuyen,") \
		_T("     SUM(dientimC12qty)     AS dientimC12qty,") \
		_T("     SUM(dientimTYCqty)     AS dientimTYCqty,") \
		_T("     SUM(diennaoqty)        AS diennaoqty,") \
		_T("     SUM(diennaosk)         AS diennaosk,") \
		_T("     SUM(diennaotuyen)      AS diennaotuyen,") \
		_T("     SUM(diennaoTYCqty)     AS diennaoTYCqty,") \
		_T("     SUM(luuhuyetnaoqty)    AS luuhuyetnaoqty,") \
		_T("     SUM(luuhuyetnaosk)     AS luuhuyetnaosk,") \
		_T("     SUM(luuhuyetnaotuyen)  AS luuhuyetnaotuyen,") \
		_T("     SUM(luuhuyetnaoTYCqty) AS luuhuyetnaoTYCqty,") \
		_T("     SUM(diencoqty)         AS diencoqty,") \
		_T("     SUM(thongkhiphoiqty)   AS thongkhiphoiqty,") \
		_T("     SUM(thongkhiphoisk)    AS thongkhiphoisk,") \
		_T("     SUM(thongkhiphoituyen) AS thongkhiphoituyen,") \
		_T("     SUM(sieuamqty)         AS sieuamqty ,") \
		_T("     SUM(sieuamCCTGqty)     AS sieuamCCTGqty,") \
		_T("     SUM(sieuamsk)          AS sieuamsk,") \
		_T("     SUM(sieuamtuyen)       AS sieuamtuyen,") \
		_T("     SUM(sieuama11)         AS sieuama11,") \
		_T("     SUM(sieuam_khoakhac)   AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" NVL(intout, 1) AS intout,") \
		_T("       SUM(dientimqty)      AS dientimqty,") \
		_T("       SUM(dientimCCTGqty)  AS dientimCCTGqty,") \
		_T("       SUM(0)               AS dientimsk,") \
		_T("       SUM(0)               AS dientimtuyen,") \
		_T("       SUM(0)               AS dientimC12qty,") \
		_T("       SUM(0)               AS dientimTYCqty,") \
		_T("       SUM(diennaoqty)      AS diennaoqty,") \
		_T("       SUM(0)               AS diennaosk,") \
		_T("       SUM(0)               AS diennaotuyen,") \
		_T("       SUM(0)               AS diennaoTYCqty,") \
		_T("       SUM(luuhuyetnaoqty)  AS luuhuyetnaoqty,") \
		_T("       SUM(0)               AS luuhuyetnaosk,") \
		_T("       SUM(0)               AS luuhuyetnaotuyen,") \
		_T("       SUM(0)               AS luuhuyetnaoTYCqty,") \
		_T("       SUM(diencoqty)       AS diencoqty,") \
		_T("       SUM(thongkhiphoiqty) AS thongkhiphoiqty,") \
		_T("       SUM(0)               AS thongkhiphoisk,") \
		_T("       SUM(0)               AS thongkhiphoituyen,") \
		_T("       SUM(sieuamqty)       AS sieuamqty ,") \
		_T("       SUM(sieuamCCTGqty)   AS sieuamCCTGqty,") \
		_T("       SUM(0)               AS sieuamsk,") \
		_T("       SUM(0)               AS sieuamtuyen,") \
		_T("       SUM(sieuama11)       AS sieuama11,") \
		_T("       SUM(sieuam_khoakhac) AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" hms_object") \
		_T(" LEFT JOIN") \
		_T(" ( SELECT hpcl_docno,") \
		_T(" hd_object,") \
		_T(" 1 AS intout,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid    = 'B3300'") \
		_T(" AND hpc_deptid NOT IN ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A' ,'A4-C','A2-C')") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS dientimqty, %s") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3400'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS diennaoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3600'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS luuhuyetnaoqty,") \
		_T(" 0   AS diencoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3500'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS thongkhiphoiqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuamqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200' AND hpcl_proomid IN(17)") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuama11, 0 as sieuam_khoakhac, %s") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_pacsorder") \
		_T(" ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid  =hpc_orderid") \
		_T(" AND hpcl_docno   =hpc_docno)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON ( hrl_id    = hpcl_proomid") \
		_T(" AND hrl_deptid IN ('C8-C', 'TYC') AND HRL_SECTION='HA')") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER IN (select su_userid from sys_user where su_deptid='C8-C' UNION ALL select ss_code from sys_sel where ss_id='c8cliketyc_user')") \
		_T(" AND hpc_deptid NOT IN('C1.1','C1.2','C1.3','TYC', 'AB')") \
		_T(" AND hpc_groupid='B3200' %s") \
		_T(" ) tbl") \
		_T(" ON(ho_id=hd_object)") \
		_T(" WHERE 1 = 1") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc,") \
		_T(" intout") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" NVL(intout, 1) AS intout,") \
		_T("       SUM(dientimqty)      AS dientimqty,") \
		_T("       SUM(dientimCCTGqty)  AS dientimCCTGqty,") \
		_T("       SUM(0)               AS dientimsk,") \
		_T("       SUM(0)               AS dientimtuyen,") \
		_T("       SUM(0)               AS dientimC12qty,") \
		_T("       SUM(0)               AS dientimTYCqty,") \
		_T("       SUM(diennaoqty)      AS diennaoqty,") \
		_T("       SUM(0)               AS diennaosk,") \
		_T("       SUM(0)               AS diennaotuyen,") \
		_T("       SUM(0)               AS diennaoTYCqty,") \
		_T("       SUM(luuhuyetnaoqty)  AS luuhuyetnaoqty,") \
		_T("       SUM(0)               AS luuhuyetnaosk,") \
		_T("       SUM(0)               AS luuhuyetnaotuyen,") \
		_T("       SUM(0)               AS luuhuyetnaoTYCqty,") \
		_T("       SUM(diencoqty)       AS diencoqty,") \
		_T("       SUM(thongkhiphoiqty) AS thongkhiphoiqty,") \
		_T("       SUM(0)               AS thongkhiphoisk,") \
		_T("       SUM(0)               AS thongkhiphoituyen,") \
		_T("       SUM(sieuamqty)	    AS sieuamqty ,") \
		_T("       SUM(0)				AS sieuamCCTGqty,") \
		_T("       SUM(0)               AS sieuamsk,") \
		_T("       SUM(0)               AS sieuamtuyen,") \
		_T("       SUM(0)				AS sieuama11,") \
		_T("       SUM(sieuam_khoakhac) AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" hms_object") \
		_T(" LEFT JOIN") \
		_T(" ( SELECT hpcl_docno,") \
		_T(" hd_object,") \
		_T(" 1 AS intout,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid    = 'B3300'") \
		_T(" AND hpc_deptid NOT IN ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A' ,'A4-C','A2-C')") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS dientimqty, %s") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3400'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS diennaoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3600'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS luuhuyetnaoqty,") \
		_T(" 0   AS diencoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3500'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS thongkhiphoiqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuamqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200' AND hpcl_proomid IN(17)") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuama11, ") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuam_khoakhac, %s") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_pacsorder") \
		_T(" ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid  =hpc_orderid") \
		_T(" AND hpcl_docno   =hpc_docno)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON ( hrl_id    = hpcl_proomid") \

		_T(" AND hrl_deptid IN ('C8-C', 'TYC') AND HRL_SECTION='HA')") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER NOT IN (select su_userid from sys_user where su_deptid='C8-C' UNION ALL select ss_code from sys_sel where ss_id='c8cliketyc_user')") \

		_T(" AND hpc_deptid NOT IN('C1.1','C1.2','C1.3','TYC', 'AB')") \
		_T(" AND hpc_groupid='B3200' %s") \
		_T(" ) tbl") \
		_T(" ON(ho_id=hd_object)") \
		_T(" WHERE 1 = 1") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc,") \
		_T(" intout") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" 1 AS intout,") \
		_T(" 0 AS dientimqty,") \
		_T(" 0 AS dientimCCTGqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3300' THEN hqp_incount ELSE 0 END) AS dientimsk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3300' THEN hqp_incount ELSE 0 END) AS dientimtuyen,") \
		_T(" 0 AS dientimC12qty,") \
		_T(" 0 AS dientimTYCqty,") \
		_T(" 0 AS diennaoqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3400' THEN hqp_incount ELSE 0 END) AS diennaosk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3400' THEN hqp_incount ELSE 0 END) AS diennaotuyen,") \
		_T(" 0 AS diennaoTYCqty,") \
		_T(" 0 AS luuhuyetnaoqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3600' THEN hqp_incount ELSE 0 END) AS luuhuyetnaosk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3600' THEN hqp_incount ELSE 0 END) AS luuhuyetnaotuyen,") \
		_T(" 0 AS luuhuyetnaoTYCqty,") \
		_T(" 0 AS diencoqty,") \
		_T(" 0 AS thongkhiphoiqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3500' THEN hqp_incount ELSE 0 END) AS thongkhiphoisk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3500' THEN hqp_incount ELSE 0 END) AS thongkhiphoituyen,") \
		_T(" SUM(CASE WHEN hqp_type IN ('3', '2', '1') AND hqp_group = 'B3200' THEN hqp_incount ELSE 0 END) AS sieuamqty ,") \
		_T(" 0 AS sieuamCCTGqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3200' THEN hqp_incount ELSE 0 END) AS sieuamsk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3200' THEN hqp_incount ELSE 0 END) AS sieuamtuyen,") \
		_T(" SUM(CASE WHEN hqp_type = '1' AND hqp_group = 'B3200' THEN hqp_incount ELSE 0 END) AS sieuama11,") \
		_T(" SUM(CASE WHEN hqp_type = 'L' AND hqp_group = 'B3200' THEN hqp_incount ELSE 0 END) AS sieuam_khoakhac") \
		_T(" FROM hms_qtyperform") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id = hqp_id)") \
		_T(" WHERE hqp_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc") \
		_T(" ) tbl1") \
		_T(" GROUP BY") \
		_T(" objectid,") \
		_T(" objectname,") \
		_T(" intout") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" objectid,") \
		_T(" objectname,") \
		_T(" intout,") \
		_T("	 SUM(dientimqty)        AS dientimqty,") \
		_T("     SUM(dientimCCTGqty)    AS dientimCCTGqty,") \
		_T("     SUM(dientimsk)         AS dientimsk,") \
		_T("     SUM(dientimtuyen)      AS dientimtuyen,") \
		_T("     SUM(dientimC12qty)     AS dientimC12qty,") \
		_T("     SUM(dientimTYCqty)     AS dientimTYCqty,") \
		_T("     SUM(diennaoqty)        AS diennaoqty,") \
		_T("     SUM(diennaosk)         AS diennaosk,") \
		_T("     SUM(diennaotuyen)      AS diennaotuyen,") \
		_T("     SUM(diennaoTYCqty)     AS diennaoTYCqty,") \
		_T("     SUM(luuhuyetnaoqty)    AS luuhuyetnaoqty,") \
		_T("     SUM(luuhuyetnaosk)     AS luuhuyetnaosk,") \
		_T("     SUM(luuhuyetnaotuyen)  AS luuhuyetnaotuyen,") \
		_T("     SUM(luuhuyetnaoTYCqty) AS luuhuyetnaoTYCqty,") \
		_T("     SUM(diencoqty)         AS diencoqty,") \
		_T("     SUM(thongkhiphoiqty)   AS thongkhiphoiqty,") \
		_T("     SUM(thongkhiphoisk)    AS thongkhiphoisk,") \
		_T("     SUM(thongkhiphoituyen) AS thongkhiphoituyen,") \
		_T("     SUM(sieuamqty)         AS sieuamqty ,") \
		_T("     SUM(sieuamCCTGqty)     AS sieuamCCTGqty,") \
		_T("     SUM(sieuamsk)          AS sieuamsk,") \
		_T("     SUM(sieuamtuyen)       AS sieuamtuyen,") \
		_T("     SUM(sieuama11)         AS sieuama11,") \
		_T("     SUM(sieuam_khoakhac)   AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" NVL(intout, 2) AS intout,") \
		_T("	   SUM(dientimqty)        AS dientimqty,") \
		_T("       SUM(dientimCCTGqty)    AS dientimCCTGqty,") \
		_T("       SUM(0)                 AS dientimsk,") \
		_T("       SUM(0)                 AS dientimtuyen,") \
		_T("       SUM(dientimC12qty)     AS dientimC12qty,") \
		_T("       SUM(dientimTYCqty)     AS dientimTYCqty,") \
		_T("       SUM(diennaoqty)        AS diennaoqty,") \
		_T("       SUM(0)                 AS diennaosk,") \
		_T("       SUM(0)                 AS diennaotuyen,") \
		_T("       SUM(diennaoTYCqty)     AS diennaoTYCqty,") \
		_T("       SUM(luuhuyetnaoqty)    AS luuhuyetnaoqty,") \
		_T("       SUM(0)                 AS luuhuyetnaosk,") \
		_T("       SUM(0)                 AS luuhuyetnaotuyen,") \
		_T("       SUM(luuhuyetnaoTYCqty) AS luuhuyetnaoTYCqty,") \
		_T("       SUM(diencoqty)         AS diencoqty,") \
		_T("       SUM(thongkhiphoiqty)   AS thongkhiphoiqty,") \
		_T("       SUM(0)                 AS thongkhiphoisk,") \
		_T("       SUM(0)                 AS thongkhiphoituyen,") \
		_T("       SUM(sieuamqty)         AS sieuamqty ,") \
		_T("       SUM(sieuamCCTGqty)     AS sieuamCCTGqty,") \
		_T("       SUM(0)                 AS sieuamsk,") \
		_T("       SUM(0)                 AS sieuamtuyen,") \
		_T("       SUM(sieuama11)         AS sieuama11,") \
		_T("       SUM(sieuam_khoakhac)   AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" hms_object") \
		_T(" LEFT JOIN") \
		_T(" ( SELECT hpcl_docno,") \
		_T(" hd_object,") \
		_T(" 2 AS intout,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid    = 'B3300'") \
		_T(" AND hpc_deptid NOT IN ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A' ,'A4-C','A2-C')") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS dientimqty, %s") \
		_T("		 CASE") \
		_T("           WHEN hpc_groupid  = 'B3300'") \
		_T("           AND hpcl_proomid IN(35)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS dientimC12qty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  = 'B3300'") \
		_T("           AND hpcl_proomid IN(23)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS dientimTYCqty,") \
		_T("		 CASE") \
		_T("           WHEN hpc_groupid      ='B3400'") \
		_T("           AND hpcl_proomid NOT IN(24)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS diennaoqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  ='B3400'") \
		_T("           AND hpcl_proomid IN(24)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS diennaoTYCqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid      ='B3600'") \
		_T("           AND hpcl_proomid NOT IN(34)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS luuhuyetnaoqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  ='B3600'") \
		_T("           AND hpcl_proomid IN(34)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS luuhuyetnaoTYCqty,") \
		_T(" 0   AS diencoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3500'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS thongkhiphoiqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuamqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200' AND hpcl_proomid in(17)") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuama11, 0 as sieuam_khoakhac, %s") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_pacsorder") \
		_T(" ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid  =hpc_orderid") \
		_T(" AND hpcl_docno   =hpc_docno)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON ( hrl_id    = hpcl_proomid") \

		_T(" AND hrl_deptid IN ('C8-C', 'TYC') AND HRL_SECTION='HA')") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER IN (select su_userid from sys_user where su_deptid='C8-C' UNION ALL select ss_code from sys_sel where ss_id='c8cliketyc_user')") \


		_T(" AND hpc_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB')") \
		_T(" AND hpc_groupid='B3200' %s") \
		_T(" ) tbl2") \
		_T(" ON(ho_id=hd_object)") \
		_T(" WHERE 1 = 1") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc,") \
		_T(" intout") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" NVL(intout, 2) AS intout,") \
		_T("	   SUM(dientimqty)        AS dientimqty,") \
		_T("       SUM(dientimCCTGqty)    AS dientimCCTGqty,") \
		_T("       SUM(0)                 AS dientimsk,") \
		_T("       SUM(0)                 AS dientimtuyen,") \
		_T("       SUM(dientimC12qty)     AS dientimC12qty,") \
		_T("       SUM(dientimTYCqty)     AS dientimTYCqty,") \
		_T("       SUM(diennaoqty)        AS diennaoqty,") \
		_T("       SUM(0)                 AS diennaosk,") \
		_T("       SUM(0)                 AS diennaotuyen,") \
		_T("       SUM(diennaoTYCqty)     AS diennaoTYCqty,") \
		_T("       SUM(luuhuyetnaoqty)    AS luuhuyetnaoqty,") \
		_T("       SUM(0)                 AS luuhuyetnaosk,") \
		_T("       SUM(0)                 AS luuhuyetnaotuyen,") \
		_T("       SUM(luuhuyetnaoTYCqty) AS luuhuyetnaoTYCqty,") \
		_T("       SUM(diencoqty)         AS diencoqty,") \
		_T("       SUM(thongkhiphoiqty)   AS thongkhiphoiqty,") \
		_T("       SUM(0)                 AS thongkhiphoisk,") \
		_T("       SUM(0)                 AS thongkhiphoituyen,") \
		_T("       SUM(sieuamqty)	      AS sieuamqty ,") \
		_T("       SUM(0)				  AS sieuamCCTGqty,") \
		_T("       SUM(0)                 AS sieuamsk,") \
		_T("       SUM(0)                 AS sieuamtuyen,") \
		_T("       SUM(0)				  AS sieuama11,") \
		_T("       SUM(sieuam_khoakhac)   AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" hms_object") \
		_T(" LEFT JOIN") \
		_T(" ( SELECT hpcl_docno,") \
		_T(" hd_object,") \
		_T(" 2 AS intout,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid    = 'B3300'") \
		_T(" AND hpc_deptid NOT IN ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A' ,'A4-C','A2-C')") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS dientimqty, %s") \
		_T("		 CASE") \
		_T("           WHEN hpc_groupid  = 'B3300'") \
		_T("           AND hpcl_proomid IN(35)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS dientimC12qty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  = 'B3300'") \
		_T("           AND hpcl_proomid IN(23)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS dientimTYCqty,") \
		_T("		 CASE") \
		_T("           WHEN hpc_groupid      ='B3400'") \
		_T("           AND hpcl_proomid NOT IN(24)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS diennaoqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  ='B3400'") \
		_T("           AND hpcl_proomid IN(24)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS diennaoTYCqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid      ='B3600'") \
		_T("           AND hpcl_proomid NOT IN(34)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS luuhuyetnaoqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  ='B3600'") \
		_T("           AND hpcl_proomid IN(34)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS luuhuyetnaoTYCqty,") \
		_T(" 0   AS diencoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3500'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS thongkhiphoiqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuamqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200' AND hpcl_proomid in(17)") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuama11, ") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuam_khoakhac, %s") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_pacsorder") \
		_T(" ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid  =hpc_orderid") \
		_T(" AND hpcl_docno   =hpc_docno)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON ( hrl_id    = hpcl_proomid") \

		_T(" AND hrl_deptid IN ('C8-C', 'TYC') AND HRL_SECTION='HA')") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER NOT IN (select su_userid from sys_user where su_deptid='C8-C' UNION ALL select ss_code from sys_sel where ss_id='c8cliketyc_user')") \

		_T(" AND hpc_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB')") \
		_T(" AND hpc_groupid='B3200' %s") \
		_T(" ) tbl2") \
		_T(" ON(ho_id=hd_object)") \
		_T(" WHERE 1 = 1") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc,") \
		_T(" intout") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" 2 AS intout,") \
		_T(" 0 AS dientimqty,") \
		_T(" 0 AS dientimCCTGqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3300' THEN hqp_outcount ELSE 0 END) AS dientimsk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3300' THEN hqp_outcount ELSE 0 END) AS dientimtuyen,") \
		_T(" 0 AS dientimC12qty,") \
		_T(" 0 AS dientimTYCqty,") \
		_T(" 0 AS diennaoqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3400' THEN hqp_outcount ELSE 0 END) AS diennaosk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3400' THEN hqp_outcount ELSE 0 END) AS diennaotuyen,") \
		_T(" 0 AS diennaoTYCqty,") \
		_T(" 0 AS luuhuyetnaoqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3600' THEN hqp_outcount ELSE 0 END) AS luuhuyetnaosk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3600' THEN hqp_outcount ELSE 0 END) AS luuhuyetnaotuyen,") \
		_T(" 0 AS luuhuyetnaoTYCqty,") \
		_T(" 0 AS diencoqty,") \
		_T(" 0 AS thongkhiphoiqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3500' THEN hqp_outcount ELSE 0 END) AS thongkhiphoisk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3500' THEN hqp_outcount ELSE 0 END) AS thongkhiphoituyen,") \
		_T(" SUM(CASE WHEN hqp_type IN ('3', '2', '1') AND hqp_group = 'B3200' THEN hqp_outcount ELSE 0 END) AS sieuamqty ,") \
		_T(" 0 AS sieuamCCTGqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3200' THEN hqp_outcount ELSE 0 END) AS sieuamsk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3200' THEN hqp_outcount ELSE 0 END) AS sieuamtuyen,") \
		_T(" SUM(CASE WHEN hqp_type = '1' AND hqp_group = 'B3200' THEN hqp_outcount ELSE 0 END) AS sieuama11,") \
		_T(" SUM(CASE WHEN hqp_type = 'L' AND hqp_group = 'B3200' THEN hqp_outcount ELSE 0 END) AS sieuam_khoakhac") \
		_T(" FROM hms_qtyperform") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id = hqp_id)") \
		_T(" WHERE hqp_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc") \
		_T(" ) tbl3") \
		_T(" GROUP BY") \
		_T(" objectid,") \
		_T(" objectname,") \
		_T(" intout") \
		_T(" ) tbl4") \
		_T(" ORDER BY") \
		_T(" intout,") \
		_T(" CAST(objectid AS INTEGER) "), szCase1,szCase2,szWhere, szCase1,szCase2,szWhere, m_szFromDate, m_szToDate, szCase1,szCase2,szWhere, szCase1,szCase2,szWhere, m_szFromDate, m_szToDate);
		//_msg(_T("%s"), szSQL);
		return  szSQL;
}
CString CPACSQtyPerformDialogC8C::GetQueryString1(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL,szWhere,szCase1,szCase2;
	UpdateData(true);
	if(m_nOrderdate==0)
	{

		szWhere.Format(_T(" and hpcl_status in ('S','T') and hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
					    _T("    AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate,m_szToDate);
		szCase1.Format(_T("case when  hpcl_itemid='B330000336' and hpc_deptid not in ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A','A4-C','A2-C') then 1 else 0 end as dientimCCTGqty, "));
		szCase2.Format(_T("case when hpcl_itemid in ('B320002189','B320002194') then 1 else 0 end as sieuamCCTGqty"));

	}

    if(m_nPerformDate==0)
	{
		szWhere.Format(_T("and hpcl_status in ('T') and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					    _T("    AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate,m_szToDate);
		szCase1.Format(_T("case when hpc_groupid = 'B3300' and hpcl_proomid in(21,22) then 1 else 0 end as dientimCCTGqty, ") );
		szCase2.Format(_T("case when hpc_groupid = 'B3200' and hpcl_proomid in(21) then 1 else 0 end as sieuamCCTGqty") );
	}

	szSQL.Format(_T(" SELECT objectid,") \
		_T("   objectname,") \
		_T("   intout,") \
		_T("   0        AS dientimqty,") \
		_T("   0        AS dientimCCTGqty,") \
		_T("   0        AS dientimsk,") \
		_T("   0        AS dientimtuyen,") \
		_T("   0        AS dientimC12qty,") \
		_T("   0        AS dientimTYCqty,") \
		_T("   0        AS diennaoqty,") \
		_T("   0        AS diennaosk,") \
		_T("   0        AS diennaotuyen,") \
		_T("   0        AS diennaoTYCqty,") \
		_T("   0        AS luuhuyetnaoqty,") \
		_T("   0        AS luuhuyetnaosk,") \
		_T("   0        AS luuhuyetnaotuyen,") \
		_T("   0        AS luuhuyetnaoTYCqty,") \
		_T("   0        AS diencoqty,") \
		_T("   0        AS thongkhiphoiqty,") \
		_T("   0        AS thongkhiphoisk,") \
		_T("   0        AS thongkhiphoituyen,") \
		//_T("   NVL(sieuamqty, 0)         AS sieuamqty,") \//
		_T("   NVL(sieuamqty, 0) - NVL(sieuamCCTGqty, 0) - NVL(sieuamsk, 0) - NVL(sieuamtuyen, 0) - NVL(sieuama11, 0) - NVL(sieuam_khoakhac, 0) AS sieuamqty,") \
		_T("   NVL(sieuamCCTGqty, 0)     AS sieuamCCTGqty,") \
		_T("   NVL(sieuamsk, 0)          AS sieuamsk,") \
		_T("   NVL(sieuamtuyen, 0)       AS sieuamtuyen,") \
		_T("   NVL(sieuama11, 0)         AS sieuama11,") \
		_T("   NVL(sieuam_khoakhac, 0)   AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" objectid,") \
		_T(" objectname,") \
		_T(" intout,") \
		_T("     SUM(dientimqty)        AS dientimqty,") \
		_T("     SUM(dientimCCTGqty)    AS dientimCCTGqty,") \
		_T("     SUM(dientimsk)         AS dientimsk,") \
		_T("     SUM(dientimtuyen)      AS dientimtuyen,") \
		_T("     SUM(dientimC12qty)     AS dientimC12qty,") \
		_T("     SUM(dientimTYCqty)     AS dientimTYCqty,") \
		_T("     SUM(diennaoqty)        AS diennaoqty,") \
		_T("     SUM(diennaosk)         AS diennaosk,") \
		_T("     SUM(diennaotuyen)      AS diennaotuyen,") \
		_T("     SUM(diennaoTYCqty)     AS diennaoTYCqty,") \
		_T("     SUM(luuhuyetnaoqty)    AS luuhuyetnaoqty,") \
		_T("     SUM(luuhuyetnaosk)     AS luuhuyetnaosk,") \
		_T("     SUM(luuhuyetnaotuyen)  AS luuhuyetnaotuyen,") \
		_T("     SUM(luuhuyetnaoTYCqty) AS luuhuyetnaoTYCqty,") \
		_T("     SUM(diencoqty)         AS diencoqty,") \
		_T("     SUM(thongkhiphoiqty)   AS thongkhiphoiqty,") \
		_T("     SUM(thongkhiphoisk)    AS thongkhiphoisk,") \
		_T("     SUM(thongkhiphoituyen) AS thongkhiphoituyen,") \
		_T("     SUM(sieuamqty)         AS sieuamqty ,") \
		_T("     SUM(sieuamCCTGqty)     AS sieuamCCTGqty,") \
		_T("     SUM(sieuamsk)          AS sieuamsk,") \
		_T("     SUM(sieuamtuyen)       AS sieuamtuyen,") \
		_T("     SUM(sieuama11)         AS sieuama11,") \
		_T("     SUM(sieuam_khoakhac)   AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" (") \
		//Số lượng thực hiện ở C8-C
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" NVL(intout, 1) AS intout,") \
		_T("       SUM(dientimqty)      AS dientimqty,") \
		_T("       SUM(dientimCCTGqty)  AS dientimCCTGqty,") \
		_T("       SUM(0)               AS dientimsk,") \
		_T("       SUM(0)               AS dientimtuyen,") \
		_T("       SUM(0)               AS dientimC12qty,") \
		_T("       SUM(0)               AS dientimTYCqty,") \
		_T("       SUM(diennaoqty)      AS diennaoqty,") \
		_T("       SUM(0)               AS diennaosk,") \
		_T("       SUM(0)               AS diennaotuyen,") \
		_T("       SUM(0)               AS diennaoTYCqty,") \
		_T("       SUM(luuhuyetnaoqty)  AS luuhuyetnaoqty,") \
		_T("       SUM(0)               AS luuhuyetnaosk,") \
		_T("       SUM(0)               AS luuhuyetnaotuyen,") \
		_T("       SUM(0)               AS luuhuyetnaoTYCqty,") \
		_T("       SUM(diencoqty)       AS diencoqty,") \
		_T("       SUM(thongkhiphoiqty) AS thongkhiphoiqty,") \
		_T("       SUM(0)               AS thongkhiphoisk,") \
		_T("       SUM(0)               AS thongkhiphoituyen,") \
		_T("       SUM(sieuamqty)       AS sieuamqty ,") \
		_T("       SUM(sieuamCCTGqty)   AS sieuamCCTGqty,") \
		_T("       SUM(0)               AS sieuamsk,") \
		_T("       SUM(0)               AS sieuamtuyen,") \
		_T("       SUM(sieuama11)       AS sieuama11,") \
		_T("       SUM(sieuam_khoakhac) AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" hms_object") \
		_T(" LEFT JOIN") \
		_T(" ( SELECT DISTINCT hpcl_docno,") \
		_T(" hd_object,") \
		_T(" 1 AS intout,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid    = 'B3300'") \
		_T(" AND hpc_deptid NOT IN ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A' ,'A4-C','A2-C')") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS dientimqty, %s") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3400'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS diennaoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3600'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS luuhuyetnaoqty,") \
		_T(" 0   AS diencoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3500'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS thongkhiphoiqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuamqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200' AND hpcl_proomid in(17)") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuama11, 0 as sieuam_khoakhac, %s") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_pacsorder") \
		_T(" ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid  =hpc_orderid") \
		_T(" AND hpcl_docno   =hpc_docno)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON ( hrl_id         = hpcl_proomid") \

		/*_T(" AND hrl_deptid      = 'C8-C' )") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER IN (select su_userid from sys_user where su_deptid='C8-C')") \*/

		_T(" AND hrl_deptid IN ('C8-C', 'TYC') AND HRL_SECTION='HA')") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER IN (select su_userid from sys_user where su_deptid='C8-C' UNION ALL select ss_code from sys_sel where ss_id='c8cliketyc_user')") \


		_T(" AND hpc_deptid NOT IN('C1.1','C1.2','C1.3','TYC', 'AB')") \
		_T(" AND hpc_groupid IN('B3200')") \
		_T(" AND SUBSTR(hpc_groupid,1,2)='B3' %s") \
		_T(" ) tbl") \
		_T(" ON(ho_id=hd_object)") \
		_T(" WHERE 1 = 1") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc,") \
		_T(" intout") \
		//END Số lượng thực hiện ở khoa khác		
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" NVL(intout, 1) AS intout,") \
		_T("       SUM(dientimqty)      AS dientimqty,") \
		_T("       SUM(dientimCCTGqty)  AS dientimCCTGqty,") \
		_T("       SUM(0)               AS dientimsk,") \
		_T("       SUM(0)               AS dientimtuyen,") \
		_T("       SUM(0)               AS dientimC12qty,") \
		_T("       SUM(0)               AS dientimTYCqty,") \
		_T("       SUM(diennaoqty)      AS diennaoqty,") \
		_T("       SUM(0)               AS diennaosk,") \
		_T("       SUM(0)               AS diennaotuyen,") \
		_T("       SUM(0)               AS diennaoTYCqty,") \
		_T("       SUM(luuhuyetnaoqty)  AS luuhuyetnaoqty,") \
		_T("       SUM(0)               AS luuhuyetnaosk,") \
		_T("       SUM(0)               AS luuhuyetnaotuyen,") \
		_T("       SUM(0)               AS luuhuyetnaoTYCqty,") \
		_T("       SUM(diencoqty)       AS diencoqty,") \
		_T("       SUM(thongkhiphoiqty) AS thongkhiphoiqty,") \
		_T("       SUM(0)               AS thongkhiphoisk,") \
		_T("       SUM(0)               AS thongkhiphoituyen,") \
		_T("       SUM(sieuamqty)	    AS sieuamqty ,") \
		_T("       SUM(0)				AS sieuamCCTGqty,") \
		_T("       SUM(0)               AS sieuamsk,") \
		_T("       SUM(0)               AS sieuamtuyen,") \
		_T("       SUM(0)				AS sieuama11,") \
		_T("       SUM(sieuam_khoakhac) AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" hms_object") \
		_T(" LEFT JOIN") \
		_T(" ( SELECT DISTINCT hpcl_docno,") \
		_T(" hd_object,") \
		_T(" 1 AS intout,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid    = 'B3300'") \
		_T(" AND hpc_deptid NOT IN ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A' ,'A4-C','A2-C')") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS dientimqty, %s") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3400'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS diennaoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3600'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS luuhuyetnaoqty,") \
		_T(" 0   AS diencoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3500'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS thongkhiphoiqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuamqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200' AND hpcl_proomid in(17)") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuama11,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuam_khoakhac, %s") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_pacsorder") \
		_T(" ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid  =hpc_orderid") \
		_T(" AND hpcl_docno   =hpc_docno)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON ( hrl_id         = hpcl_proomid") \

		/*_T(" AND hrl_deptid      = 'C8-C' )") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER NOT IN (select su_userid from sys_user where su_deptid='C8-C')") \*/

		_T(" AND hrl_deptid IN ('C8-C', 'TYC') AND HRL_SECTION='HA')") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER NOT IN (select su_userid from sys_user where su_deptid='C8-C' UNION ALL select ss_code from sys_sel where ss_id='c8cliketyc_user')") \

		_T(" AND hpc_deptid NOT IN('C1.1','C1.2','C1.3','TYC', 'AB')") \
		_T(" AND hpc_groupid IN('B3200')") \
		_T(" AND SUBSTR(hpc_groupid,1,2)='B3' %s") \
		_T(" ) tbl") \
		_T(" ON(ho_id=hd_object)") \
		_T(" WHERE 1 = 1") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc,") \
		_T(" intout") \
		//END Số lượng thực hiện ở khoa khác
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" 1 AS intout,") \
		_T(" 0 AS dientimqty,") \
		_T(" 0 AS dientimCCTGqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3300' THEN hqp_inpatient ELSE 0 END) AS dientimsk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3300' THEN hqp_inpatient ELSE 0 END) AS dientimtuyen,") \
		_T(" 0 AS dientimC12qty,") \
		_T(" 0 AS dientimTYCqty,") \
		_T(" 0 AS diennaoqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3400' THEN hqp_inpatient ELSE 0 END) AS diennaosk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3400' THEN hqp_inpatient ELSE 0 END) AS diennaotuyen,") \
		_T(" 0 AS diennaoTYCqty,") \
		_T(" 0 AS luuhuyetnaoqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3600' THEN hqp_inpatient ELSE 0 END) AS luuhuyetnaosk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3600' THEN hqp_inpatient ELSE 0 END) AS luuhuyetnaotuyen,") \
		_T(" 0 AS luuhuyetnaoTYCqty,") \
		_T(" 0 AS diencoqty,") \
		_T(" 0 AS thongkhiphoiqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3500' THEN hqp_inpatient ELSE 0 END) AS thongkhiphoisk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3500' THEN hqp_inpatient ELSE 0 END) AS thongkhiphoituyen,") \
		_T(" SUM(CASE WHEN hqp_type IN ('3','2','1') AND hqp_group = 'B3200' THEN hqp_inpatient ELSE 0 END) AS sieuamqty ,") \
		_T(" 0 AS sieuamCCTGqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3200' THEN hqp_inpatient ELSE 0 END) AS sieuamsk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3200' THEN hqp_inpatient ELSE 0 END) AS sieuamtuyen,") \
		_T(" SUM(CASE WHEN hqp_type = '1' AND hqp_group = 'B3200' THEN hqp_inpatient ELSE 0 END) AS sieuama11,") \
		_T(" SUM(CASE WHEN hqp_type = 'L' AND hqp_group = 'B3200' THEN hqp_inpatient ELSE 0 END) AS sieuam_khoakhac") \
		_T(" FROM hms_qtyperform") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id = hqp_id)") \
		_T(" WHERE hqp_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc") \
		_T(" ) tbl1") \
		_T(" GROUP BY") \
		_T(" objectid,") \
		_T(" objectname,") \
		_T(" intout") \

		_T(" UNION ALL") \

		_T(" SELECT") \
		_T(" objectid,") \
		_T(" objectname,") \
		_T(" intout,") \
		_T("	 SUM(dientimqty)        AS dientimqty,") \
		_T("     SUM(dientimCCTGqty)    AS dientimCCTGqty,") \
		_T("     SUM(dientimsk)         AS dientimsk,") \
		_T("     SUM(dientimtuyen)      AS dientimtuyen,") \
		_T("     SUM(dientimC12qty)     AS dientimC12qty,") \
		_T("     SUM(dientimTYCqty)     AS dientimTYCqty,") \
		_T("     SUM(diennaoqty)        AS diennaoqty,") \
		_T("     SUM(diennaosk)         AS diennaosk,") \
		_T("     SUM(diennaotuyen)      AS diennaotuyen,") \
		_T("     SUM(diennaoTYCqty)     AS diennaoTYCqty,") \
		_T("     SUM(luuhuyetnaoqty)    AS luuhuyetnaoqty,") \
		_T("     SUM(luuhuyetnaosk)     AS luuhuyetnaosk,") \
		_T("     SUM(luuhuyetnaotuyen)  AS luuhuyetnaotuyen,") \
		_T("     SUM(luuhuyetnaoTYCqty) AS luuhuyetnaoTYCqty,") \
		_T("     SUM(diencoqty)         AS diencoqty,") \
		_T("     SUM(thongkhiphoiqty)   AS thongkhiphoiqty,") \
		_T("     SUM(thongkhiphoisk)    AS thongkhiphoisk,") \
		_T("     SUM(thongkhiphoituyen) AS thongkhiphoituyen,") \
		_T("     SUM(sieuamqty)         AS sieuamqty ,") \
		_T("     SUM(sieuamCCTGqty)     AS sieuamCCTGqty,") \
		_T("     SUM(sieuamsk)          AS sieuamsk,") \
		_T("     SUM(sieuamtuyen)       AS sieuamtuyen,") \
		_T("     SUM(sieuama11)         AS sieuama11,") \
		_T("     SUM(sieuam_khoakhac) AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" (") \
		//Siêu âm ở C8-C ngoại trú
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" NVL(intout, 2) AS intout,") \
		_T("	   SUM(dientimqty)        AS dientimqty,") \
		_T("       SUM(dientimCCTGqty)    AS dientimCCTGqty,") \
		_T("       SUM(0)                 AS dientimsk,") \
		_T("       SUM(0)                 AS dientimtuyen,") \
		_T("       SUM(dientimC12qty)     AS dientimC12qty,") \
		_T("       SUM(dientimTYCqty)     AS dientimTYCqty,") \
		_T("       SUM(diennaoqty)        AS diennaoqty,") \
		_T("       SUM(0)                 AS diennaosk,") \
		_T("       SUM(0)                 AS diennaotuyen,") \
		_T("       SUM(diennaoTYCqty)     AS diennaoTYCqty,") \
		_T("       SUM(luuhuyetnaoqty)    AS luuhuyetnaoqty,") \
		_T("       SUM(0)                 AS luuhuyetnaosk,") \
		_T("       SUM(0)                 AS luuhuyetnaotuyen,") \
		_T("       SUM(luuhuyetnaoTYCqty) AS luuhuyetnaoTYCqty,") \
		_T("       SUM(diencoqty)         AS diencoqty,") \
		_T("       SUM(thongkhiphoiqty)   AS thongkhiphoiqty,") \
		_T("       SUM(0)                 AS thongkhiphoisk,") \
		_T("       SUM(0)                 AS thongkhiphoituyen,") \
		_T("       SUM(sieuamqty)         AS sieuamqty ,") \
		_T("       SUM(sieuamCCTGqty)     AS sieuamCCTGqty,") \
		_T("       SUM(0)                 AS sieuamsk,") \
		_T("       SUM(0)                 AS sieuamtuyen,") \
		_T("       SUM(sieuama11)         AS sieuama11,") \
		_T("       SUM(sieuam_khoakhac)   AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" hms_object") \
		_T(" LEFT JOIN") \
		_T(" ( SELECT DISTINCT hpcl_docno,") \
		_T(" hd_object,") \
		_T(" 2 AS intout,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid    = 'B3300'") \
		_T(" AND hpc_deptid NOT IN ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A' ,'A4-C','A2-C')") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS dientimqty, %s") \
		_T("		 CASE") \
		_T("           WHEN hpc_groupid  = 'B3300'") \
		_T("           AND hpcl_proomid IN(35)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS dientimC12qty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  = 'B3300'") \
		_T("           AND hpcl_proomid IN(23)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS dientimTYCqty,") \
		_T("		 CASE") \
		_T("           WHEN hpc_groupid      ='B3400'") \
		_T("           AND hpcl_proomid NOT IN(24)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS diennaoqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  ='B3400'") \
		_T("           AND hpcl_proomid IN(24)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS diennaoTYCqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid      ='B3600'") \
		_T("           AND hpcl_proomid NOT IN(34)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS luuhuyetnaoqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  ='B3600'") \
		_T("           AND hpcl_proomid IN(34)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS luuhuyetnaoTYCqty,") \
		_T(" 0   AS diencoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3500'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS thongkhiphoiqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuamqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200' AND hpcl_proomid in(17)") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuama11, 0 as sieuam_khoakhac, %s") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_pacsorder") \
		_T(" ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid  =hpc_orderid") \
		_T(" AND hpcl_docno   =hpc_docno)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON ( hrl_id         = hpcl_proomid") \

		/*_T(" AND hrl_deptid      = 'C8-C' )") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER IN (select su_userid from sys_user where su_deptid='C8-C')") \*/


		_T(" AND hrl_deptid IN ('C8-C', 'TYC') AND HRL_SECTION='HA')") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER IN (select su_userid from sys_user where su_deptid='C8-C' UNION ALL select ss_code from sys_sel where ss_id='c8cliketyc_user')") \


		_T(" AND hpc_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB')") \
		_T(" AND hpc_groupid IN('B3200')") \
		_T(" AND SUBSTR(hpc_groupid,1,2)='B3' %s") \
		_T(" ) tbl2") \
		_T(" ON(ho_id=hd_object)") \
		_T(" WHERE 1 = 1") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc,") \
		_T(" intout") \
		//End siêu âm ở C8-C ngoại trú
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" NVL(intout, 2) AS intout,") \
		_T("	   SUM(dientimqty)        AS dientimqty,") \
		_T("       SUM(dientimCCTGqty)    AS dientimCCTGqty,") \
		_T("       SUM(0)                 AS dientimsk,") \
		_T("       SUM(0)                 AS dientimtuyen,") \
		_T("       SUM(dientimC12qty)     AS dientimC12qty,") \
		_T("       SUM(dientimTYCqty)     AS dientimTYCqty,") \
		_T("       SUM(diennaoqty)        AS diennaoqty,") \
		_T("       SUM(0)                 AS diennaosk,") \
		_T("       SUM(0)                 AS diennaotuyen,") \
		_T("       SUM(diennaoTYCqty)     AS diennaoTYCqty,") \
		_T("       SUM(luuhuyetnaoqty)    AS luuhuyetnaoqty,") \
		_T("       SUM(0)                 AS luuhuyetnaosk,") \
		_T("       SUM(0)                 AS luuhuyetnaotuyen,") \
		_T("       SUM(luuhuyetnaoTYCqty) AS luuhuyetnaoTYCqty,") \
		_T("       SUM(diencoqty)         AS diencoqty,") \
		_T("       SUM(thongkhiphoiqty)   AS thongkhiphoiqty,") \
		_T("       SUM(0)                 AS thongkhiphoisk,") \
		_T("       SUM(0)                 AS thongkhiphoituyen,") \
		_T("       SUM(sieuamqty)		  AS sieuamqty ,") \
		_T("       SUM(0)				  AS sieuamCCTGqty,") \
		_T("       SUM(0)                 AS sieuamsk,") \
		_T("       SUM(0)                 AS sieuamtuyen,") \
		_T("       SUM(0)				  AS sieuama11,") \
		_T("       SUM(sieuam_khoakhac)   AS sieuam_khoakhac") \
		_T(" FROM") \
		_T(" hms_object") \
		_T(" LEFT JOIN") \
		_T(" ( SELECT DISTINCT hpcl_docno,") \
		_T(" hd_object,") \
		_T(" 2 AS intout,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid    = 'B3300'") \
		_T(" AND hpc_deptid NOT IN ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A' ,'A4-C','A2-C')") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS dientimqty, %s") \
		_T("		 CASE") \
		_T("           WHEN hpc_groupid  = 'B3300'") \
		_T("           AND hpcl_proomid IN(35)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS dientimC12qty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  = 'B3300'") \
		_T("           AND hpcl_proomid IN(23)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS dientimTYCqty,") \
		_T("		 CASE") \
		_T("           WHEN hpc_groupid      ='B3400'") \
		_T("           AND hpcl_proomid NOT IN(24)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS diennaoqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  ='B3400'") \
		_T("           AND hpcl_proomid IN(24)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS diennaoTYCqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid      ='B3600'") \
		_T("           AND hpcl_proomid NOT IN(34)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS luuhuyetnaoqty,") \
		_T("         CASE") \
		_T("           WHEN hpc_groupid  ='B3600'") \
		_T("           AND hpcl_proomid IN(34)") \
		_T("           THEN 1") \
		_T("           ELSE 0") \
		_T("         END AS luuhuyetnaoTYCqty,") \
		_T(" 0   AS diencoqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3500'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS thongkhiphoiqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuamqty,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200' AND hpcl_proomid in(17)") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuama11,") \
		_T(" CASE") \
		_T(" WHEN hpc_groupid='B3200'") \
		_T(" THEN 1") \
		_T(" ELSE 0") \
		_T(" END AS sieuam_khoakhac, %s") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_pacsorder") \
		_T(" ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpcl_orderid  =hpc_orderid") \
		_T(" AND hpcl_docno   =hpc_docno)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON ( hrl_id         = hpcl_proomid") \

		/*_T(" AND hrl_deptid      = 'C8-C' )") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER NOT IN (select su_userid from sys_user where su_deptid='C8-C')") \*/

		_T(" AND hrl_deptid IN ('C8-C', 'TYC') AND HRL_SECTION='HA')") \
		_T(" WHERE hpcl_status = 'T'") \
		_T(" AND HPCL_PRACTITIONER NOT IN (select su_userid from sys_user where su_deptid='C8-C' UNION ALL select ss_code from sys_sel where ss_id='c8cliketyc_user')") \

		_T(" AND hpc_deptid IN('C1.1','C1.2','C1.3','TYC', 'AB')") \
		_T(" AND hpc_groupid IN('B3200')") \
		_T(" AND SUBSTR(hpc_groupid,1,2)='B3' %s") \
		_T(" ) tbl2") \
		_T(" ON(ho_id=hd_object)") \
		_T(" WHERE 1 = 1") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc,") \
		_T(" intout") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" ho_id AS objectid,") \
		_T(" ho_desc AS objectname,") \
		_T(" 2 AS intout,") \
		_T(" 0 AS dientimqty,") \
		_T(" 0 AS dientimCCTGqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3300' THEN hqp_outpatient ELSE 0 END) AS dientimsk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3300' THEN hqp_outpatient ELSE 0 END) AS dientimtuyen,") \
		_T(" 0 AS dientimC12qty,") \
		_T(" 0 AS dientimTYCqty,") \
		_T(" 0 AS diennaoqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3400' THEN hqp_outpatient ELSE 0 END) AS diennaosk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3400' THEN hqp_outpatient ELSE 0 END) AS diennaotuyen,") \
		_T(" 0 AS diennaoTYCqty,") \
		_T(" 0 AS luuhuyetnaoqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3600' THEN hqp_outpatient ELSE 0 END) AS luuhuyetnaosk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3600' THEN hqp_outpatient ELSE 0 END) AS luuhuyetnaotuyen,") \
		_T(" 0 AS luuhuyetnaoTYCqty,") \
		_T(" 0 AS diencoqty,") \
		_T(" 0 AS thongkhiphoiqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3500' THEN hqp_outpatient ELSE 0 END) AS thongkhiphoisk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3500' THEN hqp_outpatient ELSE 0 END) AS thongkhiphoituyen,") \
		_T(" SUM(CASE WHEN hqp_type IN ('1', '2', '3') AND hqp_group = 'B3200' THEN hqp_outpatient ELSE 0 END) AS sieuamqty ,") \
		_T(" 0 AS sieuamCCTGqty,") \
		_T(" SUM(CASE WHEN hqp_type = '3' AND hqp_group = 'B3200' THEN hqp_outpatient ELSE 0 END) AS sieuamsk,") \
		_T(" SUM(CASE WHEN hqp_type = '2' AND hqp_group = 'B3200' THEN hqp_outpatient ELSE 0 END) AS sieuamtuyen,") \
		_T(" SUM(CASE WHEN hqp_type = '1' AND hqp_group = 'B3200' THEN hqp_outpatient ELSE 0 END) AS sieuama11,") \
		_T(" SUM(CASE WHEN hqp_type = 'L' AND hqp_group = 'B3200' THEN hqp_outpatient ELSE 0 END) AS sieuam_khoakhac") \
		_T(" FROM hms_qtyperform") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON(ho_id = hqp_id)") \
		_T(" WHERE hqp_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" GROUP BY ho_id,") \
		_T(" ho_desc") \
		_T(" ) tbl3") \
		_T(" GROUP BY") \
		_T(" objectid,") \
		_T(" objectname,") \
		_T(" intout") \
		_T(" ) tbl4") \
		_T(" ORDER BY") \
		_T(" intout,") \
		_T(" CAST(objectid AS INTEGER) "), szCase1,szCase2,szWhere,szCase1,szCase2,szWhere,m_szFromDate, m_szToDate, szCase1,szCase2,szWhere, szCase1,szCase2,szWhere, m_szFromDate, m_szToDate);
		//_msg(_T("%s"), szSQL);
		return  szSQL;	
}

void CPACSQtyPerformDialogC8C::OnExportByZone(CString szExportType)
{
	UpdateData();
	/*
	steps:
	-load template
	-query
	-export
	+print type
	+print line
	+print sum type
	+print sum total
	-save
	*/
	CHMSMainFrame * pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szFilePath, szSQL, szType, szPrevType, szFileName, szValue, tmpStr,
			szWhere, szCase1, szCase2;
	CArray<long, long> arTypeSum, arTotalSum;
	int nCol = 0, nRow = 0, nFormat, nIdx = 0;
	szFileName.Format(_T("MAU_TONGHOPKETQUANOINGOAITHEOKHU"));
	szFilePath.Format(_T("Exports\\Template\\%s.xls"), szFileName);
	if (!xls.Load(szFilePath))
	{
		return;
	}
	/*sql*/
	if(m_nOrderdate==0)
	{

		szWhere.Format(_T(" and hpcl_status in ('S','T') and hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
			_T("    AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate,m_szToDate);
		szCase1.Format(_T("case when  hpcl_itemid='B330000336' and hpc_deptid not in ('C1.2','C1.3','A2-A','A2-B','A3','A4-B','A5','A6','A7','A9','A12','A14','A15','A16','A1','A21','A11','A4-A','A4-C','A2-C') then 1 else 0 end as dientimCCTGqty, "));
		szCase2.Format(_T("case when hpcl_itemid in ('B320002189','B320002194') then 1 else 0 end as sieuamCCTGqty"));

	}

	if(m_nPerformDate==0)
	{
		szWhere.Format(_T("and hpcl_status in ('T') and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T("    AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate,m_szToDate);
		szCase1.Format(_T("case when hpc_groupid = 'B3300' and hpcl_proomid in(21,22) then 1 else 0 end as dientimCCTGqty, ") );
		szCase2.Format(_T("case when hpc_groupid = 'B3200' and hpcl_proomid in(21) then 1 else 0 end as sieuamCCTGqty") );
	}
	if (szExportType == _T("P"))
	{
	szSQL.Format(_T("    SELECT loai_dt,") \
		_T("           ho_desc AS doi_tuong,") \
			_T("           SUM (CASE WHEN khu = 'C1.1A' THEN so_luong") \
		_T("                ELSE 0") \
		_T("                END) AS khu_C11A,") \
			_T("           SUM (CASE WHEN khu = 'C1.2' THEN so_luong") \
		_T("                ELSE 0") \
		_T("                END) AS khu_C12,") \
			_T("           SUM (CASE WHEN khu = 'C1.3' THEN so_luong") \
		_T("                ELSE 0") \
		_T("                END) AS khu_C13,") \
			_T("           SUM (CASE WHEN khu = 'BDCC' THEN so_luong") \
		_T("                ELSE 0") \
		_T("                END) AS khu_BDCC,") \
			_T("           SUM (CASE WHEN khu = 'NTT' THEN so_luong") \
		_T("                ELSE 0") \
		_T("                END) AS khu_NTT,") \
		_T("           SUM (CASE WHEN khu NOT IN ( 'C1.1A', 'C1.2', 'C1.3', 'BDCC',") \
			_T("                                  'NTT', 'KSK', 'A11', 'Tuyen', 'X' ) THEN so_luong") \
		_T("                ELSE 0") \
		_T("                END) AS khu_TYC,") \
			_T("           SUM (CASE WHEN khu = 'KSK' THEN so_luong") \
		_T("                ELSE 0") \
		_T("                END) AS khu_KSK,") \
			_T("           SUM (CASE WHEN khu = 'A11' THEN so_luong") \
		_T("                ELSE 0") \
		_T("                END) AS khu_A11,") \
			_T("           SUM (CASE WHEN khu = 'Tuyen' THEN so_luong") \
		_T("                ELSE 0") \
		_T("                END) AS khu_Tuyen,") \
			_T("           SUM (CASE WHEN khu = 'X' THEN so_luong") \
			_T("                ELSE 0") \
			_T("                END) AS khu_X,") \
			_T("           SUM (so_luong) AS tong_so_luong") \
			_T("      FROM (   SELECT distinct hd_docno, hd_object AS object,") \
			_T("                         CASE WHEN sd_id IN ( 'C1.1', 'C1.2', 'C1.3', 'TYC', 'AB' ) THEN 2") \
			_T("                         ELSE 1") \
			_T("                         END AS loai_dt,") \
			_T("                         Nvl (hrl_zone, 'X') AS khu,") \
			_T("                         1 AS so_luong") \
			_T("                    FROM hms_pacsorder") \
			_T("               LEFT JOIN hms_pacsorderline ON ( hpcl_orderid = hpc_orderid AND hpcl_docno = hpc_docno") \
			_T("                                              )") \
			_T("               LEFT JOIN hms_roomlist ON ( hrl_id = hpcl_proomid AND hrl_deptid IN ( 'C8-C', 'TYC' )") \
			_T("                                           AND") \
			_T("                                           HRL_SECTION = 'HA' )") \
			_T("               LEFT JOIN hms_doc ON ( hd_docno = hpc_docno )") \
			_T("               LEFT JOIN sys_dept ON ( hpc_deptid = sd_id )") \
			_T("                   WHERE 1=1 AND HPCL_PRACTITIONER IN (SELECT su_userid") \
			_T("                                                     FROM sys_user") \
			_T("                                                    WHERE su_deptid = 'C8-C'") \
			_T("                                                   UNION ALL") \
			_T("                                                   SELECT ss_code") \
			_T("                                                     FROM sys_sel") \
			_T("                                                    WHERE ss_id = 'c8cliketyc_user') AND") \
			_T("                         hpc_groupid = 'B3200'") \
			_T("                         %s") \
			_T("               UNION ALL") \
			_T("                  SELECT distinct hd_docno, hd_object AS object,") \
			_T("                         CASE WHEN sd_id IN ( 'C1.1', 'C1.2', 'C1.3', 'TYC', 'AB' ) THEN 2") \
			_T("                         ELSE 1") \
			_T("                         END AS loai_dt,") \
			_T("                         N'X' AS khu,") \
			_T("                         1 AS so_luong") \
			_T("                    FROM hms_pacsorder") \
			_T("               LEFT JOIN hms_pacsorderline ON ( hpcl_orderid = hpc_orderid AND hpcl_docno = hpc_docno") \
			_T("                                              )") \
			_T("               LEFT JOIN hms_roomlist ON ( hrl_id = hpcl_proomid AND hrl_deptid IN ( 'C8-C', 'TYC' )") \
			_T("                                           AND") \
			_T("                                           HRL_SECTION = 'HA' )") \
			_T("               LEFT JOIN hms_doc ON ( hd_docno = hpc_docno )") \
			_T("               LEFT JOIN sys_dept ON ( hpc_deptid = sd_id )") \
			_T("                   WHERE 1=1 AND HPCL_PRACTITIONER NOT IN (SELECT su_userid") \
			_T("                                                         FROM sys_user") \
			_T("                                                        WHERE su_deptid = 'C8-C'") \
			_T("                                                       UNION ALL") \
			_T("                                                       SELECT ss_code") \
			_T("                                                         FROM sys_sel") \
			_T("                                                        WHERE ss_id = 'c8cliketyc_user') AND") \
			_T("                         hpc_groupid = 'B3200'") \
			_T("                         %s") \
			_T("               UNION ALL") \
			_T("               SELECT 0, hqp_id AS object,") \
			_T("                      1 AS loai_dt,") \
			_T("                      CASE hqp_type WHEN N'1' THEN N'A11'") \
			_T("                        WHEN N'2' THEN N'Tuyen'") \
			_T("                        WHEN N'3' THEN N'KSK'") \
			_T("                        WHEN N'L' THEN N'X'") \
			_T("                      END AS khu,") \
			_T("                      hqp_inpatient AS so_luong") \
			_T("                 FROM hms_qtyperform") \
			_T("                WHERE hqp_date BETWEEN To_timestamp ('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T("                                       AND") \
			_T("                                              To_timestamp ('%s',") \
			_T("                                              'YYYY-MM-DD HH24:MI:SS') AND") \
			_T("                             hqp_inpatient > 0 AND hqp_group = 'B3200'") \
			_T("            UNION ALL") \
			_T("            SELECT 0, hqp_id AS object,") \
			_T("                   2 AS loai_dt,") \
			_T("                   CASE hqp_type WHEN N'1' THEN N'A11'") \
			_T("                     WHEN N'2' THEN N'Tuyen'") \
			_T("                     WHEN N'3' THEN N'KSK'") \
			_T("                     WHEN N'L' THEN N'X'") \
			_T("                   END AS khu,") \
			_T("                   hqp_outpatient AS so_luong") \
			_T("              FROM hms_qtyperform") \
			_T("             WHERE hqp_date BETWEEN To_timestamp ('%s', 'YYYY-MM-DD HH24:MI:SS') AND") \
			_T("                                           To_timestamp ('%s',") \
			_T("                                           'YYYY-MM-DD HH24:MI:SS') AND") \
			_T("                          hqp_outpatient > 0 AND hqp_group = 'B3200') tbl_source") \
			_T(" LEFT JOIN hms_object ON ( object = ho_id )") \
			_T("     GROUP BY ho_desc,loai_dt,ho_id") \
			_T("     ORDER BY loai_dt,Cast (ho_id AS INTEGER)")
			,szWhere, szWhere
			, m_szFromDate, m_szToDate
			, m_szFromDate, m_szToDate);
	}
	else
	{
		szSQL.Format(_T("    SELECT loai_dt,") \
			_T("           ho_desc AS doi_tuong,") \
			_T("           SUM (CASE WHEN khu = 'C1.1A' THEN so_luong") \
			_T("                ELSE 0") \
			_T("                END) AS khu_C11A,") \
			_T("           SUM (CASE WHEN khu = 'C1.2' THEN so_luong") \
			_T("                ELSE 0") \
			_T("                END) AS khu_C12,") \
			_T("           SUM (CASE WHEN khu = 'C1.3' THEN so_luong") \
			_T("                ELSE 0") \
			_T("                END) AS khu_C13,") \
			_T("           SUM (CASE WHEN khu = 'BDCC' THEN so_luong") \
			_T("                ELSE 0") \
			_T("                END) AS khu_BDCC,") \
			_T("           SUM (CASE WHEN khu = 'NTT' THEN so_luong") \
			_T("                ELSE 0") \
			_T("                END) AS khu_NTT,") \
			_T("           SUM (CASE WHEN khu NOT IN ( 'C1.1A', 'C1.2', 'C1.3', 'BDCC',") \
			_T("                                  'NTT', 'KSK', 'A11', 'Tuyen', 'X' ) THEN so_luong") \
			_T("                ELSE 0") \
			_T("                END) AS khu_TYC,") \
			_T("           SUM (CASE WHEN khu = 'KSK' THEN so_luong") \
			_T("                ELSE 0") \
			_T("                END) AS khu_KSK,") \
			_T("           SUM (CASE WHEN khu = 'A11' THEN so_luong") \
			_T("                ELSE 0") \
			_T("                END) AS khu_A11,") \
			_T("           SUM (CASE WHEN khu = 'Tuyen' THEN so_luong") \
			_T("                ELSE 0") \
			_T("                END) AS khu_Tuyen,") \
			_T("           SUM (CASE WHEN khu = 'X' THEN so_luong") \
		_T("                ELSE 0") \
		_T("                END) AS khu_X,") \
		_T("           SUM (so_luong) AS tong_so_luong") \
		_T("      FROM (   SELECT hd_object AS object,") \
		_T("                         CASE WHEN sd_id IN ( 'C1.1', 'C1.2', 'C1.3', 'TYC', 'AB' ) THEN 2") \
		_T("                         ELSE 1") \
		_T("                         END AS loai_dt,") \
		_T("                         Nvl (hrl_zone, 'X') AS khu,") \
		_T("                         1 AS so_luong") \
		_T("                    FROM hms_pacsorder") \
		_T("               LEFT JOIN hms_pacsorderline ON ( hpcl_orderid = hpc_orderid AND hpcl_docno = hpc_docno") \
		_T("                                              )") \
		_T("               LEFT JOIN hms_roomlist ON ( hrl_id = hpcl_proomid AND hrl_deptid IN ( 'C8-C', 'TYC' )") \
		_T("                                           AND") \
		_T("                                           HRL_SECTION = 'HA' )") \
		_T("               LEFT JOIN hms_doc ON ( hd_docno = hpc_docno )") \
		_T("               LEFT JOIN sys_dept ON ( hpc_deptid = sd_id )") \
		_T("                   WHERE hpcl_status = 'T' AND HPCL_PRACTITIONER IN (SELECT su_userid") \
		_T("                                                     FROM sys_user") \
		_T("                                                    WHERE su_deptid = 'C8-C'") \
		_T("                                                   UNION ALL") \
		_T("                                                   SELECT ss_code") \
		_T("                                                     FROM sys_sel") \
		_T("                                                    WHERE ss_id = 'c8cliketyc_user') AND") \
		_T("                         hpc_groupid = 'B3200'") \
		_T("                         AND") \
		_T("                                   hpcl_status IN ( 'T' ) AND hpcl_date BETWEEN") \
		_T("                                                              To_timestamp ('%s'") \
		_T("                                                              , 'YYYY-MM-DD HH24:MI:SS') AND") \
		_T("                                                              To_timestamp ('%s',") \
		_T("                                                              'YYYY-MM-DD HH24:MI:SS')") \
		_T("               UNION ALL") \
		_T("                  SELECT hd_object AS object,") \
		_T("                         CASE WHEN sd_id IN ( 'C1.1', 'C1.2', 'C1.3', 'TYC', 'AB' ) THEN 2") \
		_T("                         ELSE 1") \
		_T("                         END AS loai_dt,") \
		_T("                         N'X' AS khu,") \
		_T("                         1 AS so_luong") \
		_T("                    FROM hms_pacsorder") \
		_T("               LEFT JOIN hms_pacsorderline ON ( hpcl_orderid = hpc_orderid AND hpcl_docno = hpc_docno") \
		_T("                                              )") \
		_T("               LEFT JOIN hms_roomlist ON ( hrl_id = hpcl_proomid AND hrl_deptid IN ( 'C8-C', 'TYC' )") \
		_T("                                           AND") \
		_T("                                           HRL_SECTION = 'HA' )") \
		_T("               LEFT JOIN hms_doc ON ( hd_docno = hpc_docno )") \
		_T("               LEFT JOIN sys_dept ON ( hpc_deptid = sd_id )") \
		_T("                   WHERE hpcl_status = 'T' AND HPCL_PRACTITIONER NOT IN (SELECT su_userid") \
		_T("                                                         FROM sys_user") \
		_T("                                                        WHERE su_deptid = 'C8-C'") \
		_T("                                                       UNION ALL") \
		_T("                                                       SELECT ss_code") \
		_T("                                                         FROM sys_sel") \
		_T("                                                        WHERE ss_id = 'c8cliketyc_user') AND") \
		_T("                         hpc_groupid = 'B3200'") \
		_T("                         AND") \
		_T("                                   hpcl_status IN ( 'T' ) AND hpcl_date BETWEEN") \
		_T("                                                              To_timestamp ('%s'") \
		_T("                                                              , 'YYYY-MM-DD HH24:MI:SS') AND") \
		_T("                                                              To_timestamp ('%s',") \
		_T("                                                              'YYYY-MM-DD HH24:MI:SS')") \
		_T("               UNION ALL") \
		_T("               SELECT hqp_id AS object,") \
		_T("                      1 AS loai_dt,") \
		_T("                      CASE hqp_type WHEN N'1' THEN N'A11'") \
		_T("                        WHEN N'2' THEN N'Tuyen'") \
		_T("                        WHEN N'3' THEN N'KSK'") \
		_T("                        WHEN N'L' THEN N'X'") \
		_T("                      END AS khu,") \
		_T("                      hqp_incount AS so_luong") \
		_T("                 FROM hms_qtyperform") \
		_T("                WHERE hqp_date BETWEEN To_timestamp ('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("                                       AND") \
		_T("                                              To_timestamp ('%s',") \
		_T("                                              'YYYY-MM-DD HH24:MI:SS') AND") \
		_T("                             hqp_incount > 0 AND hqp_group = 'B3200'") \
		_T("            UNION ALL") \
		_T("            SELECT hqp_id AS object,") \
		_T("                   2 AS loai_dt,") \
		_T("                   CASE hqp_type WHEN N'1' THEN N'A11'") \
		_T("                     WHEN N'2' THEN N'Tuyen'") \
		_T("                     WHEN N'3' THEN N'KSK'") \
		_T("                     WHEN N'L' THEN N'X'") \
		_T("                   END AS khu,") \
		_T("                   hqp_outcount AS so_luong") \
		_T("              FROM hms_qtyperform") \
		_T("             WHERE hqp_date BETWEEN To_timestamp ('%s', 'YYYY-MM-DD HH24:MI:SS') AND") \
		_T("                                           To_timestamp ('%s',") \
		_T("                                           'YYYY-MM-DD HH24:MI:SS') AND") \
		_T("                          hqp_outcount > 0 AND hqp_group = 'B3200') tbl_source") \
		_T(" LEFT JOIN hms_object ON ( object = ho_id )") \
		_T("     GROUP BY ho_desc,loai_dt,ho_id") \
		_T("     ORDER BY loai_dt,Cast (ho_id AS INTEGER)")
		, m_szFromDate, m_szToDate
		, m_szFromDate, m_szToDate
		, m_szFromDate, m_szToDate
		, m_szFromDate, m_szToDate);
	}

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		return;
	}
	xls.SetWorksheet(0);
	szPrevType.Empty();
	tmpStr.Format(_T("BÁO CÁO SỐ LIỆU THEO %s"), szExportType==_T("P")?_T("BỆNH NHÂN"):_T("LƯỢT"));
	xls.SetCellText(0, 2, tmpStr, FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true);
	nRow = 7;
	//_msg(_T("\nfield:%d"), rs.GetFieldCount());
	for (int i = 0; i < rs.GetFieldCount(); i ++)
	{
		/*
		arTypeSum[i] = 0;
		arTotalSum[i] = 0;
		*/
		arTypeSum.Add(0);
		arTotalSum.Add(0);
	}
	//_msg(_T("\ncolcount:%d"), arTypeSum.GetCount());
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("loai_dt"), szType);
		if (szType != szPrevType)
		{
			if (!szPrevType.IsEmpty())
			{
				//print sum type
				xls.SetCellText(0, nRow, _T("Cộng"), FMT_TEXT | FMT_CENTER, true);
				for (int i = 1; i < arTypeSum.GetCount(); i++)
				{
					nCol = i;
					xls.SetCellText(nCol, nRow, ToString(arTypeSum[i]), FMT_NUMBER1);
					arTypeSum[i] = 0;	
				}
				nRow++;
			}

			//print type
			xls.SetCellText(0, nRow++, szType==_T("1")?_T("Bệnh nhân nội trú"):_T("Bệnh nhân ngoại trú"), FMT_TEXT | FMT_CENTER, true);
			szPrevType = szType;
		}
		//print line
		for (int i = 1; i < rs.GetFieldCount(); i++)
		{
			nCol = i - 1;
			nFormat = FMT_TEXT;
			szValue = rs.GetValue(i);
			if (i > 1)
			{
				nFormat = FMT_NUMBER1;
				arTypeSum[nCol] += str2long(szValue);
				arTotalSum[nCol] += str2long(szValue);
			}
			xls.SetCellText(nCol, nRow, szValue, nFormat);
		}
		nRow++;
		rs.MoveNext();
	}
	//print sum type
	xls.SetCellText(0, nRow, _T("Cộng"), FMT_TEXT | FMT_CENTER, true);
	for (int i = 1; i < arTypeSum.GetCount(); i++)
	{
		nCol = i;
		xls.SetCellText(nCol, nRow, ToString(arTypeSum[i]), FMT_NUMBER1);
		arTypeSum[i] = 0;	
	}
	nRow++;
	//print sum total
	xls.SetCellText(0, nRow, _T("TỔNG CỘNG"), FMT_TEXT | FMT_CENTER, true);
	for (int i = 1; i < arTotalSum.GetCount(); i++)
	{
		nCol = i;
		xls.SetCellText(nCol, nRow, ToString(arTotalSum[i]), FMT_NUMBER1);
	}
	nRow++;
	szFileName.Format(_T("TONGHOPKETQUANOINGOAITHEOSO%s-KHU"), szExportType==_T("P")?_T("BENHNHAN"):_T("LUOT"));
	szFilePath.Format(_T("Exports\\%s.xls"), szFileName);
	xls.Save(szFilePath);

}