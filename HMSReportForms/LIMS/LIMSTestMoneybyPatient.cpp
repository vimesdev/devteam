#include "stdafx.h"
#include "LIMSTestMoneybyPatient.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestMoneybyPatient *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSTestMoneybyPatient* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestMoneybyPatient *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestMoneybyPatient *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestMoneybyPatient *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSTestMoneybyPatient* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestMoneybyPatient *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnObjectAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSTestMoneybyPatient* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestMoneybyPatient *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CLIMSTestMoneybyPatient *)pWnd)->OnRoomAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CLIMSTestMoneybyPatient *pVw = (CLIMSTestMoneybyPatient *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CLIMSTestMoneybyPatient *pVw = (CLIMSTestMoneybyPatient *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnAddOtherRoomSelectFnc(CWnd *pWnd){
	 ((CLIMSTestMoneybyPatient*)pWnd)->OnAddOtherRoomSelect();
}
CLIMSTestMoneybyPatient::CLIMSTestMoneybyPatient(CWnd *pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CLIMSTestMoneybyPatient::~CLIMSTestMoneybyPatient()
{
}
void CLIMSTestMoneybyPatient::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 245, 85); 
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 150);
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 90, 115);
	m_wndObject.Create(this,95, 90, 485, 115); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 120, 90, 145);
	m_wndRoom.Create(this,95, 120, 485, 145); 
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 155, 410, 180);
	m_wndExport.Create(this, _T("&ExportXLS"), 415, 155, 490, 180);
	m_wndAddOtherRoom.Create(this, _T("Không tính thêm XN vào R99"), 10, 154, 200, 179);

}
void CLIMSTestMoneybyPatient::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(35);
//	//m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(false);
	m_wndReportPeriod.LimitText(35);
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(false);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(false);
	m_wndObject.SetCheckValue(false);
	m_wndObject.LimitText(35);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 90);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	m_wndRoom.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 90);
}

void CLIMSTestMoneybyPatient::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndAddOtherRoom.SetEvent(WE_CLICK, _OnAddOtherRoomSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = pMF->GetSysDate() + _T("00:00");
	m_szToDate = pMF->GetSysDate() + _T("23:59");
	UpdateData(false);

}
void CLIMSTestMoneybyPatient::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Check(pDX, m_wndAddOtherRoom.GetDlgCtrlID(), m_bAddOtherRoom);
}
void CLIMSTestMoneybyPatient::SetDefaultValues(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_bAddOtherRoom=FALSE;
}

int CLIMSTestMoneybyPatient::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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
 			EnableButtons(TRUE,0,1,2,3, 4, -1); 
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

/*void CLIMSTestMoneybyPatient::OnYearChange(){
	
} */
/*void CLIMSTestMoneybyPatient::OnYearSetfocus(){
	
} */
/*void CLIMSTestMoneybyPatient::OnYearKillfocus(){
	
} */
int CLIMSTestMoneybyPatient::OnYearCheckValue(){
	return 0;
}
 
void CLIMSTestMoneybyPatient::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
}
 
