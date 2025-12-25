#include "stdafx.h"
#include "BBOtherExportList.h"
#include "HMSMainFrame.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CBBOtherExportList *)pWnd)->OnYearCheckValue();
} 
static void _OnPeriodReportSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBBOtherExportList* )pWnd)->OnPeriodReportSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodReportSelendokFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnPeriodReportSelendok();
}
/*static void _OnPeriodReportSetfocusFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnPeriodReportKillfocus();
}*/
/*static void _OnPeriodReportKillfocusFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnPeriodReportKillfocus();
}*/
static long _OnPeriodReportLoadDataFnc(CWnd *pWnd){
	return ((CBBOtherExportList *)pWnd)->OnPeriodReportLoadData();
}
/*static void _OnPeriodReportAddNewFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnPeriodReportAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBBOtherExportList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBBOtherExportList *)pWnd)->OnToDateCheckValue();
} 
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBBOtherExportList* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CBBOtherExportList *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CBBOtherExportList *)pWnd)->OnInvoiceTypeAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBBOtherExportList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBBOtherExportList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBBOtherExportList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBBOtherExportList*)pWnd)->OnListDeleteItem();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CBBOtherExportList*)pWnd)->OnListCheckAll();
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	return ((CBBOtherExportList*)pWnd)->OnListUncheckAll();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CBBOtherExportList *pVw = (CBBOtherExportList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddBBOtherExportListFnc(CWnd *pWnd){
	 return ((CBBOtherExportList*)pWnd)->OnAddBBOtherExportList();
} 
static int _OnEditBBOtherExportListFnc(CWnd *pWnd){
	 return ((CBBOtherExportList*)pWnd)->OnEditBBOtherExportList();
} 
static int _OnDeleteBBOtherExportListFnc(CWnd *pWnd){
	 return ((CBBOtherExportList*)pWnd)->OnDeleteBBOtherExportList();
} 
static int _OnSaveBBOtherExportListFnc(CWnd *pWnd){
	 return ((CBBOtherExportList*)pWnd)->OnSaveBBOtherExportList();
} 
static int _OnCancelBBOtherExportListFnc(CWnd *pWnd){
	 return ((CBBOtherExportList*)pWnd)->OnCancelBBOtherExportList();
} 
CBBOtherExportList::CBBOtherExportList(CWnd *pWnd){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBBOtherExportList::~CBBOtherExportList(){
}
void CBBOtherExportList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 435, 455);
	m_wndYearLabel.Create(this, _T("Year"), 11, 30, 91, 55);
	m_wndYear.Create(this,96, 30, 216, 55); 
	m_wndPeriodReportLabel.Create(this, _T("Period Report"), 221, 30, 301, 55);
	m_wndPeriodReport.Create(this,306, 30, 426, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 60, 91, 85);
	m_wndFromDate.Create(this,96, 60, 216, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 221, 60, 301, 85);
	m_wndToDate.Create(this,306, 60, 426, 85); 
	m_wndInvoiceTypeLabel.Create(this, _T("Invoice Type"), 10, 90, 90, 115);
	m_wndInvoiceType.SetCheckBox(true);
	m_wndInvoiceType.Create(this,95, 90, 425, 115); 
	m_wndList.Create(this,10, 120, 425, 450);
	m_wndList.SetCheckBox(true);
	m_wndExport.Create(this, _T("&Export"), 345, 460, 425, 485);

}
void CBBOtherExportList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	//m_wndYear.SetCheckValue(true);
	m_wndPeriodReport.SetCheckValue(true);
	//m_wndPeriodReport.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndInvoiceType.SetCheckValue(true);
	//m_wndInvoiceType.LimitText(1024);

	m_wndPeriodReport.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPeriodReport.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndInvoiceType.InsertColumn(0, _T("ID"), CFMT_TEXT | FMT_RIGHT, 150);
	m_wndInvoiceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT | FMT_RIGHT, 100);
	m_wndList.InsertColumn(1, _T("\x43h\x1EBF Ph\x1EA9m"), CFMT_TEXT, 350);
}
void CBBOtherExportList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndPeriodReport.SetEvent(WE_SELENDOK, _OnPeriodReportSelendokFnc);
	//m_wndPeriodReport.SetEvent(WE_SETFOCUS, _OnPeriodReportSetfocusFnc);
	//m_wndPeriodReport.SetEvent(WE_KILLFOCUS, _OnPeriodReportKillfocusFnc);
	m_wndPeriodReport.SetEvent(WE_SELCHANGE, _OnPeriodReportSelectChangeFnc);
	m_wndPeriodReport.SetEvent(WE_LOADDATA, _OnPeriodReportLoadDataFnc);
	//m_wndPeriodReport.SetEvent(WE_ADDNEW, _OnPeriodReportAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndInvoiceType.SetEvent(WE_SELENDOK, _OnInvoiceTypeSelendokFnc);
	//m_wndInvoiceType.SetEvent(WE_SETFOCUS, _OnInvoiceTypeSetfocusFnc);
	//m_wndInvoiceType.SetEvent(WE_KILLFOCUS, _OnInvoiceTypeKillfocusFnc);
	m_wndInvoiceType.SetEvent(WE_SELCHANGE, _OnInvoiceTypeSelectChangeFnc);
	m_wndInvoiceType.SetEvent(WE_LOADDATA, _OnInvoiceTypeLoadDataFnc);
	//m_wndInvoiceType.SetEvent(WE_ADDNEW, _OnInvoiceTypeAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUncheckAllFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szPeriodReportKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	OnListLoadData();

}
void CBBOtherExportList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndPeriodReport.GetDlgCtrlID(), m_szPeriodReportKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);

}
void CBBOtherExportList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBBOtherExportList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CBBOtherExportList::SetDefaultValues(){

	m_nYear=0;
	m_szPeriodReportKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szInvoiceTypeKey.Empty();

}
int CBBOtherExportList::SetMode(int nMode){
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
/*void CBBOtherExportList::OnYearChange(){
	
} */
/*void CBBOtherExportList::OnYearSetfocus(){
	
} */
/*void CBBOtherExportList::OnYearKillfocus(){
	
} */
int CBBOtherExportList::OnYearCheckValue(){
	return 0;
} 
void CBBOtherExportList::OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBBOtherExportList::OnPeriodReportSelendok(){
	CString tmpStr;
	CDate date;
	UpdateData(true);
	int nMonth = ToInt(m_szPeriodReportKey);
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
/*void CBBOtherExportList::OnPeriodReportSetfocus(){
	
}*/
/*void CBBOtherExportList::OnPeriodReportKillfocus(){
	
}*/
long CBBOtherExportList::OnPeriodReportLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPeriodReport.IsSearchKey() && ToInt(m_szPeriodReportKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szPeriodReportKey));
	};
	m_wndPeriodReport.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriodReport.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBBOtherExportList::OnPeriodReportAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CBBOtherExportList::OnFromDateChange(){
	
} */
/*void CBBOtherExportList::OnFromDateSetfocus(){
	
} */
/*void CBBOtherExportList::OnFromDateKillfocus(){
	
} */
int CBBOtherExportList::OnFromDateCheckValue(){
	return 0;
} 
/*void CBBOtherExportList::OnToDateChange(){
	
} */
/*void CBBOtherExportList::OnToDateSetfocus(){
	
} */
/*void CBBOtherExportList::OnToDateKillfocus(){
	
} */
int CBBOtherExportList::OnToDateCheckValue(){
	return 0;
} 
void CBBOtherExportList::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBBOtherExportList::OnInvoiceTypeSelendok(){
	 
}
/*void CBBOtherExportList::OnInvoiceTypeSetfocus(){
	
}*/
/*void CBBOtherExportList::OnInvoiceTypeKillfocus(){
	
}*/
long CBBOtherExportList::OnInvoiceTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInvoiceType.IsSearchKey() && !m_szInvoiceTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and addt_doctype_id='%s' "), m_szInvoiceTypeKey);
};
	m_wndInvoiceType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT addt_doctype_id AS id, addt_name AS name FROM ad_doctype WHERE addt_isactive = 'Y'") \
		_T(" AND addt_doctype_id IN('DOO','LOO','EOO','BOO','SLO','EXO','EXP','EOH','EX1','EX2') %s") \
		_T(" ORDER BY addt_line, addt_doctype_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceType.AddItems(
		rs.GetValue(_T("id")), 
		rs.GetValue(_T("name")),
		NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBBOtherExportList::OnInvoiceTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
int CBBOtherExportList::OnListCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;	
}

