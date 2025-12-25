#include "rptPatientAccidentList.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptPatientAccidentList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptPatientAccidentList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptPatientAccidentList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptPatientAccidentList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptPatientAccidentList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeAccidentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptPatientAccidentList* )pWnd)->OnTypeAccidentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeAccidentSelendokFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnTypeAccidentSelendok();
}
/*static void _OnTypeAccidentSetfocusFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnTypeAccidentKillfocus();
}*/
/*static void _OnTypeAccidentKillfocusFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnTypeAccidentKillfocus();
}*/
static long _OnTypeAccidentLoadDataFnc(CWnd *pWnd){
	return ((rptPatientAccidentList *)pWnd)->OnTypeAccidentLoadData();
}
/*static void _OnTypeAccidentAddNewFnc(CWnd *pWnd){
	((rptPatientAccidentList *)pWnd)->OnTypeAccidentAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptPatientAccidentList *pVw = (rptPatientAccidentList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptPatientAccidentList *pVw = (rptPatientAccidentList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptPatientAccidentList *pVw = (rptPatientAccidentList *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptPatientAccidentListFnc(CWnd *pWnd){
	 return ((rptPatientAccidentList*)pWnd)->OnAddrptPatientAccidentList();
} 
static int _OnEditrptPatientAccidentListFnc(CWnd *pWnd){
	 return ((rptPatientAccidentList*)pWnd)->OnEditrptPatientAccidentList();
} 
static int _OnDeleterptPatientAccidentListFnc(CWnd *pWnd){
	 return ((rptPatientAccidentList*)pWnd)->OnDeleterptPatientAccidentList();
} 
static int _OnSaverptPatientAccidentListFnc(CWnd *pWnd){
	 return ((rptPatientAccidentList*)pWnd)->OnSaverptPatientAccidentList();
} 
static int _OnCancelrptPatientAccidentListFnc(CWnd *pWnd){
	 return ((rptPatientAccidentList*)pWnd)->OnCancelrptPatientAccidentList();
} 
rptPatientAccidentList::rptPatientAccidentList(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 400;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
rptPatientAccidentList::~rptPatientAccidentList(){
}
void rptPatientAccidentList::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 200, 30, 280, 55);
	m_wndReportPeriod.Create(this,285, 30, 390, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 200, 85); 
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 395, 120);
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 60, 280, 85);
	m_wndToDate.Create(this,285, 60, 390, 85); 
	m_wndTypeAccidentLabel.Create(this, _T("Type Accident"), 10, 90, 90, 115);
	m_wndTypeAccident.Create(this,95, 90, 390, 115); 
	m_wndPrint.Create(this, _T("&Print"), 160, 125, 235, 150);
	m_wndExport.Create(this, _T("&Export"), 240, 125, 315, 150);
	m_wndClose.Create(this, _T("&Close"), 319, 125, 394, 150);

}
void rptPatientAccidentList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndTypeAccident.SetCheckValue(true);
	m_wndTypeAccident.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndTypeAccident.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTypeAccident.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void rptPatientAccidentList::OnSetWindowEvents(){
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
	m_wndTypeAccident.SetEvent(WE_SELENDOK, _OnTypeAccidentSelendokFnc);
	//m_wndTypeAccident.SetEvent(WE_SETFOCUS, _OnTypeAccidentSetfocusFnc);
	//m_wndTypeAccident.SetEvent(WE_KILLFOCUS, _OnTypeAccidentKillfocusFnc);
	m_wndTypeAccident.SetEvent(WE_SELCHANGE, _OnTypeAccidentSelectChangeFnc);
	m_wndTypeAccident.SetEvent(WE_LOADDATA, _OnTypeAccidentLoadDataFnc);
	//m_wndTypeAccident.SetEvent(WE_ADDNEW, _OnTypeAccidentAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDateTime();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
//	m_szReportPeriodKey = _T("");
	SetMode(VM_EDIT);


}
void rptPatientAccidentList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndTypeAccident.GetDlgCtrlID(), m_szTypeAccidentKey);

}
void rptPatientAccidentList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptPatientAccidentList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptPatientAccidentList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeAccidentKey.Empty();

}
int rptPatientAccidentList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0,1,2, -1); 
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
/*void rptPatientAccidentList::OnYearChange(){
	
} */
/*void rptPatientAccidentList::OnYearSetfocus(){
	
} */
/*void rptPatientAccidentList::OnYearKillfocus(){
	
} */
int rptPatientAccidentList::OnYearCheckValue(){
	return 0;
} 
void rptPatientAccidentList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptPatientAccidentList::OnReportPeriodSelendok(){
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
/*void rptPatientAccidentList::OnReportPeriodSetfocus(){
	
}*/
/*void rptPatientAccidentList::OnReportPeriodKillfocus(){
	
}*/
long rptPatientAccidentList::OnReportPeriodLoadData(){
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
/*void rptPatientAccidentList::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptPatientAccidentList::OnFromDateChange(){
	
} */
/*void rptPatientAccidentList::OnFromDateSetfocus(){
	
} */
/*void rptPatientAccidentList::OnFromDateKillfocus(){
	
} */
int rptPatientAccidentList::OnFromDateCheckValue(){
UpdateData(TRUE);
	CDate date;
	date.ParseDate(m_szToDate);
	if (date.GetYear() != 1752 && CompareDateTime(m_szFromDate, m_szToDate) > 0)
	{

		m_wndFromDate.SetToolTipMessage(_T("This value must be less than or equal to To Date"));
		return -1;
	}
	return 0;

} 
/*void rptPatientAccidentList::OnToDateChange(){
	
} */
/*void rptPatientAccidentList::OnToDateSetfocus(){
	
} */
/*void rptPatientAccidentList::OnToDateKillfocus(){
	
} */
int rptPatientAccidentList::OnToDateCheckValue(){
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
void rptPatientAccidentList::OnTypeAccidentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptPatientAccidentList::OnTypeAccidentSelendok(){
	 
}
/*void rptPatientAccidentList::OnTypeAccidentSetfocus(){
	
}*/
/*void rptPatientAccidentList::OnTypeAccidentKillfocus(){
	
}*/
long rptPatientAccidentList::OnTypeAccidentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTypeAccident.IsSearchKey() && ToInt(m_szTypeAccidentKey)>0){ 
			szWhere.Format(_T(" and ha_reason=%ld"), ToInt(m_szTypeAccidentKey));
	};
	szSQL.Format(_T(" select  distinct ss_code,ss_desc from sys_sel, hms_accident") \
				_T(" where ss_id = 'hms_accident_reason' and ss_code = cast(ha_reason as text)  %s ") \
				_T(" order by ss_code"), szWhere);
	m_wndTypeAccident.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeAccident.AddItems(
			rs.GetValue(_T("ss_code")), 
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptPatientAccidentList::OnTypeAccidentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptPatientAccidentList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDateTime(); 
	CString szTemp;
	UpdateData(true);
	CReport rpt; 
	if (ToInt(m_szTypeAccidentKey)>0)
	{
		szWhere.Format(_T(" and ha_reason = %ld "), ToInt(m_szTypeAccidentKey));
	}

	szSQL.Format(_T(" SELECT  ha_emer_time as timeacc, ha_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	hp_dtladdr || '-' || hms_getaddress(hp_provid,hp_distid,hp_villid) as  dtladdr,") \
				_T("	su_name as doctor,")\
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_suggestion' and hd_suggestion = ss_code) as huongsutri,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_accident_reason' and ss_code = cast(ha_reason as text)) as reason,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_accident_admission' and ss_code = ha_admission) as huongsutri1,	") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_accident_transcaused' and ss_code = cast(ha_transport_cause as text)) as phuongtien,	") \
				_T("	(select ss_desc from sys_sel where ss_id = 'sys_ethnic' and ss_code = cast(hp_ethnic as text)) as dantoc")\
				_T(" FROM hms_accident ") \
				_T(" LEFT JOIN hms_doc ON ha_docno = hd_docno") \
				_T(" LEFT JOIN hms_patient ON hp_patientno = hd_patientno") \
				_T(" LEFT JOIN sys_user ON su_userid=ha_createdby")\
				_T(" WHERE ha_emer_time between '%s' and '%s'  %s") \
				_T(" ORDER BY ha_emer_time asc"), m_szFromDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}
	_fmsg(_T("%s"), szSQL);
	if(!rpt.Init(_T("Reports/HMS/HE_DANHSACHTAINANGIAOTHONG.RPT")) )
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	//rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	//rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	rs.GetValue(_T("reason"), tmpStr);
	if(ToInt(m_szTypeAccidentKey)>0)
	{
		rpt.GetReportHeader()->SetValue(_T("loaitainan"), tmpStr);
	}
	tmpStr.Empty();
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 0;

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIndex++;	
		tmpStr.Format(_T("%d"), nIndex);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("timeacc"), tmpStr);
		rptDetail->SetValue(_T("2"), CDateTime::Convert(rs.GetValue(_T("timeacc")), yyyymmdd|hhmm, ddmmyyyy|hhmm));

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

		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("reason"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("huongsutri"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		
		rs.GetValue(_T("phuongtien"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("doctor"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("dantoc"), tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.MoveNext();
	}
	CDate date;

	date.ParseDate(pMF->GetSysDateTime());
	szTemp = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	tmpStr.Format(szTemp, date.GetDay(), date.GetMonth(), date.GetYear());
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	rpt.PrintPreview();

} 
void rptPatientAccidentList::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString tmpStr, szSQL, szFromDate, szToDate;
	CString szWhere;
	BeginWaitCursor();
		if (ToInt(m_szTypeAccidentKey)>0)
	{
		szWhere.Format(_T(" and ha_reason = %ld "),ToInt(m_szTypeAccidentKey));
	}
	/*szSQL.Format(_T(" SELECT  ha_emer_time as timeacc, ha_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	hp_dtladdr || '-' || hms_getaddress(hp_provid,hp_distid,hp_villid) as  dtladdr,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_suggestion' and hd_suggestion = ss_code) as huongsuly,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_accident_reason' and ss_code = cast(ha_reason as text)) as reason,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_accident_admission' and ss_code = ha_admission) as huongsuly1	") \
				_T(" FROM hms_accident ") \
				_T(" LEFT JOIN hms_doc ON ha_docno = hd_docno") \
				_T(" LEFT JOIN hms_patient ON hp_patientno = hd_patientno") \
				_T(" WHERE ha_emer_time between '%s' and '%s'  %s") \
				_T(" ORDER BY ha_emer_time asc "), m_szFromDate, m_szToDate, szWhere);*/
	szSQL.Format(_T(" SELECT  ha_emer_time as timeacc, ha_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	hp_dtladdr || '-' || hms_getaddress(hp_provid,hp_distid,hp_villid) as  dtladdr,") \
				_T("	su_name as doctor,")\
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_suggestion' and hd_suggestion = ss_code) as huongsutri,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_accident_reason' and ss_code = cast(ha_reason as text)) as reason,") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_accident_admission' and ss_code = ha_admission) as huongsutri1,	") \
				_T(" 	(select ss_desc from sys_sel where ss_id = 'hms_accident_transcaused' and ss_code = cast(ha_transport_cause as text)) as phuongtien,") \
				_T("	(select ss_desc from sys_sel where ss_id = 'sys_ethnic' and ss_code = cast(hp_ethnic as text)) as dantoc")\
				_T(" FROM hms_accident ") \
				_T(" LEFT JOIN hms_doc ON ha_docno = hd_docno") \
				_T(" LEFT JOIN hms_patient ON hp_patientno = hd_patientno") \
				_T(" LEFT JOIN sys_user ON su_userid=ha_createdby")\
				_T(" WHERE ha_emer_time between '%s' and '%s'  %s") \
				_T(" ORDER BY ha_emer_time asc"), m_szFromDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);
		if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 18);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 25);
	xls.SetColumnWidth(4, 6);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 53);
	xls.SetColumnWidth(7, 53);
	xls.SetColumnWidth(8, 28);
	xls.SetColumnWidth(9, 30);
	xls.SetColumnWidth(10, 20);
	xls.SetColumnWidth(11, 20);
	xls.SetColumnWidth(12, 10);
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	szSQL.Format(_T(" select sc_pname as pname,(sc_name) as namehospital") \
		 _T(" from sys_company"));
	rs1.ExecSQL(szSQL);
	rs1.GetValue(_T("pname"), tmpStr);
	xls.SetCellText(0, 0, tmpStr,FMT_CENTER,true,11,0);
	rs1.GetValue(_T("namehospital"), tmpStr);
	xls.SetCellText(0, 1, tmpStr,FMT_CENTER,true,11,0);
	xls.SetCellMergedColumns(0,2,10);
	xls.SetCellText(0, 2, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N T\x41I N\x1EA0N"),FMT_CENTER, true, 16, 0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellMergedColumns(0,3,10);
	xls.SetCellText(0,3 , tmpStr,FMT_CENTER,true,12,0);
	int nRow = 5;
	xls.SetCellText(0, nRow, _T("STT"), FMT_CENTER,true);	

	TranslateString(_T("Th\x1EDDi gi\x61n t\x61i n\x1EA1n"), tmpStr);
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

	TranslateString(_T("\x43h\x1EA9n \x111o\xE1n"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_CENTER,true);	

	TranslateString(_T("Nguy\xEAn nh\xE2n"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_CENTER,true);

	TranslateString(_T("H\x1B0\x1EDBng \x78\x1EED tr\xED "), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_CENTER,true);

	TranslateString(_T("Ph\x1B0\x1A1ng ti\x1EC7n"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_CENTER,true);

	TranslateString(_T("\x42\xE1\x63 s\x129"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_CENTER,true);

	TranslateString(_T("\x44\xE2n t\x1ED9\x63"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_CENTER,true);

	rs.GetValue(_T("reason"), tmpStr);
	xls.SetCellMergedColumns(0, 4, 3);

	if(ToInt(m_szTypeAccidentKey)>0)
	{
		xls.SetCellText(0,4, tmpStr,CFMT_TEXT, true, 13);
	}
	int nIndex = 1;
	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		tmpStr = CDateTime::Convert(rs.GetValue(_T("timeacc")),yyyymmdd|hhmm, ddmmyyyy|hhmm);
		xls.SetCellText(1, nRow, tmpStr, FMT_DATETIME);
 
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_CENTER);

		rs.GetValue(_T("dtladdr"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("diagnostic"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("reason"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("huongsutri"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phuongtien"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doctor"), tmpStr);
		xls.SetCellText(11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dantoc"), tmpStr);
		xls.SetCellText(12, nRow, tmpStr, FMT_TEXT);

		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Danh sach benh nhan tai nan.xls"));
	EndWaitCursor();
	

	
} 
void rptPatientAccidentList::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
int rptPatientAccidentList::OnAddrptPatientAccidentList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptPatientAccidentList::OnEditrptPatientAccidentList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptPatientAccidentList::OnDeleterptPatientAccidentList(){
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
 		OnCancelrptPatientAccidentList(); 
 	}
	return 0;
}
int rptPatientAccidentList::OnSaverptPatientAccidentList(){
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
 		//OnrptPatientAccidentListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptPatientAccidentList::OnCancelrptPatientAccidentList(){
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
int rptPatientAccidentList::OnrptPatientAccidentListListLoadData(){
	return 0;
}
