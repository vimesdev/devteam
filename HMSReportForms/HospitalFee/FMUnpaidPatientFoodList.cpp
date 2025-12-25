#include "stdafx.h"
#include "FMUnpaidPatientFoodList.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMUnpaidPatientFoodList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMUnpaidPatientFoodList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMUnpaidPatientFoodList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMUnpaidPatientFoodList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMUnpaidPatientFoodList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMUnpaidPatientFoodList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMUnpaidPatientFoodList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMUnpaidPatientFoodList *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMUnpaidPatientFoodList* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CFMUnpaidPatientFoodList *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CFMUnpaidPatientFoodList *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CFMUnpaidPatientFoodList *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMUnpaidPatientFoodList *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CFMUnpaidPatientFoodList *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMUnpaidPatientFoodList *pVw = (CFMUnpaidPatientFoodList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMUnpaidPatientFoodList *pVw = (CFMUnpaidPatientFoodList *)pWnd;
	pVw->OnExportSelect();
} 
CFMUnpaidPatientFoodList::CFMUnpaidPatientFoodList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMUnpaidPatientFoodList::~CFMUnpaidPatientFoodList(){
}
void CFMUnpaidPatientFoodList::OnCreateComponents(){
	m_wndUnpaidPatientFoodList.Create(this, _T("Unpaid Patient Food List"), 5, 5, 490, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55);
	m_wndFromDate.EnableWindow(FALSE);
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 90, 85);
	m_wndDept.Create(this,95, 60, 485, 85); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 300, 95, 410, 120);
	m_wndExport.Create(this, _T("&Export"), 415, 95, 490, 120);
	m_wndOutPatient.Create(this, _T("OutPatient"), 5, 95, 90, 120);
	m_wndInPatient.Create(this, _T("InPatient"), 95, 95, 175, 120);
	m_wndAll.Create(this, _T("All"), 180, 95, 260, 120);


}
void CFMUnpaidPatientFoodList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(1024);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CFMUnpaidPatientFoodList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szToDate = pMF->GetSysDate();
	m_szFromDate = _T("2015/05/30 00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CFMUnpaidPatientFoodList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CFMUnpaidPatientFoodList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_nOutPatient = 0;

}
int CFMUnpaidPatientFoodList::SetMode(int nMode){
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
/*void CFMUnpaidPatientFoodList::OnFromDateChange(){
	
} */
/*void CFMUnpaidPatientFoodList::OnFromDateSetfocus(){
	
} */
/*void CFMUnpaidPatientFoodList::OnFromDateKillfocus(){
	
} */
int CFMUnpaidPatientFoodList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMUnpaidPatientFoodList::OnToDateChange(){
	
} */
/*void CFMUnpaidPatientFoodList::OnToDateSetfocus(){
	
} */
/*void CFMUnpaidPatientFoodList::OnToDateKillfocus(){
	
} */
int CFMUnpaidPatientFoodList::OnToDateCheckValue(){
	return 0;
} 
void CFMUnpaidPatientFoodList::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMUnpaidPatientFoodList::OnDeptSelendok(){
	 
}
/*void CFMUnpaidPatientFoodList::OnDeptSetfocus(){
	
}*/
/*void CFMUnpaidPatientFoodList::OnDeptKillfocus(){
	
}*/
long CFMUnpaidPatientFoodList::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id = '%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type IN ('DT', 'KB') %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMUnpaidPatientFoodList::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMUnpaidPatientFoodList::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1;
	long double nTotal[2], nGroupTotal1[2];
	for (int i = 0; i < 2; i++)
	{
		nGroupTotal1[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\HF_DANHSACHANBENHNHAN-CHUATHANHTOAN.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);		
		tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("khoa"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1[1] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng Nh\xF3m:"));
				tmpStr.Format(_T("%f"), nGroupTotal1[0]);
				rptGroup->SetValue(_T("s9"), tmpStr);
				tmpStr.Format(_T("%f"), nGroupTotal1[1]);
				rptGroup->SetValue(_T("s10"), tmpStr);
				for (int i = 0; i < 2; i++)
				{
					nTotal[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewLev1);
			szOldLev1 = szNewLev1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("ho_ten")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("so_hs")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("so_ba")));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("khoa")));
			rs.GetValue(_T("ngay_vao"), tmpStr);
			rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("ngay_baoan"), tmpStr);
			rptDetail->SetValue(_T("7"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("ngay_ra"), tmpStr);
			rptDetail->SetValue(_T("8"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("so_bua"), nTmp);
			nGroupTotal1[0]+= nTmp;
			rptDetail->SetValue(_T("9"), double2str(nTmp));
			rs.GetValue(_T("tong_tien"), nTmp);
			nGroupTotal1[1]+= nTmp;
			rptDetail->SetValue(_T("10"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	if (nGroupTotal1[1] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng Nh\xF3m:"));
		tmpStr.Format(_T("%f"), nGroupTotal1[0]);
		rptGroup->SetValue(_T("s9"), tmpStr);
		tmpStr.Format(_T("%f"), nGroupTotal1[1]);
		rptGroup->SetValue(_T("s10"), tmpStr);
		for (int i = 0; i < 2; i++)
		{
			nTotal[i]+= nGroupTotal1[i];
		}
	}
	if (nTotal[1] > 0)
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng \x43\x1ED9ng:"));
			tmpStr.Format(_T("%f"), nTotal[0]);
			rptGroup->SetValue(_T("s9"), tmpStr);
			tmpStr.Format(_T("%f"), nTotal[1]);
			rptGroup->SetValue(_T("s10"), tmpStr);
		}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void CFMUnpaidPatientFoodList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 

CString CFMUnpaidPatientFoodList::GetQueryString(){
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND hd_object = 7 AND hd_docno>=16000000") \
		_T(" AND hfo_approvedate BETWEEN TO_TIMESTAMP('2015/05/30 00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND (NVL(HFO_PAYMENT, 'N') <> 'P'") \
		_T(" OR (HFE_DATE > TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND NVL(HFO_PAYMENT, 'N') = 'P'))"), m_szToDate, m_szToDate);
	if (m_nOutPatient == 0)
		szWhere.AppendFormat(_T(" AND hfo_depttype = 'KB'"));
	else if (m_nOutPatient == 1)
		szWhere.AppendFormat(_T(" AND hfo_depttype = 'DT'"));
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfo_deptid = '%s'"), m_szDeptKey);
	szSQL.Format(_T(" SELECT") \
		_T(" so_hs,") \
		_T(" ho_ten,") \
		_T(" so_ba,") \
		_T(" khoa,") \
		_T(" ngay_vao,") \
		_T(" ngay_ra,") \
		_T(" ngay_baoan,") \
		_T(" SUM(so_bua - so_buaC) AS so_bua,") \
		_T(" SUM((so_bua - so_buaC)*tong_tien) AS tong_tien") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT hfo_docno AS so_hs,") \
		_T("   Get_patientname(hfo_docno) AS ho_ten,") \
		_T("   htr_recordno AS so_ba,") \
		_T("   hfo_deptid AS khoa,") \
		_T("   htr_admitdate AS ngay_vao,") \
		_T("   htr_dischargedate AS ngay_ra,") \
		_T("   hfo_approvedate AS ngay_baoan,") \
		_T("   CASE WHEN hfe_refstatus = 'C' THEN hfol_qtyissue ELSE 0 END AS so_buaC,") \
		_T("   hfol_qtyissue AS so_bua,") \
		_T("   hfol_unitprice AS tong_tien") \
		_T(" FROM hms_feefood") \
		_T(" LEFT JOIN hms_feefoodline") \
		_T(" ON (hfo_orderid = hfol_orderid )") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hd_docno = hfo_docno)") \
		_T(" LEFT JOIN hms_fee_invoice_view_v2 ON (hd_docno=hfe_docno AND hfo_invoiceno=hfe_invoiceno)") \
		_T(" LEFT JOIN hms_clinical_record  ON (hd_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_treatment_record") \
		_T(" ON ( hfo_docno = htr_docno") \
		_T(" AND hfo_refidx = htr_idx )") \
		_T(" WHERE hcr_status <> 'A' AND hfo_orderstatus = 'A' AND hfe_refstatus <> 'C' AND hfol_status <> 'C' %s") \
		_T(" ) tbl") \
		_T(" WHERE so_bua - so_buaC > 0") \
		_T(" GROUP BY so_hs,") \
		_T(" ho_ten,") \
		_T(" so_ba,") \
		_T(" khoa,") \
		_T(" ngay_vao,") \
		_T(" ngay_ra,") \
		_T(" ngay_baoan") \
		_T(" ORDER BY khoa,") \
		_T(" so_hs"), szWhere);
	_msg(_T("%s"),szSQL);
	return szSQL;
}