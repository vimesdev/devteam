#include "stdafx.h"
#include "FMPolicyDischargeList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyDischargeList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMPolicyDischargeList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyDischargeList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyDischargeList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMPolicyDischargeList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMPolicyDischargeList *)pWnd)->OnToDateCheckValue();
} 
static void _OnUnPaidSelectFnc(CWnd *pWnd){
	 ((CFMPolicyDischargeList*)pWnd)->OnUnPaidSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CFMPolicyDischargeList*)pWnd)->OnInpatientSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CFMPolicyDischargeList*)pWnd)->OnOutpatientSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMPolicyDischargeList *pVw = (CFMPolicyDischargeList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMPolicyDischargeList *pVw = (CFMPolicyDischargeList *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyDischargeList*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CFMPolicyDischargeList*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyDischargeList*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyDischargeList*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CFMPolicyDischargeList*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CFMPolicyDischargeList*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMPolicyDischargeList*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMPolicyDischargeList*)pWnd)->OnDeptListDeleteItem();
} 
CFMPolicyDischargeList::CFMPolicyDischargeList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMPolicyDischargeList::~CFMPolicyDischargeList(){
}
void CFMPolicyDischargeList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 520);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndUnPaid.Create(this, _T("UnPaid"), 5, 525, 85, 550);
	m_wndInpatient.Create(this, _T("Inpatient"), 90, 525, 195, 550);
	m_wndOutpatient.Create(this, _T("Outpatient"), 200, 525, 305, 550);
	m_wndPrint.Create(this, _T("&Print"), 265, 555, 345, 580);
	m_wndExport.Create(this, _T("&Export"), 350, 555, 430, 580);
	m_wndObjectList.Create(this,10, 90, 425, 310); 
	m_wndDeptList.Create(this,10, 315, 425, 515); 

}
void CFMPolicyDischargeList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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

	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObjectList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
	m_wndObjectList.SetCheckBox(TRUE);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);
}

void CFMPolicyDischargeList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	m_wndUnPaid.SetEvent(WE_CLICK, _OnUnPaidSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);
	m_wndObjectList.AddEvent(1, _T("Delete"), _OnObjectListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnObjectListLoadData();
	OnDeptListLoadData();

}
void CFMPolicyDischargeList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndUnPaid.GetDlgCtrlID(), m_bUnPaid);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);

}
void CFMPolicyDischargeList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bInpatient = FALSE;
	m_bOutpatient = FALSE;
	m_bUnPaid = FALSE;
}

