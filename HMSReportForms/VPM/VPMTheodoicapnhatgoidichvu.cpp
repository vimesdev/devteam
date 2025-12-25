#include "stdafx.h"
#include "VPMTheodoicapnhatgoidichvu.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVPMTheodoicapnhatgoidichvu* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnToDateCheckValue();
}
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CVPMTheodoicapnhatgoidichvu* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
}
static long _OnDeptLoadDataFnc(CWnd *pWnd)
{
	return ((CVPMTheodoicapnhatgoidichvu *)pWnd)->OnDeptLoadData();
}

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CVPMTheodoicapnhatgoidichvu *pVw = (CVPMTheodoicapnhatgoidichvu *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CVPMTheodoicapnhatgoidichvu *pVw = (CVPMTheodoicapnhatgoidichvu *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CVPMTheodoicapnhatgoidichvu *pVw = (CVPMTheodoicapnhatgoidichvu *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddVPMTheodoicapnhatgoidichvuFnc(CWnd *pWnd){
	 return ((CVPMTheodoicapnhatgoidichvu*)pWnd)->OnAddVPMTheodoicapnhatgoidichvu();
} 
static int _OnEditVPMTheodoicapnhatgoidichvuFnc(CWnd *pWnd){
	 return ((CVPMTheodoicapnhatgoidichvu*)pWnd)->OnEditVPMTheodoicapnhatgoidichvu();
} 
static int _OnDeleteVPMTheodoicapnhatgoidichvuFnc(CWnd *pWnd){
	 return ((CVPMTheodoicapnhatgoidichvu*)pWnd)->OnDeleteVPMTheodoicapnhatgoidichvu();
} 
static int _OnSaveVPMTheodoicapnhatgoidichvuFnc(CWnd *pWnd){
	 return ((CVPMTheodoicapnhatgoidichvu*)pWnd)->OnSaveVPMTheodoicapnhatgoidichvu();
} 
static int _OnCancelVPMTheodoicapnhatgoidichvuFnc(CWnd *pWnd){
	 return ((CVPMTheodoicapnhatgoidichvu*)pWnd)->OnCancelVPMTheodoicapnhatgoidichvu();
} 
CVPMTheodoicapnhatgoidichvu::CVPMTheodoicapnhatgoidichvu(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CVPMTheodoicapnhatgoidichvu::~CVPMTheodoicapnhatgoidichvu()
{
}
void CVPMTheodoicapnhatgoidichvu::OnCreateComponents()
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
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 294, 124, 404, 149);
	m_wndExport.Create(this, _T("&Export"), 409, 124, 484, 149);
	m_wndDeptLabel.Create(this, _T("Khoa"), 10, 88, 90, 113);
	m_wndDept.Create(this,95, 88, 485, 113);

}
void CVPMTheodoicapnhatgoidichvu::OnInitializeComponents(){
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
void CVPMTheodoicapnhatgoidichvu::OnSetWindowEvents(){
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
void CVPMTheodoicapnhatgoidichvu::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);

}
void CVPMTheodoicapnhatgoidichvu::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CVPMTheodoicapnhatgoidichvu::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CVPMTheodoicapnhatgoidichvu::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();

}
int CVPMTheodoicapnhatgoidichvu::SetMode(int nMode){
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
/*void CVPMTheodoicapnhatgoidichvu::OnYearChange(){
	
} */
/*void CVPMTheodoicapnhatgoidichvu::OnYearSetfocus(){
	
} */
/*void CVPMTheodoicapnhatgoidichvu::OnYearKillfocus(){
	
} */
int CVPMTheodoicapnhatgoidichvu::OnYearCheckValue(){
	return 0;
} 
void CVPMTheodoicapnhatgoidichvu::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMTheodoicapnhatgoidichvu::OnReportPeriodSelendok(){
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
/*void CVPMTheodoicapnhatgoidichvu::OnReportPeriodSetfocus(){
	
}*/
/*void CVPMTheodoicapnhatgoidichvu::OnReportPeriodKillfocus(){
	
}*/
long CVPMTheodoicapnhatgoidichvu::OnReportPeriodLoadData(){
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
/*void CVPMTheodoicapnhatgoidichvu::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CVPMTheodoicapnhatgoidichvu::OnFromDateChange(){
	
} */
/*void CVPMTheodoicapnhatgoidichvu::OnFromDateSetfocus(){
	
} */
/*void CVPMTheodoicapnhatgoidichvu::OnFromDateKillfocus(){
	
} */
int CVPMTheodoicapnhatgoidichvu::OnFromDateCheckValue(){
	return 0;
} 
/*void CVPMTheodoicapnhatgoidichvu::OnToDateChange(){
	
} */
/*void CVPMTheodoicapnhatgoidichvu::OnToDateSetfocus(){
	
} */
/*void CVPMTheodoicapnhatgoidichvu::OnToDateKillfocus(){
	
} */
int CVPMTheodoicapnhatgoidichvu::OnToDateCheckValue()
{
	return 0;
}
void  CVPMTheodoicapnhatgoidichvu::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 

void CVPMTheodoicapnhatgoidichvu::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;	
}
long  CVPMTheodoicapnhatgoidichvu::OnDeptLoadData()
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
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return nCount;
}
void CVPMTheodoicapnhatgoidichvu::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\BAOCAOTHEODOICAPNHATGOIDICHVU.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

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

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("packageid"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("packagename"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("acctime"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("username"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ss_desc"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		
		
		nRow++;
		rs.MoveNext();
	}
	
	if (nTotal[11] > 0)
	{
		xls.SetCellText(10, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 11; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}
	
	xls.Save(_T("Exports\\BAOCAOTHEODOICAPNHATGOIDICHVU2.xls"));
} 
void CVPMTheodoicapnhatgoidichvu::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CVPMTheodoicapnhatgoidichvu::OnAddVPMTheodoicapnhatgoidichvu(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVPMTheodoicapnhatgoidichvu::OnEditVPMTheodoicapnhatgoidichvu(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVPMTheodoicapnhatgoidichvu::OnDeleteVPMTheodoicapnhatgoidichvu(){
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
 		OnCancelVPMTheodoicapnhatgoidichvu(); 
 	}
	return 0;
}
int CVPMTheodoicapnhatgoidichvu::OnSaveVPMTheodoicapnhatgoidichvu(){
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
 		//OnVPMTheodoicapnhatgoidichvuListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVPMTheodoicapnhatgoidichvu::OnCancelVPMTheodoicapnhatgoidichvu(){
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
int CVPMTheodoicapnhatgoidichvu::OnVPMTheodoicapnhatgoidichvuListLoadData(){
	return 0;
}
CString CVPMTheodoicapnhatgoidichvu::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szWhere;
	if (!m_szDeptKey.IsEmpty())
	{
	szWhere.AppendFormat(_T("AND hfe_deptid = '%s'"), m_szDeptKey);
	}

	szSQL.Format(_T(" SELECT") \
	_T(" hspl_docno as docno,") \
	_T(" hfe_deptid as deptid,") \
	_T(" hspl_package_id as packageid,") \
	_T(" hfel_desc as packagename,") \
	_T(" to_char(hspl_createddate,'DD/MM/YYYY HH24:MI') as acctime,") \
	_T(" hspl_userid as username,") \
	_T(" ss_desc") \
	_T(" FROM hms_service_package_log") \
	_T(" LEFT JOIN sys_sel ON (hspl_type=ss_code AND SS_ID='hms_service_package_action')") \
	_T(" LEFT JOIN HMS_FEE_EXTRA ON (hspl_docno = HFE_DOCNO AND HSPL_PACKAGE_ID = hfe_fee_extra_id)") \
	_T(" LEFT JOIN HMS_FEE_EXTRALINE ON (hfel_docno=hspl_docno AND hfe_fee_extra_id=hfel_fee_extra_id)") \
	_T(" WHERE hspl_createddate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
	_T(" AND hfel_desc is not null") \
	_T(" AND hspl_type='RB'") \
	_T(" ORDER BY hfe_deptid, HSPL_PACKAGE_ID,HSPL_IDX"), m_szFromDate, m_szToDate, szWhere); 
	return szSQL;
}