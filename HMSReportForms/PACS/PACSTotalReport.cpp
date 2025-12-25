#include "stdafx.h"
#include "PACSTotalReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CPACSTotalReport *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSTotalReport* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CPACSTotalReport *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSTotalReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSTotalReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSTotalReport *)pWnd)->OnToDateCheckValue();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CPACSTotalReport*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CPACSTotalReport*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSTotalReport*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	return ((CPACSTotalReport*)pWnd)->OnRoomDeleteItem();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CPACSTotalReport *pVw = (CPACSTotalReport *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSTotalReport *pVw = (CPACSTotalReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPACSTotalReportFnc(CWnd *pWnd){
	 return ((CPACSTotalReport*)pWnd)->OnAddPACSTotalReport();
} 
static int _OnEditPACSTotalReportFnc(CWnd *pWnd){
	 return ((CPACSTotalReport*)pWnd)->OnEditPACSTotalReport();
} 
static int _OnDeletePACSTotalReportFnc(CWnd *pWnd){
	 return ((CPACSTotalReport*)pWnd)->OnDeletePACSTotalReport();
} 
static int _OnSavePACSTotalReportFnc(CWnd *pWnd){
	 return ((CPACSTotalReport*)pWnd)->OnSavePACSTotalReport();
} 
static int _OnCancelPACSTotalReportFnc(CWnd *pWnd){
	 return ((CPACSTotalReport*)pWnd)->OnCancelPACSTotalReport();
} 
CPACSTotalReport::CPACSTotalReport(CWnd* pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CPACSTotalReport::~CPACSTotalReport(){
}
void CPACSTotalReport::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 1, 1, 431, 486);
	m_wndYearLabel.Create(this, _T("Year"), 5, 25, 85, 50);
	m_wndYear.Create(this,90, 25, 210, 50); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 220, 25, 300, 50);
	m_wndPeriodReport.Create(this,305, 25, 425, 50); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 55, 85, 80);
	m_wndFromDate.Create(this,90, 55, 210, 80); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 55, 300, 80);
	m_wndToDate.Create(this,305, 55, 425, 80); 
	m_wndRoom.Create(this,5, 85, 425, 480);
	m_wndRoom.SetCheckBox(TRUE);
	m_wndExport.Create(this, _T("&Export"), 325, 490, 425, 515);

}
void CPACSTotalReport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(35);
	//m_wndYear.SetCheckValue(true);
	//m_wndPeriodReport.SetCheckValue(true);
	m_wndPeriodReport.LimitText(35);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);


	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);

}
void CPACSTotalReport::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndPeriodReport.SetEvent(WE_SELENDOK, _OnPeriodReportSelendokFnc);
	//m_wndPeriodReport.SetEvent(WE_SETFOCUS, _OnPeriodReportSetfocusFnc);
	//m_wndPeriodReport.SetEvent(WE_KILLFOCUS, _OnPeriodReportKillfocusFnc);
	m_wndPeriodReport.SetEvent(WE_SELCHANGE, _OnPeriodReportSelectChangeFnc);
	m_wndPeriodReport.SetEvent(WE_LOADDATA, _OnPeriodReportLoadDataFnc);
	//m_wndPeriodReport.SetEvent(WE_ADDNEW, _OnPeriodReportAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	m_wndRoom.SetEvent(WE_DBLCLICK, _OnRoomDblClickFnc);
	m_wndRoom.AddEvent(1, _T("Delete"), _OnRoomDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnRoomLoadData();
}
void CPACSTotalReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CPACSTotalReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSTotalReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSTotalReport::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nOrderDate=1;
	m_nPerformDate=1;

}
int CPACSTotalReport::SetMode(int nMode){
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
/*void CPACSTotalReport::OnYearChange(){
	
} */
/*void CPACSTotalReport::OnYearSetfocus(){
	
} */
/*void CPACSTotalReport::OnYearKillfocus(){
	
} */
int CPACSTotalReport::OnYearCheckValue(){
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
void CPACSTotalReport::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSTotalReport::OnPeriodReportSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CDate dte;
	CString tmpStr;
	int nMonth = ToInt(m_szPeriodReportKey);
	int nYear = m_nYear;
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/1"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/1/1"), nYear);
		tmpStr.Format(_T("%.4d/3/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59"), nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/4/1"), nYear);
		tmpStr.Format(_T("%.4d/6/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/7/1"), nYear);
		tmpStr.Format(_T("%.4d/9/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/1"), nYear);
		tmpStr.Format(_T("%.4d/10/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/1/1"), nYear);
		tmpStr.Format(_T("%.4d/12/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false); 
}
/*void CPACSTotalReport::OnPeriodReportSetfocus(){
	
}*/
/*void CPACSTotalReport::OnPeriodReportKillfocus(){
	
}*/
long CPACSTotalReport::OnPeriodReportLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szPeriodReportKey));
	}
	m_wndPeriodReport.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriodReport.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSTotalReport::OnPeriodReportAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSTotalReport::OnFromDateChange(){
	
} */
/*void CPACSTotalReport::OnFromDateSetfocus(){
	
} */
/*void CPACSTotalReport::OnFromDateKillfocus(){
	
} */
int CPACSTotalReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSTotalReport::OnToDateChange(){
	
} */
/*void CPACSTotalReport::OnToDateSetfocus(){
	
} */
/*void CPACSTotalReport::OnToDateKillfocus(){
	
} */
int CPACSTotalReport::OnToDateCheckValue(){
	return 0;
}
void CPACSTotalReport::OnRoomDblClick(){
	
} 
void CPACSTotalReport::OnRoomSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPACSTotalReport::OnRoomDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSTotalReport::OnRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoom.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hrl_id as ID, hrl_name as Name ") \
		_T("FROM hms_roomlist ") \
		_T("WHERE hrl_deptid='%s' ") \
		_T("ORDER BY hrl_id"), pMF->GetCurrentDepartmentID());

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndRoom.EndLoad(); 
	return nCount;
}
void CPACSTotalReport::OnPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSTotalReport::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("Xuất tổng hợp"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("Xuất chi tiết"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
    menu.AppendMenu(MF_SEPARATOR);
    tmpStr.Format(_T("Xuất tổng hợp (mới)"));
    menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport1();
		break;
	case 2:
		OnExport2();
		break;
    case 3:
        OnExport3();
        break;
	}
} 
void CPACSTotalReport::OnExport1(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0; 
	double nTotal[23];
	for(int i = 1; i < 23; i++)
	{
		nTotal[i] = 0;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 12);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 8);
	xls.SetColumnWidth(19, 8);
	xls.SetColumnWidth(20, 8);
	xls.SetColumnWidth(21, 8);
	xls.SetColumnWidth(22, 8);

	xls.SetCellText(0, 0, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(7, 1, tmpStr, FMT_TEXT | FMT_CENTER, true, 11, 0);
	xls.SetCellText(0, 3, _T("CHỤP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 3, _T("QUÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 3, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 3, _T("BHQD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 3, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 0, _T("SỐ LIỆU BÁO CÁO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);
	xls.SetCellText(9, 3, _T("BẠN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 3, _T("TRẺ EM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 3, _T("C SÁCH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 3, _T("DỊCH VỤ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(16, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 3, _T("BH KHÁC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(18, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, 3, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(20, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 3, _T("CỘNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(22, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(3, 4, 0, 0);
	xls.SetMerge(3, 3, 1, 2);
	xls.SetMerge(3, 3, 3, 4);
	xls.SetMerge(3, 3, 5, 6);
	xls.SetMerge(0, 0, 7, 22);
	xls.SetMerge(1, 1, 7, 22);
	xls.SetMerge(3, 3, 7, 8);
	xls.SetMerge(3, 3, 9, 10);
	xls.SetMerge(3, 3, 11, 12);
	xls.SetMerge(3, 3, 13, 14);
	xls.SetMerge(3, 3, 15, 16);
	xls.SetMerge(3, 3, 17, 18);
	xls.SetMerge(3, 3, 19, 20);
	xls.SetMerge(3, 3, 21, 22);

	szSQL = GetQueryString();
	//_msg(_T("0: %s"), szSQL);
	rs.ExecSQL(szSQL);

	nRow = 5;
	nCol = 0;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		for(int i = 1; i < 23; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += ToDouble(tmpStr);
			xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT, true);
	for(int i = 1; i < 23; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1, true);
	}

	nRow++;
	xls.SetCellText(0, nRow, _T("PHIM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, nRow, _T("QUÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, nRow, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, nRow, _T("BHQD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, nRow, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, nRow, _T("BẠN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, nRow, _T("TRẺ EM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, nRow, _T("C SÁCH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, nRow, _T("DỊCH VỤ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, nRow, _T("BH KHÁC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, nRow, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, nRow, _T("CỘNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(nRow, nRow, 1, 2);
	xls.SetMerge(nRow, nRow, 3, 4);
	xls.SetMerge(nRow, nRow, 5, 6);
	xls.SetMerge(nRow, nRow, 7, 8);
	xls.SetMerge(nRow, nRow, 9, 10);
	xls.SetMerge(nRow, nRow, 11, 12);
	xls.SetMerge(nRow, nRow, 13, 14);
	xls.SetMerge(nRow, nRow, 15, 16);
	xls.SetMerge(nRow, nRow, 17, 18);
	xls.SetMerge(nRow, nRow, 19, 20);
	xls.SetMerge(nRow, nRow, 21, 22);

	for(int i = 1; i < 23; i++)
	{
		nTotal[i] = 0;
	}
	nRow++;
	szSQL = GetQueryString1();
//	_msg(_T("1: %s"), szSQL);
	rs.ExecSQL(szSQL);
	nCol = 0;

	while(!rs.IsEOF())
	{
		xls.SetMerge(nRow, nRow, 1, 2);
		xls.SetMerge(nRow, nRow, 3, 4);
		xls.SetMerge(nRow, nRow, 5, 6);
		xls.SetMerge(nRow, nRow, 7, 8);
		xls.SetMerge(nRow, nRow, 9, 10);
		xls.SetMerge(nRow, nRow, 11, 12);
		xls.SetMerge(nRow, nRow, 13, 14);
		xls.SetMerge(nRow, nRow, 15, 16);
		xls.SetMerge(nRow, nRow, 17, 18);
		xls.SetMerge(nRow, nRow, 19, 20);
		xls.SetMerge(nRow, nRow, 21, 22);

		rs.GetValue(_T("pdname"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		int j = 0;
		for(int i = 0; i < 12; i++)
		{
			szTemp.Format(_T("c%d"), i+1);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i+1] += ToDouble(tmpStr);
			j = i+1;
			xls.SetCellText(nCol+i+j, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT, true);
	xls.SetMerge(nRow, nRow, 1, 2);
	xls.SetMerge(nRow, nRow, 3, 4);
	xls.SetMerge(nRow, nRow, 5, 6);
	xls.SetMerge(nRow, nRow, 7, 8);
	xls.SetMerge(nRow, nRow, 9, 10);
	xls.SetMerge(nRow, nRow, 11, 12);
	xls.SetMerge(nRow, nRow, 13, 14);
	xls.SetMerge(nRow, nRow, 15, 16);
	xls.SetMerge(nRow, nRow, 17, 18);
	xls.SetMerge(nRow, nRow, 19, 20);
	xls.SetMerge(nRow, nRow, 21, 22);
	int j = 0;
	for(int i = 0; i < 12; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i+1]);
		j = i+1;
		xls.SetCellText(nCol+i+j, nRow, tmpStr, FMT_NUMBER1, true);
	}

	for(int i = 1; i < 23; i++)
	{
		nTotal[i] = 0;
	}
	nRow++;
	szSQL = GetQueryString2();
//	_msg(_T("2: %s"), szSQL);
	rs.ExecSQL(szSQL);
	nCol = 0;

	while(!rs.IsEOF())
	{
		xls.SetMerge(nRow, nRow, 1, 2);
		xls.SetMerge(nRow, nRow, 3, 4);
		xls.SetMerge(nRow, nRow, 5, 6);
		xls.SetMerge(nRow, nRow, 7, 8);
		xls.SetMerge(nRow, nRow, 9, 10);
		xls.SetMerge(nRow, nRow, 11, 12);
		xls.SetMerge(nRow, nRow, 13, 14);
		xls.SetMerge(nRow, nRow, 15, 16);
		xls.SetMerge(nRow, nRow, 17, 18);
		xls.SetMerge(nRow, nRow, 19, 20);
		xls.SetMerge(nRow, nRow, 21, 22);

		rs.GetValue(_T("categoryname"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		j = 0;
		for(int i = 0; i < 12; i++)
		{
			szTemp.Format(_T("c%d"), i+1);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i+1] += ToDouble(tmpStr);
			j = i+1;
			xls.SetCellText(nCol+i+j, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT, true);
	xls.SetMerge(nRow, nRow, 1, 2);
	xls.SetMerge(nRow, nRow, 3, 4);
	xls.SetMerge(nRow, nRow, 5, 6);
	xls.SetMerge(nRow, nRow, 7, 8);
	xls.SetMerge(nRow, nRow, 9, 10);
	xls.SetMerge(nRow, nRow, 11, 12);
	xls.SetMerge(nRow, nRow, 13, 14);
	xls.SetMerge(nRow, nRow, 15, 16);
	xls.SetMerge(nRow, nRow, 17, 18);
	xls.SetMerge(nRow, nRow, 19, 20);
	xls.SetMerge(nRow, nRow, 21, 22);
	j = 0;
	for(int i = 0; i < 12; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i+1]);
		j = i+1;
		xls.SetCellText(nCol+i+j, nRow, tmpStr, FMT_NUMBER1, true);
	}

	nRow++;	
	xls.SetCellText(0, nRow, _T("XN KHÁC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, nRow, _T("QUÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, nRow, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, nRow, _T("BHQD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, nRow, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, nRow, _T("BẠN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, nRow, _T("TRẺ EM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, nRow, _T("C SÁCH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, nRow, _T("DỊCH VỤ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(16, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, nRow, _T("BH KHÁC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(18, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, nRow, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(20, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, nRow, _T("CỘNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(22, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(nRow, nRow+1, 0, 0);
	xls.SetMerge(nRow, nRow, 1, 2);
	xls.SetMerge(nRow, nRow, 3, 4);
	xls.SetMerge(nRow, nRow, 5, 6);
	xls.SetMerge(nRow, nRow, 7, 8);
	xls.SetMerge(nRow, nRow, 9, 10);
	xls.SetMerge(nRow, nRow, 11, 12);
	xls.SetMerge(nRow, nRow, 13, 14);
	xls.SetMerge(nRow, nRow, 15, 16);
	xls.SetMerge(nRow, nRow, 17, 18);
	xls.SetMerge(nRow, nRow, 19, 20);
	xls.SetMerge(nRow, nRow, 21, 22);

	for(int i = 1; i < 23; i++)
	{
		nTotal[i] = 0;
	}
	nRow = nRow +1;
	nRow++;
	szSQL = GetQueryString3old();
//	_msg(_T("3: %s"), szSQL);
	rs.ExecSQL(szSQL);

	nCol = 0;

	while(!rs.IsEOF())
	{

		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		for(int i = 1; i < 23; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += ToDouble(tmpStr);
			xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT, true);
	for(int i = 1; i < 23; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1, true);
	}

	for(int i = 1; i < 23; i++)
	{
		nTotal[i] = 0;
	}
	nRow++;
	szSQL = GetQueryString4old();
//	_msg(_T("4:%s"), szSQL);
	rs.ExecSQL(szSQL);

	nCol = 0;

	while(!rs.IsEOF())
	{

		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		for(int i = 1; i < 23; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += ToDouble(tmpStr);
			xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT, true);
	for(int i = 1; i < 23; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Solieubaocao.xls"));
} 
void CPACSTotalReport::OnExport2(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szNewGroup, szOldGroup, szNewRoom, szOldRoom;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1; 

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 16);
	xls.SetColumnWidth(4, 20);
	xls.SetColumnWidth(5, 10);

	xls.SetCellText(0, 0, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11, 0);
	xls.SetCellText(0, 2, _T("DANH SÁCH BỆNH NHÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);

	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 4, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 4, _T("Tên bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 4, _T("Bác sĩ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 4, _T("Ngày duyệt"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 4, _T("Trạng thái"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(2, 2, 0, 6);
	xls.SetMerge(3, 3, 0, 6);

	szSQL = GetQueryString5();
	rs.ExecSQL(szSQL);

	nRow = 5;
	nCol = 0;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"), szNewGroup);
		rs.GetValue(_T("roomid"), szNewRoom);

		if (!szNewGroup.IsEmpty() && szNewGroup != szOldGroup)
		{
			if (szNewGroup == _T("B2200"))
				tmpStr = _T("CT");
			else
				tmpStr = _T("MRI");
			xls.SetCellMergedColumns(nCol, nRow, 6);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT , true);
			szOldGroup = szNewGroup;
			nRow++;
		}

		if (szOldRoom != szNewRoom)
		{
			xls.SetCellMergedColumns(nCol, nRow, 6);
			xls.SetCellText(0, nRow, rs.GetValue(_T("roomname")), FMT_TEXT, true);
			szOldRoom = szNewRoom;
			nIdx = 1;
			nRow++;
		}

		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(1, nRow, rs.GetValue(_T("docno")), FMT_INTEGER);
		xls.SetCellText(2, nRow, rs.GetValue(_T("patientname")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("doctor")), FMT_TEXT);
		rs.GetValue(_T("approvedate"), tmpStr);
		xls.SetCellText(4, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);
		xls.SetCellText(5, nRow, rs.GetValue(_T("status")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Danhsachbenhnhan.xls"));
} 
int CPACSTotalReport::OnAddPACSTotalReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSTotalReport::OnEditPACSTotalReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSTotalReport::OnDeletePACSTotalReport(){
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
 		OnCancelPACSTotalReport();
 	}
	return 0;
}
int CPACSTotalReport::OnSavePACSTotalReport(){
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
 		//OnPACSTotalReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSTotalReport::OnCancelPACSTotalReport(){
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
int CPACSTotalReport::OnPACSTotalReportListLoadData(){
	return 0;
}
CString CPACSTotalReport::GetQueryString()
{
	CString szSQL, szWhere;

	szSQL.Format(_T(" SELECT pcount,") \
		_T("   dept,") \
		_T("   SUM(quan)                                                                           AS c1,") \
		_T("   SUM(quanqty)                                                                        AS c2,") \
		_T("   SUM(bhqn)                                                                           AS c3,") \
		_T("   SUM(bhqnqty)                                                                        AS c4,") \
		_T("   SUM(bhqd)                                                                           AS c5,") \
		_T("   SUM(bhqdqty)                                                                        AS c6,") \
		_T("   SUM(bhqh)                                                                           AS c7,") \
		_T("   SUM(bhqhqty)                                                                        AS c8,") \
		_T("   SUM(ban)                                                                            AS c9,") \
		_T("   SUM(banqty)                                                                         AS c10,") \
		_T("   SUM(te6t)                                                                           AS c11,") \
		_T("   SUM(te6tqty)                                                                        AS c12,") \
		_T("   SUM(csach)                                                                          AS c13,") \
		_T("   SUM(csachqty)                                                                       AS c14,") \
		_T("   SUM(dvyt)                                                                           AS c15,") \
		_T("   SUM(dvytqty)                                                                        AS c16,") \
		_T("   SUM(bhk)                                                                            AS c17,") \
		_T("   SUM(bhkqty)                                                                         AS c18,") \
		_T("   SUM(bhtn)                                                                           AS c19,") \
		_T("   SUM(bhtnqty)                                                                        AS c20,") \
		_T("   SUM(quan+bhqn+bhqh+bhqd+bhtn+bhk+csach+te6t+dvyt+ban)                               AS c21,") \
		_T("   SUM(quanqty+bhqnqty+bhqhqty+bhqdqty+bhtnqty+bhkqty+csachqty+te6tqty+dvytqty+banqty) AS c22") \
		_T(" FROM") \
		_T("   (SELECT pcount,") \
		_T("     dept,") \
		_T("     SUM(quan)  AS quan,") \
		_T("     SUM(bhqn)  AS bhqn,") \
		_T("     SUM(bhqh)  AS bhqh,") \
		_T("     SUM(bhqd)  AS bhqd,") \
		_T("     SUM(bhtn)  AS bhtn,") \
		_T("     SUM(bhk)   AS bhk,") \
		_T("     SUM(csach) AS csach,") \
		_T("     SUM(te6t)  AS te6t,") \
		_T("     SUM(dvyt)  AS dvyt,") \
		_T("     SUM(ban)   AS ban,") \
		_T("     0          AS quanqty,") \
		_T("     0          AS bhqnqty,") \
		_T("     0          AS bhqhqty,") \
		_T("     0          AS bhqdqty,") \
		_T("     0          AS bhtnqty,") \
		_T("     0          AS bhkqty,") \
		_T("     0          AS csachqty,") \
		_T("     0          AS te6tqty,") \
		_T("     0          AS dvytqty,") \
		_T("     0          AS banqty") \
		_T("   FROM") \
		_T("     (SELECT ") \
		_T("       CASE") \
		_T("         WHEN hpc_deptid NOT              IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("         AND NVL(hfl_categoryid, '0') NOT IN('15')") \
		_T("         THEN '1'") \
		_T("         WHEN hpc_deptid                  IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("         AND NVL(hfl_categoryid, '0') NOT IN('15')") \
		_T("         THEN '2'") \
		_T("         WHEN NVL(hfl_categoryid, '0') IN('15')") \
		_T("         THEN '3'") \
		_T("       END AS pcount,") \
		_T("       CASE") \
		_T("         WHEN hpc_deptid NOT              IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("         AND NVL(hfl_categoryid, '0') NOT IN('15')") \
		_T("         THEN 'NỘI TRÚ'") \
		_T("         WHEN hpc_deptid                  IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("         AND NVL(hfl_categoryid, '0') NOT IN('15')") \
		_T("         THEN 'NGOẠI TRÚ'") \
		_T("         WHEN NVL(hfl_categoryid, '0') IN('15')") \
		_T("         THEN 'MAMO'") \
		_T("       END         AS dept,") \
		_T("       hpc_orderid AS orderid,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(1)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS quan,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(11, 13)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS bhqn,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(10)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS bhqd,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(2)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS bhqh,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(8)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS ban,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(6, 9)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS te6t,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(3)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS csach,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(7)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS dvyt,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(4, 12)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS bhk,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(5)") \
		_T("         THEN 1") \
		_T("         ELSE 0") \
		_T("       END AS bhtn") \
		_T("     FROM hms_pacsorder") \
		_T("     LEFT JOIN hms_pacsorderline") \
		_T("     ON(hpcl_orderid = hpc_orderid and hpc_docno = hpcl_docno)") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid      = hpcl_itemid)") \
		_T("     WHERE hpc_groupid = 'B2100' AND hpcl_status = 'T' ") \
		_T("     AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     ) Tbl") \
		_T("   GROUP BY pcount,") \
		_T("     dept") \
		_T("   UNION ALL") \
		_T("   SELECT pcount,") \
		_T("     dept,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     0,") \
		_T("     SUM(quanqty)  AS quanqty,") \
		_T("     SUM(bhqnqty)  AS bhqnqty,") \
		_T("     SUM(bhqhqty)  AS bhqhqty,") \
		_T("     SUM(bhqdqty)  AS bhqdqty,") \
		_T("     SUM(bhtnqty)  AS bhtnqty,") \
		_T("     SUM(bhkqty)   AS bhkqty,") \
		_T("     SUM(csachqty) AS csachqty,") \
		_T("     SUM(te6tqty)  AS te6tqty,") \
		_T("     SUM(dvytqty)  AS dvytqty,") \
		_T("     SUM(banqty)   AS banqty") \
		_T("   FROM") \
		_T("     (SELECT") \
		_T("       CASE") \
		_T("         WHEN hpc_deptid NOT              IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("         AND NVL(hfl_categoryid, '0') NOT IN('15')") \
		_T("         THEN '1'") \
		_T("         WHEN hpc_deptid                  IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("         AND NVL(hfl_categoryid, '0') NOT IN('15')") \
		_T("         THEN '2'") \
		_T("         WHEN NVL(hfl_categoryid, '0') IN('15')") \
		_T("         THEN '3'") \
		_T("       END AS pcount,") \
		_T("       CASE") \
		_T("         WHEN hpc_deptid NOT              IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("         AND NVL(hfl_categoryid, '0') NOT IN('15')") \
		_T("         THEN 'NỘI TRÚ'") \
		_T("         WHEN hpc_deptid                  IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("         AND NVL(hfl_categoryid, '0') NOT IN('15')") \
		_T("         THEN 'NGOẠI TRÚ'") \
		_T("         WHEN NVL(hfl_categoryid, '0') IN('15')") \
		_T("         THEN 'MAMO'") \
		_T("       END         AS dept,") \
		_T("       hpc_orderid AS orderid,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(1)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END AS quanqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(11, 13)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END AS bhqnqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(10)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END AS bhqdqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(2)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END AS bhqhqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(8)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END AS banqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(6, 9)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END AS te6tqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(3)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END AS csachqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(7)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END AS dvytqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(4, 12)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END AS bhkqty,") \
		_T("       CASE") \
		_T("         WHEN hpc_object IN(5)") \
		_T("         THEN hfl_numimg") \
		_T("         ELSE 0") \
		_T("       END AS bhtnqty") \
		_T("     FROM hms_pacsorder") \
		_T("     LEFT JOIN hms_pacsorderline") \
		_T("     ON(hpcl_orderid = hpc_orderid and hpc_docno = hpcl_docno)") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid      = hpcl_itemid)") \
		_T("     WHERE hpc_groupid = 'B2100' AND hpcl_status = 'T' ") \
		_T("     AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     ) Tbl2") \
		_T("   GROUP BY pcount,") \
		_T("     dept") \
		_T("   ) Tbl3") \
		_T(" GROUP BY pcount,") \
		_T("   dept") \
		_T(" ORDER BY pcount"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);
		_debug(_T("query 0 : \r\n %s"), szSQL);
		return szSQL;
}

CString CPACSTotalReport::GetQueryString1()
{
	CString szSQL, szWhere;
	szSQL.Format(_T(" SELECT pdid,") \
		_T("   pdname,") \
		_T("   SUM(quan)                                             AS c1,") \
		_T("   SUM(bhqn)                                             AS c2,") \
		_T("   SUM(bhqd)                                             AS c3,") \
		_T("   SUM(bhqh)                                             AS c4,") \
		_T("   SUM(ban)                                              AS c5,") \
		_T("   SUM(te6t)                                             AS c6,") \
		_T("   SUM(csach)                                            AS c7,") \
		_T("   SUM(dvyt)                                             AS c8,") \
		_T("   SUM(bhk)                                              AS c9,") \
		_T("   SUM(bhtn)                                             AS c10,") \
		_T("   SUM(quan+bhqn+bhqh+bhqd+bhtn+bhk+csach+te6t+dvyt+ban) AS c11") \
		_T(" FROM") \
		_T("   (SELECT hpo_docno,") \
		_T("     mp_product_id AS pdid,") \
		_T("     mp_name       AS pdname,") \
		_T("     CASE") \
		_T("       WHEN hpo_object_id IN(1)") \
		_T("       THEN hpol_qtyissue") \
		_T("       ELSE 0") \
		_T("     END AS quan,") \
		_T("     CASE") \
		_T("       WHEN hpo_object_id IN(11, 13)") \
		_T("       THEN hpol_qtyissue") \
		_T("       ELSE 0") \
		_T("     END AS bhqn,") \
		_T("     CASE") \
		_T("       WHEN hpo_object_id IN(10)") \
		_T("       THEN hpol_qtyissue") \
		_T("       ELSE 0") \
		_T("     END AS bhqd,") \
		_T("     CASE") \
		_T("       WHEN hpo_object_id IN(2)") \
		_T("       THEN hpol_qtyissue") \
		_T("       ELSE 0") \
		_T("     END AS bhqh,") \
		_T("     CASE") \
		_T("       WHEN hpo_object_id IN(8)") \
		_T("       THEN hpol_qtyissue") \
		_T("       ELSE 0") \
		_T("     END AS ban,") \
		_T("     CASE") \
		_T("       WHEN hpo_object_id IN(6, 9)") \
		_T("       THEN hpol_qtyissue") \
		_T("       ELSE 0") \
		_T("     END AS te6t,") \
		_T("     CASE") \
		_T("       WHEN hpo_object_id IN(3)") \
		_T("       THEN hpol_qtyissue") \
		_T("       ELSE 0") \
		_T("     END AS csach,") \
		_T("     CASE") \
		_T("       WHEN hpo_object_id IN(7)") \
		_T("       THEN hpol_qtyissue") \
		_T("       ELSE 0") \
		_T("     END AS dvyt,") \
		_T("     CASE") \
		_T("       WHEN hpo_object_id IN(4, 12)") \
		_T("       THEN hpol_qtyissue") \
		_T("       ELSE 0") \
		_T("     END AS bhk,") \
		_T("     CASE") \
		_T("       WHEN hpo_object_id IN(5)") \
		_T("       THEN hpol_qtyissue") \
		_T("       ELSE 0") \
		_T("     END AS bhtn") \
		_T("   FROM") \
		_T("     (SELECT hpo_docno,") \
		_T("       hpo_object_id,") \
		_T("       hpol_qtyissue,") \
		_T("       hpo_reference_id,") \
		_T("       hpol_product_item_id") \
		_T("     FROM hms_pharmaorder") \
		_T("     LEFT JOIN hms_pharmaorderline") \
		_T("     ON(hpol_orderid       = hpo_orderid)") \
		_T("     WHERE hpo_orderstatus = 'A'") \
		_T("     AND hpo_deptid        = 'C8'") \
		_T("     AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     UNION ALL") \
		_T("     SELECT hpo_docno,") \
		_T("       hpo_object_id,") \
		_T("       hpol_qtyissue,") \
		_T("       hpo_reference_id,") \
		_T("       hpol_product_item_id") \
		_T("     FROM hms_ipharmaorder") \
		_T("     LEFT JOIN hms_ipharmaorderline") \
		_T("     ON(hpol_orderid       = hpo_orderid)") \
		_T("     WHERE hpo_orderstatus = 'A'") \
		_T("     AND hpo_deptid        = 'C8'") \
		_T("     AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     ) tbl") \
		_T("   LEFT JOIN hms_pacsorder") \
		_T("   ON(hpc_orderid = hpo_reference_id)") \
		_T("   LEFT JOIN m_product_item") \
		_T("   ON(mpi_product_item_id = hpol_product_item_id)") \
		_T("   LEFT JOIN m_product") \
		_T("   ON(mp_product_id                    = mpi_product_id)") \
		_T("   WHERE hpc_groupid                  IN('B2100') ") \
		_T("   AND mp_producttype                  = 'A9000'") \
		_T("   AND get_uomname(mp_product_uom_id) IN ('Tờ', 'Hộp')") \
		_T("   ) tbl2") \
		_T(" GROUP BY pdid,") \
		_T("   pdname") \
		_T(" ORDER BY pdid"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);
	_debug(_T("query 1 : \r\n %s"), szSQL);
	return szSQL;
}

CString CPACSTotalReport::GetQueryString2()
{
	CString szSQL, szWHERE;

	szSQL.Format(_T(" SELECT categoryid,") \
		_T("   categoryname,") \
		_T("   SUM(quan)                                             AS c1,") \
		_T("   SUM(bhqn)                                             AS c2,") \
		_T("   SUM(bhqd)                                             AS c3,") \
		_T("   SUM(bhqh)                                             AS c4,") \
		_T("   SUM(ban)                                              AS c5,") \
		_T("   SUM(te6t)                                             AS c6,") \
		_T("   SUM(csach)                                            AS c7,") \
		_T("   SUM(dvyt)                                             AS c8,") \
		_T("   SUM(bhk)                                              AS c9,") \
		_T("   SUM(bhtn)                                             AS c10,") \
		_T("   SUM(quan+bhqn+bhqh+bhqd+bhtn+bhk+csach+te6t+dvyt+ban) AS c11") \
		_T(" FROM") \
		_T("   (SELECT hpc_docno,") \
		_T("     (SELECT ss_id FROM sys_sel WHERE ss_code = CAST (hfl_categoryid AS NVARCHAR2(32)) AND ss_vndesc = 'XQuang') AS categoryid,") \
		_T("     (SELECT ss_desc FROM sys_sel WHERE ss_code = CAST (hfl_categoryid AS NVARCHAR2(32)) AND ss_vndesc = 'XQuang') AS categoryname,") \
		_T("     CASE") \
		_T("       WHEN hpc_object        IN(1)") \
		_T("       AND hfl_categoryid NOT IN('11')") \
		_T("       THEN hfl_numimg") \
		_T("       WHEN hpc_object    IN(1)") \
		_T("       AND hfl_categoryid IN('11')") \
		_T("       THEN hpcl_qty") \
		_T("       ELSE 0") \
		_T("     END AS quan,") \
		_T("     CASE") \
		_T("       WHEN hpc_object        IN(11, 13)") \
		_T("       AND hfl_categoryid NOT IN('11')") \
		_T("       THEN hfl_numimg") \
		_T("       WHEN hpc_object    IN(11, 13)") \
		_T("       AND hfl_categoryid IN('11')") \
		_T("       THEN hpcl_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhqn,") \
		_T("     CASE") \
		_T("       WHEN hpc_object        IN(10)") \
		_T("       AND hfl_categoryid NOT IN('11')") \
		_T("       THEN hfl_numimg") \
		_T("       WHEN hpc_object    IN(10)") \
		_T("       AND hfl_categoryid IN('11')") \
		_T("       THEN hpcl_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhqd,") \
		_T("     CASE") \
		_T("       WHEN hpc_object        IN(2)") \
		_T("       AND hfl_categoryid NOT IN('11')") \
		_T("       THEN hfl_numimg") \
		_T("       WHEN hpc_object    IN(2)") \
		_T("       AND hfl_categoryid IN('11')") \
		_T("       THEN hpcl_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhqh,") \
		_T("     CASE") \
		_T("       WHEN hpc_object        IN(8)") \
		_T("       AND hfl_categoryid NOT IN('11')") \
		_T("       THEN hfl_numimg") \
		_T("       WHEN hpc_object    IN(8)") \
		_T("       AND hfl_categoryid IN('11')") \
		_T("       THEN hpcl_qty") \
		_T("       ELSE 0") \
		_T("     END AS ban,") \
		_T("     CASE") \
		_T("       WHEN hpc_object        IN(6, 9)") \
		_T("       AND hfl_categoryid NOT IN('11')") \
		_T("       THEN hfl_numimg") \
		_T("       WHEN hpc_object    IN(6, 9)") \
		_T("       AND hfl_categoryid IN('11')") \
		_T("       THEN hpcl_qty") \
		_T("       ELSE 0") \
		_T("     END AS te6t,") \
		_T("     CASE") \
		_T("       WHEN hpc_object        IN(3)") \
		_T("       AND hfl_categoryid NOT IN('11')") \
		_T("       THEN hfl_numimg") \
		_T("       WHEN hpc_object    IN(3)") \
		_T("       AND hfl_categoryid IN('11')") \
		_T("       THEN hpcl_qty") \
		_T("       ELSE 0") \
		_T("     END AS csach,") \
		_T("     CASE") \
		_T("       WHEN hpc_object        IN(7)") \
		_T("       AND hfl_categoryid NOT IN('11')") \
		_T("       THEN hfl_numimg") \
		_T("       WHEN hpc_object    IN(7)") \
		_T("       AND hfl_categoryid IN('11')") \
		_T("       THEN hpcl_qty") \
		_T("       ELSE 0") \
		_T("     END AS dvyt,") \
		_T("     CASE") \
		_T("       WHEN hpc_object        IN(4, 12)") \
		_T("       AND hfl_categoryid NOT IN('11')") \
		_T("       THEN hfl_numimg") \
		_T("       WHEN hpc_object    IN(4, 12)") \
		_T("       AND hfl_categoryid IN('11')") \
		_T("       THEN hpcl_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhk,") \
		_T("     CASE") \
		_T("       WHEN hpc_object        IN(5)") \
		_T("       AND hfl_categoryid NOT IN('11')") \
		_T("       THEN hfl_numimg") \
		_T("       WHEN hpc_object    IN(5)") \
		_T("       AND hfl_categoryid IN('11')") \
		_T("       THEN hpcl_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhtn") \
		_T("   FROM hms_pacsorder") \
		_T("   LEFT JOIN hms_pacsorderline") \
		_T("   ON ( hpc_orderid = hpcl_orderid)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON ( hfl_feeid = hpcl_itemid)") \
		_T("   WHERE hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND hpcl_status = 'T' ) tbl") \
		_T(" WHERE categoryid IS NOT NULL") \
		_T(" GROUP BY categoryid,") \
		_T("   categoryname") \
		_T(" ORDER BY categoryid"), m_szFromDate, m_szToDate);
	_debug(_T("query 2 : \r\n %s"), szSQL);
	return szSQL;
}

CString CPACSTotalReport::GetQueryString3()
{
	CString szSQL, szWhere;
szSQL.Format(
        _T("SELECT hpcl_proomid AS roomid,")
        _T("       Hms_getroomname(hpc_pdeptid, hpcl_proomid) AS roomname,") \
_T("   SUM(quannoi)                                             AS c1,") \
_T("   SUM(bhqnnoi)                                             AS c3,") \
_T("   SUM(bhqdnoi)                                             AS c5,") \
_T("   SUM(bhqhnoi)                                             AS c7,") \
_T("   SUM(bannoi)                                              AS c9,") \
_T("   SUM(te6tnoi)                                             AS c11,") \
_T("   SUM(csachnoi)                                            AS c13,") \
_T("   SUM(dvytnoi)                                             AS c15,") \
_T("   SUM(bhknoi)                                              AS c17,") \
_T("   SUM(bhtnnoi)                                             AS c19,") \
_T("   SUM(quanngoai)                                             AS c2,") \
_T("   SUM(bhqnngoai)                                             AS c4,") \
_T("   SUM(bhqdngoai)                                             AS c6,") \
_T("   SUM(bhqhngoai)                                             AS c8,") \
_T("   SUM(banngoai)                                              AS c10,") \
_T("   SUM(te6tngoai)                                             AS c12,") \
_T("   SUM(csachngoai)                                            AS c14,") \
_T("   SUM(dvytngoai)                                             AS c16,") \
_T("   SUM(bhkngoai)                                              AS c18,") \
_T("   SUM(bhtnngoai)                                             AS c20,") \
_T("   SUM(quannoi+bhqnnoi+bhqhnoi+bhqdnoi+bhtnnoi+bhknoi+csachnoi+te6tnoi+dvytnoi+bannoi) AS c21,") \
_T("   SUM(quanngoai+bhqnngoai+bhqhngoai+bhqdngoai+bhtnngoai+bhkngoai+csachngoai+te6tngoai+dvytngoai+banngoai) AS c22") \
_T(" FROM   (SELECT     hpcl_proomid,") \
_T("                   hpc_pdeptid,") \
_T("                  CASE WHEN hpc_object IN( 1 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS quannoi,") \
_T("                  CASE WHEN hpc_object IN( 11, 13 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqnnoi,") \
_T("                  CASE WHEN hpc_object IN( 10 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqdnoi,") \
_T("                  CASE WHEN hpc_object IN( 2 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqhnoi,") \
_T("                  CASE WHEN hpc_object IN( 8 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bannoi,") \
_T("                  CASE WHEN hpc_object IN( 6, 9 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS te6tnoi,") \
_T("                  CASE WHEN hpc_object IN( 3 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS csachnoi,") \
_T("                  CASE WHEN hpc_object IN( 7 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS dvytnoi,") \
_T("                  CASE WHEN hpc_object IN( 4, 12 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhknoi,") \
_T("                  CASE WHEN hpc_object IN( 5 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhtnnoi,") \
_T("                  CASE WHEN hpc_object IN( 1 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS quanngoai,") \
_T("                  CASE WHEN hpc_object IN( 11, 13 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqnngoai,") \
_T("                  CASE WHEN hpc_object IN( 10 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqdngoai,") \
_T("                  CASE WHEN hpc_object IN( 2 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqhngoai,") \
_T("                  CASE WHEN hpc_object IN( 8 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS banngoai,") \
_T("                  CASE WHEN hpc_object IN( 6, 9 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS te6tngoai,") \
_T("                  CASE WHEN hpc_object IN( 3 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS csachngoai,") \
_T("                  CASE WHEN hpc_object IN( 7 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS dvytngoai,") \
_T("                  CASE WHEN hpc_object IN( 4, 12 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhkngoai,") \
_T("                  CASE WHEN hpc_object IN( 5 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhtnngoai") \
_T("        FROM       hms_pacsorder") \
_T("        LEFT JOIN  hms_pacsorderline ON ( hpc_orderid = hpcl_orderid )") \
_T("        WHERE       hpcl_status IN ( 'T', 'I' ) AND hpc_pdeptid = 'C8' AND substr(hpcl_itemid, 1, 3) = 'B22' AND hpcl_proomid IS NOT NULL ") \
_T(" AND hpcl_date  BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
_T(") tbl2") \
_T(" GROUP  BY hpc_pdeptid,hpcl_proomid") \
_T(" ORDER  BY hpc_pdeptid,hpcl_proomid "), m_szFromDate, m_szToDate);

		_debug(_T(" query 3 : \r\n  %s"), szSQL);
		return szSQL;
}

CString CPACSTotalReport::GetQueryString4()
{
	CString szSQL, szWhere;

szSQL.Format(
        _T("SELECT hpcl_proomid AS roomid,")
        _T("       Hms_getroomname(hpc_pdeptid, hpcl_proomid) AS roomname,") \
_T("   SUM(quannoi)                                             AS c1,") \
_T("   SUM(bhqnnoi)                                             AS c3,") \
_T("   SUM(bhqdnoi)                                             AS c5,") \
_T("   SUM(bhqhnoi)                                             AS c7,") \
_T("   SUM(bannoi)                                              AS c9,") \
_T("   SUM(te6tnoi)                                             AS c11,") \
_T("   SUM(csachnoi)                                            AS c13,") \
_T("   SUM(dvytnoi)                                             AS c15,") \
_T("   SUM(bhknoi)                                              AS c17,") \
_T("   SUM(bhtnnoi)                                             AS c19,") \
_T("   SUM(quanngoai)                                             AS c2,") \
_T("   SUM(bhqnngoai)                                             AS c4,") \
_T("   SUM(bhqdngoai)                                             AS c6,") \
_T("   SUM(bhqhngoai)                                             AS c8,") \
_T("   SUM(banngoai)                                              AS c10,") \
_T("   SUM(te6tngoai)                                             AS c12,") \
_T("   SUM(csachngoai)                                            AS c14,") \
_T("   SUM(dvytngoai)                                             AS c16,") \
_T("   SUM(bhkngoai)                                              AS c18,") \
_T("   SUM(bhtnngoai)                                             AS c20,") \
_T("   SUM(quannoi+bhqnnoi+bhqhnoi+bhqdnoi+bhtnnoi+bhknoi+csachnoi+te6tnoi+dvytnoi+bannoi) AS c21,") \
_T("   SUM(quanngoai+bhqnngoai+bhqhngoai+bhqdngoai+bhtnngoai+bhkngoai+csachngoai+te6tngoai+dvytngoai+banngoai) AS c22") \
_T(" FROM   (SELECT     hpcl_proomid,") \
_T("                   hpc_pdeptid,") \
_T("                  CASE WHEN hpc_object IN( 1 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS quannoi,") \
_T("                  CASE WHEN hpc_object IN( 11, 13 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqnnoi,") \
_T("                  CASE WHEN hpc_object IN( 10 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqdnoi,") \
_T("                  CASE WHEN hpc_object IN( 2 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqhnoi,") \
_T("                  CASE WHEN hpc_object IN( 8 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bannoi,") \
_T("                  CASE WHEN hpc_object IN( 6, 9 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS te6tnoi,") \
_T("                  CASE WHEN hpc_object IN( 3 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS csachnoi,") \
_T("                  CASE WHEN hpc_object IN( 7 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS dvytnoi,") \
_T("                  CASE WHEN hpc_object IN( 4, 12 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhknoi,") \
_T("                  CASE WHEN hpc_object IN( 5 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhtnnoi,") \
_T("                  CASE WHEN hpc_object IN( 1 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS quanngoai,") \
_T("                  CASE WHEN hpc_object IN( 11, 13 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqnngoai,") \
_T("                  CASE WHEN hpc_object IN( 10 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqdngoai,") \
_T("                  CASE WHEN hpc_object IN( 2 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqhngoai,") \
_T("                  CASE WHEN hpc_object IN( 8 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS banngoai,") \
_T("                  CASE WHEN hpc_object IN( 6, 9 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS te6tngoai,") \
_T("                  CASE WHEN hpc_object IN( 3 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS csachngoai,") \
_T("                  CASE WHEN hpc_object IN( 7 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS dvytngoai,") \
_T("                  CASE WHEN hpc_object IN( 4, 12 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhkngoai,") \
_T("                  CASE WHEN hpc_object IN( 5 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhtnngoai") \
_T("        FROM       hms_pacsorder") \
_T("        LEFT JOIN  hms_pacsorderline ON ( hpc_orderid = hpcl_orderid )") \
_T("        WHERE       hpcl_status IN ( 'T', 'I' ) AND hpc_pdeptid = 'C8' AND substr(hpcl_itemid, 1, 3) = 'B23' AND hpcl_proomid IS NOT NULL ") \
_T(" AND hpcl_date  BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
_T(") tbl2") \
_T(" GROUP  BY hpc_pdeptid,hpcl_proomid") \
_T(" ORDER  BY hpc_pdeptid,hpcl_proomid "), m_szFromDate, m_szToDate);
		_fmsg(_T("query 4 : \r\n %s"), szSQL);
	return szSQL;
}
CString CPACSTotalReport::GetQueryString5()
{
	CString szSQL, szWhere, szRooms;

	for(int i=0;i<m_wndRoom.GetItemCount();i++)
	{
		if(m_wndRoom.GetCheck(i))
		{
			if (!szRooms.IsEmpty())
				szRooms += _T(", ");
			szRooms.AppendFormat(_T("'%s'"), m_wndRoom.GetItemText(i, 0));
		}

	}
	if(!szRooms.IsEmpty())
	{
		szWhere.AppendFormat(_T(" WHERE hrl_id IN(%s) "),szRooms);
	}

	szSQL.Format(_T(" SELECT groupid,") \
		_T("   hrl_id   AS roomid,") \
		_T("   hrl_name AS roomname,") \
		_T("   docno,") \
		_T("   patientname,") \
		_T("   doctor,") \
		_T("   approvedate,") \
		_T("   status") \
		_T(" FROM") \
		_T("   (SELECT hpo_roomid,") \
		_T("     hpo_deptid,") \
		_T("     hpo_docno                  AS docno,") \
		_T("     get_patientname(hpo_docno) AS patientname,") \
		_T("     hpo_doctor                 AS doctor,") \
		_T("     hpo_approvedate            AS approvedate,") \
		_T("     hpo_orderstatus            AS status,") \
		_T("     hpc_groupid                AS groupid") \
		_T("   FROM hms_pacsorder") \
		_T("   LEFT JOIN hms_pacsorderline") \
		_T("   ON ( hpc_orderid = hpcl_orderid)") \
		_T("   LEFT JOIN") \
		_T("     (SELECT hpo_docno,") \
		_T("       hpo_roomid,") \
		_T("       hpo_deptid,") \
		_T("       hpo_reference_id,") \
		_T("       hpo_refitem_id,") \
		_T("       hpo_doctor,") \
		_T("       hpo_approvedate,") \
		_T("       hpo_orderstatus,") \
		_T("       hpo_storage_id") \
		_T("     FROM hms_pharmaorder") \
		_T("     WHERE hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     AND hpo_deptid IN('C8','TYC')") \
		_T("     UNION ALL") \
		_T("     SELECT hpo_docno,") \
		_T("       hpo_roomid,") \
		_T("       hpo_deptid,") \
		_T("       hpo_reference_id,") \
		_T("       hpo_refitem_id,") \
		_T("       hpo_doctor,") \
		_T("       hpo_approvedate,") \
		_T("       hpo_orderstatus,") \
		_T("       hpo_storage_id") \
		_T("     FROM hms_ipharmaorder") \
		_T("     WHERE hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     AND hpo_deptid IN('C8','TYC')") \
		_T("     ) tbl") \
		_T("   ON( hpo_docno       =hpc_docno") \
		_T("   AND hpo_reference_id=hpc_orderid") \
		_T("   AND hpo_refitem_id  =hpcl_itemid") \
		_T("   AND hpo_storage_id  IN(140,99))") \
		_T("   WHERE hpcl_status IN ('T', 'I')") \
		_T("   AND hpc_groupid    IN('B2200', 'B2300')") \
		_T("   AND hpo_roomid     IS NOT NULL") \
		_T("   ) tbl2") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON(hrl_id      = hpo_roomid") \
		_T(" AND hrl_deptid = hpo_deptid) %s") \
		_T(" ORDER BY groupid,") \
		_T("   hrl_id,") \
		_T("   approvedate,") \
		_T("   docno"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhere);
	_debug(_T("query 5 : \r\n %s"), szSQL);
	return szSQL;
}
CString CPACSTotalReport::GetQueryString4old()
{
	CString szSQL, szWhere;

szSQL.Format(
        _T("SELECT hpo_roomid AS roomid,")
        _T("       Hms_getroomname(hpo_deptid, hpo_roomid) AS roomname,") \
_T("   SUM(quannoi)                                             AS c1,") \
_T("   SUM(bhqnnoi)                                             AS c3,") \
_T("   SUM(bhqdnoi)                                             AS c5,") \
_T("   SUM(bhqhnoi)                                             AS c7,") \
_T("   SUM(bannoi)                                              AS c9,") \
_T("   SUM(te6tnoi)                                             AS c11,") \
_T("   SUM(csachnoi)                                            AS c13,") \
_T("   SUM(dvytnoi)                                             AS c15,") \
_T("   SUM(bhknoi)                                              AS c17,") \
_T("   SUM(bhtnnoi)                                             AS c19,") \
_T("   SUM(quanngoai)                                             AS c2,") \
_T("   SUM(bhqnngoai)                                             AS c4,") \
_T("   SUM(bhqdngoai)                                             AS c6,") \
_T("   SUM(bhqhngoai)                                             AS c8,") \
_T("   SUM(banngoai)                                              AS c10,") \
_T("   SUM(te6tngoai)                                             AS c12,") \
_T("   SUM(csachngoai)                                            AS c14,") \
_T("   SUM(dvytngoai)                                             AS c16,") \
_T("   SUM(bhkngoai)                                              AS c18,") \
_T("   SUM(bhtnngoai)                                             AS c20,") \
_T("   SUM(quannoi+bhqnnoi+bhqhnoi+bhqdnoi+bhtnnoi+bhknoi+csachnoi+te6tnoi+dvytnoi+bannoi) AS c21,") \
_T("   SUM(quanngoai+bhqnngoai+bhqhngoai+bhqdngoai+bhtnngoai+bhkngoai+csachngoai+te6tngoai+dvytngoai+banngoai) AS c22") \
_T(" FROM   (SELECT     hpo_roomid,") \
_T("                   hpo_deptid,") \
_T("                  CASE WHEN hpc_object IN( 1 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS quannoi,") \
_T("                  CASE WHEN hpc_object IN( 11, 13 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqnnoi,") \
_T("                  CASE WHEN hpc_object IN( 10 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqdnoi,") \
_T("                  CASE WHEN hpc_object IN( 2 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqhnoi,") \
_T("                  CASE WHEN hpc_object IN( 8 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bannoi,") \
_T("                  CASE WHEN hpc_object IN( 6, 9 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS te6tnoi,") \
_T("                  CASE WHEN hpc_object IN( 3 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS csachnoi,") \
_T("                  CASE WHEN hpc_object IN( 7 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS dvytnoi,") \
_T("                  CASE WHEN hpc_object IN( 4, 12 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhknoi,") \
_T("                  CASE WHEN hpc_object IN( 5 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhtnnoi,") \
_T("                  CASE WHEN hpc_object IN( 1 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS quanngoai,") \
_T("                  CASE WHEN hpc_object IN( 11, 13 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqnngoai,") \
_T("                  CASE WHEN hpc_object IN( 10 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqdngoai,") \
_T("                  CASE WHEN hpc_object IN( 2 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqhngoai,") \
_T("                  CASE WHEN hpc_object IN( 8 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS banngoai,") \
_T("                  CASE WHEN hpc_object IN( 6, 9 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS te6tngoai,") \
_T("                  CASE WHEN hpc_object IN( 3 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS csachngoai,") \
_T("                  CASE WHEN hpc_object IN( 7 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS dvytngoai,") \
_T("                  CASE WHEN hpc_object IN( 4, 12 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhkngoai,") \
_T("                  CASE WHEN hpc_object IN( 5 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhtnngoai") \
_T("        FROM       hms_pacsorder") \
_T("        LEFT JOIN  hms_pacsorderline ON ( hpc_orderid = hpcl_orderid )") \
_T("        INNER JOIN (SELECT hpo_docno,") \
_T("                           hpo_roomid,") \
_T("                           hpo_deptid,") \
_T("                           hpo_reference_id,") \
_T("                           hpo_refitem_id") \
_T("                    FROM   hms_pharmaorder") \
_T("                    WHERE  hpo_approvedate BETWEEN To_timestamp('%s',") \
_T("                                                   'YYYY-MM-DD HH24:MI:SS')") \
_T("                                                   AND") \
_T("                                                          To_timestamp('%s',") \
_T("                                                          'YYYY-MM-DD HH24:MI:SS') AND") \
_T("                           hpo_deptid  in ( 'C8','TYC') and hpo_storage_id in (140,99) ") \
_T("                    UNION ALL") \
_T("                    SELECT hpo_docno,") \
_T("                           hpo_roomid,") \
_T("                           hpo_deptid,") \
_T("                           hpo_reference_id,") \
_T("                           hpo_refitem_id") \
_T("                    FROM   hms_ipharmaorder") \
_T("                    WHERE  hpo_approvedate BETWEEN To_timestamp('%s',") \
_T("                                                   'YYYY-MM-DD HH24:MI:SS')") \
_T("                                                   AND") \
_T("                                                          To_timestamp('%s',") \
_T("                                                          'YYYY-MM-DD HH24:MI:SS') AND") \
_T("                           hpo_deptid  in ( 'C8','TYC') and hpo_storage_id in (140,99) ) tbl ON( hpo_docno = hpc_docno AND") \
_T("                                                      hpo_reference_id = hpc_orderid AND") \
_T("                                                                        Nvl(") \
_T("                                                      hpo_refitem_id, 'XX') =") \
_T("                                                      Nvl(hpcl_itemid, 'YY') )") \
_T("        WHERE      hpcl_status IN ('T', 'I') AND hpc_groupid IN( 'B2300' ) AND hpo_roomid IS NOT NULL) tbl2") \
_T(" GROUP  BY hpo_deptid,hpo_roomid") \
_T(" ORDER  BY hpo_deptid,hpo_roomid "), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);

	return szSQL;
}

void CPACSTotalReport::OnExport3(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0; 
	double nTotal[23];
	for(int i = 1; i < 23; i++)
	{
		nTotal[i] = 0;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 12);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 8);
	xls.SetColumnWidth(19, 8);
	xls.SetColumnWidth(20, 8);
	xls.SetColumnWidth(21, 8);
	xls.SetColumnWidth(22, 8);

	xls.SetCellText(0, 0, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(7, 1, tmpStr, FMT_TEXT | FMT_CENTER, true, 11, 0);
	xls.SetCellText(0, 3, _T("CHỤP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 3, _T("QUÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 3, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 3, _T("BHQD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 3, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 0, _T("SỐ LIỆU BÁO CÁO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);
	xls.SetCellText(9, 3, _T("BẠN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 3, _T("TRẺ EM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 3, _T("C SÁCH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 3, _T("DỊCH VỤ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(16, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 3, _T("BH KHÁC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(18, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, 3, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(20, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 3, _T("CỘNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 4, _T("BN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(22, 4, _T("LẦN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 3);
	xls.SetMerge(1, 1, 0, 3);
	xls.SetMerge(3, 4, 0, 0);
	xls.SetMerge(3, 3, 1, 2);
	xls.SetMerge(3, 3, 3, 4);
	xls.SetMerge(3, 3, 5, 6);
	xls.SetMerge(0, 0, 7, 22);
	xls.SetMerge(1, 1, 7, 22);
	xls.SetMerge(3, 3, 7, 8);
	xls.SetMerge(3, 3, 9, 10);
	xls.SetMerge(3, 3, 11, 12);
	xls.SetMerge(3, 3, 13, 14);
	xls.SetMerge(3, 3, 15, 16);
	xls.SetMerge(3, 3, 17, 18);
	xls.SetMerge(3, 3, 19, 20);
	xls.SetMerge(3, 3, 21, 22);

	szSQL = GetQueryString();
	//_msg(_T("0: %s"), szSQL);
	rs.ExecSQL(szSQL);

	nRow = 5;
	nCol = 0;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("dept"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		for(int i = 1; i < 23; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += ToDouble(tmpStr);
			xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT, true);
	for(int i = 1; i < 23; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1, true);
	}

	nRow++;
	xls.SetCellText(0, nRow, _T("PHIM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, nRow, _T("QUÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, nRow, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, nRow, _T("BHQD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, nRow, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, nRow, _T("BẠN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, nRow, _T("TRẺ EM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, nRow, _T("C SÁCH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, nRow, _T("DỊCH VỤ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, nRow, _T("BH KHÁC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, nRow, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, nRow, _T("CỘNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(nRow, nRow, 1, 2);
	xls.SetMerge(nRow, nRow, 3, 4);
	xls.SetMerge(nRow, nRow, 5, 6);
	xls.SetMerge(nRow, nRow, 7, 8);
	xls.SetMerge(nRow, nRow, 9, 10);
	xls.SetMerge(nRow, nRow, 11, 12);
	xls.SetMerge(nRow, nRow, 13, 14);
	xls.SetMerge(nRow, nRow, 15, 16);
	xls.SetMerge(nRow, nRow, 17, 18);
	xls.SetMerge(nRow, nRow, 19, 20);
	xls.SetMerge(nRow, nRow, 21, 22);

	for(int i = 1; i < 23; i++)
	{
		nTotal[i] = 0;
	}
	nRow++;
	szSQL = GetQueryString1();
//	_msg(_T("1: %s"), szSQL);
	rs.ExecSQL(szSQL);
	nCol = 0;

	while(!rs.IsEOF())
	{
		xls.SetMerge(nRow, nRow, 1, 2);
		xls.SetMerge(nRow, nRow, 3, 4);
		xls.SetMerge(nRow, nRow, 5, 6);
		xls.SetMerge(nRow, nRow, 7, 8);
		xls.SetMerge(nRow, nRow, 9, 10);
		xls.SetMerge(nRow, nRow, 11, 12);
		xls.SetMerge(nRow, nRow, 13, 14);
		xls.SetMerge(nRow, nRow, 15, 16);
		xls.SetMerge(nRow, nRow, 17, 18);
		xls.SetMerge(nRow, nRow, 19, 20);
		xls.SetMerge(nRow, nRow, 21, 22);

		rs.GetValue(_T("pdname"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		int j = 0;
		for(int i = 0; i < 12; i++)
		{
			szTemp.Format(_T("c%d"), i+1);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i+1] += ToDouble(tmpStr);
			j = i+1;
			xls.SetCellText(nCol+i+j, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT, true);
	xls.SetMerge(nRow, nRow, 1, 2);
	xls.SetMerge(nRow, nRow, 3, 4);
	xls.SetMerge(nRow, nRow, 5, 6);
	xls.SetMerge(nRow, nRow, 7, 8);
	xls.SetMerge(nRow, nRow, 9, 10);
	xls.SetMerge(nRow, nRow, 11, 12);
	xls.SetMerge(nRow, nRow, 13, 14);
	xls.SetMerge(nRow, nRow, 15, 16);
	xls.SetMerge(nRow, nRow, 17, 18);
	xls.SetMerge(nRow, nRow, 19, 20);
	xls.SetMerge(nRow, nRow, 21, 22);
	int j = 0;
	for(int i = 0; i < 12; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i+1]);
		j = i+1;
		xls.SetCellText(nCol+i+j, nRow, tmpStr, FMT_NUMBER1, true);
	}

	for(int i = 1; i < 23; i++)
	{
		nTotal[i] = 0;
	}
	nRow++;
	szSQL = GetQueryString2();
//	_msg(_T("2: %s"), szSQL);
	rs.ExecSQL(szSQL);
	nCol = 0;

	while(!rs.IsEOF())
	{
		xls.SetMerge(nRow, nRow, 1, 2);
		xls.SetMerge(nRow, nRow, 3, 4);
		xls.SetMerge(nRow, nRow, 5, 6);
		xls.SetMerge(nRow, nRow, 7, 8);
		xls.SetMerge(nRow, nRow, 9, 10);
		xls.SetMerge(nRow, nRow, 11, 12);
		xls.SetMerge(nRow, nRow, 13, 14);
		xls.SetMerge(nRow, nRow, 15, 16);
		xls.SetMerge(nRow, nRow, 17, 18);
		xls.SetMerge(nRow, nRow, 19, 20);
		xls.SetMerge(nRow, nRow, 21, 22);

		rs.GetValue(_T("categoryname"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		j = 0;
		for(int i = 0; i < 12; i++)
		{
			szTemp.Format(_T("c%d"), i+1);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i+1] += ToDouble(tmpStr);
			j = i+1;
			xls.SetCellText(nCol+i+j, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT, true);
	xls.SetMerge(nRow, nRow, 1, 2);
	xls.SetMerge(nRow, nRow, 3, 4);
	xls.SetMerge(nRow, nRow, 5, 6);
	xls.SetMerge(nRow, nRow, 7, 8);
	xls.SetMerge(nRow, nRow, 9, 10);
	xls.SetMerge(nRow, nRow, 11, 12);
	xls.SetMerge(nRow, nRow, 13, 14);
	xls.SetMerge(nRow, nRow, 15, 16);
	xls.SetMerge(nRow, nRow, 17, 18);
	xls.SetMerge(nRow, nRow, 19, 20);
	xls.SetMerge(nRow, nRow, 21, 22);
	j = 0;
	for(int i = 0; i < 12; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i+1]);
		j = i+1;
		xls.SetCellText(nCol+i+j, nRow, tmpStr, FMT_NUMBER1, true);
	}

	nRow++;	
	xls.SetCellText(0, nRow, _T("XN KHÁC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, nRow, _T("QUÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, nRow, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, nRow, _T("BHQD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, nRow, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, nRow, _T("BẠN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, nRow, _T("TRẺ EM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, nRow, _T("C SÁCH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, nRow, _T("DỊCH VỤ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(16, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, nRow, _T("BH KHÁC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(18, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, nRow, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(20, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, nRow, _T("CỘNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, nRow+1, _T("NỘI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(22, nRow+1, _T("NGOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(nRow, nRow+1, 0, 0);
	xls.SetMerge(nRow, nRow, 1, 2);
	xls.SetMerge(nRow, nRow, 3, 4);
	xls.SetMerge(nRow, nRow, 5, 6);
	xls.SetMerge(nRow, nRow, 7, 8);
	xls.SetMerge(nRow, nRow, 9, 10);
	xls.SetMerge(nRow, nRow, 11, 12);
	xls.SetMerge(nRow, nRow, 13, 14);
	xls.SetMerge(nRow, nRow, 15, 16);
	xls.SetMerge(nRow, nRow, 17, 18);
	xls.SetMerge(nRow, nRow, 19, 20);
	xls.SetMerge(nRow, nRow, 21, 22);

	for(int i = 1; i < 23; i++)
	{
		nTotal[i] = 0;
	}
	nRow = nRow +1;
	nRow++;
	szSQL = GetQueryString3();
//	_msg(_T("3: %s"), szSQL);
	rs.ExecSQL(szSQL);

	nCol = 0;

	while(!rs.IsEOF())
	{

		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		for(int i = 1; i < 23; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += ToDouble(tmpStr);
			xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT, true);
	for(int i = 1; i < 23; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1, true);
	}

	for(int i = 1; i < 23; i++)
	{
		nTotal[i] = 0;
	}
	nRow++;
	szSQL = GetQueryString4();
//	_msg(_T("4:%s"), szSQL);
	rs.ExecSQL(szSQL);

	nCol = 0;

	while(!rs.IsEOF())
	{

		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
		for(int i = 1; i < 23; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			nTotal[i] += ToDouble(tmpStr);
			xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT, true);
	for(int i = 1; i < 23; i++)
	{ 		
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Solieubaocao.xls"));
} 

CString CPACSTotalReport::GetQueryString3old()
{
	CString szSQL, szWhere;
szSQL.Format(_T("SELECT hpo_roomid AS roomid,") \
_T("       Hms_getroomname(hpo_deptid, hpo_roomid) AS roomname,") \
_T("   SUM(quannoi)                                             AS c1,") \
_T("   SUM(bhqnnoi)                                             AS c3,") \
_T("   SUM(bhqdnoi)                                             AS c5,") \
_T("   SUM(bhqhnoi)                                             AS c7,") \
_T("   SUM(bannoi)                                              AS c9,") \
_T("   SUM(te6tnoi)                                             AS c11,") \
_T("   SUM(csachnoi)                                            AS c13,") \
_T("   SUM(dvytnoi)                                             AS c15,") \
_T("   SUM(bhknoi)                                              AS c17,") \
_T("   SUM(bhtnnoi)                                             AS c19,") \
_T("   SUM(quanngoai)                                             AS c2,") \
_T("   SUM(bhqnngoai)                                             AS c4,") \
_T("   SUM(bhqdngoai)                                             AS c6,") \
_T("   SUM(bhqhngoai)                                             AS c8,") \
_T("   SUM(banngoai)                                              AS c10,") \
_T("   SUM(te6tngoai)                                             AS c12,") \
_T("   SUM(csachngoai)                                            AS c14,") \
_T("   SUM(dvytngoai)                                             AS c16,") \
_T("   SUM(bhkngoai)                                              AS c18,") \
_T("   SUM(bhtnngoai)                                             AS c20,") \
_T("   SUM(quannoi+bhqnnoi+bhqhnoi+bhqdnoi+bhtnnoi+bhknoi+csachnoi+te6tnoi+dvytnoi+bannoi) AS c21,") \
_T("   SUM(quanngoai+bhqnngoai+bhqhngoai+bhqdngoai+bhtnngoai+bhkngoai+csachngoai+te6tngoai+dvytngoai+banngoai) AS c22") \
_T(" FROM   (SELECT    hpo_roomid,") \
_T("                  hpo_deptid,") \
_T("                  CASE WHEN hpc_object IN( 1 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS quannoi,") \
_T("                  CASE WHEN hpc_object IN( 11, 13 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqnnoi,") \
_T("                  CASE WHEN hpc_object IN( 10 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqdnoi,") \
_T("                  CASE WHEN hpc_object IN( 2 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqhnoi,") \
_T("                  CASE WHEN hpc_object IN( 8 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bannoi,") \
_T("                  CASE WHEN hpc_object IN( 6, 9 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS te6tnoi,") \
_T("                  CASE WHEN hpc_object IN( 3 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS csachnoi,") \
_T("                  CASE WHEN hpc_object IN( 7 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS dvytnoi,") \
_T("                  CASE WHEN hpc_object IN( 4, 12 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhknoi,") \
_T("                  CASE WHEN hpc_object IN( 5 ) AND hpc_deptid NOT IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhtnnoi,") \
_T("                  CASE WHEN hpc_object IN( 1 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS quanngoai,") \
_T("                  CASE WHEN hpc_object IN( 11, 13 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqnngoai,") \
_T("                  CASE WHEN hpc_object IN( 10 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqdngoai,") \
_T("                  CASE WHEN hpc_object IN( 2 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhqhngoai,") \
_T("                  CASE WHEN hpc_object IN( 8 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS banngoai,") \
_T("                  CASE WHEN hpc_object IN( 6, 9 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS te6tngoai,") \
_T("                  CASE WHEN hpc_object IN( 3 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS csachngoai,") \
_T("                  CASE WHEN hpc_object IN( 7 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS dvytngoai,") \
_T("                  CASE WHEN hpc_object IN( 4, 12 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhkngoai,") \
_T("                  CASE WHEN hpc_object IN( 5 ) AND hpc_deptid IN( 'C1.1', 'C1.2', 'C1.3', 'TYC') THEN") \
_T("                       hpcl_qty") \
_T("                  ELSE 0") \
_T("                  END AS bhtnngoai") \
_T("        FROM      hms_pacsorder") \
_T("        LEFT JOIN hms_pacsorderline ON ( hpc_orderid = hpcl_orderid )") \
_T("        LEFT JOIN (SELECT hpo_docno,") \
_T("                          hpo_roomid,") \
_T("                          hpo_deptid,") \
_T("                          hpo_reference_id,") \
_T("                          hpo_refitem_id") \
_T("                   FROM   hms_pharmaorder") \
_T("                   WHERE  hpo_approvedate BETWEEN To_timestamp('%s',") \
_T("                                                  'YYYY-MM-DD HH24:MI:SS')") \
_T("                                                  AND") \
_T("                                                         To_timestamp('%s',") \
_T("                                                         'YYYY-MM-DD HH24:MI:SS') AND") \
_T("                          hpo_deptid = 'C8'") \
_T("                   UNION ALL") \
_T("                   SELECT hpo_docno,") \
_T("                          hpo_roomid,") \
_T("                          hpo_deptid,") \
_T("                          hpo_reference_id,") \
_T("                          hpo_refitem_id") \
_T("                   FROM   hms_ipharmaorder") \
_T("                   WHERE  hpo_approvedate BETWEEN To_timestamp('%s',") \
_T("                                                  'YYYY-MM-DD HH24:MI:SS')") \
_T("                                                  AND") \
_T("                                                         To_timestamp('%s',") \
_T("                                                         'YYYY-MM-DD HH24:MI:SS') AND") \
_T("                          hpo_deptid = 'C8') tbl ON( hpo_docno = hpc_docno AND") \
_T("                                                     hpo_reference_id = hpc_orderid AND") \
_T("                                                                      Nvl(") \
_T("                                                     hpo_refitem_id, 'XX') =") \
_T("                                                     Nvl(hpcl_itemid, 'YY') )") \
_T("        WHERE     hpcl_status IN ('T', 'I') AND hpc_groupid IN( 'B2200' ) AND hpo_roomid IS NOT NULL) tbl2") \
_T(" GROUP  BY hpo_roomid,hpo_deptid") \
_T(" ORDER  BY hpo_deptid,hpo_roomid "), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);

		_debug(_T(" query 3 : \r\n  %s"), szSQL);
		return szSQL;
}