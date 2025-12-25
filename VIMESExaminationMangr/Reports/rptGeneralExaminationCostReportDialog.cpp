#include "rptGeneralExaminationCostReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
//#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralExaminationCostReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostReportDialog *pVw = (rptGeneralExaminationCostReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostReportDialog *pVw = (rptGeneralExaminationCostReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostReportDialog *pVw = (rptGeneralExaminationCostReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptGeneralExaminationCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostReportDialog*)pWnd)->OnAddrptGeneralExaminationCostReportDialog();
} 
static int _OnEditrptGeneralExaminationCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostReportDialog*)pWnd)->OnEditrptGeneralExaminationCostReportDialog();
} 
static int _OnDeleterptGeneralExaminationCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostReportDialog*)pWnd)->OnDeleterptGeneralExaminationCostReportDialog();
} 
static int _OnSaverptGeneralExaminationCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostReportDialog*)pWnd)->OnSaverptGeneralExaminationCostReportDialog();
} 
static int _OnCancelrptGeneralExaminationCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostReportDialog*)pWnd)->OnCancelrptGeneralExaminationCostReportDialog();
} 
rptGeneralExaminationCostReportDialog::rptGeneralExaminationCostReportDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 370;
	m_nDlgHeight = 125;
	SetDefaultValues();
	m_bPreview = true;
}
rptGeneralExaminationCostReportDialog::~rptGeneralExaminationCostReportDialog(){
}
void rptGeneralExaminationCostReportDialog::OnCreateComponents(){
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
void rptGeneralExaminationCostReportDialog::OnInitializeComponents(){
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
void rptGeneralExaminationCostReportDialog::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
//	m_szReportPeriodKey = _T("");
	SetMode(VM_EDIT);

}
void rptGeneralExaminationCostReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptGeneralExaminationCostReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptGeneralExaminationCostReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptGeneralExaminationCostReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptGeneralExaminationCostReportDialog::SetMode(int nMode){
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
/*void rptGeneralExaminationCostReportDialog::OnYearChange(){
	
} */
/*void rptGeneralExaminationCostReportDialog::OnYearSetfocus(){
	
} */
/*void rptGeneralExaminationCostReportDialog::OnYearKillfocus(){
	
} */
int rptGeneralExaminationCostReportDialog::OnYearCheckValue(){
	return 0;
} 
void rptGeneralExaminationCostReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralExaminationCostReportDialog::OnReportPeriodSelendok(){
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
/*void rptGeneralExaminationCostReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptGeneralExaminationCostReportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptGeneralExaminationCostReportDialog::OnReportPeriodLoadData(){
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
/*void rptGeneralExaminationCostReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptGeneralExaminationCostReportDialog::OnFromDateChange(){
	
} */
/*void rptGeneralExaminationCostReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptGeneralExaminationCostReportDialog::OnFromDateKillfocus(){
	
} */
int rptGeneralExaminationCostReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptGeneralExaminationCostReportDialog::OnToDateChange(){
	
} */
/*void rptGeneralExaminationCostReportDialog::OnToDateSetfocus(){
	
} */
/*void rptGeneralExaminationCostReportDialog::OnToDateKillfocus(){
	
} */
int rptGeneralExaminationCostReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptGeneralExaminationCostReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	PrintGeneralExaminationCostReport(m_szFromDate, m_szToDate);
} 
void rptGeneralExaminationCostReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString szFromDate, szToDate;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere, szAmount;
	CString szDate, szSysDate;	
	CReport rpt; 
	szSysDate = pMF->GetSysDate(); 	
	szSQL.Format(_T(" SELECT hrl_name as roomname,") \
				_T(" 	roomid, ") \
				_T(" 	sum(servcost) as  servcost_amount,") \
				_T(" 	sum(serv) as  serv_amount,") \
				_T(" 	sum(inscost) as inscost_amount,") \
				_T(" 	sum(ins) as ins_amount,") \
				_T(" 	sum(insinhoscost) as insinhoscost_amount,") \
				_T(" 	sum(insinhos) as insinhos_amount, ") \
				_T(" 	sum(servcost+inscost) as totalcost, ") \
				_T(" 	sum(serv+ins) as totalrecv ") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT 	") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_roomid as roomid,") \
				_T(" 	hd_docno as docno, ") \
				_T(" 	case when ho_type='S' then hfe_cost else 0 end as servcost,") \
				_T(" 	case when ho_type='S' then hfe_patpaid else 0 end as serv,") \
				_T(" 	case when ho_type IN('I','C') then hfe_cost else 0 end as inscost,") \
				_T(" 	case when ho_type IN('I','C') then hfe_patpaid+hfe_difpaid else 0 end as ins,") \
				_T(" 	case when ho_type IN('I','C') and hc_line=1 then hfe_cost+hfe_difcost else 0 end as insinhoscost,") \
				_T(" 	case when ho_type IN('I','C') and hc_line=1 then hfe_patpaid+hfe_difpaid else 0 end as insinhos") \
				_T(" FROM hms_doc") \
				_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" LEFT JOIN hmsv_fee ON(hfe_docno=hd_docno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno and hd_cardidx=hc_idx)") \
				_T(" WHERE hfe_deptid='%s' AND hfe_type in('E','T','I','O','D','P') AND date(hfe_entrydate) between date('%s') and date('%s') and hfe_status='P'") \
				_T(" ) as tbl") \
				_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=deptid and hrl_id=roomid)") \
			    _T(" GROUP BY deptid, roomid, roomname"),pMF->m_szDept , m_szFromDate, m_szToDate); 

	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0,7);
	xls.SetColumnWidth(1,25);
	xls.SetColumnWidth(2,18);
	xls.SetColumnWidth(3,18);
	xls.SetColumnWidth(4,18);
	xls.SetColumnWidth(5,18);
	xls.SetColumnWidth(6,18);
	xls.SetColumnWidth(7,18);
	xls.SetColumnWidth(8,18);
	xls.SetColumnWidth(9,18);
	xls.SetCellMergedColumns(0,0,3);
	xls.SetCellMergedColumns(0,1,3);	
	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname,FMT_CENTER,true,12);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name,FMT_CENTER,true,12);
	xls.SetCellMergedColumns(0,3,10);	
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O T\x1ED4NG H\x1EE2P \x43HI PH\xCD TH\x45O PH\xD2NG KH\xC1M"),FMT_CENTER,true,16);
	xls.SetCellMergedColumns(0,4,10);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0,4, tmpStr,FMT_CENTER,true,12,0);
	int nRow = 6;
	xls.SetCellMergedRows(0,5,2);
	xls.SetCellMergedRows(1,5,2);
	xls.SetCellText(0, nRow-1, _T("STT"), FMT_CENTER,true);	

	xls.SetCellText(1, nRow-1, _T("Ph\xF2ng kh\xE1m"), FMT_CENTER,true);
	
	
	xls.SetCellMergedColumns(2,5,2);
	xls.SetCellText(2,5,_T("Vi\x1EC7n ph\xED"),FMT_CENTER,true, 12, 0);
	xls.SetCellText(2, nRow, _T("\x43hi ph\xED"), FMT_CENTER,true);
	TranslateString(_T("Income"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_CENTER,true);	

	xls.SetCellMergedColumns(4,5,2);
	xls.SetCellText(4,5,_T("\x42\x1EA3o hi\x1EC3m y t\x1EBF"),FMT_CENTER,true, 12, 0);
	xls.SetCellText(4, nRow, _T("\x43hi ph\xED"), FMT_CENTER,true);
	TranslateString(_T("Income"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_CENTER,true);

	
	xls.SetCellMergedColumns(6,5,2);
	xls.SetCellText(6,5,_T("BHYT(\x110\x103ng k\xFD t\x1EA1i \x62\x1EC7nh vi\x1EC7n)"),FMT_CENTER,true, 12);
	xls.SetCellText(6, nRow, _T("\x43hi ph\xED"), FMT_CENTER,true);
	TranslateString(_T("Income"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_CENTER,true);	

	xls.SetCellMergedColumns(8,5,2);
	xls.SetCellText(8,5,_T("T\x1ED5ng \x63\x1ED9ng"),FMT_CENTER,true, 12, 0);
	xls.SetCellText(8, nRow, _T("T\x1ED5ng \x63hi ph\xED"), FMT_CENTER,true);	
	TranslateString(_T("T\x1ED5ng thu"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_CENTER,true);
	
	int nIndex = 1;
	double  nTotal[10];
	for (int i=0;i< 8;i++)
	{
		nTotal[i]=0.0;
	}	
	while(!rs.IsEOF())
	{
		nRow++;		
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("servcost_amount"), tmpStr);
		nTotal[0] += ToDouble(tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("serv_amount"), tmpStr);
		nTotal[1] += ToDouble(tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("inscost_amount"), tmpStr);
		nTotal[2] += ToDouble(tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("ins_amount"), tmpStr);
		nTotal[3] += ToDouble(tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("insinhoscost_amount"), tmpStr);
		nTotal[4] += ToDouble(tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("insinhos_amount"), tmpStr);		
		nTotal[5] += ToDouble(tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("totalcost"), tmpStr);
		nTotal[6] += ToDouble(tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("totalrecv"), tmpStr);
		nTotal[7] += ToDouble(tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);
		rs.MoveNext();
	}
	nRow++;
	xls.SetCellMergedColumns(0,nRow,2);
	xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_CENTER, true, 12);
	for (int i =0; i < 8; i++)
	{		
		tmpStr.Format(_T("%0.f"),nTotal[i] );		
		xls.SetCellText(i+2, nRow, tmpStr, FMT_NUMBER1, true, 12);
	}
	xls.Save(_T("Exports\\Bao cao tong hop chi phi theo phong kham.xls"));
	EndWaitCursor();
	
} 
void rptGeneralExaminationCostReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptGeneralExaminationCostReportDialog::OnAddrptGeneralExaminationCostReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptGeneralExaminationCostReportDialog::OnEditrptGeneralExaminationCostReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptGeneralExaminationCostReportDialog::OnDeleterptGeneralExaminationCostReportDialog(){
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
 		OnCancelrptGeneralExaminationCostReportDialog(); 
 	}
	return 0;
}
int rptGeneralExaminationCostReportDialog::OnSaverptGeneralExaminationCostReportDialog(){
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
 		//OnrptGeneralExaminationCostReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptGeneralExaminationCostReportDialog::OnCancelrptGeneralExaminationCostReportDialog(){
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
int rptGeneralExaminationCostReportDialog::OnrptGeneralExaminationCostReportDialogListLoadData(){
	return 0;
}
void rptGeneralExaminationCostReportDialog::PrintGeneralExaminationCostReport(CString szFromDate, CString szToDate){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CReport rpt; 
	szSQL.Format(_T(" SELECT 	hrl_name as roomname,") \
				_T(" 	roomid, ") \
				_T(" 	sum(servcost) as  servcost_amount,") \
				_T(" 	sum(serv) as  serv_amount,") \
				_T(" 	sum(inscost) as inscost_amount,") \
				_T(" 	sum(ins) as ins_amount,") \
				_T(" 	sum(insinhoscost) as insinhoscost_amount,") \
				_T(" 	sum(insinhos) as insinhos_amount, ") \
				_T(" 	sum(servcost+inscost) as totalcost, ") \
				_T(" 	sum(serv+ins) as totalrecv ") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT 	") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_roomid as roomid,") \
				_T(" 	hd_docno as docno, ") \
				_T(" 	case when ho_type='S' then hfe_cost else 0 end as servcost,") \
				_T(" 	case when ho_type='S' then hfe_patpaid else 0 end as serv,") \
				_T(" 	case when ho_type IN('I','C') then hfe_cost else 0 end as inscost,") \
				_T(" 	case when ho_type IN('I','C') then hfe_patpaid+hfe_difpaid else 0 end as ins,") \
				_T(" 	case when ho_type IN('I','C') and hc_line=1 then hfe_cost+hfe_difcost else 0 end as insinhoscost,") \
				_T(" 	case when ho_type IN('I','C') and hc_line=1 then hfe_patpaid+hfe_difpaid else 0 end as insinhos") \
				_T(" FROM hms_doc") \
				_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" LEFT JOIN hmsv_fee ON(hfe_docno=hd_docno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno and hd_cardidx=hc_idx)") \
				_T(" WHERE hfe_deptid='%s' AND hfe_type in('E','T','I','O','D','P') AND date(hfe_entrydate) between date('%s') and date('%s') and hfe_status='P'") \
				_T(" ) as tbl") \
				_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=deptid and hrl_id=roomid)") \
				_T(" GROUP BY deptid, roomid, roomname") ,pMF->m_szDept,  szFromDate, szToDate); 
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rpt.Init(_T("Reports/HMS/HE_GENERALEXAMINATIONCOSTREPORT.RPT")))
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
//	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
//	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;
	double nTotal[8];
	for (int i =0; i < 8; i++)
		nTotal[i] = 0;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("Index"), tmpStr);
		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("roomname"), tmpStr);
		rs.GetValue(_T("servcost_amount"), tmpStr);
		nTotal[0] += ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("serv_amount"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("inscost_amount"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("ins_amount"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("insinhoscost_amount"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("insinhos_amount"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("totalcost"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);		
		rs.GetValue(_T("totalrecv"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);		
		rs.MoveNext();
	}
	for (int i =0; i < 8; i++)
	{
		tmpStr.Format(_T("sum%d"), i+1);
		rpt.GetReportFooter()->SetValue(tmpStr, ToString(nTotal[i]));		
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
}