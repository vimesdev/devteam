#include "stdafx.h"
#include "FMDoiXuat.h"
#include "HMSMainFrame.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMDoiXuat *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDoiXuat* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMDoiXuat *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnReportPeriodAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDoiXuat* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFMDoiXuat *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnObjectAddNew();
}*/

static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDoiXuat* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMDoiXuat *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnStatusAddNew();
}*/

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMDoiXuat *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMDoiXuat *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMDoiXuat *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMDoiXuat *pVw = (CFMDoiXuat *)pWnd;
	pVw->OnExportSelect();
} 
CFMDoiXuat::CFMDoiXuat(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMDoiXuat::~CFMDoiXuat(){
}
void CFMDoiXuat::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 510, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
	m_wndYear.Create(this,105, 30, 255, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 260, 30, 350, 55);
	m_wndReportPeriod.Create(this,355, 30, 505, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 255, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 260, 60, 350, 85);
	m_wndToDate.Create(this,355, 60, 505, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 100, 115);
	m_wndObject.Create(this,105, 90, 255, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 260, 90, 350, 115);
	m_wndStatus.Create(this,355, 90, 505, 115); 
	m_wndExport.Create(this, _T("&Export"), 405, 125, 505, 150);
}
void CFMDoiXuat::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CFMDoiXuat::OnSetWindowEvents(){
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


	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);



	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);


	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);

	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CFMDoiXuat::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
}
void CFMDoiXuat::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CFMDoiXuat::SetMode(int nMode){
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
/*void CFMDoiXuat::OnYearChange(){
	
} */
/*void CFMDoiXuat::OnYearSetfocus(){
	
} */
/*void CFMDoiXuat::OnYearKillfocus(){
	
} */
int CFMDoiXuat::OnYearCheckValue(){
	return 0;
} 
void CFMDoiXuat::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMDoiXuat::OnReportPeriodSelendok(){
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
/*void CFMDoiXuat::OnReportPeriodSetfocus(){
	
}*/
/*void CFMDoiXuat::OnReportPeriodKillfocus(){
	
}*/
long CFMDoiXuat::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
/*void CFMDoiXuat::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */




void CFMDoiXuat::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMDoiXuat::OnObjectSelendok(){
	
}
/*void CFMDoiXuat::OnObjectSetfocus(){
	
}*/
/*void CFMDoiXuat::OnObjectKillfocus(){
	
}*/
long CFMDoiXuat::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ORDER BY ho_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMDoiXuat::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */



void CFMDoiXuat::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMDoiXuat::OnStatusSelendok(){
	
}
/*void CFMDoiXuat::OnStatusSetfocus(){
	
}*/
/*void CFMDoiXuat::OnStatusKillfocus(){
	
}*/
long CFMDoiXuat::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && ToInt(m_szStatusKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szStatusKey));
	};
	
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	
	
	m_wndStatus.AddItems(_T("O"), _T("Đã tạo dữ liệu"), NULL);
	m_wndStatus.AddItems(_T("P"), _T("Tạo hóa đơn"), NULL);
	

	return 0;
}
/*void CFMDoiXuat::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */



/*void CFMDoiXuat::OnFromDateChange(){
	
} */
/*void CFMDoiXuat::OnFromDateSetfocus(){
	
} */
/*void CFMDoiXuat::OnFromDateKillfocus(){
	
} */
int CFMDoiXuat::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMDoiXuat::OnToDateChange(){
	
} */
/*void CFMDoiXuat::OnToDateSetfocus(){
	
} */
/*void CFMDoiXuat::OnToDateKillfocus(){
	
} */
int CFMDoiXuat::OnToDateCheckValue(){
	return 0;
} 
void CFMDoiXuat::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	double nTotal = 0, nTotal2 = 0, nTotal3 = 0, nTotal4 = 0, nTotal5 =0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 8);	xls.SetColumnWidth(2, 20);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 20);	xls.SetColumnWidth(6, 12);	xls.SetColumnWidth(7, 12);	xls.SetColumnWidth(8, 16);	xls.SetColumnWidth(9, 16);	xls.SetColumnWidth(10, 16);	xls.SetColumnWidth(11, 16);	xls.SetColumnWidth(12, 16);	xls.SetColumnWidth(13, 16);	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("\x44\x41NH S\xC1\x43H THU \x43HI \x43\x1EE6\x41 \x42\x1EC6NH NH\xC2N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 4, _T("M\xE3 \x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("Ng\xE0y sinh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("N\x1A1i l\xE0m vi\x1EC7\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("\x43\x1EA5p \x62\x1EAD\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("T\x1ED5ng th\x61nh to\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("Tr\x1EA3 \x63h\xEAnh l\x1EC7\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("Ho\xE0n tr\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 4, _T("\x42\x1EC7nh nh\xE2n tr\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 4, _T("Hóa đơn ĐT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 12);	xls.SetMerge(3, 3, 0, 12);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("patientno"), tmpStr);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("birthdate"), tmpStr);		xls.SetCellText(nCol+3, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("age"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("address"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("workplace"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("rank"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("objectname"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("amount"), tmpStr);		nTotal += str2double(tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);        rs.GetValue(_T("difcost"), tmpStr);		nTotal2 += str2double(tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("refund"), tmpStr);		nTotal3 += str2double(tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);			rs.GetValue(_T("patpaid"), tmpStr);		nTotal4 += str2double(tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("eletronic"), tmpStr);		nTotal5 += str2double(tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1);		nRow++;		rs.MoveNext();	}	xls.SetCellText(nCol+2, nRow, _T("Tổng cộng"), FMT_TEXT, true);	xls.SetCellText(nCol+9, nRow, double2str(nTotal), FMT_NUMBER1, true);	xls.SetCellText(nCol+10, nRow, double2str(nTotal2), FMT_NUMBER1, true);	xls.SetCellText(nCol+11, nRow, double2str(nTotal3), FMT_NUMBER1, true);	xls.SetCellText(nCol+12, nRow, double2str(nTotal4), FMT_NUMBER1, true);	xls.SetCellText(nCol+13, nRow, double2str(nTotal5), FMT_NUMBER1, true);	EndWaitCursor();	xls.Save(_T("Exports\\DanhSachThuChiCuaBN.xls"));
} 

CString CFMDoiXuat::GetQueryString(){
	CString szSQL, szWhere, szPost;

	UpdateData(true);
	if(!m_szObjectKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hd_object = %s "), m_szObjectKey);
	}

	
	if(!m_szStatusKey.IsEmpty())
	{
		szPost.Format(_T(" AND hfe_status = '%s' "), m_szStatusKey);
	}


	szSQL.Format(_T(" SELECT hd_patientno AS patientno,") \
	_T("   docno,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                             AS pname,") \
	_T("   hp_birthdate                                                AS birthdate,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate)          AS age,") \
	_T("   sys_sel_getname('sys_sex', hp_sex)                          AS sex,") \
	_T("   hp_dtladdr                                                  AS detailaddress,") \
	_T("   hms_getaddress(hp_provid,hp_distid, hp_villid)              AS address,") \
	_T("   hp_workplace                                                AS workplace,") \
	_T("   sys_sel_getname('hms_rank', CAST(hp_rank AS NVARCHAR2(15))) AS rank,") \
	_T("   hms_getobjectname(hd_object)                                AS objectname,") \
	_T("   patpaid - refund                                            AS patpaid,") \
	_T("   difcost                                                     AS difcost,") \
	_T("   refund                                                      AS refund,") \
	_T("   eletronic,") \
	_T("   amount AS amount") \
	_T(" FROM") \
	_T("   (SELECT docno,") \
	_T("     SUM(patpaid)   AS patpaid,") \
	_T("     SUM(difcost)   AS difcost,") \
	_T("     SUM(refund)    AS refund,") \
	_T("     SUM(eletronic) AS eletronic,") \
	_T("     SUM(amount)    AS amount") \
	_T("   FROM") \
	_T("     (SELECT hfe_docno AS docno,") \
	_T("       hfe_patpaid     AS patpaid,") \
	_T("       hfe_diffcost    AS difcost,") \
	_T("       0               AS refund,") \
	_T("       0               AS eletronic,") \
	_T("       hfe_amount      AS amount") \
	_T("     FROM hms_fee_invoice") \
	_T("     WHERE HFE_LOCKEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T("     AND NVL(hfe_locked,'N') ='Y'") \
	_T("     AND hfe_status = 'P'") \
	_T("     UNION ALL") \
	_T("     SELECT r1.hfe_docno,") \
	_T("       0           AS patpaid,") \
	_T("       0           AS difcost,") \
	_T("       r2.hfe_cost AS refund,") \
	_T("       0           AS eletronic,") \
	_T("       0           AS amount") \
	_T("     FROM hms_fee_refund r1") \
	_T("     LEFT JOIN hms_fee_refundline r2") \
	_T("     ON(r2.hfe_invoiceno =r1.hfe_invoiceno)") \
	_T("     WHERE r1.HFE_LOCKEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T("     AND NVL(r2.HFE_GROUP, 'N') <> 'N'") \
	_T("     AND r1.HFE_TYPE             = 'F'") \
	_T("     AND r2.HFE_INVOICENO        > 0") \
	_T("     UNION ALL") \
	_T("     SELECT hfe_docno,") \
	_T("       0           AS patpaid,") \
	_T("       0           AS difcost,") \
	_T("       0           AS refund,") \
	_T("       hfe_patpaid AS eletronic,") \
	_T("       0           AS amount") \
	_T("     FROM hms_fee_electronicline") \
	_T("     WHERE HFE_LOCKEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
	_T("     )") \
	_T("   GROUP BY docno") \
	_T("   )") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno=docno)") \
	_T(" LEFT JOIN hms_patient") \
	_T(" ON(hp_patientno          =hd_patientno)") \
	_T(" WHERE (patpaid + refund + eletronic) > 0 %s") \
	_T(" ORDER BY docno"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szPost,szWhere);

	//_msg(_T("%s"), szSQL);

	return szSQL;
}
