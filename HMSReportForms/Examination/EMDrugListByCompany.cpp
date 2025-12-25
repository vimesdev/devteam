#include "stdafx.h"
#include "EMDrugListByCompany.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugListByCompany *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugListByCompany* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugListByCompany *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugListByCompany *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugListByCompany *)pWnd)->OnToDateCheckValue();
} 
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugListByCompany* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugListByCompany *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CEMDrugListByCompany *)pWnd)->OnSupplierAddNew();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugListByCompany *)pWnd)->OnItemLoadData();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMDrugListByCompany *pVw = (CEMDrugListByCompany *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMDrugListByCompany *pVw = (CEMDrugListByCompany *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddEMDrugListByCompanyFnc(CWnd *pWnd){
	 return ((CEMDrugListByCompany*)pWnd)->OnAddEMDrugListByCompany();
} 
static int _OnEditEMDrugListByCompanyFnc(CWnd *pWnd){
	 return ((CEMDrugListByCompany*)pWnd)->OnEditEMDrugListByCompany();
} 
static int _OnDeleteEMDrugListByCompanyFnc(CWnd *pWnd){
	 return ((CEMDrugListByCompany*)pWnd)->OnDeleteEMDrugListByCompany();
} 
static int _OnSaveEMDrugListByCompanyFnc(CWnd *pWnd){
	 return ((CEMDrugListByCompany*)pWnd)->OnSaveEMDrugListByCompany();
} 
static int _OnCancelEMDrugListByCompanyFnc(CWnd *pWnd){
	 return ((CEMDrugListByCompany*)pWnd)->OnCancelEMDrugListByCompany();
} 
CEMDrugListByCompany::CEMDrugListByCompany(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMDrugListByCompany::~CEMDrugListByCompany(){
}
void CEMDrugListByCompany::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 410, 295);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 210, 30, 290, 55);
	m_wndReportPeriod.Create(this,295, 30, 405, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 210, 60, 290, 85);
	m_wndToDate.Create(this,295, 60, 405, 85); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 90, 90, 115);
	m_wndSupplier.Create(this,95, 90, 405, 115); 
	m_wndExport.Create(this, _T("&Export"), 330, 300, 410, 325);
	m_wndItem.Create(this,10, 120, 405, 290); 
	m_wndItem.SetCheckBox(true);

}
void CEMDrugListByCompany::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(35);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndItem.InsertColumn(0, _T("STT"), CFMT_TEXT, 40);
	m_wndItem.InsertColumn(1, _T(""), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(2, _T("Code"), CFMT_TEXT, 80);
	m_wndItem.InsertColumn(3, _T("Name"), CFMT_TEXT, 250);

}
void CEMDrugListByCompany::OnSetWindowEvents(){
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
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	OnItemLoadData();

}
void CEMDrugListByCompany::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);

}
void CEMDrugListByCompany::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMDrugListByCompany::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMDrugListByCompany::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSupplierKey.Empty();

}
int CEMDrugListByCompany::SetMode(int nMode){
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
/*void CEMDrugListByCompany::OnYearChange(){
	
} */
/*void CEMDrugListByCompany::OnYearSetfocus(){
	
} */
/*void CEMDrugListByCompany::OnYearKillfocus(){
	
} */
int CEMDrugListByCompany::OnYearCheckValue(){
	return 0;
} 
void CEMDrugListByCompany::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDrugListByCompany::OnReportPeriodSelendok(){
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
/*void CEMDrugListByCompany::OnReportPeriodSetfocus(){
	
}*/
/*void CEMDrugListByCompany::OnReportPeriodKillfocus(){
	
}*/
long CEMDrugListByCompany::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
/*void CEMDrugListByCompany::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMDrugListByCompany::OnFromDateChange(){
	
} */
/*void CEMDrugListByCompany::OnFromDateSetfocus(){
	
} */
/*void CEMDrugListByCompany::OnFromDateKillfocus(){
	
} */
int CEMDrugListByCompany::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMDrugListByCompany::OnToDateChange(){
	
} */
/*void CEMDrugListByCompany::OnToDateSetfocus(){
	
} */
/*void CEMDrugListByCompany::OnToDateKillfocus(){
	
} */
int CEMDrugListByCompany::OnToDateCheckValue(){
	return 0;
} 
void CEMDrugListByCompany::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDrugListByCompany::OnSupplierSelendok(){
	 
}
/*void CEMDrugListByCompany::OnSupplierSetfocus(){
	
}*/
/*void CEMDrugListByCompany::OnSupplierKillfocus(){
	
}*/
long CEMDrugListByCompany::OnSupplierLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
		szWhere.Format(_T(" and adp_partner_id='%s' "), m_szSupplierKey);
	}
	m_wndSupplier.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adp_partner_id as id, adp_name as name FROM ad_partner WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSupplier.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

long CEMDrugListByCompany::OnItemLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T("SELECT mp_product_id product_id, mp_name product_name, mp_code product_code FROM m_product WHERE mp_isactive = 'Y'"));
	rs.ExecSQL(szSQL);
	m_wndItem.BeginLoad();
	while (!rs.IsEOF())
	{
		m_wndItem.AddItems(
			int2str(nIdx++),
			rs.GetValue(_T("product_id")),
			rs.GetValue(_T("product_code")),
			rs.GetValue(_T("product_name")),
			NULL);
		rs.MoveNext();
	}
	m_wndItem.EndLoad();
	return nCount;
}


