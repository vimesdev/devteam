#include "stdafx.h"
#include "EMTaiChinhKhamSucKhoe_V2.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "StringToken.h"
#include "HMSListSearchDialog.h"

static long _OnStatusLoadDataFnc(CWnd *pWnd)
{
	return ((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnStatusLoadData();
}
static long _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnResultLoadData();
}

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd)
{
	return ((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMTaiChinhKhamSucKhoe_V2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMTaiChinhKhamSucKhoe_V2 *)pWnd)->OnToDateCheckValue();
}
static long _OnCompanyLoadDataFnc(CWnd *pWnd){
	return ((CEMTaiChinhKhamSucKhoe_V2*)pWnd)->OnCompanyLoadData();
} 
static void _OnCompanyDblClickFnc(CWnd *pWnd){
	((CEMTaiChinhKhamSucKhoe_V2*)pWnd)->OnCompanyDblClick();
} 
static void _OnCompanySelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMTaiChinhKhamSucKhoe_V2*)pWnd)->OnCompanySelectChange(nOldItem, nNewItem);
} 
static int _OnCompanyDeleteItemFnc(CWnd *pWnd){
	return ((CEMTaiChinhKhamSucKhoe_V2*)pWnd)->OnCompanyDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CEMTaiChinhKhamSucKhoe_V2 *pVw = (CEMTaiChinhKhamSucKhoe_V2 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMTaiChinhKhamSucKhoe_V2 *pVw = (CEMTaiChinhKhamSucKhoe_V2 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnCompanySearchItemFnc(CWnd* pWnd)
{
	return ((CEMTaiChinhKhamSucKhoe_V2*)pWnd)->OnCompanySearchItem();
}
static int _OnCompanyCheckAllFnc(CWnd* pWnd)
{
	return ((CEMTaiChinhKhamSucKhoe_V2*)pWnd)->OnCompanyCheckAll();
}
static int _OnCompanyUncheckAllFnc(CWnd* pWnd)
{
	return ((CEMTaiChinhKhamSucKhoe_V2*)pWnd)->OnCompanyUncheckAll();
}

CEMTaiChinhKhamSucKhoe_V2::CEMTaiChinhKhamSucKhoe_V2(CWnd *pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CEMTaiChinhKhamSucKhoe_V2::~CEMTaiChinhKhamSucKhoe_V2(){
}
void CEMTaiChinhKhamSucKhoe_V2::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 395);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85);
	m_wndStatusLabel.Create(this, _T("Status"), 10, 90, 90, 115);
	m_wndStatus.Create(this,95, 90, 245, 115); 
	m_wndResultLabel.Create(this, _T("Result"), 250, 90, 330, 115);
	m_wndResult.Create(this,335, 90, 485, 115); 
	m_wndCompany.Create(this,10, 120, 485, 390); 
	m_wndCompany.SetCheckBox(TRUE);
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 400, 410, 425);
	m_wndExport.Create(this, _T("&ExportXLS"), 415, 400, 490, 425);
	m_wndStatus.EnableWindow(false);
	m_wndResult.EnableWindow(false);
}
void CEMTaiChinhKhamSucKhoe_V2::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), FMT_INTEGER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Name"), FMT_TEXT, 80);

	m_wndStatus.InsertColumn(0, _T("ID"), FMT_INTEGER, 30);
	m_wndStatus.InsertColumn(1, _T("Name"), FMT_TEXT, 180);

	m_wndResult.InsertColumn(0, _T("ID"), FMT_INTEGER, 30);
	m_wndResult.InsertColumn(1, _T("Name"), FMT_TEXT, 150);

	m_wndCompany.InsertColumn(0, _T("Id"), CFMT_NUMBER, 100);
	m_wndCompany.InsertColumn(1, _T("Contract No"), CFMT_TEXT, 100);
	m_wndCompany.InsertColumn(2, _T("Description"), CFMT_TEXT, 150);
	m_wndCompany.InsertColumn(3, _T("Exam Date"), CFMT_DATE, 80);
	m_wndCompany.InsertColumn(4, _T("Type"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndCompany.InsertColumn(5, _T(""), CFMT_TEXT, 0);	//companyid
	m_wndCompany.InsertColumn(6, _T(""), CFMT_TEXT, 0);	//object

}
void CEMTaiChinhKhamSucKhoe_V2::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
	m_wndCompany.SetEvent(WE_SELCHANGE, _OnCompanySelectChangeFnc);
	m_wndCompany.SetEvent(WE_LOADDATA, _OnCompanyLoadDataFnc);
	m_wndCompany.SetEvent(WE_DBLCLICK, _OnCompanyDblClickFnc);
	m_wndCompany.AddEvent(1, _T("Search"), _OnCompanySearchItemFnc);
	m_wndCompany.AddEvent(0, _T("-"));
	m_wndCompany.AddEvent(2, _T("Check All"), _OnCompanyCheckAllFnc);
	m_wndCompany.AddEvent(0, _T("-"));
	m_wndCompany.AddEvent(3, _T("Uncheck All"), _OnCompanyUncheckAllFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CDate dte;
	dte.ParseDate(pMF->GetSysDate());
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_nYear = dte.GetYear();
	m_szReportPeriodKey.Format(_T("%d"), dte.GetMonth());
	UpdateData(false);
	OnCompanyLoadData();

}
void CEMTaiChinhKhamSucKhoe_V2::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
}
void CEMTaiChinhKhamSucKhoe_V2::SetDefaultValues(){

	m_nYear = 0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();
	m_szResultKey.Empty();
}
int CEMTaiChinhKhamSucKhoe_V2::SetMode(int nMode){
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
/*void CEMTaiChinhKhamSucKhoe_V2::OnYearChange(){
	
} */
/*void CEMTaiChinhKhamSucKhoe_V2::OnYearSetfocus(){
	
} */
/*void CEMTaiChinhKhamSucKhoe_V2::OnYearKillfocus(){
	
} */
int CEMTaiChinhKhamSucKhoe_V2::OnYearCheckValue(){
	return 0;
} 
void CEMTaiChinhKhamSucKhoe_V2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CEMTaiChinhKhamSucKhoe_V2::OnReportPeriodSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	pMF->OnReportPeriodSelendok(&m_szFromDate, &m_szToDate, m_szReportPeriodKey);
	UpdateData(false);	 
}
/*void CEMTaiChinhKhamSucKhoe_V2::OnReportPeriodSetfocus(){
	
}*/
/*void CEMTaiChinhKhamSucKhoe_V2::OnReportPeriodKillfocus(){
	
}*/
long CEMTaiChinhKhamSucKhoe_V2::OnReportPeriodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadReportPeriodList(&m_wndReportPeriod, m_szReportPeriodKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReportPeriodKey
};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMTaiChinhKhamSucKhoe_V2::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CEMTaiChinhKhamSucKhoe_V2::OnFromDateChange(){
	
} */
/*void CEMTaiChinhKhamSucKhoe_V2::OnFromDateSetfocus(){
	
} */
/*void CEMTaiChinhKhamSucKhoe_V2::OnFromDateKillfocus(){
	
} */
int CEMTaiChinhKhamSucKhoe_V2::OnFromDateCheckValue(){
	OnCompanyLoadData();
	return 0;
} 
/*void CEMTaiChinhKhamSucKhoe_V2::OnToDateChange(){
	
} */
/*void CEMTaiChinhKhamSucKhoe_V2::OnToDateSetfocus(){
	
} */
/*void CEMTaiChinhKhamSucKhoe_V2::OnToDateKillfocus(){
	
} */
int CEMTaiChinhKhamSucKhoe_V2::OnToDateCheckValue(){
	OnCompanyLoadData();
	return 0;
} 
void CEMTaiChinhKhamSucKhoe_V2::OnCompanyDblClick(){
	
} 
void CEMTaiChinhKhamSucKhoe_V2::OnCompanySelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CEMTaiChinhKhamSucKhoe_V2::OnCompanyDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CEMTaiChinhKhamSucKhoe_V2::OnCompanyLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndCompany.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT DISTINCT hec_contract_id,") \
		_T("   hec_no,") \
		_T("   hec_company_id,") \
		_T("   hwp_name                            AS hec_company,") \
		_T("   TO_CHAR(hec_examdate, 'DD/MM/YYYY') AS exmdate,") \
		_T("   hec_description,") \
		_T("   hec_type,") \
		_T("   hec_object") \
		_T(" FROM hms_exm_employee") \
		_T(" LEFT JOIN hms_exm_contract") \
		_T(" ON(hec_contract_id = hee_contract_id)") \
		_T(" LEFT JOIN hms_workplace") \
		_T(" ON(hec_company_id = TO_CHAR(hwp_idx))") \
		_T(" WHERE hec_examdate between to_timestamp('%s','YYYY-MM-DD') and to_timestamp('%s','YYYY-MM-DD') ") \
		_T(" ORDER BY hec_contract_id"), m_szFromDate.Left(10), m_szToDate.Left(10));
	//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCompany.AddItems(
			rs.GetValue(_T("hec_contract_id")), 
			rs.GetValue(_T("hec_no")), 
			rs.GetValue(_T("hec_company")), 
			rs.GetValue(_T("exmdate")), 
			rs.GetValue(_T("hec_type")), 
			rs.GetValue(_T("hec_company_id")), 
			rs.GetValue(_T("hec_object")), NULL);
		rs.MoveNext();
	}
	m_wndCompany.EndLoad(); 
	UpdateData(FALSE);
	return nCount;

}
void CEMTaiChinhKhamSucKhoe_V2::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CEMTaiChinhKhamSucKhoe_V2::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFromTime, szToTime, szSheetNo, tmpStr, szCompanys;
	long nDocumentNo;
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}

	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		if (m_wndCompany.GetCheck(i))
		{
			m_wndCompany.SetCurSel(i);
			if (!szCompanys.IsEmpty())
				szCompanys += _T(",");
			szCompanys.AppendFormat(_T("%s"), m_wndCompany.GetItemText(i, 0));
		}
	}
	if(!szCompanys.IsEmpty())
		szWhere.AppendFormat(_T("AND hee_contract_id IN(%s)"), szCompanys);

	UpdateData(true);
	pMF->BeginWaitCursor();
					szSQL.Format(_T(" SELECT") \
					_T("   iv.hfe_deptid as phongban,") \
					_T("   hee_docno,") \
					_T("   trim(hee_surname") \
					_T("   ||' '") \
					_T("   ||hee_midname") \
					_T("   ||' '") \
					_T("   ||hee_firstname)                    AS hee_name,") \
					_T("   TO_CHAR(hee_birthdate,'DD/MM/YYYY') AS hee_birthdate,") \
					_T("   hms_getsex(hee_sex)                 AS sex,") \
					_T("   TO_CHAR(hd_admitdate, 'DD/MM/YYYY') AS createdate,") \
					_T("   hwp_name,") \
					_T("   SUM(fe.hfe_cost) AS totalfee") \
					_T(" FROM hms_exm_employee") \
					_T(" LEFT JOIN hms_doc") \
					_T(" ON (hee_docno=hd_docno)") \
					_T(" LEFT JOIN hms_fee_invoice iv ON (hd_docno = hfe_docno)") \
					_T(" LEFT JOIN hms_fee fe ON (iv.hfe_docno = fe.hfe_docno AND iv.hfe_invoiceno = fe.hfe_invoiceno)") \
					_T(" LEFT JOIN hms_workplace") \
					_T(" ON (hee_company_id   =TO_CHAR(hwp_idx))") \
					_T(" WHERE 1              =1 %s ") \
					_T(" AND iv.hfe_locked = 'Y'") \
					_T(" AND hee_isactive     ='Y'") \
					_T(" GROUP BY hee_contract_id,hee_docno, hee_surname, hee_midname, hee_firstname,") \
					_T(" hee_birthdate, hee_sex, hd_admitdate, hwp_name, iv.hfe_deptid") \
					_T(" ORDER BY hee_contract_id, hee_docno, hd_admitdate"), szWhere);

	CExcel xls;
	if(!xls.Load(_T("Exports\\Template\\DANHSACHDANGKYKHAMSUCKHOETONGHOP.xls"))) AfxMessageBox(_T("Chưa có File DANHSACHDANGKYKHAMSUCKHOETONGHOP.xls trong thư mục Export\\Template!"));
	xls.SetWorksheet(0);	

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("phongban"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hee_docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("hee_name"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hee_birthdate"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("createdate"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hwp_name"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("totalfee"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER2);	

		rs.GetValue(_T("totalfee"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);	

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[8] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 7; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}
	
	EndWaitCursor();		
	xls.Save(_T("Exports\\Template\\DANHSACHDANGKYKHAMSUCKHOETONGHOPV2.xls"));
	
} 

CString CEMTaiChinhKhamSucKhoe_V2::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szCompanys, szWhere2;

	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		if (m_wndCompany.GetCheck(i))
		{
			m_wndCompany.SetCurSel(i);
			if (!szCompanys.IsEmpty())
				szCompanys += _T(",");
			szCompanys.AppendFormat(_T("%s"), m_wndCompany.GetItemText(i, 0));
		}
	}
	if(!szCompanys.IsEmpty())
		szWhere.AppendFormat(_T("AND hec_contract_id IN(%s)"), szCompanys);

	CString szField, szSumField, tmpStr, szTemp;
	CStringToken token(m_szProductIDStr);
	for (int i = 0; i < token.GetSize(); i++)
	{
		token.GetAt(i, szTemp);
		tmpStr.Format(_T("PID_%s"), szTemp);
		if (!szSumField.IsEmpty())
			szSumField += _T(", ");
		szSumField.AppendFormat(_T("SUM(%s) %s"),tmpStr, tmpStr);
		if (!szField.IsEmpty())
			szField += _T(", ");
		szField.AppendFormat(
			_T(" CASE WHEN item_id = '%s' ") \
			_T(" THEN total ELSE 0 END AS %s"), szTemp,  tmpStr);
	}
	/*
	if((m_bUnpayment && m_bApproved && m_bPayment) || (!m_bUnpayment && !m_bApproved && !m_bPayment) )
	{
		szWhere.AppendFormat(_T(" and hfe_category <>'Y' ")); 
	}
	else
	{
		if(m_bUnpayment)
			szWhere.AppendFormat(_T(" and hfe_category <>'Y' and hfe_invoiceno =0 "));
		else if (m_bPayment)
		{
			szWhere.AppendFormat(_T(" and nvl(hfe_category,'N')  not in ('Y','P') and hfe_invoiceno >0 and hfe_insinvoice=0  "));
		}
		else if (m_bApproved)
		{
			szWhere.AppendFormat(_T(" and hfe_category <>'Y' and hfe_invoiceno >0 and hfe_insinvoice >0 "));
		}
	}
	*/
	szWhere.AppendFormat(_T(" and nvl(e.hfe_category,'N')  not in ('Y')"));
	if (m_szStatusKey == _T("1"))
	{
		szWhere.AppendFormat(_T(" and e.hfe_status = 'O'"));
	}
	if (m_szStatusKey == _T("2"))
	{
		szWhere.AppendFormat(_T(" and e.hfe_status = 'P' and nvl(i.hfe_locked, 'N') <> 'Y'"));
	}
	if (m_szStatusKey == _T("3"))
	{
		szWhere.AppendFormat(_T(" and i.hfe_locked = 'Y'"));
	}
	szWhere2 = szWhere;
	if (m_szResultKey == _T("1"))
	{
		szWhere2.AppendFormat(_T(" and nvl(hpcl_status, 'O') IN ('I', 'T')"));
	}
	if (m_szResultKey == _T("2"))
	{
		szWhere2.AppendFormat(_T(" and (nvl(hpcl_status, 'O') NOT IN ('I', 'T'))"));
	}
	szSQL.Format(_T(" SELECT") \
		_T("	hee_dept,") \
		_T("	hee_docno,") \
		_T("	pname,") \
		_T("	hee_birthdate, ") \
		_T("	sex,") \
		_T("	%s,") \
		_T("	sum(t_thuoc) as t_thuoc, ") \
		_T("	SUM(total) AS total") \
		_T(" FROM") \
		_T(" (SELECT %s, tbl.* FROM ") \
		_T("	(") \
		_T("	SELECT e.hfe_itemid||'_'||") \
		_T("		(case when e.hfe_type ='E' then 0 ") \
		_T("		when  hesp_itemid is not null then 0 else 1 end) as item_id,") \
		_T("		hee_dept,") \
		_T("		hee_docno,") \
		_T("		TRIM(hee_surname || ' ' || hee_midname || ' ' || hee_firstname) AS pname,") \
		_T("		to_char(hee_birthdate,'DD/MM/YYYY') AS hee_birthdate, ") \
		_T("		hms_getsex(hee_sex) AS sex,") \
		_T("		case when e.hfe_type='D' then e.hfe_cost else 0 end as t_thuoc, ") \
		_T("		e.hfe_cost AS total,") \
		_T("		hee_employee_id as empl_id") \
		_T("	FROM hms_exm_contract") \
		_T("	LEFT JOIN hms_exm_employee ") \
		_T("	ON(hec_contract_id = hee_contract_id)") \
		_T("	LEFT JOIN hms_workplace") \
		_T("	ON(hec_company_id = TO_CHAR(hwp_idx))") \
		_T("	LEFT JOIN hms_doc") \
		_T("	ON(hee_docno = hd_docno)") \
		_T("	LEFT JOIN hms_fee e") \
		_T("	ON(hd_docno = e.hfe_docno)") \
		_T("	LEFT JOIN hms_exm_servicepackage ON (hesp_contract_id=hec_contract_id and e.hfe_itemid=hesp_itemid)") \
		_T("	LEFT JOIN hms_fee_invoice i ON (i.hfe_docno = e.hfe_docno and i.hfe_invoiceno = e.hfe_invoiceno)") \
		_T("	WHERE hee_status = 'T' and (SUBSTR(e.hfe_itemid, 0, 1) IN('O', 'D') or e.hfe_type='D')%s") \
		_T("	UNION ALL")
		_T("	SELECT e.hfe_itemid||'_'||") \
		_T("		(case when e.hfe_type ='E' then 0 ") \
		_T("		when  hesp_itemid is not null then 0 else 1 end) as item_id,") \
		_T("		hee_dept,") \
		_T("		hee_docno,") \
		_T("		TRIM(hee_surname || ' ' || hee_midname || ' ' || hee_firstname) AS pname,") \
		_T("		to_char(hee_birthdate,'DD/MM/YYYY') AS hee_birthdate, ") \
		_T("		hms_getsex(hee_sex) AS sex,") \
		_T("		0 as t_thuoc, ") \
		_T("		e.hfe_cost AS total,") \
		_T("		hee_employee_id as empl_id") \
		_T("	FROM hms_exm_contract") \
		_T("	LEFT JOIN hms_exm_employee ") \
		_T("	ON(hec_contract_id = hee_contract_id)") \
		_T("	LEFT JOIN hms_workplace") \
		_T("	ON(hec_company_id = TO_CHAR(hwp_idx))") \
		_T("	LEFT JOIN hms_doc") \
		_T("	ON(hee_docno = hd_docno)") \
		_T("	LEFT JOIN hms_fee e") \
		_T("	ON(hd_docno = e.hfe_docno)") \
		_T("	LEFT JOIN hms_exm_servicepackage ON (hesp_contract_id=hec_contract_id and e.hfe_itemid=hesp_itemid)") \
		_T("	LEFT JOIN HMS_PACS_TEST_LINE_VIEW ON (hpc_docno = hd_docno AND hpcl_orderlineid = hfe_orderline)") \
		_T("	LEFT JOIN hms_fee_invoice i ON (i.hfe_docno = e.hfe_docno and i.hfe_invoiceno = e.hfe_invoiceno)") \
		_T("	WHERE hee_status = 'T' and SUBSTR(e.hfe_itemid, 0, 1) IN('B') %s") \
		_T("	) tbl") \
		_T(" ) main_tbl") \
		_T(" GROUP BY empl_id,") \
		_T("	hee_dept,") \
		_T("	hee_docno,") \
		_T("	pname,") \
		_T("	hee_birthdate, ") \
		_T("	sex") \
		_T(" ORDER BY empl_id,") \
		_T("	hee_dept,") \
		_T("	hee_docno,") \
		_T("	pname"), szSumField, szField, szWhere, szWhere2);
		/*
		//_T("	AND e.hfe_cost        > 0 and e.hfe_status = 'P' ") \
		//_T("	AND (( SUBSTR(e.hfe_itemid, 0, 1) IN('B', 'D') %s )  ") \
		//_T("		or (hfe_type='D' and hfe_status='P' and hfe_category <>'Y'  AND hec_contract_id IN(%s) ))" \
		*/
