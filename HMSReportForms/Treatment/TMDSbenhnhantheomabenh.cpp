#include "stdafx.h"
#include "TMDSbenhnhantheomabenh.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "SearchPopup.h"
#include "../SearchByIDPopup.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CTMDSbenhnhantheomabenh *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDSbenhnhantheomabenh* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CTMDSbenhnhantheomabenh *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDSbenhnhantheomabenh *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMDSbenhnhantheomabenh *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDSbenhnhantheomabenh *)pWnd)->OnToDateCheckValue();
}
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CTMDSbenhnhantheomabenh* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
}
static long _OnDeptLoadDataFnc(CWnd *pWnd)
{
	return ((CTMDSbenhnhantheomabenh *)pWnd)->OnDeptLoadData();
}

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMDSbenhnhantheomabenh *pVw = (CTMDSbenhnhantheomabenh *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMDSbenhnhantheomabenh *pVw = (CTMDSbenhnhantheomabenh *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMDSbenhnhantheomabenh *pVw = (CTMDSbenhnhantheomabenh *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnCollectDataSelectFnc(CWnd *pWnd)
{
    CTMDSbenhnhantheomabenh *pVw = (CTMDSbenhnhantheomabenh *)pWnd;
    pVw->OnCollectDataSelect();
}
static int _OnAddTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhantheomabenh*)pWnd)->OnAddTMMaughinhanungthu();
} 
static int _OnEditTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhantheomabenh*)pWnd)->OnEditTMMaughinhanungthu();
} 
static int _OnDeleteTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhantheomabenh*)pWnd)->OnDeleteTMMaughinhanungthu();
} 
static int _OnSaveTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhantheomabenh*)pWnd)->OnSaveTMMaughinhanungthu();
} 
static int _OnCancelTMMaughinhanungthuFnc(CWnd *pWnd){
	 return ((CTMDSbenhnhantheomabenh*)pWnd)->OnCancelTMMaughinhanungthu();
}
static long _Onicd10LoadDataFnc(CWnd *pWnd){
	return ((CTMDSbenhnhantheomabenh *)pWnd)->Onicd10LoadData();
}
static int _Onicd10SearchItemFnc(CWnd *pWnd){
	 ((CTMDSbenhnhantheomabenh*)pWnd)->Onicd10SearchItem();
	 return 0;
}
static int _Onicd10SearchItemByIDFnc(CWnd *pWnd){
	 ((CTMDSbenhnhantheomabenh*)pWnd)->Onicd10SearchByIDItem();
	 return 0;
}

static void _OnSetupSelectFnc(CWnd *pWnd)
{
	CTMDSbenhnhantheomabenh *pVw = (CTMDSbenhnhantheomabenh *)pWnd;
	pVw->OnSetupSelect();
} 

CTMDSbenhnhantheomabenh::CTMDSbenhnhantheomabenh(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CTMDSbenhnhantheomabenh::~CTMDSbenhnhantheomabenh()
{


}
void CTMDSbenhnhantheomabenh::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 406);
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
	m_wndIcdLabel.Create(this, _T("ICD 10"), 10, 117, 485, 142);
	m_wndicd10.Create(this,10, 145, 485, 399);
	m_wndicd10.SetCheckBox(true);
	m_wndExport.Create(this, _T("&ExportXLS"), 409, 412, 484, 437);
	m_wndSetup.Create(this, _T("&Setup"), 10, 411, 90, 436);	
	m_wndCollectData.Create(this, _T("&Collect Data"), 100, 411, 300, 436);
}
void CTMDSbenhnhantheomabenh::OnInitializeComponents(){
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
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndicd10.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndicd10.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

}
void CTMDSbenhnhantheomabenh::OnSetWindowEvents(){
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
    m_wndCollectData.SetEvent(WE_CLICK, _OnCollectDataSelectFnc);
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
	Onicd10LoadData();
	UpdateData(false);
    SetMode(VM_VIEW);
}
void CTMDSbenhnhantheomabenh::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndicd10.GetDlgCtrlID(), m_szicd10Key);

}
void CTMDSbenhnhantheomabenh::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CTMDSbenhnhantheomabenh::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMDSbenhnhantheomabenh::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_szicd10Key.Empty();

}
int CTMDSbenhnhantheomabenh::SetMode(int nMode){
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
/*void CTMDSbenhnhantheomabenh::OnYearChange(){
	
} */
/*void CTMDSbenhnhantheomabenh::OnYearSetfocus(){
	
} */
/*void CTMDSbenhnhantheomabenh::OnYearKillfocus(){
	
} */
int CTMDSbenhnhantheomabenh::OnYearCheckValue(){
	return 0;
}
#include "CSysSetupListUser.h"
void CTMDSbenhnhantheomabenh::OnSetupSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CSysSetupListUser dlg(this);
	dlg.DoModal();

} 

