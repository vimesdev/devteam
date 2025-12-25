#include "stdafx.h"
#include "EMCuredToothB10.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMCuredToothB10 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMCuredToothB10* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMCuredToothB10 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMCuredToothB10 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMCuredToothB10 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMCuredToothB10 *)pWnd)->OnToDateCheckValue();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CEMCuredToothB10*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CEMCuredToothB10*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CEMCuredToothB10*)pWnd)->OnOutPatientSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMCuredToothB10 *pVw = (CEMCuredToothB10 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMCuredToothB10 *pVw = (CEMCuredToothB10 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CEMCuredToothB10 *pVw = (CEMCuredToothB10 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddEMCuredToothB10Fnc(CWnd *pWnd){
	 return ((CEMCuredToothB10*)pWnd)->OnAddEMCuredToothB10();
} 
static int _OnEditEMCuredToothB10Fnc(CWnd *pWnd){
	 return ((CEMCuredToothB10*)pWnd)->OnEditEMCuredToothB10();
} 
static int _OnDeleteEMCuredToothB10Fnc(CWnd *pWnd){
	 return ((CEMCuredToothB10*)pWnd)->OnDeleteEMCuredToothB10();
} 
static int _OnSaveEMCuredToothB10Fnc(CWnd *pWnd){
	 return ((CEMCuredToothB10*)pWnd)->OnSaveEMCuredToothB10();
} 
static int _OnCancelEMCuredToothB10Fnc(CWnd *pWnd){
	 return ((CEMCuredToothB10*)pWnd)->OnCancelEMCuredToothB10();
} 
CEMCuredToothB10::CEMCuredToothB10(CWnd *pParent)
{
	m_nDlgWidth = 420;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CEMCuredToothB10::~CEMCuredToothB10()
{
}
void CEMCuredToothB10::OnCreateComponents(){
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
void CEMCuredToothB10::OnInitializeComponents(){
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
void CEMCuredToothB10::OnSetWindowEvents(){
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
void CEMCuredToothB10::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
}
void CEMCuredToothB10::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CEMCuredToothB10::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMCuredToothB10::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CEMCuredToothB10::SetMode(int nMode){
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
/*void CEMCuredToothB10::OnYearChange(){
	
} */
/*void CEMCuredToothB10::OnYearSetfocus(){
	
} */
/*void CEMCuredToothB10::OnYearKillfocus(){
	
} */
int CEMCuredToothB10::OnYearCheckValue(){
	return 0;
} 
void CEMCuredToothB10::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMCuredToothB10::OnReportPeriodSelendok(){
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
/*void CEMCuredToothB10::OnReportPeriodSetfocus(){
	
}*/
/*void CEMCuredToothB10::OnReportPeriodKillfocus(){
	
}*/
long CEMCuredToothB10::OnReportPeriodLoadData()
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
/*void CEMCuredToothB10::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMCuredToothB10::OnFromDateChange(){
	
} */
/*void CEMCuredToothB10::OnFromDateSetfocus(){
	
} */
/*void CEMCuredToothB10::OnFromDateKillfocus(){
	
} */
int CEMCuredToothB10::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMCuredToothB10::OnToDateChange(){
	
} */
/*void CEMCuredToothB10::OnToDateSetfocus(){
	
} */
/*void CEMCuredToothB10::OnToDateKillfocus(){
	
} */
int CEMCuredToothB10::OnToDateCheckValue(){
	return 0;
}
void CEMCuredToothB10::OnAllSelect(){

}
void CEMCuredToothB10::OnInPatientSelect(){

}
void CEMCuredToothB10::OnOutPatientSelect(){

}
void CEMCuredToothB10::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
} 
void CEMCuredToothB10::OnExportSelect(){
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

	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 4);
	xls.SetColumnWidth(2, 4);
	xls.SetColumnWidth(3, 4);
	xls.SetColumnWidth(4, 4);
	xls.SetColumnWidth(5, 4);
	xls.SetColumnWidth(6, 6);
	xls.SetColumnWidth(7, 4);
	xls.SetColumnWidth(8, 4);
	xls.SetColumnWidth(9, 4);
	xls.SetColumnWidth(10, 4);
	xls.SetColumnWidth(11, 4);
	xls.SetColumnWidth(12, 4);
	xls.SetColumnWidth(13, 4);
	xls.SetColumnWidth(14, 6);
	xls.SetColumnWidth(15, 4);
	xls.SetColumnWidth(16, 6);
	xls.SetColumnWidth(17, 4);
	xls.SetColumnWidth(18, 4);
	xls.SetColumnWidth(19, 4);
	xls.SetColumnWidth(20, 4);
	xls.SetColumnWidth(21, 4);
	xls.SetColumnWidth(22, 4);
	xls.SetColumnWidth(23, 4);
	xls.SetColumnWidth(24, 4);
	xls.SetColumnWidth(25, 4);
	xls.SetColumnWidth(26, 4);
	xls.SetColumnWidth(27, 4);
	xls.SetColumnWidth(28, 4);
	xls.SetColumnWidth(29, 4);
	xls.SetColumnWidth(30, 4);
	xls.SetColumnWidth(31, 4);
	xls.SetColumnWidth(32, 4);
	xls.SetColumnWidth(33, 4);
	xls.SetColumnWidth(34, 4);
	xls.SetColumnWidth(35, 4);
	xls.SetColumnWidth(36, 4);
	xls.SetColumnWidth(37, 4);
	xls.SetColumnWidth(38, 6);
	xls.SetColumnWidth(39, 4);
	xls.SetColumnWidth(40, 6);
	xls.SetColumnWidth(41, 4);
	xls.SetColumnWidth(42, 6);

	xls.SetCellText(0, 0, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("KHO\x41 R\x102NG (\x42\x31\x30)"), FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, 4098, true);

	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O S\x1ED0 LI\x1EC6U KHO\x41 R\x102NG \x42\x31\x30"), FMT_TEXT | FMT_CENTER, true, 16);
	xls.SetCellText(0, 4, _T("Ng\xE0y"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(1, 4, _T("N\x1ED9i \x64ung \x111i\x1EC1u tr\x1ECB"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(1, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(2, 5, _T("NR8"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(3, 5, _T("S3"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(4, 5, _T("T\x32"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(5, 5, _T("T\x33"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(6, 5, _T("CRVL"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(7, 5, _T("VQR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(8, 5, _T("TM"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(9, 5, _T("#"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(10, 5, _T("CC,MN"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(11, 5, _T("IM"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(12, 4, _T("L\x1EAFp h\xE0m"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(12, 5, _T("HT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(13, 5, _T("HK"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(14, 5, _T("HKTT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(15, 5, _T("HND"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(16, 5, _T("HKND"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(17, 4, _T("\x43\x1EA7u"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(17, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(18, 5, _T("\x110"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(19, 5, _T("\x110TT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(20, 5, _T("S"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(21, 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(22, 5, _T("SCR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(23, 4, _T("PIVO"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(23, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(24, 5, _T("\x110"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(25, 5, _T("\x110TT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(26, 5, _T("S"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(27, 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(28, 5, _T("SCR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(29, 4, _T("\x43h\x1EE5p"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(29, 5, _T("N"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(30, 5, _T("\x110"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(31, 5, _T("\x110TT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(32, 5, _T("S"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(33, 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(34, 5, _T("SCR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(35, 4, _T("H\xE0m n\x1EAFn"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(35, 5, _T("\x110G"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(36, 5, _T("\x1ED0\x63"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(37, 5, _T("BR"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(38, 4, _T("Kh\xE1\x63"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(38, 5, _T("\x58pos"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(39, 5, _T("V\xE1"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(40, 5, _T("M\xE1ng"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(41, 5, _T("G\x1EAFn"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(42, 4, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 4);
	xls.SetMerge(1, 1, 0, 4);
	xls.SetMerge(2, 2, 0, 42);
	xls.SetMerge(3, 3, 0, 42);
	xls.SetMerge(4, 5, 0, 0);
	xls.SetMerge(4, 4, 1, 11);
	xls.SetMerge(4, 4, 12, 16);
	xls.SetMerge(4, 4, 17, 22);
	xls.SetMerge(4, 4, 23, 28);
	xls.SetMerge(4, 4, 29, 34);
	xls.SetMerge(4, 4, 35, 37);
	xls.SetMerge(4, 4, 38, 41);
	xls.SetMerge(4, 5, 42, 42);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	nRow = 6;
	nCol = 0;
	
	while(!rs.IsEOF()){
		rs.GetValue(_T("rpdate"), tmpStr);
		xls.SetCellText(nCol+0, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		for(int i = 1; i < 43; i++)
			{
				szTemp.Format(_T("c%d"), i);
				rs.GetValue(szTemp, tmpStr);
				xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1);
			}
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao dieu tri khoi khoa rang B10.xls"));
} 
void CEMCuredToothB10::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMCuredToothB10::OnAddEMCuredToothB10(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CEMCuredToothB10::OnEditEMCuredToothB10(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMCuredToothB10::OnDeleteEMCuredToothB10(){
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
 		OnCancelEMCuredToothB10(); 
 	}
	return 0;
}
int CEMCuredToothB10::OnSaveEMCuredToothB10(){
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
 		//OnEMCuredToothB10ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CEMCuredToothB10::OnCancelEMCuredToothB10(){
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
int CEMCuredToothB10::OnEMCuredToothB10ListLoadData()
{
	return 0;
}
CString CEMCuredToothB10::GetQueryString()
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
		_T(" TRUNC(hct_date) AS rpdate,") \
		_T(" SUM(hct_extraction) AS c1,") \
		_T(" SUM(hct_r8) AS c2,") \
		_T(" SUM(hct_s3) AS c3,") \
		_T(" SUM(hct_t2) AS c4,") \
		_T(" SUM(hct_t3) AS c5,") \
		_T(" SUM(hct_cr) AS c6,") \
		_T(" SUM(hct_vqr) AS c7,") \
		_T(" SUM(hct_tm) AS c8,") \
		_T(" SUM(hct_b) AS c9,") \
		_T(" SUM(hct_cc) AS c10,") \
		_T(" SUM(hct_im) AS c11,") \
		_T(" SUM(hct_ht) AS c12,") \
		_T(" SUM(hct_hk) AS c13,") \
		_T(" SUM(hct_hkt) AS c14,") \
		_T(" SUM(hct_nd) AS c15,") \
		_T(" SUM(hct_hkmnd) AS c16,") \
		_T(" SUM(hct_cau_n) AS c17,") \
		_T(" SUM(hct_cau_d) AS c18,") \
		_T(" SUM(hct_cau_dtt) AS c19,") \
		_T(" SUM(hct_cau_s) AS c20,") \
		_T(" SUM(hct_cau_stt) AS c21,") \
		_T(" SUM(hct_cau_scc) AS c22,") \
		_T(" SUM(hct_pivo_n) AS c23,") \
		_T(" SUM(hct_pivo_d) AS c24,") \
		_T(" SUM(hct_pivo_dtt) AS c25,") \
		_T(" SUM(hct_pivo_s) AS c26,") \
		_T(" SUM(hct_pivo_stt) AS c27,") \
		_T(" SUM(hct_pivo_scc) AS c28,") \
		_T(" SUM(hct_chup_n) AS c29,") \
		_T(" SUM(hct_chup_d) AS c30,") \
		_T(" SUM(hct_chup_dtt) AS c31,") \
		_T(" SUM(hct_chup_s) AS c32,") \
		_T(" SUM(hct_chup_stt) AS c33,") \
		_T(" SUM(hct_chup_scc) AS c34,") \
		_T(" SUM(hct_dg) AS c35,") \
		_T(" SUM(hct_oc) AS c36,") \
		_T(" SUM(hct_br) AS c37,") \
		_T(" SUM(hct_xpos) AS c38,") \
		_T(" SUM(hct_va) AS c39,") \
		_T(" SUM(hct_mcl) AS c40,") \
		_T(" SUM(hct_gcc) AS c41,") \
		_T(" SUM(hct_extraction +") \
		_T(" hct_r8 +") \
		_T(" hct_s3 +") \
		_T(" hct_t2 +") \
		_T(" hct_t3 +") \
		_T(" hct_tm +") \
		_T(" hct_cr +") \
		_T(" hct_vqr +") \
		_T(" hct_b +") \
		_T(" hct_cc +") \
		_T(" hct_im +") \
		_T(" hct_ht +") \
		_T(" hct_hk +") \
		_T(" hct_hkt +") \
		_T(" hct_nd +") \
		_T(" hct_hkmnd +") \
		_T(" hct_cau_n +") \
		_T(" hct_cau_d +") \
		_T(" hct_cau_dtt +") \
		_T(" hct_cau_s +") \
		_T(" hct_cau_stt +") \
		_T(" hct_cau_scc +") \
		_T(" hct_pivo_n +") \
		_T(" hct_pivo_d +") \
		_T(" hct_pivo_dtt +") \
		_T(" hct_pivo_s +") \
		_T(" hct_pivo_stt +") \
		_T(" hct_pivo_scc +") \
		_T(" hct_chup_n +") \
		_T(" hct_chup_d +") \
		_T(" hct_chup_dtt +") \
		_T(" hct_chup_s +") \
		_T(" hct_chup_stt +") \
		_T(" hct_chup_scc +") \
		_T(" hct_dg +") \
		_T(" hct_oc +") \
		_T(" hct_br +") \
		_T(" hct_xpos +") \
		_T(" hct_va +") \
		_T(" hct_mcl +") \
		_T(" hct_gcc) AS c42") \
		_T(" FROM hms_curedtreatment") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hct_docno = hd_docno)") \
		_T(" WHERE hct_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" GROUP BY TRUNC(hct_date)") \
		_T(" ORDER BY TRUNC(hct_date)"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}