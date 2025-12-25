#include "stdafx.h"
#include "HMSMainFrame.h"
#include "SOMMenuList.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CSOMMenuList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSOMMenuList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CSOMMenuList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMMenuList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSOMMenuList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMMenuList *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CSOMMenuList *pVw = (CSOMMenuList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSOMMenuList *pVw = (CSOMMenuList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddArmyReportsDeptFnc(CWnd *pWnd){
	 return ((CSOMMenuList*)pWnd)->OnAddArmyReportsDept();
} 
static int _OnEditArmyReportsDeptFnc(CWnd *pWnd){
	 return ((CSOMMenuList*)pWnd)->OnEditArmyReportsDept();
} 
static int _OnDeleteArmyReportsDeptFnc(CWnd *pWnd){
	 return ((CSOMMenuList*)pWnd)->OnDeleteArmyReportsDept();
} 
static int _OnSaveArmyReportsDeptFnc(CWnd *pWnd){
	 return ((CSOMMenuList*)pWnd)->OnSaveArmyReportsDept();
} 
static int _OnCancelArmyReportsDeptFnc(CWnd *pWnd){
	 return ((CSOMMenuList*)pWnd)->OnCancelArmyReportsDept();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	((CSOMMenuList*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CSOMMenuList*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CSOMMenuList*)pWnd)->OnOutPatientSelect();
}
CSOMMenuList::CSOMMenuList(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSOMMenuList::~CSOMMenuList(){
}
void CSOMMenuList::OnCreateComponents()
{
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 91);
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndAll.Create(this, _T("All"), 6, 97, 86, 122);
	m_wndInPatient.Create(this, _T("InPatient"), 90, 97, 170, 122);
	m_wndOutPatient.Create(this, _T("OutPatient"), 174, 97, 254, 122);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 350, 126, 425, 151);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
}
void CSOMMenuList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
}
void CSOMMenuList::OnSetWindowEvents(){
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
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	m_wndAll.SetCheck(true);
	m_szCondition = _T("A");
}
void CSOMMenuList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CSOMMenuList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSOMMenuList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSOMMenuList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;

}
int CSOMMenuList::SetMode(int nMode){
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
/*void CSOMMenuList::OnYearChange(){
	
} */
/*void CSOMMenuList::OnYearSetfocus(){
	
} */
/*void CSOMMenuList::OnYearKillfocus(){
	
} */
int CSOMMenuList::OnYearCheckValue(){
	return 0;
} 
void CSOMMenuList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMMenuList::OnReportPeriodSelendok(){
	CString tmpStr;
	CDate date;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		date.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, date.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  date.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, date.GetMonthLastDay());		
	}	
	UpdateData(false);	
}
/*void CSOMMenuList::OnReportPeriodSetfocus(){
	
}*/
/*void CSOMMenuList::OnReportPeriodKillfocus(){
	
}*/
long CSOMMenuList::OnReportPeriodLoadData(){
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
/*void CSOMMenuList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CSOMMenuList::OnFromDateChange(){
	
} */
/*void CSOMMenuList::OnFromDateSetfocus(){
	
} */
/*void CSOMMenuList::OnFromDateKillfocus(){
	
} */
int CSOMMenuList::OnFromDateCheckValue(){
	return 0;
} 
/*void CSOMMenuList::OnToDateChange(){
	
} */
/*void CSOMMenuList::OnToDateSetfocus(){
	
} */
/*void CSOMMenuList::OnToDateKillfocus(){
	
} */
int CSOMMenuList::OnToDateCheckValue(){
	return 0;
} 
void CSOMMenuList::OnAllSelect(){
	m_szCondition = _T("A");
}
void CSOMMenuList::OnInPatientSelect(){
	m_szCondition = _T("I");
}
void CSOMMenuList::OnOutPatientSelect(){
	m_szCondition = _T("E");
}
void CSOMMenuList::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr,szOldGroup,szNewGroup;
	int ret = 0 ;
	szSQL = GetQueryString();
	if (!rpt.Init(_T("Reports\\HMS\\HE_BAOCAOQUANSO.RPT")))
		return;
	ret = rs.ExecSQL(szSQL);
	/*if (ret <=0%%)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}*/
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("BỘ QUỐC PHÒNG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("BỆNH VIỆN TW QUÂN ĐỘI 108"));
	tmpStr.Format(_T("KHOA %s"),pMF->GetCurrentDepartmentID());
	rpt.GetReportHeader()->SetValue(_T("khoa"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail = NULL;
	int nCONG[13];
	for(int i = 2 ; i<12; i++)
	{
		nCONG[i] = 0;
	}
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("doituong"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
	
		rs.GetValue(_T("socu"), tmpStr);
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("vaovien"), tmpStr);
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("0"), tmpStr);
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("ckden"), tmpStr);
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("ravien"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("nxv"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("chuyenvien"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		
		rs.GetValue(_T("ckdi"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("tuvong"), tmpStr);
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("hientai"), tmpStr);
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.MoveNext();
	}
	szSQL = GetQueryString1();
	ret = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("id"), szNewGroup);
		if (szOldGroup != szNewGroup)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rs.GetValue(_T("type"), tmpStr);
			rptDetail->SetValue(_T("groupname"), tmpStr);
			szOldGroup = szNewGroup;
		}
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
		rs.GetValue(_T("doituong"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("socu"), tmpStr);
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("vaovien"), tmpStr);
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("0"), tmpStr);
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("ckden"), tmpStr);
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("ravien"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("nxv"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("chuyenvien"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("ckdi"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("tuvong"), tmpStr);
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("hientai"), tmpStr);
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.MoveNext();
	}
	szSQL = GetQueryString2();
	_fmsg(_T("%s"),szSQL);
	ret = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("id"), szNewGroup);
		if (szOldGroup != szNewGroup)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rs.GetValue(_T("type"), tmpStr);
			rptDetail->SetValue(_T("groupname"), tmpStr);
			szOldGroup = szNewGroup;
		}
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
		rs.GetValue(_T("doituong"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("socu"), tmpStr);
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("vaovien"), tmpStr);
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("0"), tmpStr);
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("ckden"), tmpStr);
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("ravien"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("nxv"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("chuyenvien"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("ckdi"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("tuvong"), tmpStr);
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("hientai"), tmpStr);
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.MoveNext();
	}
	CString  szField;
	for( int i = 2; i<=11; i++)
	{
		szField.Format(_T("s%d"), i);
		tmpStr.Format(_T("%d"), nCONG[i]);
		rpt.GetReportFooter()->SetValue(szField, tmpStr);
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
} 
void CSOMMenuList::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\MENU_PHUCVU_BENHNHAN.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 1, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 6;
	nCol = 0;
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER | FMT_CENTER);		
		
		rs.GetValue(_T("so_buong"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("so_giuong"), nTemp);		
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("ten_benhnhan"), tmpStr);		
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("sl1"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl2"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);	
		
		rs.GetValue(_T("sl3"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl4"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl5"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl6"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl7"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl8"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl9"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl10"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("sl_banh1"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);
		
		rs.GetValue(_T("sl_banh2"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_NUMBER1 | FMT_CENTER);
		
			
		nRow++;
		rs.MoveNext();
	}

	if ((nGroupTotal[4] + nGroupTotal[5] + nGroupTotal[6] + nGroupTotal[7] + nGroupTotal[8] + nGroupTotal[9] + nGroupTotal[10] + nGroupTotal[11] + nGroupTotal[12] + nGroupTotal[13] + nGroupTotal[14] + nGroupTotal[15]) > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1 | FMT_CENTER, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}	

	EndWaitCursor();
	xls.Save(_T("Exports\\MENU_PHUCVU_BENHNHAN2.xls"));
	
} 
int CSOMMenuList::OnAddArmyReportsDept(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSOMMenuList::OnEditArmyReportsDept(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSOMMenuList::OnDeleteArmyReportsDept(){
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
 		OnCancelArmyReportsDept();
 	}
	return 0;
}
int CSOMMenuList::OnSaveArmyReportsDept(){
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
 		//OnArmyReportsDeptListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSOMMenuList::OnCancelArmyReportsDept(){
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
int CSOMMenuList::OnArmyReportsDeptListLoadData(){
	return 0;
}
CString CSOMMenuList::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
			
		szSQL.Format(_T(" SELECT") \
		_T(" so_buong, so_giuong, ten_benhnhan, ") \
		_T(" SUM (sl1) AS sl1,") \
		_T(" SUM (sl2) AS sl2,") \
		_T(" SUM (sl3) AS sl3,") \
		_T(" SUM (sl4) AS sl4,") \
		_T(" SUM (sl5) AS sl5,") \
		_T(" SUM (sl6) AS sl6,") \
		_T(" SUM (sl_banh1) AS sl_banh1,") \
		_T(" SUM (sl_banh2) AS sl_banh2,") \
		_T(" SUM (sl1+sl2+sl3+sl4+sl5+sl6+sl_banh1+sl_banh2) as tongso") \
		_T(" FROM") \
		_T(" (") \
		_T(" select") \
		_T(" hfo_roomid as so_buong,") \
		_T(" hfo_bedid as so_giuong,") \
		_T(" GET_PATIENTNAME(hfo_docno) as ten_benhnhan,") \
		_T(" case when SUBSTR(hfl_name2, 1, 8) ='DOUONG_1' then 1 else 0 end as sl1,") \
		_T(" case when SUBSTR(hfl_name2, 1, 8) ='DOUONG_2' then 1 else 0 end as sl2,") \
		_T(" case when SUBSTR(hfl_name2, 1, 8) ='DOUONG_3' then 1 else 0 end as sl3,") \
		_T(" case when SUBSTR(hfl_name2, 1, 8) ='DOUONG_4' then 1 else 0 end as sl4,") \
		_T(" case when SUBSTR(hfl_name2, 1, 8) ='DOUONG_5' then 1 else 0 end as sl5,") \
		_T(" case when SUBSTR(hfl_name2, 1, 8) ='DOUONG_6' then 1 else 0 end as sl6,") \
		_T(" case when SUBSTR(hfl_name2, 1, 8) ='DOUONG_7' then 1 else 0 end as sl7,") \
		_T(" case when SUBSTR(hfl_name2, 1, 8) ='DOUONG_8' then 1 else 0 end as sl8,") \
		_T(" case when SUBSTR(hfl_name2, 1, 8) ='DOUONG_9' then 1 else 0 end as sl9,") \
		_T(" case when SUBSTR(hfl_name2, 1, 8) ='DOUONG_10' then 1 else 0 end as sl0,") \
		_T(" case when hfl_name2 ='BANH_1' then 1 else 0 end as sl_banh1,") \
		_T(" case when hfl_name2 ='BANH_2' then 1 else 0 end as sl_banh2") \
		_T(" FROM ") \
		_T(" HMS_FEEFOODLINE") \
		_T(" LEFT JOIN HMS_FEEFOOD ON (hfol_docno = hfo_docno and hfol_orderid = hfo_orderid)") \
		_T(" LEFT JOIN hms_fee_list ON (hfol_itemid = hfl_feeid)") \
		_T(" WHERE") \
		_T(" hfo_deptid='PTTYC'") \
		_T(" AND HFO_USEDMENU='Y'") \
		_T(" AND HFO_APPROVEDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" ORDER BY hfo_roomid, hfo_bedid") \
		_T(" )") \
		_T(" GROUP BY so_buong, so_giuong, ten_benhnhan"), m_szFromDate, m_szToDate);
		
	return szSQL;
}
CString CSOMMenuList::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	szSQL.Format(_T(" SELECT id,type,cast(doituong as NVARCHAR2(35)) doituong,socu,vaovien,ckden,ravien,ckdi,chuyenvien,tuvong,nxv,hientai") \
		_T(" FROM(SELECT 1 id,'Qu\xE2n' type,'T\x1B0\x1EDBng' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hp_rank") \
		_T(" FROM(SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))") \
		_T(" GROUP BY doituong,hp_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hp_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
		_T(" GROUP BY hd_object,hp_rank)") \
		_T(" GROUP BY doituong,hp_rank)") \
		_T(" WHERE doituong = 1 and hp_rank IN(15, 16, 17, 18)") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT 1 id,'Qu\xE2n' type,'4//' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hp_rank") \
		_T(" FROM(SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))") \
		_T(" GROUP BY doituong,hp_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hp_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
		_T(" GROUP BY hd_object,hp_rank)") \
		_T(" GROUP BY doituong,hp_rank)") \
		_T(" WHERE doituong = 1 and hp_rank IN ( 13, 14 )") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT 1 id,'Qu\xE2n' type,'2//' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hp_rank") \
		_T(" FROM(SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))") \
		_T(" GROUP BY doituong,hp_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hp_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
		_T(" GROUP BY hd_object,hp_rank)") \
		_T(" GROUP BY doituong,hp_rank)") \
		_T(" WHERE doituong = 1 and hp_rank NOT IN (13, 14, 15, 16, 17, 18)") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT id,type,doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT 2 id,'BHQH' type,'T\x1B0\x1EDBng' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hp_rank") \
		_T(" FROM(SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))") \
		_T(" GROUP BY doituong,hp_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hp_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
		_T(" GROUP BY hd_object,hp_rank)") \
		_T(" GROUP BY doituong,hp_rank)") \
		_T(" WHERE doituong IN(2,12) and hp_rank IN(15, 16, 17, 18)") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT 2 id,'BHQH' type,'4//' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hp_rank") \
		_T(" FROM(SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') %s AND htr_status='I' AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))") \
		_T(" GROUP BY doituong,hp_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hp_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
		_T(" GROUP BY hd_object,hp_rank)") \
		_T(" GROUP BY doituong,hp_rank)") \
		_T(" WHERE doituong IN(2,12) and hp_rank IN ( 13, 14 )") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT 2 id,'BHQH' type,'2//' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hp_rank") \
		_T(" FROM(SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))") \
		_T(" GROUP BY doituong,hp_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hp_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
		_T(" GROUP BY hd_object,hp_rank)") \
		_T(" GROUP BY doituong,hp_rank)") \
		_T(" WHERE doituong IN(2,12) and hp_rank NOT IN (13, 14, 15, 16, 17, 18)") \
		_T(" GROUP BY doituong)") \
		_T(" GROUP BY id,type,doituong)"),szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szFromDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
									szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate);
	return szSQL;
}
CString CSOMMenuList::GetQueryString2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDept, szObject, szRank,szDept1;
	CString szSQL;
	//Trang thai dieu tri toan vien
	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(""));
	//Trang thai dieu tri noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));
	//Trang thai dieu tri ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));
	szSQL.Format(_T(" SELECT id,type,doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT 11 id,'BHYT Quân nhân' type,'T\x1B0\x1EDBng' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hp_rank") \
		_T(" FROM(SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))") \
		_T(" GROUP BY doituong,hp_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hp_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
		_T(" GROUP BY hd_object,hp_rank)") \
		_T(" GROUP BY doituong,hp_rank)") \
		_T(" WHERE doituong IN(11,12) and hp_rank IN(15, 16, 17, 18)") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT 11 id,'BHYT Quân nhân' type,'4//' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hp_rank") \
		_T(" FROM(SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') %s AND htr_status='I' AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))") \
		_T(" GROUP BY doituong,hp_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hp_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
		_T(" GROUP BY hd_object,hp_rank)") \
		_T(" GROUP BY doituong,hp_rank)") \
		_T(" WHERE doituong IN(11,12) and hp_rank IN ( 13, 14 )") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT 11 id,'BHYT Quân nhân' type,'2//' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hp_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hp_rank") \
		_T(" FROM(SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hp_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid='%s' AND htr_admitdate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND htr_dischargedate >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))") \
		_T(" GROUP BY doituong,hp_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hp_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid='%s' AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hp_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid='%s' AND htr_dischargedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
		_T(" GROUP BY hd_object,hp_rank)") \
		_T(" GROUP BY doituong,hp_rank)") \
		_T(" WHERE doituong IN(11,12) and hp_rank NOT IN (13, 14, 15, 16, 17, 18)") \
		_T(" GROUP BY doituong)") \
		_T(" GROUP BY id,type,doituong"), 
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szFromDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szFromDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szFromDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate,
		szWhere,pMF->GetCurrentDepartmentID(),m_szFromDate,m_szToDate);
		return szSQL;
}