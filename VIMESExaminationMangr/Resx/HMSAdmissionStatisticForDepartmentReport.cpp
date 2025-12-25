#include "HMSAdmissionStatisticForDepartmentReport.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmissionStatisticForDepartmentReport* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdmissionStatisticForDepartmentReport* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSAdmissionStatisticForDepartmentReport *)pWnd)->OnStatusAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSAdmissionStatisticForDepartmentReport *pVw = (CHMSAdmissionStatisticForDepartmentReport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAdmissionStatisticForDepartmentReport *pVw = (CHMSAdmissionStatisticForDepartmentReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAdmissionStatisticForDepartmentReport *pVw = (CHMSAdmissionStatisticForDepartmentReport *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAdmissionStatisticForDepartmentReportFnc(CWnd *pWnd){
	 return ((CHMSAdmissionStatisticForDepartmentReport*)pWnd)->OnAddHMSAdmissionStatisticForDepartmentReport();
} 
static int _OnEditHMSAdmissionStatisticForDepartmentReportFnc(CWnd *pWnd){
	 return ((CHMSAdmissionStatisticForDepartmentReport*)pWnd)->OnEditHMSAdmissionStatisticForDepartmentReport();
} 
static int _OnDeleteHMSAdmissionStatisticForDepartmentReportFnc(CWnd *pWnd){
	 return ((CHMSAdmissionStatisticForDepartmentReport*)pWnd)->OnDeleteHMSAdmissionStatisticForDepartmentReport();
} 
static int _OnSaveHMSAdmissionStatisticForDepartmentReportFnc(CWnd *pWnd){
	 return ((CHMSAdmissionStatisticForDepartmentReport*)pWnd)->OnSaveHMSAdmissionStatisticForDepartmentReport();
} 
static int _OnCancelHMSAdmissionStatisticForDepartmentReportFnc(CWnd *pWnd){
	 return ((CHMSAdmissionStatisticForDepartmentReport*)pWnd)->OnCancelHMSAdmissionStatisticForDepartmentReport();
} 
CHMSAdmissionStatisticForDepartmentReport::CHMSAdmissionStatisticForDepartmentReport(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 409;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CHMSAdmissionStatisticForDepartmentReport::~CHMSAdmissionStatisticForDepartmentReport(){
}
void CHMSAdmissionStatisticForDepartmentReport::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 200, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 395, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 110, 85);
	m_wndDepartment.Create(this,115, 60, 395, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 90, 110, 115);
	m_wndStatus.Create(this,115, 90, 395, 115); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 165, 125, 240, 150);
	m_wndPrint.Create(this, _T("&Print"), 245, 125, 320, 150);
	m_wndClose.Create(this, _T("&Close"), 325, 125, 400, 150);

}
void CHMSAdmissionStatisticForDepartmentReport::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSAdmissionStatisticForDepartmentReport::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSAdmissionStatisticForDepartmentReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void CHMSAdmissionStatisticForDepartmentReport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdmissionStatisticForDepartmentReport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdmissionStatisticForDepartmentReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szStatusKey.Empty();

}
int CHMSAdmissionStatisticForDepartmentReport::SetMode(int nMode){
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
/*void CHMSAdmissionStatisticForDepartmentReport::OnFromDateChange(){
	
} */
/*void CHMSAdmissionStatisticForDepartmentReport::OnFromDateSetfocus(){
	
} */
/*void CHMSAdmissionStatisticForDepartmentReport::OnFromDateKillfocus(){
	
} */
int CHMSAdmissionStatisticForDepartmentReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSAdmissionStatisticForDepartmentReport::OnToDateChange(){
	
} */
/*void CHMSAdmissionStatisticForDepartmentReport::OnToDateSetfocus(){
	
} */
/*void CHMSAdmissionStatisticForDepartmentReport::OnToDateKillfocus(){
	
} */
int CHMSAdmissionStatisticForDepartmentReport::OnToDateCheckValue(){
	return 0;
} 
void CHMSAdmissionStatisticForDepartmentReport::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionStatisticForDepartmentReport::OnDepartmentSelendok(){
	 
}
/*void CHMSAdmissionStatisticForDepartmentReport::OnDepartmentSetfocus(){
	
}*/
/*void CHMSAdmissionStatisticForDepartmentReport::OnDepartmentKillfocus(){
	
}*/
long CHMSAdmissionStatisticForDepartmentReport::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmissionStatisticForDepartmentReport::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAdmissionStatisticForDepartmentReport::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionStatisticForDepartmentReport::OnStatusSelendok(){
	 
}
/*void CHMSAdmissionStatisticForDepartmentReport::OnStatusSetfocus(){
	
}*/
/*void CHMSAdmissionStatisticForDepartmentReport::OnStatusKillfocus(){
	
}*/
long CHMSAdmissionStatisticForDepartmentReport::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdmissionStatisticForDepartmentReport::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAdmissionStatisticForDepartmentReport::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionStatisticForDepartmentReport::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmissionStatisticForDepartmentReport::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdmissionStatisticForDepartmentReport::OnAddHMSAdmissionStatisticForDepartmentReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSAdmissionStatisticForDepartmentReport::OnEditHMSAdmissionStatisticForDepartmentReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdmissionStatisticForDepartmentReport::OnDeleteHMSAdmissionStatisticForDepartmentReport(){
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
 		OnCancelHMSAdmissionStatisticForDepartmentReport(); 
 	}
	return 0;
}
int CHMSAdmissionStatisticForDepartmentReport::OnSaveHMSAdmissionStatisticForDepartmentReport(){
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
 		//OnHMSAdmissionStatisticForDepartmentReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSAdmissionStatisticForDepartmentReport::OnCancelHMSAdmissionStatisticForDepartmentReport(){
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
int CHMSAdmissionStatisticForDepartmentReport::OnHMSAdmissionStatisticForDepartmentReportListLoadData(){
	return 0;
}


void CHMSAdmissionStatisticForDepartmentReport::OnPrint(bool bPreview){
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