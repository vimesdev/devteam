#include "rptHealthExam.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CrptHealthExam *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptHealthExam* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CrptHealthExam *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptHealthExam *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptHealthExam *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptHealthExam *pVw = (CrptHealthExam *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptHealthExam *pVw = (CrptHealthExam *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptHealthExam *pVw = (CrptHealthExam *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptHealthExamFnc(CWnd *pWnd){
	 return ((CrptHealthExam*)pWnd)->OnAddrptHealthExam();
} 
static int _OnEditrptHealthExamFnc(CWnd *pWnd){
	 return ((CrptHealthExam*)pWnd)->OnEditrptHealthExam();
} 
static int _OnDeleterptHealthExamFnc(CWnd *pWnd){
	 return ((CrptHealthExam*)pWnd)->OnDeleterptHealthExam();
} 
static int _OnSaverptHealthExamFnc(CWnd *pWnd){
	 return ((CrptHealthExam*)pWnd)->OnSaverptHealthExam();
} 
static int _OnCancelrptHealthExamFnc(CWnd *pWnd){
	 return ((CrptHealthExam*)pWnd)->OnCancelrptHealthExam();
} 
CrptHealthExam::CrptHealthExam(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 360;
	m_nDlgHeight = 125;
	m_szTitle = _T("\x44\x61nh s\xE1\x63h KSK trong n\x1B0\x1EDB\x63");
	SetDefaultValues();
}
CrptHealthExam::~CrptHealthExam(){
}
void CrptHealthExam::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 175, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 180, 30, 260, 55);
	m_wndReportPeriod.Create(this,265, 30, 345, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 350, 90);
	m_wndFromDate.Create(this,95, 60, 175, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 60, 260, 85);
	m_wndToDate.Create(this,265, 60, 345, 85); 
