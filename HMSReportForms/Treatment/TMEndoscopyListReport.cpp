#include "stdafx.h"
#include "TMEndoscopyListReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMEndoscopyListReport *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMEndoscopyListReport* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMEndoscopyListReport *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMEndoscopyListReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMEndoscopyListReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMEndoscopyListReport *)pWnd)->OnToDateCheckValue();
} 
static int _OnPerformRoomLoadDataFnc(CWnd *pWnd){
	return ((CTMEndoscopyListReport *)pWnd)->OnPerformRoomLoadData();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMEndoscopyListReport *pVw = (CTMEndoscopyListReport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMEndoscopyListReport *pVw = (CTMEndoscopyListReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CTMEndoscopyListReport*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CTMEndoscopyListReport*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CTMEndoscopyListReport*)pWnd)->OnPolicySelect();
}
static int _OnAddPACSEndoscopyListReportFnc(CWnd *pWnd){
	 return ((CTMEndoscopyListReport*)pWnd)->OnAddPACSEndoscopyListReport();
} 
static int _OnEditPACSEndoscopyListReportFnc(CWnd *pWnd){
	 return ((CTMEndoscopyListReport*)pWnd)->OnEditPACSEndoscopyListReport();
} 
static int _OnDeletePACSEndoscopyListReportFnc(CWnd *pWnd){
	 return ((CTMEndoscopyListReport*)pWnd)->OnDeletePACSEndoscopyListReport();
} 
static int _OnSavePACSEndoscopyListReportFnc(CWnd *pWnd){
	 return ((CTMEndoscopyListReport*)pWnd)->OnSavePACSEndoscopyListReport();
} 
static int _OnCancelPACSEndoscopyListReportFnc(CWnd *pWnd){
	 return ((CTMEndoscopyListReport*)pWnd)->OnCancelPACSEndoscopyListReport();
}

static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CTMEndoscopyListReport*)pWnd)->OnAllSelect();
}

