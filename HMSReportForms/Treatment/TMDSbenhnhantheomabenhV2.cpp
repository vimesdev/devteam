#include "stdafx.h"
#include "TMDSbenhnhantheomabenhV2.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "SearchPopup.h"
#include "../SearchByIDPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDSbenhnhantheomabenhV2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnToDateCheckValue();
}
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CTMDSbenhnhantheomabenhV2* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
}
static long _OnDeptLoadDataFnc(CWnd *pWnd)
{
	return ((CTMDSbenhnhantheomabenhV2 *)pWnd)->OnDeptLoadData();
}

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMDSbenhnhantheomabenhV2 *pVw = (CTMDSbenhnhantheomabenhV2 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMDSbenhnhantheomabenhV2 *pVw = (CTMDSbenhnhantheomabenhV2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMDSbenhnhantheomabenhV2 *pVw = (CTMDSbenhnhantheomabenhV2 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhantheomabenhV2*)pWnd)->OnAddTMMaughinhanungthu();
} 
static int _OnEditTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhantheomabenhV2*)pWnd)->OnEditTMMaughinhanungthu();
} 
static int _OnDeleteTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhantheomabenhV2*)pWnd)->OnDeleteTMMaughinhanungthu();
} 
static int _OnSaveTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhantheomabenhV2*)pWnd)->OnSaveTMMaughinhanungthu();
} 
static int _OnCancelTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhantheomabenhV2*)pWnd)->OnCancelTMMaughinhanungthu();
}
static long _Onicd10LoadDataFnc(CWnd *pWnd){
	return ((CTMDSbenhnhantheomabenhV2 *)pWnd)->Onicd10LoadData();
}
static int _Onicd10SearchItemFnc(CWnd *pWnd){
	 ((CTMDSbenhnhantheomabenhV2*)pWnd)->Onicd10SearchItem();
	 return 0;
}
static int _Onicd10SearchItemByIDFnc(CWnd *pWnd){
	 ((CTMDSbenhnhantheomabenhV2*)pWnd)->Onicd10SearchByIDItem();
	 return 0;
}

static void _OnSetupSelectFnc(CWnd *pWnd)
{
	CTMDSbenhnhantheomabenhV2 *pVw = (CTMDSbenhnhantheomabenhV2 *)pWnd;
	pVw->OnSetupSelect();
}


static int _OnListCheckAllFnc(CWnd *pWnd)
{
	return ((CTMDSbenhnhantheomabenhV2*)pWnd)->OnListCheckAll();
}

static int _OnListUnCheckAllFnc(CWnd *pWnd)
{
	return ((CTMDSbenhnhantheomabenhV2*)pWnd)->OnListUnCheckAll();
}


CTMDSbenhnhantheomabenhV2::CTMDSbenhnhantheomabenhV2(CWnd *pParent)
{
	//m_szTitle = _T("General Information In Exam Room");
	m_nDlgWidth = 500;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CTMDSbenhnhantheomabenhV2::~CTMDSbenhnhantheomabenhV2()
{


}
void CTMDSbenhnhantheomabenhV2::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 406);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 0, 48, 0, 48);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 58, 90, 83);
	m_wndFromDate.Create(this,95, 58, 245, 83); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 59, 330, 84);
	m_wndToDate.Create(this,335, 59, 485, 84);

	m_wndDeptLabel.Create(this, _T("Khoa điều trị"), 10, 88, 90, 113);
	m_wndDept.Create(this,95, 88, 485, 113);
	m_wndDept.SetCheckBox(true);

	m_wndIcdLabel.Create(this, _T("ICD 10"), 10, 117, 485, 142);
	m_wndicd10.Create(this,10, 145, 485, 399);
	m_wndicd10.SetCheckBox(true);

	m_wndExport.Create(this, _T("&ExportXLS"), 409, 412, 484, 437);
	m_wndSetup.Create(this, _T("&Setup"), 10, 411, 90, 436);
	m_wndSetup.EnableWindow(false);*/

	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 0, 48, 0, 48);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 58, 90, 83);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 406);
	m_wndFromDate.Create(this,95, 58, 245, 83); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 59, 330, 84);
	m_wndToDate.Create(this,335, 59, 485, 84); 
	m_wndDept.Create(this,10, 89, 485, 228);
	m_wndDept.SetCheckBox(true);
	m_wndIcdLabel.Create(this, _T("ICD 10"), 10, 231, 485, 256);
	m_wndicd10.Create(this,10, 259, 485, 401); 
	m_wndicd10.SetCheckBox(true);
	m_wndSetup.Create(this, _T("&Setup"), 10, 411, 90, 436);
	m_wndExport.Create(this, _T("&ExportXLS"), 409, 412, 484, 437);
	m_wndSetup.EnableWindow(false);
	m_wndPrintPreview.EnableWindow(false);
}
void CTMDSbenhnhantheomabenhV2::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0, 1, 2, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMIN(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMIN(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

	m_wndicd10.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndicd10.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

}
void CTMDSbenhnhantheomabenhV2::OnSetWindowEvents(){
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
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndicd10.SetEvent(WE_LOADDATA, _Onicd10LoadDataFnc);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = szSysDate + _T("00:00");
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate = szSysDate + _T("23:59");
	m_wndicd10.AddEvent(1, _T("Tìm theo tên bệnh"), _Onicd10SearchItemFnc);
	m_wndicd10.AddEvent(2, _T("Tìm theo mã bệnh"), _Onicd10SearchItemByIDFnc);
	m_wndSetup.SetEvent(WE_CLICK, _OnSetupSelectFnc);
	m_wndDept.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndDept.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);
	Onicd10LoadData();
	OnDeptLoadData();
	UpdateData(false);
}
void CTMDSbenhnhantheomabenhV2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndicd10.GetDlgCtrlID(), m_szicd10Key);

}
void CTMDSbenhnhantheomabenhV2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CTMDSbenhnhantheomabenhV2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMDSbenhnhantheomabenhV2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_szicd10Key.Empty();

}
int CTMDSbenhnhantheomabenhV2::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0,1,2,3,-1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0,1,2,3,-1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0,1,2,3,-1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0,1,2,3,-1); 
 			SetDefaultValues(); 
 			break; 
 		};
		
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CTMDSbenhnhantheomabenhV2::OnYearChange(){
	
} */
/*void CTMDSbenhnhantheomabenhV2::OnYearSetfocus(){
	
} */
/*void CTMDSbenhnhantheomabenhV2::OnYearKillfocus(){
	
} */
int CTMDSbenhnhantheomabenhV2::OnYearCheckValue(){
	return 0;
}
#include "CSysSetupListUser.h"
void CTMDSbenhnhantheomabenhV2::OnSetupSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CSysSetupListUser dlg(this);
	dlg.DoModal();

} 

