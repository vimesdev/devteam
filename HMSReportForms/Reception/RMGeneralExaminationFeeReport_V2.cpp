#include "stdafx.h"
#include "RMGeneralExaminationFeeReport_V2.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMGeneralExaminationFeeReport_V2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMGeneralExaminationFeeReport_V2* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CRMGeneralExaminationFeeReport_V2 *)pWnd)->OnObjectAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRMGeneralExaminationFeeReport_V2 *pVw = (CRMGeneralExaminationFeeReport_V2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRMGeneralExaminationFeeReport_V2 *pVw = (CRMGeneralExaminationFeeReport_V2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRMGeneralExaminationFeeReport_V2 *pVw = (CRMGeneralExaminationFeeReport_V2 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddRMGeneralExaminationFeeReportFnc(CWnd *pWnd){
	 return ((CRMGeneralExaminationFeeReport_V2*)pWnd)->OnAddRMGeneralExaminationFeeReport();
} 
static int _OnEditRMGeneralExaminationFeeReportFnc(CWnd *pWnd){
	 return ((CRMGeneralExaminationFeeReport_V2*)pWnd)->OnEditRMGeneralExaminationFeeReport();
} 
static int _OnDeleteRMGeneralExaminationFeeReportFnc(CWnd *pWnd){
	 return ((CRMGeneralExaminationFeeReport_V2*)pWnd)->OnDeleteRMGeneralExaminationFeeReport();
} 
static int _OnSaveRMGeneralExaminationFeeReportFnc(CWnd *pWnd){
	 return ((CRMGeneralExaminationFeeReport_V2*)pWnd)->OnSaveRMGeneralExaminationFeeReport();
} 
static int _OnCancelRMGeneralExaminationFeeReportFnc(CWnd *pWnd){
	 return ((CRMGeneralExaminationFeeReport_V2*)pWnd)->OnCancelRMGeneralExaminationFeeReport();
} 
CRMGeneralExaminationFeeReport_V2::CRMGeneralExaminationFeeReport_V2(CWnd *pParent)
{

	m_nDlgWidth = 420;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CRMGeneralExaminationFeeReport_V2::~CRMGeneralExaminationFeeReport_V2()
{
}
void CRMGeneralExaminationFeeReport_V2::OnCreateComponents(){
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
	m_wndPrint.Create(this, _T("&Print"), 325, 125, 405, 150);
	m_wndExport.Create(this, _T("&ExportXLS"), 410, 125, 490, 150);
	m_wndObject.EnableWindow(false);
}
void CRMGeneralExaminationFeeReport_V2::OnInitializeComponents(){
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
void CRMGeneralExaminationFeeReport_V2::OnSetWindowEvents(){
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
void CRMGeneralExaminationFeeReport_V2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CRMGeneralExaminationFeeReport_V2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRMGeneralExaminationFeeReport_V2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRMGeneralExaminationFeeReport_V2::SetDefaultValues(){
	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
}
int CRMGeneralExaminationFeeReport_V2::SetMode(int nMode){
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
/*void CRMGeneralExaminationFeeReport_V2::OnYearChange(){
	
} */
/*void CRMGeneralExaminationFeeReport_V2::OnYearSetfocus(){
	
} */
/*void CRMGeneralExaminationFeeReport_V2::OnYearKillfocus(){
	
} */
int CRMGeneralExaminationFeeReport_V2::OnYearCheckValue(){
	return 0;
} 
void CRMGeneralExaminationFeeReport_V2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRMGeneralExaminationFeeReport_V2::OnReportPeriodSelendok()
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
/*void CRMGeneralExaminationFeeReport_V2::OnReportPeriodSetfocus(){
	
}*/
/*void CRMGeneralExaminationFeeReport_V2::OnReportPeriodKillfocus(){
	
}*/
long CRMGeneralExaminationFeeReport_V2::OnReportPeriodLoadData(){
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
/*void CRMGeneralExaminationFeeReport_V2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRMGeneralExaminationFeeReport_V2::OnFromDateChange(){
	
} */
/*void CRMGeneralExaminationFeeReport_V2::OnFromDateSetfocus(){
	
} */
/*void CRMGeneralExaminationFeeReport_V2::OnFromDateKillfocus(){
	
} */
int CRMGeneralExaminationFeeReport_V2::OnFromDateCheckValue(){
	return 0;
} 
/*void CRMGeneralExaminationFeeReport_V2::OnToDateChange(){
	
} */
/*void CRMGeneralExaminationFeeReport_V2::OnToDateSetfocus(){
	
} */
/*void CRMGeneralExaminationFeeReport_V2::OnToDateKillfocus(){
	
} */
int CRMGeneralExaminationFeeReport_V2::OnToDateCheckValue(){
	return 0;
} 
void CRMGeneralExaminationFeeReport_V2::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRMGeneralExaminationFeeReport_V2::OnObjectSelendok(){
	 
}
/*void CRMGeneralExaminationFeeReport_V2::OnObjectSetfocus(){
	
}*/
/*void CRMGeneralExaminationFeeReport_V2::OnObjectKillfocus(){
	
}*/
long CRMGeneralExaminationFeeReport_V2::OnObjectLoadData(){
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
void CRMGeneralExaminationFeeReport_V2::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	
} 
void CRMGeneralExaminationFeeReport_V2::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
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
	if (!xls.Load(_T("Exports\\BAOCAOLINHTIENKHAMCANLAMSANGC13.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("tendichvu"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[7] > 0)
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

		rs.GetValue(_T("tenbenhnhan"), tmpStr);		
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tendichvu"), tmpStr);		
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngaychidinh"), tmpStr);		
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("soluong"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER2);

		rs.GetValue(_T("dongia"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);			

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);			
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOLINHTIENKHAMCANLAMSANGC132.xls"));
} 
void CRMGeneralExaminationFeeReport_V2::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	
} 
int CRMGeneralExaminationFeeReport_V2::OnAddRMGeneralExaminationFeeReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CRMGeneralExaminationFeeReport_V2::OnEditRMGeneralExaminationFeeReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CRMGeneralExaminationFeeReport_V2::OnDeleteRMGeneralExaminationFeeReport(){
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
 		OnCancelRMGeneralExaminationFeeReport(); 
 	}
	return 0;
}
int CRMGeneralExaminationFeeReport_V2::OnSaveRMGeneralExaminationFeeReport(){
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
 		//OnRMGeneralExaminationFeeReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CRMGeneralExaminationFeeReport_V2::OnCancelRMGeneralExaminationFeeReport(){
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
int CRMGeneralExaminationFeeReport_V2::OnRMGeneralExaminationFeeReportListLoadData(){
	return 0;
}
CString CRMGeneralExaminationFeeReport_V2::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);		

			szSQL.Format(_T(" SELECT * FROM") \
			_T(" (") \
			_T(" SELECT i.hfe_docno             AS docno,") \
			_T("   GET_PATIENTNAME(i.hfe_docno) AS tenbenhnhan,") \
			_T("   CASE") \
			_T("     WHEN f.hfe_itemid IN") \
			_T("       (SELECT ss_code") \
			_T("       FROM sys_sel") \
			_T("       WHERE ss_id='c13_extra_fee_chang_obj'") \
			_T("       )") \
			_T("   then cast('Tiền khám cấp cứu (Đổi đối tượng)' as nvarchar2(128))") \
			_T("     ELSE f.hfe_desc") \
			_T("   END                              AS tendichvu,") \
			_T("   TO_CHAR(orderdate, 'DD/MM/YYYY') AS ngaychidinh,") \
			_T("   SUM(f.hfe_quantity)              AS soluong,") \
			_T("   SUM(f.hfe_unitprice)             AS dongia,") \
			_T("   SUM(f.hfe_cost)                  AS thanhtien") \
			_T(" FROM hms_fee f") \
			_T(" LEFT JOIN HMS_FEE_INVOICE i") \
			_T(" ON (f.hfe_docno     = i.hfe_docno") \
			_T(" AND f.hfe_invoiceno = i.hfe_invoiceno)") \
			_T(" LEFT JOIN HMS_C13_PACS_EXAM_VIEW") \
			_T(" ON (f.hfe_docno   = docno") \
			_T(" AND f.hfe_orderid = orderid)") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON (i.hfe_docno = hd_docno)") \
			_T(" WHERE 1         =1 %s") \
			_T(" AND f.hfe_status   ='P'") \
			_T(" AND i.hfe_status   ='P'") \
			_T(" AND f.hfe_type    IN ('E', 'P', 'T')") \
			_T(" AND f.hfe_deptid  IN ('C1.3')") \
			_T(" AND i.hfe_objectid ='7'") \
			_T(" AND (f.hfe_itemid IN") \
			_T("   (SELECT ss_code FROM sys_sel WHERE ss_id='c13_extra_fee'") \
			_T("   )") \
			_T(" OR f.hfe_itemid IN") \
			_T("   (SELECT ss_code FROM sys_sel WHERE ss_id='c13_extra_fee_chang_obj'") \
			_T("   )") \
			//_T(" AND NVL(HD_IS_CHANGE_SER_OBJ, 'N')='Y' )") \//
			_T("   AND (NVL(HD_IS_CHANGE_SER_OBJ, 'N')='Y' )") \
			_T("   OR (NVL(HD_IS_CHANGE_SER_OBJ, 'N')='N'") \
			_T("   AND f.hfe_itemid IN") \
			_T("     (SELECT ss_code FROM sys_sel WHERE ss_id='c13_extra_fee_chang_obj'") \
			_T("     )))") \
			_T(" GROUP BY i.hfe_docno,") \
			_T("   f.hfe_itemid,") \
			_T("   f.hfe_desc,") \
			_T("   orderdate") \
			_T(" UNION ALL") \
			_T(" SELECT i.hfe_docno             AS docno,") \
			_T("   GET_PATIENTNAME(i.hfe_docno) AS tenbenhnhan,") \
			_T("   f.hfe_desc  AS tendichvu,") \
			_T("   TO_CHAR(orderdate, 'DD/MM/YYYY') AS ngaychidinh,") \
			_T("   SUM(f.hfe_quantity)              AS soluong,") \
			_T("   SUM(f.hfe_unitprice)             AS dongia,") \
			_T("   SUM(f.hfe_cost)                  AS thanhtien") \
			_T(" FROM hms_fee f") \
			_T(" LEFT JOIN HMS_FEE_INVOICE i") \
			_T(" ON (f.hfe_docno     = i.hfe_docno") \
			_T(" AND f.hfe_invoiceno = i.hfe_invoiceno)") \
			_T(" LEFT JOIN HMS_C13_PACS_EXAM_VIEW") \
			_T(" ON (f.hfe_docno   = docno") \
			_T(" AND f.hfe_orderid = orderid)") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON (i.hfe_docno = hd_docno)") \
			_T(" WHERE 1         =1 %s") \
			_T(" AND f.hfe_status   ='P'") \
			_T(" AND i.hfe_status   ='P'") \
			_T(" AND f.hfe_type    IN ('E', 'P', 'T')") \
			_T(" AND f.hfe_deptid  IN ('C1.3')") \
			_T(" AND i.hfe_objectid <>'7'") \
			_T(" AND f.hfe_itemid IN") \
			_T("   (SELECT ss_code FROM sys_sel WHERE ss_id='c13_extra_fee_chang_obj'") \
			_T("   )") \
			_T(" GROUP BY i.hfe_docno,") \
			_T("   f.hfe_itemid,") \
			_T("   f.hfe_desc,") \
			_T("   orderdate") \
			_T(" )") \
			_T(" ORDER BY tendichvu, docno, ngaychidinh"), szWhere, szWhere);

	//QueryOpener(szSQL);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}