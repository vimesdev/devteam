#include "stdafx.h"
#include "TMMaughinhanungthu.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMMaughinhanungthu *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMMaughinhanungthu* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMMaughinhanungthu *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMMaughinhanungthu *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMMaughinhanungthu *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMMaughinhanungthu *)pWnd)->OnToDateCheckValue();
}
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CTMMaughinhanungthu* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
}
static long _OnDeptLoadDataFnc(CWnd *pWnd)
{
	return ((CTMMaughinhanungthu *)pWnd)->OnDeptLoadData();
}

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMMaughinhanungthu *pVw = (CTMMaughinhanungthu *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMMaughinhanungthu *pVw = (CTMMaughinhanungthu *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMMaughinhanungthu *pVw = (CTMMaughinhanungthu *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMMaughinhanungthu*)pWnd)->OnAddTMMaughinhanungthu();
} 
static int _OnEditTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMMaughinhanungthu*)pWnd)->OnEditTMMaughinhanungthu();
} 
static int _OnDeleteTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMMaughinhanungthu*)pWnd)->OnDeleteTMMaughinhanungthu();
} 
static int _OnSaveTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMMaughinhanungthu*)pWnd)->OnSaveTMMaughinhanungthu();
} 
static int _OnCancelTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMMaughinhanungthu*)pWnd)->OnCancelTMMaughinhanungthu();
} 
CTMMaughinhanungthu::CTMMaughinhanungthu(CWnd *pParent)
{
	//m_szTitle = _T("General Information In Exam Room");
	m_nDlgWidth = 500;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CTMMaughinhanungthu::~CTMMaughinhanungthu(){
}
void CTMMaughinhanungthu::OnCreateComponents()
{

	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 118);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 58, 90, 83);
	m_wndFromDate.Create(this,95, 58, 245, 83); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 59, 330, 84);
	m_wndToDate.Create(this,335, 59, 485, 84); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 409, 124, 484, 149);
	m_wndDeptLabel.Create(this, _T("Khoa ra viện"), 10, 88, 90, 113);
	m_wndDept.Create(this,95, 88, 485, 113); 

}
void CTMMaughinhanungthu::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0, 1, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

}
void CTMMaughinhanungthu::OnSetWindowEvents(){
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
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = szSysDate + _T("00:00");
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate = szSysDate + _T("23:59");
	UpdateData(false);
}
void CTMMaughinhanungthu::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);

}
void CTMMaughinhanungthu::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CTMMaughinhanungthu::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMMaughinhanungthu::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();

}
int CTMMaughinhanungthu::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0,1,2,3,-1); 
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
/*void CTMMaughinhanungthu::OnYearChange(){
	
} */
/*void CTMMaughinhanungthu::OnYearSetfocus(){
	
} */
/*void CTMMaughinhanungthu::OnYearKillfocus(){
	
} */
int CTMMaughinhanungthu::OnYearCheckValue(){
	return 0;
} 
void CTMMaughinhanungthu::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMMaughinhanungthu::OnReportPeriodSelendok(){
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
/*void CTMMaughinhanungthu::OnReportPeriodSetfocus(){
	
}*/
/*void CTMMaughinhanungthu::OnReportPeriodKillfocus(){
	
}*/
long CTMMaughinhanungthu::OnReportPeriodLoadData(){
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
/*void CTMMaughinhanungthu::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMMaughinhanungthu::OnFromDateChange(){
	
} */
/*void CTMMaughinhanungthu::OnFromDateSetfocus(){
	
} */
/*void CTMMaughinhanungthu::OnFromDateKillfocus(){
	
} */
int CTMMaughinhanungthu::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMMaughinhanungthu::OnToDateChange(){
	
} */
/*void CTMMaughinhanungthu::OnToDateSetfocus(){
	
} */
/*void CTMMaughinhanungthu::OnToDateKillfocus(){
	
} */
int CTMMaughinhanungthu::OnToDateCheckValue()
{
	return 0;
}
void  CTMMaughinhanungthu::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 

void CTMMaughinhanungthu::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;	
}
long  CTMMaughinhanungthu::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1  and sd_type = 'DT' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return nCount;
}

