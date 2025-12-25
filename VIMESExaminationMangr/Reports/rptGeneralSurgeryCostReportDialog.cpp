#include "rptGeneralSurgeryCostReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralSurgeryCostReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralSurgeryCostReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralSurgeryCostReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralSurgeryCostReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralSurgeryCostReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralSurgeryCostReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptGeneralSurgeryCostReportDialog *pVw = (rptGeneralSurgeryCostReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptGeneralSurgeryCostReportDialog *pVw = (rptGeneralSurgeryCostReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptGeneralSurgeryCostReportDialog *pVw = (rptGeneralSurgeryCostReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptGeneralSurgeryCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralSurgeryCostReportDialog*)pWnd)->OnAddrptGeneralSurgeryCostReportDialog();
} 
static int _OnEditrptGeneralSurgeryCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralSurgeryCostReportDialog*)pWnd)->OnEditrptGeneralSurgeryCostReportDialog();
} 
static int _OnDeleterptGeneralSurgeryCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralSurgeryCostReportDialog*)pWnd)->OnDeleterptGeneralSurgeryCostReportDialog();
} 
static int _OnSaverptGeneralSurgeryCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralSurgeryCostReportDialog*)pWnd)->OnSaverptGeneralSurgeryCostReportDialog();
} 
static int _OnCancelrptGeneralSurgeryCostReportDialogFnc(CWnd *pWnd){
	 return ((rptGeneralSurgeryCostReportDialog*)pWnd)->OnCancelrptGeneralSurgeryCostReportDialog();
} 
rptGeneralSurgeryCostReportDialog::rptGeneralSurgeryCostReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 125;
	SetDefaultValues();
	m_bPreview = true;
}
rptGeneralSurgeryCostReportDialog::~rptGeneralSurgeryCostReportDialog(){
}
void rptGeneralSurgeryCostReportDialog::OnCreateComponents(){
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
void rptGeneralSurgeryCostReportDialog::OnInitializeComponents(){
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
void rptGeneralSurgeryCostReportDialog::OnSetWindowEvents(){
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
void rptGeneralSurgeryCostReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptGeneralSurgeryCostReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptGeneralSurgeryCostReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptGeneralSurgeryCostReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptGeneralSurgeryCostReportDialog::SetMode(int nMode){
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
/*void rptGeneralSurgeryCostReportDialog::OnYearChange(){
	
} */
/*void rptGeneralSurgeryCostReportDialog::OnYearSetfocus(){
	
} */
/*void rptGeneralSurgeryCostReportDialog::OnYearKillfocus(){
	
} */
int rptGeneralSurgeryCostReportDialog::OnYearCheckValue(){
	return 0;
} 
void rptGeneralSurgeryCostReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralSurgeryCostReportDialog::OnReportPeriodSelendok(){
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
/*void rptGeneralSurgeryCostReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptGeneralSurgeryCostReportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptGeneralSurgeryCostReportDialog::OnReportPeriodLoadData(){
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
/*void rptGeneralSurgeryCostReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptGeneralSurgeryCostReportDialog::OnFromDateChange(){
	
} */
/*void rptGeneralSurgeryCostReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptGeneralSurgeryCostReportDialog::OnFromDateKillfocus(){
	
} */
int rptGeneralSurgeryCostReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptGeneralSurgeryCostReportDialog::OnToDateChange(){
	
} */
/*void rptGeneralSurgeryCostReportDialog::OnToDateSetfocus(){
	
} */
/*void rptGeneralSurgeryCostReportDialog::OnToDateKillfocus(){
	
} */
int rptGeneralSurgeryCostReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptGeneralSurgeryCostReportDialog::OnExportSelect(){
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
				_T(" 	sum(servcount) as servcount,") \
				_T(" 	sum(ServCost) as servcost,") \
				_T(" 	sum(ServPayment) as servpayment,") \
				_T(" 	sum(inscount) as inscount,") \
				_T(" 	sum(insCost) as inscost,") \
				_T(" 	sum(insPayment) as inspayment,") \
				_T(" 	sum(childcount) as childcount,") \
				_T(" 	sum(childCost) as childcost,") \
				_T(" 	sum(childPayment) as childpayment,") \
				_T(" 	sum(servcount+inscount+childcount) as totalcount,") \
				_T(" 	sum(servcost+inscost+childCost) as totalcost,") \
				_T(" 	sum(servpayment+inspayment+childPayment) as totalpayment") \
				_T(" FROM hms_roomlist") \
				_T(" LEFT JOIN") \
				_T(" (") \
				_T("    SELECT deptid, roomid,") \
				_T(" 	case when ho_type='S' then qty else 0 end as servcount,") \
				_T(" 	case when ho_type='S' then sum(Cost) else 0 end as servcost,") \
				_T(" 	case when ho_type='S' then sum(Payment) else 0 end as servPayment,") \
				_T(" 	case when ho_type='I' then qty else 0 end as inscount,") \
				_T(" 	case when ho_type='I' then sum(Cost) else 0 end as InsCost,") \
				_T(" 	case when ho_type='I' then sum(Payment) else 0 end as InsPayment,") \
				_T(" 	case when ho_type='C' then qty else 0 end as childcount,") \
				_T(" 	case when ho_type='C' then sum(Cost) else 0 end as ChildCost,") \
				_T(" 	case when ho_type='C' then sum(Payment) else 0 end as ChildPayment") \
				_T(" FROM hms_doc ") \
				_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" LEFT JOIN ") \
				_T(" (") \
				_T(" 	SELECT substr(hfe_group, 1, 3) as groupid,") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_roomid as roomid,") \
				_T(" 	hfe_docno as docno,") \
				_T(" 	hfe_idx as orderid,") \
				_T(" 	sum(hfe_qty) as qty,") \
				_T(" 	sum(hfe_cost) as cost,") \
				_T(" 	sum(hfe_patpaid+hfe_difpaid) as payment") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfi_invoiceno=hfe_invoiceno)") \
				_T(" WHERE 	hfi_type='P' ") \
				_T(" 	AND hfi_cost > 0") \
				_T(" 	AND substr(hfe_group, 1, 2)='B5'") \
				_T(" 	AND date(hfi_recvdate) BETWEEN date('%s') and date('%s')") \
				_T(" GROUP BY deptid, roomid, hfe_group, docno, orderid") \
				_T(" ) as tbl ON(docno=hd_docno)") \
				_T(" GROUP BY deptid, roomid, groupid, docno, orderid, ho_type, qty") \
				_T(" ) ") \
				_T(" as tbl2 ON(hrl_deptid=deptid AND hrl_id=roomid)") \
				_T(" WHERE hrl_deptid='%s'") \
				_T(" GROUP BY hrl_deptid, hrl_id, roomname") \
				_T(" ORDER BY deptid, roomid"),m_szFromDate, m_szToDate, pMF->m_szDept); 
	
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0,7);
	xls.SetColumnWidth(1,25);

	xls.SetColumnWidth(2,7);
	xls.SetColumnWidth(3,14);
	xls.SetColumnWidth(4,12);

	xls.SetColumnWidth(5,7);
	xls.SetColumnWidth(6,14);
	xls.SetColumnWidth(7,12);

	xls.SetColumnWidth(8,7);
	xls.SetColumnWidth(9,14);
	xls.SetColumnWidth(10,12);

	xls.SetColumnWidth(11,7);
	xls.SetColumnWidth(12,14);
	xls.SetColumnWidth(13,12);
	xls.SetCellMergedColumns(0,0,2);
	xls.SetCellMergedColumns(0,1,2);
	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12);
	xls.SetCellMergedColumns(0,3,14);	
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O T\x1ED4NG H\x1EE2P \x43HI PH\xCD TH\x1EE6 THU\x1EACT"),FMT_CENTER,true,16);
	xls.SetCellMergedColumns(0,4,14);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0,4, tmpStr,FMT_CENTER,true,10);
	int nRow = 6;
	xls.SetCellMergedRows(0,5,2);
	xls.SetCellMergedRows(1,5,2);

	xls.SetCellText(0, nRow-1, _T("STT"), FMT_CENTER,true,12);	

	TranslateString(_T("Ph\xF2ng kh\xE1m"), tmpStr);
	xls.SetCellText(1, nRow-1, tmpStr, FMT_CENTER,true, 12);
	
	
	xls.SetCellMergedColumns(2,5,3);
	xls.SetCellText(2,5,_T("Vi\x1EC7n ph\xED"),FMT_CENTER,true, 12, 0);

	xls.SetCellText(2, nRow, _T("S\x1ED1 l\x1EA7n"), FMT_CENTER,true);
	TranslateString(_T("\x43hi ph\xED"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_CENTER,true);	
	TranslateString(_T("Income"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_CENTER,true);	
	

	xls.SetCellMergedColumns(5,5,3);
	xls.SetCellText(5,5,_T("\x42\x1EA3o hi\x1EC3m y t\x1EBF"),FMT_CENTER,true, 12, 0);
	xls.SetCellText(5, nRow, _T("S\x1ED1 l\x1EA7n"), FMT_CENTER, true);
	xls.SetCellText(6, nRow, _T("\x43hi ph\xED"), FMT_CENTER,true);
	TranslateString(_T("Income"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_CENTER,true);
	
	xls.SetCellMergedColumns(8,5,3);
	xls.SetCellText(8,5,_T("Tr\x1EBB \x65m"),FMT_CENTER,true, 12, 0);
	xls.SetCellText(8, nRow, _T("S\x1ED1 l\x1EA7n"), FMT_CENTER,true);
	TranslateString(_T("\x43hi ph\xED"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_CENTER,true);
	TranslateString(_T("Income"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_CENTER,true);	

	xls.SetCellMergedColumns(11,5,3);
	xls.SetCellText(11,5,_T("T\x1ED5ng \x63\x1ED9ng"),FMT_CENTER,true, 12, 0);
	TranslateString(_T("S\x1ED1 l\x1EA7n"),tmpStr);
	xls.SetCellText(11, nRow, tmpStr,FMT_CENTER, true);
	TranslateString(_T("T\x1ED5ng \x63hi ph\xED"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_CENTER,true);	
	TranslateString(_T("T\x1ED5ng thu"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_CENTER,true);
	int nIndex = 1;
	int nTotal[14];
	for (int i = 2;i<=14;i++)
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

		rs.GetValue(_T("servcount"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("servcost"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("servpayment"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("inscount"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("inscost"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("inspayment"), tmpStr);		
		nTotal[7] += ToInt(tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("childcount"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("childcost"), tmpStr);
		nTotal[9] += ToInt(tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("childpayment"), tmpStr);
		nTotal[10] += ToInt(tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("totalcount"), tmpStr);
		nTotal[11] += ToInt(tmpStr);
		xls.SetCellText(11, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("totalcost"), tmpStr);
		nTotal[12] += ToInt(tmpStr);
		xls.SetCellText(12, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("totalpayment"), tmpStr);
		nTotal[13] += ToInt(tmpStr);
		xls.SetCellText(13, nRow, tmpStr, FMT_NUMBER1);
		rs.MoveNext();
	}
	nRow++;
	TranslateString(_T("T\x1ED5ng"),tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_CENTER, true, 12);
	for (int i =2; i <= 14; i++){		
		tmpStr.Format(_T("%ld"),nTotal[i] );		
		xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true, 12);
	}
	xls.Save(_T("Exports\\Bao cao tong hop chi phi thu thuat.xls"));
} 
void rptGeneralSurgeryCostReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	PrintGeneralSurgeryCostReport(m_szFromDate, m_szToDate);
} 
void rptGeneralSurgeryCostReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptGeneralSurgeryCostReportDialog::OnAddrptGeneralSurgeryCostReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptGeneralSurgeryCostReportDialog::OnEditrptGeneralSurgeryCostReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptGeneralSurgeryCostReportDialog::OnDeleterptGeneralSurgeryCostReportDialog(){
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
 		OnCancelrptGeneralSurgeryCostReportDialog(); 
 	}
	return 0;
}
int rptGeneralSurgeryCostReportDialog::OnSaverptGeneralSurgeryCostReportDialog(){
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
 		//OnrptGeneralSurgeryCostReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptGeneralSurgeryCostReportDialog::OnCancelrptGeneralSurgeryCostReportDialog(){
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
int rptGeneralSurgeryCostReportDialog::OnrptGeneralSurgeryCostReportDialogListLoadData(){
	return 0;
}
void rptGeneralSurgeryCostReportDialog::PrintGeneralSurgeryCostReport(CString szFromDate, CString szToDate){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CReport rpt; 
	szSQL.Format(_T(" SELECT 	hrl_deptid as deptid,") \
				_T(" 	hrl_id as roomid,") \
				_T(" 	hrl_name as roomname,") \
				_T(" 	sum(servcount) as servcount,") \
				_T(" 	sum(ServCost) as servcost,") \
				_T(" 	sum(ServPayment) as servpayment,") \
				_T(" 	sum(inscount) as inscount,") \
				_T(" 	sum(insCost) as inscost,") \
				_T(" 	sum(insPayment) as inspayment,") \
				_T(" 	sum(childcount) as childcount,") \
				_T(" 	sum(childCost) as childcost,") \
				_T(" 	sum(childPayment) as childpayment,") \
				_T(" 	sum(servcount+inscount+childcount) as totalcount,") \
				_T(" 	sum(servcost+inscost+childCost) as totalcost,") \
				_T(" 	sum(servpayment+inspayment+childPayment) as totalpayment") \
				_T(" FROM hms_roomlist") \
				_T(" LEFT JOIN") \
				_T(" (") \
				_T("    SELECT deptid, roomid,") \
				_T(" 	case when ho_type='S' then qty else 0 end as servcount,") \
				_T(" 	case when ho_type='S' then sum(Cost) else 0 end as servcost,") \
				_T(" 	case when ho_type='S' then sum(Payment) else 0 end as servPayment,") \
				_T(" 	case when ho_type='I' then qty else 0 end as inscount,") \
				_T(" 	case when ho_type='I' then sum(Cost) else 0 end as InsCost,") \
				_T(" 	case when ho_type='I' then sum(Payment) else 0 end as InsPayment,") \
				_T(" 	case when ho_type='C' then qty else 0 end as childcount,") \
				_T(" 	case when ho_type='C' then sum(Cost) else 0 end as ChildCost,") \
				_T(" 	case when ho_type='C' then sum(Payment) else 0 end as ChildPayment") \
				_T(" FROM hms_doc ") \
				_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" LEFT JOIN ") \
				_T(" (") \
				_T(" 	SELECT substr(hfe_group, 1, 3) as groupid,") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_roomid as roomid,") \
				_T(" 	hfe_docno as docno,") \
				_T(" 	hfe_idx as orderid,") \
				_T(" 	sum(hfe_qty) as qty,") \
				_T(" 	sum(hfe_cost) as cost,") \
				_T(" 	sum(hfe_patpaid+hfe_difpaid) as payment") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hmsv_fee ON(hfe_docno=hfi_docno AND hfi_invoiceno=hfe_invoiceno)") \
				_T(" WHERE 	hfi_type='P' ") \
				_T(" 	AND hfi_cost > 0") \
				_T(" 	AND substr(hfe_group, 1, 2)='B5'") \
				_T(" 	AND date(hfi_recvdate) BETWEEN date('%s') and date('%s')") \
				_T(" GROUP BY deptid, roomid, hfe_group, docno, orderid") \
				_T(" ) as tbl ON(docno=hd_docno)") \
				_T(" GROUP BY deptid, roomid, groupid, docno, orderid, ho_type, qty") \
				_T(" ) ") \
				_T(" as tbl2 ON(hrl_deptid=deptid AND hrl_id=roomid)") \
				_T(" WHERE hrl_deptid='%s'") \
				_T(" GROUP BY hrl_deptid, hrl_id, roomname") \
				_T(" ORDER BY deptid, roomid") , szFromDate, szToDate,pMF->m_szDept); 
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rpt.Init(_T("Reports/HMS/HE_GENERALSURGERYCOSTREPORT.RPT")))
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	/*rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);*/
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;
	double nTotal[12];
	for (int i =0; i < 12; i++)
		nTotal[i] = 0;

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("Index"), tmpStr);
		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("roomname"), tmpStr);

		rs.GetValue(_T("servcount"), tmpStr);
		nTotal[0] += ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("servcost"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("servpayment"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("inscount"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("inscost"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("inspayment"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("childcount"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("childcost"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("childpayment"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("totalcount"), tmpStr);
		nTotal[9] += ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T("totalcost"), tmpStr);
		nTotal[10] += ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		rs.GetValue(_T("totalpayment"), tmpStr);
		nTotal[11] += ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.MoveNext();
	}
	for (int i =0; i < 12; i++){
		tmpStr.Format(_T("sum%d"), i+1);
		rpt.GetReportFooter()->SetValue(tmpStr, ToString(nTotal[i]));		
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		rpt.PrintPreview();
}
