#include "rptAdmissionstatisticfordepartmentReportDialog.h"
#include "../MainFrm.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptAdmissionstatisticfordepartmentReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptAdmissionstatisticfordepartmentReportDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((rptAdmissionstatisticfordepartmentReportDialog *)pWnd)->OnStatusAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	rptAdmissionstatisticfordepartmentReportDialog *pVw = (rptAdmissionstatisticfordepartmentReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptAdmissionstatisticfordepartmentReportDialog *pVw = (rptAdmissionstatisticfordepartmentReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptAdmissionstatisticfordepartmentReportDialog *pVw = (rptAdmissionstatisticfordepartmentReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptAdmissionstatisticfordepartmentReportDialogFnc(CWnd *pWnd){
	 return ((rptAdmissionstatisticfordepartmentReportDialog*)pWnd)->OnAddrptAdmissionstatisticfordepartmentReportDialog();
} 
static int _OnEditrptAdmissionstatisticfordepartmentReportDialogFnc(CWnd *pWnd){
	 return ((rptAdmissionstatisticfordepartmentReportDialog*)pWnd)->OnEditrptAdmissionstatisticfordepartmentReportDialog();
} 
static int _OnDeleterptAdmissionstatisticfordepartmentReportDialogFnc(CWnd *pWnd){
	 return ((rptAdmissionstatisticfordepartmentReportDialog*)pWnd)->OnDeleterptAdmissionstatisticfordepartmentReportDialog();
} 
static int _OnSaverptAdmissionstatisticfordepartmentReportDialogFnc(CWnd *pWnd){
	 return ((rptAdmissionstatisticfordepartmentReportDialog*)pWnd)->OnSaverptAdmissionstatisticfordepartmentReportDialog();
} 
static int _OnCancelrptAdmissionstatisticfordepartmentReportDialogFnc(CWnd *pWnd){
	 return ((rptAdmissionstatisticfordepartmentReportDialog*)pWnd)->OnCancelrptAdmissionstatisticfordepartmentReportDialog();
} 
rptAdmissionstatisticfordepartmentReportDialog::rptAdmissionstatisticfordepartmentReportDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 370;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_bPreview = true;
}
rptAdmissionstatisticfordepartmentReportDialog::~rptAdmissionstatisticfordepartmentReportDialog(){
}
void rptAdmissionstatisticfordepartmentReportDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 360, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 180, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 185, 30, 265, 55);
	m_wndReportPeriod.Create(this,270, 30, 355, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 180, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 60, 265, 85);
	m_wndToDate.Create(this,270, 60, 355, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 90, 90, 115);
	m_wndStatus.Create(this,95, 90, 355, 115); 
	m_wndPrint.Create(this, _T("&Print"), 125, 125, 200, 150);
	m_wndExport.Create(this, _T("&Export"), 205, 125, 280, 150);
	m_wndClose.Create(this, _T("&Close"), 285, 125, 360, 150);

}
void rptAdmissionstatisticfordepartmentReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void rptAdmissionstatisticfordepartmentReportDialog::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
//	m_szReportPeriodKey = _T("");
	SetMode(VM_EDIT);

}
void rptAdmissionstatisticfordepartmentReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void rptAdmissionstatisticfordepartmentReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptAdmissionstatisticfordepartmentReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptAdmissionstatisticfordepartmentReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();

}
int rptAdmissionstatisticfordepartmentReportDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
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
/*void rptAdmissionstatisticfordepartmentReportDialog::OnYearChange(){
	
} */
/*void rptAdmissionstatisticfordepartmentReportDialog::OnYearSetfocus(){
	
} */
/*void rptAdmissionstatisticfordepartmentReportDialog::OnYearKillfocus(){
	
} */
int rptAdmissionstatisticfordepartmentReportDialog::OnYearCheckValue(){
	return 0;
} 
void rptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodSelendok(){
	 CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), m_nYear, dte.GetMonthLastDay());
	}

	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	UpdateData(false);
}
/*void rptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void rptAdmissionstatisticfordepartmentReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptAdmissionstatisticfordepartmentReportDialog::OnFromDateChange(){
	
} */
/*void rptAdmissionstatisticfordepartmentReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptAdmissionstatisticfordepartmentReportDialog::OnFromDateKillfocus(){
	
} */
int rptAdmissionstatisticfordepartmentReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptAdmissionstatisticfordepartmentReportDialog::OnToDateChange(){
	
} */
/*void rptAdmissionstatisticfordepartmentReportDialog::OnToDateSetfocus(){
	
} */
/*void rptAdmissionstatisticfordepartmentReportDialog::OnToDateKillfocus(){
	
} */
int rptAdmissionstatisticfordepartmentReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptAdmissionstatisticfordepartmentReportDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptAdmissionstatisticfordepartmentReportDialog::OnStatusSelendok(){
	 
}
/*void rptAdmissionstatisticfordepartmentReportDialog::OnStatusSetfocus(){
	
}*/
/*void rptAdmissionstatisticfordepartmentReportDialog::OnStatusKillfocus(){
	
}*/
long rptAdmissionstatisticfordepartmentReportDialog::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szLabel;
	m_wndStatus.DeleteAllItems(); 
	TranslateString(_T("Waiting for admission"), szLabel);
	m_wndStatus.AddItems(_T("1"), szLabel, NULL);
	TranslateString(_T("Inpatient"), szLabel);
	m_wndStatus.AddItems(_T("2"), szLabel, NULL);  

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void rptAdmissionstatisticfordepartmentReportDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptAdmissionstatisticfordepartmentReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere, szAmount;
	CString szDate, szSysDate;	
	CReport rpt; 
	szSysDate = pMF->GetSysDate(); 	
	if(m_szStatusKey == _T("1")){
		szWhere.Format(_T(" and hcr_status not in('I','T') "));
	}
	else if(m_szStatusKey == _T("2"))
		szWhere.Format(_T(" and hcr_status in('I','T') "));

	szSQL.Format(_T(" SELECT (select sd_name from sys_dept where sd_id=admitdept) as admitdept, ") \
				_T("sum(c1) as c1, ") \
				_T("sum(c2) as c2, ") \
				_T("sum(c3) as c3, ") \
				_T("sum(c4) as c4,") \
				_T("sum(c5) as c5, ") \
				_T("sum(c6) as c6, ") \
				_T("sum(c7) as c7, ") \
				_T("sum(c8) as c8,") \
				_T("sum(c9) as c9, ") \
				_T("sum(c1+c2+c3+c4+c5+c6+c7+c8+c9) as c10") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT hd_indept as admitdept,") \
				_T(" case when hd_object='1' then 1 else 0 end as c1,") \
				_T(" case when hd_object='2' then 1 else 0 end as c2,") \
				_T(" case when hd_object='3' then 1 else 0 end as c3,") \
				_T(" case when hd_object='4' then 1 else 0 end as c4,") \
				_T(" case when hd_object='5' then 1 else 0 end as c5,") \
				_T(" case when hd_object='6' then 1 else 0 end as c6,") \
				_T(" case when hd_object='7' then 1 else 0 end as c7,") \
				_T(" case when hd_object='8' then 1 else 0 end as c8,") \
				_T(" case when hd_object='9' then 1 else 0 end as c9 ") \
				_T(" FROM hms_doc ") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" WHERE hd_status='T' and hd_suggestion='A' and length(hd_indept)>0") \
				_T(" AND (hd_enddate) BETWEEN ('%s') AND ('%s') ") \
				_T(" %s ") \
				_T(" ) as admittbl") \
				_T(" GROUP BY admitdept") \
				_T(" ORDER BY admitdept"), m_szFromDate, m_szToDate, szWhere);	
	rs.ExecSQL(szSQL);
		_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0,7);
	xls.SetColumnWidth(1,30);
	xls.SetColumnWidth(2,11);
	xls.SetColumnWidth(3,11);
	xls.SetColumnWidth(4,11);
	xls.SetColumnWidth(5,11);
	
	xls.SetCellMergedColumns(0,0,2);
	xls.SetCellMergedColumns(0,1,2);

	szSQL.Format(_T(" select sc_pname as pname,(sc_name) as namehospital") \
		_T(" from sys_company"));
	rs1.ExecSQL(szSQL);
	rs1.GetValue(_T("pname"), tmpStr);
	xls.SetCellText(0, 0, tmpStr,FMT_CENTER,true,11,0);
	rs1.GetValue(_T("namehospital"), tmpStr);
	xls.SetCellText(0, 1, tmpStr,FMT_CENTER,true,11,0);