_fmsg(_T("%s"), szSQL);
	return szSQL;
}
CString CEMTaiChinhKhamSucKhoe_V2::GetQueryString1(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szCompanys;

	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		if (m_wndCompany.GetCheck(i))
		{
			m_wndCompany.SetCurSel(i);
			if (!szCompanys.IsEmpty())
				szCompanys += _T(",");
			szCompanys.AppendFormat(_T("'%s'"), m_wndCompany.GetItemText(i, 0));
		}
	}
	if(!szCompanys.IsEmpty())
		szWhere.AppendFormat(_T("AND hec_contract_id IN(%s)"), szCompanys);

	szSQL.Format(_T(" select distinct hfl_feeid||'_'||outint as hfl_feeid,hfl_name, outint,nIndex") \
_T(" FROM (") \
_T(" SELECT hfl_feeid,") \
_T(" 		   hfl_name,e.hfe_type,") \
_T("        case when e.hfe_type ='E' then 0 when  hesp_itemid is not null then 0 else 1 end as outint,") \
_T("        case when e.hfe_type='E' then 0 else 1 end as nIndex") \
_T(" 		 FROM hms_exm_contract ") \
_T(" 		 LEFT JOIN hms_exm_employee") \
_T(" 		 ON(hec_contract_id = hee_contract_id)") \
_T(" 		 LEFT JOIN hms_workplace") \
_T(" 		 ON(hec_company_id = TO_CHAR(hwp_idx))") \
_T(" 		 LEFT JOIN hms_doc") \
_T(" 		 ON(hee_docno = hd_docno)") \
_T(" 		 LEFT JOIN hms_fee e") \
_T(" 		 ON(hd_docno = e.hfe_docno)") \
_T(" 		 LEFT JOIN hms_fee_list") \
_T(" 		 ON(e.hfe_itemid                = hfl_feeid)") \
_T("      LEFT JOIN hms_exm_servicepackage ON ( hesp_contract_id= hec_contract_id and hfl_feeid= hesp_itemid)") \
_T(" 		 WHERE 1=1 %s") \
_T(" 		 AND e.hfe_cost                 > 0") \
_T(" 		 AND e.hfe_category <>'Y' and e.hfe_type <>'D' and e.hfe_status <>'C' ") \
_T("      order by e.hfe_type,hfl_feeid,hesp_itemid") \
_T("      ) tbl") \
_T("      order by outint,nIndex,hfl_feeid"), szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
void CEMTaiChinhKhamSucKhoe_V2::OnInitDataString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	m_szProductIDStr.Empty();
	m_szProductNameStr.Empty();
	while (!rs.IsEOF())
	{
		if (!m_szProductIDStr.IsEmpty())
			m_szProductIDStr += _T(",");
		m_szProductIDStr += rs.GetValue(_T("hfl_feeid"));
		if (!m_szProductNameStr.IsEmpty())
			m_szProductNameStr += _T(",");
		m_szProductNameStr += rs.GetValue(_T("hfl_name"));
		rs.MoveNext();
	}

}