int CBBOtherExportList::OnListUncheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;	
}
void CBBOtherExportList::OnListDblClick(){
	
} 
void CBBOtherExportList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CBBOtherExportList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBBOtherExportList::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select mp_product_id id ,mp_name name from m_product where mp_org_id='BB' Order by mp_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBBOtherExportList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szNewType, szOldType;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 4);	xls.SetColumnWidth(1, 6);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 6);	xls.SetColumnWidth(4, 4);	xls.SetColumnWidth(5, 10);	xls.SetColumnWidth(6, 20);	xls.SetColumnWidth(7, 6);	xls.SetColumnWidth(8, 22);	xls.SetColumnWidth(9, 4);	xls.SetColumnWidth(10, 4);	xls.SetColumnWidth(11, 8);	xls.SetColumnWidth(12, 15);	xls.SetColumnWidth(13, 15);	xls.SetColumnWidth(14, 10);	xls.SetColumnWidth(15, 10);	xls.SetColumnWidth(16, 6);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O TH\x45O \x44\xD5I \x58U\x1EA4T KH\xC1\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("M\xE3 t\xFAi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("T\xEAn ng\x1B0\x1EDDi \x63ho"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("S\x1ED1 \x58N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Nh\xF3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("Ng\xE0y l\x1EA5y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("S\x1ED1 \x64\xE2y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("T\xEAn \x63h\x1EBF ph\x1EA9m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("\x110V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 4, _T("G\x1EEDi \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 4, _T("\x44i\x1EC5n gi\x1EA3i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(14, 4, _T("S\x1ED1 phi\x1EBFu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(15, 4, _T("Ng\xE0y l\x1EADp phi\x1EBFu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(16, 4, _T("Ng\x1B0\x1EDDi ph\xE1t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 16);	xls.SetMerge(3, 3, 0, 16);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("mt_doctype_desc"), szNewType);
		if (szNewType != szOldType && !szNewType.IsEmpty())
		{
			xls.SetCellMergedColumns(nCol, nRow, 10);
			xls.SetCellText(nCol, nRow, szNewType, FMT_TEXT, true);
			szOldType = szNewType;
			nIdx = 1;
			nRow++;
		}		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);		rs.GetValue(_T("package_id"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("donorname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("testid"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("bloodtype"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("blooddate"), tmpStr);		xls.SetCellText(nCol+5, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("bloodaddress"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("tubenumber"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("product_name"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("product_uomname"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("product_qtyorder"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("product_amount"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mt_deliveryto"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mt_description"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mt_orderno"), tmpStr);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mt_orderdate"), tmpStr);		xls.SetCellText(nCol+15, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("approveby"), tmpStr);		tmpStr = GetNameUser(tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\BCtheodoimauxuatkhac.xls"));
} 
int CBBOtherExportList::OnAddBBOtherExportList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBBOtherExportList::OnEditBBOtherExportList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBBOtherExportList::OnDeleteBBOtherExportList(){
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
 		OnCancelBBOtherExportList();
 	}
	return 0;
}
int CBBOtherExportList::OnSaveBBOtherExportList(){
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
 		//OnBBOtherExportListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBBOtherExportList::OnCancelBBOtherExportList(){
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
int CBBOtherExportList::OnBBOtherExportListListLoadData(){
	return 0;
}
CString CBBOtherExportList::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szList, szInvoiceTypes;

	for (int i = 0; i < m_wndInvoiceType.GetItemCount(); i++)
	{
		if (m_wndInvoiceType.GetCheck(i))
		{
			m_wndInvoiceType.SetCurSel(i);
			if (!szInvoiceTypes.IsEmpty())
			{
				szInvoiceTypes += _T(", ");
			}
			szInvoiceTypes.AppendFormat(_T("'%s'"), m_wndInvoiceType.GetCurrent(0));
		}
	}
	if (!szInvoiceTypes.IsEmpty())
		szWhere.AppendFormat(_T(" AND mt_doctype IN(%s)"), szInvoiceTypes);

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szList.IsEmpty())
			{
				szList += _T(", ");
			}
			szList.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	if (!szList.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_id IN(%s)"), szList);

	szSQL.Format(_T(" SELECT ") \
		_T("   mbd_package_id         AS package_id,") \
		_T("   mbd_donor_name              AS donorname,") \
		_T("   mbd_test_id                 AS testid,") \
		_T("   mbd_blood_type              AS bloodtype,") \
		_T("   mbd_date                    AS blooddate,") \
		_T("   (SELECT i.mbd_address FROM m_blood_donor i WHERE i.mbd_id = mbd_donor_id") \
		_T("   )                          AS bloodaddress,") \
		_T("   mbd_tube_number            AS tubenumber,") \
		_T("   mt_transaction_id,") \
		_T("   mt_orderno,") \
		_T("   mt_orderdate,") \
		_T("   mt_doctype,") \
		_T("   GET_DOCTYPE(mt_doctype) AS mt_doctype_desc,") \
		_T("   product_code,") \
		_T("   product_name,") \
		_T("   product_uomname,") \
		_T("   mtl_qtyorder AS product_qtyorder,") \
		_T("   product_taxprice,") \
		_T("   mtl_qtyorder*product_taxprice AS product_amount,") \
		_T("   product_lotno,") \
		_T("   Get_PartnerName(mt_partner_id) AS mt_deliveryto,") \
		_T("   mt_description,") \
		_T("   UPPER(get_username(mt_approvedby)) AS approveby") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON(mt_transaction_id = mtl_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(product_item_id =mtl_product_item_id)") \
		_T(" LEFT JOIN m_blood_donation") \
		_T(" ON(mbd_product_item_id = mtl_product_item_id)") \
		_T(" WHERE mt_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND mt_org_id     IN('GL','BB')") \
		_T(" AND mt_status      = 'A'") \
		_T(" AND mt_storage_id IN ('20') %s") \
		_T(" ORDER BY mt_doctype,") \
		_T("   mt_orderdate,") \
		_T("   mbd_package_id"), m_szFromDate, m_szToDate, szWhere);

	return szSQL;
}
CString CBBOtherExportList::GetNameUser(CString UserName, CString LastName ){
	CString szValue,tmpStr;
	int nIndex=0;
	bool flag= true;
	CString szFind;
	szFind=_T(" ");
	if(UserName.GetLength() >0)
	{
		for(int i=1;i < UserName.GetLength();i++)
		{	
			tmpStr=UserName.Right(i);
			if(tmpStr.Find(szFind) == 1 && flag== true && i>2)
			{
				nIndex=i;
				flag=false;	
			}
		}
	}
	if(nIndex >0)
	{
		szValue=UserName.Right(nIndex-1);
	}
	return szValue;
}