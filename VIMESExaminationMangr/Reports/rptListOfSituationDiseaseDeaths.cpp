#include "rptListOfSituationDiseaseDeaths.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptListOfSituationDiseaseDeaths *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptListOfSituationDiseaseDeaths *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptListOfSituationDiseaseDeaths *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptListOfSituationDiseaseDeaths *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptListOfSituationDiseaseDeaths *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptListOfSituationDiseaseDeaths *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptListOfSituationDiseaseDeaths *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptListOfSituationDiseaseDeaths *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptListOfSituationDiseaseDeaths *pVw = (rptListOfSituationDiseaseDeaths *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptListOfSituationDiseaseDeaths *pVw = (rptListOfSituationDiseaseDeaths *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptListOfSituationDiseaseDeathsFnc(CWnd *pWnd){
	 return ((rptListOfSituationDiseaseDeaths*)pWnd)->OnAddrptListOfSituationDiseaseDeaths();
} 
static int _OnEditrptListOfSituationDiseaseDeathsFnc(CWnd *pWnd){
	 return ((rptListOfSituationDiseaseDeaths*)pWnd)->OnEditrptListOfSituationDiseaseDeaths();
} 
static int _OnDeleterptListOfSituationDiseaseDeathsFnc(CWnd *pWnd){
	 return ((rptListOfSituationDiseaseDeaths*)pWnd)->OnDeleterptListOfSituationDiseaseDeaths();
} 
static int _OnSaverptListOfSituationDiseaseDeathsFnc(CWnd *pWnd){
	 return ((rptListOfSituationDiseaseDeaths*)pWnd)->OnSaverptListOfSituationDiseaseDeaths();
} 
static int _OnCancelrptListOfSituationDiseaseDeathsFnc(CWnd *pWnd){
	 return ((rptListOfSituationDiseaseDeaths*)pWnd)->OnCancelrptListOfSituationDiseaseDeaths();
} 
rptListOfSituationDiseaseDeaths::rptListOfSituationDiseaseDeaths(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 365;
	m_nDlgHeight = 95;
	SetDefaultValues();
}
rptListOfSituationDiseaseDeaths::~rptListOfSituationDiseaseDeaths(){
}
void rptListOfSituationDiseaseDeaths::OnCreateComponents(){
	m_wndrptListOfSituationDiseaseDeaths.Create(this, _T("List Of Situation Disease Deaths"), 5, 2, 357, 58);
	m_wndFromDateLabel.Create(this, _T("From Date"), 8, 28, 86, 53);
	m_wndFromDate.Create(this,92, 28, 177, 53); 
	m_wndToDateLabel.Create(this, _T("To Date"), 184, 28, 262, 53);
	m_wndToDate.Create(this,269, 28, 354, 53); 
	m_wndPrint.Create(this, _T("&Print"), 205, 63, 278, 88);
	m_wndClose.Create(this, _T("&Close"), 284, 63, 357, 88);

}
void rptListOfSituationDiseaseDeaths::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0,1,2, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);

}
void rptListOfSituationDiseaseDeaths::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void rptListOfSituationDiseaseDeaths::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void rptListOfSituationDiseaseDeaths::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptListOfSituationDiseaseDeaths::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptListOfSituationDiseaseDeaths::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int rptListOfSituationDiseaseDeaths::SetMode(int nMode){
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
/*void rptListOfSituationDiseaseDeaths::OnFromDateChange(){
	
} */
/*void rptListOfSituationDiseaseDeaths::OnFromDateSetfocus(){
	
} */
/*void rptListOfSituationDiseaseDeaths::OnFromDateKillfocus(){
	
} */
int rptListOfSituationDiseaseDeaths::OnFromDateCheckValue(){
	return 0;
} 
/*void rptListOfSituationDiseaseDeaths::OnToDateChange(){
	
} */
/*void rptListOfSituationDiseaseDeaths::OnToDateSetfocus(){
	
} */
/*void rptListOfSituationDiseaseDeaths::OnToDateKillfocus(){
	
} */
int rptListOfSituationDiseaseDeaths::OnToDateCheckValue(){
	return 0;
} 
void rptListOfSituationDiseaseDeaths::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CRecord rs(&pMF->m_db);
	CReport rpt;
	UpdateData(true);	
	szSQL.Format(_T("  SELECT hfl_name as examtype,") \
	_T(" count(*) as totalpatient") \
	_T(" FROM hms_exam") \
	_T(" LEFT JOIN hms_feelist ON(hfl_feeid=he_examtype)") \
	_T(" WHERE date(he_examdate) BETWEEN date('%s') AND date('%s') ") \
	_T(" GROUP BY  examtype") \
	_T(" ORDER BY examtype"), m_szFromDate, m_szToDate) ;
	rs.ExecSQL(szSQL);
	if(!rpt.Init(_T("Reports/NOITRU/RPT_BAOCAOTINHHINHBENHTATTUVONG.RPT")) )
		return;
	//Report Header
	rpt.GetReportHeader()->SetValue(_T("HEATH_SERVICE"), _T("SO Y TE"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITAL_NAME"), _T("BENH VIEN THANH NHAN"));
//	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
//	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
			CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	//Page Header
	rpt.GetPageHeader()->SetValue(_T("PageNo"), tmpStr);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex=0; 
	while(!rs.IsEOF())
	{	
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);
		rs.GetValue(_T(""), tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();

} 
void rptListOfSituationDiseaseDeaths::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptListOfSituationDiseaseDeaths::OnAddrptListOfSituationDiseaseDeaths(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptListOfSituationDiseaseDeaths::OnEditrptListOfSituationDiseaseDeaths(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptListOfSituationDiseaseDeaths::OnDeleterptListOfSituationDiseaseDeaths(){
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
 		OnCancelrptListOfSituationDiseaseDeaths(); 
 	}
	return 0;
}
int rptListOfSituationDiseaseDeaths::OnSaverptListOfSituationDiseaseDeaths(){
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
 		//OnrptListOfSituationDiseaseDeathsListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptListOfSituationDiseaseDeaths::OnCancelrptListOfSituationDiseaseDeaths(){
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
int rptListOfSituationDiseaseDeaths::OnrptListOfSituationDiseaseDeathsListLoadData(){
	return 0;
}
