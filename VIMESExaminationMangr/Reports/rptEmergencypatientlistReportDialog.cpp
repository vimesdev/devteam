#include "rptEmergencypatientlistReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptEmergencypatientlistReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptEmergencypatientlistReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptEmergencypatientlistReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptEmergencypatientlistReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptEmergencypatientlistReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptEmergencypatientlistReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptEmergencypatientlistReportDialog *pVw = (rptEmergencypatientlistReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptEmergencypatientlistReportDialog *pVw = (rptEmergencypatientlistReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptEmergencypatientlistReportDialog *pVw = (rptEmergencypatientlistReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptEmergencypatientlistReportDialogFnc(CWnd *pWnd){
	 return ((rptEmergencypatientlistReportDialog*)pWnd)->OnAddrptEmergencypatientlistReportDialog();
} 
static int _OnEditrptEmergencypatientlistReportDialogFnc(CWnd *pWnd){
	 return ((rptEmergencypatientlistReportDialog*)pWnd)->OnEditrptEmergencypatientlistReportDialog();
} 
static int _OnDeleterptEmergencypatientlistReportDialogFnc(CWnd *pWnd){
	 return ((rptEmergencypatientlistReportDialog*)pWnd)->OnDeleterptEmergencypatientlistReportDialog();
} 
static int _OnSaverptEmergencypatientlistReportDialogFnc(CWnd *pWnd){
	 return ((rptEmergencypatientlistReportDialog*)pWnd)->OnSaverptEmergencypatientlistReportDialog();
} 
static int _OnCancelrptEmergencypatientlistReportDialogFnc(CWnd *pWnd){
	 return ((rptEmergencypatientlistReportDialog*)pWnd)->OnCancelrptEmergencypatientlistReportDialog();
} 
rptEmergencypatientlistReportDialog::rptEmergencypatientlistReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 125;
	SetDefaultValues();
	m_bPreview = true;
}
rptEmergencypatientlistReportDialog::~rptEmergencypatientlistReportDialog(){
}
void rptEmergencypatientlistReportDialog::OnCreateComponents(){
	m_wndReportConditio.Create(this, _T("Report Condition"), 5, 5, 360, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 180, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 185, 30, 265, 55);
	m_wndReportPeriod.Create(this,270, 30, 355, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 180, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 60, 265, 85);
	m_wndToDate.Create(this,270, 60, 355, 85); 
	m_wndPrint.Create(this, _T("&Print"), 125, 95, 200, 120);
	m_wndExport.Create(this, _T("&Export"), 205, 95, 280, 120);
	m_wndClose.Create(this, _T("&Close"), 285, 95, 360, 120);

}
void rptEmergencypatientlistReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
//	m_wndYear.SetCheckValue(true);
//	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void rptEmergencypatientlistReportDialog::OnSetWindowEvents(){
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
void rptEmergencypatientlistReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptEmergencypatientlistReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptEmergencypatientlistReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptEmergencypatientlistReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptEmergencypatientlistReportDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1); 
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
/*void rptEmergencypatientlistReportDialog::OnYearChange(){
	
} */
/*void rptEmergencypatientlistReportDialog::OnYearSetfocus(){
	
} */
/*void rptEmergencypatientlistReportDialog::OnYearKillfocus(){
	
} */
int rptEmergencypatientlistReportDialog::OnYearCheckValue(){
	return 0;
} 
void rptEmergencypatientlistReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptEmergencypatientlistReportDialog::OnReportPeriodSelendok(){
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
/*void rptEmergencypatientlistReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptEmergencypatientlistReportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptEmergencypatientlistReportDialog::OnReportPeriodLoadData(){
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
/*void rptEmergencypatientlistReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptEmergencypatientlistReportDialog::OnFromDateChange(){
	
} */
/*void rptEmergencypatientlistReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptEmergencypatientlistReportDialog::OnFromDateKillfocus(){
	
} */
int rptEmergencypatientlistReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptEmergencypatientlistReportDialog::OnToDateChange(){
	
} */
/*void rptEmergencypatientlistReportDialog::OnToDateSetfocus(){
	
} */
/*void rptEmergencypatientlistReportDialog::OnToDateKillfocus(){
	
} */
int rptEmergencypatientlistReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptEmergencypatientlistReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szFromDate, szToDate;
	BeginWaitCursor();
	szSQL.Format(_T(" SELECT distinct hd_docno as docno, ") \
				_T(" date(hd_admitdate) as admitdate,") \
				_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
				_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" hp_dtladdr || '-' || hms_getaddress(hp_provid,hp_distid,hp_villid) as  dtladdr,") \
				_T(" hc_cardno as cardno,") \
				_T(" hd_conclusion as conclusion ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON (hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno and hc_idx=hd_cardidx)") \
				_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno) ") \
				_T(" WHERE date(hd_enddate) BETWEEN date('%s') AND date('%s') AND hd_emergency='Y' AND hd_status = 'T' ") \
				_T(" GROUP BY admitdate, docno, pname, age, sex, dtladdr, cardno, conclusion ") \
				_T(" ORDER BY admitdate, docno, pname, age, sex, dtladdr, cardno, conclusion"), m_szFromDate, m_szToDate);
	rs.ExecSQL(szSQL);
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 25);
	xls.SetColumnWidth(4, 6);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 52);
	xls.SetColumnWidth(7, 23);
	xls.SetColumnWidth(8, 30);
	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_CENTER,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_CENTER,true,12,0);
	xls.SetCellMergedColumns(0,3,9);
	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N \x43\x1EA4P \x43\x1EE8U"),FMT_CENTER, true, 16, 0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr,FMT_CENTER,true,12,0);
	xls.SetCellMergedColumns(0,4,9);

	int nRow = 6;

		
	xls.SetCellText(0, nRow, _T("STT"), FMT_CENTER,true);	

	TranslateString(_T("Ng\xE0y kh\xE1m"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_CENTER,true);
	
	TranslateString(_T("S\x1ED1 h\x1ED3 s\x1A1"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_CENTER,true);	

	TranslateString(_T("H\x1ECD t\xEAn"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_CENTER,true);	

	TranslateString(_T("Tu\x1ED5i"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_CENTER,true);	

	TranslateString(_T("Gi\x1EDBi t\xEDnh"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_CENTER,true);
	
	TranslateString(_T("\x110\x1ECB\x61 \x63h\x1EC9"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_CENTER,true);

	TranslateString(_T("S\x1ED1 th\x1EBB \x42HYT"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_CENTER,true);	

	TranslateString(_T("Ghi \x63h\xFA"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_CENTER,true);

	int nIndex = 1;
	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")),yyyymmdd, ddmmyyyy);
		xls.SetCellText(1, nRow, tmpStr, FMT_DATE);
 
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_CENTER);
		
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_CENTER);

		rs.GetValue(_T("dtladdr"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("conclusion"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Danh sach benh nhan cap cuu.xls"));
	EndWaitCursor();
	
} 
void rptEmergencypatientlistReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	PrintEmergencyPatientListReport(m_szFromDate, m_szToDate);
} 
void rptEmergencypatientlistReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptEmergencypatientlistReportDialog::OnAddrptEmergencypatientlistReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptEmergencypatientlistReportDialog::OnEditrptEmergencypatientlistReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptEmergencypatientlistReportDialog::OnDeleterptEmergencypatientlistReportDialog(){
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
 		OnCancelrptEmergencypatientlistReportDialog(); 
 	}
	return 0;
}
int rptEmergencypatientlistReportDialog::OnSaverptEmergencypatientlistReportDialog(){
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
 		//OnrptEmergencypatientlistReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptEmergencypatientlistReportDialog::OnCancelrptEmergencypatientlistReportDialog(){
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
int rptEmergencypatientlistReportDialog::OnrptEmergencypatientlistReportDialogListLoadData(){
	return 0;
}
void rptEmergencypatientlistReportDialog::PrintEmergencyPatientListReport(CString szFromDate, CString szToDate){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 
	szSQL.Format(_T(" SELECT distinct hd_docno as docno, ") \
				_T(" hd_admitdate as admitdate,") \
				_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
				_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" hp_dtladdr || '-' || hms_getaddress(hp_provid,hp_distid,hp_villid) as  dtladdr,") \
				_T(" hc_cardno as cardno,") \
				_T(" hd_conclusion as conclusion ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON (hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hp_patientno and hc_idx=hd_cardidx)") \
				_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno) ") \
				_T(" WHERE date(hd_enddate) BETWEEN date('%s') AND date('%s') AND hd_emergency='Y' AND hd_status = 'T' ") \
				_T(" GROUP BY admitdate, docno, pname, age, sex, dtladdr, cardno, conclusion ") \
				_T(" ORDER BY admitdate, docno, pname, age, sex, dtladdr, cardno, conclusion"), szFromDate, szToDate);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if(!rpt.Init(_T("Reports/HMS/HE_EMERGENCYPATIENTLIST.RPT")) )
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
//	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
//	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//rpt.GetPageHeader()->SetValue(_T("pageno"), _T(" Chua co"));
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 0;
	while(!rs.IsEOF())
	{
		//rpt.AddDetail();
		rptDetail = rpt.AddDetail();
		nIndex++;	
		tmpStr.Format(_T("%d"), nIndex);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("admitdate"), tmpStr);
		rptDetail->SetValue(_T("2"), CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("dtladdr"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("conclusion"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.MoveNext();
	}
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		rpt.PrintPreview();
}
