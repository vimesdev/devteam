#include "rptGeneralAdmissionReportForEthnicDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "afxwin.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportForEthnicDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportForEthnicDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportForEthnicDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptGeneralAdmissionReportForEthnicDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportForEthnicDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportForEthnicDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptGeneralAdmissionReportForEthnicDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptGeneralAdmissionReportForEthnicDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptGeneralAdmissionReportForEthnicDialog *pVw = (CrptGeneralAdmissionReportForEthnicDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptGeneralAdmissionReportForEthnicDialog *pVw = (CrptGeneralAdmissionReportForEthnicDialog *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddrptGeneralAdmissionReportForEthnicDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralAdmissionReportForEthnicDialog*)pWnd)->OnAddrptGeneralAdmissionReportForEthnicDialog();
} 
static int _OnEditrptGeneralAdmissionReportForEthnicDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralAdmissionReportForEthnicDialog*)pWnd)->OnEditrptGeneralAdmissionReportForEthnicDialog();
} 
static int _OnDeleterptGeneralAdmissionReportForEthnicDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralAdmissionReportForEthnicDialog*)pWnd)->OnDeleterptGeneralAdmissionReportForEthnicDialog();
} 
static int _OnSaverptGeneralAdmissionReportForEthnicDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralAdmissionReportForEthnicDialog*)pWnd)->OnSaverptGeneralAdmissionReportForEthnicDialog();
} 
static int _OnCancelrptGeneralAdmissionReportForEthnicDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralAdmissionReportForEthnicDialog*)pWnd)->OnCancelrptGeneralAdmissionReportForEthnicDialog();
} 
CrptGeneralAdmissionReportForEthnicDialog::CrptGeneralAdmissionReportForEthnicDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 360;
	m_nDlgHeight = 95;
		m_rs = NULL;
	SetDefaultValues();
}
CrptGeneralAdmissionReportForEthnicDialog::~CrptGeneralAdmissionReportForEthnicDialog(){
		if (!m_rs->IsEOF()) delete m_rs;
}
void CrptGeneralAdmissionReportForEthnicDialog::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 350, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 260, 55);
	m_wndToDate.Create(this,265, 30, 345, 55); 
	m_wndPrint.Create(this, _T("&Print"), 175, 65, 260, 90);
	m_wndExport.Create(this, _T("&Export"), 265, 65, 350, 90);

}
void CrptGeneralAdmissionReportForEthnicDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_rs = new CRecord(&pMF->m_db);
	EnableControls(TRUE);
	EnableButtons(TRUE, 0,1, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);

}
void CrptGeneralAdmissionReportForEthnicDialog::OnSetWindowEvents(){
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

}
void CrptGeneralAdmissionReportForEthnicDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CrptGeneralAdmissionReportForEthnicDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptGeneralAdmissionReportForEthnicDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptGeneralAdmissionReportForEthnicDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptGeneralAdmissionReportForEthnicDialog::SetMode(int nMode){
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
/*void CrptGeneralAdmissionReportForEthnicDialog::OnFromDateChange(){
	
} */
/*void CrptGeneralAdmissionReportForEthnicDialog::OnFromDateSetfocus(){
	
} */
/*void CrptGeneralAdmissionReportForEthnicDialog::OnFromDateKillfocus(){
	
} */
int CrptGeneralAdmissionReportForEthnicDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptGeneralAdmissionReportForEthnicDialog::OnToDateChange(){
	
} */
/*void CrptGeneralAdmissionReportForEthnicDialog::OnToDateSetfocus(){
	
} */
/*void CrptGeneralAdmissionReportForEthnicDialog::OnToDateKillfocus(){
	
} */
int CrptGeneralAdmissionReportForEthnicDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptGeneralAdmissionReportForEthnicDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CRecord rs(&pMF->m_db);
	CReport rpt;
	if(!rpt.Init(_T("Reports/Baocaotonghopnhapvientheokhoa.rpt")) )	
		return;
	UpdateData(true);	
	szSQL.Format(_T(" SELECT 	deptid,") \
							_T(" 	sd_name as department_name,") \
							_T(" 	sum(totalpatient) as totalpatient,") \
							_T(" 	sum(servobj1) as servobj1,") \
							_T(" 	sum(insobj1) as insobj1,") \
							_T(" 	sum(servobj2) as servobj2,") \
							_T(" 	sum(insobj2) as insobj2,") \
							_T(" 	sum(servobj3) as servobj3,") \
							_T(" 	sum(insobj3) as insobj3,") \
							_T(" 	sum(servobj4) as servobj4,") \
							_T(" 	sum(insobj4) as insobj4") \
							_T(" FROM ") \
							_T(" (	") \
							_T(" 	SELECT 	hd_docno as docno,") \
							_T(" 		hd_indept as deptid,") \
							_T(" 		1 as totalpatient,") \
							_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
							_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
							_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
							_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
							_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
							_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
							_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
							_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
							_T(" 	FROM hms_patient") \
							_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
							_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
							_T("	LEFT JOIN hms_clinical_record ON (hcr_docno=hd_docno)") \
							_T(" 	WHERE 	hd_status='T'") \
							_T(" 		and hd_suggestion in('A')") \
							_T(" 		and length(hd_indept) > 0 and hcr_status in ('I','T') ") \
							_T(" 		and date(hd_enddate) between date('%s') and date('%s') ") \
							_T(" ) as tbl") \
							_T(" LEFT JOIN sys_dept ON(sd_id=deptid)	") \
							_T(" GROUP BY deptid, department_name, sd_zone") \
							_T(" ORDER BY sd_zone, deptid"), m_szFromDate, m_szToDate);
	rs.ExecSQL(szSQL);
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	CRecord rs1(&pMF->m_db);
	szSQL.Format(_T(" select sc_name as hospitalname,sc_pname as healthname from sys_company"));
	rs1.ExecSQL(szSQL);
	rs1.GetValue(_T("healthname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	rs1.GetValue(_T("hospitalname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	int nTotal[10];
	for (int i = 0; i < 10; i++)
		nTotal[i] = 0;

	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("department_name"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("totalpatient"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		nTotal[0] += ToInt(tmpStr);

		rs.GetValue(_T("servobj1"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		nTotal[1] += ToInt(tmpStr);

		rs.GetValue(_T("insobj1"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		nTotal[2] += ToInt(tmpStr);

		rs.GetValue(_T("servobj2"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		nTotal[3] += ToInt(tmpStr);

		rs.GetValue(_T("insobj2"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		nTotal[4] += ToInt(tmpStr);

		rs.GetValue(_T("servobj3"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		nTotal[5] += ToInt(tmpStr);

		rs.GetValue(_T("insobj3"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		nTotal[6] += ToInt(tmpStr);

		rs.GetValue(_T("servobj4"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		nTotal[7] += ToInt(tmpStr);

		rs.GetValue(_T("insobj4"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		nTotal[8] += ToInt(tmpStr);

		rs.MoveNext();
	}
	if(nTotal[10] > 0)
	{
		FormatCurrency(nTotal[0], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum2"), tmpStr);
		FormatCurrency(nTotal[1], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum3"), tmpStr);
		FormatCurrency(nTotal[2], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum4"), tmpStr);
		FormatCurrency(nTotal[3], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum5"), tmpStr);
		FormatCurrency(nTotal[4], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum6"), tmpStr);
		FormatCurrency(nTotal[5], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum7"), tmpStr);
		FormatCurrency(nTotal[6], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum8"), tmpStr);
		FormatCurrency(nTotal[7], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum9"), tmpStr);
		FormatCurrency(nTotal[8], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum10"), tmpStr);
	}
 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rs.GetValue(_T("bacsi"),tmpStr);
	rpt.GetReportFooter() ->SetValue(_T("User1"), tmpStr);
	rpt.PrintPreview();
} 
void CrptGeneralAdmissionReportForEthnicDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs1(&pMF->m_db);
		CString tmpStr, szSQL;
	szSQL.Format(_T(" SELECT 	deptid,") \
				_T(" 	sd_name as department_name,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	hd_docno as docno,") \
				_T(" 		hd_indept as deptid,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T("	LEFT JOIN hms_clinical_record ON (hcr_docno=hd_docno)") \
				_T(" 	WHERE 	hd_status='T'") \
				_T(" 		and hd_suggestion in('A')") \
				_T(" 		and length(hd_indept) > 0 and hcr_status in ('I','T')") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s') ") \
				_T(" ) as tbl") \
				_T(" LEFT JOIN sys_dept ON(sd_id=deptid)	") \
				_T(" GROUP BY deptid, department_name, sd_zone") \
				_T(" ORDER BY sd_zone, deptid"), m_szFromDate, m_szToDate);
	m_rs->ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	m_rs->ExecSQL(szSQL);
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0,7);
	xls.SetColumnWidth(1,28);
	xls.SetColumnWidth(2,10);
	xls.SetColumnWidth(3,10);
	xls.SetColumnWidth(4,18);
	xls.SetColumnWidth(5,10);
	xls.SetColumnWidth(6,18);
	xls.SetColumnWidth(7,10);
	xls.SetColumnWidth(8,10);
	xls.SetColumnWidth(9,10);
	xls.SetColumnWidth(10,10);
	xls.SetColumnWidth(11,10);
//	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
//	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	szSQL.Format(_T(" select sc_pname as pname,(sc_name) as namehospital from sys_company "));
	rs1.ExecSQL(szSQL);
	rs1.GetValue(_T("pname"), tmpStr);
	xls.SetCellMergedColumns(0,0,2);
	xls.SetCellMergedColumns(0,1,2);
	xls.SetCellText(0, 0, tmpStr,FMT_CENTER,true,11,0);
	rs1.GetValue(_T("namehospital"), tmpStr);
	xls.SetCellText(0, 1, tmpStr,FMT_CENTER,true,11,0);
	xls.SetCellMergedColumns(0,3,11);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O T\x1ED4NG H\x1EE2P NH\x1EACP VI\x1EC6N TH\x45O KHO\x41 - \x44\xC2N T\x1ED8\x43"), FMT_CENTER,true,16,0);
	xls.SetCellMergedColumns(0,4,11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr,FMT_CENTER,true,12,0);
	int nRow = 6;
	tmpStr.IsEmpty();
	xls.SetCellMergedRows(0,nRow,2);
	xls.SetCellText(0, nRow, _T("STT"), FMT_CENTER,true);	
	
	
	TranslateString(_T("Department"), tmpStr);
	xls.SetCellMergedRows(1,nRow,2);
	xls.SetCellText(1, nRow, tmpStr, FMT_CENTER,true);

	xls.SetCellMergedRows(2,nRow,2);
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_CENTER,true);	

	xls.SetCellMergedColumns(3,nRow,2);
	xls.SetCellText(3, nRow, _T("T\x1ED5ng s\x1ED1 \x62\x1EC7nh nh\xE2n kinh > = 6"),FMT_CENTER,true,10);
	
	nRow = 7;
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_CENTER,true);
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_CENTER,true);	

	nRow = 6 ;
	xls.SetCellMergedColumns(5,nRow,2);
	xls.SetCellText(5, nRow, _T("\x42\x1EC7nh nh\xE2n \x64\xE2n t\x1ED9\x63 > = 6"),FMT_CENTER ,true,10);
	nRow = 7;
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_CENTER,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_CENTER,true);
	nRow = 6;
	xls.SetCellMergedColumns(7,nRow,2);
	xls.SetCellText(7, nRow, _T("Tr\x1EBB \x65m kinh <6"),FMT_CENTER,true,10);
	
	
	nRow = 7;
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_CENTER,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_CENTER,true);

	nRow = 6;
	xls.SetCellMergedColumns(9,nRow,2);
	xls.SetCellText(9, nRow, _T("Tr\x1EBB \x65m \x64\xE2n t\x1ED9\x63 <6"), FMT_CENTER,true,10);
	nRow = 7;
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_CENTER,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_CENTER,true);

	int nIndex = 1;
	int i=0,nTotal[10];
	for (i=0;i<9;i++)
	{
		nTotal[i]=0;
	}

	while(!m_rs->IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);

		m_rs->GetValue(_T("department_name"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		m_rs->GetValue(_T("totalpatient"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[0] +=ToInt(tmpStr);
		
		m_rs->GetValue(_T("servobj1"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[1] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj1"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[2] +=ToInt(tmpStr);

		m_rs->GetValue(_T("servobj2"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[3] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj2"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[4] +=ToInt(tmpStr);

		m_rs->GetValue(_T("servobj3"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[5] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj3"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[6] +=ToInt(tmpStr);

		m_rs->GetValue(_T("servobj4"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[7] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj4"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[8] +=ToInt(tmpStr);
		m_rs->MoveNext();
	}
	m_rs->MoveFirst();

	nRow++;
	xls.SetCellMergedColumns(0,nRow,2);
	TranslateString(_T("Total"),tmpStr);
	xls.SetCellText(0, nRow, tmpStr, FMT_CENTER, true, 12);
	 
	
	for (int i =0; i < 9; i++)
	{		
		tmpStr.Format(_T("%d"),nTotal[i] );		
	
		xls.SetCellText(i+2, nRow, tmpStr, FMT_NUMBER1, true, 12);
	}
	xls.Save(_T("Exports\\baocaotonghopnhapvientheokhoa_dantoc.xls"));
	EndWaitCursor(); 	
} 
int CrptGeneralAdmissionReportForEthnicDialog::OnAddrptGeneralAdmissionReportForEthnicDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptGeneralAdmissionReportForEthnicDialog::OnEditrptGeneralAdmissionReportForEthnicDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptGeneralAdmissionReportForEthnicDialog::OnDeleterptGeneralAdmissionReportForEthnicDialog(){
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
 		OnCancelrptGeneralAdmissionReportForEthnicDialog(); 
 	}
	return 0;
}
int CrptGeneralAdmissionReportForEthnicDialog::OnSaverptGeneralAdmissionReportForEthnicDialog(){
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
 		//OnrptGeneralAdmissionReportForEthnicDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptGeneralAdmissionReportForEthnicDialog::OnCancelrptGeneralAdmissionReportForEthnicDialog(){
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
int CrptGeneralAdmissionReportForEthnicDialog::OnrptGeneralAdmissionReportForEthnicDialogListLoadData(){
	return 0;
}
