#include "stdafx.h"
#include "EMDrugUsageDesc.h"
#include "HMSMainFrame.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugUsageDesc *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugUsageDesc* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugUsageDesc *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugUsageDesc *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDrugUsageDesc *)pWnd)->OnToDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugUsageDesc* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugUsageDesc *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnDoctorAddNew();
}*/
static void _OnPTTYCSelendokFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnPTTYCSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMDrugUsageDesc *pVw = (CEMDrugUsageDesc *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDrugUsageDesc* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CEMDrugUsageDesc *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CEMDrugUsageDesc *)pWnd)->OnItemAddNew();
}*/
CEMDrugUsageDesc::CEMDrugUsageDesc(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMDrugUsageDesc::~CEMDrugUsageDesc(){
}
void CEMDrugUsageDesc::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 215, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 410, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 410, 85); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 90, 90, 115);
	m_wndDoctor.Create(this,95, 90, 410, 115); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 120, 90, 145);
	m_wndItem.Create(this,95, 120, 410, 145); 
	m_wndPTTYC.Create(this, _T("Nhóm PK PTTYC"), 10, 155, 140, 180);
	m_wndExport.Create(this, _T("&Export"), 335, 155, 415, 180);

}
void CEMDrugUsageDesc::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);

	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(1, _T("Code"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(2, _T("Name"), CFMT_TEXT, 150);
	m_wndItem.Format(3, 2);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}

void CEMDrugUsageDesc::OnSetWindowEvents(){
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
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndPTTYC.SetEvent(WE_CLICK, _OnPTTYCSelendokFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), str2int(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CEMDrugUsageDesc::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_Check(pDX, m_wndPTTYC.GetDlgCtrlID(), m_bPTTYC);

}
void CEMDrugUsageDesc::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szItemKey.Empty();
	m_szDoctorKey.Empty();
	m_bPTTYC = FALSE;

}

int CEMDrugUsageDesc::SetMode(int nMode){
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

/*void CEMDrugUsageDesc::OnYearChange(){
	
} */
/*void CEMDrugUsageDesc::OnYearSetfocus(){
	
} */
/*void CEMDrugUsageDesc::OnYearKillfocus(){
	
} */
int CEMDrugUsageDesc::OnYearCheckValue(){
	return 0;
}
 
void CEMDrugUsageDesc::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CEMDrugUsageDesc::OnReportPeriodSelendok(){
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

/*void CEMDrugUsageDesc::OnReportPeriodSetfocus(){
	
}*/
/*void CEMDrugUsageDesc::OnReportPeriodKillfocus(){
	
}*/
long CEMDrugUsageDesc::OnReportPeriodLoadData()
{
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

/*void CEMDrugUsageDesc::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMDrugUsageDesc::OnFromDateChange(){
	
} */
/*void CEMDrugUsageDesc::OnFromDateSetfocus(){
	
} */
/*void CEMDrugUsageDesc::OnFromDateKillfocus(){
	
} */
int CEMDrugUsageDesc::OnFromDateCheckValue(){
	return 0;
}
 
/*void CEMDrugUsageDesc::OnToDateChange(){
	
} */
/*void CEMDrugUsageDesc::OnToDateSetfocus(){
	
} */
/*void CEMDrugUsageDesc::OnToDateKillfocus(){
	
} */
int CEMDrugUsageDesc::OnToDateCheckValue(){
	return 0;
}
 
void CEMDrugUsageDesc::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CEMDrugUsageDesc::OnDoctorSelendok(){
	 
}

/*void CEMDrugUsageDesc::OnDoctorSetfocus(){
	
}*/
/*void CEMDrugUsageDesc::OnDoctorKillfocus(){
	
}*/
long CEMDrugUsageDesc::OnDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szDoctorKey);
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE 1=1 AND su_groupid = 'D' AND su_deptid = '%s' %s ORDER BY id "), pMF->GetCurrentDepartmentID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CEMDrugUsageDesc::OnDoctorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CEMDrugUsageDesc::OnPTTYCSelect(){

}

void CEMDrugUsageDesc::OnExportSelect()
{
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	CString szOldLine, szNewLine;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	long double grpCost = 0;
	long double ttlCost = 0;
	double nTemp = 0, nTemp1=0, ntotal =0;
	double cost = 0 ;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\THONG_KE_THUOC_SU_DUNG_NHIEU.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("product_id"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			if(grpCost > 0)
			{				
				TranslateString(_T("Total Group"), tmpStr);
				xls.SetCellMergedColumns(nCol, nRow, 2);
				xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
				xls.SetCellText(nCol + 3, nRow, double2str(grpCost), FMT_NUMBER1, true, 11);
				ttlCost += grpCost;
				nIdx=1;
				grpCost = 0;
				nRow++;
			}

			szOldLine = szNewLine;
			
		}

		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("thuoc"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		

		rs.GetValue(_T("so_luong"), cost);
		grpCost += cost;
		xls.SetCellText(nCol + 3, nRow, double2str(cost), FMT_NUMBER1);


		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		
		nRow++;
		rs.MoveNext();
	}

	ttlCost += grpCost;
	if(grpCost > 0)
	{
		CString szAmount;		
		TranslateString(_T("Total Groups"), szAmount);
		xls.SetCellMergedColumns(nCol, nRow, 2);
		xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
		xls.SetCellText(nCol + 3, nRow, double2str(grpCost), FMT_NUMBER1, true, 11);
		nRow++;
	}
	if(ttlCost > 0)
	{
		CString szField, szAmount;
		TranslateString(_T("Tổng"), szAmount);
		xls.SetCellMergedColumns(nCol, nRow, 2);
		xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
		xls.SetCellText(nCol + 3, nRow, double2str(ttlCost), FMT_NUMBER1, true, 11);
		nRow += 2;
	}
	
	xls.Save(_T("Exports\\THONG_KE_THUOC_SU_DUNG_NHIEU2.xls"));
}
 
void CEMDrugUsageDesc::OnItemSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDrugUsageDesc::OnItemSelendok(){
	 
}
/*void CEMDrugUsageDesc::OnItemSetfocus(){
	
}*/
/*void CEMDrugUsageDesc::OnItemKillfocus(){
	
}*/
long CEMDrugUsageDesc::OnItemLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
		szWhere.Format(_T(" and mp_product_id='%s' "), m_szItemKey);
	}
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mp_product_id as id, mp_name as name, mp_code as code FROM m_product WHERE mp_isactive = 'Y' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("code")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMDrugUsageDesc::OnItemAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */


CString CEMDrugUsageDesc::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szUser;
	szWhere.Format(_T(" AND HPO_APPROVEDATE BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND hpo_deptid = '%s'"), m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID());
	szUser = pMF->GetCurrentUser();
	szUser.MakeLower();	
	if (!m_szDoctorKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_doctor = '%s'"), m_szDoctorKey);
	if (!m_szItemKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpol_product_id = '%s'"), m_szItemKey);
	if (m_bPTTYC == TRUE)
		szWhere.AppendFormat(_T(" AND hpo_roomid IN(33, 34, 35)"));
	else
		szWhere.AppendFormat(_T(" AND hpo_roomid NOT IN(33, 34, 35)"));
	
	szSQL.Format(_T("  SELECT product_id, thuoc, unit, so_luong, roomname, ") \
	_T(" SUM(so_luong) over (partition by product_id) as tong_so ") \
	_T(" FROM ( ") \
	_T(" SELECT product_id,") \
	_T("   product_name as thuoc,  product_purchase_uomname as unit,") \
	_T("   SUM(hpol_qtyissue) as so_luong,") \
	_T("   (select hrl_name from hms_roomlist where hrl_id=hpo_roomid and hrl_deptid=hpo_deptid) as roomname") \
	_T(" FROM hms_pharmaorder") \
	_T(" LEFT JOIN hms_pharmaorderline") \
	_T(" ON (hpo_orderid = hpol_orderid") \
	_T(" AND hpo_docno   = hpol_docno)") \
	_T(" LEFT JOIN m_productitem_view") \
	_T(" ON (hpol_product_item_id = product_item_id)") \
	_T(" WHERE hpol_qtyissue        > 0") \
	_T(" AND hpo_orderstatus='A' %s") \
	_T(" AND hpo_ordertype='P'") \
	_T(" GROUP BY product_id,  product_name,product_purchase_uomname, hpo_deptid, hpo_roomid   ") \
	_T(" ORDER BY product_id, product_name, so_luong desc,hpo_roomid )tbl") \
	_T(" ORDER BY tong_so desc, product_id, so_luong desc"), szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}