/*void CEMDrugListByCompany::OnSupplierAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMDrugListByCompany::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDrugListByCompany::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szOldLine, szNewLine, szSuppliers;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	double nTmp = 0;
	long double nTotalAmt = 0;	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 30);	xls.SetColumnWidth(2, 10);	xls.SetColumnWidth(3, 12);	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 10);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);	xls.SetCellText(0, 2, _T("THU\x1ED0\x43 \x43\x1EE6\x41 \x43\xC1\x43 \x43\xD4NG TY"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 5, _T("T\xEAn thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 5, _T("Gi\xE1 g\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 3);	xls.SetMerge(3, 3, 0, 3);	xls.SetMerge(4, 4, 0, 3);// 	for (int i = 0; i < m_wndSupplier.GetItemCount(); i++)
// 	{
// 		if (m_wndSupplier.GetCheck(i))
// 		{
// 			m_wndSupplier.SetCurSel(i);
// 			if (!szSuppliers.IsEmpty())
// 				szSuppliers += _T(", ");
// 			szSuppliers += m_wndSupplier.GetCurrent(1);
// 		}
// 	}
	szSuppliers += m_wndSupplier.GetCurrent(1);
	if (!szSuppliers.IsEmpty())
		{
			tmpStr.Format(_T("\x43\xF4ng ty: %s"), szSuppliers);
			xls.SetCellText(0, 4, tmpStr, FMT_TEXT, true, 11);		}	else		xls.SetCellText(0, 4, _T("\x43\xF4ng ty: To\xE0n \x62\x1ED9"), FMT_TEXT, true, 11);	nRow = 6;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("partner_name"), szNewLine);
		if (szNewLine != szOldLine)
		{
			if (nTotalAmt > 0)
			{
				xls.SetCellMergedColumns(nCol, nRow, 3);
				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER, true);
				tmpStr.Format(_T("%.2f"), nTotalAmt);
				xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1| FMT_RIGHT, true);
				nTotalAmt = 0;
				nRow++;
			}
			xls.SetCellMergedColumns(nCol, nRow, 4);
			xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT, true);
			szOldLine = szNewLine;
			nIdx = 1;
			nRow++;
		}		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);		rs.GetValue(_T("product_name"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("product_qty"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT);		rs.GetValue(_T("unit_price"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1 | FMT_RIGHT);		rs.GetValue(_T("total_amount"), nTmp);		nTotalAmt += nTmp;		nRow++;		rs.MoveNext();	}	if (nTotalAmt > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 3);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_CENTER, true);
		tmpStr.Format(_T("%.2f"), nTotalAmt);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_NUMBER1| FMT_RIGHT, true);
	}	EndWaitCursor();	xls.Save(_T("Exports\\Thong ke thuoc cua cac cong ty.xls"));
} 
int CEMDrugListByCompany::OnAddEMDrugListByCompany(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMDrugListByCompany::OnEditEMDrugListByCompany(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMDrugListByCompany::OnDeleteEMDrugListByCompany(){
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
 		OnCancelEMDrugListByCompany();
 	}
	return 0;
}
int CEMDrugListByCompany::OnSaveEMDrugListByCompany(){
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
 		//OnEMDrugListByCompanyListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMDrugListByCompany::OnCancelEMDrugListByCompany(){
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
int CEMDrugListByCompany::OnEMDrugListByCompanyListLoadData(){
	return 0;
}
CString CEMDrugListByCompany::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szSuppliers, szItemIDs;
	szWhere.AppendFormat(_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
						 _T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

// 	for (int i = 0; i < m_wndSupplier.GetItemCount(); i++)
// 	{
// 		if (m_wndSupplier.GetCheck(i))
// 		{
// 			m_wndSupplier.SetCurSel(i);
// 			if (!szSuppliers.IsEmpty())
// 				szSuppliers += _T("', '");
// 			szSuppliers += m_wndSupplier.GetCurrent(0);
// 		}
// 	}
// 	if (!szSuppliers.IsEmpty())
// 		szWhere.AppendFormat(_T(" AND po_partner_id IN ('%s')"), szSuppliers);

	for (int i = 0; i < m_wndItem.GetItemCount(); i++)
 	{
 		if (m_wndItem.GetCheck(i))
		{
 			if (!szItemIDs.IsEmpty())
 				szItemIDs += _T("', '");
			szItemIDs += m_wndItem.GetItemText(i, 1);
 		}
 	}
	if (!szItemIDs.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpol_product_id IN ('%s')"), szItemIDs);
	if (!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_bpartnerid IN ('%s')"), m_szSupplierKey);

	szSQL.Format(_T(" SELECT ") \
		_T("	get_partnername(product_bpartnerid) AS partner_name,") \
		_T("	product_name AS product_name,") \
		_T("	product_uomname AS product_uom,") \
		_T("	hpol_qtyorder AS product_qty,") \
		_T("	hpol_unitprice AS unit_price,") \
		_T("	hpol_qtyorder * hpol_unitprice AS total_amount") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id = product_item_id)") \
		_T(" WHERE product_org_id = 'PM' AND hpo_orderstatus = 'A' AND hpo_payment = 'P' %s") \
		_T(" ORDER BY product_bpartnerid, product_name"), szWhere);
	return szSQL;
}