//	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
//	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.SetCellMergedColumns(0,3,6);	
	xls.SetCellText(0, 3, _T("TH\x1ED0NG K\xCA \x42\x1EC6NH NH\xC2N V\xC0O VI\x1EC6N TH\x45O KHO\x41"),FMT_CENTER,true,16,0);
	xls.SetCellMergedColumns(0,4,6);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 4, tmpStr,FMT_CENTER,true,12,0);

	int nRow = 6;
	xls.SetCellText(0, nRow, _T("STT"), FMT_CENTER,true);	

	TranslateString(_T("Kho\x61"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_CENTER,true);

	TranslateString(_T("\x42\x1EA3o hi\x1EC3m"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_CENTER,true);	

	TranslateString(_T("Tr\x1EBB \x65m"), tmpStr);
	xls.SetCellText(3,nRow,tmpStr,FMT_CENTER,true);

	TranslateString(_T("\x44\x1ECB\x63h v\x1EE5"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_CENTER,true);	


	TranslateString(_T("T\x1ED5ng"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_CENTER,true);	
	
	int nIndex = 1;
	int i=0,nTotal[5];
	for (i=0;i<=5;i++)
	{
		nTotal[i]=0;
	}
	
	while(!rs.IsEOF())
	{
		nRow++;		
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("admitdept"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c1"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c2"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("c9"), tmpStr);
		nTotal[4] += ToInt(tmpStr);		
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);	

		rs.GetValue(_T("c10"), tmpStr);
		nTotal[5] += ToInt(tmpStr);		
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);	

		rs.MoveNext();
	}
	nRow++;
	xls.SetCellMergedColumns(0,nRow,2);
	TranslateString(_T("T\x1ED5ng"),tmpStr);
	xls.SetCellText(0, nRow, tmpStr, FMT_CENTER, true);
	for (int i =2; i <=5; i++)
	{		
		tmpStr.Format(_T("%ld"),nTotal[i] );		
		xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
	}

	xls.Save(_T("Exports\\Thong ke benh nhan vao vien theo khoa.xls"));
	EndWaitCursor(); 
} 
void rptAdmissionstatisticfordepartmentReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	PrintAdmissionStatisticForDepartmentPatientListReport(m_szFromDate, m_szToDate);
} 
void rptAdmissionstatisticfordepartmentReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptAdmissionstatisticfordepartmentReportDialog::OnAddrptAdmissionstatisticfordepartmentReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptAdmissionstatisticfordepartmentReportDialog::OnEditrptAdmissionstatisticfordepartmentReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptAdmissionstatisticfordepartmentReportDialog::OnDeleterptAdmissionstatisticfordepartmentReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelrptAdmissionstatisticfordepartmentReportDialog(); 
 	}
	return 0;
}
int rptAdmissionstatisticfordepartmentReportDialog::OnSaverptAdmissionstatisticfordepartmentReportDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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
 		//OnrptAdmissionstatisticfordepartmentReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptAdmissionstatisticfordepartmentReportDialog::OnCancelrptAdmissionstatisticfordepartmentReportDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int rptAdmissionstatisticfordepartmentReportDialog::OnrptAdmissionstatisticfordepartmentReportDialogListLoadData(){
	return 0;
}
void rptAdmissionstatisticfordepartmentReportDialog::PrintAdmissionStatisticForDepartmentPatientListReport(CString szFromDate, CString szToDate){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, tmpStr, szWhere;
	CRecord rs(&pMF->m_db);
	CReport rpt;
	UpdateData(true);
	if(!rpt.Init(_T("Reports/HMS/HE_ADMISSIONSTATISTICFORDEPARTMENT.RPT")))
	{
		return;
	}
//	rpt.GetReportDocument()->SetMargins(100, 100, 100, 100);
//	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
//	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	CString szDate;
	szDate.Format(tmpStr, CDateTime::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDateTime::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	
	szWhere.Empty();

	if(m_szStatusKey == _T("1")){
		szWhere.Format(_T(" and hcr_status not in('I','T') "));
	}
	else if(m_szStatusKey == _T("2"))
		szWhere.Format(_T(" and hcr_status in('I','T') "));

	szSQL.Format(_T(" SELECT (select sd_name from sys_dept where sd_id=admitdept) as admitdept, ") \
				_T("sum(c1) as c1, ") \
				_T("sum(c2) as c2, ") \
				_T("sum(c3) as c3, ") \
				_T("sum(c4) as c4,") \
				_T("sum(c5) as c5, ") \
				_T("sum(c6) as c6, ") \
				_T("sum(c7) as c7, ") \
				_T("sum(c8) as c8,") \
				_T("sum(c9) as c9, ") \
				_T("sum(c1+c2+c3+c4+c5+c6+c7+c8+c9) as c10") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT hd_indept as admitdept,") \
				_T(" case when hd_object='1' then 1 else 0 end as c1,") \
				_T(" case when hd_object='2' then 1 else 0 end as c2,") \
				_T(" case when hd_object='3' then 1 else 0 end as c3,") \
				_T(" case when hd_object='4' then 1 else 0 end as c4,") \
				_T(" case when hd_object='5' then 1 else 0 end as c5,") \
				_T(" case when hd_object='6' then 1 else 0 end as c6,") \
				_T(" case when hd_object='7' then 1 else 0 end as c7,") \
				_T(" case when hd_object='8' then 1 else 0 end as c8,") \
				_T(" case when hd_object='9' then 1 else 0 end as c9 ") \
				_T(" FROM hms_doc ") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				/*_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno and htr_status = hcr_status) ") \
				*/
				_T(" WHERE hd_status='T' and hd_suggestion='A' and length(hd_indept)>0") \
				_T(" AND (hd_enddate) BETWEEN ('%s') AND ('%s') ") \
				_T(" %s ") \
				_T(" ) as admittbl") \
				_T(" GROUP BY admitdept") \
				_T(" ORDER BY admitdept"), szFromDate, szToDate, szWhere);	
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	CReportSection* rptDetail=rpt.GetDetail();
	int nIndex=1,nTotal[9];
	for (int i =0; i < 10; i++)
		nTotal[i] = 0;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("0"), tmpStr);

		rs.GetValue(_T("admitdept"), tmpStr);
		rptDetail->SetValue(_T("admitdept"), tmpStr);
		rs.GetValue(_T("c1"), tmpStr); 
		nTotal[0] += ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("c2"), tmpStr); 
		nTotal[1] += ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("c3"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		
		rs.GetValue(_T("c4"), tmpStr); 
		nTotal[3] += ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("c5"), tmpStr); 
		nTotal[4] += ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("c6"), tmpStr); 
		nTotal[5]+= ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("c7"), tmpStr); 
		nTotal[6]+= ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("c8"), tmpStr); 
		nTotal[7]+= ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("c9"), tmpStr); 
		nTotal[8]+= ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("c10"), tmpStr); 
		nTotal[9]+= ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.MoveNext();
	}
	//Report Footer
	if(nTotal[9] > 0)
	{
		FormatCurrency(nTotal[0], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum1"), tmpStr);
		FormatCurrency(nTotal[1], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum2"), tmpStr);
		FormatCurrency(nTotal[2], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum3"), tmpStr);
		FormatCurrency(nTotal[3], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum4"), tmpStr);
		FormatCurrency(nTotal[4], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum5"), tmpStr);
		FormatCurrency(nTotal[5], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum6"), tmpStr);
		FormatCurrency(nTotal[6], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum7"), tmpStr);
		FormatCurrency(nTotal[7], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum8"), tmpStr);
		FormatCurrency(nTotal[8],tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum9"), tmpStr);
		FormatCurrency(nTotal[9], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum10"), tmpStr);
	}
	CString szSysDate  = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
		rpt.PrintPreview();
}
