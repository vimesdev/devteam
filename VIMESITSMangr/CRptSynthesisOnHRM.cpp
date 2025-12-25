#include "CRptSynthesisOnHRM.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CCRptSynthesisOnHRM *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCRptSynthesisOnHRM* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CCRptSynthesisOnHRM *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCRptSynthesisOnHRM *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCRptSynthesisOnHRM *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCRptSynthesisOnHRM* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCRptSynthesisOnHRM *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCRptSynthesisOnHRM *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCRptSynthesisOnHRM *pVw = (CCRptSynthesisOnHRM *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CCRptSynthesisOnHRM *pVw = (CCRptSynthesisOnHRM *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCRptSynthesisOnHRM *pVw = (CCRptSynthesisOnHRM *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCRptSynthesisOnHRMFnc(CWnd *pWnd){
	 return ((CCRptSynthesisOnHRM*)pWnd)->OnAddCRptSynthesisOnHRM();
} 
static int _OnEditCRptSynthesisOnHRMFnc(CWnd *pWnd){
	 return ((CCRptSynthesisOnHRM*)pWnd)->OnEditCRptSynthesisOnHRM();
} 
static int _OnDeleteCRptSynthesisOnHRMFnc(CWnd *pWnd){
	 return ((CCRptSynthesisOnHRM*)pWnd)->OnDeleteCRptSynthesisOnHRM();
} 
static int _OnSaveCRptSynthesisOnHRMFnc(CWnd *pWnd){
	 return ((CCRptSynthesisOnHRM*)pWnd)->OnSaveCRptSynthesisOnHRM();
} 
static int _OnCancelCRptSynthesisOnHRMFnc(CWnd *pWnd){
	 return ((CCRptSynthesisOnHRM*)pWnd)->OnCancelCRptSynthesisOnHRM();
} 
CCRptSynthesisOnHRM::CCRptSynthesisOnHRM(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CCRptSynthesisOnHRM::~CCRptSynthesisOnHRM(){
}
void CCRptSynthesisOnHRM::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 360, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 180, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 185, 30, 265, 55);
	m_wndReportPeriod.Create(this,270, 30, 355, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 180, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 60, 265, 85);
	m_wndToDate.Create(this,270, 60, 355, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 90, 115);
	m_wndDepartment.Create(this,95, 90, 355, 115); 
	m_wndPrint.Create(this, _T("&Print"), 125, 125, 200, 150);
	m_wndExport.Create(this, _T("&Export"), 205, 125, 280, 150);
	m_wndClose.Create(this, _T("&Close"), 285, 124, 360, 149);
}
void CCRptSynthesisOnHRM::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	//m_wndYear.SetCheckValue(true);
	//m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void CCRptSynthesisOnHRM::OnSetWindowEvents(){
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
	SetMode(VM_EDIT);

}
void CCRptSynthesisOnHRM::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CCRptSynthesisOnHRM::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCRptSynthesisOnHRM::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
void CCRptSynthesisOnHRM::SetDefaultValues(){
	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
}
int CCRptSynthesisOnHRM::SetMode(int nMode){
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
 			EnableButtons(TRUE,0,1,2,3,-1); 
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
/*void CCRptSynthesisOnHRM::OnYearChange(){
	
} */
/*void CCRptSynthesisOnHRM::OnYearSetfocus(){
	
} */
/*void CCRptSynthesisOnHRM::OnYearKillfocus(){
	
} */
int CCRptSynthesisOnHRM::OnYearCheckValue(){
	return 0;
} 
void CCRptSynthesisOnHRM::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCRptSynthesisOnHRM::OnReportPeriodSelendok(){
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
/*void CCRptSynthesisOnHRM::OnReportPeriodSetfocus(){
	
}*/
/*void CCRptSynthesisOnHRM::OnReportPeriodKillfocus(){
	
}*/
long CCRptSynthesisOnHRM::OnReportPeriodLoadData(){
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
/*void CCRptSynthesisOnHRM::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCRptSynthesisOnHRM::OnFromDateChange(){
	
} */
/*void CCRptSynthesisOnHRM::OnFromDateSetfocus(){
	
} */
/*void CCRptSynthesisOnHRM::OnFromDateKillfocus(){
	
} */
int CCRptSynthesisOnHRM::OnFromDateCheckValue(){
	return 0;
} 
/*void CCRptSynthesisOnHRM::OnToDateChange(){
	
} */
/*void CCRptSynthesisOnHRM::OnToDateSetfocus(){
	
} */
/*void CCRptSynthesisOnHRM::OnToDateKillfocus(){
	
} */
int CCRptSynthesisOnHRM::OnToDateCheckValue(){
	UpdateData(TRUE);
	CDate date;
	date.ParseDate(m_szFromDate);
	if (date.GetYear() != 1752 && CompareDateTime(m_szToDate, m_szFromDate) < 0)
	{
		m_wndToDate.SetToolTipMessage(_T("This value must be greater than or equal to From Date"));
		return -1;
	}
	return 0;
} 
void CCRptSynthesisOnHRM::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCRptSynthesisOnHRM::OnDepartmentSelendok(){
	 
}
/*void CCRptSynthesisOnHRM::OnDepartmentSetfocus(){
	
}*/
/*void CCRptSynthesisOnHRM::OnDepartmentKillfocus(){
	
}*/
long CCRptSynthesisOnHRM::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" where sd_id = '%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept %s "), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCRptSynthesisOnHRM::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCRptSynthesisOnHRM::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CRecord rs(&pMF->m_db);
	CString m_szID;
	CString szNewLine, szOldLine;
	CReport rpt;
	if(!rpt.Init(_T("Reports/ReportHRM/RPTBaocaotonghopvenhansu.rpt")) )
		return;
	UpdateData(true);
	BeginWaitCursor();
	if (!m_wndDepartment.GetCurrent(0).IsEmpty())
		szWhere.Format(_T(" and empl_dept ='%s' "), m_wndDepartment.GetCurrent(0));

	szSQL.Format(_T(" select	khoa,") \
				_T(" 	(select sd_name from sys_dept where khoa = sd_id and rownum <= 1) as empl_dept1,") \
				_T(" 	sum(tongnv) as tongnv,") \
				_T(" 	sum(nvchinhthuc) as nvchinhthuc,") \
				_T(" 	sum(nvthuviec) as nvthuviec,") \
				_T(" 	sum(nvcothe) as nvcothe,") \
				_T(" 	sum(nvcoso) as nvcoso,") \
				_T(" 	sum(vangmat) as vangmat,") \
				_T(" 	sum(khenthuong) as khenthuong,") \
				_T(" 	sum(kyluat) as kyluat,") \
				_T(" 	sum(trangtb)as trangtb,") \
				_T(" 	sum(daotao)as daotao") \
				_T(" from") \
				_T(" (") \
				_T(" select  empl_dept as khoa,") \
				_T(" 	") \
				_T(" 	case when length(empl_id) >0 then 1 else 0 end as tongnv,") \
				_T(" 	case when date_part('year',empl_entrancedate) != 1752 then 1 else 0 end as nvchinhthuc,") \
				_T(" 	case when date_part('year',empl_entrancedate)  = 1752 then 1 else 0 end as nvthuviec,") \
				_T(" 	case when length(hrmi_cardno)>0 then 1 else 0 end as nvcothe,") \
				_T(" 	case when length(hrmsi_bookno)>0 then 1 else 0 end as nvcoso,") \
				_T(" 	case when length(hrml_emplid)>0 then 1 else 0 end as vangmat,") \
				_T(" 	case when length(hrma_emplid)>0 then 1 else 0 end as khenthuong,") \
				_T(" 	case when length(hrmw_emplid)>0 then 1 else 0 end as kyluat,") \
				_T(" 	case when length(hrmeq_emplid)>0 then 1 else 0 end as trangtb,") \
				_T(" 	case when length(hrmt_emplid)>0 then 1 else 0 end as daotao") \
				_T(" from hrm_employee") \
				_T(" 	left join hrm_exemployee on empl_id = empl_refid ") \
				_T(" 	left join hrm_insurance on empl_id = hrmi_emplid and empl_refid = hrmi_emplid") \
				_T(" 	left join hrm_social_insurance on empl_id = hrmsi_emplid") \
				_T(" 	left join hrm_leave on empl_id = hrml_emplid") \
				_T(" 	left join hrm_award on empl_id = hrma_emplid") \
				_T(" 	left join hrm_warning on empl_id = hrmw_emplid") \
				_T(" 	left join hrm_equipment on empl_id = hrmeq_emplid") \
				_T(" 	left join hrm_training on empl_id = hrmt_emplid") \
				_T(" where  trunc_date(empl_entrancedate) between CAST_STRING2DATE('%s') and CAST_STRING2DATE('%s') and length(empl_dept)>0 %s ") \
				_T(" ) as tbl") \
				_T(" group by khoa") \
				_T(" order by khoa"), m_szFromDate, m_szToDate, szWhere);	
	rs.ExecSQL(szSQL);		
	_fmsg(_T("%s"), szSQL);

	//rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	//rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);

	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	int nIndex = 1;
	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!rs.IsEOF())
	{	
				rptDetail = rpt.AddDetail();
				tmpStr.Format(_T("%d"), nIndex++);
				rptDetail->SetValue(_T("1"), tmpStr);

				rs.GetValue(_T("empl_dept1"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);

				rs.GetValue(_T("tongnv"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);

				rs.GetValue(_T("nvchinhthuc"),tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);

				rs.GetValue(_T("nvthuviec"), tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);

				rs.GetValue(_T("nvcoso"), tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				rs.GetValue(_T("nvcothe"), tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				rs.GetValue(_T("vangmat"), tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				rs.GetValue(_T("khenthuong"), tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);

				rs.GetValue(_T("kyluat"), tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);

				rs.GetValue(_T("trangtb"), tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);

				rs.GetValue(_T("daotao"), tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);

				rs.MoveNext();
	}
	szSysDate = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CCRptSynthesisOnHRM::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szFromDate, szToDate, tmpStr1;
	CString szWhere, szNewLine, szOldLine, szNewLine1;
	CExcel xls;	
	UpdateData(true);
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 11);
	xls.SetColumnWidth(3, 11);
	xls.SetColumnWidth(4, 11);
	xls.SetColumnWidth(5, 11);
	xls.SetColumnWidth(6, 11);
	xls.SetColumnWidth(7, 25);
	xls.SetColumnWidth(8, 11);
	xls.SetColumnWidth(9, 11);
	xls.SetColumnWidth(10,22);
	xls.SetColumnWidth(11,11);
	xls.SetColumnWidth(12,11);
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	//xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname, FMT_CENTER,true, 11);
	//xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name, FMT_CENTER,true, 11);
	xls.SetCellMergedColumns(0,2,13);
	xls.SetCellText(0, 2, _T("\x42\xC1O \x43\xC1O T\x1ED4NG H\x1EE2P V\x1EC0 NH\xC2N S\x1EF0"),FMT_CENTER, true, 16);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellMergedColumns(0,3,13);
	xls.SetCellText(0,3, tmpStr,FMT_CENTER,true,12);
	int nRow = 5;
	int nCol = 0;
	xls.SetCellMergedRows(nCol, nRow-1,2);
	xls.SetCellText(nCol, nRow-1, _T("STT"), FMT_TEXT|FMT_CENTER,true);	

	xls.SetCellMergedRows(nCol+1, nRow-1, 2);
	xls.SetCellText(nCol+1, nRow-1, _T("Kho\x61"),FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedColumns(nCol+2, nRow-1, 3);
	xls.SetCellText(nCol+2, nRow-1, _T("Nh\xE2n vi\xEAn"), FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(nCol+2, nRow, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT|FMT_CENTER,true);	
	xls.SetCellText(nCol+3, nRow, _T("\x43h\xEDnh th\x1EE9\x63"), FMT_TEXT|FMT_CENTER,true);	
	xls.SetCellText(nCol+4, nRow, _T("Th\x1EED vi\x1EC7\x63"), FMT_TEXT|FMT_CENTER,true);	
	xls.SetCellMergedColumns(nCol+5, nRow-1, 2);
	xls.SetCellText(nCol+5, nRow-1, _T("Th\xF4ng tin BH"), FMT_TEXT|FMT_CENTER, true);
	xls.SetCellText(nCol+5, nRow, _T("\x58\xE3 h\x1ED9i"), FMT_TEXT|FMT_CENTER,true);
	xls.SetCellText(nCol+6, nRow, _T("Y t\x1EBF"), FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedRows(nCol+7, nRow-1, 2);
	xls.SetCellText(nCol+7, nRow-1, _T("Ngh\x1EC9 ph\xE9p - v\x1EAFng m\x1EB7t"), FMT_TEXT|FMT_CENTER,true);	
	xls.SetCellMergedRows(nCol+8, nRow-1, 2);
	xls.SetCellText(nCol+8, nRow-1, _T("Kh\x65n th\x1B0\x1EDFng"), FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedRows(nCol+9, nRow-1, 2);
	xls.SetCellText(nCol+9, nRow-1, _T("K\x1EF7 lu\x1EADt"), FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedRows(nCol+10, nRow-1, 2);
	xls.SetCellText(nCol+10, nRow-1, _T("\x110\x1B0\x1EE3\x63 \x63\x1EA5p TB - TL"), FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedRows(nCol+11, nRow-1, 2);
	xls.SetCellText(nCol+11, nRow-1, _T("\x110\xE0o t\x1EA1o"), FMT_TEXT|FMT_CENTER,true);
	xls.SetCellMergedRows(nCol+12, nRow -1,2); 
	xls.SetCellText(nCol+12, nRow-1, _T("Ghi \x63h\xFA"), FMT_TEXT|FMT_CENTER,true);

	BeginWaitCursor();
	if (!m_wndDepartment.GetCurrent(0).IsEmpty())
		szWhere.Format(_T(" and empl_dept ='%s' "), m_wndDepartment.GetCurrent(0));
	szSQL.Format(_T(" select	khoa,") \
				_T(" 	(select sd_name from sys_dept where khoa = sd_id AND ROWNUM <= 1) as empl_dept1,") \
				_T(" 	sum(tongnv) as tongnv,") \
				_T(" 	sum(nvchinhthuc) as nvchinhthuc,") \
				_T(" 	sum(nvthuviec) as nvthuviec,") \
				_T(" 	sum(nvcothe) as nvcothe,") \
				_T(" 	sum(nvcoso) as nvcoso,") \
				_T(" 	sum(vangmat) as vangmat,") \
				_T(" 	sum(khenthuong) as khenthuong,") \
				_T(" 	sum(kyluat) as kyluat,") \
				_T(" 	sum(trangtb)as trangtb,") \
				_T(" 	sum(daotao)as daotao") \
				_T(" from") \
				_T(" (") \
				_T(" select  empl_dept as khoa,") \
				_T(" 	") \
				_T(" 	case when length(empl_id) >0 then 1 else 0 end as tongnv,") \
				_T(" 	case when date_part('year',empl_entrancedate) != 1752 then 1 else 0 end as nvchinhthuc,") \
				_T(" 	case when date_part('year',empl_entrancedate)  = 1752 then 1 else 0 end as nvthuviec,") \
				_T(" 	case when length(hrmi_cardno)>0 then 1 else 0 end as nvcothe,") \
				_T(" 	case when length(hrmsi_bookno)>0 then 1 else 0 end as nvcoso,") \
				_T(" 	case when length(hrml_emplid)>0 then 1 else 0 end as vangmat,") \
				_T(" 	case when length(hrma_emplid)>0 then 1 else 0 end as khenthuong,") \
				_T(" 	case when length(hrmw_emplid)>0 then 1 else 0 end as kyluat,") \
				_T(" 	case when length(hrmeq_emplid)>0 then 1 else 0 end as trangtb,") \
				_T(" 	case when length(hrmt_emplid)>0 then 1 else 0 end as daotao") \
				_T(" from hrm_employee") \
				_T(" 	left join hrm_exemployee on empl_id = empl_refid ") \
				_T(" 	left join hrm_insurance on empl_id = hrmi_emplid and empl_refid = hrmi_emplid") \
				_T(" 	left join hrm_social_insurance on empl_id = hrmsi_emplid") \
				_T(" 	left join hrm_leave on empl_id = hrml_emplid") \
				_T(" 	left join hrm_award on empl_id = hrma_emplid") \
				_T(" 	left join hrm_warning on empl_id = hrmw_emplid") \
				_T(" 	left join hrm_equipment on empl_id = hrmeq_emplid") \
				_T(" 	left join hrm_training on empl_id = hrmt_emplid") \
				_T(" where  date(empl_entrancedate) between date('%s') and ('%s') and length(empl_dept)>0 %s ") \
				_T(" ) tbl") \
				_T(" group by khoa") \
				_T(" order by khoa"), m_szFromDate, m_szToDate, szWhere);			
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Kh\xF4ng \x63\xF3 \x64\x1EEF li\x1EC7u"), MB_OK);
		return ;
	}
	int nIndex = 1;
	nRow = 6;
	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("empl_dept1"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
//  tong so
		rs.GetValue(_T("tongnv"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1);
// chinh thuc
		rs.GetValue(_T("nvchinhthuc"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);
// thu viec	
		rs.GetValue(_T("nvthuviec"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);
// xa hoi
		rs.GetValue(_T("nvcoso"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);
// y te
		rs.GetValue(_T("nvcothe"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);
// nghi phep - vang mat	
		rs.GetValue(_T("vangmat"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);
// khen thuong
		rs.GetValue(_T("khenthuong"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
// ky luat
		rs.GetValue(_T("kyluat"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
// trang thiet bi
		rs.GetValue(_T("trangtb"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
// ky luat
		rs.GetValue(_T("daotao"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BAO CAO TONG HOP VE NHAN SU.xls"));
	
} 
void CCRptSynthesisOnHRM::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CCRptSynthesisOnHRM::OnAddCRptSynthesisOnHRM(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CCRptSynthesisOnHRM::OnEditCRptSynthesisOnHRM(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CCRptSynthesisOnHRM::OnDeleteCRptSynthesisOnHRM(){
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
 		OnCancelCRptSynthesisOnHRM(); 
 	}
	return 0;
}
int CCRptSynthesisOnHRM::OnSaveCRptSynthesisOnHRM(){
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
 		//OnCRptSynthesisOnHRMListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CCRptSynthesisOnHRM::OnCancelCRptSynthesisOnHRM(){
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
int CCRptSynthesisOnHRM::OnCRptSynthesisOnHRMListLoadData(){
	return 0;
}
