#include "stdafx.h"
#include "FMEInvoicePostFailReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMEinvoicepostfailReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMEinvoicepostfailReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMEinvoicepostfailReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMEinvoicepostfailReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMEinvoicepostfailReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMEinvoicepostfailReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMEinvoicepostfailReport *pVw = (CFMEinvoicepostfailReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMEinvoicepostfailReport *pVw = (CFMEinvoicepostfailReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMEinvoicepostfailReport*)pWnd)->OnAddFMInsuranceFeeLossReport();
} 
static int _OnEditFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMEinvoicepostfailReport*)pWnd)->OnEditFMInsuranceFeeLossReport();
} 
static int _OnDeleteFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMEinvoicepostfailReport*)pWnd)->OnDeleteFMInsuranceFeeLossReport();
} 
static int _OnSaveFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMEinvoicepostfailReport*)pWnd)->OnSaveFMInsuranceFeeLossReport();
} 
static int _OnCancelFMInsuranceFeeLossReportFnc(CWnd *pWnd){
	 return ((CFMEinvoicepostfailReport*)pWnd)->OnCancelFMInsuranceFeeLossReport();
} 

static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CFMEinvoicepostfailReport*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CFMEinvoicepostfailReport*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CFMEinvoicepostfailReport*)pWnd)->OnPolicySelect();
}
static void _OnHoadonbihuySelectFnc(CWnd *pWnd){
	 ((CFMEinvoicepostfailReport*)pWnd)->OnHoadonbihuySelect();
}
static void _OnNodataSelectFnc(CWnd *pWnd)
{
	 ((CFMEinvoicepostfailReport*)pWnd)->OnNodataSelect();
}
static void _OnPostedSelectFnc(CWnd *pWnd){
	 ((CFMEinvoicepostfailReport*)pWnd)->OnPostedSelect();
}

CFMEinvoicepostfailReport::CFMEinvoicepostfailReport(CWnd* pParent)
{
	m_nDlgWidth = 475;
	m_nDlgHeight = 130;
	SetDefaultValues();
}

CFMEinvoicepostfailReport::~CFMEinvoicepostfailReport()
{
}
void CFMEinvoicepostfailReport::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 91);
	m_wndYearLabel.Create(this, _T("Year"), 10, 31, 90, 56);
	m_wndYear.Create(this,95, 31, 215, 56); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 31, 300, 56);
	m_wndReportPeriod.Create(this,305, 31, 425, 56); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 61, 90, 86);
	m_wndFromDate.Create(this,95, 61, 215, 86); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 61, 300, 86);
	m_wndToDate.Create(this,305, 61, 425, 86); 
	m_wndInsurance.Create(this, _T("Insurance"), 0, 0, 0, 0);
	m_wndService.Create(this, _T("Service"), 0, 0, 0, 0);
	m_wndPolicy.Create(this, _T("Quân_CS"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 330, 96, 430, 121);
	m_wndHoadonbihuy.Create(this, _T("Hóa đơn gốc đã bị hủy"), 10, 96, 215, 121);
	m_wndNodata.Create(this, _T("No Data Check"), 10, 126, 215, 151);
	m_wndPosted.Create(this, _T("Đã post"), 10, 157, 215, 182);

}
void CFMEinvoicepostfailReport::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
}
void CFMEinvoicepostfailReport::OnSetWindowEvents(){
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
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	m_wndHoadonbihuy.SetEvent(WE_CLICK, _OnHoadonbihuySelectFnc);
	m_wndNodata.SetEvent(WE_CLICK, _OnNodataSelectFnc);
	m_wndPosted.SetEvent(WE_CLICK, _OnPostedSelectFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
}
void CFMEinvoicepostfailReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Check(pDX, m_wndHoadonbihuy.GetDlgCtrlID(), m_bHoadonbihuy);
	DDX_Check(pDX, m_wndNodata.GetDlgCtrlID(), m_bNodata);
	DDX_Check(pDX, m_wndPosted.GetDlgCtrlID(), m_bPosted);

}
void CFMEinvoicepostfailReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMEinvoicepostfailReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMEinvoicepostfailReport::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nInsurance=0;
	m_nService=1;
	m_nPolicy=1;
	m_bHoadonbihuy=FALSE;
	m_bNodata = FALSE;
	m_bPosted=FALSE;

}
int CFMEinvoicepostfailReport::SetMode(int nMode){
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
/*void CFMEinvoicepostfailReport::OnYearChange(){
	
} */
/*void CFMEinvoicepostfailReport::OnYearSetfocus(){
	
} */
/*void CFMEinvoicepostfailReport::OnYearKillfocus(){
	
} */

void CFMEinvoicepostfailReport::OnHoadonbihuySelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();	
}

void CFMEinvoicepostfailReport::OnNodataSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	
}

void CFMEinvoicepostfailReport::OnInsuranceSelect()
{
		
}
void CFMEinvoicepostfailReport::OnServiceSelect(){
	
}
void CFMEinvoicepostfailReport::OnPolicySelect(){
	
}
void CFMEinvoicepostfailReport::OnPostedSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	
}