void CTMMaughinhanungthu::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);

	TranslateString(_T("Mẫu 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("Mẫu 2 (mới)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect_V1();
			break;
		case 2:
			OnExportSelect_V2();
			break;		
	}
} 

void CTMMaughinhanungthu::OnExportSelect_V1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\MAU_GHINHAN_UNGTHU.xls"))) AfxMessageBox(_T("Chưa có Files ở đường dẫn Exports\\Template\\MAU_GHINHAN_UNGTHU.xls"));

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
		
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		
		
		rs.GetValue(_T("sothebh"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("hovaten"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("gioitinh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dantoc"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("diachi"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phone"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("noichuyenden"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("ngaykhambenh"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("ngaynhapvien"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("chandoanbenhchinh"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("mabenhchinh"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("ketluangpb"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayketquagpb"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("vitrikhoiu"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("chandoanbenhchinh"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phuongphapdieutri"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayravien"), tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tinhtrangravien"), tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thoigiantuvong"), tmpStr);
		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("chandoan"), tmpStr);
		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_TEXT || FMT_WRAPING);

		rs.GetValue(_T("benhkemtheo"), tmpStr);
		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_TEXT || FMT_WRAPING);
		
		nRow++;
		rs.MoveNext();
	}	
	
	xls.Save(_T("Exports\\Template\\MAU_GHINHAN_UNGTHU2.xls"));
} 
void CTMMaughinhanungthu::OnExportSelect_V2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, i = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\MAU_GHINHAN_UNGTHU2.xls"))) AfxMessageBox(_T("Chưa có Files ở đường dẫn Exports\\Template\\MAU_GHINHAN_UNGTHU_VER2.xls"));
	//GiangDH 12/06/2023 #2007
	xls.SetWorksheet(0);
	//xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	//xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	//tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	//xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString_V2();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 5;
	nCol = 0;

	while(!rs.IsEOF())
	{
		if(nRow == 65000)
		{
			i++;
			tmpStr.Format(_T("Sheet %d"), i);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(i);
			nRow = 1;
		}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("bvghinhan"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);		

		rs.GetValue(_T("ngayghinhan"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_DATE);

		rs.GetValue(_T("hovaten"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("gioitinh"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tuoi"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("detailaddress"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("diachipx"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("diachiqh"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("diachitinh"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("CIC"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("sothebh"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("phone"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("contact_tel"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dantoc"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("occupation"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tiensu1"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tiensu2"), tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tiensu3"), tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tiensu4"), tmpStr);
		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngaymacbenh"), tmpStr);
		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_DATE);

		rs.GetValue(_T("ppcdcogtcaonhat"), tmpStr);
		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("vitrisinhthiet"), tmpStr);
		xls.SetCellText(nCol+24, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("mabenhchinh"), tmpStr);
		xls.SetCellText(nCol+25, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ketluangpb"), tmpStr);
		xls.SetCellText(nCol+26, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ppcdcogtcaonhat"), tmpStr);
		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ppcdcogtcaonhat"), tmpStr);
		xls.SetCellText(nCol+29, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("phuongphapdieutri"), tmpStr);
		xls.SetCellText(nCol+30, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("vitridoixung"), tmpStr);
		xls.SetCellText(nCol+31, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("chandoanbenhchinh"), tmpStr);
		xls.SetCellText(nCol+34, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phuongphapdieutri"), tmpStr);
		xls.SetCellText(nCol+35, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayravien"), tmpStr);
		xls.SetCellText(nCol+43, nRow, tmpStr, FMT_DATE);

		rs.GetValue(_T("tinhtrangravien"), tmpStr);
		xls.SetCellText(nCol+44, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("chandoanbenhchinh"), tmpStr);
		xls.SetCellText(nCol+47, nRow, tmpStr, FMT_TEXT || FMT_WRAPING);

		rs.GetValue(_T("benhkemtheo"), tmpStr);
		xls.SetCellText(nCol+48, nRow, tmpStr, FMT_TEXT || FMT_WRAPING);

		
		nRow++;
		rs.MoveNext();
	}	
	
	xls.Save(_T("Exports\\Template\\MAU_GHINHAN_UNGTHU_VER2.xls"));
} 
void CTMMaughinhanungthu::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMMaughinhanungthu::OnAddTMMaughinhanungthu(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTMMaughinhanungthu::OnEditTMMaughinhanungthu(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMMaughinhanungthu::OnDeleteTMMaughinhanungthu(){
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
 		OnCancelTMMaughinhanungthu(); 
 	}
	return 0;
}
int CTMMaughinhanungthu::OnSaveTMMaughinhanungthu(){
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
 		//OnTMMaughinhanungthuListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTMMaughinhanungthu::OnCancelTMMaughinhanungthu(){
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
int CTMMaughinhanungthu::OnTMMaughinhanungthuListLoadData(){
	return 0;
}
CString CTMMaughinhanungthu::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szWhere;
	

	if (!m_szDeptKey.IsEmpty())
	{
	szWhere.AppendFormat(_T("AND HCR_DISCHARGEDEPT = '%s'"), m_szDeptKey);
	}
	
	szSQL.Format(_T(" SELECT hp_patientno AS mabenhnhan,") \
	_T("   hd_docno          AS sohoso,") \
	_T("   hd_cardno         AS sothebh,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                       AS hovaten,  ") \
	_T("   to_char(hp_birthdate,'DD/MM/YYYY') as namsinh,") \
	_T("   get_selection_desc('sys_sex', hp_sex) AS gioitinh,") \
	_T("   sys_sel_getname('sys_ethnic', hp_ethnic) AS dantoc,") \
	_T("   hms_getaddress(hp_provid,hp_distid,hp_villid)       AS diachi,") \
	_T("   hd_telephone phone,") \
	_T("   HD_TRANSPLACE as noichuyenden,") \
	_T("   to_char(HD_ADMITDATE, 'DD/MM/YYYY') ngaykhambenh,") \
	_T("   to_char(hcr_admitdate, 'DD/MM/YYYY') AS ngaynhapvien,") \
	_T("   hcr_maindisease                                  AS chandoanbenhchinh,") \
	_T("   hcr_mainicd                                      AS mabenhchinh,") \
	_T("   hcr_gmethod                                      AS phuongphapdieutri,") \
	_T("   to_char(hcr_dischargedate, 'DD/MM/YYYY')         AS ngayravien,") \
	_T("   sys_sel_getname('hms_result',hcr_result)         AS tinhtrangravien,") \
	_T("   to_char(hdr_deathtime, 'DD/MM/YYYY')             AS thoigiantuvong,") \
	_T("   HCR_DISCHARGEDATE                                AS ngayravien1,") \
	_T("   HCR_DISCHARGEDEPT                                as khoaravien,") \
	_T("   hcr_maindisease AS chandoan,") \
	_T("   hcr_reldisease AS benhkemtheo,") \
	_T("   hcr_treattime as luotdieutri,") \
	_T("   (SELECT hpr_desc") \
	_T("   FROM hms_pacs_result") \
	_T("   WHERE hpcl_docno = hpr_docno") \
	_T("   AND hpcl_orderid = hpr_orderid") \
	_T("   AND hpcl_itemid  = hpr_itemid") \
	_T("   AND hpr_name     ='Conclusion'") \
	_T("   )AS ketluangpb,") \
	_T("  to_char(HPC_PERFORMDATE, 'DD/MM/YYYY') as ngayketquagpb,") \
	_T(" (SELECT hpr_desc") \
	_T("   FROM hms_pacs_result") \
	_T("   WHERE hpcl_docno = hpr_docno") \
	_T("   AND hpcl_orderid = hpr_orderid") \
	_T("   AND hpcl_itemid  = hpr_itemid") \
	_T("   AND hpr_name     ='1'") \
	_T("   ) AS vitrikhoiu,") \
	_T("   hpc_treattime as luotdieutrigp") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN HMS_CLINICAL_RECORD_HIST") \
	_T(" ON(hcr_docno=hd_docno)") \
	_T(" LEFT JOIN hms_treatment_record") \
	_T(" ON ( htr_docno = hcr_docno AND hcr_treattime = htr_treattime)") \
	_T(" LEFT JOIN hms_death_record ON (hcr_docno=hdr_docno)") \
	_T(" LEFT JOIN hms_card") \
	_T(" ON(hc_patientno   =hd_patientno") \
	_T(" AND hc_idx        =hd_cardidx)") \
	_T(" LEFT JOIN hms_pacsorder ON (hd_docno = hpc_docno and HPC_GROUPID='B1E00' and hpc_status='T')") \
	_T(" LEFT JOIN hms_pacsorderline") \
	_T(" ON ( hpc_orderid = hpcl_orderid )") \
	_T(" WHERE hcr_docno   > 0") \
	_T(" %s") \
	_T(" AND htr_status='T'") \
	_T(" AND HCR_DISCHARGEDATE BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') "), szWhere, m_szFromDate, m_szToDate);	

	return szSQL;
}
CString CTMMaughinhanungthu::GetQueryString_V2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szWhere;
	

	if (!m_szDeptKey.IsEmpty())
	{
	szWhere.AppendFormat(_T("AND HCR_DISCHARGEDEPT = '%s'"), m_szDeptKey);
	}
	//GiangDH 12/06/2023 #2007
	szSQL.Format(_T(" SELECT DISTINCT ") \
	_T(" Cast('BV108' as nvarchar2(5)) as bvghinhan, ") \
	_T(" hd_docno          AS sohoso, ") \
	_T(" TO_CHAR(HD_ADMITDATE, 'DD/MM/YYYY') ngayghinhan, ") \
	_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname)                               AS hovaten, ") \
	_T(" get_selection_desc('sys_sex', hp_sex)         AS gioitinh, ") \
	_T(" TO_CHAR(hp_birthdate,'DD/MM/YYYY')            AS namsinh, ") \
	_T(" HMS_GETAGEBYDOC(hd_docno, hcr_treattime)      AS tuoi, ") \
	_T(" nvl(hd_dtladdr, hp_dtladdr) as detailaddress,  ") \
	_T(" (SELECT sv_name FROM sys_vill WHERE sv_id=hp_villid) as diachipx,   ") \
	_T(" (SELECT sd_name FROM sys_dist WHERE sd_id=hp_distid) as diachiqh, ") \
	_T(" (SELECT sp_name FROM sys_prov WHERE sp_id=hp_provid) as diachitinh, ") \
	_T(" hp_sin             AS CIC, ") \
	_T(" hd_cardno         AS sothebh, ") \
	_T(" hd_telephone phone, ") \
	_T(" hd_contacttel contact_tel, ") \
	_T(" HD_TRANSPLACE AS noichuyenden, ") \
	_T(" sys_sel_getname('sys_ethnic', hp_ethnic)      AS dantoc, ") \
	_T(" sys_sel_getname('sys_occupation', cast(hp_occupation as varchar(32))) as occupation, ") \
	_T(" hp_occupation as occupationid, ") \
	_T(" NULL as tiensu1, ") \
	_T(" NULL as tiensu2, ") \
	_T(" NULL as tiensu3, ") \
	_T(" NULL as tiensu4, ") \
	_T(" TO_CHAR(hcr_admitdate, 'DD/MM/YYYY')     AS ngaymacbenh, ") \
	  
	_T(" (SELECT ") \
	_T(" LISTAGG(CAST(hpr_desc AS VARCHAR2(2048)), '// ')  ") \
	_T(" WITHIN GROUP (ORDER BY hpr_orderid desc) ") \
	_T(" FROM hms_pacs_result ") \
	_T(" where hpr_docno=hd_docno ") \
	_T(" and substr(hpr_itemid, 1, 5) = 'B1E00' ") \
	_T(" and hpr_name='Conclusion') AS ppcdcogtcaonhat, ") \

	_T(" (SELECT ") \
	_T(" LISTAGG(CAST(VITRISINHTHIET AS VARCHAR2(2048)), '' ||chr(13)|| '- ')  ") \
	_T(" WITHIN GROUP (ORDER BY sophieu desc) ") \
	_T(" FROM hms_testorderline HT ") \
    _T(" LEFT JOIN lims_result_gpb ") \
    _T(" ON (IDDICHVUCHIDINH = HT.hpcl_orderlineid ") \
    _T(" AND sophieu = ht.hpcl_orderid) ") \
    _T(" WHERE HT.hpcl_docno = hd_docno ") \
	_T(" )AS vitrisinhthiet, ") \

	_T(" hcr_maindisease                          AS chandoanbenhchinh, ") \
	_T("   hcr_reldisease AS benhkemtheo,") \
	_T(" hcr_mainicd                              AS mabenhchinh, ") \
	_T(" hcr_gmethod                              AS phuongphapdieutri, ") \
	_T(" TO_CHAR(hcr_dischargedate, 'DD/MM/YYYY') AS ngayravien, ") \
	_T(" sys_sel_getname('hms_result',hcr_result) AS tinhtrangravien, ") \
	_T(" TO_CHAR(hdr_deathtime, 'DD/MM/YYYY')     AS thoigiantuvong, ") \
	_T(" HCR_DISCHARGEDATE                        AS ngayravien1, ") \
	_T(" HCR_DISCHARGEDEPT                        AS khoaravien, ") \
	_T(" hcr_treattime                            AS luotdieutri, ") \
	_T(" ho_comment AS vitridoixung, ") \
	_T(" (SELECT hpr_desc ") \
	_T(" FROM hms_pacs_result ") \
	_T(" WHERE hpcl_docno = hpr_docno ") \
	_T(" AND hpcl_orderid = hpr_orderid ") \
	_T(" AND hpcl_itemid  = hpr_itemid ") \
	_T(" AND hpr_name     ='Conclusion' ") \
		_T(" )             AS ketluangpb, ") \
	_T(" TO_CHAR(HPC_PERFORMDATE, 'DD/MM/YYYY') AS ngayketquagpb, ") \
	_T(" (SELECT hpr_desc ") \
	_T(" FROM hms_pacs_result ") \
	_T(" WHERE hpcl_docno = hpr_docno ") \
	_T(" AND hpcl_orderid = hpr_orderid ") \
	_T(" AND hpcl_itemid  = hpr_itemid ") \
	_T(" AND hpr_name     ='1' ") \
	_T(" )             AS vitrikhoiu, ") \
	_T(" hpc_treattime AS luotdieutrigp ") \
	_T(" FROM hms_patient ") \
	_T(" LEFT JOIN hms_doc ") \
	_T(" ON(hd_patientno=hp_patientno) ") \
	_T(" LEFT JOIN HMS_CLINICAL_RECORD_HIST ") \
	_T(" ON(hcr_docno=hd_docno) ") \
	_T(" LEFT JOIN hms_treatment_record ") \
	_T(" ON ( htr_docno    = hcr_docno ") \
	_T(" AND hcr_treattime = htr_treattime) ") \
	_T(" LEFT JOIN hms_death_record ") \
	_T(" ON (hcr_docno=hdr_docno) ") \
	_T(" LEFT JOIN hms_card ") \
	_T(" ON(hc_patientno =hd_patientno ") \
	_T(" AND hc_idx      =hd_cardidx) ") \
	_T(" LEFT JOIN hms_pacsorder ") \
	_T(" ON (hd_docno   = hpc_docno ") \
	_T(" AND HPC_GROUPID='B1E00' ") \
	_T(" AND hpc_status ='T') ") \
	_T(" LEFT JOIN hms_pacsorderline ") \
	_T(" ON ( hpc_orderid = hpcl_orderid ) ") \
	_T(" LEFT JOIN hms_operation ON (ho_docno = hd_docno AND ho_patientno = hp_patientno AND ho_treattime = htr_treattime ) ") \
	_T(" WHERE hcr_docno  > 0 ") \
	_T(" %s ") \
	_T(" AND htr_status   ='T' ") \
	_T(" AND HCR_DISCHARGEDATE BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') "), szWhere, m_szFromDate, m_szToDate);	
	
	return szSQL;
}