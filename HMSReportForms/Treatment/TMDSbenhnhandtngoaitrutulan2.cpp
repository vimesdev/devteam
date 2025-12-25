#include "stdafx.h"
#include "TMDSbenhnhandtngoaitrutulan2.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDSbenhnhandtngoaitrutulan2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnToDateCheckValue();
}
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CTMDSbenhnhandtngoaitrutulan2* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
}
static long _OnDeptLoadDataFnc(CWnd *pWnd)
{
	return ((CTMDSbenhnhandtngoaitrutulan2 *)pWnd)->OnDeptLoadData();
}

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMDSbenhnhandtngoaitrutulan2 *pVw = (CTMDSbenhnhandtngoaitrutulan2 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMDSbenhnhandtngoaitrutulan2 *pVw = (CTMDSbenhnhandtngoaitrutulan2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMDSbenhnhandtngoaitrutulan2 *pVw = (CTMDSbenhnhandtngoaitrutulan2 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhandtngoaitrutulan2*)pWnd)->OnAddTMMaughinhanungthu();
} 
static int _OnEditTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhandtngoaitrutulan2*)pWnd)->OnEditTMMaughinhanungthu();
} 
static int _OnDeleteTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhandtngoaitrutulan2*)pWnd)->OnDeleteTMMaughinhanungthu();
} 
static int _OnSaveTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhandtngoaitrutulan2*)pWnd)->OnSaveTMMaughinhanungthu();
} 
static int _OnCancelTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhandtngoaitrutulan2*)pWnd)->OnCancelTMMaughinhanungthu();
} 
CTMDSbenhnhandtngoaitrutulan2::CTMDSbenhnhandtngoaitrutulan2(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CTMDSbenhnhandtngoaitrutulan2::~CTMDSbenhnhandtngoaitrutulan2()
{

}
void CTMDSbenhnhandtngoaitrutulan2::OnCreateComponents()
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
	m_wndDeptLabel.Create(this, _T("Khoa điều trị"), 10, 88, 90, 113);
	m_wndDept.Create(this,95, 88, 485, 113);
}
void CTMDSbenhnhandtngoaitrutulan2::OnInitializeComponents(){
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
void CTMDSbenhnhandtngoaitrutulan2::OnSetWindowEvents(){
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
void CTMDSbenhnhandtngoaitrutulan2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);

}
void CTMDSbenhnhandtngoaitrutulan2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CTMDSbenhnhandtngoaitrutulan2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMDSbenhnhandtngoaitrutulan2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();

}
int CTMDSbenhnhandtngoaitrutulan2::SetMode(int nMode){
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
/*void CTMDSbenhnhandtngoaitrutulan2::OnYearChange(){
	
} */
/*void CTMDSbenhnhandtngoaitrutulan2::OnYearSetfocus(){
	
} */
/*void CTMDSbenhnhandtngoaitrutulan2::OnYearKillfocus(){
	
} */
int CTMDSbenhnhandtngoaitrutulan2::OnYearCheckValue(){
	return 0;
} 
void CTMDSbenhnhandtngoaitrutulan2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMDSbenhnhandtngoaitrutulan2::OnReportPeriodSelendok(){
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
/*void CTMDSbenhnhandtngoaitrutulan2::OnReportPeriodSetfocus(){
	
}*/
/*void CTMDSbenhnhandtngoaitrutulan2::OnReportPeriodKillfocus(){
	
}*/
long CTMDSbenhnhandtngoaitrutulan2::OnReportPeriodLoadData(){
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
/*void CTMDSbenhnhandtngoaitrutulan2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMDSbenhnhandtngoaitrutulan2::OnFromDateChange(){
	
} */
/*void CTMDSbenhnhandtngoaitrutulan2::OnFromDateSetfocus(){
	
} */
/*void CTMDSbenhnhandtngoaitrutulan2::OnFromDateKillfocus(){
	
} */
int CTMDSbenhnhandtngoaitrutulan2::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMDSbenhnhandtngoaitrutulan2::OnToDateChange(){
	
} */
/*void CTMDSbenhnhandtngoaitrutulan2::OnToDateSetfocus(){
	
} */
/*void CTMDSbenhnhandtngoaitrutulan2::OnToDateKillfocus(){
	
} */
int CTMDSbenhnhandtngoaitrutulan2::OnToDateCheckValue()
{
	return 0;
}
void  CTMDSbenhnhandtngoaitrutulan2::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 

void CTMDSbenhnhandtngoaitrutulan2::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;	
}
long  CTMDSbenhnhandtngoaitrutulan2::OnDeptLoadData()
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
void CTMDSbenhnhandtngoaitrutulan2::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\Template\\DANHSACHBENHNHANDIEUTRINGOAITRU_TULAN2.xls"))) AfxMessageBox(_T("Chưa có Files ở đường dẫn Exports\\Template\\DANHSACHBENHNHANDIEUTRINGOAITRU_TULAN2.xls"));

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
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		
		
		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("ngayvao"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayra"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("luotdieutri"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_INTEGER);		
		
		nRow++;
		rs.MoveNext();
	}	
	
	xls.Save(_T("Exports\\Template\\DANHSACHBENHNHANDIEUTRINGOAITRU_TULAN2x.xls"));
} 
void CTMDSbenhnhandtngoaitrutulan2::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMDSbenhnhandtngoaitrutulan2::OnAddTMMaughinhanungthu(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTMDSbenhnhandtngoaitrutulan2::OnEditTMMaughinhanungthu(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMDSbenhnhandtngoaitrutulan2::OnDeleteTMMaughinhanungthu(){
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
int CTMDSbenhnhandtngoaitrutulan2::OnSaveTMMaughinhanungthu(){
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
int CTMDSbenhnhandtngoaitrutulan2::OnCancelTMMaughinhanungthu(){
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
int CTMDSbenhnhandtngoaitrutulan2::OnTMMaughinhanungthuListLoadData(){
	return 0;
}
CString CTMDSbenhnhandtngoaitrutulan2::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szWhere;

	if (!m_szDeptKey.IsEmpty())
	{
	szWhere.AppendFormat(_T("AND HTR_DEPTID = '%s'"), m_szDeptKey);
	}
	
	szSQL.Format(_T(" SELECT * FROM") \
	_T(" (") \
	_T(" SELECT ") \
	_T(" distinct(htr_docno) as docno,") \
	_T(" GET_PATIENTNAME(htr_docno) as patname,") \
	_T(" HTR_DEPTID as khoa") \
	_T(" from HMS_TREATMENT_RECORD ") \
	_T(" WHERE HTR_ADMITDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" AND NVL(htr_outpatient, 'X')='Y' %s") \
	_T(" AND HTR_TREATTIME>=2") \
	_T(" )") \
	_T(" order by docno"), m_szFromDate, m_szToDate, szWhere);	

	return szSQL;
}