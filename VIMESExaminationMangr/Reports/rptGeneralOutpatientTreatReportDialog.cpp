#include "rptGeneralOutpatientTreatReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralOutpatientTreatReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralOutpatientTreatReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptGeneralOutpatientTreatReportDialog *pVw = (rptGeneralOutpatientTreatReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptGeneralOutpatientTreatReportDialog *pVw = (rptGeneralOutpatientTreatReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptGeneralOutpatientTreatReportDialog *pVw = (rptGeneralOutpatientTreatReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptGeneralOutpatientTreatReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralOutpatientTreatReportDialog*)pWnd)->OnAddrptGeneralOutpatientTreatReportDialog();
} 
static int _OnEditrptGeneralOutpatientTreatReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralOutpatientTreatReportDialog*)pWnd)->OnEditrptGeneralOutpatientTreatReportDialog();
} 
static int _OnDeleterptGeneralOutpatientTreatReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralOutpatientTreatReportDialog*)pWnd)->OnDeleterptGeneralOutpatientTreatReportDialog();
} 
static int _OnSaverptGeneralOutpatientTreatReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralOutpatientTreatReportDialog*)pWnd)->OnSaverptGeneralOutpatientTreatReportDialog();
} 
static int _OnCancelrptGeneralOutpatientTreatReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralOutpatientTreatReportDialog*)pWnd)->OnCancelrptGeneralOutpatientTreatReportDialog();
} 
rptGeneralOutpatientTreatReportDialog::rptGeneralOutpatientTreatReportDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 370;
	m_nDlgHeight = 125;
	SetDefaultValues();
	//m_bPreview = true;
}
rptGeneralOutpatientTreatReportDialog::~rptGeneralOutpatientTreatReportDialog(){
}
void rptGeneralOutpatientTreatReportDialog::OnCreateComponents(){
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
void rptGeneralOutpatientTreatReportDialog::OnInitializeComponents(){
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
void rptGeneralOutpatientTreatReportDialog::OnSetWindowEvents(){
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
void rptGeneralOutpatientTreatReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptGeneralOutpatientTreatReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptGeneralOutpatientTreatReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptGeneralOutpatientTreatReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptGeneralOutpatientTreatReportDialog::SetMode(int nMode){
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
/*void rptGeneralOutpatientTreatReportDialog::OnYearChange(){
	
} */
/*void rptGeneralOutpatientTreatReportDialog::OnYearSetfocus(){
	
} */
/*void rptGeneralOutpatientTreatReportDialog::OnYearKillfocus(){
	
} */
int rptGeneralOutpatientTreatReportDialog::OnYearCheckValue(){
	return 0;
} 
void rptGeneralOutpatientTreatReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralOutpatientTreatReportDialog::OnReportPeriodSelendok(){
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
/*void rptGeneralOutpatientTreatReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptGeneralOutpatientTreatReportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptGeneralOutpatientTreatReportDialog::OnReportPeriodLoadData(){
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
/*void rptGeneralOutpatientTreatReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptGeneralOutpatientTreatReportDialog::OnFromDateChange(){
	
} */
/*void rptGeneralOutpatientTreatReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptGeneralOutpatientTreatReportDialog::OnFromDateKillfocus(){
	
} */
int rptGeneralOutpatientTreatReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptGeneralOutpatientTreatReportDialog::OnToDateChange(){
	
} */
/*void rptGeneralOutpatientTreatReportDialog::OnToDateSetfocus(){
	
} */
/*void rptGeneralOutpatientTreatReportDialog::OnToDateKillfocus(){
	
} */
int rptGeneralOutpatientTreatReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptGeneralOutpatientTreatReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString szFromDate, szToDate;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere, szAmount;
	CString szDate, szSysDate;	
	CReport rpt; 
	szSysDate = pMF->GetSysDate(); 	
	szSQL.Format(_T(" SELECT 	hrl_deptid as deptid,") \
				_T(" 	hrl_id as roomid,") \
				_T(" 	hrl_name as roomname,") \
				_T(" 	sum(totalperiod) as totalperiod,") \
				_T(" 	sum(totalin) as totalin,") \
				_T(" 	sum(totalout) as totalout,") \
				_T(" 	sum(totalperiod+totalin-totalout) as totaltreat") \
				_T(" FROM hms_roomlist") \
				_T(" LEFT JOIN") \
				_T(" (") \
				_T("    SELECT hop_deptid as deptid, ") \
				_T(" 	hop_roomid as roomid,") \
				_T(" 	case when hop_fromdate < date('%s') and hop_status='O' then 1 else 0 end as totalperiod,") \
				_T(" 	case when hop_fromdate between date('%s') and date('%s') then 1 else 0 end as totalin,") \
				_T(" 	case when hop_todate between date('%s') and date('%s') and hop_status='T' then 1 else 0 end as totalout") \
				_T("    FROM hms_outpatient") \
				_T(" ) as tbl") \
				_T(" ON(deptid=hrl_deptid and roomid=hrl_id)") \
				_T(" WHERE hrl_deptid='%s'") \
				_T(" GROUP BY hrl_deptid, hrl_id, hrl_name") \
				_T(" ORDER BY hrl_deptid, hrl_id"), m_szFromDate,m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, pMF->m_szDept); 
	
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0,7);
	xls.SetColumnWidth(1,30);
	xls.SetColumnWidth(2,15);
	xls.SetColumnWidth(3,15);
	xls.SetColumnWidth(4,15);
	xls.SetColumnWidth(5,15);
	xls.SetCellMergedColumns(0,0,3);
	xls.SetCellMergedColumns(0,1,3);
	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname,FMT_CENTER,true,12);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name,FMT_CENTER,true,12);
	xls.SetCellMergedColumns(0,3,6);	
	xls.SetCellText(0, 3, _T("	\x42\xC1O \x43\xC1O \x110I\x1EC0U TR\x1ECA NGO\x1EA0I TR\xDA TH\x45O PH\xD2NG KH\xC1M"),FMT_CENTER,true,16);
	xls.SetCellMergedColumns(0,4,6);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr,FMT_CENTER,true,12);
	int nRow = 6;
	xls.SetCellMergedRows(0,5,2);
	xls.SetCellMergedRows(1,5,2);

	xls.SetCellText(0, nRow-1, _T("STT"), FMT_CENTER,true);	
	xls.SetCellText(1, nRow-1, _T("Ph\xF2ng kh\xE1m"), FMT_CENTER,true);
	
	xls.SetCellMergedColumns(2,5,4);
	xls.SetCellText(2,5,_T("\x110i\x1EC1u tr\x1ECB ngo\x1EA1i tr\xFA"),FMT_CENTER, 12);
	xls.SetCellText(2, nRow, _T("\x42\x1EC7nh nh\xE2n \x63\x169"), FMT_CENTER,true);

	xls.SetCellText(3, nRow, _T("V\xE0o"), FMT_CENTER,true);	
	xls.SetCellText(4, nRow, _T("R\x61"), FMT_CENTER,true);
	xls.SetCellText(5, nRow, _T("Hi\x1EC7n \x63\xF3"), FMT_CENTER,true);

	int nIndex = 1;
	int nTotal[5];
	for (int i = 2;i<=5;i++)
	{
		nTotal[i]=0;
	}
	while(!rs.IsEOF())
	{
		nRow++;		
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("totalperiod"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("totalin"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("totalout"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("totaltreat"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);

		rs.MoveNext();
	}
	nRow++;
	xls.SetCellMergedColumns(0,nRow,2);
	TranslateString(_T("T\x1ED5ng"),tmpStr);
	xls.SetCellText(0, nRow, tmpStr, FMT_CENTER, true, 12);
	for (int i=2; i <=5; i++)
	{		
		tmpStr.Format(_T("%ld"),nTotal[i] );		
		xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true, 12);
	}
	xls.Save(_T("Exports\\Bao cao dieu tri ngoai tru theo phong kham.xls"));
	EndWaitCursor();
} 
void rptGeneralOutpatientTreatReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	PrintGeneralOutpatientTreatReport(m_szFromDate, m_szToDate);
} 
void rptGeneralOutpatientTreatReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptGeneralOutpatientTreatReportDialog::OnAddrptGeneralOutpatientTreatReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptGeneralOutpatientTreatReportDialog::OnEditrptGeneralOutpatientTreatReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptGeneralOutpatientTreatReportDialog::OnDeleterptGeneralOutpatientTreatReportDialog(){
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
 		OnCancelrptGeneralOutpatientTreatReportDialog(); 
 	}
	return 0;
}
int rptGeneralOutpatientTreatReportDialog::OnSaverptGeneralOutpatientTreatReportDialog(){
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
 		//OnrptGeneralOutpatientTreatReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptGeneralOutpatientTreatReportDialog::OnCancelrptGeneralOutpatientTreatReportDialog(){
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
int rptGeneralOutpatientTreatReportDialog::OnrptGeneralOutpatientTreatReportDialogListLoadData(){
	return 0;
}
void rptGeneralOutpatientTreatReportDialog::PrintGeneralOutpatientTreatReport(CString szFromDate, CString szToDate){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CReport rpt; 
	szSQL.Format(_T(" SELECT 	hrl_deptid as deptid,") \
				_T(" 	hrl_id as roomid,") \
				_T(" 	hrl_name as roomname,") \
				_T(" 	sum(totalperiod) as totalperiod,") \
				_T(" 	sum(totalin) as totalin,") \
				_T(" 	sum(totalout) as totalout,") \
				_T(" 	sum(totalperiod+totalin-totalout) as totaltreat") \
				_T(" FROM hms_roomlist") \
				_T(" LEFT JOIN") \
				_T(" (") \
				_T("    SELECT hop_deptid as deptid, ") \
				_T(" 	hop_roomid as roomid,") \
				_T(" 	case when hop_fromdate < date('%s') and hop_status='O' then 1 else 0 end as totalperiod,") \
				_T(" 	case when hop_fromdate between date('%s') and date('%s') then 1 else 0 end as totalin,") \
				_T(" 	case when hop_todate between date('%s') and date('%s') and hop_status='T' then 1 else 0 end as totalout") \
				_T("    FROM hms_outpatient") \
				_T(" ) as tbl") \
				_T(" ON(deptid=hrl_deptid and roomid=hrl_id)") \
				_T(" WHERE hrl_deptid='%s'") \
				_T(" GROUP BY hrl_deptid, hrl_id, hrl_name") \
				_T(" ORDER BY hrl_deptid, hrl_id"), szFromDate,szFromDate, szToDate, szFromDate, szToDate,pMF->m_szDept); 
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if(!rpt.Init(_T("Reports/HMS/HE_GENERALOUTPATIENTTREATREPORT.RPT")))
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	//rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	//rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;
	double nTotal[4];
	for (int i =0; i < 4; i++)
		nTotal[i] = 0;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("Index"), tmpStr);
		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("roomname"), tmpStr);

		rs.GetValue(_T("totalperiod"), tmpStr);
		nTotal[0] += ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("totalin"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("totalout"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("totaltreat"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.MoveNext();
	}
	for (int i =0; i < 4; i++){
		tmpStr.Format(_T("sum%d"), i+1);
		rpt.GetReportFooter()->SetValue(tmpStr, ToString(nTotal[i]));		
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		rpt.PrintPreview();
}
