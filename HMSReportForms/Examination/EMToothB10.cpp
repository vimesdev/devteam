#include "stdafx.h"
#include "EMToothB10.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMToothB10 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMToothB10* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMToothB10 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMToothB10 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMToothB10 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMToothB10 *)pWnd)->OnToDateCheckValue();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CEMToothB10*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CEMToothB10*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CEMToothB10*)pWnd)->OnOutPatientSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMToothB10 *pVw = (CEMToothB10 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMToothB10 *pVw = (CEMToothB10 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CEMToothB10 *pVw = (CEMToothB10 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddEMToothB10Fnc(CWnd *pWnd){
	 return ((CEMToothB10*)pWnd)->OnAddEMToothB10();
} 
static int _OnEditEMToothB10Fnc(CWnd *pWnd){
	 return ((CEMToothB10*)pWnd)->OnEditEMToothB10();
} 
static int _OnDeleteEMToothB10Fnc(CWnd *pWnd){
	 return ((CEMToothB10*)pWnd)->OnDeleteEMToothB10();
} 
static int _OnSaveEMToothB10Fnc(CWnd *pWnd){
	 return ((CEMToothB10*)pWnd)->OnSaveEMToothB10();
} 
static int _OnCancelEMToothB10Fnc(CWnd *pWnd){
	 return ((CEMToothB10*)pWnd)->OnCancelEMToothB10();
} 
CEMToothB10::CEMToothB10(CWnd *pParent)
{
	m_nDlgWidth = 420;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CEMToothB10::~CEMToothB10()
{
}
void CEMToothB10::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 225, 30, 305, 55);
	m_wndReportPeriod.Create(this,310, 30, 430, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 430, 85);
	m_wndAll.Create(this, _T("All"), 10, 95, 90, 120);
	m_wndInPatient.Create(this, _T("InPatient"), 180, 95, 260, 120);
	m_wndOutPatient.Create(this, _T("OutPatient"), 95, 95, 175, 120);
	m_wndExport.Create(this, _T("&Export"), 350, 95, 430, 120);
	//m_wndPrint.Create(this, _T("&Print"), 250, 95, 330, 120);

}
void CEMToothB10::OnInitializeComponents(){
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
void CEMToothB10::OnSetWindowEvents(){
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
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	SetMode(VM_EDIT);
}
void CEMToothB10::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
}
void CEMToothB10::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CEMToothB10::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMToothB10::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CEMToothB10::SetMode(int nMode){
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
/*void CEMToothB10::OnYearChange(){
	
} */
/*void CEMToothB10::OnYearSetfocus(){
	
} */
/*void CEMToothB10::OnYearKillfocus(){
	
} */
int CEMToothB10::OnYearCheckValue(){
	return 0;
} 
void CEMToothB10::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMToothB10::OnReportPeriodSelendok(){
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
/*void CEMToothB10::OnReportPeriodSetfocus(){
	
}*/
/*void CEMToothB10::OnReportPeriodKillfocus(){
	
}*/
long CEMToothB10::OnReportPeriodLoadData()
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
/*void CEMToothB10::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMToothB10::OnFromDateChange(){
	
} */
/*void CEMToothB10::OnFromDateSetfocus(){
	
} */
/*void CEMToothB10::OnFromDateKillfocus(){
	
} */
int CEMToothB10::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMToothB10::OnToDateChange(){
	
} */
/*void CEMToothB10::OnToDateSetfocus(){
	
} */
/*void CEMToothB10::OnToDateKillfocus(){
	
} */
int CEMToothB10::OnToDateCheckValue(){
	return 0;
}
void CEMToothB10::OnAllSelect(){

}
void CEMToothB10::OnInPatientSelect(){

}
void CEMToothB10::OnOutPatientSelect(){

}
void CEMToothB10::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
} 
void CEMToothB10::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;	
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Export mẫu chi tiết"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export mẫu tổng hợp"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect_V2();
			break;
		case 2:
			OnExportSelect_V1();
			break;		
	}	
} 
void CEMToothB10::OnExportSelect_V1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetLandscape(true);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 20);
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

	xls.SetCellText(0, 0, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("KHO\x41 R\x102NG (\x42\x31\x30)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O KHO\x41 R\x102NG \x42\x31\x30"), FMT_TEXT | FMT_CENTER , true, 14);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(1, 4, _T("N\x1ED8I \x44UNG"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(2, 4, _T("QU\xC2N"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(3, 4, _T("\x42HQN"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(4, 4, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(5, 4, _T("\x42HH"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(6, 4, _T("\x42\x1EA0N"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(7, 4, _T("T\x45\x36T"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(8, 4, _T("\x43S"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(9, 4, _T("\x44V"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(10, 4, _T("\x42HK"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(11, 4, _T("\x42HTN"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(12, 4, _T("T\x1ED4NG"), FMT_TEXT | FMT_CENTER , true, 11);

	xls.SetMerge(0, 0, 0, 1);
	xls.SetMerge(1, 1, 0, 1);
	xls.SetMerge(2, 2, 0, 12);
	xls.SetMerge(3, 3, 0, 12);

	
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);

	nRow = 5;
	nCol = 0;
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("1"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("S\x1ED1 \x42N v\xE0o"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("line"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("linename"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("quan"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqn"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqd"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("bhh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("ban"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("te6t"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("cs"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dv"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhk"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhtn"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("total"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	szSQL = GetQueryString2();
	
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("2"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("S\x1ED1 l\x1EA7n \x110T"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("line"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("linename"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("quan"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqn"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqd"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ban"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("te6t"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("cs"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dv"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhk"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhtn"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("total"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);
	
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("3"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("\x110T \x62\x1EA3o t\x1ED3n"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("line"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("linename"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("quan"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqn"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqd"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ban"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("te6t"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("cs"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dv"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhk"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhtn"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("total"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	szSQL = GetQueryString4();
	rs.ExecSQL(szSQL);
	
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("4"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("H\xE0m gi\x1EA3"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("line"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("linename"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("quan"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqn"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqd"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ban"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("te6t"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("cs"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dv"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhk"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhtn"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("total"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	szSQL = GetQueryString5();
	rs.ExecSQL(szSQL);
	
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("5"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("Nh\x1ED5 r\x103ng"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("line"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("linename"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("quan"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqn"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqd"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ban"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("te6t"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("cs"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dv"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhk"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhtn"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("total"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	szSQL = GetQueryString6();
	rs.ExecSQL(szSQL);
	
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("6"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("\x42N \x110T kh\x1ECFi"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("line"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("linename"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("quan"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqn"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqd"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ban"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("te6t"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("cs"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dv"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhk"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhtn"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("total"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	int nIdx = 7;
	szSQL = GetQueryString7();
	
	rs.ExecSQL(szSQL);
	CString szNewGroup,szOldGroup;
	int nTotal[12];
	for(int i = 0; i < 12; i++)
		nTotal[i] = 0;

	while(!rs.IsEOF()){
		
		rs.GetValue(_T("ptype"), szNewGroup);
		if (szNewGroup != szOldGroup && !szOldGroup.IsEmpty())
		{
			if(nTotal[12] > 0)
				{
					xls.SetCellText(0, nRow, int2str(nIdx++), FMT_NUMBER1);
					xls.SetCellText(1, nRow, _T("\x43\x1ED9ng"), FMT_TEXT);
					for(int i = 2; i < 13; i++)
					{
						xls.SetCellText(i, nRow, int2str(nTotal[i]), FMT_NUMBER1);
						nTotal[i] = 0;
					}
					nRow++;
				}

			szOldGroup = szNewGroup;
		}

		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_NUMBER1);
		rs.GetValue(_T("linename"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("quan"), tmpStr);
		nTotal[2] += str2int(tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqn"), tmpStr);
		nTotal[3] += str2int(tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhqd"), tmpStr);
		nTotal[4] += str2int(tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhh"), tmpStr);
		nTotal[5] += str2int(tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("ban"), tmpStr);
		nTotal[6] += str2int(tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("te6t"), tmpStr);
		nTotal[7] += str2int(tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("cs"), tmpStr);
		nTotal[8] += str2int(tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("dv"), tmpStr);
		nTotal[9] += str2int(tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhk"), tmpStr);
		nTotal[10] += str2int(tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("bhtn"), tmpStr);
		nTotal[11] += str2int(tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("total"), tmpStr);
		nTotal[12] += str2int(tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(0, nRow, int2str(nIdx++), FMT_NUMBER1);
	xls.SetCellText(1, nRow, _T("\x43\x1ED9ng"), FMT_TEXT);
	for(int i = 2; i < 12; i++)
	{
		xls.SetCellText(i, nRow, int2str(nTotal[i]), FMT_NUMBER1);
		nTotal[i] = 0;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao khoa rang B10.xls"));
} 

void CEMToothB10::OnExportSelect_V2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;	

	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[90], nGroupTotal[90];
	for(int i = 0; i < 90; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\DANHSACHBENHNHAN_B10_THUCHIEN_CHITIET.xls"))) AfxMessageBox(_T("Chưa có Files ở đường dẫn Exports\\Template\\DANHSACHBENHNHAN_B10_THUCHIEN_CHITIET.xls"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString_detail();	
	rs.ExecSQL(szSQL);

	
	nRow = 9;
	nCol = 0;

	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("linename"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);	
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);		
		
		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("objectname"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenphauthuat"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("quan"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("bhh"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("bhqd"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("ban"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("te6t"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("cs"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("dv"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("bhk"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("bhtn"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("bhqn"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("total"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_INTEGER);	
			
		
		nRow++;
		rs.MoveNext();
	}	
	
	xls.Save(_T("Exports\\Template\\DANHSACHBENHNHAN_B10_THUCHIEN_CHITIET2.xls"));
}

void CEMToothB10::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMToothB10::OnAddEMToothB10(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CEMToothB10::OnEditEMToothB10(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMToothB10::OnDeleteEMToothB10(){
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
 		OnCancelEMToothB10(); 
 	}
	return 0;
}
int CEMToothB10::OnSaveEMToothB10(){
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
 		//OnEMToothB10ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CEMToothB10::OnCancelEMToothB10(){
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
int CEMToothB10::OnEMToothB10ListLoadData()
{
	return 0;
}
CString CEMToothB10::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_nAll == 0)
		szWhere.Format(_T(""));
	if(m_nOutPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));
	if(m_nInPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));

	szSQL.Format(_T(" SELECT") \
		_T(" 1 AS line,") \
		_T(" 'Số BN vào' AS linename,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(1, 13)") \
		_T("     THEN hdt_new") \
		_T("     ELSE 0") \
		_T("   END) AS quan,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2)") \
		_T("     THEN hdt_new") \
		_T("     ELSE 0") \
		_T("   END) AS bhh,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(10)") \
		_T("     THEN hdt_new") \
		_T("     ELSE 0") \
		_T("   END) AS bhqd,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(8)") \
		_T("     THEN hdt_new") \
		_T("     ELSE 0") \
		_T("   END) AS ban,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(9)") \
		_T("     THEN hdt_new") \
		_T("     ELSE 0") \
		_T("   END) AS te6t,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(3)") \
		_T("     THEN hdt_new") \
		_T("     ELSE 0") \
		_T("   END) AS cs,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(7)") \
		_T("     THEN hdt_new") \
		_T("     ELSE 0") \
		_T("   END) AS dv,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(4, 12)") \
		_T("     THEN hdt_new") \
		_T("     ELSE 0") \
		_T("   END) AS bhk,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(5)") \
		_T("     THEN hdt_new") \
		_T("     ELSE 0") \
		_T("   END) AS bhtn,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(11)") \
		_T("     THEN hdt_new") \
		_T("     ELSE 0") \
		_T("   END)         AS bhqn,") \
		_T("   SUM(hdt_new) AS total") \
		_T(" FROM hms_dentaltreatment") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hdt_docno = hd_docno)") \
		_T(" WHERE hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}
CString CEMToothB10::GetQueryString2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_nAll == 0)
		szWhere.Format(_T(""));
	if(m_nOutPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));
	if(m_nInPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));

	szSQL.Format(_T(" SELECT") \
		_T(" 2 AS line,") \
		_T(" 'Số lần ĐT' AS linename,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(1, 13)") \
		_T("     THEN hdt_time") \
		_T("     ELSE 0") \
		_T("   END) AS quan,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2)") \
		_T("     THEN hdt_time") \
		_T("     ELSE 0") \
		_T("   END) AS bhh,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(10)") \
		_T("     THEN hdt_time") \
		_T("     ELSE 0") \
		_T("   END) AS bhqd,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(8)") \
		_T("     THEN hdt_time") \
		_T("     ELSE 0") \
		_T("   END) AS ban,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(9)") \
		_T("     THEN hdt_time") \
		_T("     ELSE 0") \
		_T("   END) AS te6t,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(3)") \
		_T("     THEN hdt_time") \
		_T("     ELSE 0") \
		_T("   END) AS cs,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(7)") \
		_T("     THEN hdt_time") \
		_T("     ELSE 0") \
		_T("   END) AS dv,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(4, 12)") \
		_T("     THEN hdt_time") \
		_T("     ELSE 0") \
		_T("   END) AS bhk,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(5)") \
		_T("     THEN hdt_time") \
		_T("     ELSE 0") \
		_T("   END) AS bhtn,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(11)") \
		_T("     THEN hdt_time") \
		_T("     ELSE 0") \
		_T("   END)         AS bhqn,") \
		_T("   SUM(hdt_time) AS total") \
		_T(" FROM hms_dentaltreatment") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hdt_docno = hd_docno)") \
		_T(" WHERE hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}
CString CEMToothB10::GetQueryString3()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_nAll == 0)
		szWhere.Format(_T(""));
	if(m_nOutPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));
	if(m_nInPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));

	szSQL.Format(_T(" SELECT") \
		_T(" 3 AS line,") \
		_T(" 'Điều trị bảo tồn' AS linename,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(1, 13)") \
		_T("     THEN hdt_preservetreatment") \
		_T("     ELSE 0") \
		_T("   END) AS quan,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2)") \
		_T("     THEN hdt_preservetreatment") \
		_T("     ELSE 0") \
		_T("   END) AS bhh,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(10)") \
		_T("     THEN hdt_preservetreatment") \
		_T("     ELSE 0") \
		_T("   END) AS bhqd,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(8)") \
		_T("     THEN hdt_preservetreatment") \
		_T("     ELSE 0") \
		_T("   END) AS ban,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(9)") \
		_T("     THEN hdt_preservetreatment") \
		_T("     ELSE 0") \
		_T("   END) AS te6t,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(3)") \
		_T("     THEN hdt_preservetreatment") \
		_T("     ELSE 0") \
		_T("   END) AS cs,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(7)") \
		_T("     THEN hdt_preservetreatment") \
		_T("     ELSE 0") \
		_T("   END) AS dv,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(4, 12)") \
		_T("     THEN hdt_preservetreatment") \
		_T("     ELSE 0") \
		_T("   END) AS bhk,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(5)") \
		_T("     THEN hdt_preservetreatment") \
		_T("     ELSE 0") \
		_T("   END) AS bhtn,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(11)") \
		_T("     THEN hdt_preservetreatment") \
		_T("     ELSE 0") \
		_T("   END)         AS bhqn,") \
		_T("   SUM(hdt_preservetreatment) AS total") \
		_T(" FROM hms_dentaltreatment") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hdt_docno = hd_docno)") \
		_T(" WHERE hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), m_szFromDate, m_szToDate, szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CEMToothB10::GetQueryString4()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_nAll == 0)
		szWhere.Format(_T(""));
	if(m_nOutPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));
	if(m_nInPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));

	szSQL.Format(_T(" SELECT") \
		_T(" 4 AS line,") \
		_T(" 'Hàm giả' AS linename,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(1, 13)") \
		_T("     THEN hdt_denture") \
		_T("     ELSE 0") \
		_T("   END) AS quan,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2)") \
		_T("     THEN hdt_denture") \
		_T("     ELSE 0") \
		_T("   END) AS bhh,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(10)") \
		_T("     THEN hdt_denture") \
		_T("     ELSE 0") \
		_T("   END) AS bhqd,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(8)") \
		_T("     THEN hdt_denture") \
		_T("     ELSE 0") \
		_T("   END) AS ban,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(9)") \
		_T("     THEN hdt_denture") \
		_T("     ELSE 0") \
		_T("   END) AS te6t,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(3)") \
		_T("     THEN hdt_denture") \
		_T("     ELSE 0") \
		_T("   END) AS cs,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(7)") \
		_T("     THEN hdt_denture") \
		_T("     ELSE 0") \
		_T("   END) AS dv,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(4, 12)") \
		_T("     THEN hdt_denture") \
		_T("     ELSE 0") \
		_T("   END) AS bhk,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(5)") \
		_T("     THEN hdt_denture") \
		_T("     ELSE 0") \
		_T("   END) AS bhtn,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(11)") \
		_T("     THEN hdt_denture") \
		_T("     ELSE 0") \
		_T("   END)         AS bhqn,") \
		_T("   SUM(hdt_denture) AS total") \
		_T(" FROM hms_dentaltreatment") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hdt_docno = hd_docno)") \
		_T(" WHERE hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}
CString CEMToothB10::GetQueryString5()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_nAll == 0)
		szWhere.Format(_T(""));
	if(m_nOutPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));
	if(m_nInPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));

	szSQL.Format(_T(" SELECT") \
		_T(" 5 AS line,") \
		_T(" 'Nhổ răng' AS linename,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(1, 13)") \
		_T("     THEN hdt_extraction") \
		_T("     ELSE 0") \
		_T("   END) AS quan,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2)") \
		_T("     THEN hdt_extraction") \
		_T("     ELSE 0") \
		_T("   END) AS bhh,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(10)") \
		_T("     THEN hdt_extraction") \
		_T("     ELSE 0") \
		_T("   END) AS bhqd,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(8)") \
		_T("     THEN hdt_extraction") \
		_T("     ELSE 0") \
		_T("   END) AS ban,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(9)") \
		_T("     THEN hdt_extraction") \
		_T("     ELSE 0") \
		_T("   END) AS te6t,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(3)") \
		_T("     THEN hdt_extraction") \
		_T("     ELSE 0") \
		_T("   END) AS cs,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(7)") \
		_T("     THEN hdt_extraction") \
		_T("     ELSE 0") \
		_T("   END) AS dv,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(4, 12)") \
		_T("     THEN hdt_extraction") \
		_T("     ELSE 0") \
		_T("   END) AS bhk,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(5)") \
		_T("     THEN hdt_extraction") \
		_T("     ELSE 0") \
		_T("   END) AS bhtn,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(11)") \
		_T("     THEN hdt_extraction") \
		_T("     ELSE 0") \
		_T("   END)         AS bhqn,") \
		_T("   SUM(hdt_extraction) AS total") \
		_T(" FROM hms_dentaltreatment") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hdt_docno = hd_docno)") \
		_T(" WHERE hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}
CString CEMToothB10::GetQueryString6()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_nAll == 0)
		szWhere.Format(_T(""));
	if(m_nOutPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));
	if(m_nInPatient == 0)
		szWhere.Format(_T("AND NVL(hd_indept, 'X') NOT IN ('C1.1', 'C1.2', 'C1.3', 'TYC', 'X')"));

	szSQL.Format(_T(" SELECT") \
		_T(" 6 AS line,") \
		_T(" 'Số lần khỏi' AS linename,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(1, 13)") \
		_T("     THEN hdt_curedtreatment") \
		_T("     ELSE 0") \
		_T("   END) AS quan,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(2)") \
		_T("     THEN hdt_curedtreatment") \
		_T("     ELSE 0") \
		_T("   END) AS bhh,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(10)") \
		_T("     THEN hdt_curedtreatment") \
		_T("     ELSE 0") \
		_T("   END) AS bhqd,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(8)") \
		_T("     THEN hdt_curedtreatment") \
		_T("     ELSE 0") \
		_T("   END) AS ban,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(9)") \
		_T("     THEN hdt_curedtreatment") \
		_T("     ELSE 0") \
		_T("   END) AS te6t,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(3)") \
		_T("     THEN hdt_curedtreatment") \
		_T("     ELSE 0") \
		_T("   END) AS cs,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(7)") \
		_T("     THEN hdt_curedtreatment") \
		_T("     ELSE 0") \
		_T("   END) AS dv,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(4, 12)") \
		_T("     THEN hdt_curedtreatment") \
		_T("     ELSE 0") \
		_T("   END) AS bhk,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(5)") \
		_T("     THEN hdt_curedtreatment") \
		_T("     ELSE 0") \
		_T("   END) AS bhtn,") \
		_T("   SUM(") \
		_T("   CASE") \
		_T("     WHEN hd_object IN(11)") \
		_T("     THEN hdt_curedtreatment") \
		_T("     ELSE 0") \
		_T("   END)         AS bhqn,") \
		_T("   SUM(hdt_curedtreatment) AS total") \
		_T(" FROM hms_dentaltreatment") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hdt_docno = hd_docno)") \
		_T(" WHERE hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}
CString CEMToothB10::GetQueryString7()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_nAll == 0)
		szWhere.Format(_T(""));
	if(m_nOutPatient == 0)
		szWhere.Format(_T("AND ho_deptid = 'C1.1' AND ho_roomid = 52"));
	if(m_nInPatient == 0)
		szWhere.Format(_T("AND ho_pdeptid = 'B10'"));

	szSQL.Format(_T(" SELECT CASE WHEN hfg_id IN('B4400','B4100','B4200','B4300') THEN 1 ELSE 2 END AS ptype,") \
		_T("   hfg_name           AS linename,") \
		_T("   NVL(SUM(quan), 0)  AS quan,") \
		_T("   NVL(SUM(bhh), 0)   AS bhh,") \
		_T("   NVL(SUM(bhqd), 0)  AS bhqd,") \
		_T("   NVL(SUM(ban), 0)   AS ban,") \
		_T("   NVL(SUM(te6t), 0)  AS te6t,") \
		_T("   NVL(SUM(cs), 0)    AS cs,") \
		_T("   NVL(SUM(dv), 0)    AS dv,") \
		_T("   NVL(SUM(bhk), 0)   AS bhk,") \
		_T("   NVL(SUM(bhtn), 0)  AS bhtn,") \
		_T("   NVL(SUM(bhqn), 0)  AS bhqn,") \
		_T("   NVL(SUM(total), 0) AS total") \
		_T(" FROM hms_fee_group") \
		_T(" LEFT JOIN") \
		_T("   (SELECT hfl_groupid,") \
		_T("     CASE") \
		_T("       WHEN hd_object IN(1, 13)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS quan,") \
		_T("     CASE") \
		_T("       WHEN hd_object IN(2)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhh,") \
		_T("     CASE") \
		_T("       WHEN hd_object IN(10)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhqd,") \
		_T("     CASE") \
		_T("       WHEN hd_object IN(8)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS ban,") \
		_T("     CASE") \
		_T("       WHEN hd_object IN(9)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS te6t,") \
		_T("     CASE") \
		_T("       WHEN hd_object IN(3)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS cs,") \
		_T("     CASE") \
		_T("       WHEN hd_object IN(7)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS dv,") \
		_T("     CASE") \
		_T("       WHEN hd_object IN(4, 12)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhk,") \
		_T("     CASE") \
		_T("       WHEN hd_object IN(5)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END AS bhtn,") \
		_T("     CASE") \
		_T("       WHEN hd_object IN(11)") \
		_T("       THEN ho_qty") \
		_T("       ELSE 0") \
		_T("     END    AS bhqn,") \
		_T("     ho_qty AS total") \
		_T("   FROM hms_operation") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(ho_docno = hd_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(ho_itemid = hfl_feeid)") \
		_T("   WHERE ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND ho_pdeptid    = 'B10'") \
		_T("   AND ho_status   <> 'O' %s") \
		_T("   ) ON(hfl_groupid = hfg_id)") \
		_T(" WHERE hfg_id      IN('B4400','B4100','B4200','B4300','B5400','B5100','B5200','B5300')") \
		_T(" GROUP BY hfg_id, hfg_name") \
		_T(" ORDER BY hfg_id, hfg_name"), m_szFromDate, m_szToDate, szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CEMToothB10::GetQueryString_detail()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Empty();	
	
	szSQL.Format(_T(" SELECT * from") \
	_T(" (") \
	_T(" SELECT 3             AS line,") \
	_T("   cast ('Điều trị bảo tồn' as nvarchar2(128)) AS linename,") \
	_T("   hd_docno as docno,") \
	_T("   GET_PATIENTNAME(hd_docno) as patname,") \
	_T("   GET_OBJECTNAME(hd_object) as objectname,") \
	_T("   GET_OPERATION_NAME(hd_docno) AS tenphauthuat,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(1, 13)") \
	_T("     THEN hdt_preservetreatment") \
	_T("     ELSE 0") \
	_T("   END) AS quan,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(2)") \
	_T("     THEN hdt_preservetreatment") \
	_T("     ELSE 0") \
	_T("   END) AS bhh,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(10)") \
	_T("     THEN hdt_preservetreatment") \
	_T("     ELSE 0") \
	_T("   END) AS bhqd,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(8)") \
	_T("     THEN hdt_preservetreatment") \
	_T("     ELSE 0") \
	_T("   END) AS ban,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(9)") \
	_T("     THEN hdt_preservetreatment") \
	_T("     ELSE 0") \
	_T("   END) AS te6t,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(3)") \
	_T("     THEN hdt_preservetreatment") \
	_T("     ELSE 0") \
	_T("   END) AS cs,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(7)") \
	_T("     THEN hdt_preservetreatment") \
	_T("     ELSE 0") \
	_T("   END) AS dv,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(4, 12)") \
	_T("     THEN hdt_preservetreatment") \
	_T("     ELSE 0") \
	_T("   END) AS bhk,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(5)") \
	_T("     THEN hdt_preservetreatment") \
	_T("     ELSE 0") \
	_T("   END) AS bhtn,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(11)") \
	_T("     THEN hdt_preservetreatment") \
	_T("     ELSE 0") \
	_T("   END)                       AS bhqn,") \
	_T("   SUM(hdt_preservetreatment) AS total") \
	_T(" FROM hms_dentaltreatment") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hdt_docno = hd_docno)") \
	_T(" WHERE hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" having sum(hdt_preservetreatment)>0") \
	_T(" group by hd_docno, hd_object") \
	_T(" UNION ALL") \
	_T(" SELECT 4             AS line,") \
	_T("   ") \
	_T("    cast ('Hàm giả' as nvarchar2(128)) AS linename,") \
	_T("   hd_docno as docno,") \
	_T("   GET_PATIENTNAME(hd_docno) as patname,") \
	_T("   GET_OBJECTNAME(hd_object) as objectname,") \
	_T("   GET_OPERATION_NAME(hd_docno) AS tenphauthuat,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(1, 13)") \
	_T("     THEN hdt_denture") \
	_T("     ELSE 0") \
	_T("   END) AS quan,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(2)") \
	_T("     THEN hdt_denture") \
	_T("     ELSE 0") \
	_T("   END) AS bhh,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(10)") \
	_T("     THEN hdt_denture") \
	_T("     ELSE 0") \
	_T("   END) AS bhqd,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(8)") \
	_T("     THEN hdt_denture") \
	_T("     ELSE 0") \
	_T("   END) AS ban,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(9)") \
	_T("     THEN hdt_denture") \
	_T("     ELSE 0") \
	_T("   END) AS te6t,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(3)") \
	_T("     THEN hdt_denture") \
	_T("     ELSE 0") \
	_T("   END) AS cs,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(7)") \
	_T("     THEN hdt_denture") \
	_T("     ELSE 0") \
	_T("   END) AS dv,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(4, 12)") \
	_T("     THEN hdt_denture") \
	_T("     ELSE 0") \
	_T("   END) AS bhk,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(5)") \
	_T("     THEN hdt_denture") \
	_T("     ELSE 0") \
	_T("   END) AS bhtn,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(11)") \
	_T("     THEN hdt_denture") \
	_T("     ELSE 0") \
	_T("   END)                       AS bhqn,") \
	_T("   SUM(hdt_denture) AS total") \
	_T(" FROM hms_dentaltreatment") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hdt_docno = hd_docno)") \
	_T(" WHERE hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" having sum(hdt_denture)>0") \
	_T(" group by hd_docno, hd_object") \
	_T(" UNION ALL") \
	_T(" SELECT 5             AS line,") \
	_T("   cast ('Nhổ răng' as nvarchar2(128)) AS linename,") \
	_T("   hd_docno as docno,") \
	_T("   GET_PATIENTNAME(hd_docno) as patname,") \
	_T("   GET_OBJECTNAME(hd_object) as objectname,") \
	_T("   GET_OPERATION_NAME(hd_docno) AS tenphauthuat,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(1, 13)") \
	_T("     THEN hdt_extraction") \
	_T("     ELSE 0") \
	_T("   END) AS quan,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(2)") \
	_T("     THEN hdt_extraction") \
	_T("     ELSE 0") \
	_T("   END) AS bhh,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(10)") \
	_T("     THEN hdt_extraction") \
	_T("     ELSE 0") \
	_T("   END) AS bhqd,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(8)") \
	_T("     THEN hdt_extraction") \
	_T("     ELSE 0") \
	_T("   END) AS ban,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(9)") \
	_T("     THEN hdt_extraction") \
	_T("     ELSE 0") \
	_T("   END) AS te6t,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(3)") \
	_T("     THEN hdt_extraction") \
	_T("     ELSE 0") \
	_T("   END) AS cs,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(7)") \
	_T("     THEN hdt_extraction") \
	_T("    ELSE 0") \
	_T("   END) AS dv,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(4, 12)") \
	_T("     THEN hdt_extraction") \
	_T("     ELSE 0") \
	_T("   END) AS bhk,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(5)") \
	_T("     THEN hdt_extraction") \
	_T("     ELSE 0") \
	_T("   END) AS bhtn,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hd_object IN(11)") \
	_T("     THEN hdt_extraction") \
	_T("     ELSE 0") \
	_T("   END)                       AS bhqn,") \
	_T("   SUM(hdt_extraction) AS total") \
	_T(" FROM hms_dentaltreatment") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hdt_docno = hd_docno)") \
	_T(" WHERE hdt_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" having sum(hdt_extraction)>0") \
	_T(" group by hd_docno, hd_object") \
	_T(" UNION ALL") \
	_T(" SELECT") \
	_T("   CASE") \
	_T("     WHEN hfg_id IN('B4400','B4100','B4200','B4300')") \
	_T("     THEN 1") \
	_T("     ELSE 2") \
	_T("   END                AS line,") \
	_T("   hfg_name           AS linename,") \
	_T("   hd_docno as docno,") \
	_T("   GET_PATIENTNAME(hd_docno) as patname,") \
	_T("   GET_OBJECTNAME(hd_object) as objectname,") \
	_T("   hfl_name as tenphauthuat,") \
	_T("   NVL(SUM(quan), 0)  AS quan,") \
	_T("   NVL(SUM(bhh), 0)   AS bhh,") \
	_T("   NVL(SUM(bhqd), 0)  AS bhqd,") \
	_T("   NVL(SUM(ban), 0)   AS ban,") \
	_T("   NVL(SUM(te6t), 0)  AS te6t,") \
	_T("   NVL(SUM(cs), 0)    AS cs,") \
	_T("   NVL(SUM(dv), 0)    AS dv,") \
	_T("   NVL(SUM(bhk), 0)   AS bhk,") \
	_T("   NVL(SUM(bhtn), 0)  AS bhtn,") \
	_T("   NVL(SUM(bhqn), 0)  AS bhqn,") \
	_T("   NVL(SUM(total), 0) AS total") \
	_T(" FROM hms_fee_group") \
	_T(" LEFT JOIN") \
	_T("   (SELECT hfl_groupid,") \
	_T("     hd_docno,") \
	_T("     hd_object,") \
	_T("     hfl_name,") \
	_T("     CASE") \
	_T("       WHEN hd_object IN(1, 13)") \
	_T("       THEN ho_qty") \
	_T("       ELSE 0") \
	_T("     END AS quan,") \
	_T("     CASE") \
	_T("       WHEN hd_object IN(2)") \
	_T("       THEN ho_qty") \
	_T("       ELSE 0") \
	_T("     END AS bhh,") \
	_T("     CASE") \
	_T("       WHEN hd_object IN(10)") \
	_T("       THEN ho_qty") \
	_T("       ELSE 0") \
	_T("     END AS bhqd,") \
	_T("     CASE") \
	_T("       WHEN hd_object IN(8)") \
	_T("       THEN ho_qty") \
	_T("       ELSE 0") \
	_T("     END AS ban,") \
	_T("     CASE") \
	_T("       WHEN hd_object IN(9)") \
	_T("       THEN ho_qty") \
	_T("       ELSE 0") \
	_T("     END AS te6t,") \
	_T("     CASE") \
	_T("       WHEN hd_object IN(3)") \
	_T("       THEN ho_qty") \
	_T("       ELSE 0") \
	_T("     END AS cs,") \
	_T("     CASE") \
	_T("       WHEN hd_object IN(7)") \
	_T("       THEN ho_qty") \
	_T("       ELSE 0") \
	_T("     END AS dv,") \
	_T("     CASE") \
	_T("       WHEN hd_object IN(4, 12)") \
	_T("       THEN ho_qty") \
	_T("       ELSE 0") \
	_T("     END AS bhk,") \
	_T("     CASE") \
	_T("       WHEN hd_object IN(5)") \
	_T("       THEN ho_qty") \
	_T("       ELSE 0") \
	_T("     END AS bhtn,") \
	_T("     CASE") \
	_T("       WHEN hd_object IN(11)") \
	_T("       THEN ho_qty") \
	_T("       ELSE 0") \
	_T("     END    AS bhqn,") \
	_T("     ho_qty AS total") \
	_T("   FROM hms_operation") \
	_T("   LEFT JOIN hms_doc") \
	_T("   ON(ho_docno = hd_docno)") \
	_T("   LEFT JOIN hms_fee_list") \
	_T("   ON(ho_itemid = hfl_feeid)") \
	_T("   WHERE ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T("   AND ho_pdeptid   = 'B10'") \
	_T("   AND ho_status   <> 'O'") \
	_T("   ) ON(hfl_groupid = hfg_id)") \
	_T(" WHERE hfg_id      IN('B4400','B4100','B4200','B4300','B5400','B5100','B5200','B5300')") \
	_T(" having  NVL(SUM(total), 0) > 0") \
	_T(" GROUP BY hfg_id,hd_docno, hfl_name, hfg_name, hd_object")\
	_T(" )") \
	_T(" order by line, linename, docno"), m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate);
	return szSQL;
}