void CTMDSbenhnhantheomabenhV2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMDSbenhnhantheomabenhV2::OnReportPeriodSelendok(){
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
/*void CTMDSbenhnhantheomabenhV2::OnReportPeriodSetfocus(){
	
}*/
/*void CTMDSbenhnhantheomabenhV2::OnReportPeriodKillfocus(){
	
}*/
long CTMDSbenhnhantheomabenhV2::OnReportPeriodLoadData(){
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
/*void CTMDSbenhnhantheomabenhV2::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMDSbenhnhantheomabenhV2::OnFromDateChange(){
	
} */
/*void CTMDSbenhnhantheomabenhV2::OnFromDateSetfocus(){
	
} */
/*void CTMDSbenhnhantheomabenhV2::OnFromDateKillfocus(){
	
} */
int CTMDSbenhnhantheomabenhV2::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMDSbenhnhantheomabenhV2::OnToDateChange(){
	
} */
/*void CTMDSbenhnhantheomabenhV2::OnToDateSetfocus(){
	
} */
/*void CTMDSbenhnhantheomabenhV2::OnToDateKillfocus(){
	
} */
int CTMDSbenhnhantheomabenhV2::OnToDateCheckValue()
{
	return 0;
}

long CTMDSbenhnhantheomabenhV2::Onicd10LoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndicd10.BeginLoad(); 
	int nCount = 0;	

	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name From hms_icd WHERE 1=1 and HI_ACTIVE='Y' order by hi_icd"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndicd10.AddItems(
			rs.GetValue(_T("ID")),			
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndicd10.EndLoad(); 
	return nCount;
}
void  CTMDSbenhnhantheomabenhV2::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 

void CTMDSbenhnhantheomabenhV2::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;	
}
long  CTMDSbenhnhantheomabenhV2::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndDept.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1  and sd_type = 'DT' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDept.EndLoad(); 
	return nCount;
}
void CTMDSbenhnhantheomabenhV2::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	

	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();

	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[90], nGroupTotal[90];
	for(int i = 0; i < 90; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\DANHSACHBENHNHAN_NGHIENCUUKHOAHOC_V2.xls"))) AfxMessageBox(_T("Chưa có Files ở đường dẫn Exports\\Template\\DANHSACHBENHNHAN_NGHIENCUUKHOAHOC.xls"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	int nCount = 1;

	while(!rs.IsEOF())
	{
		
		if(nRow == 65000)
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow = 0;
		}
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("mabenhnhan"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		
		
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);		
		
		rs.GetValue(_T("hovaten"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("itemfee"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayketqua"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ketqua"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("luotdieutri"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("groupname"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("benhchinh"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
				
		
		nRow++;
		rs.MoveNext();
	}	
	
	xls.Save(_T("Exports\\Template\\DANHSACHBENHNHAN_NGHIENCUUKHOAHOC_V22.xls"));
} 
void CTMDSbenhnhantheomabenhV2::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMDSbenhnhantheomabenhV2::OnAddTMMaughinhanungthu(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTMDSbenhnhantheomabenhV2::OnEditTMMaughinhanungthu(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMDSbenhnhantheomabenhV2::OnDeleteTMMaughinhanungthu(){
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
 		OnCancelTMMaughinhanungthu(); 
 	}
	return 0;
}
int CTMDSbenhnhantheomabenhV2::OnSaveTMMaughinhanungthu(){
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
 		//OnTMMaughinhanungthuListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTMDSbenhnhantheomabenhV2::OnCancelTMMaughinhanungthu(){
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
int CTMDSbenhnhantheomabenhV2::OnTMMaughinhanungthuListLoadData(){
	return 0;
}
CString CTMDSbenhnhantheomabenhV2::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szicd10, szDept;
	CString szWhere;

	for (int i = 0; i < m_wndDept.GetItemCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			if (!szDept.IsEmpty())
				szDept += _T(",");
			szDept.AppendFormat(_T("'%s'"), m_wndDept.GetItemText(i, 0));
		}
	}

	if (!szDept.IsEmpty())
	{
	szWhere.AppendFormat(_T("AND HCR_DISCHARGEDEPT in (%s)"), szDept);
	}

	for (int i = 0; i < m_wndicd10.GetItemCount(); i++)
	{
		if (m_wndicd10.GetCheck(i))
		{
			if (!szicd10.IsEmpty())
				szicd10 += _T(",");
			szicd10.AppendFormat(_T("'%s'"), m_wndicd10.GetItemText(i, 0));
		}
	}

	if (!szicd10.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hcr_mainicd IN (%s)"), szicd10);
	}

		szSQL.Format(_T(" SELECT hp_patientno AS mabenhnhan,") \
		_T("   hd_docno          AS sohoso,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname) AS hovaten,") \
		_T("   HMS_GETAGEBYDOC(hd_docno) AS namsinh,") \
		_T("   ORDER_ID as orderid,") \
		_T("   hfl_name as itemfee,") \
		_T("   to_char(PERFORM_DATE, 'DD/MM/YYYY') AS ngayketqua,") \
		_T("   PARA_RESULT as ketqua, ") \
		_T("   TREATIME AS luotdieutri,") \

		_T("   hfg_name                            AS groupname,") \
		_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
		_T("   hcr_maindisease                     AS benhchinh") \

		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD_HIST") \
		_T(" ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN HMS_PARA_RESULT_VIEW_VL2") \
		_T(" ON (hd_docno = DOC_NO)") \
		_T(" LEFT JOIN hms_fee_list ON (ITEM_ID = hfl_feeid)") \
		
		_T(" LEFT JOIN hms_fee_group ON (hfl_groupid = hfg_id)") \

		_T(" WHERE hcr_docno       > 0") \
		_T(" %s") \
		_T(" AND HCR_DISCHARGEDATE BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" and PARA_RESULT is not null") \
		_T(" %s") \
		_T(" ORDER BY hd_docno, hcr_treattime, hfg_id, ORDER_ID "), szWhere, m_szFromDate, m_szToDate, szWhere);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}
void CTMDSbenhnhantheomabenhV2::Onicd10SearchItem()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndicd10);
	newPopup->ShowPopup(&m_wndicd10);
}
void CTMDSbenhnhantheomabenhV2::Onicd10SearchByIDItem()
{
	CSearchByIDPopup *newPopup = new CSearchByIDPopup(&m_wndicd10);
	newPopup->ShowPopup(&m_wndicd10);
}

int CTMDSbenhnhantheomabenhV2::OnListCheckAll()
{
	for (int i = 0; i < m_wndDept.GetItemCount(); i++)
	{
		if (!m_wndDept.GetCheck(i))
			m_wndDept.SetCheck(i, TRUE);
	}
	return 0;
}

int CTMDSbenhnhantheomabenhV2::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndDept.GetItemCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
			m_wndDept.SetCheck(i, FALSE);
	}
	return 0;
}
//ĐÃ SỬA NHƯNG CHƯA MERGE VÀO
//_T(" select * from") \
//_T(" (") \
//_T(" SELECT hp_patientno AS mabenhnhan,") \
//_T("   hd_docno          AS sohoso,") \
//_T("   trim(hp_surname") \
//_T("   ||' '") \
//_T("   ||hp_midname") \
//_T("   ||' '") \
//_T("   ||hp_firstname)                                 AS hovaten,") \
//_T("   HMS_GETAGEBYDOC(hd_docno)                       AS namsinh,") \
//_T("   DEPT_ID                                         AS khoa,") \
//_T("   ORDER_ID                                        AS orderid,") \
//_T("   hfl_name                                        AS itemfee,") \
//_T("   TO_CHAR(PERFORM_DATE, 'DD/MM/YYYY')             AS ngayketqua,") \
//_T("   PARA_RESULT                                     AS ketqua,") \
//_T("   TREATIME                                        AS luotdieutri,") \
//_T("   hfg_name                                        AS groupname,") \
//_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
//_T("   hcr_maindisease                                 AS benhchinh,") \
//_T("   GROUPID") \
//_T(" FROM hms_patient") \
//_T(" LEFT JOIN hms_doc") \
//_T(" ON(hd_patientno=hp_patientno)") \
//_T(" LEFT JOIN HMS_CLINICAL_RECORD_HIST") \
//_T(" ON(hcr_docno=hd_docno)") \
//_T(" LEFT JOIN HMS_PARA_RESULT_VIEW_VL2") \
//_T(" ON (hd_docno = DOC_NO)") \
//_T(" LEFT JOIN hms_fee_list") \
//_T(" ON (ITEM_ID = hfl_feeid)") \
//_T(" LEFT JOIN hms_fee_group") \
//_T(" ON (hfl_groupid  = hfg_id)") \
//_T(" WHERE hcr_docno  > 0") \
//_T(" AND hcr_mainicd IN ('C22.0','C22.1','C22.3','C22.4','C22.7','C46','C46.0')") \
//_T(" AND HCR_DISCHARGEDATE BETWEEN to_timestamp('2023/12/23 00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('2023/12/23 23:59:00', 'YYYY-MM-DD HH24:MI:SS')") \
//_T(" AND PARA_RESULT IS NOT NULL") \
//_T(" AND hcr_mainicd IN ('C22.0','C22.1','C22.3','C22.4','C22.7','C46','C46.0')") \
//_T(" UNION ALL") \
//_T(" SELECT hp_patientno AS mabenhnhan,") \
//_T("   hd_docno          AS sohoso,") \
//_T("   trim(hp_surname") \
//_T("   ||' '") \
//_T("   ||hp_midname") \
//_T("   ||' '") \
//_T("   ||hp_firstname)                                 AS hovaten,") \
//_T("   HMS_GETAGEBYDOC(hd_docno)                       AS namsinh,") \
//_T("   hrl_name                                        AS khoa,") \
//_T("   ORDER_ID                                        AS orderid,") \
//_T("   hfl_name                                        AS itemfee,") \
//_T("   TO_CHAR(PERFORM_DATE, 'DD/MM/YYYY')             AS ngayketqua,") \
//_T("   PARA_RESULT                                     AS ketqua,") \
//_T("   TREATIME                                        AS luotdieutri,") \
//_T("   hfg_name                                        AS groupname,") \
//_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
//_T("   HE_ICD10                                 AS benhchinh,") \
//_T("   GROUPID") \
//_T(" FROM hms_patient") \
//_T(" LEFT JOIN hms_doc") \
//_T(" ON(hd_patientno=hp_patientno)") \
//_T(" LEFT JOIN HMS_exam") \
//_T(" ON(he_docno=hd_docno)") \
//_T(" LEFT JOIN hms_roomlist") \
//_T(" ON (he_deptid = hrl_deptid and he_roomid = hrl_id)") \
//_T(" LEFT JOIN HMS_PARA_RESULT_VIEW_VL2") \
//_T(" ON (hd_docno = DOC_NO)") \
//_T(" LEFT JOIN hms_fee_list") \
//_T(" ON (ITEM_ID = hfl_feeid)") \
//_T(" LEFT JOIN hms_fee_group") \
//_T(" ON (hfl_groupid  = hfg_id)") \
//_T(" WHERE hd_docno  > 0") \
//_T(" and hd_status='T'") \
//_T(" and NVL(HD_SUGGESTION, 'X') not in ('C', 'D')") \
//_T(" AND (he_deptid ='C1.1' and he_roomid IN (5, 17, 111)") \
//_T(" OR he_deptid ='C1.3')") \
//_T(" AND HE_ICD10 IN ('C22.0','C22.1','C22.3','C22.4','C22.7','C46','C46.0')") \
//_T(" AND Hd_enddate BETWEEN to_timestamp('2023/12/23 00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('2023/12/23 23:59:00', 'YYYY-MM-DD HH24:MI:SS')") \
//_T(" AND PARA_RESULT IS NOT NULL") \
//_T(" AND HE_ICD10 IN ('C22.0','C22.1','C22.3','C22.4','C22.7','C46','C46.0')") \
//_T(" )") \
//_T(" order by sohoso,") \
//_T("   luotdieutri,") \
//_T("   groupid,") \
//_T("   orderid") \