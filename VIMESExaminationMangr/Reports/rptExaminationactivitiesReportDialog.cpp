#include "rptExaminationactivitiesReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptExaminationactivitiesReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptExaminationactivitiesReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptExaminationactivitiesReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptExaminationactivitiesReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptExaminationactivitiesReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptExaminationactivitiesReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptExaminationactivitiesReportDialog *pVw = (rptExaminationactivitiesReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptExaminationactivitiesReportDialog *pVw = (rptExaminationactivitiesReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptExaminationactivitiesReportDialog *pVw = (rptExaminationactivitiesReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptExaminationactivitiesReportDialogFnc(CWnd *pWnd){
	 return ((rptExaminationactivitiesReportDialog*)pWnd)->OnAddrptExaminationactivitiesReportDialog();
} 
static int _OnEditrptExaminationactivitiesReportDialogFnc(CWnd *pWnd){
	 return ((rptExaminationactivitiesReportDialog*)pWnd)->OnEditrptExaminationactivitiesReportDialog();
} 
static int _OnDeleterptExaminationactivitiesReportDialogFnc(CWnd *pWnd){
	 return ((rptExaminationactivitiesReportDialog*)pWnd)->OnDeleterptExaminationactivitiesReportDialog();
} 
static int _OnSaverptExaminationactivitiesReportDialogFnc(CWnd *pWnd){
	 return ((rptExaminationactivitiesReportDialog*)pWnd)->OnSaverptExaminationactivitiesReportDialog();
} 
static int _OnCancelrptExaminationactivitiesReportDialogFnc(CWnd *pWnd){
	 return ((rptExaminationactivitiesReportDialog*)pWnd)->OnCancelrptExaminationactivitiesReportDialog();
} 
rptExaminationactivitiesReportDialog::rptExaminationactivitiesReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 125;
	SetDefaultValues();
	m_bPreview = true;
}
rptExaminationactivitiesReportDialog::~rptExaminationactivitiesReportDialog(){
}
void rptExaminationactivitiesReportDialog::OnCreateComponents(){
	m_wndReportConditio.Create(this, _T("Report Condition"), 5, 5, 360, 90);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 180, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 185, 30, 265, 55);
	m_wndReportPeriod.Create(this,270, 30, 355, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 180, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 60, 265, 85);
	m_wndToDate.Create(this,270, 60, 355, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 125, 95, 200, 120);
	m_wndPrint.Create(this, _T("&Export"), 205, 95, 280, 120);
	m_wndClose.Create(this, _T("&Close"), 285, 95, 360, 120);

}
void rptExaminationactivitiesReportDialog::OnInitializeComponents(){
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
void rptExaminationactivitiesReportDialog::OnSetWindowEvents(){
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
void rptExaminationactivitiesReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptExaminationactivitiesReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptExaminationactivitiesReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptExaminationactivitiesReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptExaminationactivitiesReportDialog::SetMode(int nMode){
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
/*void rptExaminationactivitiesReportDialog::OnYearChange(){
	
} */
/*void rptExaminationactivitiesReportDialog::OnYearSetfocus(){
	
} */
/*void rptExaminationactivitiesReportDialog::OnYearKillfocus(){
	
} */
int rptExaminationactivitiesReportDialog::OnYearCheckValue(){
	return 0;
} 
void rptExaminationactivitiesReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptExaminationactivitiesReportDialog::OnReportPeriodSelendok(){
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
/*void rptExaminationactivitiesReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptExaminationactivitiesReportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptExaminationactivitiesReportDialog::OnReportPeriodLoadData(){
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
/*void rptExaminationactivitiesReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptExaminationactivitiesReportDialog::OnFromDateChange(){
	
} */
/*void rptExaminationactivitiesReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptExaminationactivitiesReportDialog::OnFromDateKillfocus(){
	
} */
int rptExaminationactivitiesReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptExaminationactivitiesReportDialog::OnToDateChange(){
	
} */
/*void rptExaminationactivitiesReportDialog::OnToDateSetfocus(){
	
} */
/*void rptExaminationactivitiesReportDialog::OnToDateKillfocus(){
	
} */
int rptExaminationactivitiesReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptExaminationactivitiesReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = true;
	PrintExaminationactivitiesReport(m_szFromDate, m_szToDate, m_bPreview);
	UpdateData(false);
} 
void rptExaminationactivitiesReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	ExportExaminationactivitiesReport();
	UpdateData(false);
} 
void rptExaminationactivitiesReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptExaminationactivitiesReportDialog::OnAddrptExaminationactivitiesReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptExaminationactivitiesReportDialog::OnEditrptExaminationactivitiesReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptExaminationactivitiesReportDialog::OnDeleterptExaminationactivitiesReportDialog(){
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
 		OnCancelrptExaminationactivitiesReportDialog(); 
 	}
	return 0;
}
int rptExaminationactivitiesReportDialog::OnSaverptExaminationactivitiesReportDialog(){
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
 		//OnrptExaminationactivitiesReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptExaminationactivitiesReportDialog::OnCancelrptExaminationactivitiesReportDialog(){
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
int rptExaminationactivitiesReportDialog::OnrptExaminationactivitiesReportDialogListLoadData(){
	return 0;
}
void rptExaminationactivitiesReportDialog::PrintExaminationactivitiesReport(CString szFromDate, CString szToDate, bool bPreview){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere, szAmount;
	CString szDate, szSysDate;	
	CReport rpt; 

	if(!rpt.Init(_T("Reports/HMS/HE_EXAMINATIONACTIVITIESREPORT.RPT")))
		return ;
	
	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	
szSQL.Format(_T(" SELECT 	deptid, roomid, hrl_name as roomname, ") \
_T("	sum(insuranceexam+serviceexam+discountexam) as totalexam, ") \
_T(" 	sum(insuranceexam) as insexam,") \
_T(" 	sum(serviceexam) as servexam,") \
_T(" 	sum(discountexam) as discountexam,") \
_T(" 	sum(emergencyexam) as emergencyexam,") \
_T(" 	sum(admission) as admission,") \
_T(" 	sum(transfer) as transfer,") \
_T(" 	sum(outpatient) as outpatient,") \
_T(" 	sum(treatdays) as treatdays") \
_T(" FROM") \
_T(" (") \
_T(" SELECT 	hd_admitdept as deptid, he_roomid as roomid,") \
_T(" 	case when ho_type in('I','C') and he_status <> 'O' and date(he_examdate) between date('%s') and date('%s') then 1 else 0 end as insuranceexam,") \
_T(" 	case when ho_type in('S') and he_status <> 'O' and date(he_examdate) between date('%s') and date('%s') then 1 else 0 end as serviceexam,") \
_T(" 	case when ho_type in('D') and he_status <> 'O' and date(he_examdate) between date('%s') and date('%s') then 1 else 0 end as discountexam,") \
_T(" 	case when he_emergency='Y' and he_status <> 'O' and date(he_examdate) between date('%s') and date('%s') then 1 else 0 end as emergencyexam,") \
_T(" 	case when hd_suggestion='A' and hd_status='T' and hd_status='T'  and hcr_status in('I','T') and he_receptidx=hd_areceptidx and date(hd_enddate) between date('%s') and date('%s') then 1 else 0 end as admission,") \
_T(" 	case when hd_suggestion='T' and hd_status='T' and he_receptidx=hd_areceptidx and date(hd_enddate) between date('%s') and date('%s') then 1 else 0 end as transfer,") \
_T(" 	case when hd_suggestion='O' and hd_status='T' and hd_outpatient='Y' and date(hd_enddate) between date('%s') and date('%s') then 1 else 0 end as outpatient,") \
_T(" 	case when hd_suggestion='O' and hd_status='T' and hd_outpatient='Y' and date(hd_enddate) between date('%s') and date('%s') then hop_treatdays else 0 end as treatdays ") \
_T(" FROM hms_doc ") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
_T(" LEFT JOIN hms_object ON(hd_object=ho_id)") \
_T(" LEFT JOIN hms_outpatient ON(hop_docno=hd_docno)") \
_T(" WHERE 	 hd_admitdept='%s' ") \
_T(" ) as tbl") \
_T(" LEFT JOIN hms_roomlist ON(deptid=hrl_deptid and roomid=hrl_id)") \
_T(" WHERE hrl_id > 0 ") \
_T(" GROUP BY deptid, roomid, roomname ") \
_T(" ORDER BY deptid, roomid"), m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,
m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,pMF->m_szDept); 

	BeginWaitCursor();
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;
	long nTotal[10];
	for (int i =0; i < 9; i++)
		nTotal[i] = 0;

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("Index"), tmpStr);
		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("roomname"), tmpStr);

		rs.GetValue(_T("totalExam"), tmpStr);
		nTotal[0] += ToInt(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("insexam"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("servexam"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("discountexam"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("emergencyexam"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("admission"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("transfer"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("outpatient"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("treatdays"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.MoveNext();
	}
	rptDetail = rpt.AddDetail();
	rptDetail->GetItem(_T("roomname"))->SetBold(true);
	TranslateString(_T("Total"),tmpStr);
	rptDetail->SetValue(_T("roomname"),tmpStr);
	for (int i =0; i < 9; i++){
		tmpStr.Format(_T("%d"), i+1);
		szAmount.Format(_T("%ld"),nTotal[i]);
		rptDetail->GetItem(tmpStr)->SetBold(true);
		rptDetail->SetValue(tmpStr, szAmount);
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	rpt.PrintPreview();
	EndWaitCursor();
}
void rptExaminationactivitiesReportDialog::ExportExaminationactivitiesReport(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere, szAmount;
	CString szDate, szSysDate;	
	CReport rpt; 
	
	szSysDate = pMF->GetSysDate(); 
	
		
	szSQL.Format(_T(" SELECT 	deptid, roomid, hrl_name as roomname, ") \
	_T("	sum(insuranceexam+serviceexam+discountexam) as totalexam, ") \
	_T(" 	sum(insuranceexam) as insexam,") \
	_T(" 	sum(serviceexam) as servexam,") \
	_T(" 	sum(discountexam) as discountexam,") \
	_T(" 	sum(emergencyexam) as emergencyexam,") \
	_T(" 	sum(admission) as admission,") \
	_T(" 	sum(transfer) as transfer,") \
	_T(" 	sum(outpatient) as outpatient,") \
	_T(" 	sum(treatdays) as treatdays") \
	_T(" FROM") \
	_T(" (") \
	_T(" SELECT 	hd_admitdept as deptid, he_roomid as roomid,") \
	_T(" 	case when ho_type in('I','C') and he_status <> 'O' and date(he_examdate) between date('%s') and date('%s') then 1 else 0 end as insuranceexam,") \
	_T(" 	case when ho_type in('S') and he_status <> 'O' and date(he_examdate) between date('%s') and date('%s') then 1 else 0 end as serviceexam,") \
	_T(" 	case when ho_type in('D') and he_status <> 'O' and date(he_examdate) between date('%s') and date('%s') then 1 else 0 end as discountexam,") \
	_T(" 	case when he_emergency='Y' and he_status <> 'O' and date(he_examdate) between date('%s') and date('%s') then 1 else 0 end as emergencyexam,") \
	_T(" 	case when hd_suggestion='A' and hd_status='T' and hd_status='T'  and hcr_status in('I','T') and he_receptidx=hd_areceptidx and date(hd_enddate) between date('%s') and date('%s') then 1 else 0 end as admission,") \
	_T(" 	case when hd_suggestion='T' and hd_status='T' and he_receptidx=hd_areceptidx and date(hd_enddate) between date('%s') and date('%s') then 1 else 0 end as transfer,") \
	_T(" 	case when hd_suggestion='O' and hd_status='T' and hd_outpatient='Y' and date(hd_enddate) between date('%s') and date('%s') then 1 else 0 end as outpatient,") \
	_T(" 	case when hd_suggestion='O' and hd_status='T' and hd_outpatient='Y' and date(hd_enddate) between date('%s') and date('%s') then hop_treatdays else 0 end as treatdays ") \
	_T(" FROM hms_doc ") \
	_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
	_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
	_T(" LEFT JOIN hms_object ON(hd_object=ho_id)") \
	_T(" LEFT JOIN hms_outpatient ON(hop_docno=hd_docno)") \
	_T(" WHERE 	 hd_admitdept='%s' ") \
	_T(" ) as tbl") \
	_T(" LEFT JOIN hms_roomlist ON(deptid=hrl_deptid and roomid=hrl_id)") \
	_T(" WHERE hrl_id > 0 ") \
	_T(" GROUP BY deptid, roomid, roomname ") \
	_T(" ORDER BY deptid, roomid"), m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,
	m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,pMF->m_szDept); 
	

	BeginWaitCursor();
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
		
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.SetCellMergedColumns(0,3,12);	
	xls.SetCellText(0, 4, _T("BAO CAO HOAT DONG DIEU TRI"),true,16,0);
	xls.SetCellMergedColumns(0,4,12);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,12,0);
	
	int nRow = 7, age=0;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Exam Room"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Total"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Service"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("UnCollected"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Emergency"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	
	TranslateString(_T("Admission"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	

	TranslateString(_T("Transfer Hospital"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);	

	TranslateString(_T("Outpatient"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Treat Days"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);	
	
	int nIndex = 1, SongayDT=0;
	int i=0,nTotal[11];
	for (i=0;i<11;i++)
	{
		nTotal[i]=0;
	}
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		nRow++;		
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("totalexam"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("insexam"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("servexam"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("discountexam"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("emergencyexam"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("admission"), tmpStr);		
		nTotal[7] += ToInt(tmpStr);
		tmpStr.Format(_T("%ld"), SongayDT);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("Transfer"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("outpatient"), tmpStr);
		nTotal[9] += ToInt(tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("treatdays"), tmpStr);
		nTotal[10] += ToInt(tmpStr);		
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER1);		
		rs.MoveNext();
	}
	
	nRow++;
	TranslateString(_T("Total"),tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
	for (int i =0; i <= 10; i++){		
		tmpStr.Format(_T("%ld"),nTotal[i] );		
		xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
	}

	xls.Save(_T("Exports\\Bao cao hoat dong kham benh.xls"));
	EndWaitCursor();
} 
