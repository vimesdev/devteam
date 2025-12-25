#include "stdafx.h"
#include "FMThongKeChiPhiBHXHBQP.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMThongKeChiPhiBHXHBQP* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMThongKeChiPhiBHXHBQP *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMThongKeChiPhiBHXHBQP *pVw = (CFMThongKeChiPhiBHXHBQP *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMThongKeChiPhiBHXHBQP *pVw = (CFMThongKeChiPhiBHXHBQP *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFMThongKeChiPhiBHXHBQP *pVw = (CFMThongKeChiPhiBHXHBQP *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddEMStatisticsGeneralPatientReportFnc(CWnd *pWnd)
{
	 return ((CFMThongKeChiPhiBHXHBQP*)pWnd)->OnAddEMStatisticsGeneralPatientReport();
} 
static int _OnEditEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CFMThongKeChiPhiBHXHBQP*)pWnd)->OnEditEMStatisticsGeneralPatientReport();
} 
static int _OnDeleteEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CFMThongKeChiPhiBHXHBQP*)pWnd)->OnDeleteEMStatisticsGeneralPatientReport();
} 
static int _OnSaveEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CFMThongKeChiPhiBHXHBQP*)pWnd)->OnSaveEMStatisticsGeneralPatientReport();
} 
static int _OnCancelEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CFMThongKeChiPhiBHXHBQP*)pWnd)->OnCancelEMStatisticsGeneralPatientReport();
} 
CFMThongKeChiPhiBHXHBQP::CFMThongKeChiPhiBHXHBQP(CWnd *pParent)
{
	m_nDlgWidth = 420;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CFMThongKeChiPhiBHXHBQP::~CFMThongKeChiPhiBHXHBQP()
{
}
void CFMThongKeChiPhiBHXHBQP::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 215, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 410, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 90);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 410, 85); 
	//m_wndPrint.Create(this, _T("&Print"), 250, 95, 330, 120);
	m_wndExport.Create(this, _T("&Export"), 335, 95, 415, 120);

}
void CFMThongKeChiPhiBHXHBQP::OnInitializeComponents(){
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
}
void CFMThongKeChiPhiBHXHBQP::OnSetWindowEvents(){
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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	SetMode(VM_EDIT);
}
void CFMThongKeChiPhiBHXHBQP::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}
void CFMThongKeChiPhiBHXHBQP::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CFMThongKeChiPhiBHXHBQP::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMThongKeChiPhiBHXHBQP::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CFMThongKeChiPhiBHXHBQP::SetMode(int nMode){
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
 			EnableButtons(TRUE,0,1,2,3,-1); 
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
/*void CFMThongKeChiPhiBHXHBQP::OnYearChange(){
	
} */
/*void CFMThongKeChiPhiBHXHBQP::OnYearSetfocus(){
	
} */
/*void CFMThongKeChiPhiBHXHBQP::OnYearKillfocus(){
	
} */
int CFMThongKeChiPhiBHXHBQP::OnYearCheckValue(){
	return 0;
} 
void CFMThongKeChiPhiBHXHBQP::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMThongKeChiPhiBHXHBQP::OnReportPeriodSelendok(){
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
/*void CFMThongKeChiPhiBHXHBQP::OnReportPeriodSetfocus(){
	
}*/
/*void CFMThongKeChiPhiBHXHBQP::OnReportPeriodKillfocus(){
	
}*/
long CFMThongKeChiPhiBHXHBQP::OnReportPeriodLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
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
/*void CFMThongKeChiPhiBHXHBQP::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMThongKeChiPhiBHXHBQP::OnFromDateChange(){
	
} */
/*void CFMThongKeChiPhiBHXHBQP::OnFromDateSetfocus(){
	
} */
/*void CFMThongKeChiPhiBHXHBQP::OnFromDateKillfocus(){
	
} */
int CFMThongKeChiPhiBHXHBQP::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMThongKeChiPhiBHXHBQP::OnToDateChange(){
	
} */
/*void CFMThongKeChiPhiBHXHBQP::OnToDateSetfocus(){
	
} */
/*void CFMThongKeChiPhiBHXHBQP::OnToDateKillfocus(){
	
} */
int CFMThongKeChiPhiBHXHBQP::OnToDateCheckValue(){
	return 0;
} 
void CFMThongKeChiPhiBHXHBQP::OnPrintSelect(){}

void CFMThongKeChiPhiBHXHBQP::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();		
	TranslateString(_T("Xuất Excel BHXH quốc phòng"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("Xuất Excel đối tượng BH khác & Dịch vụ"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		
		case 1:
			OnExportTotalList1();
			break;
		case 2:
			OnExportTotalList2();
			break;			
	}
}
void CFMThongKeChiPhiBHXHBQP::OnExportTotalList1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[12], nGroupTotal[12];
	for(int i = 0; i < 12; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_CHIPHI_BENHNHAN_BHXH_QUOCPHONG.xls"))) AfxMessageBox(_T("Load fail!"));	
	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 11;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c2"), nTemp);
		nGroupTotal[2] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);		

		rs.GetValue(_T("c3"), nTemp);
		nGroupTotal[3] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c4"), nTemp);
		nGroupTotal[4] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);		

		rs.GetValue(_T("c5"), nTemp);
		nGroupTotal[5] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c6"), nTemp);
		nGroupTotal[6] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c7"), nTemp);
		nGroupTotal[7] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c8"), nTemp);
		nGroupTotal[8] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c9"), nTemp);
		nGroupTotal[9] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c10"), nTemp);
		nGroupTotal[10] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("c11"), nTemp);
		nGroupTotal[11] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);		


		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[11] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 12; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_CHIPHI_BENHNHAN_BHXH_QUOCPHONG1.xls"));
}

