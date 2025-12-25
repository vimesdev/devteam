#include "stdafx.h"
#include "PACSPerformNotMeterial.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSPerformNotMeterial *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSPerformNotMeterial *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSPerformNotMeterial *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPerformNotMeterial *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSPerformNotMeterial *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSPerformNotMeterial *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSPerformNotMeterial *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPerformNotMeterial *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSPerformNotMeterial *pVw = (CPACSPerformNotMeterial *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSPerformNotMeterial *pVw = (CPACSPerformNotMeterial *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddPACSPerformNotMeterialFnc(CWnd *pWnd){
	 return ((CPACSPerformNotMeterial*)pWnd)->OnAddPACSPerformNotMeterial();
} 
static int _OnEditPACSPerformNotMeterialFnc(CWnd *pWnd){
	 return ((CPACSPerformNotMeterial*)pWnd)->OnEditPACSPerformNotMeterial();
} 
static int _OnDeletePACSPerformNotMeterialFnc(CWnd *pWnd){
	 return ((CPACSPerformNotMeterial*)pWnd)->OnDeletePACSPerformNotMeterial();
} 
static int _OnSavePACSPerformNotMeterialFnc(CWnd *pWnd){
	 return ((CPACSPerformNotMeterial*)pWnd)->OnSavePACSPerformNotMeterial();
} 
static int _OnCancelPACSPerformNotMeterialFnc(CWnd *pWnd){
	 return ((CPACSPerformNotMeterial*)pWnd)->OnCancelPACSPerformNotMeterial();
} 
CPACSPerformNotMeterial::CPACSPerformNotMeterial(CWnd* pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CPACSPerformNotMeterial::~CPACSPerformNotMeterial(){
}
void CPACSPerformNotMeterial::OnCreateComponents(){
	m_wndReportCondision.Create(this, _T("Report Condision"), 5, 5, 430, 87);
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 28, 91, 53);
	m_wndFromDate.Create(this,96, 28, 216, 53); 
	m_wndToDateLabel.Create(this, _T("To Date"), 221, 28, 301, 53);
	m_wndToDate.Create(this,306, 28, 426, 53); 
	m_wndExport.Create(this, _T("&Export"), 271, 57, 346, 82);
	m_wndPrint.Create(this, _T("&Print"), 351, 57, 426, 82);

}
void CPACSPerformNotMeterial::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

}
void CPACSPerformNotMeterial::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	SetMode(VM_ADD);

}
void CPACSPerformNotMeterial::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CPACSPerformNotMeterial::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSPerformNotMeterial::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSPerformNotMeterial::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CPACSPerformNotMeterial::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 4, -1);
 			SetDefaultValues();
			m_szFromDate= pMF->GetSysDate() + _T(" 00:00");
			m_szToDate=pMF->GetSysDateTime();
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
/*void CPACSPerformNotMeterial::OnFromDateChange(){
	
} */
/*void CPACSPerformNotMeterial::OnFromDateSetfocus(){
	
} */
/*void CPACSPerformNotMeterial::OnFromDateKillfocus(){
	
} */
int CPACSPerformNotMeterial::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSPerformNotMeterial::OnToDateChange(){
	
} */
/*void CPACSPerformNotMeterial::OnToDateSetfocus(){
	
} */
/*void CPACSPerformNotMeterial::OnToDateKillfocus(){
	
} */
int CPACSPerformNotMeterial::OnToDateCheckValue(){
	return 0;
} 
void CPACSPerformNotMeterial::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPerformNotMeterial::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szNewType, szOldType;
	CString szTemp, tmpStr;
	int nIdx = 1, nAmount = 0, nGrpTotal = 0;
	szSQL=GetQueryString();
	BeginWaitCursor();
	int nCount =rs.ExecSQL(szSQL);
	if(nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	if (!rpt.Init(_T("Reports/HMS/PACS_DANHSACHBNCHUANHAPVATTU_C8.RPT"), true))
	{
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rpt.GetReportHeader()->SetValue(_T("DeptName"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	CString szSysDate, szDate;
	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm ),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	CReportSection *rptDetail;
	while (!rs.IsEOF()){
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIdx++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("practitioner"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("deptid"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("orderid"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.MoveNext();
	}
	
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	rpt.PrintPreview();
	
} 
int CPACSPerformNotMeterial::OnAddPACSPerformNotMeterial(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSPerformNotMeterial::OnEditPACSPerformNotMeterial(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSPerformNotMeterial::OnDeletePACSPerformNotMeterial(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPACSPerformNotMeterial();
 	}
	return 0;
}
int CPACSPerformNotMeterial::OnSavePACSPerformNotMeterial(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnPACSPerformNotMeterialListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSPerformNotMeterial::OnCancelPACSPerformNotMeterial(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CPACSPerformNotMeterial::OnPACSPerformNotMeterialListLoadData(){
	return 0;
}

CString CPACSPerformNotMeterial::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	UpdateData(true);
	CString szSQL;
	szSQL.Format(_T(" SELECT") \
		_T(" Get_patientname(hpc_docno) AS pname,") \
		_T(" hpc_orderid AS orderid,") \
		_T(" hpc_docno AS docno,") \
		_T(" hpc_practitioner AS practitioner,") \
		_T(" hrl_name AS roomname,") \
		_T(" hpc_deptid AS deptid") \
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON (hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON (hrl_deptid = hpc_pdeptid") \
		_T(" AND hrl_id = hpcl_proomid)") \
		_T(" LEFT JOIN hms_pharmaorder_view") \
		_T(" ON (hpo_docno = hpc_docno") \
		_T(" AND hpo_reference_id = hpc_orderid") \
		_T(" AND hpo_storage_id IN(140, 99))") \
		_T(" WHERE hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpc_pdeptid = 'C8'") \
		_T(" AND hpcl_status = 'T'") \
		_T(" AND hpo_orderid IS NULL ORDER BY hpcl_proomid, hpc_practitioner, hpc_docno"), m_szFromDate,m_szToDate);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}