//	m_wndPrint.Create(this, _T("&Print"), 115, 95, 190, 120);
	m_wndExport.Create(this, _T("&Export"), 195, 95, 270, 120);
	m_wndClose.Create(this, _T("&Close"), 275, 95, 350, 120);

}
void CrptHealthExam::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(false);
	m_wndReportPeriod.SetCheckValue(false);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(false);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(false);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CrptHealthExam::OnSetWindowEvents(){
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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
	SetMode(VM_EDIT);
}
void CrptHealthExam::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CrptHealthExam::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptHealthExam::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptHealthExam::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptHealthExam::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
 			EnableButtons(TRUE, 0, 1,2,3 , -1); 
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
/*void CrptHealthExam::OnYearChange(){
	
} */
/*void CrptHealthExam::OnYearSetfocus(){
	
} */
/*void CrptHealthExam::OnYearKillfocus(){
	
} */
int CrptHealthExam::OnYearCheckValue(){
	return 0;
} 
void CrptHealthExam::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptHealthExam::OnReportPeriodSelendok(){
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	UpdateData(false);
}
/*void CrptHealthExam::OnReportPeriodSetfocus(){
	
}*/
/*void CrptHealthExam::OnReportPeriodKillfocus(){
	
}*/
long CrptHealthExam::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0){
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
/*void CrptHealthExam::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CrptHealthExam::OnFromDateChange(){
	
} */
/*void CrptHealthExam::OnFromDateSetfocus(){
	
} */
/*void CrptHealthExam::OnFromDateKillfocus(){
	
} */
int CrptHealthExam::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptHealthExam::OnToDateChange(){
	
} */
/*void CrptHealthExam::OnToDateSetfocus(){
	
} */
/*void CrptHealthExam::OnToDateKillfocus(){
	
} */
int CrptHealthExam::OnToDateCheckValue(){
	return 0;
} 
void CrptHealthExam::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptHealthExam::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szFromDate, szToDate;
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 27);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 43);
	xls.SetColumnWidth(4, 11);
	xls.SetColumnWidth(5, 9);
	xls.SetColumnWidth(6, 17);
	xls.SetColumnWidth(7, 28);
	int nCol = 0; 
	int nRow = 0;
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 3);
	xls.SetCellText(nCol, nRow + 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellText(nCol, nRow + 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellMergedColumns(nCol, nRow + 3, 8);
	xls.SetCellText(nCol, nRow + 3, _T("\x44\x41NH S\xC1\x43H KH\xC1M S\x1EE8\x43 KH\x1ECE\x45 TRONG N\x1AF\x1EDA\x43"), FMT_TEXT | FMT_CENTER, true, 16);
	xls.SetCellMergedColumns(nCol, nRow + 4, 8);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12);

	xls.SetCellText(nCol, nRow + 5, _T("STT"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 1, nRow + 5, _T("H\x1ECD t\xEAn"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 2, nRow + 5, _T("N\x103m sinh"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 3, nRow + 5, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 4, nRow + 5, _T("S\x1ED1 t\x1EDD ph\x1EE5"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 5, nRow + 5, _T("L\xE1i \x78\x65"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 6, nRow + 5, _T("H\x1ECD\x63 t\x1EADp / \x63\xF4ng t\xE1\x63"), FMT_TEXT |FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 7, nRow + 5, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER, true, 11);
	
	szSQL.Format(_T(" SELECT ") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as ten,") \
				_T("	date_part('year',hp_birthdate) as namsinh,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as diachi,") \
				_T(" 	hhe_insertion as sotophu,") \
				_T(" 	hhe_examtype as kieukham,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_driverrank' and cast(ss_code as integer) = hhe_driverrank and hhe_examtype = 'LX' limit 1) as Laixe,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_learnhealth' and cast(ss_code as integer) = hhe_driverrank and hhe_examtype = 'DH' limit 1) as Hoctap,") \
				_T(" 	hhe_note as note") \
				_T(" FROM  hms_heathexam") \
				_T(" LEFT JOIN  hms_doc ON hhe_patientno = hd_patientno and hhe_docno = hd_docno") \
				_T(" LEFT JOIN hms_patient ON hp_patientno = hd_patientno") \
				_T(" WHERE date(hd_admitdate) between date('%s') and date('%s')") , m_szFromDate, m_szToDate);
	rs.ExecSQL(szSQL);
	int nIndex = 1;
	int nTotal = 0;

while(!rs.IsEOF())
	{ 
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow + 6, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("ten"),tmpStr);
		xls.SetCellText(nCol + 1, nRow + 6, tmpStr, FMT_TEXT);
 
		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol + 2, nRow + 6, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("diachi"), tmpStr);
		xls.SetCellText(nCol + 3, nRow + 6, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("sotophu"), tmpStr);
		nTotal += ToInt(tmpStr);
		xls.SetCellText(nCol + 4, nRow + 6, tmpStr, FMT_NUMBER1);
		
		rs.GetValue(_T("Laixe"), tmpStr);
		xls.SetCellText(nCol + 5, nRow + 6, tmpStr, FMT_TEXT);

		rs.GetValue(_T("Hoctap"), tmpStr);
		xls.SetCellText(nCol + 6, nRow + 6, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("note"), tmpStr);
		xls.SetCellText(nCol + 7, nRow + 6, tmpStr, FMT_TEXT);

		nRow++;
		rs.MoveNext();
			
	}
	//nRow++;
	xls.SetCellMergedColumns(nCol, nRow + 6, 4);
	xls.SetCellText(nCol, nRow + 6, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_RIGHT, true, 11);

	tmpStr.Format(_T("%ld"), nTotal);		
	xls.SetCellText(nCol + 4, nRow + 6, tmpStr, FMT_NUMBER1, true, 11);
	
	xls.SetCellMergedColumns(nCol, nRow + 7, 4);
	xls.SetCellText(nCol, nRow + 7, _T("T\x1ED5ng s\x1ED1 t\x1EDD \x63h\xEDnh"), FMT_TEXT | FMT_RIGHT, true, 11);

	tmpStr.Format(_T("%ld"), nIndex-1);		
	xls.SetCellText(nCol + 4, nRow + 7, tmpStr, FMT_NUMBER1, true, 11);

	xls.SetCellMergedColumns(nCol, nRow + 8, 4);
	xls.SetCellText(nCol, nRow + 8, _T("T\x1ED5ng s\x1ED1 t\x1EDD ph\x1EE5"), FMT_TEXT | FMT_RIGHT, true, 11);

	tmpStr.Format(_T("%ld"), nTotal);		
	xls.SetCellText(nCol + 4, nRow + 8, tmpStr, FMT_NUMBER1, true, 11);
	
	xls.SetCellMergedColumns(nCol, nRow + 9, 4);
	xls.SetCellText(nCol, nRow + 9, _T("T\x1ED5ng s\x1ED1 ti\x1EC1n t\x1EDD \x63h\xEDnh"), FMT_TEXT | FMT_RIGHT, true, 11);
	long double moneychinh, moneyphu;
	moneychinh = (nIndex-1) * 30000;
	xls.SetCellText(nCol + 4, nRow + 9, double2str(moneychinh), FMT_NUMBER1, true, 11);


	xls.SetCellMergedColumns(nCol, nRow + 10, 4);
	xls.SetCellText(nCol, nRow + 10, _T("T\x1ED5ng s\x1ED1 ti\x1EC1n t\x1EDD ph\x1EE5"), FMT_TEXT | FMT_RIGHT, true, 11);


	moneyphu = nTotal * 10000;
	xls.SetCellText(nCol + 4, nRow + 10, double2str(moneyphu), FMT_NUMBER1, true, 11);

	long double summoney, sumrealmoney;
	xls.SetCellMergedColumns(nCol, nRow + 11, 4);
	xls.SetCellText(nCol, nRow + 11, _T("T\x1ED5ng s\x1ED1 ti\x1EC1n"), FMT_TEXT | FMT_RIGHT, true, 11);
	summoney = moneychinh + moneyphu;
	xls.SetCellText(nCol + 4, nRow + 11, double2str(summoney), FMT_NUMBER1, true, 11);

	xls.SetCellMergedColumns(nCol, nRow + 12, 4);
	xls.SetCellText(nCol, nRow + 12, _T("T\x1ED5ng s\x1ED1 ti\x1EC1n th\x1EF1\x63 thu l\xE0"), FMT_TEXT | FMT_RIGHT, false, 11);

	//summoney = moneychinh + moneyphu;
	//xls.SetCellText(nCol + 4, nRow + 12, double2str(summoney), FMT_NUMBER1, true, 11);

	EndWaitCursor();
	xls.Save(_T("Exports\\Danh sach kham suc khoe trong nuoc.xls"));

} 
void CrptHealthExam::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CrptHealthExam::OnAddrptHealthExam(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptHealthExam::OnEditrptHealthExam(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptHealthExam::OnDeleterptHealthExam(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelrptHealthExam(); 
 	}
	return 0;
}
int CrptHealthExam::OnSaverptHealthExam(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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
 		//OnrptHealthExamListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptHealthExam::OnCancelrptHealthExam(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CrptHealthExam::OnrptHealthExamListLoadData(){
	return 0;
}