int CFMEinvoicepostfailReport::OnYearCheckValue()
{
	UpdateData(TRUE);
	if (m_nYear > 0)
	{
		CDateTime dt;
		CDate date;
		CString szTemp;

		dt.ParseDateTime(m_szFromDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szFromDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/%.2d/%.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}
	UpdateData(FALSE);
	return 0;
} 
void CFMEinvoicepostfailReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMEinvoicepostfailReport::OnReportPeriodSelendok()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/03/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/04/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/06/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/07/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/09/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/10/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/10/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/01/01 00:00"), nYear);
		tmpStr.Format(_T("%.4d/12/01"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
}
/*void CFMEinvoicepostfailReport::OnReportPeriodSetfocus(){
	
}*/
/*void CFMEinvoicepostfailReport::OnReportPeriodKillfocus(){
	
}*/
long CFMEinvoicepostfailReport::OnReportPeriodLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%d "), ToInt(m_szReportPeriodKey));
	}
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
/*void CFMEinvoicepostfailReport::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMEinvoicepostfailReport::OnFromDateChange(){
	
} */
/*void CFMEinvoicepostfailReport::OnFromDateSetfocus(){
	
} */
/*void CFMEinvoicepostfailReport::OnFromDateKillfocus(){
	
} */
int CFMEinvoicepostfailReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMEinvoicepostfailReport::OnToDateChange(){
	
} */
/*void CFMEinvoicepostfailReport::OnToDateSetfocus(){
	
} */
/*void CFMEinvoicepostfailReport::OnToDateKillfocus(){
	
} */
int CFMEinvoicepostfailReport::OnToDateCheckValue()
{
	return 0;
} 
void CFMEinvoicepostfailReport::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMEinvoicepostfailReport::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFromTime, szToTime, szSheetNo, tmpStr;
	long nDocumentNo;
	int nRow = 0, nCol = 0, nIdx = 1, ntmp = 0;
	double nTemp = 0, nTemp1=0;	

	UpdateData(true);
	BeginWaitCursor();

	if (m_bNodata)
	{
		AfxMessageBox(_T("Xin lưu ý các trường hợp thu phí khác, bệnh nhân của TTHTSS, bệnh nhân có hóa đơn phòng khám sau đó vào viện, bệnh nhân miễn giảm...-> để sửa lại hàm tạo dữ liệu hàng loạt!"));	
	}

	if (m_bPosted)

	{
		AfxMessageBox(_T("Export danh sách hóa đơn đã được posted thành công & được lấy theo thời điểm posted"));	
	}

	if (m_bHoadonbihuy)
	{
		szSQL.Format(_T(" SELECT ") \
					_T(" el.hfe_docno as docno,") \
					_T(" el.hfe_cusname as patname,") \
					_T(" el.HFE_CUSADDRESS as diachi,") \
					_T(" el.hfe_pkey as pkey,") \
					_T(" el.hfe_key as key,") \
					_T(" el.hfe_amount as tongchiphi,") \
					_T(" el.hfe_patpaid as phaitra,") \
					_T(" el.hfe_payment as thanhtoan,") \
					_T(" iv.HFE_STAFF as staff") \
					_T(" FROM") \
					_T(" HMS_FEE_ELECTRONICLINE el") \
					_T(" INNER JOIN hms_fee_invoice iv ON (el.hfe_docno=iv.hfe_docno AND el.HFE_KEY=iv.HFE_ELEKEY)") \
					_T(" WHERE el.hfe_date") \
					_T(" BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
					_T(" AND el.hfe_status='P' AND iv.hfe_status='C'"), m_szFromDate, m_szToDate);
	}
	else if (m_bNodata)
	{
		szSQL.Format(_T(" SELECT ") \
				_T(" hd_docno as docno,") \
				_T(" CAST('Báo cáo nodata' as NVARCHAR2(128)) as reportname,") \
				_T(" GET_PATIENTNAME(hd_docno) as patname,") \
				_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)),") \
				_T(" NULL as pkey,") \
				_T(" NULL as key,") \
				_T(" hfe_amount as tongchiphi,") \
				_T(" hfe_patpaid as phaitra,") \
				_T(" hfe_payment as thanhtoan,") \
				_T(" HFE_STAFF as staff") \
				_T(" from HMS_FEE_INVOICE") \
				_T(" LEFT JOIN hms_doc ON (hfe_docno = hd_docno)") \
				_T(" LEFT JOIN hms_patient ON (HD_PATIENTNO = HP_PATIENTNO)") \
				_T(" where HFE_DATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND hfe_status='P'") \
				_T(" AND (CEIL(hfe_patpaid) - CEIL(HFE_OTHERPAID) - CEIL(HFE_FREEAMOUNT))  > 1") \
				_T(" AND NVL(HFE_ELECTRONIC, 'X') = 'X'") \
				_T(" AND NVL(HFE_ELEKEY, 0) = 0") \
				_T(" AND NVL(HD_HEALTHEXAM, 'X') <> 'Y'") \
				_T(" AND hfe_staff NOT IN (SELECT ss_code FROM sys_sel WHERE ss_id='hms_user_kinhmat')") \
				_T(" AND hfe_staff NOT IN") \
				_T(" ('tondong',") \
				_T(" 'tondong2019',") \
				_T(" 'tondong2020',") \
				_T(" 'tondongngt',") \
				_T(" 'tondongquan',") \
				_T(" 'tondongtyc',") \
				_T(" 'hathuy_temp',") \
				_T("  'hdhn',") \
				_T("  'motuthienb8',") \
				_T("  'kbhd')") \
				_T(" order by HFE_INVOICENO"), m_szFromDate, m_szToDate);
	}	
	else if (m_bPosted)
	{
		szSQL.Format(_T(" SELECT ") \
					_T(" el.hfe_docno as docno,") \
					_T(" el.hfe_cusname as patname,") \
					_T(" el.HFE_CUSADDRESS as diachi,") \
					_T(" el.hfe_pkey as pkey,") \
					_T(" el.hfe_key as key,") \
					_T(" el.hfe_amount as tongchiphi,") \
					_T(" el.hfe_patpaid as phaitra,") \
					_T(" el.hfe_payment as thanhtoan,") \
					_T(" el.HFE_PATTER as mauhoadon,") \
					_T(" iv.HFE_STAFF as staff") \
					_T(" to_char(el.HFE_GET_PKEY_TIME, 'DD/MM/YYYY HH24:MI') as timepost") \
					_T(" FROM") \
					_T(" HMS_FEE_ELECTRONICLINE el") \
					_T(" INNER JOIN hms_fee_invoice iv ON (el.hfe_docno=iv.hfe_docno AND el.HFE_KEY=iv.HFE_ELEKEY)") \
					_T(" WHERE el.HFE_GET_PKEY_TIME") \
					_T(" BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
					_T(" AND el.hfe_pkey > 0 AND hfe_status = 'P' order by el.HFE_PATTER, el.hfe_key"), m_szFromDate, m_szToDate);
	}
	else 
	{
		szSQL.Format(_T(" SELECT ") \
					_T(" el.hfe_docno as docno,") \
					_T(" el.hfe_cusname as patname,") \
					_T(" el.HFE_CUSADDRESS as diachi,") \
					_T(" el.hfe_pkey as pkey,") \
					_T(" el.hfe_key as key,") \
					_T(" el.hfe_amount as tongchiphi,") \
					_T(" el.hfe_patpaid as phaitra,") \
					_T(" el.hfe_payment as thanhtoan,") \
					_T(" iv.HFE_STAFF as staff") \
					_T(" FROM") \
					_T(" HMS_FEE_ELECTRONICLINE el") \
					_T(" INNER JOIN hms_fee_invoice iv ON (el.hfe_docno=iv.hfe_docno AND el.HFE_KEY=iv.HFE_ELEKEY)") \
					_T(" WHERE el.hfe_date") \
					_T(" BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
					_T(" AND el.hfe_pkey=0"), m_szFromDate, m_szToDate);
	}

	CExcel xls;
	if(!xls.Load(_T("Exports\\Template\\DANHSACH_HOADON_DIENTU_CHUAPOST.xls"))) AfxMessageBox(_T("Chưa có File DANHSACH_HOADON_DIENTU_CHUAPOST.xls trong thư mục Export\\Template!"));
	xls.SetWorksheet(0);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 2, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("diachi"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pkey"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("key"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER|FMT_CENTER);

		rs.GetValue(_T("tongchiphi"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);		

		rs.GetValue(_T("phaitra"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("thanhtoan"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1|FMT_CENTER);

		rs.GetValue(_T("mauhoadon"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT|FMT_CENTER);

		rs.GetValue(_T("timepost"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT|FMT_CENTER);

		rs.GetValue(_T("staff"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT|FMT_RIGHT);
		
		nRow++;

		rs.MoveNext();
	}
	
	EndWaitCursor();		
	xls.Save(_T("Exports\\Template\\DANHSACH_HOADON_DIENTU_CHUAPOST2.xls"));

} 
int CFMEinvoicepostfailReport::OnAddFMInsuranceFeeLossReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMEinvoicepostfailReport::OnEditFMInsuranceFeeLossReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMEinvoicepostfailReport::OnDeleteFMInsuranceFeeLossReport(){
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
 		OnCancelFMInsuranceFeeLossReport(); 
 	}
	return 0;
}
int CFMEinvoicepostfailReport::OnSaveFMInsuranceFeeLossReport(){
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
 		//OnFMInsuranceFeeLossReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMEinvoicepostfailReport::OnCancelFMInsuranceFeeLossReport(){
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
int CFMEinvoicepostfailReport::OnFMInsuranceFeeLossReportListLoadData(){
	return 0;
}
