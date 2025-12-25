#include "stdafx.h"
#include "FMDanhSachThuChiBenhNhan.h"
#include "HMSMainFrame.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMDanhSachThuChiBenhNhan *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMDanhSachThuChiBenhNhan* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMDanhSachThuChiBenhNhan *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMDanhSachThuChiBenhNhan *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMDanhSachThuChiBenhNhan *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMDanhSachThuChiBenhNhan *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMDanhSachThuChiBenhNhan *pVw = (CFMDanhSachThuChiBenhNhan *)pWnd;
	pVw->OnExportSelect();
} 
CFMDanhSachThuChiBenhNhan::CFMDanhSachThuChiBenhNhan(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMDanhSachThuChiBenhNhan::~CFMDanhSachThuChiBenhNhan(){
}
void CFMDanhSachThuChiBenhNhan::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndExport.Create(this, _T("&Export"), 350, 95, 430, 120);

}
void CFMDanhSachThuChiBenhNhan::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CFMDanhSachThuChiBenhNhan::OnSetWindowEvents(){
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CFMDanhSachThuChiBenhNhan::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CFMDanhSachThuChiBenhNhan::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CFMDanhSachThuChiBenhNhan::SetMode(int nMode){
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
/*void CFMDanhSachThuChiBenhNhan::OnYearChange(){
	
} */
/*void CFMDanhSachThuChiBenhNhan::OnYearSetfocus(){
	
} */
/*void CFMDanhSachThuChiBenhNhan::OnYearKillfocus(){
	
} */
int CFMDanhSachThuChiBenhNhan::OnYearCheckValue(){
	return 0;
} 
void CFMDanhSachThuChiBenhNhan::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMDanhSachThuChiBenhNhan::OnReportPeriodSelendok(){
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
/*void CFMDanhSachThuChiBenhNhan::OnReportPeriodSetfocus(){
	
}*/
/*void CFMDanhSachThuChiBenhNhan::OnReportPeriodKillfocus(){
	
}*/
long CFMDanhSachThuChiBenhNhan::OnReportPeriodLoadData(){
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
/*void CFMDanhSachThuChiBenhNhan::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMDanhSachThuChiBenhNhan::OnFromDateChange(){
	
} */
/*void CFMDanhSachThuChiBenhNhan::OnFromDateSetfocus(){
	
} */
/*void CFMDanhSachThuChiBenhNhan::OnFromDateKillfocus(){
	
} */
int CFMDanhSachThuChiBenhNhan::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMDanhSachThuChiBenhNhan::OnToDateChange(){
	
} */
/*void CFMDanhSachThuChiBenhNhan::OnToDateSetfocus(){
	
} */
/*void CFMDanhSachThuChiBenhNhan::OnToDateKillfocus(){
	
} */
int CFMDanhSachThuChiBenhNhan::OnToDateCheckValue(){
	return 0;
} 
void CFMDanhSachThuChiBenhNhan::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	double nTotal = 0, nTotal2 = 0, nTotal3 = 0, nTotal4 = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 8);	xls.SetColumnWidth(2, 20);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 6);	xls.SetColumnWidth(5, 20);	xls.SetColumnWidth(6, 12);	xls.SetColumnWidth(7, 12);	xls.SetColumnWidth(8, 16);	xls.SetColumnWidth(9, 16);	xls.SetColumnWidth(10, 16);	xls.SetColumnWidth(11, 16);	xls.SetColumnWidth(12, 16);	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("\x44\x41NH S\xC1\x43H THU \x43HI \x43\x1EE6\x41 \x42\x1EC6NH NH\xC2N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 4, _T("M\xE3 \x42N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("Ng\xE0y sinh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("N\x1A1i l\xE0m vi\x1EC7\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("\x43\x1EA5p \x62\x1EAD\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("\x42\x1EC7nh nh\xE2n tr\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("Tr\x1EA3 \x63h\xEAnh l\x1EC7\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("Ho\xE0n tr\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 4, _T("T\x1ED5ng th\x61nh to\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 12);	xls.SetMerge(3, 3, 0, 12);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("patientno"), tmpStr);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("birthdate"), tmpStr);		xls.SetCellText(nCol+3, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("age"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("address"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("workplace"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("rank"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("objectname"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("patpaid"), tmpStr);		nTotal += str2double(tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("difcost"), tmpStr);		nTotal2 += str2double(tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("refund"), tmpStr);		nTotal3 += str2double(tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("amount"), tmpStr);		nTotal4 += str2double(tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);		nRow++;		rs.MoveNext();	}xls.SetCellText(nCol+2, nRow, _T("Tổng cộng"), FMT_TEXT, true);xls.SetCellText(nCol+9, nRow, double2str(nTotal), FMT_NUMBER1, true);xls.SetCellText(nCol+10, nRow, double2str(nTotal2), FMT_NUMBER1, true);xls.SetCellText(nCol+11, nRow, double2str(nTotal3), FMT_NUMBER1, true);xls.SetCellText(nCol+12, nRow, double2str(nTotal4), FMT_NUMBER1, true);	EndWaitCursor();	xls.Save(_T("Exports\\DanhSachThuChiCuaBN.xls"));
} 

CString CFMDanhSachThuChiBenhNhan::GetQueryString(){
	CString szSQL, szWhere;
	szSQL.Format(_T(" SELECT patientno,") \
		_T("   docno,") \
		_T("   pname,") \
		_T("   birthdate,") \
		_T("   age,") \
		_T("   detailaddress,") \
		_T("   address,") \
		_T("   workplace,") \
		_T("   rank,") \
		_T("   objectname,") \
		_T("   CEIL(SUM(patpaid)) AS patpaid,") \
		_T("   CEIL(SUM(difcost)) AS difcost,") \
		_T("   CEIL(SUM(refund))  AS refund,") \
		_T("   CEIL(SUM(amount))  AS amount") \
		_T(" FROM") \
		_T("   (SELECT hd_patientno AS patientno,") \
		_T("     docno,") \
		_T("     trim(hp_surname") \
		_T("     ||' '") \
		_T("     ||hp_midname") \
		_T("     ||' '") \
		_T("     ||hp_firstname)                                             AS pname,") \
		_T("     hp_birthdate                                                AS birthdate,") \
		_T("     hms_getage(trunc_date(hd_admitdate), hp_birthdate)          AS age,") \
		_T("     sys_sel_getname('sys_sex', hp_sex)                          AS sex,") \
		_T("     hp_dtladdr                                                  AS detailaddress,") \
		_T("     hms_getaddress(hp_provid,hp_distid, hp_villid)              AS address,") \
		_T("     hp_workplace                                                AS workplace,") \
		_T("     sys_sel_getname('hms_rank', CAST(hp_rank AS NVARCHAR2(15))) AS rank,") \
		_T("     hms_getobjectname(hd_object)                                AS objectname,") \
		_T("     patpaid - refund                                            AS patpaid,") \
		_T("     difcost                                                     AS difcost,") \
		_T("     refund                                                      AS refund,") \
		_T("     amount                                                      AS amount") \
		_T("   FROM") \
		_T("     (SELECT docno,") \
		_T("       patpaid,") \
		_T("       difcost,") \
		_T("       refund,") \
		_T("       amount") \
		_T("     FROM") \
		_T("       (SELECT f1.hfe_docno AS docno,") \
		_T("         f2.hfe_patpaid     AS patpaid,") \
		_T("         f2.hfe_diffcost    AS difcost,") \
		_T("         0                  AS refund,") \
		_T("         f2.hfe_cost        AS amount") \
		_T("       FROM") \
		_T("         (SELECT hfe_docno,") \
		_T("           hfe_invoiceno") \
		_T("         FROM hms_fee_invoice") \
		_T("         WHERE HFE_LOCKEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("         AND NVL(hfe_locked,'N') ='Y'") \
		_T("         ) f1") \
		_T("       LEFT JOIN hms_fee f2") \
		_T("       ON(f2.hfe_docno               =f1.hfe_docno") \
		_T("       AND f2.hfe_invoiceno          =f1.hfe_invoiceno)") \
		_T("       AND NVL(f2.hfe_category,'N') <> 'Y'") \
		_T("       )") \
		_T("     UNION ALL") \
		_T("     SELECT r1.hfe_docno,") \
		_T("       0           AS patpaid,") \
		_T("       0           AS difcost,") \
		_T("       r2.hfe_cost AS refund,") \
		_T("       0           AS amount") \
		_T("     FROM hms_fee_refund r1") \
		_T("     LEFT JOIN hms_fee_refundline r2") \
		_T("     ON(r2.hfe_invoiceno            =r1.hfe_invoiceno)") \
		_T("     WHERE r1.HFE_LOCKEDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     AND NVL(r1.hfe_electronic,'N') = 'N'") \
		_T("     AND NVL(r2.HFE_GROUP, 'N')    <> 'N'") \
		_T("     AND r1.HFE_TYPE                = 'F'") \
		_T("     AND r2.HFE_INVOICENO           > 0 ") \
		_T("     )") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno=docno)") \
		_T("   LEFT JOIN hms_patient") \
		_T("   ON(hp_patientno=hd_patientno)") \
		_T("   )") \
		_T(" WHERE (patpaid + refund) > 0") \
		_T(" GROUP BY patientno,") \
		_T("   docno,") \
		_T("   pname,") \
		_T("   birthdate,") \
		_T("   age,") \
		_T("   detailaddress,") \
		_T("   address,") \
		_T("   workplace,") \
		_T("   rank,") \
		_T("   objectname") \
		_T(" ORDER BY docno,") \
		_T("   pname"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
