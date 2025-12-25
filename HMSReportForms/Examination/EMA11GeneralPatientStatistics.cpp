#include "stdafx.h"
#include "EMA11GeneralPatientStatistics.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMA11GeneralPatientStatistics *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMA11GeneralPatientStatistics* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMA11GeneralPatientStatistics *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMA11GeneralPatientStatistics *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMA11GeneralPatientStatistics *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMA11GeneralPatientStatistics *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMA11GeneralPatientStatistics *pVw = (CEMA11GeneralPatientStatistics *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMA11GeneralPatientStatistics *pVw = (CEMA11GeneralPatientStatistics *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CEMA11GeneralPatientStatistics *pVw = (CEMA11GeneralPatientStatistics *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMA11GeneralPatientStatistics*)pWnd)->OnAddEMStatisticsGeneralPatientReport();
} 
static int _OnEditEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMA11GeneralPatientStatistics*)pWnd)->OnEditEMStatisticsGeneralPatientReport();
} 
static int _OnDeleteEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMA11GeneralPatientStatistics*)pWnd)->OnDeleteEMStatisticsGeneralPatientReport();
} 
static int _OnSaveEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMA11GeneralPatientStatistics*)pWnd)->OnSaveEMStatisticsGeneralPatientReport();
} 
static int _OnCancelEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMA11GeneralPatientStatistics*)pWnd)->OnCancelEMStatisticsGeneralPatientReport();
} 
CEMA11GeneralPatientStatistics::CEMA11GeneralPatientStatistics(CWnd *pParent)
{
	m_nDlgWidth = 420;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CEMA11GeneralPatientStatistics::~CEMA11GeneralPatientStatistics()
{
}
void CEMA11GeneralPatientStatistics::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 215, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 410, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 90);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 410, 85); 
	m_wndPrint.Create(this, _T("&Print"), 250, 95, 330, 120);
	m_wndExport.Create(this, _T("&Export"), 335, 95, 415, 120);
	m_wndPrint.ShowWindow(SW_HIDE);
}
void CEMA11GeneralPatientStatistics::OnInitializeComponents(){
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
void CEMA11GeneralPatientStatistics::OnSetWindowEvents(){
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
void CEMA11GeneralPatientStatistics::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}
void CEMA11GeneralPatientStatistics::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CEMA11GeneralPatientStatistics::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMA11GeneralPatientStatistics::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CEMA11GeneralPatientStatistics::SetMode(int nMode){
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
/*void CEMA11GeneralPatientStatistics::OnYearChange(){
	
} */
/*void CEMA11GeneralPatientStatistics::OnYearSetfocus(){
	
} */
/*void CEMA11GeneralPatientStatistics::OnYearKillfocus(){
	
} */
int CEMA11GeneralPatientStatistics::OnYearCheckValue(){
	return 0;
} 
void CEMA11GeneralPatientStatistics::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMA11GeneralPatientStatistics::OnReportPeriodSelendok(){
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
/*void CEMA11GeneralPatientStatistics::OnReportPeriodSetfocus(){
	
}*/
/*void CEMA11GeneralPatientStatistics::OnReportPeriodKillfocus(){
	
}*/
long CEMA11GeneralPatientStatistics::OnReportPeriodLoadData()
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
/*void CEMA11GeneralPatientStatistics::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMA11GeneralPatientStatistics::OnFromDateChange(){
	
} */
/*void CEMA11GeneralPatientStatistics::OnFromDateSetfocus(){
	
} */
/*void CEMA11GeneralPatientStatistics::OnFromDateKillfocus(){
	
} */
int CEMA11GeneralPatientStatistics::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMA11GeneralPatientStatistics::OnToDateChange(){
	
} */
/*void CEMA11GeneralPatientStatistics::OnToDateSetfocus(){
	
} */
/*void CEMA11GeneralPatientStatistics::OnToDateKillfocus(){
	
} */
int CEMA11GeneralPatientStatistics::OnToDateCheckValue(){
	return 0;
} 
void CEMA11GeneralPatientStatistics::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);
	if(!rpt.Init(_T("Reports/HMS/HE_THONGKEBENHNHANCAPTUONG.RPT")) )
	return ;
	BeginWaitCursor();
	UpdateData(true);
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	rs.GetValue(_T("tenkhoa"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);

	int nIndex = 1;
	CReportSection* rptDetail;
int c1 = 0;
		rs.GetValue(_T("hd_object"), tmpStr);
		if(tmpStr == _T("1"))
		{
			if(!tmpStr.IsEmpty()) c1++;
		}
		rpt.GetReportHeader()->SetValue(_T("quan"), tmpStr);
		


	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();		
		tmpStr.Format(_T("%ld"), nIndex ++);
		rptDetail->SetValue(_T("0"), tmpStr);
		
		rs.GetValue(_T("docno"),tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("tenBN"),tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("tencapbac"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("chucvu"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("donvi"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		rs.GetValue(_T("tendoituong"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("icd10"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.GetValue(_T("benhchinh"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.MoveNext();	
	}	
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
	
} 
void CEMA11GeneralPatientStatistics::OnExportSelect() {
	UpdateData();
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, szFilePath, szFileName, tmpStr;
	int nRow = 10, nCol = 0, nIdx = 1;

	szFileName = _T("THONG_KE_BENH_NHAN_CAP_TUONG_A11");
	szFilePath.Format(_T("Exports\\Template\\MAU_%s.xls"), szFileName);
	if (!xls.Load(szFilePath))
	{
		CString szMsg;
		szMsg.Format(_T("Thiếu file %s"), szFilePath);
		ShowMessageBox(szMsg);
		return;
	}

	xls.SetWorksheet(0);

	tmpStr.Format(
		_T("Từ ngày %s đến ngày %s")
		, CDate::Convert(m_szFromDate)
		, CDate::Convert(m_szToDate));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT, true);

	szSQL = GetQueryString(Q_SYNTHESIS);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		return;
	}
	FillData(&xls, &rs);

	nRow = 10;
	szSQL = GetQueryString(Q_DETAIL);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++));
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			xls.SetCellText(i + 1, nRow, rs.GetValue(i), FMT_TEXT);
		}
		nRow++;
		rs.MoveNext();
	}

	szFilePath.Format(_T("Exports\\%s.xls"), szFileName);
	xls.Save(szFilePath);
}

void CEMA11GeneralPatientStatistics::FillData(CExcel* pXls, CRecord* pRs)
{
	if (pXls == NULL)
	{
		return;
	}
	if (pRs == NULL)
	{
		return;
	}
	
	CellFormat* cfm;
	CString szText, szField, szValue;
	int nOpenBracket = -1, nClosedBracket = -1;

	for (int iCol = 0; iCol < pXls->GetTotalColumns(); iCol++)
	{
		for (int iRow = 0; iRow < pXls->GetTotalRows(); iRow++)
		{
			szText = pXls->ReadString(iRow, iCol);
			nOpenBracket = szText.Find(L"{");
			nClosedBracket = szText.Find(L"}");
			if (szText.IsEmpty() || (nOpenBracket+nClosedBracket <= 0))
				continue;
			if (nClosedBracket <= nOpenBracket + 1)
				continue;
			
			cfm = pXls->GetCellStyle(iRow, iCol);
			szField = szText.Mid(nOpenBracket, nClosedBracket-nOpenBracket+1);

			szText.Replace(szField, _T("%s"));
			szField.Replace(_T("{"), _T(""));
			szField.Replace(_T("}"), _T(""));
			
			szValue.Format(szText, pRs->GetValue(szField));
			pXls->SetCellText(iCol, iRow, szValue, cfm);
		}
	}
}

void CEMA11GeneralPatientStatistics::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMA11GeneralPatientStatistics::OnAddEMStatisticsGeneralPatientReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CEMA11GeneralPatientStatistics::OnEditEMStatisticsGeneralPatientReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMA11GeneralPatientStatistics::OnDeleteEMStatisticsGeneralPatientReport(){
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
int CEMA11GeneralPatientStatistics::OnSaveEMStatisticsGeneralPatientReport(){
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
int CEMA11GeneralPatientStatistics::OnCancelEMStatisticsGeneralPatientReport(){
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
int CEMA11GeneralPatientStatistics::OnEMStatisticsGeneralPatientReportListLoadData()
{
	return 0;
}
CString CEMA11GeneralPatientStatistics::GetQueryString(int nQueryID)
{
	CString szSQL, szSubSQL, szWhere;

	szWhere.Format(
		_T(" AND hd_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T(" AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" AND hd_status NOT IN ( 'O', 'C' )") \
		_T(" AND hd_admitdept = 'C1.2' AND hp_rank IN ( 15, 16, 17, 18,") \
		_T("                                            21, 22, 23, 24, 58 )")
		, m_szFromDate, m_szToDate);

	if (nQueryID == Q_SYNTHESIS)
	{
		szSQL.Format(_T(" SELECT SUM (CASE WHEN hd_object = 1 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS bn_quan,") \
			_T("        SUM (CASE WHEN hd_object = 2 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS bn_huu,") \
			_T("        SUM (CASE WHEN hd_object = 11 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS bn_bhyt_quan,") \
			_T("        SUM (CASE WHEN Substr (hd_cardno, 1, 2) = 'QN' THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS bn_tuong_duong_chuc,") \
			_T("        SUM (CASE WHEN Substr (hd_cardno, 1, 2) = 'HT' THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS bn_tuong_huu,") \
			_T("        SUM (1) AS bn_tong_so,") \
			_T("        SUM (CASE WHEN cap_thuoc > 0 AND hd_object = 1 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS thuoc_quan,") \
			_T("        SUM (CASE WHEN cap_thuoc > 0 AND hd_object = 2 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS thuoc_huu,") \
			_T("        SUM (CASE WHEN cap_thuoc > 0 AND hd_object = 11 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS thuoc_bhyt_quan,") \
			_T("        SUM (CASE WHEN cap_thuoc > 0 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS thuoc_tong_so,") \
			_T("        SUM (CASE WHEN cap_thuoc > 0 AND xn <= 0 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS thuoc_ko_xn,") \
			_T("        SUM (CASE WHEN hd_suggestion IN ( 'C', 'D' ) AND hd_object = 1 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS vao_vien_quan,") \
			_T("        SUM (CASE WHEN hd_suggestion IN ( 'C', 'D' ) AND hd_object = 2 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS vao_vien_huu,") \
			_T("        SUM (CASE WHEN hd_suggestion IN ( 'C', 'D' ) AND hd_object = 11 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS vao_vien_bhyt_quan,") \
			_T("        SUM (CASE WHEN hd_suggestion IN ( 'C', 'D' ) THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS vao_vien_tong_so,") \
			_T("        SUM (CASE WHEN xn > 0 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS xn,") \
			_T("        SUM (CASE WHEN cdha_mri > 0 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS cdha_mri,") \
			_T("        SUM (CASE WHEN cdha_sieu_am > 0 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS cdha_sieu_am,") \
			_T("        SUM (CASE WHEN ck > 0 THEN 1") \
			_T("             ELSE 0") \
			_T("             END) AS ck") \
			_T("   FROM (SELECT hd_patientno,") \
			_T("                hd_docno,") \
			_T("                hd_admitdept,") \
			_T("                hd_object,") \
			_T("                hd_suggestion,") \
			_T("                hd_cardno,") \
			_T("                SUM (cap_thuoc) AS cap_thuoc,") \
			_T("                SUM (xn) AS xn,") \
			_T("                SUM (cdha_mri) AS cdha_mri,") \
			_T("                SUM (cdha_sieu_am) AS cdha_sieu_am,") \
			_T("                SUM (ck) AS ck,") \
			_T("                Count (*)") \
			_T("                  OVER (") \
			_T("                    PARTITION BY hd_patientno) AS so_lan_kham") \
			_T("           FROM (   SELECT hd_patientno,") \
			_T("                           hd_docno,") \
			_T("                           hd_admitdept,") \
			_T("                           hd_object,") \
			_T("                           hd_suggestion,") \
			_T("                           hd_cardno,") \
			_T("                           SUM (CASE WHEN hfe_type IN ( 'D', 'M' ) THEN 1") \
			_T("                                ELSE 0") \
			_T("                                END) AS cap_thuoc,") \
			_T("                           SUM (CASE WHEN hfe_type IN ( 'T' ) THEN 1") \
			_T("                                ELSE 0") \
			_T("                                END) AS xn,") \
			_T("                           SUM (CASE WHEN hfe_type IN ( 'P' ) AND hfe_group = 'B2300' THEN 1") \
			_T("                                ELSE 0") \
			_T("                                END) AS cdha_mri,") \
			_T("                           SUM (CASE WHEN hfe_type IN ( 'P' ) AND hfe_group IN ( 'B2400', 'B3200' )") \
			_T("                                THEN 1") \
			_T("                                ELSE 0") \
			_T("                                END) AS cdha_sieu_am,") \
			_T("                           SUM (CASE WHEN hfe_deptid <> hd_admitdept THEN 1") \
			_T("                                ELSE 0") \
			_T("                                END) AS ck") \
			_T("                      FROM hms_doc") \
			_T("                 LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno )") \
			_T("                 LEFT JOIN hms_fee ON ( hfe_docno = hd_docno )") \
			_T("                     WHERE 1=1 %s AND hfe_status NOT IN('C')") \
			_T("                     GROUP BY hd_patientno,hd_docno,hd_admitdept,hd_object,hd_suggestion,hd_cardno)") \
			_T("          GROUP BY hd_patientno,hd_docno,hd_admitdept,hd_object,hd_suggestion,hd_cardno)")
			, szWhere);

	}
	if (nQueryID == Q_DETAIL)
	{
		szSQL.Format(
			_T("    SELECT hd_docno,") \
			_T("           p_Name,") \
			_T("           p_rank_desc,") \
			_T("           p_position_desc,") \
			_T("           p_workplace,") \
			_T("           p_contacttel,") \
			_T("           p_cardno,") \
			_T("           p_object_desc,") \
			_T("           Count (hp_patientno)") \
			_T("             OVER (") \
			_T("               PARTITION BY hd_patientno) AS so_lan_kham,") \
			_T("           hd_icd,") \
			_T("           hd_conclusion") \
			_T("      FROM hms_doc") \
			_T(" LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno )") \
			_T(" LEFT JOIN Hms_patient_view ON ( hd_docno = p_docno )") \
			_T("     WHERE 1=1 %s")
		, szWhere);

	}
	return szSQL;
}