CTMEndoscopyListReport::CTMEndoscopyListReport(CWnd* pParent)
{
	m_nDlgWidth = 460;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CTMEndoscopyListReport::~CTMEndoscopyListReport()
{

}
void CTMEndoscopyListReport::OnCreateComponents()
{
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 460, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 100, 55);
	m_wndYear.Create(this,105, 30, 230, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 235, 30, 325, 55);
	m_wndReportPeriod.Create(this,330, 30, 455, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 100, 85);
	m_wndFromDate.Create(this,105, 60, 230, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 60, 325, 85);
	m_wndToDate.Create(this,330, 60, 455, 85); 
	m_wndPerformRoom.SetCheckBox(true);
	m_wndPerformRoomLabel.Create(this, _T("Perform Room"), 10, 90, 100, 115);
	m_wndPerformRoom.Create(this,105, 90, 455, 115); 
	m_wndInsurance.Create(this, _T("Insurance"), 180, 120, 260, 145);
	m_wndService.Create(this, _T("Service"), 265, 120, 345, 145);
	m_wndPolicy.Create(this, _T("Policies"), 350, 120, 455, 145);
	m_wndExport.Create(this, _T("&ExportXLS"), 360, 155, 460, 180);
	m_wndOpen.Create(this, _T("Open"), 10, 120, 100, 145);
	m_wndAll.Create(this, _T("All"), 10, 120, 100, 145);
	m_wndOpen.ShowWindow(SW_HIDE);
}
void CTMEndoscopyListReport::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);

	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(15);

	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndPerformRoom.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndPerformRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CTMEndoscopyListReport::OnSetWindowEvents()
{
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
	m_wndPerformRoom.SetEvent(WE_LOADDATA, _OnPerformRoomLoadDataFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	
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
void CTMEndoscopyListReport::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPerformRoom.GetDlgCtrlID(), m_szPerformRoomKey);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Check(pDX, m_wndOpen.GetDlgCtrlID(), m_bOpen);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
}
void CTMEndoscopyListReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMEndoscopyListReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMEndoscopyListReport::SetDefaultValues()
{
	m_bOpen = FALSE;
	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPerformRoomKey.Empty();
	m_nInsurance=1;
	m_nService=1;
	m_nPolicy=1;
	m_nAll = 0;
}
int CTMEndoscopyListReport::SetMode(int nMode){
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
/*void CTMEndoscopyListReport::OnYearChange(){
	
} */
/*void CTMEndoscopyListReport::OnYearSetfocus(){
	
} */
/*void CTMEndoscopyListReport::OnYearKillfocus(){
	
} */
int CTMEndoscopyListReport::OnYearCheckValue()
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
void CTMEndoscopyListReport::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMEndoscopyListReport::OnReportPeriodSelendok()
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
/*void CTMEndoscopyListReport::OnReportPeriodSetfocus(){
	
}*/
/*void CTMEndoscopyListReport::OnReportPeriodKillfocus(){
	
}*/
long CTMEndoscopyListReport::OnReportPeriodLoadData()
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
/*void CTMEndoscopyListReport::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMEndoscopyListReport::OnFromDateChange(){
	
} */
/*void CTMEndoscopyListReport::OnFromDateSetfocus(){
	
} */
/*void CTMEndoscopyListReport::OnFromDateKillfocus(){
	
} */
int CTMEndoscopyListReport::OnFromDateCheckValue()
{
	return 0;
} 
/*void CTMEndoscopyListReport::OnToDateChange(){
	
} */
/*void CTMEndoscopyListReport::OnToDateSetfocus(){
	
} */
/*void CTMEndoscopyListReport::OnToDateKillfocus(){
	
} */
int CTMEndoscopyListReport::OnToDateCheckValue()
{
	return 0;
} 

int CTMEndoscopyListReport::OnPerformRoomLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformRoom.IsSearchKey() && !m_szPerformRoomKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szPerformRoomKey);
	}
	m_wndPerformRoom.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE hrl_deptid = '%s' AND hrl_section = 'HA' %s ORDER BY id "), pMF->GetDepartmentID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CTMEndoscopyListReport::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMEndoscopyListReport::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Export Mẫu 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export Mẫu 2"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExport1();
			break;
		case 2:
			OnExport2();
			break;		
	}	
} 
void CTMEndoscopyListReport::OnInsuranceSelect()
{
	
}
void CTMEndoscopyListReport::OnServiceSelect(){
	
}
void CTMEndoscopyListReport::OnPolicySelect(){
	
}
int CTMEndoscopyListReport::OnAddPACSEndoscopyListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTMEndoscopyListReport::OnEditPACSEndoscopyListReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMEndoscopyListReport::OnDeletePACSEndoscopyListReport(){
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
 		OnCancelPACSEndoscopyListReport(); 
 	}
	return 0;
}
int CTMEndoscopyListReport::OnSavePACSEndoscopyListReport(){
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
 		//OnPACSEndoscopyListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTMEndoscopyListReport::OnCancelPACSEndoscopyListReport(){
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
int CTMEndoscopyListReport::OnPACSEndoscopyListReportListLoadData(){
	return 0;
}

CString CTMEndoscopyListReport::GetItemAbbreviation(CString szItemName, CString szExtraWord)
{
	CStringArray arr;
	CString szTemp;
	CString szValue;
	int nIndex = 0;
	szValue.Empty();

	for (int i = 0; i < szItemName.GetLength(); i++)
	{
		if (szItemName[i] == _T(' '))
		{
			szTemp = szItemName.Mid(nIndex, i - nIndex);
			arr.Add(szTemp);
			nIndex = i + 1;
		}
	}

	if (szItemName.GetLength() > 0)
	{
		szTemp = szItemName.Mid(nIndex, szItemName.GetLength() - nIndex);
		arr.Add(szTemp);
	}

	szTemp.Empty();
	LPTSTR str = new TCHAR[1];

	for (int i = 0; i < arr.GetSize(); i++)
	{
		szTemp = arr[i];

		if (szTemp.Left(1) != _T("Đ") && szTemp.Left(1) != _T("đ"))
		{
			UnMarkString(szTemp.Left(1), str);
			CString tmpStr = CString(str);
			szValue.AppendFormat(_T("%s"), tmpStr.Left(1));
		}
		else
			szValue.AppendFormat(_T("%s"), szTemp.Left(1));
	}

	delete[] str;

	if (szExtraWord.IsEmpty())
		return szValue;
	else
		return szValue + _T(" ") + szExtraWord;
}

CString CTMEndoscopyListReport::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szPerformRoom;
	for (int i = 0; i < m_wndPerformRoom.GetItemCount(); i++)
	{
		if (m_wndPerformRoom.GetCheck(i))
		{
			m_wndPerformRoom.SetCurSel(i);
			if (!szPerformRoom.IsEmpty())
				szPerformRoom += _T(", ");
			szPerformRoom += m_wndPerformRoom.GetCurrent(0);
		}
	}
	if (m_nInsurance == 0)
		szWhere.Format(_T(" and ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.Format(_T(" and ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.Format(_T(" and ho_type not in('I','C','S') "));
	else
		szWhere.Format(_T(" and 1=1 "));

	if (!szPerformRoom.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpcl_perform_deptid = '%s' AND hpcl_proomid IN (%s)"), pMF->GetDepartmentID(), szPerformRoom);
	szSQL.Format(_T(" select hd_docno as docno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, hms_getsex(hp_sex) as psex,") \
				_T("        (select distinct ss_desc from sys_sel where ss_id='hms_rank' and ss_code=cast(hp_rank as nvarchar2(15))) as rank,") \
				_T("        hc_cardno as cardno,") \
				_T("        (select distinct su_name from sys_user where su_userid=hpcl_practitioner) as doctorname,") \
				_T("        hpcl_itemid as itemid,") \
				_T("        hfl_name as itemname,") \
				_T("        case when ho_type in('I','C') then 1") \
				_T("             when ho_type in('S') then 2") \
				_T("             else 3 end as objectidx,") \
				_T("        case when hpc_deptid='C1.3' then 'Y' else 'N' end as hpc_emergency,") \
                _T("        case when hpc_deptid='C1.3' then 2 else 1 end as emergencyidx,") \
				_T(" CASE") \
				_T(" WHEN ho_type IN('I','C')") \
				_T(" THEN hfl_retprice / 100 * 60") \
				_T(" WHEN ho_type IN('S')") \
				_T(" THEN hfl_retprice") \
				_T(" ELSE hfl_retprice END  AS retprice,") \
				_T(" CASE") \
				_T(" WHEN SUBSTR(hfl_opt_group,1,3) IN ('B41', 'B45', 'B51')") \
				_T(" THEN '1'") \
				_T(" WHEN SUBSTR(hfl_opt_group,1,3) IN ('B42', 'B46', 'B52')") \
				_T(" THEN '2'") \
				_T(" WHEN SUBSTR(hfl_opt_group,1,3) IN ('B43', 'B47', 'B53')") \
				_T(" THEN '3'") \
				_T(" WHEN SUBSTR(hfl_opt_group,1,3) IN ('B44', 'B54')") \
				_T(" THEN 'ÐB'") \
				_T(" ELSE '0'") \
				_T(" END AS opttype,") \
				_T(" hpcl_conclusion AS conclusion,") \
				_T(" hms_getage(trunc(hd_admitdate), hp_birthdate) AS age,") \
				_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_pacsorder on(hpc_docno=hd_docno)") \
				_T(" left join hms_pacsorderline on(hpcl_docno=hpc_docno and hpcl_orderid=hpc_orderid)") \
				_T(" left join hms_fee_list on(hfl_feeid=hpcl_itemid)") \
				_T(" left join hms_object on(ho_id=hd_object)") \
				_T(" left join hms_card on(hc_patientno=hd_patientno and hc_idx=hd_cardidx)") \
				_T(" where hpcl_status='T' and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" and hpc_groupid='B3100' %s") \
				_T(" order by objectidx, itemid, emergencyidx, docno"),
				m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
void CTMEndoscopyListReport::OnExport1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szTemp, tmpStr;


	BeginWaitCursor();

	UpdateData(TRUE);

	szSQL = GetQueryString();

	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	CString szTitle;
	if (m_nInsurance == 0)
		szTitle = _T("DANH SÁCH BỒI DƯỠNG THỦ THUẬT BẢO HIỂM Y TẾ");
	else if (m_nService == 0)
		szTitle = _T("DANH SÁCH BỒI DƯỠNG THỦ THUẬT DỊCH VỤ");
	else if (m_nPolicy == 0)
		szTitle = _T("DANH SÁCH BỒI DƯỠNG THỦ THUẬT BĐCS");
	else
		szTitle = _T("DANH SÁCH BỒI DƯỠNG THỦ THUẬT TẤT CẢ");

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 3);
	xls.SetColumnWidth(1, 28);
	xls.SetColumnWidth(2, 12);

	if (m_nInsurance == 0)
		xls.SetColumnWidth(3, 21);
	else
		xls.SetColumnWidth(3, 12);

	if (m_nService == 0)
		xls.SetColumnWidth(4, 6);
	else
		xls.SetColumnWidth(4, 12);
	

	if (m_nService == 0)
		xls.SetColumnWidth(5, 18);
	else
		xls.SetColumnWidth(5, 7);

	xls.SetColumnWidth(6, 18);
	xls.SetColumnWidth(7, 18);
	xls.SetColumnWidth(8, 18);

	xls.SetColumnWidth(9, 12);
	xls.SetColumnWidth(10, 30);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 30);

	int nRow = 1;
	int nCol = 0;

	xls.SetRowHeight(7, 30);
	xls.SetRowHeight(8, 40);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellText(0, 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);

	if (m_nService == 0)
	{
		xls.SetCellMergedColumns(nCol, nRow + 3, 7);
		xls.SetCellMergedColumns(nCol, nRow + 4, 7);
	}
	else
	{
		xls.SetCellMergedColumns(nCol, nRow + 3, 9);
		xls.SetCellMergedColumns(nCol, nRow + 4, 9);
	}

	xls.SetCellText(nCol, nRow + 3, szTitle, FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	TranslateString(_T("Index"), tmpStr);
	xls.SetCellMergedRows(nCol, nRow + 5, 2);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellMergedRows(nCol + 1, nRow + 5, 2);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellMergedRows(nCol + 2, nRow + 5, 2);
	xls.SetCellText(nCol + 2, nRow + 5, _T("Giới tính"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellMergedRows(nCol + 3, nRow + 5, 2);
	xls.SetCellText(nCol + 3, nRow + 5, _T("Số HS"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	

	if (m_nInsurance == 0)
	{
		xls.SetCellMergedRows(nCol + 4, nRow + 5, 2);
		xls.SetCellText(nCol + 4, nRow + 5, _T("Số bảo hiểm"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	}
	else if (m_nService == 0)
	{
		TranslateString(_T("Operation"), tmpStr);
		xls.SetCellMergedRows(nCol + 4, nRow + 5, 2);
		xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	}
	else if (m_nPolicy == 0)
	{
		TranslateString(_T("Object"), tmpStr);
		xls.SetCellMergedRows(nCol + 4, nRow + 5, 2);
		xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	}

	if (m_nService == 0)
	{
		xls.SetCellMergedRows(nCol + 5, nRow + 5, 2);
		xls.SetCellText(nCol + 5, nRow + 5, _T("Phân loại TT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

		xls.SetCellMergedColumns(nCol + 6, nRow + 5, 3);
		xls.SetCellText(nCol + 6, nRow + 5, _T("Kíp thực hiện"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

		xls.SetCellText(nCol + 7, nRow + 6, _T("Chính"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 8, nRow + 6, _T("Phụ"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 9, nRow + 6, _T("Giúp việc"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 10, nRow + 6, _T("Thành tiền"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	}
	else
	{
		TranslateString(_T("Operation"), tmpStr);
		xls.SetCellMergedRows(nCol + 5, nRow + 5, 2);
		xls.SetCellText(nCol + 5, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

		xls.SetCellMergedRows(nCol + 6, nRow + 5, 2);
		xls.SetCellText(nCol + 6, nRow + 5, _T("Phân loại TT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

		xls.SetCellMergedColumns(nCol + 7, nRow + 5, 3);
		xls.SetCellText(nCol + 7, nRow + 5, _T("Kíp thực hiện"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

		xls.SetCellText(nCol + 7, nRow + 6, _T("Chính"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 8, nRow + 6, _T("Phụ"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 9, nRow + 6, _T("Giúp việc"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	}

	if (m_nInsurance == 0 || m_nPolicy == 0)
	{
		TranslateString(_T("Money"), tmpStr);
		xls.SetCellMergedRows(nCol + 10, nRow + 5, 2);
		xls.SetCellText(nCol + 10, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	}

	xls.SetCellMergedRows(nCol + 11, nRow + 5, 2);
	xls.SetCellText(nCol + 11, nRow + 5, _T("Kết luận"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellMergedRows(nCol + 12, nRow + 5, 2);
	xls.SetCellText(nCol + 12, nRow + 5, _T("Tuổi"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellMergedRows(nCol + 13, nRow + 5, 2);
	xls.SetCellText(nCol + 13, nRow + 5, _T("Địa chỉ"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	nRow = 7;
	CStringArray arrItem;
	CArray<long, long> arrTotal;
	CString szOldItemID, szNewItemID, szOldEmergency, szNewEmergency;
	long nIndex = 0;


	while (!rs.IsEOF())
	{
		rs.GetValue(_T("itemid"), szNewItemID);

		if (szNewItemID != szOldItemID)
		{
			nRow++;

			rs.GetValue(_T("itemname"), tmpStr);

			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING, true);

			szOldItemID = szNewItemID;

			szOldEmergency.Empty();
			szNewEmergency.Empty();
		}

		rs.GetValue(_T("hpc_emergency"), szNewEmergency);

		if (szNewEmergency != szOldEmergency)
		{
			rs.GetValue(_T("itemname"), tmpStr);

			if (szNewEmergency == _T("Y"))
			{
				nRow++;
				xls.SetCellText(nCol + 1, nRow, _T("Cấp cứu"), FMT_TEXT | FMT_WRAPING, true);

				tmpStr.AppendFormat(_T(" cấp cứu"));
			}

			if (tmpStr.GetLength() > 0)
				arrItem.Add(tmpStr);

			if (nIndex > 0)
				arrTotal.Add(nIndex);

			szOldEmergency = szNewEmergency;
			nIndex = 0;
		}

		nRow++;
		tmpStr.Format(_T("%d"), ++nIndex);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("psex"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		if (m_nInsurance == 0)
		{
			rs.GetValue(_T("cardno"), tmpStr);
			xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		}
		else if (m_nService == 0)
		{
			rs.GetValue(_T("itemname"), tmpStr);

			if (szNewEmergency == _T("Y"))
				szTemp = GetItemAbbreviation(tmpStr, _T("cc"));
			else
				szTemp = GetItemAbbreviation(tmpStr);

			xls.SetCellText(nCol + 4, nRow, szTemp, FMT_TEXT | FMT_WRAPING);
		}
		else if (m_nPolicy == 0)
		{
			rs.GetValue(_T("rank"), tmpStr);
			xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		}

		if (m_nService == 0)
		{
			rs.GetValue(_T("opttype"), tmpStr);
			xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);
			rs.GetValue(_T("doctorname"), tmpStr);
			xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
			rs.GetValue(_T("retprice"), tmpStr);
			xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);
		}
		else
		{
			rs.GetValue(_T("itemname"), tmpStr);

			if (szNewEmergency == _T("Y"))
				szTemp = GetItemAbbreviation(tmpStr, _T("cc"));
			else
				szTemp = GetItemAbbreviation(tmpStr);

			xls.SetCellText(nCol + 5, nRow, szTemp, FMT_TEXT | FMT_WRAPING);

			rs.GetValue(_T("opttype"), tmpStr);
			xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);
			rs.GetValue(_T("doctorname"), tmpStr);
			xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
			rs.GetValue(_T("retprice"), tmpStr);
			xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);
		}

		rs.GetValue(_T("conclusion"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.MoveNext();
	}

	nRow++;
	nRow++;
	nRow++;


	if (nIndex > 0)
	{
		arrTotal.Add(nIndex);
	}

// 	nRow += 2;
// 
// 	TranslateString(_T("Operation"), tmpStr);
// 	xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING, true);
// 
// 	xls.SetCellText(nCol + 2, nRow, _T("Số ca soi"), FMT_TEXT | FMT_WRAPING, true);
// 
// 	xls.SetCellText(nCol + 3, nRow, _T("Giá tiền"), FMT_TEXT | FMT_WRAPING, true);
// 
// 	TranslateString(_T("Money"), tmpStr);
// 	xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING, true);

	int nTotal = 0;

	for (int i = 0; i < arrItem.GetSize(); i++)
	{
		tmpStr.Format(_T("%s"), arrItem[i]);
		nTotal += arrTotal[i];
	}

	nRow++;
	nCol = 0;

	tmpStr.Format(_T("%d"), nTotal);
	xls.SetCellText(nCol+5, nRow+2, tmpStr, FMT_INTEGER | FMT_WRAPING);

	xls.SetCellText(nCol, nRow+2, _T("Loại 3"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+3, _T("Cộng"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+4, _T("Số tiền bằng chữ:"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+7, _T("TRƯỞNG PHÒNG KHTH"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+8, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+16, _T("Đã ghi sổ cho thanh toán"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+17, _T("Ngày     tháng     năm"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+18, _T("CƠ QUAN TÀI CHÍNH"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+2, nRow, _T("Đơn giá"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+2, nRow+1, _T("Phẫu thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+3, nRow+1, _T("Thủ thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow, _T("Số lượng"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+1, _T("Phẫu thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+7, _T("HÀNH CHÍNH TRƯỞNG"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+8, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+18, _T("CHỨNG NHẬN CỦA CẤP CÓ THẨM QUYỀN"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+5, nRow+1, _T("Thủ thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+7, nRow+6, _T("Ngày     tháng      năm"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+7, nRow+7, _T("CHỦ NHIỆM KHOA"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+7, nRow+8, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+7, nRow, _T("Thành tiền"), FMT_TEXT, true, 10);

	CString szFileName;

	if (m_nInsurance == 0)
		szFileName.Format(_T("Exports\\DSBoiDuongTTBH.xls"));
	else if (m_nService == 0)
		szFileName.Format(_T("Exports\\DSBoiDuongTTDV.xls"));
	else if (m_nPolicy == 0)
		szFileName.Format(_T("Exports\\DSBoiDuongTTBDCS.xls"));
	else
		szFileName.Format(_T("Exports\\DSBoiDuongTTALL.xls"));

	xls.Save(szFileName);
	EndWaitCursor();
}
void CTMEndoscopyListReport::OnExport2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szTemp, tmpStr;


	BeginWaitCursor();

	UpdateData(TRUE);

	szSQL = GetQueryString1();

	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	CString szTitle;
	if (m_nInsurance == 0)
		szTitle = _T("DANH SÁCH BỒI DƯỠNG THỦ THUẬT BẢO HIỂM Y TẾ");
	else if (m_nService == 0)
		szTitle = _T("DANH SÁCH BỒI DƯỠNG THỦ THUẬT DỊCH VỤ");
	else if (m_nPolicy == 0)
		szTitle = _T("DANH SÁCH BỒI DƯỠNG THỦ THUẬT BĐCS");
	else
		szTitle = _T("DANH SÁCH BỒI DƯỠNG THỦ THUẬT TẤT CẢ");

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 3);
	xls.SetColumnWidth(1, 28);
	xls.SetColumnWidth(2, 12);

	if (m_nInsurance == 0)
		xls.SetColumnWidth(3, 21);
	else
		xls.SetColumnWidth(3, 12);

	if (m_nService == 0)
		xls.SetColumnWidth(4, 6);
	else
		xls.SetColumnWidth(4, 12);
	

	if (m_nService == 0)
		xls.SetColumnWidth(5, 18);
	else
		xls.SetColumnWidth(5, 7);

	xls.SetColumnWidth(6, 18);
	xls.SetColumnWidth(7, 18);
	xls.SetColumnWidth(8, 18);

	xls.SetColumnWidth(9, 12);
	xls.SetColumnWidth(10, 30);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 30);

	xls.SetColumnWidth(13, 20);
	xls.SetColumnWidth(14, 20);
	xls.SetColumnWidth(15, 10);
	xls.SetColumnWidth(16, 30);

	int nRow = 1;
	int nCol = 0;

	xls.SetRowHeight(7, 30);
	xls.SetRowHeight(8, 40);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellText(0, 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);

	if (m_nService == 0)
	{
		xls.SetCellMergedColumns(nCol, nRow + 3, 7);
		xls.SetCellMergedColumns(nCol, nRow + 4, 7);
	}
	else
	{
		xls.SetCellMergedColumns(nCol, nRow + 3, 9);
		xls.SetCellMergedColumns(nCol, nRow + 4, 9);
	}

	xls.SetCellText(nCol, nRow + 3, szTitle, FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("Từ ngày %s đến ngày %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	TranslateString(_T("Index"), tmpStr);
	xls.SetCellMergedRows(nCol, nRow + 5, 2);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellMergedRows(nCol + 1, nRow + 5, 2);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellMergedRows(nCol + 2, nRow + 5, 2);
	xls.SetCellText(nCol + 2, nRow + 5, _T("Giới tính"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellMergedRows(nCol + 2, nRow + 5, 2);
	xls.SetCellText(nCol + 3, nRow + 5, _T("Số HS"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	if (m_nInsurance == 0)
	{
		xls.SetCellMergedRows(nCol + 4, nRow + 5, 2);
		xls.SetCellText(nCol + 4, nRow + 5, _T("Số bảo hiểm"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	}
	else if (m_nService == 0)
	{
		TranslateString(_T("Operation"), tmpStr);
		xls.SetCellMergedRows(nCol + 4, nRow + 5, 2);
		xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	}
	else if (m_nPolicy == 0)
	{
		TranslateString(_T("Object"), tmpStr);
		xls.SetCellMergedRows(nCol + 4, nRow + 5, 2);
		xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	}

	if (m_nService == 0)
	{
		xls.SetCellMergedRows(nCol + 5, nRow + 5, 2);
		xls.SetCellText(nCol + 5, nRow + 5, _T("Phân loại TT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

		xls.SetCellMergedColumns(nCol + 6, nRow + 5, 3);
		xls.SetCellText(nCol + 6, nRow + 5, _T("Kíp thực hiện"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

		xls.SetCellText(nCol + 6, nRow + 6, _T("Chính"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 7, nRow + 6, _T("Phụ"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 8, nRow + 6, _T("Giúp việc"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 9, nRow + 6, _T("Thành tiền"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	}
	else
	{
		TranslateString(_T("Operation"), tmpStr);
		xls.SetCellMergedRows(nCol + 5, nRow + 5, 2);
		xls.SetCellText(nCol + 5, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

		xls.SetCellMergedRows(nCol + 6, nRow + 5, 2);
		xls.SetCellText(nCol + 6, nRow + 5, _T("Phân loại TT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

		xls.SetCellMergedColumns(nCol + 7, nRow + 5, 3);
		xls.SetCellText(nCol + 7, nRow + 5, _T("Kíp thực hiện"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

		xls.SetCellText(nCol + 7, nRow + 6, _T("Chính"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 8, nRow + 6, _T("Phụ"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
		xls.SetCellText(nCol + 9, nRow + 6, _T("Giúp việc"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	}

	if (m_nInsurance == 0 || m_nPolicy == 0)
	{
		TranslateString(_T("Money"), tmpStr);
		xls.SetCellMergedRows(nCol + 10, nRow + 5, 2);
		xls.SetCellText(nCol + 10, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	}

	xls.SetCellMergedRows(nCol + 11, nRow + 5, 2);
	xls.SetCellText(nCol + 11, nRow + 5, _T("Kết luận"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellMergedRows(nCol + 12, nRow + 5, 2);
	xls.SetCellText(nCol + 12, nRow + 5, _T("Tuổi"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellMergedRows(nCol + 13, nRow + 5, 2);
	xls.SetCellText(nCol + 13, nRow + 5, _T("Giới tính"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellMergedRows(nCol + 14, nRow + 5, 2);
	xls.SetCellText(nCol + 14, nRow + 5, _T("Địa chỉ"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellMergedRows(nCol + 15, nRow + 5, 2);
	xls.SetCellText(nCol + 15, nRow + 5, _T("Thuốc"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellMergedRows(nCol + 16, nRow + 5, 2);
	xls.SetCellText(nCol + 16, nRow + 5, _T("Vật tư"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellMergedRows(nCol + 17, nRow + 5, 2);
	xls.SetCellText(nCol + 17, nRow + 5, _T("Số lượng"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellMergedRows(nCol + 18, nRow + 5, 2);
	xls.SetCellText(nCol + 18, nRow + 5, _T("Kho"),FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	nRow = 7;
	CStringArray arrItem;
	CArray<long, long> arrTotal;
	CString szOldItemID, szNewItemID, szOldEmergency, szNewEmergency;
	long nIndex = 0;


	while (!rs.IsEOF())
	{
		rs.GetValue(_T("itemid"), szNewItemID);

		if (szNewItemID != szOldItemID)
		{
			nRow++;

			rs.GetValue(_T("itemname"), tmpStr);

			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING, true);

			szOldItemID = szNewItemID;

			szOldEmergency.Empty();
			szNewEmergency.Empty();
		}

		rs.GetValue(_T("hpc_emergency"), szNewEmergency);

		if (szNewEmergency != szOldEmergency)
		{
			rs.GetValue(_T("itemname"), tmpStr);

			if (szNewEmergency == _T("Y"))
			{
				nRow++;
				xls.SetCellText(nCol + 1, nRow, _T("Cấp cứu"), FMT_TEXT | FMT_WRAPING, true);

				tmpStr.AppendFormat(_T(" cấp cứu"));
			}

			if (tmpStr.GetLength() > 0)
				arrItem.Add(tmpStr);

			if (nIndex > 0)
				arrTotal.Add(nIndex);

			szOldEmergency = szNewEmergency;
			nIndex = 0;
		}

		nRow++;
		tmpStr.Format(_T("%d"), ++nIndex);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("psex"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		if (m_nInsurance == 0)
		{
			rs.GetValue(_T("cardno"), tmpStr);
			xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		}
		else if (m_nService == 0)
		{
			rs.GetValue(_T("itemname"), tmpStr);

			if (szNewEmergency == _T("Y"))
				szTemp = GetItemAbbreviation(tmpStr, _T("cc"));
			else
				szTemp = GetItemAbbreviation(tmpStr);

			xls.SetCellText(nCol + 4, nRow, szTemp, FMT_TEXT | FMT_WRAPING);
		}
		else if (m_nPolicy == 0)
		{
			rs.GetValue(_T("rank"), tmpStr);
			xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		}

		if (m_nService == 0)
		{
			rs.GetValue(_T("opttype"), tmpStr);
			xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);
			rs.GetValue(_T("doctorname"), tmpStr);
			xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
			rs.GetValue(_T("retprice"), tmpStr);
			xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);
		}
		else
		{
			rs.GetValue(_T("itemname"), tmpStr);

			if (szNewEmergency == _T("Y"))
				szTemp = GetItemAbbreviation(tmpStr, _T("cc"));
			else
				szTemp = GetItemAbbreviation(tmpStr);

			xls.SetCellText(nCol + 5, nRow, szTemp, FMT_TEXT | FMT_WRAPING);

			rs.GetValue(_T("opttype"), tmpStr);
			xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);
			rs.GetValue(_T("doctorname"), tmpStr);
			xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
			rs.GetValue(_T("retprice"), tmpStr);
			xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);
		}

		rs.GetValue(_T("conclusion"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("thuoc"), tmpStr);
		xls.SetCellText(nCol + 14, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("vattu"), tmpStr);
		xls.SetCellText(nCol + 15, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("soluong"), tmpStr);
		xls.SetCellText(nCol + 16, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("kho"), tmpStr);
		xls.SetCellText(nCol + 17, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.MoveNext();
	}

	nRow++;
	nRow++;
	nRow++;


	if (nIndex > 0)
	{
		arrTotal.Add(nIndex);
	}

// 	nRow += 2;
// 
// 	TranslateString(_T("Operation"), tmpStr);
// 	xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING, true);
// 
// 	xls.SetCellText(nCol + 2, nRow, _T("Số ca soi"), FMT_TEXT | FMT_WRAPING, true);
// 
// 	xls.SetCellText(nCol + 3, nRow, _T("Giá tiền"), FMT_TEXT | FMT_WRAPING, true);
// 
// 	TranslateString(_T("Money"), tmpStr);
// 	xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING, true);

	int nTotal = 0;

	for (int i = 0; i < arrItem.GetSize(); i++)
	{
		tmpStr.Format(_T("%s"), arrItem[i]);
		nTotal += arrTotal[i];
	}

	nRow++;
	nCol = 0;

	tmpStr.Format(_T("%d"), nTotal);
	xls.SetCellText(nCol+5, nRow+2, tmpStr, FMT_INTEGER | FMT_WRAPING);

	xls.SetCellText(nCol, nRow+2, _T("Loại 3"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+3, _T("Cộng"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+4, _T("Số tiền bằng chữ:"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+7, _T("TRƯỞNG PHÒNG KHTH"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+8, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+16, _T("Đã ghi sổ cho thanh toán"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+17, _T("Ngày     tháng     năm"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol, nRow+18, _T("CƠ QUAN TÀI CHÍNH"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+2, nRow, _T("Đơn giá"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+2, nRow+1, _T("Phẫu thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+3, nRow+1, _T("Thủ thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow, _T("Số lượng"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+1, _T("Phẫu thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+7, _T("HÀNH CHÍNH TRƯỞNG"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+8, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+4, nRow+18, _T("CHỨNG NHẬN CỦA CẤP CÓ THẨM QUYỀN"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+5, nRow+1, _T("Thủ thuật"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+7, nRow+6, _T("Ngày     tháng      năm"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+7, nRow+7, _T("CHỦ NHIỆM KHOA"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+7, nRow+8, _T("(Ký, ghi rõ họ tên)"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+7, nRow, _T("Thành tiền"), FMT_TEXT, true, 10);

	CString szFileName;

	if (m_nInsurance == 0)
		szFileName.Format(_T("Exports\\DSBoiDuongTTBH.xls"));
	else if (m_nService == 0)
		szFileName.Format(_T("Exports\\DSBoiDuongTTDV.xls"));
	else if (m_nPolicy == 0)
		szFileName.Format(_T("Exports\\DSBoiDuongTTBDCS.xls"));
	else 
		szFileName.Format(_T("Exports\\DSBoiDuongTTALL.xls"));

	xls.Save(szFileName);
	EndWaitCursor();
} 
CString CTMEndoscopyListReport::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szPerformRoom;
	for (int i = 0; i < m_wndPerformRoom.GetItemCount(); i++)
	{
		if (m_wndPerformRoom.GetCheck(i))
		{
			m_wndPerformRoom.SetCurSel(i);
			if (!szPerformRoom.IsEmpty())
				szPerformRoom += _T(", ");
			szPerformRoom += m_wndPerformRoom.GetCurrent(0);
		}
	}
	if (m_nInsurance == 0)
		szWhere.Format(_T(" and ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.Format(_T(" and ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.Format(_T(" and ho_type not in('I','C','S') "));
	else
		szWhere.Format(_T(" and 1=1 "));

	if (!szPerformRoom.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpcl_perform_deptid = '%s' AND hpcl_proomid IN (%s)"), pMF->GetDepartmentID(), szPerformRoom);
	//if (m_bOpen)
	//{
	//	szWhere.AppendFormat(_T(" AND hpcl_status NOT IN ('O', 'C', 'T')"));
	//}
	//else
	//{
	//	szWhere.AppendFormat(_T(" AND hpcl_status='T' "));
	//}
	szSQL.Format(_T(" select hd_docno as docno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, hms_getsex(hp_sex) as psex,") \
				_T("        (select distinct ss_desc from sys_sel where ss_id='hms_rank' and ss_code=cast(hp_rank as nvarchar2(15))) as rank,") \
				_T("        hc_cardno as cardno,") \
				_T("        (select distinct su_name from sys_user where su_userid=hpcl_practitioner) as doctorname,") \
				_T("        hpcl_itemid as itemid,") \
				_T("        hfl_name as itemname,") \
				_T("        case when ho_type in('I','C') then 1") \
				_T("             when ho_type in('S') then 2") \
				_T("             else 3 end as objectidx,") \
				_T("        case when hpc_deptid='C1.3' then 'Y' else 'N' end as hpc_emergency,") \
                _T("        case when hpc_deptid='C1.3' then 2 else 1 end as emergencyidx,") \
				_T(" CASE") \
				_T(" WHEN ho_type IN('I','C')") \
				_T(" THEN hfl_retprice / 100 * 60") \
				_T(" WHEN ho_type IN('S')") \
				_T(" THEN hfl_retprice") \
				_T(" ELSE hfl_retprice END  AS retprice,") \
				_T(" CASE") \
				_T(" WHEN SUBSTR(hfl_opt_group,1,3) IN ('B41', 'B45', 'B51')") \
				_T(" THEN '1'") \
				_T(" WHEN SUBSTR(hfl_opt_group,1,3) IN ('B42', 'B46', 'B52')") \
				_T(" THEN '2'") \
				_T(" WHEN SUBSTR(hfl_opt_group,1,3) IN ('B43', 'B47', 'B53')") \
				_T(" THEN '3'") \
				_T(" WHEN SUBSTR(hfl_opt_group,1,3) IN ('B44', 'B54')") \
				_T(" THEN 'ÐB'") \
				_T(" ELSE '0'") \
				_T(" END AS opttype,") \
				_T(" hpcl_conclusion AS conclusion,") \
				_T(" hms_getage(trunc(hd_admitdate), hp_birthdate) AS age,") \
				_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
				_T(" case when MPI_ORG_ID='PM' THEN mp_name end as thuoc,") \
				_T("   case when MPI_ORG_ID='MA' THEN mp_name end as vattu,") \
				_T("   HPOL_QTYISSUE as soluong,") \
				_T("   GET_STORAGENAME(HPO_STORAGE_ID) as kho") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_pacsorder on(hpc_docno=hd_docno)") \
				_T(" left join hms_pacsorderline on(hpcl_docno=hpc_docno and hpcl_orderid=hpc_orderid)") \
				_T(" LEFT JOIN hms_pharmaorder_view_c3 ON (hpc_docno = hpo_docno AND hpcl_orderid = HPO_REFERENCE_ID AND hpcl_itemid=HPO_REFITEM_ID)") \
				_T(" LEFT JOIN HMS_PHARMAORDERLINEA_VIEW ON(hpo_docno        = hpol_docno AND hpo_orderid       = hpol_orderid )") \
				_T(" LEFT JOIN M_PRODUCT_ITEM ON (MPI_PRODUCT_ITEM_ID=HPOL_PRODUCT_ITEM_ID)") \
				_T(" LEFT JOIN m_product ON ( mpi_product_id = mp_product_id )") \
				_T(" left join hms_fee_list on(hfl_feeid=hpcl_itemid)") \
				_T(" left join hms_object on(ho_id=hd_object)") \
				_T(" left join hms_card on(hc_patientno=hd_patientno and hc_idx=hd_cardidx)") \
				_T(" where 1=1 AND hpcl_status <> 'C' and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" and hpc_groupid='B3100' AND hpo_org_id='PACS' %s") \
				_T(" order by objectidx, itemid, emergencyidx, docno"),
				m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("Export 2 %s"), szSQL);
	return szSQL;
}

void CTMEndoscopyListReport::OnAllSelect()
{
	
}