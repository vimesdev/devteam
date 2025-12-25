#include "stdafx.h"
#include "HMSMainFrame.h"
#include "TMTinhhinhthudung.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMTinhhinhthudung *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMTinhhinhthudung* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMTinhhinhthudung *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMTinhhinhthudung *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMTinhhinhthudung *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMTinhhinhthudung *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMTinhhinhthudung *pVw = (CTMTinhhinhthudung *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMTinhhinhthudung *pVw = (CTMTinhhinhthudung *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddTMTinhhinhthudungFnc(CWnd *pWnd){
	 return ((CTMTinhhinhthudung*)pWnd)->OnAddTMTinhhinhthudung();
} 
static int _OnEditTMTinhhinhthudungFnc(CWnd *pWnd){
	 return ((CTMTinhhinhthudung*)pWnd)->OnEditTMTinhhinhthudung();
} 
static int _OnDeleteTMTinhhinhthudungFnc(CWnd *pWnd){
	 return ((CTMTinhhinhthudung*)pWnd)->OnDeleteTMTinhhinhthudung();
} 
static int _OnSaveTMTinhhinhthudungFnc(CWnd *pWnd){
	 return ((CTMTinhhinhthudung*)pWnd)->OnSaveTMTinhhinhthudung();
} 
static int _OnCancelTMTinhhinhthudungFnc(CWnd *pWnd){
	 return ((CTMTinhhinhthudung*)pWnd)->OnCancelTMTinhhinhthudung();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	((CTMTinhhinhthudung*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CTMTinhhinhthudung*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CTMTinhhinhthudung*)pWnd)->OnOutPatientSelect();
}
CTMTinhhinhthudung::CTMTinhhinhthudung(CWnd *pWnd)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMTinhhinhthudung::~CTMTinhhinhthudung(){
}
void CTMTinhhinhthudung::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 91);
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndAll.Create(this, _T("All"), 6, 97, 86, 122);
	m_wndInPatient.Create(this, _T("InPatient"), 90, 97, 170, 122);
	m_wndOutPatient.Create(this, _T("OutPatient"), 174, 97, 254, 122);
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 235, 126, 345, 151);
	m_wndExport.Create(this, _T("&Export"), 350, 126, 425, 151);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
}
void CTMTinhhinhthudung::OnInitializeComponents(){
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
void CTMTinhhinhthudung::OnSetWindowEvents(){
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
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	m_wndAll.SetCheck(true);
	m_szCondition = _T("A");
}
void CTMTinhhinhthudung::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CTMTinhhinhthudung::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMTinhhinhthudung::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMTinhhinhthudung::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CTMTinhhinhthudung::SetMode(int nMode){
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
/*void CTMTinhhinhthudung::OnYearChange(){
	
} */
/*void CTMTinhhinhthudung::OnYearSetfocus(){
	
} */
/*void CTMTinhhinhthudung::OnYearKillfocus(){
	
} */
int CTMTinhhinhthudung::OnYearCheckValue(){
	return 0;
} 
void CTMTinhhinhthudung::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMTinhhinhthudung::OnReportPeriodSelendok(){
	CString tmpStr;
	CDate date;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		date.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, date.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  date.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());		
	}	
	UpdateData(false);	
}
/*void CTMTinhhinhthudung::OnReportPeriodSetfocus(){
	
}*/
/*void CTMTinhhinhthudung::OnReportPeriodKillfocus(){
	
}*/
long CTMTinhhinhthudung::OnReportPeriodLoadData(){
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
/*void CTMTinhhinhthudung::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMTinhhinhthudung::OnFromDateChange(){
	
} */
/*void CTMTinhhinhthudung::OnFromDateSetfocus(){
	
} */
/*void CTMTinhhinhthudung::OnFromDateKillfocus(){
	
} */
int CTMTinhhinhthudung::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMTinhhinhthudung::OnToDateChange(){
	
} */
/*void CTMTinhhinhthudung::OnToDateSetfocus(){
	
} */
/*void CTMTinhhinhthudung::OnToDateKillfocus(){
	
} */
int CTMTinhhinhthudung::OnToDateCheckValue(){
	return 0;
} 
void CTMTinhhinhthudung::OnAllSelect(){
	m_szCondition = _T("A");
}
void CTMTinhhinhthudung::OnInPatientSelect(){
	m_szCondition = _T("I");
}
void CTMTinhhinhthudung::OnOutPatientSelect(){
	m_szCondition = _T("E");
}
void CTMTinhhinhthudung::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 
void CTMTinhhinhthudung::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;

	int c[20], tc[20];
	for (int i = 1; i<=19; i++)
	{
		c[i] = 0;
		tc[i] = 0;
	}

	CExcel xls;
	if (!xls.Load(_T("Exports\\Tinhhinhthudung.xls"))) AfxMessageBox(_T("Chưa có Files này trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	
	nRow = 8;
	nCol = 0;
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("1"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("\x43\x169"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT|FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		for (int i=3; i<=19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			tc[i] += str2int(tmpStr);
			xls.SetCellText(nCol+i-1, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("2"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("V\xE0o vi\x1EC7n"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT|FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		for (int i=3; i<=19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			tc[i] += str2int(tmpStr);
			xls.SetCellText(nCol+i-1, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("3"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("\x43huy\x1EC3n kho\x61 \x111\x1EBFn"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT|FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		for (int i=3; i<=19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			tc[i] += str2int(tmpStr);
			xls.SetCellText(nCol+i-1, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	xls.SetCellText(nCol, nRow, _T("4"), FMT_TEXT|FMT_CENTER);
	xls.SetCellText(nCol+1, nRow, _T("TS thu dung"), FMT_TEXT);
	for (int i=3; i<=19; i++)
	{

		xls.SetCellText(nCol+i-1, nRow, int2str(tc[i]), FMT_NUMBER1|FMT_CENTER);
	}
	nRow++;

	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("5"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("R\x61 vi\x1EC7n"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT|FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		for (int i=3; i<=19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			xls.SetCellText(nCol+i-1, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	szSQL = GetQueryString4();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("6"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("N\x1EB7ng \x78in v\x1EC1"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT|FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		for (int i=3; i<=19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			xls.SetCellText(nCol+i-1, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	szSQL = GetQueryString5();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("7"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("\x43huy\x1EC3n kho\x61 \x111i"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT|FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		for (int i=3; i<=19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			xls.SetCellText(nCol+i-1, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	szSQL = GetQueryString6();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("8"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("T\x1EED vong"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT|FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		for (int i=3; i<=19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			xls.SetCellText(nCol+i-1, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	szSQL = GetQueryString7();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, _T("9"), FMT_TEXT|FMT_CENTER);
		xls.SetCellText(nCol+1, nRow, _T("\x43\x1ED9ng gi\x1EA3m"), FMT_TEXT);
		nRow++;
	}
	while(!rs.IsEOF()){
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT|FMT_CENTER);
		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		for (int i=3; i<=19; i++)
		{
			szTemp.Format(_T("c%d"), i);
			rs.GetValue(szTemp, tmpStr);
			tc[i] -= str2int(tmpStr);
			xls.SetCellText(nCol+i-1, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);
		}
		rs.MoveNext();
		nRow++;
	}

	xls.SetCellText(nCol, nRow, _T("10"), FMT_TEXT|FMT_CENTER);
	xls.SetCellText(nCol+1, nRow, _T("\x43\xF2n l\x1EA1i th\xE1ng s\x61u"), FMT_TEXT);
	for (int i=3; i<=19; i++)
	{

		xls.SetCellText(nCol+i-1, nRow, int2str(tc[i]), FMT_NUMBER1|FMT_CENTER);
	}
	nRow++;

	EndWaitCursor();
	xls.Save(_T("Exports\\Tinhhinhthudung2.xls"));
} 
int CTMTinhhinhthudung::OnAddTMTinhhinhthudung(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMTinhhinhthudung::OnEditTMTinhhinhthudung(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMTinhhinhthudung::OnDeleteTMTinhhinhthudung(){
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
 		OnCancelTMTinhhinhthudung();
 	}
	return 0;
}
int CTMTinhhinhthudung::OnSaveTMTinhhinhthudung(){
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
 		//OnTMTinhhinhthudungListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMTinhhinhthudung::OnCancelTMTinhhinhthudung(){
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
int CTMTinhhinhthudung::OnTMTinhhinhthudungListLoadData(){
	return 0;
}
CString CTMTinhhinhthudung::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
		if (m_szCondition == _T("A"))
			szWhere.AppendFormat(_T(""));
		//Trang thai dieu tri noi tru
		if (m_szCondition == _T("I"))
			szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
		//Trang thai dieu tri ngoai tru
		if (m_szCondition == _T("E"))
			szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));
		
		szSQL.Format(_T(" SELECT") \
			_T(" typeid AS c1,") \
			_T(" typename AS c2,") \
			_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c3,") \
			_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c4,") \
			_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c5,") \
			
			
			_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c6,") \
			_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c7,") \
			_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c8,") \


			_T(" SUM(CASE WHEN hd_object = 10 THEN 1 ELSE 0 END) AS c9,") \
			_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c10,") \
			_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c11,") \
			_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c12,") \
			_T(" SUM(CASE WHEN hd_object = 8 THEN 1 ELSE 0 END) AS c13,") \
			_T(" SUM(CASE WHEN hd_object = 9 THEN 1 ELSE 0 END) AS c14,") \
			_T(" SUM(CASE WHEN hd_object = 3 THEN 1 ELSE 0 END) AS c15,") \
			_T(" SUM(CASE WHEN hd_object = 7 THEN 1 ELSE 0 END) AS c16,") \
			_T(" SUM(CASE WHEN hd_object = 4 THEN 1 ELSE 0 END) AS c17,") \
			_T(" SUM(CASE WHEN hd_object = 5 THEN 1 ELSE 0 END) AS c18,") \
			_T(" COUNT(*) AS c19") \
			_T(" FROM") \
			_T(" (") \
			_T(" SELECT DISTINCT") \
			_T(" 1 AS typeid,") \
			_T(" '\x43\x169' AS typename,") \
			_T(" hd_docno,") \
			_T(" hd_object,") \
			_T(" hd_rank") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_clinical_record") \
			_T(" ON(hcr_docno=hd_docno)") \
			_T(" LEFT JOIN hms_treatment_record") \
			_T(" ON(htr_docno         =hd_docno)") \
			_T(" WHERE htr_deptid NOT  IN('A4')") \
			_T(" AND htr_status       ='I'") \
			_T(" AND htr_deptid       ='%s'") \
			_T(" AND htr_admitdate    < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
			_T(" UNION ALL") \
			_T(" SELECT DISTINCT ") \
			_T(" 1 AS typeid,") \
			_T(" '\x43\x169' AS typename,") \
			_T(" hd_docno,") \
			_T(" hd_object,") \
			_T(" hd_rank") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_clinical_record") \
			_T(" ON(hcr_docno=hd_docno)") \
			_T(" LEFT JOIN hms_treatment_record") \
			_T(" ON(htr_docno           =hd_docno)") \
			_T(" WHERE htr_status         ='T'") \
			_T(" AND htr_deptid       ='%s'") \
			_T(" AND htr_admitdate      < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
			_T(" )") \
			_T(" GROUP BY") \
			_T(" typeid,") \
			_T(" typename") \
			_T(" ORDER BY") \
			_T(" typeid"), pMF->GetCurrentDepartmentID(), m_szFromDate, szWhere, pMF->GetCurrentDepartmentID(), m_szFromDate, m_szFromDate, szWhere);
	return szSQL;
}

CString CTMTinhhinhthudung::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));	

	szSQL.Format(_T(" SELECT") \
		_T(" 2 AS c1,") \
		_T(" 'V\xE0o vi\x1EC7n' AS c2,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c3,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c4,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c5,") \
		

		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c6,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c7,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c8,") \


		_T(" SUM(CASE WHEN hd_object = 10 THEN 1 ELSE 0 END) AS c9,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c10,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c11,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c12,") \
		_T(" SUM(CASE WHEN hd_object = 8 THEN 1 ELSE 0 END) AS c13,") \
		_T(" SUM(CASE WHEN hd_object = 9 THEN 1 ELSE 0 END) AS c14,") \
		_T(" SUM(CASE WHEN hd_object = 3 THEN 1 ELSE 0 END) AS c15,") \
		_T(" SUM(CASE WHEN hd_object = 7 THEN 1 ELSE 0 END) AS c16,") \
		_T(" SUM(CASE WHEN hd_object = 4 THEN 1 ELSE 0 END) AS c17,") \
		_T(" SUM(CASE WHEN hd_object = 5 THEN 1 ELSE 0 END) AS c18,") \
		_T(" COUNT(*) AS c19") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON ( hcr_docno       = hd_docno)") \
		_T(" WHERE htr_status      <> 'A'") \
		_T(" AND htr_deptid       ='%s'") \
		_T(" AND hcr_admitdept    =htr_deptid") \
		_T(" AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}

CString CTMTinhhinhthudung::GetQueryString2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));


	szSQL.Format(_T(" SELECT") \
		_T(" 3 AS c1,") \
		_T(" '\x43huy\x1EC3n kho\x61 \x111\x1EBFn' AS c2,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c3,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c4,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c5,") \
		

		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c6,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c7,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c8,") \

		_T(" SUM(CASE WHEN hd_object = 10 THEN 1 ELSE 0 END) AS c9,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c10,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c11,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c12,") \
		_T(" SUM(CASE WHEN hd_object = 8 THEN 1 ELSE 0 END) AS c13,") \
		_T(" SUM(CASE WHEN hd_object = 9 THEN 1 ELSE 0 END) AS c14,") \
		_T(" SUM(CASE WHEN hd_object = 3 THEN 1 ELSE 0 END) AS c15,") \
		_T(" SUM(CASE WHEN hd_object = 7 THEN 1 ELSE 0 END) AS c16,") \
		_T(" SUM(CASE WHEN hd_object = 4 THEN 1 ELSE 0 END) AS c17,") \
		_T(" SUM(CASE WHEN hd_object = 5 THEN 1 ELSE 0 END) AS c18,") \
		_T(" COUNT(*) AS c19") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON ( hcr_docno       = hd_docno )") \
		_T(" WHERE htr_status      <> 'A'") \
		_T(" AND htr_deptid       ='%s'") \
		_T(" AND htr_idx          > 1") \
		_T(" AND hcr_admitdept   <>htr_deptid") \
		_T(" AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere);
	return szSQL;

}

CString CTMTinhhinhthudung::GetQueryString3()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	szSQL.Format(_T(" SELECT") \
		_T(" typeid AS c1,") \
		_T(" typename AS c2,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c3,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c4,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c5,") \

		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c6,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c7,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c8,") \


		_T(" SUM(CASE WHEN hd_object = 10 THEN 1 ELSE 0 END) AS c9,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c10,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c11,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c12,") \
		_T(" SUM(CASE WHEN hd_object = 8 THEN 1 ELSE 0 END) AS c13,") \
		_T(" SUM(CASE WHEN hd_object = 9 THEN 1 ELSE 0 END) AS c14,") \
		_T(" SUM(CASE WHEN hd_object = 3 THEN 1 ELSE 0 END) AS c15,") \
		_T(" SUM(CASE WHEN hd_object = 7 THEN 1 ELSE 0 END) AS c16,") \
		_T(" SUM(CASE WHEN hd_object = 4 THEN 1 ELSE 0 END) AS c17,") \
		_T(" SUM(CASE WHEN hd_object = 5 THEN 1 ELSE 0 END) AS c18,") \
		_T(" COUNT(*) AS c19") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" CASE WHEN htr_suggestion NOT IN('M', 'F') AND hcr_result NOT IN(4, 5, 6, 7) THEN 5") \
		_T(" END AS typeid,") \
		_T(" CASE WHEN htr_suggestion NOT IN('M', 'F') AND hcr_result NOT IN(4, 5, 6, 7) THEN 'R\x61 vi\x1EC7n'") \
		_T(" END AS typename,") \
		_T(" hd_docno,") \
		_T(" hd_object,") \
		_T(" hd_rank") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON ( hcr_docno       = hd_docno )") \
		_T(" WHERE htr_status       = 'T'") \
		_T(" AND htr_deptid       ='%s'") \
		_T(" AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" )") \
		_T(" tbl") \
		_T(" WHERE length(typename) > 0") \
		_T(" GROUP BY") \
		_T(" typeid,") \
		_T(" typename") \
		_T(" ORDER BY") \
		_T(" typeid"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}

CString CTMTinhhinhthudung::GetQueryString4()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	
	szSQL.Format(_T(" SELECT") \
		_T(" typeid AS c1,") \
		_T(" typename AS c2,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c3,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c4,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c5,") \


		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c6,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c7,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c8,") \



		_T(" SUM(CASE WHEN hd_object = 10 THEN 1 ELSE 0 END) AS c9,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c10,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c11,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c12,") \
		_T(" SUM(CASE WHEN hd_object = 8 THEN 1 ELSE 0 END) AS c13,") \
		_T(" SUM(CASE WHEN hd_object = 9 THEN 1 ELSE 0 END) AS c14,") \
		_T(" SUM(CASE WHEN hd_object = 3 THEN 1 ELSE 0 END) AS c15,") \
		_T(" SUM(CASE WHEN hd_object = 7 THEN 1 ELSE 0 END) AS c16,") \
		_T(" SUM(CASE WHEN hd_object = 4 THEN 1 ELSE 0 END) AS c17,") \
		_T(" SUM(CASE WHEN hd_object = 5 THEN 1 ELSE 0 END) AS c18,") \
		_T(" COUNT(*) AS c19") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" CASE WHEN htr_suggestion = 'T' AND hcr_result IN (4, 7) THEN 6") \
		_T(" END AS typeid,") \
		_T(" CASE WHEN htr_suggestion = 'T' AND hcr_result IN (4, 7) THEN 'N\x1EB7ng \x78in v\x1EC1'") \
		_T(" END AS typename,") \
		_T(" hd_docno,") \
		_T(" hd_object,") \
		_T(" hd_rank") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON ( hcr_docno       = hd_docno )") \
		_T(" WHERE htr_status       = 'T'") \
		_T(" AND htr_deptid       ='%s'") \
		_T(" AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" )") \
		_T(" tbl") \
		_T(" WHERE length(typename) > 0") \
		_T(" GROUP BY") \
		_T(" typeid,") \
		_T(" typename") \
		_T(" ORDER BY") \
		_T(" typeid"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}

CString CTMTinhhinhthudung::GetQueryString5()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));	

	szSQL.Format(_T(" SELECT") \
		_T(" typeid AS c1,") \
		_T(" typename AS c2,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c3,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c4,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c5,") \

		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c6,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c7,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c8,") \



		_T(" SUM(CASE WHEN hd_object = 10 THEN 1 ELSE 0 END) AS c9,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c10,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c11,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c12,") \
		_T(" SUM(CASE WHEN hd_object = 8 THEN 1 ELSE 0 END) AS c13,") \
		_T(" SUM(CASE WHEN hd_object = 9 THEN 1 ELSE 0 END) AS c14,") \
		_T(" SUM(CASE WHEN hd_object = 3 THEN 1 ELSE 0 END) AS c15,") \
		_T(" SUM(CASE WHEN hd_object = 7 THEN 1 ELSE 0 END) AS c16,") \
		_T(" SUM(CASE WHEN hd_object = 4 THEN 1 ELSE 0 END) AS c17,") \
		_T(" SUM(CASE WHEN hd_object = 5 THEN 1 ELSE 0 END) AS c18,") \
		_T(" COUNT(*) AS c19") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" CASE WHEN htr_suggestion = 'M' THEN 7") \
		_T(" END AS typeid,") \
		_T(" CASE WHEN htr_suggestion = 'M' THEN '\x43huy\x1EC3n kho\x61 \x111i'") \
		_T(" END AS typename,") \
		_T(" hd_docno,") \
		_T(" hd_object,") \
		_T(" hd_rank") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON ( hcr_docno       = hd_docno )") \
		_T(" WHERE htr_status       = 'T'") \
		_T(" AND htr_deptid       ='%s'") \
		_T(" AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" )") \
		_T(" tbl") \
		_T(" WHERE length(typename) > 0") \
		_T(" GROUP BY") \
		_T(" typeid,") \
		_T(" typename") \
		_T(" ORDER BY") \
		_T(" typeid"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}

CString CTMTinhhinhthudung::GetQueryString6()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	szSQL.Format(_T(" SELECT") \
		_T(" typeid AS c1,") \
		_T(" typename AS c2,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c3,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c4,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c5,") \

		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c6,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c7,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c8,") \



		_T(" SUM(CASE WHEN hd_object = 10 THEN 1 ELSE 0 END) AS c9,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c10,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c11,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c12,") \
		_T(" SUM(CASE WHEN hd_object = 8 THEN 1 ELSE 0 END) AS c13,") \
		_T(" SUM(CASE WHEN hd_object = 9 THEN 1 ELSE 0 END) AS c14,") \
		_T(" SUM(CASE WHEN hd_object = 3 THEN 1 ELSE 0 END) AS c15,") \
		_T(" SUM(CASE WHEN hd_object = 7 THEN 1 ELSE 0 END) AS c16,") \
		_T(" SUM(CASE WHEN hd_object = 4 THEN 1 ELSE 0 END) AS c17,") \
		_T(" SUM(CASE WHEN hd_object = 5 THEN 1 ELSE 0 END) AS c18,") \
		_T(" COUNT(*) AS c19") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" CASE WHEN htr_suggestion = 'T' AND hcr_result IN(5, 6) THEN 8 END AS typeid,") \
		_T(" CASE WHEN htr_suggestion = 'T' AND hcr_result IN(5, 6) THEN 'T\x1EED vong' END AS typename,") \
		_T(" hd_docno,") \
		_T(" hd_object,") \
		_T(" hd_rank") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON ( hcr_docno       = hd_docno )") \
		_T(" WHERE htr_status       = 'T'") \
		_T(" AND htr_deptid       ='%s'") \
		_T(" AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" )") \
		_T(" tbl") \
		_T(" WHERE length(typename) > 0") \
		_T(" GROUP BY") \
		_T(" typeid,") \
		_T(" typename") \
		_T(" ORDER BY") \
		_T(" typeid"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}

CString CTMTinhhinhthudung::GetQueryString7()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));	

	szSQL.Format(_T(" SELECT") \
		_T(" 9 AS c1,") \
		_T(" '\x43\x1ED9ng gi\x1EA3m' AS c2,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c3,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c4,") \
		_T(" SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c5,") \

		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c6,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c7,") \
		_T(" SUM(CASE WHEN hd_object IN(11) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c8,") \


		_T(" SUM(CASE WHEN hd_object = 10 THEN 1 ELSE 0 END) AS c9,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(15, 16, 17, 18, 21, 22, 23, 24) THEN 1 ELSE 0 END) AS c10,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN(13, 14) THEN 1 ELSE 0 END) AS c11,") \
		_T(" SUM(CASE WHEN hd_object IN(2,12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ELSE 0 END) AS c12,") \
		_T(" SUM(CASE WHEN hd_object = 8 THEN 1 ELSE 0 END) AS c13,") \
		_T(" SUM(CASE WHEN hd_object = 9 THEN 1 ELSE 0 END) AS c14,") \
		_T(" SUM(CASE WHEN hd_object = 3 THEN 1 ELSE 0 END) AS c15,") \
		_T(" SUM(CASE WHEN hd_object = 7 THEN 1 ELSE 0 END) AS c16,") \
		_T(" SUM(CASE WHEN hd_object = 4 THEN 1 ELSE 0 END) AS c17,") \
		_T(" SUM(CASE WHEN hd_object = 5 THEN 1 ELSE 0 END) AS c18,") \
		_T(" COUNT(*) AS c19") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON(htr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_clinical_record") \
		_T(" ON ( hcr_docno       = hd_docno )") \
		_T(" WHERE htr_status       = 'T'") \
		_T(" AND htr_deptid       ='%s'") \
		_T(" AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}

CString CTMTinhhinhthudung::GetQueryString_Ex(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;

	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	szSQL.Format(_T(" SELECT typeid, ") \
		_T("        typename, ") \
		_T("        SUM(CASE WHEN hd_object = 1 AND hd_rank IN( 15, 16, 17, 18, ") \
		_T("                                 21, 22, 23, 24 ) THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS quantuong, ") \
		_T("        SUM(CASE WHEN hd_object = 1 AND hd_rank IN( 13, 14 ) THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS quanta34, ") \
		_T("        SUM(CASE WHEN hd_object = 1 AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS quanta2, ") \
		_T("        SUM(CASE WHEN hd_object = 11 THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS bhytqn, ") \
		_T("        SUM(CASE WHEN hd_object = 10 THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS bhytqd, ") \
		_T("        SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN( 15, 16, 17, 18, ") \
		_T("                                 21, 22, 23, 24 ) THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS bhquantuong, ") \
		_T("        SUM(CASE WHEN hd_object IN(2,12) AND hd_rank IN( 13, 14 ) THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS bhquanta34, ") \
		_T("        SUM(CASE WHEN hd_object IN(2,12) AND hd_rank NOT IN(15, 16, 17, 18, 21, 22, 23, 24, 13, 14) THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS bhquanta2, ") \
		_T("        SUM(CASE WHEN hd_object = 8 THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS ban, ") \
		_T("        SUM(CASE WHEN hd_object = 9 THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS te, ") \
		_T("        SUM(CASE WHEN hd_object = 3 THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS cs, ") \
		_T("        SUM(CASE WHEN hd_object = 7 THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS dv, ") \
		_T("        SUM(CASE WHEN hd_object = 4 THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS bhytkhac, ") \
		_T("        SUM(CASE WHEN hd_object = 5 THEN 1 ") \
		_T("            ELSE 0 ") \
		_T("            END) AS bhyttn, ") \
		_T("        Count(*) AS total ") \
		_T(" FROM (") \
		_T(" SELECT * ") \
		_T(" FROM   (SELECT    DISTINCT 1 AS typeid, ") \
		_T("                            '\x43\x169' AS typename, ") \
		_T("                            hd_docno, ") \
		_T("                            hd_object, ") \
		_T("                            hd_rank ") \
		_T("         FROM      hms_patient ") \
		_T("         LEFT JOIN hms_doc ON( hd_patientno = hp_patientno ) ") \
		_T("         LEFT JOIN hms_clinical_record ON( hcr_docno = hd_docno ) ") \
		_T("         LEFT JOIN hms_treatment_record ON( htr_docno = hd_docno ) ") \
		_T("         WHERE     htr_deptid NOT IN( 'A4' ) AND htr_status = 'I' AND htr_deptid ='%s' AND htr_admitdate < To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T("         UNION ALL ") \
		_T("         SELECT    DISTINCT 1 AS typeid, ") \
		_T("                            '\x43\x169' AS typename, ") \
		_T("                            hd_docno, ") \
		_T("                            hd_object, ") \
		_T("                            hd_rank ") \
		_T("         FROM      hms_patient ") \
		_T("         LEFT JOIN hms_doc ON( hd_patientno = hp_patientno ) ") \
		_T("         LEFT JOIN hms_clinical_record ON( hcr_docno = hd_docno ) ") \
		_T("         LEFT JOIN hms_treatment_record ON( htr_docno = hd_docno ) ") \
		_T("         WHERE     htr_status = 'T' AND htr_deptid ='%s' AND htr_admitdate < To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate >= To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T("         UNION ALL ") \
		_T("         SELECT    2 AS typeid, ") \
		_T("                   'V\xE0o vi\x1EC7n' AS typename, ") \
		_T("                   hd_docno, ") \
		_T("                   hd_object, ") \
		_T("                   hd_rank ") \
		_T("         FROM      hms_doc ") \
		_T("         LEFT JOIN hms_treatment_record ON( htr_docno = hd_docno ) ") \
		_T("         LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno ) ") \
		_T("         WHERE     htr_status <> 'A' AND hcr_admitdept = htr_deptid AND htr_deptid ='%s' AND htr_admitdate BETWEEN To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T("         UNION ALL ") \
		_T("         SELECT    3 AS typeid, ") \
		_T("                   '\x43huy\x1EC3n kho\x61 \x111\x1EBFn' AS typename, ") \
		_T("                   hd_docno, ") \
		_T("                   hd_object, ") \
		_T("                   hd_rank ") \
		_T("         FROM      hms_doc ") \
		_T("         LEFT JOIN hms_treatment_record ON( htr_docno = hd_docno ) ") \
		_T("         LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno ) ") \
		_T("         WHERE     htr_status <> 'A' AND htr_idx > 1 AND hcr_admitdept <> htr_deptid AND htr_deptid ='%s' AND htr_admitdate BETWEEN To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T("         UNION ALL ") \
		_T("         SELECT    CASE WHEN htr_suggestion NOT IN( 'M', 'F' ) AND hcr_result NOT IN( 4, 5, 6, 7 ) THEN 5 ") \
		_T("                     WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 6 ") \
		_T("                     WHEN htr_suggestion = 'F' THEN 7 ") \
		_T("                     WHEN htr_suggestion = 'T' AND hcr_result IN( 5, 6 ) THEN 8 ") \
		_T("                   END AS typeid, ") \
		_T("                   CASE WHEN htr_suggestion NOT IN( 'M', 'F' ) AND hcr_result NOT IN( 4, 5, 6, 7 ) THEN 'R\x61 vi\x1EC7n' ") \
		_T("                     WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 'N\x1EB7ng \x78in v\x1EC1' ") \
		_T("                     WHEN htr_suggestion = 'F' THEN '\x43huy\x1EC3n kho\x61 \x111i' ") \
		_T("                     WHEN htr_suggestion = 'T' AND hcr_result IN( 5, 6 ) THEN 'T\x1EED vong' ") \
		_T("                   END AS typename, ") \
		_T("                   hd_docno, ") \
		_T("                   hd_object, ") \
		_T("                   hd_rank ") \
		_T("         FROM      hms_doc ") \
		_T("         LEFT JOIN hms_treatment_record ON( htr_docno = hd_docno ) ") \
		_T("         LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno ) ") \
		_T("         WHERE     htr_status = 'T' AND htr_deptid ='%s' AND htr_dischargedate BETWEEN To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T("         UNION ALL ") \
		_T("         SELECT    9 AS typeid, ") \
		_T("                   '\x43\x1ED9ng gi\x1EA3m' AS typename, ") \
		_T("                   hd_docno, ") \
		_T("                   hd_object, ") \
		_T("                   hd_rank ") \
		_T("         FROM      hms_doc ") \
		_T("         LEFT JOIN hms_treatment_record ON( htr_docno = hd_docno ) ") \
		_T("         LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno ) ") \
		_T("         WHERE     htr_status = 'T' AND htr_deptid ='%s' AND htr_dischargedate BETWEEN To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND To_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') %s) tbl ") \
		_T(" WHERE typeid IS NOT NULL)") \
		_T(" GROUP  BY typeid,typename ") \
		_T(" ORDER  BY typeid "), pMF->GetCurrentDepartmentID(), m_szFromDate, szWhere,
		pMF->GetCurrentDepartmentID(), m_szFromDate, m_szFromDate, szWhere,
		pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere,
		pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere,
		pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere,
		pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate, szWhere);
	return szSQL;

}


void CTMTinhhinhthudung::OnExportEx(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	CStringArray arrLabel, arrCol;
	int nGrpTotal[15], nGrp[15];//Bien so con lai va bien tong tung nhom
	int nNewID = 0, nOldID = 0, nRow = 0, nCol = 0, nTmp = 0, nIdx = 1;
	BOOL bFlag = false;
	szSQL = GetQueryString_Ex();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data!"));
		return;
	}
	for (int i = 0; i < 15; i++)
	{
		nGrpTotal[i] = 0;
		nGrp[i] = 0;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 18);
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

	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(0, 2, _T("T\xCCNH H\xCCNH THU \x44UNG"), FMT_TEXT | FMT_CENTER , true, 14);
	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(1, 4, _T("N\x1ED9i \x64ung"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(2, 4, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(2, 5, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(3, 5, _T("\x33//-\x34//"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(4, 5, _T("\x32//"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(5, 4, _T("\x42HQN"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(6, 4, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(7, 4, _T("\x42HQ"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(7, 5, _T("T\x1B0\x1EDBng"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(8, 5, _T("\x33//-\x34//"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(9, 5, _T("\x32//"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(10, 4, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(11, 4, _T("TE"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(12, 4, _T("CS"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(13, 4, _T("DV"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(14, 4, _T("BHK"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(15, 4, _T("BHTN"), FMT_TEXT | FMT_CENTER , true, 11);
	xls.SetCellText(16, 4, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER , true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 16);
	xls.SetMerge(3, 3, 0, 16);
	xls.SetMerge(4, 5, 0, 0);
	xls.SetMerge(4, 5, 1, 1);
	xls.SetMerge(4, 4, 2, 4);
	xls.SetMerge(4, 5, 5, 5);
	xls.SetMerge(4, 5, 6, 6);
	xls.SetMerge(4, 4, 7, 9);
	xls.SetMerge(4, 5, 10, 10);
	xls.SetMerge(4, 5, 11, 11);
	xls.SetMerge(4, 5, 12, 12);
	xls.SetMerge(4, 5, 13, 13);
	xls.SetMerge(4, 5, 14, 14);
	xls.SetMerge(4, 5, 15, 15);
	xls.SetMerge(4, 5, 16, 16);

	arrLabel.Add(_T("\x43\x169"));
	arrLabel.Add(_T("V\xE0o"));
	arrLabel.Add(_T("\x43K \x111\x1EBFn"));
	arrLabel.Add(_T("TS thu dung"));
	arrLabel.Add(_T("R\x61 vi\x1EC7n"));
	arrLabel.Add(_T("N\x1EB7ng \x78in v\x1EC1"));
	arrLabel.Add(_T("\x43K \x111i"));
	arrLabel.Add(_T("T\x1EED vong"));
	arrLabel.Add(_T("\x43\x1ED9ng gi\x1EA3m"));
	arrLabel.Add(_T("\x43\xF2n l\x1EA1i th\xE1ng s\x61u"));

	//arrCol.Add(_T("typename"));
	arrCol.Add(_T("quantuong"));
	arrCol.Add(_T("quanta34"));
	arrCol.Add(_T("quanta2"));
	arrCol.Add(_T("bhytqn"));
	arrCol.Add(_T("bhytqd"));
	arrCol.Add(_T("bhquantuong"));
	arrCol.Add(_T("bhquanta34"));
	arrCol.Add(_T("bhquanta2"));
	arrCol.Add(_T("ban"));
	arrCol.Add(_T("te"));
	arrCol.Add(_T("cs"));
	arrCol.Add(_T("dv"));
	arrCol.Add(_T("bhytkhac"));
	arrCol.Add(_T("bhyttn"));
	arrCol.Add(_T("total"));

	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("typeid"), nNewID);
		if (nNewID != nOldID)
		{
			if (nNewID > nOldID + 1)
			{
				//Them dong mac dinh
				if (nOldID == 3 && nNewID == 5)
				{
					//Bo qua quang 3-5
				}
				else
				{
					for (int i = nOldID; i < nNewID - 1; i++)
					{
						if (i == 3)
						{
							//K ghi dong thu dung
						}
						else
						{
							xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT, true);
							xls.SetCellText(1, nRow, arrLabel.GetAt(i), FMT_TEXT, true);
							nRow++;
						}

					}
				}
			}
			if (nNewID > 3 && (!bFlag))
			{
				//Thu dung
				xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT, true);
				xls.SetCellText(1, nRow, _T("Thu dung"), FMT_TEXT, true);
				for (int i = 0; i < arrCol.GetCount(); i++)
				{
					xls.SetCellText(i + 2, nRow, int2str(nGrp[i]), FMT_NUMBER1);
					nGrp[i] = 0;
				}
				nRow++;
				bFlag = true;
			}

			nOldID = nNewID;
		}
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT, true);
		xls.SetCellText(1, nRow, rs.GetValue(_T("typename")), FMT_TEXT, true);
		for (int i = 0; i < arrCol.GetCount(); i++)
		{
			rs.GetValue(arrCol.GetAt(i), nTmp);
			nGrp[i] += nTmp;
			xls.SetCellText(i+2, nRow, int2str(nTmp), FMT_NUMBER1);
			if (nNewID > 3)
			{
				if (nNewID != 9)
					nGrpTotal[i] -= nTmp;
			}			
			else
				nGrpTotal[i] += nTmp;
		}
		nRow++;
		rs.MoveNext();
	}
	//Phan duoi
	if (nNewID <=3)
	{
		//xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT, true);
		//xls.SetCellText(1, nRow, _T("Thu dung"), FMT_TEXT, true);
		//for (int i = 0; i < arrCol.GetCount(); i++)
		//{
		//	xls.SetCellText(i+2, nRow, int2str(nGrp[i]), FMT_NUMBER1);
		//}
		//nRow++;
		//Chay ngay hien tai
		nOldID = nNewID;
		nNewID = 9;
		if (nNewID != nOldID)
		{
			if (nNewID > nOldID + 1)
			{
				//Them dong mac dinh
				//if (nOldID == 3 && nNewID == 5)
				//{
				//	//Bo qua quang 3-5
				//}
				//else
				{
					for (int i = nOldID; i <= nNewID - 1; i++)
					{
						//if (i == 3)
						//{
						//	//K ghi dong thu dung
						//}
						//else
						{
							xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT, true);
							xls.SetCellText(1, nRow, arrLabel.GetAt(i), FMT_TEXT, true);
							if (i == 3)
								for (int i = 0; i < arrCol.GetCount(); i++)
								{
									xls.SetCellText(i + 2, nRow, int2str(nGrp[i]), FMT_NUMBER1);
									nGrp[i] = 0;
								}
							nRow++;
						}

					}
				}
			}
			//if (nNewID > 3 && (!bFlag))
			//{
			//	//Thu dung
			//	xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT, true);
			//	xls.SetCellText(1, nRow, _T("Thu dung"), FMT_TEXT, true);
			//	for (int i = 0; i < arrCol.GetCount(); i++)
			//	{
			//		xls.SetCellText(i + 2, nRow, int2str(nGrp[i]), FMT_NUMBER1);
			//		nGrp[i] = 0;
			//	}
			//	nRow++;
			//	bFlag = true;
			//}

			nOldID = nNewID;
		}
	}
	xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT, true);
	xls.SetCellText(1, nRow, _T("\x43\xF2n l\x1EA1i th\xE1ng s\x61u"), FMT_TEXT, true);
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(i+2, nRow, int2str(nGrpTotal[i]), FMT_NUMBER1);
	}
	xls.Save(_T("Exports\\Tinh hinh thu dung.xls"));

}