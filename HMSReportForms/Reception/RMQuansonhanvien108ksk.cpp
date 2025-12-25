#include "stdafx.h"
#include "RMQuansonhanvien108ksk.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CRMQuansonhanvien108ksk *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMQuansonhanvien108ksk* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CRMQuansonhanvien108ksk *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRMQuansonhanvien108ksk *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRMQuansonhanvien108ksk *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRMQuansonhanvien108ksk *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CRMQuansonhanvien108ksk *pVw = (CRMQuansonhanvien108ksk *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRMQuansonhanvien108ksk *pVw = (CRMQuansonhanvien108ksk *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRMQuansonhanvien108ksk *pVw = (CRMQuansonhanvien108ksk *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddRMGeneralExaminationInformationReportFnc(CWnd *pWnd){
	 return ((CRMQuansonhanvien108ksk*)pWnd)->OnAddRMGeneralExaminationInformationReport();
} 
static int _OnEditRMGeneralExaminationInformationReportFnc(CWnd *pWnd){
	 return ((CRMQuansonhanvien108ksk*)pWnd)->OnEditRMGeneralExaminationInformationReport();
} 
static int _OnDeleteRMGeneralExaminationInformationReportFnc(CWnd *pWnd){
	 return ((CRMQuansonhanvien108ksk*)pWnd)->OnDeleteRMGeneralExaminationInformationReport();
} 
static int _OnSaveRMGeneralExaminationInformationReportFnc(CWnd *pWnd){
	 return ((CRMQuansonhanvien108ksk*)pWnd)->OnSaveRMGeneralExaminationInformationReport();
} 
static int _OnCancelRMGeneralExaminationInformationReportFnc(CWnd *pWnd){
	 return ((CRMQuansonhanvien108ksk*)pWnd)->OnCancelRMGeneralExaminationInformationReport();
} 
CRMQuansonhanvien108ksk::CRMQuansonhanvien108ksk(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CRMQuansonhanvien108ksk::~CRMQuansonhanvien108ksk(){
}
void CRMQuansonhanvien108ksk::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 90, 84);
	m_wndFromDate.Create(this,95, 59, 245, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 415, 95, 490, 120);
}
void CRMQuansonhanvien108ksk::OnInitializeComponents(){
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
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
}
void CRMQuansonhanvien108ksk::OnSetWindowEvents(){
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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = szSysDate + _T("00:00");
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate = szSysDate + _T("23:59");
	UpdateData(false);
}
void CRMQuansonhanvien108ksk::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}
void CRMQuansonhanvien108ksk::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CRMQuansonhanvien108ksk::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRMQuansonhanvien108ksk::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CRMQuansonhanvien108ksk::SetMode(int nMode){
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
/*void CRMQuansonhanvien108ksk::OnYearChange(){
	
} */
/*void CRMQuansonhanvien108ksk::OnYearSetfocus(){
	
} */
/*void CRMQuansonhanvien108ksk::OnYearKillfocus(){
	
} */
int CRMQuansonhanvien108ksk::OnYearCheckValue(){
	return 0;
} 
void CRMQuansonhanvien108ksk::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRMQuansonhanvien108ksk::OnReportPeriodSelendok(){
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
/*void CRMQuansonhanvien108ksk::OnReportPeriodSetfocus(){
	
}*/
/*void CRMQuansonhanvien108ksk::OnReportPeriodKillfocus(){
	
}*/
long CRMQuansonhanvien108ksk::OnReportPeriodLoadData()
{
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
/*void CRMQuansonhanvien108ksk::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRMQuansonhanvien108ksk::OnFromDateChange(){
	
} */
/*void CRMQuansonhanvien108ksk::OnFromDateSetfocus(){
	
} */
/*void CRMQuansonhanvien108ksk::OnFromDateKillfocus(){
	
} */
int CRMQuansonhanvien108ksk::OnFromDateCheckValue(){
	return 0;
} 
/*void CRMQuansonhanvien108ksk::OnToDateChange(){
	
} */
/*void CRMQuansonhanvien108ksk::OnToDateSetfocus(){
	
} */
/*void CRMQuansonhanvien108ksk::OnToDateKillfocus(){
	
} */
int CRMQuansonhanvien108ksk::OnToDateCheckValue(){
	return 0;
} 
void CRMQuansonhanvien108ksk::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CReport rpt;
	CString tmpStr, szSQL, szSQL1, szWhere;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	UpdateData(true);

	if(!rpt.Init(_T("Reports/HMS/RM_TONGHOPTHONGTINKHAMBENHTAICACPHONGKHAM.RPT")) ) return ;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd||hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	szSQL1 = GetQueryString();
	rs1.ExecSQL(szSQL1);
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	int nTong = 0;
	int nIndex = 0;
	CString tmpStr1;
	CReportSection* rptDetail  ;
	long double  nTotal[4];
	for (int i = 1 ; i<= 3; i++)
	{
		nTotal[i] = 0.0;
	}

	while(!rs1.IsEOF() || !rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIndex++;
		if (!rs1.IsEOF())
		{
			tmpStr.Format(_T("%d"), nIndex);
			rptDetail->SetValue(_T("1"), tmpStr);
			
			rs1.GetValue(_T("loaithe"),tmpStr);
			if (!tmpStr.IsEmpty())
				tmpStr1 = tmpStr + _T(" %");
			rptDetail->SetValue(_T("2"), tmpStr1);
			
			rs1.GetValue(_T("dem"), tmpStr);
			nTong += ToInt(tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);

			rs1.MoveNext();		
		}
		if (!rs.IsEOF())
		{
			tmpStr.Format(_T("%d"), nIndex);
			rptDetail->SetValue(_T("4"), tmpStr);
			
			rs.GetValue(_T("name"),tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			
			rs.GetValue(_T("reg"), tmpStr);
			nTotal[1] += ToLong(tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);

			rs.GetValue(_T("examed"), tmpStr);
			nTotal[2] += ToLong(tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);
			
			rs.GetValue(_T("remain"), tmpStr);
			nTotal[3] += ToLong(tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);

			rs.MoveNext();		
		}
	}	

	tmpStr.Format(_T("%d"), nTong);
	rpt.GetReportFooter()->SetValue(_T("sum3"), tmpStr);
	CString szSum;
	for (int i = 1 ; i<= 3; i++)
	{
		szSum.Format(_T("s%d"), i+5);
		tmpStr.Format(_T("%.2f"), nTotal[i]);
		rpt.GetReportFooter()->SetValue(szSum, tmpStr);
	}
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
	
} 
void CRMQuansonhanvien108ksk::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	

	CReport rpt;	
	CRecord rs(&pMF->m_db);	
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept, label1, label2, szRooms;
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
	if(!xls.Load(_T("Exports\\Template\\BAOCAOQUANSONHANVIEN108_KSK.xls"))) AfxMessageBox(_T("Chưa có File BAOCAOQUANSONHANVIEN108_KSK.xls trong thư mục Export\Template!"));
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF())
	{
				
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("birthdate"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("objectid"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("capbac"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("noilamviec"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ketluan"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("totalfee"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);
		

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[9])
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng:"), FMT_TEXT, true);
		for(int i = 8; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}	

	EndWaitCursor();
		
		xls.Save(_T("Exports\\Template\\BAOCAOQUANSONHANVIEN108_KSK2.xls"));
} 
void CRMQuansonhanvien108ksk::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CRMQuansonhanvien108ksk::OnAddRMGeneralExaminationInformationReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CRMQuansonhanvien108ksk::OnEditRMGeneralExaminationInformationReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CRMQuansonhanvien108ksk::OnDeleteRMGeneralExaminationInformationReport(){
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
 		OnCancelRMGeneralExaminationInformationReport(); 
 	}
	return 0;
}
int CRMQuansonhanvien108ksk::OnSaveRMGeneralExaminationInformationReport(){
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
 		//OnRMGeneralExaminationInformationReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CRMQuansonhanvien108ksk::OnCancelRMGeneralExaminationInformationReport(){
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
int CRMQuansonhanvien108ksk::OnRMGeneralExaminationInformationReportListLoadData(){
	return 0;
}
CString CRMQuansonhanvien108ksk::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL1;
	CString szWhere1;	

		szSQL1.Format(_T(" SELECT hd_docno as docno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                    AS patname,") \
		_T("   TO_CHAR(hp_birthdate,'DD/MM/YYYY') AS birthdate,") \
		_T("   hms_getsex(hp_sex)                 AS sex,  ") \
		_T("   Get_objectname(hd_object) as objectid,  ") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_code=hd_rank and ss_id='hms_rank') as capbac,") \
		_T("   hp_workplace as noilamviec, HD_CONCLUSION as ketluan, ") \
		_T("   (SELECT SUM(hfe_cost)") \
		_T("   FROM hms_fee") \
		_T("   WHERE hfe_docno            =hd_docno") \
		_T("   AND NVL(HFE_CATEGORY,'L') <> 'Y'") \
		_T("   ) AS totalfee") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
		_T(" WHERE HD_ADMITDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND (HP_WORKPLACEID = '108' OR NVL(HD_108STAFF, 'XX') = 'Y' )") \
		_T(" ORDER BY HD_ADMITDATE, hd_docno"), m_szFromDate, m_szToDate);

	return szSQL1;
}

CString CRMQuansonhanvien108ksk::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString  szSQL;
	CString szWhere;
	szSQL.Format(_T(" SELECT hrl_id||'. '||hrl_name as name,") \
				_T(" 	sum(reg) as reg,") \
				_T(" 	sum(examed) as examed,") \
				_T(" 	sum(reg-examed) as remain") \
				_T("  FROM ") \
				_T("  ( ") \
				_T("  SELECT") \
				_T(" 	he_deptid,") \
				_T(" 	he_roomid,") \
				_T(" 	1 as reg,") \
				_T(" 	case when he_status IN ('P', 'T') then 1 else 0 end as examed") \
				_T("  FROM") \
				_T(" 	hms_exam") \
				_T("  WHERE he_examdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("  ) Tbl") \
				_T("  LEFT JOIN hms_roomlist ON(hrl_deptid=he_deptid AND hrl_id=he_roomid)") \
				_T("  WHERE hrl_id > 0 ") \
				_T("  AND he_deptid = '%s'") \
				_T("  GROUP BY he_deptid, he_roomid, hrl_id, hrl_name") \
				_T("  ORDER BY he_deptid, he_roomid"), m_szFromDate, m_szToDate, pMF->m_szDept);
	return szSQL;
}