void CLIMSTestMoneybyPatient::OnReportPeriodSelendok(){
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/1"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/1/1"), m_nYear);
		tmpStr.Format(_T("%.4d/3/1"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59" ), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/4/1"), m_nYear);
		tmpStr.Format(_T("%.4d/6/1"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}

	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/7/1"), m_nYear);
		tmpStr.Format(_T("%.4d/9/1"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/1"), m_nYear);
		tmpStr.Format(_T("%.4d/10/1"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/1/1"), m_nYear);
		tmpStr.Format(_T("%.4d/12/1"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);
}

/*void CLIMSTestMoneybyPatient::OnReportPeriodSetfocus(){
	
}*/
/*void CLIMSTestMoneybyPatient::OnReportPeriodKillfocus(){
	
}*/
long CLIMSTestMoneybyPatient::OnReportPeriodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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

/*void CLIMSTestMoneybyPatient::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CLIMSTestMoneybyPatient::OnFromDateChange(){
	
} */
/*void CLIMSTestMoneybyPatient::OnFromDateSetfocus(){
	
} */
/*void CLIMSTestMoneybyPatient::OnFromDateKillfocus(){
	
} */
int CLIMSTestMoneybyPatient::OnFromDateCheckValue(){
	return 0;
}
 
/*void CLIMSTestMoneybyPatient::OnToDateChange(){
	
} */
/*void CLIMSTestMoneybyPatient::OnToDateSetfocus(){
	
} */
/*void CLIMSTestMoneybyPatient::OnToDateKillfocus(){
	
} */
int CLIMSTestMoneybyPatient::OnToDateCheckValue(){
	return 0;
}
 
void CLIMSTestMoneybyPatient::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CLIMSTestMoneybyPatient::OnObjectSelendok(){
	 
}
void CLIMSTestMoneybyPatient::OnAddOtherRoomSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

/*void CLIMSTestMoneybyPatient::OnObjectSetfocus(){
	
}*/
/*void CLIMSTestMoneybyPatient::OnObjectKillfocus(){
	
}*/
long CLIMSTestMoneybyPatient::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szSQL.Format(_T("SELECT ho_id, ho_desc FROM hms_object ORDER BY ho_id"));
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("ho_id")), 
			rs.GetValue(_T("ho_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CLIMSTestMoneybyPatient::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CLIMSTestMoneybyPatient::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CLIMSTestMoneybyPatient::OnRoomSelendok(){
	 
}
/*void CLIMSTestMoneybyPatient::OnRoomSetfocus(){
	
}*/
/*void CLIMSTestMoneybyPatient::OnRoomKillfocus(){
	
}*/
long CLIMSTestMoneybyPatient::OnRoomLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szDeptid;
	szWhere.Empty();
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty())
	{
		szWhere.Format(_T("and hrl_id = %d"), ToInt(m_szRoomKey));
	}
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select hrl_name as name, hrl_id as id, HRL_DEPTID from hms_roomlist where hrl_deptid in ('C1.1','TYC') and hrl_id in (99,84) %s Order by id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_szDeptid = rs.GetValue(_T("HRL_DEPTID"));
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
		    rs.GetValue(_T("HRL_DEPTID")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CLIMSTestMoneybyPatient::OnRoomAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CLIMSTestMoneybyPatient::OnPrintPreviewSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr;
	CString szSQL;
	CString szWhere;
	UpdateData(true);
	if(!rpt.Init(_T("Reports/MS/E_BAOCAOTHONGKETINHHINHKHAMVANHANDIEUTRINOITRUCBCC.RPT")) )
		return ;
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("Object")), m_wndObject.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	StringUpper(pMF->m_szHealthService, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_szHospitalName, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	BeginWaitCursor();
	szSQL = GetQueryString();
	//QueryOpener(szSQL);
//QueryOpener(szSQL);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	
	int nTotal[13];
	for(int i = 0 ; i<13; i++)
	{
		nTotal[i] = 0;
	}
	CReportSection* rptDetail;
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail(); 
		rs.GetValue(_T("rank"), tmpStr);
		rptDetail->SetValue(_T("rank"), tmpStr);
// C1 - 2: 
// Kham quan
		rs.GetValue(_T("c1"), tmpStr);
		nTotal[0] += ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
//kham huu
		rs.GetValue(_T("c2"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
// cong
		rs.GetValue(_T("c3"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
// dieu tri
		rs.GetValue(_T("c4"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
// gui kham C1 - 1
// khoa noi
		rs.GetValue(_T("c5"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
// khoa ngoai
		rs.GetValue(_T("c6"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
// khoa mat
		rs.GetValue(_T("c7"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
// TMH
		rs.GetValue(_T("c8"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
//RHM
		rs.GetValue(_T("c9"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
// San
		rs.GetValue(_T("c10"), tmpStr);
		nTotal[9] += ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
// dong y
		rs.GetValue(_T("c11"), tmpStr);
		nTotal[10] += ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
// cong 
		rs.GetValue(_T("c12"), tmpStr);
		nTotal[11] += ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		
//don thuoc
		rs.GetValue(_T("c13"), tmpStr);
		nTotal[12] += ToInt(tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		rs.MoveNext();
	}
CString  szField;
	for( int i = 1; i<=13; i++)
	{
		szField.Format(_T("s%d"), i);
		tmpStr.Format(_T("%d"), nTotal[i-1]);
		rpt.GetReportFooter()->SetValue(szField, tmpStr);
	}
	EndWaitCursor();
	tmpStr.Format(_T("%s"), pMF->GetSysDate());
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4)); 
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
}

void CLIMSTestMoneybyPatient::OnExportSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Export Danh sách bệnh nhân"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("Export tổng hợp"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect1();
			break;
		case 2:
			OnExportSelect2();
			break;		
	}

}
 
void CLIMSTestMoneybyPatient::OnExportSelect1()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	

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
	if(!xls.Load(_T("Exports\\Template\\THONGKETHEOKHOATONGHOPXETNGHIEM.xls"))) AfxMessageBox(_T("Chưa có File THONGKETHEOKHOATONGHOPXETNGHIEM.xls trong thư mục Export\Template!"));
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
				
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phong"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tendichvu"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("soluong"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);	
		

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[6])
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng:"), FMT_TEXT, true);
		for(int i = 6; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}	

	EndWaitCursor();
		
		xls.Save(_T("Exports\\Template\\THONGKETHEOKHOATONGHOPXETNGHIEM2.xls"));
}
void CLIMSTestMoneybyPatient::OnExportSelect2()
{
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	int nCol = 0, nRow = 0;
	long double nTotal[13];
	for (int i=0; i< 13; i++)
	{
		nTotal[i] = 0;
	}
	BeginWaitCursor();
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	int nIndex = 0;
	xls.SetColumnWidth(0, 30);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetCellMergedColumns(nCol, nRow, 2);
	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 5);
	xls.SetCellMergedColumns(nCol, nRow + 3, 5);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);
	if (m_szRoomKey.IsEmpty())
	{
	xls.SetCellText(nCol, nRow + 2, _T("THỐNG KÊ SỐ CA THỰC HIỆN TẠI TRUNG TÂM KHÁM SỨC KHỎE TYC"), FMT_TEXT | FMT_CENTER, true, 12);
	}
	else
	xls.SetCellText(nCol, nRow + 2, _T("THỐNG KÊ SỐ CA THỰC HIỆN TẠI CỬA 99"), FMT_TEXT | FMT_CENTER, true, 12);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), m_szFromDate, m_szToDate);
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 10);
	CStringArray arrCol;
	arrCol.Add(_T("Khoa thực hiện"));
	arrCol.Add(_T(""));
	arrCol.Add(_T("Số phiếu"));	
	
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(nCol + i, nRow + 4, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nRow = 5;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, rs.GetValue(_T("groupname")), FMT_TEXT);
		xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("")), FMT_NUMBER1);
		xls.SetCellText(nCol + 2, nRow, rs.GetValue(_T("testnum")), FMT_NUMBER1);
				
		nRow++;
		rs.MoveNext();		
	}
	//Total
	//xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER, true, 12);
	EndWaitCursor();
	xls.Save(_T("Exports\\THONGKESOCATHUCHIEN.xls"));
}
 
CString CLIMSTestMoneybyPatient::GetQueryString()
{
	CString szSQL, szWhere;
	szWhere.Format(_T(" HPC_PERFORMDATE BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				   _T(" AND hpc_status IN ('P', 'T')"), m_szFromDate, m_szToDate);
	if (!m_szRoomKey.IsEmpty())
		{
		//szWhere.AppendFormat(_T(" AND HPC_DEPTID in ('TYC') AND (hpc_roomid = %d OR HPCL_ITEMID in (select ss_code from sys_sel where ss_id='NHOMCLS_ROOM99') AND HPC_DEPTID='TYC')"), ToInt(m_szRoomKey));
		szWhere.AppendFormat(_T(" AND HPC_DEPTID = '%s' AND (hpc_roomid = %d OR HPCL_ITEMID in (select ss_code from sys_sel where ss_id='NHOMCLS_ROOM99') AND HPC_DEPTID='TYC')"), m_szDeptid, ToInt(m_szRoomKey));
		}
	else  
		{
		szWhere.AppendFormat(_T(" AND HD_HEALTHEXAM='Y' AND HPC_DEPTID ='TYC'"));
		}

	if (m_bAddOtherRoom)
		{
		szWhere.AppendFormat(_T(" AND HPC_DEPTID in ('TYC') AND (hpc_roomid = %d AND HPC_DEPTID='TYC')"), ToInt(m_szRoomKey));
		}

	szSQL.Format(_T(" SELECT ") \
			_T("   hfg_deptid groupname,") \
			_T("   COUNT(DISTINCT hpc_orderid) testnum,") \
			_T("   COUNT(DISTINCT hpc_docno) patientnum  ") \
			_T(" FROM") \
			_T("   (SELECT ") \
			_T("     hpc_groupid,") \
			_T("     hpc_docno,") \
			_T("     hpc_orderid    ") \
			_T("   FROM hms_testorder LEFT JOIN HMS_TESTORDERLINE ON (hpc_docno=hpcl_docno AND hpc_orderid=hpcl_orderid) ") \
			_T("   LEFT JOIN hms_fee ON (hpc_docno=hfe_docno AND hpc_orderid=hfe_orderid) ") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON ( hd_docno = hpc_docno ) ") \
			_T("   WHERE %s AND NVL(hfe_category, 'X') <> 'COV' AND hfe_status = 'P' AND NVL(hpcl_status,'X') <> 'C' ") \
			_T(" UNION ALL") \
			_T("   SELECT hpc_groupid,") \
			_T("     hpc_docno,") \
			_T("     hpc_orderid") \
			_T("   FROM hms_pacsorder LEFT JOIN HMS_PACSORDERLINE ON (hpc_docno=hpcl_docno AND hpc_orderid=hpcl_orderid) ") \
			_T("   LEFT JOIN hms_fee ON (hpc_docno=hfe_docno AND hpc_orderid=hfe_orderid) ") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON ( hd_docno = hpc_docno )") \
			_T("   WHERE %s AND HPC_GROUPID <> ('B1G00') AND NVL(hfe_category, 'X') <> 'COV' AND hfe_status = 'P' AND NVL(hpcl_status,'X') <> 'C' ") \
			_T("   )") \
			_T(" LEFT JOIN hms_fee_group") \
			_T(" ON ( hfg_id = hpc_groupid )") \
			_T(" WHERE hfg_deptid NOT IN ('C4') ") \
			_T(" GROUP BY ") \
			_T(" hfg_deptid") \
			_T(" UNION ALL") \
			_T(" SELECT ") \
			_T("   hfg_deptid groupname,") \
			_T("   COUNT(DISTINCT hpc_orderid) testnum,") \
			_T("   COUNT(DISTINCT hpc_docno) patientnum  ") \
			_T(" FROM") \
			_T("   (SELECT ") \
			_T("     hpc_groupid,") \
			_T("     hpc_docno,") \
			_T("     hpc_orderid    ") \
			_T("   FROM hms_testorder LEFT JOIN HMS_TESTORDERLINE ON (hpc_docno=hpcl_docno AND hpc_orderid=hpcl_orderid) ") \
			_T("   LEFT JOIN hms_fee ON (hpc_docno=hfe_docno AND hpcl_orderlineid = HFE_ORDERLINE) ") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON ( hd_docno = hpc_docno ) ") \
			_T("   WHERE %s AND NVL(hfe_category, 'X') <> 'COV' AND hfe_status = 'P' AND NVL(hpcl_status,'X') <> 'C' ") \
			_T(" UNION ALL") \
			_T("   SELECT hpc_groupid,") \
			_T("     hpc_docno,") \
			_T("     hpc_orderid") \
			_T("   FROM hms_pacsorder LEFT JOIN HMS_PACSORDERLINE ON (hpc_docno=hpcl_docno AND hpc_orderid=hpcl_orderid) ") \
			_T("   LEFT JOIN hms_fee ON (hpc_docno=hfe_docno AND hpcl_orderlineid = HFE_ORDERLINE) ") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON ( hd_docno = hpc_docno )") \
			_T("   WHERE %s AND HPC_GROUPID <> ('B1G00') AND NVL(hfe_category, 'X') <> 'COV' AND hfe_status = 'P' AND NVL(hpcl_status,'X') <> 'C' ") \
			_T("   )") \
			_T(" LEFT JOIN hms_fee_group") \
			_T(" ON ( hfg_id = hpc_groupid )") \
			_T(" WHERE hfg_deptid IN ('C4') ") \
			_T(" GROUP BY ") \
			_T(" hfg_deptid"), szWhere, szWhere, szWhere, szWhere); 

	//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CLIMSTestMoneybyPatient::GetQueryString1()
{
	CString szSQL, szWhere;
	szWhere.Format(_T(" HPC_PERFORMDATE BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				   _T(" AND hpc_status IN ('P', 'T')"), m_szFromDate, m_szToDate);
	if (!m_szRoomKey.IsEmpty())
		{
		szWhere.AppendFormat(_T(" AND HPC_DEPTID in ('%s') AND (hpc_roomid = %d OR HPCL_ITEMID in (select ss_code from sys_sel where ss_id='NHOMCLS_ROOM99') AND HPC_DEPTID='TYC')"), m_szDeptid, ToInt(m_szRoomKey));		
		}
	else  
		{
		szWhere.AppendFormat(_T(" AND HD_HEALTHEXAM='Y' AND HPC_DEPTID ='TYC'"));
		}

	if (m_bAddOtherRoom)
		{
		szWhere.AppendFormat(_T(" AND HPC_DEPTID in ('TYC') AND (hpc_roomid = %d AND HPC_DEPTID='TYC')"), ToInt(m_szRoomKey));
		}

	/*szSQL.Format(_T(" SELECT ") \
			_T("   hfg_deptid groupname,") \
			_T("   COUNT(DISTINCT hpc_orderid) testnum,") \
			_T("   COUNT(DISTINCT hpc_docno) patientnum  ") \
			_T(" FROM") \
			_T("   (SELECT ") \
			_T("     hpc_groupid,") \
			_T("     hpc_docno,") \
			_T("     hpc_orderid    ") \
			_T("   FROM hms_testorder LEFT JOIN HMS_TESTORDERLINE ON (hpc_docno=hpcl_docno AND hpc_orderid=hpcl_orderid) ") \
			_T("   LEFT JOIN hms_fee ON (hpc_docno=hfe_docno AND hpc_orderid=hfe_orderid) ") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON ( hd_docno = hpc_docno ) ") \
			_T("   WHERE %s AND NVL(hfe_category, 'X') <> 'COV' AND hfe_status = 'P' AND NVL(hpcl_status,'X') <> 'C' ") \
			_T(" UNION ALL") \
			_T("   SELECT hpc_groupid,") \
			_T("     hpc_docno,") \
			_T("     hpc_orderid") \
			_T("   FROM hms_pacsorder LEFT JOIN HMS_PACSORDERLINE ON (hpc_docno=hpcl_docno AND hpc_orderid=hpcl_orderid) ") \
			_T("   LEFT JOIN hms_fee ON (hpc_docno=hfe_docno AND hpc_orderid=hfe_orderid) ") \
			_T("   LEFT JOIN hms_doc") \
			_T("   ON ( hd_docno = hpc_docno )") \
			_T("   WHERE %s AND HPC_GROUPID <> ('B1G00') AND NVL(hfe_category, 'X') <> 'COV' AND hfe_status = 'P' AND NVL(hpcl_status,'X') <> 'C' ") \
			_T("   )") \
			_T(" LEFT JOIN hms_fee_group") \
			_T(" ON ( hfg_id = hpc_groupid )") \
			_T(" GROUP BY ") \
			_T(" hfg_deptid") \
			_T(" ORDER BY hfg_deptid "),szWhere, szWhere);	*/	

		szSQL.Format(_T(" SELECT ") \
		_T(" hpc_groupid as nhom,") \
		_T(" hpc_docno as docno,") \
		_T(" GET_PATIENTNAME(hpc_docno) as patname,") \
		_T(" hfg_deptid as khoa,") \
		_T(" hpc_roomid as phong,") \
		_T(" hpc_orderid as sophieu,") \
		_T(" hfl_name as tendichvu,") \
		_T(" HFE_QUANTITY as soluong") \
		_T(" FROM") \
		_T("   (SELECT hpc_groupid,    ") \
		_T("     hpc_docno,") \
		_T("     hpc_roomid,") \
		_T("     hpc_orderid,") \
		_T("     hpcl_itemid,") \
		_T("     HFE_QUANTITY") \
		_T("   FROM hms_testorder") \
		_T("   LEFT JOIN HMS_TESTORDERLINE") \
		_T("   ON (hpc_docno  =hpcl_docno") \
		_T("   AND hpc_orderid=hpcl_orderid)") \
		_T("   LEFT JOIN hms_fee") \
		_T("   ON (hpc_docno  =hfe_docno") \
		_T("   AND hpc_orderid=hfe_orderid)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( hd_docno = hpc_docno )") \
		_T("   WHERE %s") \
		_T("   AND hpc_status             IN ('P', 'T')") \
		_T("   AND NVL(hfe_category, 'X') <> 'COV'") \
		_T("   AND hfe_status              = 'P'") \
		_T("   AND NVL(hpcl_status,'X')   <> 'C' AND NVL(HPCL_HASFEE, 'X') ='Y'") \
		_T("   UNION ALL") \
		_T("   SELECT hpc_groupid,") \
		_T("     hpc_docno,") \
		_T("     hpc_roomid,") \
		_T("     hpc_orderid,") \
		_T("     hpcl_itemid,") \
		_T("     HFE_QUANTITY") \
		_T("   FROM hms_pacsorder") \
		_T("   LEFT JOIN HMS_PACSORDERLINE") \
		_T("   ON (hpc_docno  =hpcl_docno") \
		_T("   AND hpc_orderid=hpcl_orderid)") \
		_T("   LEFT JOIN hms_fee") \
		_T("   ON (hpc_docno  =hfe_docno") \
		_T("   AND hpc_orderid=hfe_orderid)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON ( hd_docno = hpc_docno )") \
		_T("   WHERE %s") \
		_T("   AND hpc_status             IN ('P', 'T')") \
		_T("   AND HPC_GROUPID            <> ('B1G00')") \
		_T("   AND NVL(hfe_category, 'X') <> 'COV'") \
		_T("   AND hfe_status              = 'P'") \
		_T("   AND NVL(hpcl_status,'X')   <> 'C' AND NVL(HPCL_HASFEE, 'X') ='Y'") \
		_T("   )") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON ( hfg_id = hpc_groupid )") \
		_T(" LEFT JOIN hms_fee_list ON (hfl_feeid = hpcl_itemid)") \
		_T(" WHERE 1=1") \
		_T(" GROUP BY hpc_groupid,hfg_deptid,hpc_docno,hfg_name, hpc_roomid, hpc_orderid, hfl_name, HFE_QUANTITY") \
		_T(" ORDER BY hfg_deptid"), szWhere, szWhere);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}