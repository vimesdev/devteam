#include "rptAdmissionStatisticForDepartmentReport.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptAdmissionStatisticForDepartmentReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptAdmissionStatisticForDepartmentReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptAdmissionStatisticForDepartmentReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptAdmissionStatisticForDepartmentReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptAdmissionStatisticForDepartmentReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptAdmissionStatisticForDepartmentReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptAdmissionStatisticForDepartmentReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptAdmissionStatisticForDepartmentReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPriviewSelectFnc(CWnd *pWnd){
	rptAdmissionStatisticForDepartmentReport *pVw = (rptAdmissionStatisticForDepartmentReport *)pWnd;
	pVw->OnPrintPriviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptAdmissionStatisticForDepartmentReport *pVw = (rptAdmissionStatisticForDepartmentReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptAdmissionStatisticForDepartmentReport *pVw = (rptAdmissionStatisticForDepartmentReport *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptAdmissionStatisticForDepartmentReportFnc(CWnd *pWnd){
	 return ((rptAdmissionStatisticForDepartmentReport*)pWnd)->OnAddrptAdmissionStatisticForDepartmentReport();
} 
static int _OnEditrptAdmissionStatisticForDepartmentReportFnc(CWnd *pWnd){
	 return ((rptAdmissionStatisticForDepartmentReport*)pWnd)->OnEditrptAdmissionStatisticForDepartmentReport();
} 
static int _OnDeleterptAdmissionStatisticForDepartmentReportFnc(CWnd *pWnd){
	 return ((rptAdmissionStatisticForDepartmentReport*)pWnd)->OnDeleterptAdmissionStatisticForDepartmentReport();
} 
static int _OnSaverptAdmissionStatisticForDepartmentReportFnc(CWnd *pWnd){
	 return ((rptAdmissionStatisticForDepartmentReport*)pWnd)->OnSaverptAdmissionStatisticForDepartmentReport();
} 
static int _OnCancelrptAdmissionStatisticForDepartmentReportFnc(CWnd *pWnd){
	 return ((rptAdmissionStatisticForDepartmentReport*)pWnd)->OnCancelrptAdmissionStatisticForDepartmentReport();
} 
rptAdmissionStatisticForDepartmentReport::rptAdmissionStatisticForDepartmentReport(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 416;
	m_nDlgHeight = 115;
	SetDefaultValues();
}
rptAdmissionStatisticForDepartmentReport::~rptAdmissionStatisticForDepartmentReport(){
}
void rptAdmissionStatisticForDepartmentReport::OnCreateComponents(){
	m_wndrptAdmissionStatisticForDepartmentReport.Create(this, _T("Inward Statistic For Department Report"), 2, 5, 408, 108);
	m_wndFromDateLabel.Create(this, _T("From Date"), 8, 28, 88, 51);
	m_wndFromDate.Create(this,88, 28, 178, 51); 
	m_wndToDateLabel.Create(this, _T("To Date"), 204, 28, 284, 51);
	m_wndToDate.Create(this,289, 28, 379, 51); 
	m_wndPrintPriview.Create(this, _T("&Print Priview"), 17, 66, 135, 89);
	m_wndPrint.Create(this, _T("&Print"), 146, 66, 221, 89);
	m_wndClose.Create(this, _T("&Close"), 240, 66, 315, 89);

}
void rptAdmissionStatisticForDepartmentReport::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0, 1,2,-1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);

}
void rptAdmissionStatisticForDepartmentReport::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrintPriview.SetEvent(WE_CLICK, _OnPrintPriviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void rptAdmissionStatisticForDepartmentReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptAdmissionStatisticForDepartmentReport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptAdmissionStatisticForDepartmentReport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptAdmissionStatisticForDepartmentReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptAdmissionStatisticForDepartmentReport::SetMode(int nMode){
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
/*void rptAdmissionStatisticForDepartmentReport::OnFromDateChange(){
	
} */
/*void rptAdmissionStatisticForDepartmentReport::OnFromDateSetfocus(){
	
} */
/*void rptAdmissionStatisticForDepartmentReport::OnFromDateKillfocus(){
	
} */
int rptAdmissionStatisticForDepartmentReport::OnFromDateCheckValue(){
	return 0;
} 
/*void rptAdmissionStatisticForDepartmentReport::OnToDateChange(){
	
} */
/*void rptAdmissionStatisticForDepartmentReport::OnToDateSetfocus(){
	
} */
/*void rptAdmissionStatisticForDepartmentReport::OnToDateKillfocus(){
	
} */
int rptAdmissionStatisticForDepartmentReport::OnToDateCheckValue(){
	return 0;
} 
void rptAdmissionStatisticForDepartmentReport::OnPrintPriviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint(true);
} 
void rptAdmissionStatisticForDepartmentReport::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint();
} 
void rptAdmissionStatisticForDepartmentReport::OnPrint(bool bPreview){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szWhere;
	CRecord rs(&pMF->m_db);
	CReport rpt;
	UpdateData(true);
	if(!rpt.Init(_T("Reports/HMS/HE_ADMISSIONSTATISTICFORDEPARTMENT.RPT")))
		return;
	
	//rpt.GetReportDocument()->SetMargins(100, 100, 100, 100);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);


	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	CString szDate;
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
			CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	
	szWhere.Empty();

	szSQL.Format(_T(" SELECT admitdept, ") \
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
		_T(" WHERE hd_suggestion='A' ") \
		_T(" AND date(hd_admitdate) BETWEEN date('%s') AND date('%s') ") \
		_T(" %s ") \
		_T(" ) as admittbl") \
		_T(" GROUP BY admitdept") \
		_T(" ORDER BY admitdept"), m_szFromDate, m_szToDate, szWhere);	
	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	if(rs.IsEOF())
		return;
	CReportSection* rptDetail=rpt.GetDetail();
	int nTotal[9];
	for (int i =0; i < 10; i++)
		nTotal[i] = 0;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
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
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}
void rptAdmissionStatisticForDepartmentReport::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
int rptAdmissionStatisticForDepartmentReport::OnAddrptAdmissionStatisticForDepartmentReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptAdmissionStatisticForDepartmentReport::OnEditrptAdmissionStatisticForDepartmentReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptAdmissionStatisticForDepartmentReport::OnDeleterptAdmissionStatisticForDepartmentReport(){
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
 		OnCancelrptAdmissionStatisticForDepartmentReport(); 
 	}
	return 0;
}
int rptAdmissionStatisticForDepartmentReport::OnSaverptAdmissionStatisticForDepartmentReport(){
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
 		//OnrptAdmissionStatisticForDepartmentReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptAdmissionStatisticForDepartmentReport::OnCancelrptAdmissionStatisticForDepartmentReport(){
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
int rptAdmissionStatisticForDepartmentReport::OnrptAdmissionStatisticForDepartmentReportListLoadData(){
	return 0;
}
