#include "stdafx.h"
#include "HCDanhSachBNPhauthuatTYC.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCDanhsachBenhnhanPhauthuatTYC* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCDanhsachBenhnhanPhauthuatTYC* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHCDanhsachBenhnhanPhauthuatTYC *)pWnd)->OnObjectAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHCDanhsachBenhnhanPhauthuatTYC *pVw = (CHCDanhsachBenhnhanPhauthuatTYC *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHCDanhsachBenhnhanPhauthuatTYC *pVw = (CHCDanhsachBenhnhanPhauthuatTYC *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHCDanhsachBenhnhanPhauthuatTYC *pVw = (CHCDanhsachBenhnhanPhauthuatTYC *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHCDanhsachBenhnhanPhauthuatTYCFnc(CWnd *pWnd){
	 return ((CHCDanhsachBenhnhanPhauthuatTYC*)pWnd)->OnAddHCDanhsachBenhnhanPhauthuatTYC();
} 
static int _OnEditHCDanhsachBenhnhanPhauthuatTYCFnc(CWnd *pWnd){
	 return ((CHCDanhsachBenhnhanPhauthuatTYC*)pWnd)->OnEditHCDanhsachBenhnhanPhauthuatTYC();
} 
static int _OnDeleteHCDanhsachBenhnhanPhauthuatTYCFnc(CWnd *pWnd){
	 return ((CHCDanhsachBenhnhanPhauthuatTYC*)pWnd)->OnDeleteHCDanhsachBenhnhanPhauthuatTYC();
} 
static int _OnSaveHCDanhsachBenhnhanPhauthuatTYCFnc(CWnd *pWnd){
	 return ((CHCDanhsachBenhnhanPhauthuatTYC*)pWnd)->OnSaveHCDanhsachBenhnhanPhauthuatTYC();
} 
static int _OnCancelHCDanhsachBenhnhanPhauthuatTYCFnc(CWnd *pWnd){
	 return ((CHCDanhsachBenhnhanPhauthuatTYC*)pWnd)->OnCancelHCDanhsachBenhnhanPhauthuatTYC();
} 
CHCDanhsachBenhnhanPhauthuatTYC::CHCDanhsachBenhnhanPhauthuatTYC(CWnd *pParent)
{
	m_nDlgWidth = 420;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CHCDanhsachBenhnhanPhauthuatTYC::~CHCDanhsachBenhnhanPhauthuatTYC()
{
}
void CHCDanhsachBenhnhanPhauthuatTYC::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.Create(this,95, 90, 485, 115); 
	m_wndPrint.Create(this, _T("&Print"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 410, 125, 490, 150);
	m_wndObject.EnableWindow(false);
}
void CHCDanhsachBenhnhanPhauthuatTYC::OnInitializeComponents(){
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

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 210);
}
void CHCDanhsachBenhnhanPhauthuatTYC::OnSetWindowEvents(){
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);
}
void CHCDanhsachBenhnhanPhauthuatTYC::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHCDanhsachBenhnhanPhauthuatTYC::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHCDanhsachBenhnhanPhauthuatTYC::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHCDanhsachBenhnhanPhauthuatTYC::SetDefaultValues(){
	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
}
int CHCDanhsachBenhnhanPhauthuatTYC::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0,1,2,3, 4, -1); 
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
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnYearChange(){
	
} */
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnYearSetfocus(){
	
} */
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnYearKillfocus(){
	
} */
int CHCDanhsachBenhnhanPhauthuatTYC::OnYearCheckValue(){
	return 0;
} 
void CHCDanhsachBenhnhanPhauthuatTYC::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHCDanhsachBenhnhanPhauthuatTYC::OnReportPeriodSelendok()
{
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
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnReportPeriodSetfocus(){
	
}*/
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnReportPeriodKillfocus(){
	
}*/
long CHCDanhsachBenhnhanPhauthuatTYC::OnReportPeriodLoadData(){
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
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnFromDateChange(){
	
} */
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnFromDateSetfocus(){
	
} */
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnFromDateKillfocus(){
	
} */
int CHCDanhsachBenhnhanPhauthuatTYC::OnFromDateCheckValue(){
	return 0;
} 
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnToDateChange(){
	
} */
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnToDateSetfocus(){
	
} */
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnToDateKillfocus(){
	
} */
int CHCDanhsachBenhnhanPhauthuatTYC::OnToDateCheckValue(){
	return 0;
} 
void CHCDanhsachBenhnhanPhauthuatTYC::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHCDanhsachBenhnhanPhauthuatTYC::OnObjectSelendok(){
	 
}
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnObjectSetfocus(){
	
}*/
/*void CHCDanhsachBenhnhanPhauthuatTYC::OnObjectKillfocus(){
	
}*/
long CHCDanhsachBenhnhanPhauthuatTYC::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" where ho_id='%s'"), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems(); 
	szSQL.Format(_T(" select ho_id as id, ho_desc as name from hms_object %s order by cast(ho_id as integer)"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CrptThongkeTienPhiKham::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHCDanhsachBenhnhanPhauthuatTYC::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	
}
void CHCDanhsachBenhnhanPhauthuatTYC::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);

	TranslateString(_T("Danh sách bệnh nhân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);	

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect_V1();
			break;
		
	}
} 
void CHCDanhsachBenhnhanPhauthuatTYC::OnExportSelect_V1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	//AfxMessageBox(_T("Nếu dữ liệu quá 65000 dòng, chương trình sẽ tự tách ra 1 sheet mới trong excel"));
	
	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\C12_DANHSACHPHAUTHUAT_THEOYEUCAU.xls"))) 
		AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	//xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	int nCount = 1;
	
	while(!rs.IsEOF())
	{
		if(nRow == 65000)
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow = 0;
		}
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("patname"), tmpStr);		
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("yob"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);		
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("khoa"), tmpStr);		
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("chandoan"), tmpStr);		
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("bschidinh"), tmpStr);		
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenpttt"), tmpStr);		
		xls.SetCellText(nCol+7, nRow, tmpStr,FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("soluong"), tmpStr);		
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("ngayvao"), tmpStr);		
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayra"), tmpStr);		
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);	

		rs.GetValue(_T("doituong"), tmpStr);		
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("tgthuchien"), tmpStr);		
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);				
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[11] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 10; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[11] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 10; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\C12_DANHSACHPHAUTHUAT_THEOYEUCAU2.xls"));
} 
void CHCDanhsachBenhnhanPhauthuatTYC::OnExportSelect_V2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	AfxMessageBox(_T("Nếu dữ liệu quá 65000 dòng, chương trình sẽ tự tách ra 1 sheet mới trong excel"));
	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAOPHOITHANHTOAN_BAOHIEM.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	//xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString_V2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		
		
		if(nRow == 65000)
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow = 0;
		}
		
		rs.GetValue(_T("patname"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[8] > 0)
			{
				xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 3; i < 30; i++)
				{
					xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("descid"), tmpStr);		
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("unit"), tmpStr);		
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("qty"), tmpStr);		
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER2);

		rs.GetValue(_T("unitprice"), tmpStr);		
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER2);

		rs.GetValue(_T("insprice"), tmpStr);		
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER2);	

		rs.GetValue(_T("payrate"), tmpStr);		
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER2);		

		rs.GetValue(_T("cost"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("inscost"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("disrate"), tmpStr);		
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER2);

		rs.GetValue(_T("discount"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("copayment"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("patpaid"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("otherpaid"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1);
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[8] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[8] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOPHOITHANHTOAN_BAOHIEM2.xls"));
} 
void CHCDanhsachBenhnhanPhauthuatTYC::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	
} 
int CHCDanhsachBenhnhanPhauthuatTYC::OnAddHCDanhsachBenhnhanPhauthuatTYC(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHCDanhsachBenhnhanPhauthuatTYC::OnEditHCDanhsachBenhnhanPhauthuatTYC(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHCDanhsachBenhnhanPhauthuatTYC::OnDeleteHCDanhsachBenhnhanPhauthuatTYC(){
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
 		OnCancelHCDanhsachBenhnhanPhauthuatTYC(); 
 	}
	return 0;
}
int CHCDanhsachBenhnhanPhauthuatTYC::OnSaveHCDanhsachBenhnhanPhauthuatTYC(){
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
 		//OnHCDanhsachBenhnhanPhauthuatTYCListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHCDanhsachBenhnhanPhauthuatTYC::OnCancelHCDanhsachBenhnhanPhauthuatTYC(){
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
int CHCDanhsachBenhnhanPhauthuatTYC::OnHCDanhsachBenhnhanPhauthuatTYCListLoadData(){
	return 0;
}
CString CHCDanhsachBenhnhanPhauthuatTYC::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND HO_PERFORMDATE BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);			

			szSQL.Format(_T(" SELECT") \
			_T(" ho_docno as docno,") \
			_T(" get_patientname(ho_docno) as patname,") \
			_T(" extract(YEAR FROM hp_birthdate) AS yob,") \
			_T(" ho_deptid as khoa,") \
			_T(" hcr_maindisease as chandoan,") \
			_T(" get_username(ho_doctor) as bschidinh,") \
			_T(" hfe_desc as tenpttt,") \
			_T(" hfe_quantity as soluong,") \
			_T(" to_char(get_io_date(ho_docno, ho_treattime, 'I'), 'DD/MM/YYY') as ngayvao,") \
			_T(" to_char(get_io_date(ho_docno, ho_treattime, 'O'), 'DD/MM/YYY') as ngayra,") \
			_T(" hfe_cost as thanhtien,") \
			_T(" hms_getobjectname(HFE_OBJECT) as doituong,") \
			_T(" to_char(HO_PERFORMDATE, 'DD/MM/YYYY') as tgthuchien") \
			_T(" FROM hms_operation") \
			_T(" LEFT JOIN hms_fee ON (ho_docno = hfe_docno AND ho_idx = hfe_orderid)") \
			_T(" LEFT JOIN hms_clinical_record ON (ho_docno = hcr_docno)") \
			_T(" LEFT JOIN hms_patient ON (ho_patientno = hp_patientno)") \
			_T(" LEFT JOIN hms_fee_list ON (ho_itemid = hfl_feeid)") \
			_T(" WHERE 1=1 %s ") \
			_T(" AND NVL(hfl_categoryid, 0)  = '501' ") \
			_T(" AND hfe_status='P'") \
			_T(" ORDER BY ho_deptid, ho_performdate"), szWhere);

	//QueryOpener(szSQL);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}

CString CHCDanhsachBenhnhanPhauthuatTYC::GetQueryString_V2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szWhere;
	szWhere.Format(_T(" hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);	
				szSQL.Format(_T(" SELECT") \
				_T("    hfe_docno ") \
				_T("   || '-' ||") \
				_T("   hfe_invoiceno") \
				_T("   || '-' ||") \
				_T("   GET_PATIENTNAME(hfe_docno)") \
				_T("   || '-' ||") \
				_T("   to_char(get_io_date(hfe_docno, hfe_treattime, 'I'), 'DD/MM/YYYY')") \
				_T("   || '-' ||") \
				_T("   to_char(get_io_date(hfe_docno, hfe_treattime, 'O'), 'DD/MM/YYYY')") \
				_T("   || '-' ||") \
				_T("   HMS_GETOBJECTNAME(HFE_OBJECTID)") \
				_T("   || '-' ||") \
				_T("   get_card_no(hfe_docno, hfe_treattime)") \
				_T("   || '-' ||") \
				_T("   hfe_deptid as patname,  ") \
				_T("   hfe_docno as docno,") \
				_T("   hfe_invoiceno as invoiceno,") \
				_T("   CAST('Bệnh nhân bảo hiểm' AS NVARCHAR2(32)) AS objecttype,") \
				_T("   CASE") \
				_T("     WHEN hfg_type_id IS NULL") \
				_T("     AND typeid      ='D'") \
				_T("     THEN 800") \
				_T("     WHEN hfg_type_id IS NULL") \
				_T("     AND typeid      ='M'") \
				_T("     THEN 900") \
				_T("     WHEN hfg_type_id IS NULL") \
				_T("     AND typeid NOT IN('D','M')") \
				_T("     THEN 2000") \
				_T("     ELSE hfg_type_id") \
				_T("   END AS hfg_type_id,") \
				_T("   typeid,") \
				_T("   groupid,") \
				_T("   objectid,") \
				_T("   descid,") \
				_T("   itemid,") \
				_T("   hitech,") \
				_T("   optidx,") \
				_T("   inlist,") \
				_T("   unit,") \
				_T("   unitprice,") \
				_T("   insprice,") \
				_T("   cardidx,") \
				_T("   payrate,") \
				_T("   disrate,") \
				_T("   inpackage,") \
				_T("   nguontt,") \
				_T("   SUM(quantity)  AS qty,") \
				_T("   SUM(cost)      AS cost,") \
				_T("   SUM(inspaid)   AS inscost,") \
				_T("   SUM(discount)  AS discount,") \
				_T("   SUM(diffpaid)  AS diffcost,") \
				_T("   SUM(copayment) AS copayment,") \
				_T("   SUM(patpaid)   AS patpaid,") \
				_T("   SUM(otherpaid) AS otherpaid") \
				_T(" FROM") \
				_T("   (SELECT NVL(hfe_treat_inpackage,'N') AS inpackage,") \
				_T("     NVL(HFE_NGANSACH_PAID,'X')         AS NGANSACHPAID,") \
				_T("     NVL(hfe_otherpaid, 0)              AS otherpaid,") \
				_T("     hfe_class as classid,") \
				_T("     hfe_org_id as orgid,") \
				_T("     hfe_category as categoryid,") \
				_T("     hfe_docno as docno,") \
				_T("     hfe_invoiceno as invoiceno,    ") \
				_T("     hfe_status as status,") \
				_T("     hfe_deptid as deptid,") \
				_T("     hfe_type as typeid,") \
				_T("     hfe_group as groupid,") \
				_T("     hfe_subgroup as subgroupid,") \
				_T("     hfe_feegroup as feegroup,") \
				_T("     hfe_orderid as orderid,") \
				_T("     hfe_object as objectid,") \
				_T("     hfe_treattime as treattime,") \
				_T("     hfe_date as dateid,") \
				_T("     CAST('I' AS NVARCHAR2(1)) AS hfe_object_type,") \
				_T("     CASE") \
				_T("       WHEN hfe_type IN('D','M')") \
				_T("       THEN TO_CHAR(M_GetProductID(CAST(hfe_itemid AS INTEGER)))") \
				_T("       ELSE TO_CHAR(hfe_itemid)") \
				_T("     END AS itemid,") \
				_T("     hfe_desc as descid,") \
				_T("     hfe_unit as unit,") \
				_T("     hfe_hitech as hitech,") \
				_T("     CASE") \
				_T("       WHEN hfe_type ='O'") \
				_T("       AND hfe_hitech='Y'") \
				_T("       THEN hfe_orderid") \
				_T("       ELSE 0") \
				_T("     END AS optidx,") \
				_T("     hfe_quantity as quantity,") \
				_T("     hfe_unitprice as unitprice,") \
				_T("     hfe_insprice as insprice,") \
				_T("     COALESCE(hfe_cardidx, 0) AS cardidx,") \
				_T("     hfe_payrate as payrate,") \
				_T("     hfe_disrate as disrate,") \
				_T("     HFE_CATEGORY AS nguontt,") \
				_T("     hfe_cost as cost,") \
				_T("     hfe_inspaid inspaid,") \
				_T("     hfe_discount discount,") \
				_T("     CASE") \
				_T("       WHEN hfe_diffcost > 0") \
				_T("       THEN hfe_diffcost") \
				_T("       WHEN hfe_inspaid <= 0") \
				_T("       AND hfe_discount <=0") \
				_T("       THEN hfe_patdebt+hfe_patpaid") \
				_T("       ELSE 0") \
				_T("     END AS diffpaid,") \
				_T("     CASE") \
				_T("       WHEN hfe_category ='PKG'") \
				_T("       THEN 0") \
				_T("       ELSE hfe_inspaid-hfe_discount") \
				_T("     END                     AS copayment,") \
				_T("     hfe_patdebt+hfe_patpaid AS patpaid,") \
				_T("     CASE") \
				_T("       WHEN hfe_group='A1400'") \
				_T("       AND hfe_type IN('D','M')") \
				_T("       THEN 3") \
				_T("       WHEN hfe_discount > 0") \
				_T("       AND hfe_type     IN('D','M')") \
				_T("       THEN 1") \
				_T("       ELSE 2") \
				_T("     END AS inlist") \
				_T("   FROM hms_fee") \
				_T("   WHERE hfe_status NOT     IN('C')") \
				_T("   AND NVL(hfe_category,'N')<>'Y'") \
				//_T("   AND hfe_feegroup NOT     IN('OPT_L','OPT', 'HITECH_L','HITECH', 'HITECH_A')") \//
				_T("   AND hfe_object           <> 7 ") \
				_T("   AND hfe_type <> 'V' ") \
				_T("   ) tbl") \
				_T(" LEFT JOIN hms_fee_group") \
				_T(" ON(hfg_id                = groupid)") \
				_T(" LEFT JOIN hms_fee_invoice  ON (docno = hfe_docno ") \
				_T(" AND invoiceno = hfe_invoiceno)") \
				_T(" WHERE %s") \
				_T(" AND hfe_status='P'") \
				_T(" AND HFE_OBJECTID <>'7'") \
				_T(" AND objectid          <> 7 ") \
				_T(" AND NVL(inpackage, 'N') <> 'Y'") \
				_T(" GROUP BY ") \
				_T("  hfe_docno,") \
				_T("  hfe_invoiceno,") \
				_T("  HFE_OBJECTID,") \
				_T("  hfe_treattime,") \
				_T("  hfe_deptid,") \
				_T("  hfg_type_id,") \
				_T("   typeid,") \
				_T("   groupid,") \
				_T("   objectid,") \
				_T("   descid,") \
				_T("   itemid,") \
				_T("   hitech,") \
				_T("   optidx,") \
				_T("   unit,") \
				_T("   unitprice,") \
				_T("   insprice,") \
				_T("   cardidx,") \
				_T("   payrate,") \
				_T("   disrate,") \
				_T("   nguontt,") \
				_T("   inlist,") \
				_T("   inpackage") \
				_T(" ORDER BY hfe_docno, hfe_invoiceno,") \
				_T("   hfg_type_id,") \
				_T("   inlist,") \
				_T("   groupid,") \
				_T("   descid,") \
				_T("   unitprice DESC,") \
				_T("   insprice"), szWhere);
	//QueryOpener(szSQL);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}