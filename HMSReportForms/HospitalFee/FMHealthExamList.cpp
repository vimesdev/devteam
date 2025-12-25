#include "stdafx.h"
#include "FMHealthExamList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMHealthExamList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMHealthExamList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMHealthExamList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMHealthExamList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMHealthExamList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMHealthExamList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMHealthExamList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMHealthExamList *)pWnd)->OnToDateCheckValue();
} 
static void _OnCompanySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMHealthExamList* )pWnd)->OnCompanySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCompanySelendokFnc(CWnd *pWnd){
	((CFMHealthExamList *)pWnd)->OnCompanySelendok();
}
/*static void _OnCompanySetfocusFnc(CWnd *pWnd){
	((CFMHealthExamList *)pWnd)->OnCompanyKillfocus();
}*/
/*static void _OnCompanyKillfocusFnc(CWnd *pWnd){
	((CFMHealthExamList *)pWnd)->OnCompanyKillfocus();
}*/
static long _OnCompanyLoadDataFnc(CWnd *pWnd){
	return ((CFMHealthExamList *)pWnd)->OnCompanyLoadData();
}
/*static void _OnCompanyAddNewFnc(CWnd *pWnd){
	((CFMHealthExamList *)pWnd)->OnCompanyAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMHealthExamList *pVw = (CFMHealthExamList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMHealthExamList *pVw = (CFMHealthExamList *)pWnd;
	pVw->OnPrintSelect();
} 
CFMHealthExamList::CFMHealthExamList(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMHealthExamList::~CFMHealthExamList(){
}
void CFMHealthExamList::OnCreateComponents(){
	m_wndHealthExamList.Create(this, _T("Health Exam List"), 5, 5, 430, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndCompanyLabel.Create(this, _T("Company"), 10, 60, 90, 85);
	m_wndCompany.Create(this,95, 60, 425, 85); 
	m_wndGroupByCompany.Create(this, _T("Group by Company"), 5, 95, 140, 120);
	m_wndExport.Create(this, _T("&Export"), 265, 95, 345, 120);
	m_wndExport.ShowWindow(SW_HIDE);
	m_wndPrint.Create(this, _T("&Print"), 350, 95, 430, 120);

}
void CFMHealthExamList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndCompany.SetCheckValue(true);
	m_wndCompany.LimitText(35);


	m_wndCompany.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCompany.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFMHealthExamList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndCompany.SetEvent(WE_SELENDOK, _OnCompanySelendokFnc);
	//m_wndCompany.SetEvent(WE_SETFOCUS, _OnCompanySetfocusFnc);
	//m_wndCompany.SetEvent(WE_KILLFOCUS, _OnCompanyKillfocusFnc);
	m_wndCompany.SetEvent(WE_SELCHANGE, _OnCompanySelectChangeFnc);
	m_wndCompany.SetEvent(WE_LOADDATA, _OnCompanyLoadDataFnc);
	//m_wndCompany.SetEvent(WE_ADDNEW, _OnCompanyAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CFMHealthExamList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompanyKey);
	DDX_Check(pDX, m_wndGroupByCompany.GetDlgCtrlID(), m_bGroupByCompany);

}
void CFMHealthExamList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szCompanyKey.Empty();
	m_bGroupByCompany = FALSE;

}
int CFMHealthExamList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
/*void CFMHealthExamList::OnFromDateChange(){
	
} */
/*void CFMHealthExamList::OnFromDateSetfocus(){
	
} */
/*void CFMHealthExamList::OnFromDateKillfocus(){
	
} */
int CFMHealthExamList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMHealthExamList::OnToDateChange(){
	
} */
/*void CFMHealthExamList::OnToDateSetfocus(){
	
} */
/*void CFMHealthExamList::OnToDateKillfocus(){
	
} */
int CFMHealthExamList::OnToDateCheckValue(){
	return 0;
} 
void CFMHealthExamList::OnCompanySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMHealthExamList::OnCompanySelendok(){
	 
}
/*void CFMHealthExamList::OnCompanySetfocus(){
	
}*/
/*void CFMHealthExamList::OnCompanyKillfocus(){
	
}*/
long CFMHealthExamList::OnCompanyLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCompany.IsSearchKey() && !m_szCompanyKey.IsEmpty()){
		szWhere.Format(_T(" and hwp_idx = '%s' "), m_szCompanyKey);
	}
	m_wndCompany.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hwp_idx as id, hwp_name as name FROM hms_workplace WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCompany.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMHealthExamList::OnCompanyAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMHealthExamList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 3);
	xls.SetCellMergedColumns(0, 3, 3);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name

	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header

	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT);
		rs.GetValue(_T("amount"), nTmp);
		xls.SetCellText(4, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Danh sach BN kham suc khoe.xls"));
	
} 
void CFMHealthExamList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CString szSQL;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptOldGroup = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szsSQL, tmpStr, tmpStr2, szReportName, szDate, szOldLev1, szNewLev1;
	double nTotal = 0, nGroupTotal1 = 0;
	szReportName = _T("Reports\\HMS\\HF_DANHSACHBENHNHANNOPTIEN.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		szOldLev1 = _T("XX");
		if (m_bGroupByCompany)
			rs.GetValue(_T("workplace_id"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1 > 0)
			{
				FormatCurrency(nGroupTotal1, tmpStr);
				rptOldGroup->SetValue(_T("SumGroupName"), tmpStr);
				nTotal+= nGroupTotal1;
				nGroupTotal1 = 0;
				nIdx = 1;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rs.GetValue(_T("workplace_name"), tmpStr);
				rptGroup->SetValue(_T("GroupName"), tmpStr);
				rptOldGroup = rptGroup;
			}
			szOldLev1 = szNewLev1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("doc_no")));
			rs.GetValue(_T("amount"), nTmp);
			nGroupTotal1+= nTmp;
			FormatCurrency(nTmp, tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
		}
		rs.MoveNext();
	}
	if (nGroupTotal1 > 0 && m_bGroupByCompany)
	{
		FormatCurrency(nGroupTotal1, tmpStr);
		rptOldGroup->SetValue(_T("SumGroupName"), tmpStr);
		nTotal+= nGroupTotal1;
	}
	rptHeader = rpt.GetReportFooter();
	if (rptHeader)
	{
		if (!m_bGroupByCompany)
			nTotal = nGroupTotal1;
		FormatCurrency(nTotal, tmpStr);
		rptHeader->SetValue(_T("SumTotalAmount"), tmpStr);
		tmpStr2.Format(_T("%f"), nTotal);
		MoneyToString(tmpStr2, tmpStr);
		tmpStr += _T(" \x111\x1ED3ng.");
		rptHeader->SetValue(_T("SumInWord"), tmpStr);
		tmpStr = pMF->GetSysDate();
		szDate.Format(rptHeader->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
		rptHeader->SetValue(_T("PrintDate"), szDate);	
	}
	
	rpt.PrintPreview();
	
} 

CString CFMHealthExamList::GetQueryString(){
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND hd_enddate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if (!m_szCompanyKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hp_workplaceid = '%s'"), m_szCompanyKey);
	szSQL.Format(_T(" SELECT hp_workplaceid workplace_id, hp_workplace workplace_name, hd_docno doc_no, ") \
				 _T("		 get_patientname(hd_docno) patient_name, sum(f.hfe_cost) amount ") \
				 _T(" FROM hms_doc ") \
				 _T(" LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
				 _T(" LEFT JOIN hms_fee f ON (hd_docno = hfe_docno)") \
				 _T(" WHERE hd_healthexam = 'Y' %s") \
				 _T(" GROUP BY hp_workplaceid, hp_workplace, hd_enddate, hd_docno") \
				 _T(" ORDER BY hp_workplaceid, hp_workplace, hd_enddate, hd_docno"), szWhere);

	return szSQL;
}