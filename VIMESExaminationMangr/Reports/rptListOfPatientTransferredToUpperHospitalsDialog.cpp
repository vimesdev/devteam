#include "rptListOfPatientTransferredToUpperHospitalsDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CrptListOfPatientTransferredToUpperHospitalsDialog *pVw = (CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptListOfPatientTransferredToUpperHospitalsDialog *pVw = (CrptListOfPatientTransferredToUpperHospitalsDialog *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddrptListOfPatientTransferredToUpperHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferredToUpperHospitalsDialog*)pWnd)->OnAddrptListOfPatientTransferredToUpperHospitalsDialog();
} 
static int _OnEditrptListOfPatientTransferredToUpperHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferredToUpperHospitalsDialog*)pWnd)->OnEditrptListOfPatientTransferredToUpperHospitalsDialog();
} 
static int _OnDeleterptListOfPatientTransferredToUpperHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferredToUpperHospitalsDialog*)pWnd)->OnDeleterptListOfPatientTransferredToUpperHospitalsDialog();
} 
static int _OnSaverptListOfPatientTransferredToUpperHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferredToUpperHospitalsDialog*)pWnd)->OnSaverptListOfPatientTransferredToUpperHospitalsDialog();
} 
static int _OnCancelrptListOfPatientTransferredToUpperHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferredToUpperHospitalsDialog*)pWnd)->OnCancelrptListOfPatientTransferredToUpperHospitalsDialog();
} 
CrptListOfPatientTransferredToUpperHospitalsDialog::CrptListOfPatientTransferredToUpperHospitalsDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 105;
	SetDefaultValues();
	m_bPrintGeneral = false;
}
CrptListOfPatientTransferredToUpperHospitalsDialog::~CrptListOfPatientTransferredToUpperHospitalsDialog(){
}
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 350, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 29, 260, 54);
	m_wndToDate.Create(this,265, 29, 345, 54); 
	m_wndPreview.Create(this, _T("&Preview"), 195, 65, 270, 90);
	m_wndExport.Create(this, _T("&Export"), 275, 65, 350, 90);

}
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

}
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);
}
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CrptListOfPatientTransferredToUpperHospitalsDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptListOfPatientTransferredToUpperHospitalsDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptListOfPatientTransferredToUpperHospitalsDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptListOfPatientTransferredToUpperHospitalsDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnFromDateChange(){
	
} */
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnFromDateSetfocus(){
	
} */
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnFromDateKillfocus(){
	
} */
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnToDateChange(){
	
} */
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnToDateSetfocus(){
	
} */
/*void CrptListOfPatientTransferredToUpperHospitalsDialog::OnToDateKillfocus(){
	
} */
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bPrintGeneral)
		OnPrintGeneralReport();
	else
		OnPrintPatientListReport();
} 
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	if(!m_bPrintGeneral)
	{
			szSQL.Format(_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T(" 	hd_tohosid as hospital_id,") \
					_T(" 	hh_name as hospital_name,") \
					_T("	(select hi_name from hms_icd where hi_icd = hd_icd ) as hd_icd,") \
					_T(" 	hd_doctor") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T(" LEFT JOIN hms_hospital ON(hd_tohosid=hh_id)") \
					_T(" LEFT JOIN hms_icd ON(hi_icd=hd_icd)") \
					_T(" WHERE 	hd_status='T' ") \
					_T(" 	and hd_suggestion='T' ") \
					_T("	and length(hd_tohosid) > 0 ") \
					_T(" 	and date(hd_enddate) between date('%s') and date('%s')"), m_szFromDate, m_szToDate);
		rs.ExecSQL(szSQL);

		xls.SetColumnWidth(0, 10);
		xls.SetColumnWidth(1, 30);
		xls.SetColumnWidth(2, 50);
		xls.SetColumnWidth(3, 50);
		

		xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
		xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
		
		
		xls.SetCellText(0, 4, _T("DANH SACH CHUYEN VIEN TUYEN TREN TRONG NGAY"),true,16,15);
		xls.MergeCell(4, 0, 4, 12);
		
		tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
		xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,12,0);
		xls.MergeCell(5, 0, 5, 12);

		int nRow = 7;
		xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
		TranslateString(_T("Patient Name"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
		TranslateString(_T("Transfer Diagnostic"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
		TranslateString(_T("Transfer Place"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
		int nIndex = 1;
		int i=0,nTotal[10];
		for (i=0;i<10;i++)
		{
			nTotal[i]=0;
		}
		while(!rs.IsEOF())
		{
			nRow++;
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);

			rs.GetValue(_T("pname"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("hd_icd"), tmpStr);
			xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("hospital_name"), tmpStr);
			xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);
			rs.MoveNext();
		}
		rs.MoveFirst();
		nRow++;
		xls.Save(_T("Exports\\danhsachbenhnhan_chuyenvientuyentren.xls"));
		EndWaitCursor();
	}
	if(m_bPrintGeneral)
	{
		szSQL.Format(_T(" SELECT hd_tohosid as hospital_id,") \
					_T(" 	hh_name as hospital_name,") \
					_T(" 	count(*) as totalpatient") \
					_T("  FROM hms_patient") \
					_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T("  LEFT JOIN hms_hospital ON(hd_tohosid=hh_id)") \
					_T("  WHERE 	hd_status='T'") \
					_T(" 	and hd_suggestion='T' ") \
					_T("	and length(hd_tohosid) > 0 ") \
					_T(" 	and date(hd_enddate) between date('%s') and date('%s')") \
					_T(" Group by hospital_id, hospital_name"), m_szFromDate, m_szToDate);
		rs.ExecSQL(szSQL);


		xls.SetColumnWidth(0, 10);
		xls.SetColumnWidth(1, 50);
		xls.SetColumnWidth(2, 20);
		

		xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
		xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
		//xls.SetCellMergedColumns(0,3,12);	
		xls.SetCellText(0, 4, _T("TONG HOP CHUYEN VIEN TUYEN TREN TRONG NGAY"),true,16,15);
		xls.MergeCell(4, 0, 4, 12);
		//xls.SetCellMergedColumns(0,4,12);
		tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
		xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,12,0);
		xls.MergeCell(5, 0, 5, 12);

		int nRow = 7;
		xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
		TranslateString(_T("Hospital Name"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
		TranslateString(_T("Total patient"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);	
		
		int nIndex = 1;
		long nTotal = 0;
		while(!rs.IsEOF())
		{
			nRow++;
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);

			rs.GetValue(_T("hospital_name"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("totalpatient"), tmpStr);
			nTotal += str2int(tmpStr);
			xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);

			rs.MoveNext();
		}
		nRow++;
		TranslateString(_T("Total"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		tmpStr.Format(_T("%ld"), nTotal);
		xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);

		rs.MoveFirst();
		nRow++;
		xls.Save(_T("Exports\\tonghopchuyenvientuyentren.xls"));
		EndWaitCursor();
	}
} 

// tong hop
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnPrintGeneralReport(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CRecord rs(&pMF->m_db);
		CReport rpt;
	if(!rpt.Init(_T("Reports/tonghopchuyenvientuyentrentrongngay.rpt")) )	
		return;
	UpdateData(true);
	szSQL.Format(_T(" SELECT hd_tohosid as hospital_id,") \
				_T(" 	hh_name as hospital_name,") \
				_T(" 	count(*) as totalpatient") \
				_T("  FROM hms_patient") \
				_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_hospital ON(hd_tohosid=hh_id)") \
				_T("  WHERE 	hd_status='T'") \
				_T(" 	and hd_suggestion='T' ") \
				_T(" 	and length(hd_tohosid) > 0 ") \
				_T(" 	and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" Group by hospital_id, hospital_name"), m_szFromDate, m_szToDate);
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
	int nIndex = 1;
	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("hospital_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("totalpatient"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.MoveNext();
	}
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rs.GetValue(_T("bacsi"),tmpStr);
	rpt.GetReportFooter() ->SetValue(_T("User1"), tmpStr);
	rpt.PrintPreview();
}
// chi tiet
void CrptListOfPatientTransferredToUpperHospitalsDialog::OnPrintPatientListReport(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CRecord rs(&pMF->m_db);
	CReport rpt;
	if(!rpt.Init(_T("Reports/Danhsachtuyentren_chuyenvien_trongngay.rpt")) )	
		return;
	UpdateData(true);	
	szSQL.Format(_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hd_tohosid as hospital_id,") \
				_T(" 	hh_name as hospital_name,") \
				_T("	(select hi_name from hms_icd where hi_icd = hd_icd ) as hd_icd,") \
				_T(" 	hd_doctor") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_hospital ON(hd_tohosid=hh_id)") \
				_T(" LEFT JOIN hms_icd ON(hi_icd=hd_icd)") \
				_T(" WHERE 	hd_status='T' ") \
				_T(" 	and hd_suggestion='T' ") \
				_T("	and length(hd_tohosid) > 0 ") \
				_T(" 	and date(hd_enddate) between date('%s') and date('%s')"), m_szFromDate, m_szToDate);
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
	int nIndex = 1;
	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("hd_icd"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("hospital_name"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.MoveNext();
	}
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rs.GetValue(_T("bacsi"),tmpStr);
	rpt.GetReportFooter() ->SetValue(_T("User"), tmpStr);
	rpt.PrintPreview();
}

int CrptListOfPatientTransferredToUpperHospitalsDialog::OnAddrptListOfPatientTransferredToUpperHospitalsDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnEditrptListOfPatientTransferredToUpperHospitalsDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnDeleterptListOfPatientTransferredToUpperHospitalsDialog(){
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
 		OnCancelrptListOfPatientTransferredToUpperHospitalsDialog(); 
 	}
	return 0;
}
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnSaverptListOfPatientTransferredToUpperHospitalsDialog(){
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
 		//OnrptListOfPatientTransferredToUpperHospitalsDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnCancelrptListOfPatientTransferredToUpperHospitalsDialog(){
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
int CrptListOfPatientTransferredToUpperHospitalsDialog::OnrptListOfPatientTransferredToUpperHospitalsDialogListLoadData(){
	return 0;
}