int CFMPolicyDischargeList::SetMode(int nMode){
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

/*void CFMPolicyDischargeList::OnYearChange(){
	
} */
/*void CFMPolicyDischargeList::OnYearSetfocus(){
	
} */
/*void CFMPolicyDischargeList::OnYearKillfocus(){
	
} */
int CFMPolicyDischargeList::OnYearCheckValue(){
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
			szTemp.Format(_T("%.2d/.2d/.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndFromDate.SetWindowText(szTemp);
		}
		dt.ParseDateTime(m_szToDate);
		date = dt.GetDate();
		if (date.GetYear() != 1752)
		{
			dt.SetDate(m_nYear, date.GetMonth(), date.GetDay());
			m_szToDate = dt.GetDateTime();
			szTemp.Format(_T("%.2d/.2d/.4d %.2d:%.2d"), dt.GetDate().GetDay(), dt.GetDate().GetMonth(), 
						  dt.GetDate().GetYear(), dt.GetTime().GetHour(), dt.GetTime().GetMinute());
			m_wndToDate.SetWindowText(szTemp);
		}
	}

	UpdateData(FALSE);
	return 0;
}
 
void CFMPolicyDischargeList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CFMPolicyDischargeList::OnReportPeriodSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr;
	CDate dte, date;

	UpdateData(true);

	date.ParseDate(pMF->GetSysDate());
	int nYear = date.GetYear();
	int nMonth = ToInt(m_szReportPeriodKey);

	if (nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/1 00:00"), nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), nYear, nMonth, dte.GetMonthLastDay());
	}
	if (nMonth == 13)
	{
		m_szFromDate.Format(_T("%.4d/1/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/3/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 14)
	{
		m_szFromDate.Format(_T("%.4d/4/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/6/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 15)
	{
		m_szFromDate.Format(_T("%.4d/7/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/9/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 16)
	{
		m_szFromDate.Format(_T("%.4d/0/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/0/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/2/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}
	if (nMonth == 17)
	{
		m_szFromDate.Format(_T("%.4d/1/1 00:00"), nYear);
		tmpStr.Format(_T("%.4d/2/1"), nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/2/%.2d 23:59"), nYear, dte.GetMonthLastDay());
	}

	UpdateData(false); 
}

/*void CFMPolicyDischargeList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMPolicyDischargeList::OnReportPeriodKillfocus(){
	
}*/
long CFMPolicyDischargeList::OnReportPeriodLoadData(){
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

/*void CFMPolicyDischargeList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMPolicyDischargeList::OnFromDateChange(){
	
} */
/*void CFMPolicyDischargeList::OnFromDateSetfocus(){
	
} */
/*void CFMPolicyDischargeList::OnFromDateKillfocus(){
	
} */
int CFMPolicyDischargeList::OnFromDateCheckValue(){
	return 0;
}
 
/*void CFMPolicyDischargeList::OnToDateChange(){
	
} */
/*void CFMPolicyDischargeList::OnToDateSetfocus(){
	
} */
/*void CFMPolicyDischargeList::OnToDateKillfocus(){
	
} */
int CFMPolicyDischargeList::OnToDateCheckValue(){
	return 0;
}
 
void CFMPolicyDischargeList::OnUnPaidSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMPolicyDischargeList::OnInpatientSelect(){
	
}
void CFMPolicyDischargeList::OnOutpatientSelect(){
	
}
void CFMPolicyDischargeList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szOldLev1, szNewLev1, szOldLev2, szNewLev2, szTemp;
	long double nTotal[12], nGroupTotal1[12], nGroupTotal2[12];
	for (int i = 0; i < 12; i++)
	{
		nGroupTotal1[i] = 0;
		nGroupTotal2[i] = 0;
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\DSBNBODOICHINHSACHRAVIEN.RPT");
	if (m_bUnPaid)
		szReportName = _T("Reports\\HMS\\DSBNBODOICHINHSACHRAVIENCHUATHANHTOAN.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	TCHAR * dat[] = {_T("deposit"), _T("phi_giuong"), _T("phi_xn"), _T("phi_cdha"), _T("phi_pttt"), _T("phi_thuoc"),
					 _T("phi_vattu"), _T("phi_mau"), _T("tong_cp"), _T("phi_an"),_T("chi_phikhac"), _T("tong_chiphi")};
	int nStart = 7, nSumPos = 12 - 1;
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
		rs.GetValue(_T("object_class"), szNewLev1);
		rs.GetValue(_T("discharged_dept"), szNewLev2);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
				for (int i = 0; i <= nSumPos; i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i + nStart);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal2[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
				}
			}
			if (nGroupTotal2[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng: "));
				for (int i = 0; i <= nSumPos; i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal2[i]);
					szPos.Format(_T("s%d"), i + nStart);
					rptGroup->SetValue(szPos, tmpStr);
					nTotal[i]+= nGroupTotal2[i];
					nGroupTotal2[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				rptGroup->GetItem(_T("GroupName"))->SetTextAlign(ES_CENTER);
				rptGroup->SetValue(_T("GroupName"), 
				szNewLev1==_T("0")?_T("\x42\x1EC6NH NH\xC2N \x42\x1ED8 \x110\x1ED8I"):_T("\x42\x1EC6NH NH\xC2N \x43H\xCDNH S\xC1\x43H- \x42\x1EA0N"));
			}
			szOldLev1 = szNewLev1;
		}
		if (szOldLev2 != szNewLev2)
		{
			if (nGroupTotal1[nSumPos] > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
				for (int i = 0; i <= nSumPos; i++)
				{
					tmpStr.Format(_T("%f"), nGroupTotal1[i]);
					szPos.Format(_T("s%d"), i + nStart);
					rptGroup->SetValue(szPos, tmpStr);
					nGroupTotal2[i]+= nGroupTotal1[i];
					nGroupTotal1[i] = 0;
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
			//[So ho so] Ten BN|Don vi|[Ngay]->[Ngay]
			//tmpStr.Format(rptDetail->GetValue(_T("")))
			/*tmpStr.Format(_T("[%s] %s|%s| [%s]->[%s]"), rs.GetValue(_T("doc_no")), rs.GetValue(_T("patient_name")),
				rs.GetValue(_T("work_place")), CDate::Convert(rs.GetValue(_T("admit_date")), yyyymmdd, ddmmyyyy), 
				CDate::Convert(rs.GetValue(_T("discharged_date")), yyyymmdd, ddmmyyyy));*/
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("patient_name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("work_place")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("doc_no")));
			rptDetail->SetValue(_T("5"), CDate::Convert(rs.GetValue(_T("admit_date")), yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("6"), CDate::Convert(rs.GetValue(_T("discharged_date")), yyyymmdd, ddmmyyyy));
			for (int i = 0; i <= nSumPos; i++)
			{
				rs.GetValue(dat[i], nTmp);
				tmpStr.Format(_T("%f"), nTmp);
				nGroupTotal1[i] += nTmp;
				szPos.Format(_T("%d"), i+nStart);
				rptDetail->SetValue(szPos, tmpStr);
			}
		}
		rs.MoveNext();
	}
	if (nGroupTotal1[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng kho\x61: "));
		for (int i = 0; i <= nSumPos; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal1[i]);
			szPos.Format(_T("s%d"), i+nStart);
			rptGroup->SetValue(szPos, tmpStr);
			nGroupTotal2[i]+= nGroupTotal1[i];
		}	
	}
	if (nGroupTotal2[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptGroup->SetValue(_T("TotalGroup"), _T("T\x1ED5ng nh\xF3m \x111\x1ED1i t\x1B0\x1EE3ng: "));
		for (int i = 0; i <= nSumPos; i++)
		{
			tmpStr.Format(_T("%f"), nGroupTotal2[i]);
			szPos.Format(_T("s%d"), i + nStart);
			rptGroup->SetValue(szPos, tmpStr);
			nTotal[i]+= nGroupTotal2[i];
		}
	}
	if (nTotal[nSumPos] > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i <= nSumPos; i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			szPos.Format(_T("s%d"), i + nStart);
			rptGroup->SetValue(szPos, tmpStr);
		}
		szTemp.Format(_T("%2.f"), nTotal[nSumPos]);
		MoneyToString(szTemp, tmpStr);
		tmpStr += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("AmountInWord"), tmpStr);
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
}
 
void CFMPolicyDischargeList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotal[12];
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	int i = 0;
	for ( i = 0; i < 12; i++)
		nTotal[i] = 0;
	TCHAR * dat[] = {_T("deposit"), _T("phi_giuong"), _T("phi_xn"), _T("phi_cdha"), _T("phi_pttt"), _T("phi_thuoc"),
					 _T("phi_vattu"), _T("phi_mau"), _T("tong_cp"), _T("phi_an"),_T("chi_phikhac"), _T("tong_chiphi")};
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 16);
	xls.SetCellMergedColumns(0, 3, 16);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("DANH SÁCH");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header

	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("work_place")), FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("admit_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("discharged_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		for (int i = 0; i < 12; i++){
			rs.GetValue(dat[i], nTmp);
			nTotal[i] += nTmp;
			tmpStr.Format(_T("%f"), nTmp);
			xls.SetCellText(i+5, nRow, tmpStr, FMT_NUMBER1);
		}
		nRow++;
		rs.MoveNext();
	}
	if (nTotal[11] > 0)
	{
		tmpStr.Format(_T("%f"), nTotal[i]);
		xls.SetCellText(i+5, nRow, tmpStr, FMT_NUMBER1);
	}
	xls.Save(_T("Exports\\Danh_sach_bd_cs_ban_ravien.xls"));
}
 
void CFMPolicyDischargeList::OnObjectListDblClick(){
	
}
 
void CFMPolicyDischargeList::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMPolicyDischargeList::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMPolicyDischargeList::OnObjectListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndObjectList.BeginLoad(); 
	int nCount = 0;

	//szWhere.Format(_T(" AND ho_type IN('S') "));

	szSQL.Format(_T("SELECT ho_id AS ID, ") \
		         _T("ho_desc AS Name, ") \
				 _T("ho_type AS Type ") \
		         _T("FROM hms_object ") \
				 _T("WHERE 1=1 %s ") \
				 _T("ORDER BY cast(ho_id as integer)"),
				 szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndObjectList.EndLoad(); 
	return nCount;
}

void CFMPolicyDischargeList::OnDeptListDblClick(){
	
}
 
void CFMPolicyDischargeList::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
int CFMPolicyDischargeList::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CFMPolicyDischargeList::OnDeptListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDeptList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type='DT' ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad();
	return nCount;
}


CString CFMPolicyDischargeList::GetQueryString(){
	CString szSQL, szWhere, szObjects, szDepts, szSubFee;
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	szWhere = _T(" AND i.hfe_status NOT IN ('O', 'C')");
	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hd_object IN (%s) "), szObjects);
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND i.hfe_deptid IN (%s) "), szDepts);
	}
	if (m_bUnPaid)
		szWhere.AppendFormat(_T(" AND i.hfe_status = 'A'"));
	if (m_bInpatient && m_bOutpatient)
		szWhere.AppendFormat(_T(" AND NVL(hd_outpatient, 'N') IN ('Y', 'N')"));
	else
	{
		if (m_bInpatient)
			szWhere.AppendFormat(_T(" AND NVL(hd_outpatient, 'N') = 'N'"));
		if (m_bOutpatient)
			szWhere.AppendFormat(_T(" AND NVL(hd_outpatient, 'N') = 'Y'"));
	}
	szSubFee.Format(_T("SELECT hfe_docno, ") \
				_T("		hfe_invoiceno, ") \
				_T("		hfe_treattime,") \
				_T("		hfe_cost,") \
				_T("		hfe_deptid dept_id,") \
				_T("		hfe_inspaid,") \
				_T("		0 phi_giuong, ") \
				_T("		0 phi_xn, ") \
				_T("		0 phi_cdha, ") \
				_T("		0 phi_pttt, ") \
				_T("		(CASE WHEN mp_org_id = 'PM' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_thuoc, ") \
				_T("		(CASE WHEN mp_org_id = 'MA' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_vattu, ") \
				_T("		(CASE WHEN mp_org_id = 'BB' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_mau, ") \
				_T("		0 phi_an, ") \
				_T("		0 chi_phikhac") \
				_T(" FROM   hms_fee ") \
				_T(" LEFT JOIN m_product_item ON (cast(hfe_itemid as integer)= mpi_product_item_id)") \
				_T(" LEFT JOIN m_product ON (mpi_product_id = mp_product_id)") \
				_T(" WHERE  hfe_status NOT IN ('C' ) AND hfe_category <> 'Y' AND hfe_type IN ('D', 'M') AND hfe_object IN (1, 3, 8)") \
				_T(" UNION ALL") \
				_T(" SELECT hfe_docno, ") \
				_T("		hfe_invoiceno, ") \
				_T("		hfe_treattime,") \
				_T("		hfe_cost,") \
				_T("		hfe_deptid dept_id,") \
				_T("		hfe_inspaid,") \
				_T("		(CASE WHEN hfe_type = 'B' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_giuong, ") \
				_T("		(CASE WHEN (substr(hfe_group, 1, 2) = 'B1') THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_xn, ") \
				_T("		(CASE WHEN substr(hfe_group, 1, 2) IN ('B2', 'B3') THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_cdha, ") \
				_T("		(CASE WHEN hfe_type = 'O' THEN hfe_cost - hfe_diffcost ELSE 0 END) phi_pttt, ") \
				_T("		0 phi_thuoc, ") \
				_T("		0 phi_vattu, ") \
				_T("		0 phi_mau, ") \
				_T("		(CASE WHEN hfe_type = 'F' THEN hfe_cost ELSE 0 END) phi_an, ") \
				_T("		(CASE WHEN hfe_type = 'X' THEN hfe_cost ELSE hfe_diffcost END) chi_phikhac") \
				_T(" FROM   hms_fee ") \
				_T(" WHERE  hfe_status NOT IN ('C' ) AND hfe_category <> 'Y' AND hfe_type NOT IN ('D', 'M') AND hfe_object IN (1, 3, 8)"));
	//Test
	szSQL.AppendFormat(_T("SELECT * FROM (") \
	_T("					SELECT	object_class,") \
	_T("					  discharged_dept,") \
	_T("					  work_place,") \
	_T("					  patient_name,") \
	_T("					  doc_no,") \
	_T("                      (SELECT SUM(coalesce(hfe_amount, 0)) from hms_fee_deposit where hfe_status = 'P' AND hfe_invoiceno = invoice_no) deposit, ") \
	_T("					  admit_date,") \
	_T("					  discharged_date,") \
	_T("					  SUM(phi_giuong) phi_giuong, ") \
	_T("					  SUM(phi_xn) phi_xn, ") \
	_T("					  SUM(phi_cdha) phi_cdha, ") \
	_T("					  SUM(phi_pttt) phi_pttt, ") \
	_T("					  SUM(phi_thuoc) phi_thuoc, ") \
	_T("					  SUM(phi_vattu) phi_vattu, ") \
	_T("					  SUM(phi_mau) phi_mau, ") \
	_T("					  SUM(tong_cp) tong_cp,") \
	_T("					  SUM(phi_an) phi_an,") \
	_T("					  SUM(chi_phikhac) chi_phikhac,") \
	_T("					  SUM(tong_chiphi) tong_chiphi") \
	_T("				FROM (SELECT CASE WHEN hd_object = 1 THEN 0 ELSE 1 END object_class,") \
	_T("							i.hfe_invoiceno invoice_no,") \
	_T("							(select hp_workplace from hms_patient where hp_patientno = hd_patientno) work_place,") \
	_T("							get_patientname(hd_docno) patient_name,") \
	_T("							hd_docno doc_no, ") \
	_T("							hcr_dischargedept discharged_dept,") \
	_T("							hcr_admitdate admit_date, ") \
	_T("							hcr_dischargedate discharged_date,") \
	_T("							phi_giuong, ") \
	_T("							phi_xn, ") \
	_T("							phi_cdha, ") \
	_T("							phi_pttt, ") \
	_T("							phi_thuoc, ") \
	_T("							phi_vattu, ") \
	_T("							phi_mau, ") \
	_T("							f.hfe_inspaid tong_cp,") \
	_T("							phi_an phi_an,") \
	_T("							chi_phikhac chi_phikhac,") \
	_T("							f.hfe_cost tong_chiphi") \
	_T("           FROM      hms_clinical_record ") \
	_T("		   LEFT JOIN hms_fee_invoice i ON (hfe_docno = hcr_docno)") \
	_T("           LEFT JOIN hms_doc ON ( hcr_docno = hd_docno ) ") \
	_T("           INNER JOIN (%s) f ON ( hcr_docno = f.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno) ") \
	_T("		   WHERE hcr_status = 'T' %s AND NVL(hd_outpatient, 'N') = 'N' AND hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
	_T("			) tbl_inpatient") \
	_T("		   GROUP BY object_class, invoice_no, doc_no, admit_date, discharged_dept, discharged_date, patient_name, work_place") \
	_T("		   UNION ALL") \
	_T("					SELECT	object_class,") \
	_T("					  discharged_dept,") \
	_T("					  work_place,") \
	_T("					  patient_name,") \
	_T("					  doc_no,") \
	_T("                      (SELECT SUM(coalesce(hfe_amount, 0)) from hms_fee_deposit where hfe_status = 'P' AND hfe_invoiceno = invoice_no) deposit, ") \
	_T("					  admit_date,") \
	_T("					  discharged_date,") \
	_T("					  SUM(phi_giuong) phi_giuong, ") \
	_T("					  SUM(phi_xn) phi_xn, ") \
	_T("					  SUM(phi_cdha) phi_cdha, ") \
	_T("					  SUM(phi_pttt) phi_pttt, ") \
	_T("					  SUM(phi_thuoc) phi_thuoc, ") \
	_T("					  SUM(phi_vattu) phi_vattu, ") \
	_T("					  SUM(phi_mau) phi_mau, ") \
	_T("					  SUM(tong_cp) tong_cp,") \
	_T("					  SUM(phi_an) phi_an,") \
	_T("					  SUM(chi_phikhac) chi_phikhac,") \
	_T("					  SUM(tong_chiphi) tong_chiphi") \
	_T("				FROM (SELECT CASE WHEN hd_object = 1 THEN 0 ELSE 1 END object_class,") \
	_T("							i.hfe_invoiceno invoice_no,") \
	_T("							(select hp_workplace from hms_patient where hp_patientno = hd_patientno) work_place,") \
	_T("							get_patientname(hd_docno) patient_name,") \
	_T("							hd_docno doc_no, ") \
	_T("							htr_tdeptid discharged_dept,") \
	_T("							htr_admitdate admit_date, ") \
	_T("							htr_dischargedate discharged_date,") \
	_T("							hfe_deposit deposit,") \
	_T("							phi_giuong, ") \
	_T("							phi_xn, ") \
	_T("							phi_cdha, ") \
	_T("							phi_pttt, ") \
	_T("							phi_thuoc, ") \
	_T("							phi_vattu, ") \
	_T("							phi_mau, ") \
	_T("							f.hfe_inspaid tong_cp,") \
	_T("							phi_an phi_an,") \
	_T("							chi_phikhac chi_phikhac,") \
	_T("							f.hfe_cost tong_chiphi") \
	_T("           FROM      hms_clinical_record ") \
	_T("		   LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno)") \
	_T("		   LEFT JOIN hms_fee_invoice i ON (hfe_docno = hcr_docno AND hfe_treattime = htr_treattime)") \
	_T("           LEFT JOIN hms_doc ON ( hcr_docno = hd_docno ) ") \
	_T("           INNER JOIN (%s) f ON ( hcr_docno = f.hfe_docno AND i.hfe_invoiceno = f.hfe_invoiceno) ") \
	_T("		   WHERE htr_status = 'T' %s AND NVL(hd_outpatient, 'N') = 'Y'  AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')) tbl_outpatient") \
	_T("		   GROUP BY object_class, invoice_no, doc_no, admit_date, discharged_dept, discharged_date, patient_name, work_place)") \
	_T("		ORDER BY object_class, discharged_dept")
	, szSubFee, szWhere, m_szFromDate, m_szToDate, szSubFee, szWhere, m_szFromDate, m_szToDate);

_fmsg(_T("%s"), szSQL);

	return szSQL;
}