void CTMDSbenhnhantheomabenh::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMDSbenhnhantheomabenh::OnReportPeriodSelendok(){
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
/*void CTMDSbenhnhantheomabenh::OnReportPeriodSetfocus(){
	
}*/
/*void CTMDSbenhnhantheomabenh::OnReportPeriodKillfocus(){
	
}*/
long CTMDSbenhnhantheomabenh::OnReportPeriodLoadData(){
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
/*void CTMDSbenhnhantheomabenh::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMDSbenhnhantheomabenh::OnFromDateChange(){
	
} */
/*void CTMDSbenhnhantheomabenh::OnFromDateSetfocus(){
	
} */
/*void CTMDSbenhnhantheomabenh::OnFromDateKillfocus(){
	
} */
int CTMDSbenhnhantheomabenh::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMDSbenhnhantheomabenh::OnToDateChange(){
	
} */
/*void CTMDSbenhnhantheomabenh::OnToDateSetfocus(){
	
} */
/*void CTMDSbenhnhantheomabenh::OnToDateKillfocus(){
	
} */
int CTMDSbenhnhantheomabenh::OnToDateCheckValue()
{
	return 0;
}

long CTMDSbenhnhantheomabenh::Onicd10LoadData()
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
void  CTMDSbenhnhantheomabenh::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 

void CTMDSbenhnhantheomabenh::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;	
}
long  CTMDSbenhnhantheomabenh::OnDeptLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1  and sd_type = 'DT' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return nCount;
}
void CTMDSbenhnhantheomabenh::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	
	if (!pMF->CheckPermission(_T("TM.200.1")))
	{
		ShowMessageBox(_T("Liên hệ admin để được cấp quyền TM.200.1 và sử dụng chức năng này!"));
		return;	
	}

	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[90], nGroupTotal[90];
	for(int i = 0; i < 90; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\DANHSACHBENHNHAN_NGHIENCUUKHOAHOC.xls"))) AfxMessageBox(_T("Chưa có Files ở đường dẫn Exports\\Template\\DANHSACHBENHNHAN_NGHIENCUUKHOAHOC.xls"));

	xls.SetWorksheet(0);
	//xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	//xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;

	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		
		
		rs.GetValue(_T("tenbn"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("tuoi"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("khoakham"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoavaovien"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("benhchinh"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("cd_vaovien"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("cd_ravien"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("quequan"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dienthoai"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("gioitinh"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("ngayvaovien"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngayravien"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);

		//Kết quả xét nghiệm
		rs.GetValue(_T("wbc"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("neut"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("lym"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("eosin"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("baso"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("rbc"), tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hb"), tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("mcv"), tmpStr);
		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("rdw"), tmpStr);
		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("plt"), tmpStr);
		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("inr"), tmpStr);
		xls.SetCellText(nCol+24, nRow, tmpStr, FMT_TEXT);			

		rs.GetValue(_T("prothrobin"), tmpStr);
		xls.SetCellText(nCol+25, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("aptt"), tmpStr);
		xls.SetCellText(nCol+26, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("fib"), tmpStr);
		xls.SetCellText(nCol+27, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ddimer"), tmpStr);
		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("glucose"), tmpStr);
		xls.SetCellText(nCol+29, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ure"), tmpStr);
		xls.SetCellText(nCol+30, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("creatinin"), tmpStr);
		xls.SetCellText(nCol+31, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ast"), tmpStr);
		xls.SetCellText(nCol+32, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("alt"), tmpStr);
		xls.SetCellText(nCol+33, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("bilirubintp"), tmpStr);
		xls.SetCellText(nCol+34, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bilirubintt"), tmpStr);
		xls.SetCellText(nCol+35, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("na"), tmpStr);
		xls.SetCellText(nCol+36, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("kal"), tmpStr);
		xls.SetCellText(nCol+37, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("calci"), tmpStr);
		xls.SetCellText(nCol+38, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("ldh"), tmpStr);
		xls.SetCellText(nCol+39, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("crp"), tmpStr);
		xls.SetCellText(nCol+40, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ph"), tmpStr);
		xls.SetCellText(nCol+41, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("po2"), tmpStr);
		xls.SetCellText(nCol+42, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pco2"), tmpStr);
		xls.SetCellText(nCol+43, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("lactat"), tmpStr);
		xls.SetCellText(nCol+44, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hco3"), tmpStr);
		xls.SetCellText(nCol+45, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("be"), tmpStr);
		xls.SetCellText(nCol+46, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ketcuc"), tmpStr);
		xls.SetCellText(nCol+47, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+48, nRow, tmpStr, FMT_TEXT);
		
		nRow++;
		rs.MoveNext();
	}	
	
	xls.Save(_T("Exports\\Template\\DANHSACHBENHNHAN_NGHIENCUUKHOAHOC2.xls"));
} 
void CTMDSbenhnhantheomabenh::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMDSbenhnhantheomabenh::OnAddTMMaughinhanungthu(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTMDSbenhnhantheomabenh::OnEditTMMaughinhanungthu(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMDSbenhnhantheomabenh::OnDeleteTMMaughinhanungthu(){
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
int CTMDSbenhnhantheomabenh::OnSaveTMMaughinhanungthu(){
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
int CTMDSbenhnhantheomabenh::OnCancelTMMaughinhanungthu(){
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
int CTMDSbenhnhantheomabenh::OnTMMaughinhanungthuListLoadData(){
	return 0;
}
CString CTMDSbenhnhantheomabenh::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szicd10;
	CString szWhere;

	if (!m_szDeptKey.IsEmpty())
	{
	szWhere.AppendFormat(_T("AND tbl_patient.makhoa = '%s'"), m_szDeptKey);
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
		szWhere.AppendFormat(_T(" and (tbl_patient.mabenh in(%s) OR tbl_patient.benhkem1 in(%s) OR tbl_patient.benhkem2 in(%s) OR tbl_patient.benhkem3 in(%s) OR tbl_patient.benhkem4 in(%s) OR tbl_patient.benhkem5 in(%s))"), szicd10, szicd10,szicd10,szicd10,szicd10,szicd10);
	}

	/*szSQL.Format(_T(" with tbl_patient as") \
	_T(" (") \
	_T(" SELECT ") \
	_T(" hd_docno as docno,") \
	_T(" GET_PATIENTNAME (hd_docno) as tenbn,") \
	_T(" hms_getage(trunc(hd_admitdate), hp_birthdate) as tuoi,") \
	_T(" HD_ADMITDEPT as khoakham,") \
	_T(" HCR_ADMITDEPT as khoavaovien,") \
	_T(" CASE WHEN NVL(HD_SUGGESTION, 'XX') ") \
	_T(" NOT IN ('C', 'D') THEN NVL(hd_icd, 'XX')") \
	_T(" ELSE NVL(hcr_mainicd, 'XX') end as mabenh,") \

	_T(" CASE WHEN NVL(HD_SUGGESTION, 'XX') ") \
	_T(" NOT IN ('C', 'D') THEN NVL(HD_ADMITDEPT, 'XX')") \
	_T(" ELSE NVL(HCR_ADMITDEPT, 'XX') end as makhoa,") \

	_T(" NVL(HOD_DIAGNOSTIC1,'XX') as benhkem1,") \
	_T(" NVL(HOD_DIAGNOSTIC2,'XX') as benhkem2,") \
	_T(" NVL(HOD_DIAGNOSTIC3,'XX') as benhkem3,") \
	_T(" NVL(HOD_DIAGNOSTIC4,'XX') as benhkem4,") \
	_T(" NVL(HOD_DIAGNOSTIC5,'XX') as benhkem5,") \
	_T(" hd_conclusion as benhchinh,") \
	_T(" HCR_ADMITDISEASE as cd_vaovien,") \
	_T(" hcr_maindisease as cd_ravien,") \
	_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as quequan,") \
	_T(" HD_telephone as dienthoai,") \
	_T(" Get_syssel_desc('sys_sex', hp_sex) as gioitinh,") \
	_T(" HCR_ADMITDATE as ngayvaovien,") \
	_T(" hcr_dischargedate as ngayravien") \
	_T(" FROM hms_doc") \
	_T(" LEFT JOIN HMS_OTHER_DIAGNOSTIC ON (hd_docno=HOD_DOCNO)") \
	_T(" LEFT JOIN hms_patient ON (hd_patientno= hp_patientno)") \
	_T(" LEFT JOIN hms_clinical_record ON (hd_docno=hcr_DOCNO)") \
	_T(" WHERE hd_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" AND HD_ADMITDEPT <> 'C1.2'") \
	_T(" AND NVL(HCR_ADMITDEPT, 'XX') NOT IN ('A1-A', 'A1-C')") \
	_T(" AND hd_status = 'T'") \
	_T(" ),") \
	_T(" tbl_xn as") \
	_T(" (") \
	_T(" SELECT") \
	_T(" hpcl_docno as docno,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='WBC') AND hpcl_result is not null THEN hpcl_result END) as wbc,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='NEUT') AND hpcl_result is not null THEN hpcl_result END) as neut,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='LYM') AND hpcl_result is not null THEN hpcl_result END) as lym,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='EOSIN') AND hpcl_result is not null THEN hpcl_result END) as eosin,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='BASO') AND hpcl_result is not null THEN hpcl_result END) as baso,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='RBC') AND hpcl_result is not null THEN hpcl_result END) as rbc,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='HB') AND hpcl_result is not null THEN hpcl_result END) as hb,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='MCV') AND hpcl_result is not null THEN hpcl_result END) as mcv,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='RDW') AND hpcl_result is not null THEN hpcl_result END) as rdw,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='PLT') AND hpcl_result is not null THEN hpcl_result END) as plt,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='INR') AND hpcl_result is not null THEN hpcl_result END) as inr,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='PROTHROBIN') AND hpcl_result is not null THEN hpcl_result END) as prothrobin,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='APTT') AND hpcl_result is not null THEN hpcl_result END) as aptt,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='FIB') AND hpcl_result is not null THEN hpcl_result END) as fib,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='DDIMER') AND hpcl_result is not null THEN hpcl_result END) as ddimer,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='GLUCOSE') AND hpcl_result is not null THEN hpcl_result END) as glucose,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='URE') AND hpcl_result is not null THEN hpcl_result END) as ure,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='CREATININ') AND hpcl_result is not null THEN hpcl_result END) as creatinin,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='AST') AND hpcl_result is not null THEN hpcl_result END) as ast,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='ALT') AND hpcl_result is not null THEN hpcl_result END) as alt,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='BILIRUBINTP') AND hpcl_result is not null THEN hpcl_result END) as bilirubintp,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='BILIRUBINTT') AND hpcl_result is not null THEN hpcl_result END) as bilirubintt,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='NA') AND hpcl_result is not null THEN hpcl_result END) as na,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='KAL') AND hpcl_result is not null THEN hpcl_result END) as kal,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='CALCI') AND hpcl_result is not null THEN hpcl_result END) as calci,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='LDH') AND hpcl_result is not null THEN hpcl_result END) as ldh,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='CRP') AND hpcl_result is not null THEN hpcl_result END) as crp,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='PH') AND hpcl_result is not null THEN hpcl_result END) as ph,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='PO2') AND hpcl_result is not null THEN hpcl_result END) as po2,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='PCO2') AND hpcl_result is not null THEN hpcl_result END) as pco2,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='LACTAT') AND hpcl_result is not null THEN hpcl_result END) as lactat,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='HCO3') AND hpcl_result is not null THEN hpcl_result END) as hco3,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='BE') AND hpcl_result is not null THEN hpcl_result END) as be,") \
	_T(" MIN(case when hpcl_itemid IN (select ss_code from sys_sel where ss_id='hms_test_result' and ss_desc ='KETCUC') AND hpcl_result is not null THEN hpcl_result END) as ketcuc") \
	_T(" FROM hms_testorderline") \
	_T(" LEFT JOIN hms_testorder ON (hpcl_docno=hpc_docno AND hpcl_orderid=hpc_orderid)") \
	_T(" WHERE HPC_ORDERDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" AND HPC_DEPTID not in ('C1.2', 'A1-A', 'A1-C')") \
	_T(" GROUP BY hpcl_docno") \
	_T(" )") \
	_T(" SELECT tbl_patient.docno, ") \
	_T(" CAST ('Báo cáo mã bệnh' as nvarchar2(128)) as baocao, ") \
	_T(" tbl_patient.tenbn,") \
	_T(" tbl_patient.tuoi,") \
	_T(" tbl_patient.khoakham,") \
	_T(" tbl_patient.khoavaovien,") \
	_T(" tbl_patient.mabenh,") \
	_T(" tbl_patient.benhkem1,") \
	_T(" tbl_patient.benhkem2,") \
	_T(" tbl_patient.benhkem3,") \
	_T(" tbl_patient.benhkem4,") \
	_T(" tbl_patient.benhkem5,") \
	_T(" tbl_patient.benhchinh,") \
	_T(" tbl_patient.cd_vaovien,") \
	_T(" tbl_patient.cd_ravien,") \
	_T(" tbl_patient.quequan,") \
	_T(" tbl_patient.dienthoai,") \
	_T(" tbl_patient.gioitinh,") \
	_T(" to_char(tbl_patient.ngayvaovien, 'DD/MM/YYYY HH24:MI') as ngayvaovien,") \
	_T(" to_char(tbl_patient.ngayravien,'DD/MM/YYYY HH24:MI') as ngayravien,") \
	_T(" tbl_xn.wbc,") \
	_T(" tbl_xn.neut,") \
	_T(" tbl_xn.lym,") \
	_T(" tbl_xn.eosin,") \
	_T(" tbl_xn.baso,") \
	_T(" tbl_xn.rbc,") \
	_T(" tbl_xn.hb,") \
	_T(" tbl_xn.mcv,") \
	_T(" tbl_xn.rdw,") \
	_T(" tbl_xn.plt,") \
	_T(" tbl_xn.inr,") \
	_T(" tbl_xn.prothrobin,") \
	_T(" tbl_xn.aptt,") \
	_T(" tbl_xn.fib,") \
	_T(" tbl_xn.ddimer,") \
	_T(" tbl_xn.glucose,") \
	_T(" tbl_xn.ure,") \
	_T(" tbl_xn.creatinin,") \
	_T(" tbl_xn.ast,") \
	_T(" tbl_xn.alt,") \
	_T(" tbl_xn.bilirubintp,") \
	_T(" tbl_xn.bilirubintt,") \
	_T(" tbl_xn.na,") \
	_T(" tbl_xn.kal,") \
	_T(" tbl_xn.calci,") \
	_T(" tbl_xn.ldh,") \
	_T(" tbl_xn.crp,") \
	_T(" tbl_xn.ph,") \
	_T(" tbl_xn.po2,") \
	_T(" tbl_xn.pco2,") \
	_T(" tbl_xn.lactat,") \
	_T(" tbl_xn.hco3,") \
	_T(" tbl_xn.be,") \
	_T(" tbl_xn.ketcuc") \
	_T(" FROM tbl_patient, tbl_xn") \
	_T(" WHERE tbl_patient.docno = tbl_xn.docno") \
	_T(" %s") \
	_T(" ORDER BY tbl_patient.docno"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhere );*/

	
szSQL.Format(_T(" with tbl_patient as") \
	_T(" (") \
	_T(" SELECT ") \
	_T(" hd_docno as docno,") \
	_T(" GET_PATIENTNAME (hd_docno) as tenbn,") \
	_T(" hms_getage(trunc(hd_admitdate), hp_birthdate) as tuoi,") \
	_T(" to_char(hp_birthdate, 'DD/MM/YYYY') as namsinh,") \
	_T(" HD_ADMITDEPT as khoakham,") \
	_T(" HCR_ADMITDEPT as khoavaovien,") \
	_T(" CASE WHEN NVL(HD_SUGGESTION, 'XX') ") \
	_T(" NOT IN ('C', 'D') THEN NVL(hd_icd, 'XX')") \
	_T(" ELSE NVL(hcr_mainicd, 'XX') end as mabenh,") \

	_T(" CASE WHEN NVL(HD_SUGGESTION, 'XX') ") \
	_T(" NOT IN ('C', 'D') THEN NVL(HD_ADMITDEPT, 'XX')") \
	_T(" ELSE NVL(HCR_ADMITDEPT, 'XX') end as makhoa,") \

	_T(" NVL(HOD_DIAGNOSTIC1,'XX') as benhkem1,") \
	_T(" NVL(HOD_DIAGNOSTIC2,'XX') as benhkem2,") \
	_T(" NVL(HOD_DIAGNOSTIC3,'XX') as benhkem3,") \
	_T(" NVL(HOD_DIAGNOSTIC4,'XX') as benhkem4,") \
	_T(" NVL(HOD_DIAGNOSTIC5,'XX') as benhkem5,") \
	_T(" hd_conclusion as benhchinh,") \
	_T(" HCR_ADMITDISEASE as cd_vaovien,") \
	_T(" hcr_maindisease as cd_ravien,") \
	_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as quequan,") \
	_T(" HD_telephone as dienthoai,") \
	_T(" Get_syssel_desc('sys_sex', hp_sex) as gioitinh,") \
	_T(" HCR_ADMITDATE as ngayvaovien,") \
	_T(" hcr_dischargedate as ngayravien") \
	_T(" FROM hms_doc") \
	_T(" LEFT JOIN HMS_OTHER_DIAGNOSTIC ON (hd_docno=HOD_DOCNO)") \
	_T(" LEFT JOIN hms_patient ON (hd_patientno= hp_patientno)") \
	_T(" LEFT JOIN hms_clinical_record ON (hd_docno=hcr_DOCNO)") \
	_T(" WHERE hd_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" AND HD_ADMITDEPT <> 'C1.2'") \
	_T(" AND NVL(HCR_ADMITDEPT, 'XX') NOT IN ('A1-A', 'A1-C')") \
	_T(" AND hd_status = 'T'") \
	_T(" ),") \
	_T(" tbl_xn as") \
	_T(" (") \
	_T(" SELECT") \
	_T(" hpcl_docno as docno,") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='WBC'") \
	_T("   )) as wbc, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='NEUT'") \
	_T("   )) as neut, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='LYM'") \
	_T("   )) as lym, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='EOSIN'") \
	_T("   )) as eosin, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='BASO'") \
	_T("   )) as baso, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='RBC'") \
	_T("   )) as rbc, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='HB'") \
	_T("   )) as hb, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='MCV'") \
	_T("   )) as mcv, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='RDW'") \
	_T("   )) as rdw, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='PLT'") \
	_T("   )) as plt, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='INR'") \
	_T("   )) as inr, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='PROTHROBIN'") \
	_T("   )) as prothrobin, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='APTT'") \
	_T("   )) as aptt, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='FIB'") \
	_T("   )) as fib, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='DDIMER'") \
	_T("   )) as ddimer, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='GLUCOSE'") \
	_T("   )) as glucose, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='URE'") \
	_T("   )) as ure, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='CREATININ'") \
	_T("   )) as creatinin, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='AST'") \
	_T("   )) as ast, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='ALT'") \
	_T("   )) as alt, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='BILIRUBINTP'") \
	_T("   )) as bilirubintp, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='BILIRUBINTT'") \
	_T("   )) as bilirubintt,") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='NA'") \
	_T("   )) as na, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='KAL'") \
	_T("   )) as kal, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='CALCI'") \
	_T("   )) as calci, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='LDH'") \
	_T("   )) as ldh, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='CRP'") \
	_T("   )) as crp, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='PH'") \
	_T("   )) as ph, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='PO2'") \
	_T("   )) as po2, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='PCO2'") \
	_T("   )) as pco2, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='LACTAT'") \
	_T("   )) as lactat, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='HCO3'") \
	_T("   )) as hco3, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='BE'") \
	_T("   )) as be, ") \

	_T(" (select distinct first_value(hpcl_result) over (partition by hpcl_docno order by hpcl_orderid)") \
	_T("       from hms_testorderline i") \
	_T("       where i.hpcl_docno = o.hpcl_docno") \
	_T("       and hpcl_itemid IN") \
	_T("         (SELECT ss_code FROM sys_sel WHERE ss_id='hms_test_result' AND ss_desc ='KETCUC'") \
	_T("   )) as ketcuc ") \

	_T(" FROM hms_testorderline o") \
	_T(" LEFT JOIN hms_testorder o ON (hpcl_docno=hpc_docno AND hpcl_orderid=hpc_orderid)") \
	_T(" WHERE HPC_ORDERDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
	_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T(" AND HPC_DEPTID not in ('C1.2', 'A1-A', 'A1-C')") \
	_T(" GROUP BY hpcl_docno") \
	_T(" )") \
	_T(" SELECT tbl_patient.docno, ") \
	_T(" CAST ('Báo cáo mã bệnh' as nvarchar2(128)) as baocao, ") \
	_T(" tbl_patient.tenbn,") \
	_T(" tbl_patient.tuoi, tbl_patient.namsinh,") \
	_T(" tbl_patient.khoakham,") \
	_T(" tbl_patient.khoavaovien,") \
	_T(" tbl_patient.mabenh,") \
	_T(" tbl_patient.benhkem1,") \
	_T(" tbl_patient.benhkem2,") \
	_T(" tbl_patient.benhkem3,") \
	_T(" tbl_patient.benhkem4,") \
	_T(" tbl_patient.benhkem5,") \
	_T(" tbl_patient.benhchinh,") \
	_T(" tbl_patient.cd_vaovien,") \
	_T(" tbl_patient.cd_ravien,") \
	_T(" tbl_patient.quequan,") \
	_T(" tbl_patient.dienthoai,") \
	_T(" tbl_patient.gioitinh,") \
	_T(" to_char(tbl_patient.ngayvaovien, 'DD/MM/YYYY HH24:MI') as ngayvaovien,") \
	_T(" to_char(tbl_patient.ngayravien,'DD/MM/YYYY HH24:MI') as ngayravien,") \
	_T(" tbl_xn.wbc,") \
	_T(" tbl_xn.neut,") \
	_T(" tbl_xn.lym,") \
	_T(" tbl_xn.eosin,") \
	_T(" tbl_xn.baso,") \
	_T(" tbl_xn.rbc,") \
	_T(" tbl_xn.hb,") \
	_T(" tbl_xn.mcv,") \
	_T(" tbl_xn.rdw,") \
	_T(" tbl_xn.plt,") \
	_T(" tbl_xn.inr,") \
	_T(" tbl_xn.prothrobin,") \
	_T(" tbl_xn.aptt,") \
	_T(" tbl_xn.fib,") \
	_T(" tbl_xn.ddimer,") \
	_T(" tbl_xn.glucose,") \
	_T(" tbl_xn.ure,") \
	_T(" tbl_xn.creatinin,") \
	_T(" tbl_xn.ast,") \
	_T(" tbl_xn.alt,") \
	_T(" tbl_xn.bilirubintp,") \
	_T(" tbl_xn.bilirubintt,") \
	_T(" tbl_xn.na,") \
	_T(" tbl_xn.kal,") \
	_T(" tbl_xn.calci,") \
	_T(" tbl_xn.ldh,") \
	_T(" tbl_xn.crp,") \
	_T(" tbl_xn.ph,") \
	_T(" tbl_xn.po2,") \
	_T(" tbl_xn.pco2,") \
	_T(" tbl_xn.lactat,") \
	_T(" tbl_xn.hco3,") \
	_T(" tbl_xn.be,") \
	_T(" tbl_xn.ketcuc") \
	_T(" FROM tbl_patient, tbl_xn") \
	_T(" WHERE tbl_patient.docno = tbl_xn.docno") \
	_T(" %s") \
	_T(" ORDER BY tbl_patient.docno"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhere );



	//_msg(_T("%s"), szSQL);
	return szSQL;
}
void CTMDSbenhnhantheomabenh::Onicd10SearchItem()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndicd10);
	newPopup->ShowPopup(&m_wndicd10);
}
void CTMDSbenhnhantheomabenh::Onicd10SearchByIDItem()
{
	CSearchByIDPopup *newPopup = new CSearchByIDPopup(&m_wndicd10);
	newPopup->ShowPopup(&m_wndicd10);
}
#include "TMCollectingDataDialog.h"
void CTMDSbenhnhantheomabenh::OnCollectDataSelect()
{
    CTMCollectingDataDialog dlg(this);
    dlg.DoModal();
}