void CFMThongKeChiPhiBHXHBQP::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMThongKeChiPhiBHXHBQP::OnAddEMStatisticsGeneralPatientReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMThongKeChiPhiBHXHBQP::OnEditEMStatisticsGeneralPatientReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMThongKeChiPhiBHXHBQP::OnDeleteEMStatisticsGeneralPatientReport(){
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
 		OnCancelEMStatisticsGeneralPatientReport(); 
 	}
	return 0;
}
int CFMThongKeChiPhiBHXHBQP::OnSaveEMStatisticsGeneralPatientReport(){
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
 		//OnEMStatisticsGeneralPatientReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMThongKeChiPhiBHXHBQP::OnCancelEMStatisticsGeneralPatientReport(){
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
int CFMThongKeChiPhiBHXHBQP::OnEMStatisticsGeneralPatientReportListLoadData(){
	return 0;
}
CString CFMThongKeChiPhiBHXHBQP::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	
	szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);	

		szSQL.Format(_T(" WITH tbl1 AS(") \
		_T(" SELECT ") \
		_T(" nam, SUM(theQN) as totaltheQN,") \
		_T(" SUM(ngoaitruQN) as totalngoaitruQN,") \
		_T(" SUM(noitruQN) as totalnoitruQN,") \
		_T(" SUM(tongQN) as totaltongQN") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT EXTRACT(YEAR FROM i.hfe_date) AS NAM,") \
		_T(" 1 as theQN,") \
		_T(" case when hfe_class='E' then hfe_amount else 0 end as ngoaitruQN, ") \
		_T(" case when hfe_class='I' then hfe_amount else 0 end as noitruQN,") \
		_T(" case when hfe_class in ('E','I') then hfe_amount else 0 end as tongQN") \
		_T(" FROM HMS_FEE_INVOICE I") \
		_T(" LEFT JOIN hms_doc d ON (I.hfe_docno=d.hd_docno)") \
		_T(" WHERE substr(hd_cardno,1,2)='QN'") \
		_T(" %s") \
		_T(" )") \
		_T(" GROUP BY nam") \
		_T(" ),") \
		_T(" tbl2 AS(") \
		_T(" SELECT ") \
		_T(" nam, SUM(theKQN) AS totaltheKQN,") \
		_T(" SUM(ngoaitruKQN) AS totalngoaitruKQN,") \
		_T(" SUM(noitruKQN) AS totalnoitruKQN,") \
		_T(" SUM(tongKQN) as totaltongKQN") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT EXTRACT(YEAR FROM i.hfe_date) AS NAM,") \
		_T(" 1 as theKQN,") \
		_T(" case when hfe_class='E' then hfe_amount else 0 end as ngoaitruKQN, ") \
		_T(" case when hfe_class='I' then hfe_amount else 0 end as noitruKQN,") \
		_T(" case when hfe_class in ('E','I') then hfe_amount else 0 end as tongKQN") \
		_T(" FROM HMS_FEE_INVOICE I ") \
		_T(" LEFT JOIN hms_doc d ON (I.hfe_docno=d.hd_docno)") \
		_T(" WHERE i.HFE_OBJECTID not in (1,3,7,8,13) AND (substr(hd_cardno,1,2) IN ('TQ', 'TV') OR substr(hd_cardno,1,5) IN ('DN497', 'HC497', 'TS497', 'SV497'))") \
		_T(" %s") \
		_T(" )") \
		_T(" GROUP BY nam)") \
		_T(" SELECT tbl1.nam as c1, tbl1.totaltheQN as c2, ") \
		_T(" tbl1.totalnoitruQN as c3,tbl1.totalngoaitruQN as c4, ") \
		_T(" tbl1.totaltongQN as c5,tbl2.totaltheKQN as c6,") \
		_T(" tbl2.totalnoitruKQN as c7, tbl2.totalngoaitruKQN as c8,") \
		_T(" tbl2.totaltongKQN as c9, ") \
		_T(" tbl1.totaltheQN +tbl2.totaltheKQN as c10,") \
		_T(" tbl1.totaltongQN+tbl2.totaltongKQN as c11") \
		_T(" FROM tbl1, tbl2 WHERE tbl1.nam = tbl2.nam ORDER BY tbl1.nam"), szWhere, szWhere);

	return szSQL;
}
void CFMThongKeChiPhiBHXHBQP::OnExportTotalList2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[12], nGroupTotal[12];
	for(int i = 0; i < 12; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_CHIPHI_BENHNHAN_BHXH_KHAC_QUOCPHONG.xls"))) AfxMessageBox(_T("Load fail!"));	
	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 11;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c2"), nTemp);
		nGroupTotal[2] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);		

		rs.GetValue(_T("c3"), nTemp);
		nGroupTotal[3] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c4"), nTemp);
		nGroupTotal[4] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);		

		rs.GetValue(_T("c5"), nTemp);
		nGroupTotal[5] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c6"), nTemp);
		nGroupTotal[6] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c7"), nTemp);
		nGroupTotal[7] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c8"), nTemp);
		nGroupTotal[8] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c9"), nTemp);
		nGroupTotal[9] += nTemp;
		tmpStr.Format(_T("%f"), nTemp);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);			


		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[9] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 10; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_CHIPHI_BENHNHAN_BHXH_KHAC_QUOCPHONG2.xls"));
}
CString CFMThongKeChiPhiBHXHBQP::GetQueryString2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	
	szWhere.AppendFormat(_T(" AND i.hfe_date BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);	

szSQL.Format(_T(" WITH tbl1 AS") \
		_T("   (SELECT nam,") \
		_T("     SUM(theKhac)      AS totaltheKhac,") \
		_T("     SUM(ngoaitruKhac) AS totalngoaitruKhac,") \
		_T("     SUM(noitruKhac)   AS totalnoitruKhac,") \
		_T("     SUM(tongKhac)     AS totaltongKhac") \
		_T("   FROM") \
		_T("     (SELECT EXTRACT(YEAR FROM i.hfe_date) AS NAM,") \
		_T("       1                                   AS theKhac,") \
		_T("       CASE") \
		_T("         WHEN hfe_class='E'") \
		_T("         THEN hfe_amount") \
		_T("         ELSE 0") \
		_T("       END AS ngoaitruKhac,") \
		_T("       CASE") \
		_T("         WHEN hfe_class='I'") \
		_T("         THEN hfe_amount") \
		_T("         ELSE 0") \
		_T("       END AS noitruKhac,") \
		_T("       CASE") \
		_T("         WHEN hfe_class IN ('E','I')") \
		_T("         THEN hfe_amount") \
		_T("         ELSE 0") \
		_T("       END AS tongKhac") \
		_T("     FROM HMS_FEE_INVOICE I") \
		_T("     LEFT JOIN hms_doc d") \
		_T("     ON (I.hfe_docno                   =d.hd_docno)") \
		_T("     WHERE  i.HFE_OBJECTID not in (1,3,7,8,13) AND SUBSTR(hd_cardno,1,2) NOT IN ('QN', 'TQ', 'TV')") \
		_T("     AND SUBSTR(hd_cardno,1,5) NOT    IN ('DN497', 'HC497', 'TS497', 'SV497')") \
		_T("     %s") \
		_T("     )") \
		_T("   GROUP BY nam") \
		_T("   ),") \
		_T("   tbl2 AS") \
		_T("   (SELECT nam,") \
		_T("     SUM(theDV)      AS totaltheDV,") \
		_T("     SUM(ngoaitruDV) AS totalngoaitruDV,") \
		_T("     SUM(noitruDV)   AS totalnoitruDV,") \
		_T("     SUM(tongDV)     AS totaltongDV") \
		_T("   FROM") \
		_T("     (SELECT EXTRACT(YEAR FROM i.hfe_date) AS NAM,") \
		_T("       1                                   AS theDV,") \
		_T("       CASE") \
		_T("         WHEN hfe_class='E'") \
		_T("         THEN hfe_amount") \
		_T("         ELSE 0") \
		_T("       END AS ngoaitruDV,") \
		_T("       CASE") \
		_T("         WHEN hfe_class='I'") \
		_T("         THEN hfe_amount") \
		_T("         ELSE 0") \
		_T("       END AS noitruDV,") \
		_T("       CASE") \
		_T("         WHEN hfe_class IN ('E','I')") \
		_T("         THEN hfe_amount") \
		_T("         ELSE 0") \
		_T("       END AS tongDV") \
		_T("     FROM HMS_FEE_INVOICE I") \
		_T("     LEFT JOIN hms_doc D") \
		_T("     ON (I.hfe_docno      =D.hd_docno)") \
		_T("     WHERE i.HFE_OBJECTID = 7") \
		_T("     %s") \
		_T("     )") \
		_T("   GROUP BY nam") \
		_T("   )") \
		_T(" SELECT tbl1.nam                       AS c1,") \
		_T("   tbl1.totaltheKhac                   AS c2,") \
		_T("   tbl1.totalnoitruKhac                AS c3,") \
		_T("   tbl1.totalngoaitruKhac              AS c4,") \
		_T("   tbl1.totaltongKhac                  AS c5,") \
		_T("   tbl2.totalnoitruDV                  AS c6,") \
		_T("   tbl2.totalngoaitruDV                AS c7,") \
		_T("   tbl2.totaltongDV                    AS c8,") \
		_T("   tbl1.totaltongKhac+tbl2.totaltongDV AS c9") \
		_T(" FROM tbl1,") \
		_T("   tbl2") \
		_T(" WHERE tbl1.nam = tbl2.nam ORDER BY tbl1.nam"), szWhere, szWhere);

	return szSQL;
}