int CEMTaiChinhKhamSucKhoe_V2::OnCompanySearchItem()
{
	int nSubSel = m_wndCompany.GetSubItemSel();
_tprintf(_T("\nSubSel: %d\n"), nSubSel);
	if (nSubSel < 0)
	{
		nSubSel = 0;
	}
	CHMSListSearchDialog dlg(&m_wndCompany, nSubSel);
	dlg.DoModal();
	return 0;
}

int CEMTaiChinhKhamSucKhoe_V2::OnCompanyCheckAll()
{
	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		m_wndCompany.SetCheck(i);
	}
	return 0;
}

int CEMTaiChinhKhamSucKhoe_V2::OnCompanyUncheckAll()
{
	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		m_wndCompany.SetCheck(i, FALSE);
	}
	return 0;
}

int CEMTaiChinhKhamSucKhoe_V2::OnResultLoadData()
{
	m_wndResult.DeleteAllItems();
	m_wndResult.AddItems(_T("1"), _T("Đã có kết quả"), NULL);
	m_wndResult.AddItems(_T("2"), _T("Chưa có kết quả"), NULL);
	return 0;
}

int CEMTaiChinhKhamSucKhoe_V2::OnStatusLoadData()
{
	m_wndStatus.DeleteAllItems();
	m_wndStatus.AddItems(_T("1"), _T("Chưa thanh toán"), NULL);
	m_wndStatus.AddItems(_T("2"), _T("Đã thanh toán, chưa khóa sổ"), NULL);
	m_wndStatus.AddItems(_T("3"), _T("Đã khóa sổ"), NULL);
	return 0;
}