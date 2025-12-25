#include "stdafx.h"
#include "FMSOMFoodPaidSummary1.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMFoodOrderByReqDept *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMFoodOrderByReqDept *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMFoodOrderByReqDept *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMFoodOrderByReqDept *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMFoodOrderByReqDept *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMFoodOrderByReqDept *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMFoodOrderByReqDept *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMFoodOrderByReqDept *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMFoodOrderByReqDept* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CFMFoodOrderByReqDept *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CFMFoodOrderByReqDept *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CFMFoodOrderByReqDept *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CFMFoodOrderByReqDept *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CFMFoodOrderByReqDept *)pWnd)->OnDeptAddNew();
}*/
static void _OnByDeptSelectFnc(CWnd *pWnd){
	 ((CFMFoodOrderByReqDept*)pWnd)->OnByDeptSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMFoodOrderByReqDept *pVw = (CFMFoodOrderByReqDept *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMFoodOrderByReqDept *pVw = (CFMFoodOrderByReqDept *)pWnd;
	pVw->OnExportSelect();
} 
CFMFoodOrderByReqDept::CFMFoodOrderByReqDept(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMFoodOrderByReqDept::~CFMFoodOrderByReqDept(){
}
void CFMFoodOrderByReqDept::OnCreateComponents(){
	m_wndFoodOrderByDay.Create(this, _T("Food Order By Day"), 5, 5, 490, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 90, 85);
	m_wndDept.Create(this,95, 60, 485, 85); 
	m_wndByDept.Create(this, _T("By Dept"), 5, 95, 90, 120);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 300, 125, 410, 150);
	m_wndExport.Create(this, _T("&Export"), 415, 125, 490, 150);
	m_wndOutPatient.Create(this, _T("OutPatient"), 95, 95, 175, 120);
	m_wndInPatient.Create(this, _T("InPatient"), 180, 95, 260, 120);
	m_wndAll.Create(this, _T("All"), 265, 95, 345, 120);

}
void CFMFoodOrderByReqDept::OnInitializeComponents(){
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
void CFMFoodOrderByReqDept::OnSetWindowEvents(){
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
	m_wndByDept.SetEvent(WE_CLICK, _OnByDeptSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CFMFoodOrderByReqDept::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndByDept.GetDlgCtrlID(), m_bByDept);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CFMFoodOrderByReqDept::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_bByDept=FALSE;
	m_nOutPatient = 0;

}
int CFMFoodOrderByReqDept::SetMode(int nMode){
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
/*void CFMFoodOrderByReqDept::OnFromDateChange(){
	
} */
/*void CFMFoodOrderByReqDept::OnFromDateSetfocus(){
	
} */
/*void CFMFoodOrderByReqDept::OnFromDateKillfocus(){
	
} */
int CFMFoodOrderByReqDept::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMFoodOrderByReqDept::OnToDateChange(){
	
} */
/*void CFMFoodOrderByReqDept::OnToDateSetfocus(){
	
} */
/*void CFMFoodOrderByReqDept::OnToDateKillfocus(){
	
} */
int CFMFoodOrderByReqDept::OnToDateCheckValue(){
	return 0;
} 
void CFMFoodOrderByReqDept::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMFoodOrderByReqDept::OnDeptSelendok(){
	 
}
/*void CFMFoodOrderByReqDept::OnDeptSetfocus(){
	
}*/
/*void CFMFoodOrderByReqDept::OnDeptKillfocus(){
	
}*/
long CFMFoodOrderByReqDept::OnDeptLoadData(){
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
/*void CFMFoodOrderByReqDept::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMFoodOrderByReqDept::OnByDeptSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMFoodOrderByReqDept::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_bByDept)
		OnPrintDetail();
	else
		OnPrintSynthesis();
}

void CFMFoodOrderByReqDept::OnPrintDetail()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1, szOldLev2, szNewLev2;
	long double nTotal[7], nGroupTotal1[7], nGroupTotal2[7];
	for (int i = 0; i < 7; i++)
	{
		nGroupTotal1[i] = 0;
		nGroupTotal2[i] = 0;
		nTotal[i] = 0;
	}
	if (m_bByDept)
		szReportName = _T("Reports\\HMS\\HF_DANHSACHBENHNHANANTHEONGAY-THEOKHOA-CHITIET-PTTYC.RPT");
	else
		szReportName = _T("Reports\\HMS\\HF_TONGHOPXUATAN-TIENAN-THEONGAY-PTTYC.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_msg(_T("%s"), szSQL);	
	if (rs.IsEOF()){
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
		//Group Seperation
		rs.GetValue(_T("ngay_baoan"), szNewLev1);
		rs.GetValue(_T("khoa"), szNewLev2);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal2[6] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s)"), rptGroup->GetValue(_T("TotalGroup")), szOldLev2);
				rptGroup->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 0; i < 7; i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal2[i]);
					szPos.Format(_T("s%d"), i+3);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal1[i]+= nGroupTotal2[i];
					nGroupTotal2[i] = 0;
				}
			}
			if (nGroupTotal1[6] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s)"), rptGroup->GetValue(_T("TotalGroup")), CDate::Convert(szOldLev1, yyyymmdd, ddmmyyyy));
				rptGroup->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 0; i < 7; i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i+3);
					rptGroup->SetValue(szPos, tmpStr);
					nTotal[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), CDate::Convert(szNewLev1, yyyymmdd, ddmmyyyy));
			szOldLev1 = szNewLev1;
			szOldLev2.Empty();
		}
		if (szOldLev2 != szNewLev2)
		{
			if (nGroupTotal2[6] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				for (int i = 0; i < 7; i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal2[i]);
					szPos.Format(_T("s%d"), i+3);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal1[i]+= nGroupTotal2[i];
					nGroupTotal2[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewLev2);
			szOldLev2 = szNewLev2;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("col_1")));
			rs.GetValue(_T("xuat_sang"), nTmp);
			nGroupTotal2[0]+= nTmp;
			rptDetail->SetValue(_T("3"), double2str(nTmp));
			rs.GetValue(_T("xuat_trua"), nTmp);
			nGroupTotal2[1]+= nTmp;
			rptDetail->SetValue(_T("4"), double2str(nTmp));
			rs.GetValue(_T("xuat_toi"), nTmp);
			nGroupTotal2[2]+= nTmp;
			rptDetail->SetValue(_T("5"), double2str(nTmp));
			rs.GetValue(_T("tien_sang"), nTmp);
			nGroupTotal2[3]+= nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rs.GetValue(_T("tien_trua"), nTmp);
			nGroupTotal2[4]+= nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			rs.GetValue(_T("tien_toi"), nTmp);
			nGroupTotal2[5]+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
			rs.GetValue(_T("tong_tien"), nTmp);
			nGroupTotal2[6]+= nTmp;
			rptDetail->SetValue(_T("9"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	if (nGroupTotal2[6] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"), rptGroup->GetValue(_T("TotalGroup")), szOldLev2);
		rptGroup->SetValue(_T("TotalGroup"), tmpStr);
		for (int i = 0; i < 7; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal2[i]);
			szPos.Format(_T("s%d"), i+3);
			rptGroup->SetValue(szPos, tmpStr);
			nGroupTotal1[i]+= nGroupTotal2[i];
		}
	}
	if (nGroupTotal1[6] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"), rptGroup->GetValue(_T("TotalGroup")), CDate::Convert(szOldLev1, yyyymmdd, ddmmyyyy));
		rptGroup->SetValue(_T("TotalGroup"), tmpStr);
		for (int i = 0; i < 7; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i+3);
			rptGroup->SetValue(szPos, tmpStr);
			nTotal[i]+= nGroupTotal1[i];
		}
	}
	if (nTotal[6] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < 7; i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("s%d"), i+3);
			rptGroup->SetValue(szPos, tmpStr);
		}
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 

void CFMFoodOrderByReqDept::OnPrintSynthesis(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1, szOldLev2, szNewLev2;
	long double nTotal[7], nGroupTotal1[7], nGroupTotal2[7];
	for (int i = 0; i < 7; i++)
	{
		nGroupTotal1[i] = 0;
		nGroupTotal2[i] = 0;
		nTotal[i] = 0;
	}
	if (m_bByDept)
		szReportName = _T("Reports\\HMS\\HF_DANHSACHBENHNHANANTHEONGAY-THEOKHOA-CHITIET-PTTYC.RPT");
	else
		szReportName = _T("Reports\\HMS\\HF_TONGHOPXUATAN-TIENAN-THEONGAY-PTTYC.RPT");
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
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		//Group Seperation
		rs.GetValue(_T("ngay_baoan"), szNewLev2);
		if (szOldLev2 != szNewLev2)
		{
			if (nGroupTotal2[6] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s)"), rptGroup->GetValue(_T("TotalGroup")), CDate::Convert(szOldLev2, yyyymmdd, ddmmyyyy));
				rptGroup->SetValue(_T("TotalGroup"), tmpStr);
				for (int i = 0; i < 7; i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal2[i]);
					szPos.Format(_T("s%d"), i+3);
					rptGroup->SetValue(szPos, tmpStr);
					nTotal[i]+= nGroupTotal2[i];
					nGroupTotal2[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), CDate::Convert(szNewLev2, yyyymmdd, ddmmyyyy));
			szOldLev2 = szNewLev2;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("col_1")));
			rs.GetValue(_T("xuat_sang"), nTmp);
			nGroupTotal2[0]+= nTmp;
			rptDetail->SetValue(_T("3"), double2str(nTmp));
			rs.GetValue(_T("xuat_trua"), nTmp);
			nGroupTotal2[1]+= nTmp;
			rptDetail->SetValue(_T("4"), double2str(nTmp));
			rs.GetValue(_T("xuat_toi"), nTmp);
			nGroupTotal2[2]+= nTmp;
			rptDetail->SetValue(_T("5"), double2str(nTmp));
			rs.GetValue(_T("tien_sang"), nTmp);
			nGroupTotal2[3]+= nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rs.GetValue(_T("tien_trua"), nTmp);
			nGroupTotal2[4]+= nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			rs.GetValue(_T("tien_toi"), nTmp);
			nGroupTotal2[5]+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
			rs.GetValue(_T("tong_tien"), nTmp);
			nGroupTotal2[6]+= nTmp;
			rptDetail->SetValue(_T("9"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	if (nGroupTotal2[6] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"), rptGroup->GetValue(_T("TotalGroup")), CDate::Convert(szOldLev2, yyyymmdd, ddmmyyyy));
		rptGroup->SetValue(_T("TotalGroup"), tmpStr);
		for (int i = 0; i < 7; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal2[i]);
			szPos.Format(_T("s%d"), i+3);
			rptGroup->SetValue(szPos, tmpStr);
			nTotal[i]+= nGroupTotal2[i];
		}
	}
	if (nTotal[6] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < 7; i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("s%d"), i+3);
			rptGroup->SetValue(szPos, tmpStr);
		}
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
}

void CFMFoodOrderByReqDept::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
} 

CString CFMFoodOrderByReqDept::GetQueryString()
{
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND hd_object = 7 AND hfo_approvedate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	if (m_nOutPatient == 0)
		szWhere.AppendFormat(_T(" AND hfo_depttype = 'KB'"));
	else if (m_nOutPatient == 1)
		szWhere.AppendFormat(_T(" AND hfo_depttype = 'DT'"));
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfo_deptid = '%s'"), m_szDeptKey);
	if (m_bByDept)
		szSQL.Format(_T(" SELECT trunc(hfo_approvedate) ngay_baoan, ") \
		_T("           hfo_deptid khoa, ") \
		_T("		   '['||hfo_docno||'] '||get_patientname(hfo_docno) col_1,") \
		_T("           SUM(CASE WHEN hfol_type = 'S' THEN hfol_qtyissue ELSE 0 END) xuat_sang, ") \
		_T("           SUM(CASE WHEN hfol_type = 'T' THEN hfol_qtyissue ELSE 0 END) xuat_trua, ") \
		_T("           SUM(CASE WHEN hfol_type = 'C' THEN hfol_qtyissue ELSE 0 END) xuat_toi, ") \
		_T("           SUM(CASE WHEN hfol_type = 'S' THEN hfol_qtyissue * hfol_unitprice ELSE 0 END) tien_sang, ") \
		_T("           SUM(CASE WHEN hfol_type = 'T' THEN hfol_qtyissue * hfol_unitprice ELSE 0 END) tien_trua, ") \
		_T("           SUM(CASE WHEN hfol_type = 'C' THEN hfol_qtyissue * hfol_unitprice ELSE 0 END) tien_toi, ") \
		_T("           SUM(hfol_qtyissue * hfol_unitprice) tong_tien ") \
		_T(" FROM      hms_feefood ") \
		_T(" LEFT JOIN hms_doc ON (hd_docno = hfo_docno)") \
		_T(" LEFT JOIN hms_feefoodline ON ( hfo_docno = hfol_docno AND hfo_orderid = hfol_orderid ) ") \
		_T(" WHERE     hfo_orderstatus = 'A' %s") \
		_T(" GROUP     BY hfo_deptid,Trunc(hfo_approvedate), hfo_docno ") \
		_T(" ORDER     BY Trunc(hfo_approvedate),hfo_deptid, hfo_docno"), szWhere);
	else
		szSQL.Format(_T(" SELECT trunc(hfo_approvedate) ngay_baoan, ") \
		_T("           hfo_deptid col_1, ") \
		_T("           SUM(CASE WHEN hfol_type = 'S' THEN hfol_qtyissue ELSE 0 END) xuat_sang, ") \
		_T("           SUM(CASE WHEN hfol_type = 'T' THEN hfol_qtyissue ELSE 0 END) xuat_trua, ") \
		_T("           SUM(CASE WHEN hfol_type = 'C' THEN hfol_qtyissue ELSE 0 END) xuat_toi, ") \
		_T("           SUM(CASE WHEN hfol_type = 'S' THEN hfol_qtyissue * hfol_unitprice ELSE 0 END) tien_sang, ") \
		_T("           SUM(CASE WHEN hfol_type = 'T' THEN hfol_qtyissue * hfol_unitprice ELSE 0 END) tien_trua, ") \
		_T("           SUM(CASE WHEN hfol_type = 'C' THEN hfol_qtyissue * hfol_unitprice ELSE 0 END) tien_toi, ") \
		_T("           SUM(hfol_qtyissue * hfol_unitprice) tong_tien ") \
		_T(" FROM      hms_feefood ") \
		_T(" LEFT JOIN hms_doc ON (hd_docno = hfo_docno)") \
		_T(" LEFT JOIN hms_feefoodline ON ( hfo_docno = hfol_docno AND hfo_orderid = hfol_orderid ) ") \
		_T(" WHERE     hfo_orderstatus = 'A' %s") \
		_T(" GROUP     BY hfo_deptid,Trunc(hfo_approvedate) ") \
		_T(" ORDER     BY Trunc(hfo_approvedate),hfo_deptid"), szWhere);

	return szSQL;
}