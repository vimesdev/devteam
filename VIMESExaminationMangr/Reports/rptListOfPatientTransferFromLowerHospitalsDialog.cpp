#include "rptListOfPatientTransferFromLowerHospitalsDialog.h"
//include "..\MainFrm.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptListOfPatientTransferFromLowerHospitalsDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferFromLowerHospitalsDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferFromLowerHospitalsDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptListOfPatientTransferFromLowerHospitalsDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptListOfPatientTransferFromLowerHospitalsDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferFromLowerHospitalsDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptListOfPatientTransferFromLowerHospitalsDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptListOfPatientTransferFromLowerHospitalsDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CrptListOfPatientTransferFromLowerHospitalsDialog *pVw = (CrptListOfPatientTransferFromLowerHospitalsDialog *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptListOfPatientTransferFromLowerHospitalsDialog *pVw = (CrptListOfPatientTransferFromLowerHospitalsDialog *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddrptListOfPatientTransferFromLowerHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferFromLowerHospitalsDialog*)pWnd)->OnAddrptListOfPatientTransferFromLowerHospitalsDialog();
} 
static int _OnEditrptListOfPatientTransferFromLowerHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferFromLowerHospitalsDialog*)pWnd)->OnEditrptListOfPatientTransferFromLowerHospitalsDialog();
} 
static int _OnDeleterptListOfPatientTransferFromLowerHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferFromLowerHospitalsDialog*)pWnd)->OnDeleterptListOfPatientTransferFromLowerHospitalsDialog();
} 
static int _OnSaverptListOfPatientTransferFromLowerHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferFromLowerHospitalsDialog*)pWnd)->OnSaverptListOfPatientTransferFromLowerHospitalsDialog();
} 
static int _OnCancelrptListOfPatientTransferFromLowerHospitalsDialogFnc(CWnd *pWnd){
	 return ((CrptListOfPatientTransferFromLowerHospitalsDialog*)pWnd)->OnCancelrptListOfPatientTransferFromLowerHospitalsDialog();
} 
CrptListOfPatientTransferFromLowerHospitalsDialog::CrptListOfPatientTransferFromLowerHospitalsDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 355;
	m_nDlgHeight = 105;
	SetDefaultValues();
	m_bPrintGeneral = false;
}
CrptListOfPatientTransferFromLowerHospitalsDialog::~CrptListOfPatientTransferFromLowerHospitalsDialog(){
}
void CrptListOfPatientTransferFromLowerHospitalsDialog::OnCreateComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 350, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 29, 260, 54);
	m_wndToDate.Create(this,265, 29, 345, 54); 
	m_wndPreview.Create(this, _T("&Preview"), 195, 65, 270, 90);
	m_wndExport.Create(this, _T("&Export"), 275, 65, 350, 90);

}
void CrptListOfPatientTransferFromLowerHospitalsDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

}
void CrptListOfPatientTransferFromLowerHospitalsDialog::OnSetWindowEvents(){
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
void CrptListOfPatientTransferFromLowerHospitalsDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CrptListOfPatientTransferFromLowerHospitalsDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptListOfPatientTransferFromLowerHospitalsDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptListOfPatientTransferFromLowerHospitalsDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptListOfPatientTransferFromLowerHospitalsDialog::SetMode(int nMode){
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
/*void CrptListOfPatientTransferFromLowerHospitalsDialog::OnFromDateChange(){
	
} */
/*void CrptListOfPatientTransferFromLowerHospitalsDialog::OnFromDateSetfocus(){
	
} */
/*void CrptListOfPatientTransferFromLowerHospitalsDialog::OnFromDateKillfocus(){
	
} */
int CrptListOfPatientTransferFromLowerHospitalsDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptListOfPatientTransferFromLowerHospitalsDialog::OnToDateChange(){
	
} */
/*void CrptListOfPatientTransferFromLowerHospitalsDialog::OnToDateSetfocus(){
	
} */
/*void CrptListOfPatientTransferFromLowerHospitalsDialog::OnToDateKillfocus(){
	
} */
int CrptListOfPatientTransferFromLowerHospitalsDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptListOfPatientTransferFromLowerHospitalsDialog::OnPreviewSelect(){
	if(m_bPrintGeneral)
	{
		OnPrintGeneralReport();
	}
	else
		OnPrintPatientListReport();
} 
void CrptListOfPatientTransferFromLowerHospitalsDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr, szSQL;
	CExcel xls;	
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	if(!m_bPrintGeneral)
	{
		szSQL.Format(_T(" SELECT hd_docno as docno, trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T(" 	hd_transplace as transfer_place, hd_transplaceid as transplaceid, ") \
					_T(" 	hd_transdiagn as transfer_diagnostic") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T(" WHERE date(hd_admitdate) between date('%s') and date('%s')") \
					_T(" 	and length(hd_transplaceid) > 0 and hd_status in('P','T') "), m_szFromDate, m_szToDate);
		rs.ExecSQL(szSQL);	

		xls.SetColumnWidth(0, 10);
		xls.SetColumnWidth(1, 30);
		xls.SetColumnWidth(2, 50);
		xls.SetColumnWidth(3, 50);
		xls.SetColumnWidth(4, 10);

		xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
		xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
		//xls.SetCellMergedColumns(0,3,12);	
		
		xls.SetCellText(0, 4, _T("DANH SACH TUYEN DUOI CHUYEN VIEN TRONG NGAY"),true,16,15);
		xls.MergeCell(4, 0, 4, 12);

		//xls.SetCellMergedColumns(0,4,12);
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
		
		TranslateString(_T("DocumentNo"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	

		int nIndex = 1;
		
		while(!rs.IsEOF())
		{
			nRow++;
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);

			rs.GetValue(_T("pname"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("transfer_diagnostic"), tmpStr);
			xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("transfer_place"), tmpStr);
			if(tmpStr.IsEmpty()){
				rs.GetValue(_T("transplaceid"), tmpStr);
				szSQL.Format(_T("SELECT hh_name as name FROM hms_hospital WHERe hh_id='%s'"), tmpStr);
				rs2.ExecSQL(szSQL);
				if(!rs2.IsEOF()){
					rs2.GetValue(_T("name"), tmpStr);
				}
				
			}
			xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("docno"), tmpStr);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);
			rs.MoveNext();
		}
		rs.MoveFirst();
		nRow++;
		xls.Save(_T("Exports\\danhsachbenhnhan_tuyenduoichuyenden.xls"));
		
	}
	if(m_bPrintGeneral )
	{
		szSQL.Format(_T(" SELECT hd_transplaceid,") \
					_T(" 	hd_transplace as transfer_place,") \
					_T(" 	count(*) as ttlpatient") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T(" WHERE date(hd_admitdate) between date('%s') and date('%s')") \
					_T(" 	and length(hd_transplaceid) > 0 and hd_status in('P','T') ") \
					_T(" GROUP BY hd_transplaceid, hd_transplace"), m_szFromDate, m_szToDate);
		rs.ExecSQL(szSQL);	

		xls.SetColumnWidth(0, 10);
		xls.SetColumnWidth(1, 50);
		xls.SetColumnWidth(2, 20);

		xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
		xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	//	xls.SetCellMergedColumns(0,3,12);	
		xls.SetCellText(0, 4, _T(" TONG HOP DANH SACH TUYEN DUOI CHUYEN VIEN TRONG NGAY"),true,16,15);
		xls.MergeCell(4, 0, 4, 12);
	//	xls.SetCellMergedColumns(0,4,12);
		tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
		xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,12,0);
		xls.MergeCell(5, 0, 5, 12);
		int nRow = 7;
		
		xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
		
		TranslateString(_T("Transfer place"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
		
		TranslateString(_T("Total Patient"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);		

		int nIndex = 1;
		long nTotal = 0;
		while(!rs.IsEOF())
		{
			nRow++;
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);

			rs.GetValue(_T("transfer_place"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("ttlpatient"), tmpStr);
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
		xls.Save(_T("Exports\\tonghoptuyenduoichuyenden.xls"));
		
	}
} 
// tong hop
void CrptListOfPatientTransferFromLowerHospitalsDialog::OnPrintGeneralReport(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CRecord rs(&pMF->m_db);
		CReport rpt;
	if(!rpt.Init(_T("Reports/tonghopchuyenvientuyenduoitrongngay.rpt")) )	
		return;
	UpdateData(true);

	szSQL.Format(_T(" SELECT hd_transplaceid,") \
				_T(" 	hd_transplace as transfer_place,") \
				_T(" 	count(*) as ttlpatient") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" WHERE date(hd_admitdate) between date('%s') and date('%s')") \
				_T(" 	and length(hd_transplaceid) > 0 and hd_status in('P','T') ") \
				_T(" GROUP BY hd_transplaceid, hd_transplace"), m_szFromDate, m_szToDate);
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
		rs.GetValue(_T("transfer_place"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("ttlpatient"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.MoveNext();
	}
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rs.GetValue(_T("bacsi"),tmpStr);
	rpt.GetReportFooter() ->SetValue(_T("User1"), tmpStr);
	rpt.PrintPreview();
	}
// hien thi chi tiet
void CrptListOfPatientTransferFromLowerHospitalsDialog::OnPrintPatientListReport(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
		CReport rpt;
	if(!rpt.Init(_T("Reports/Danhsachtuyenduoi_chuyenvien_trongngay.rpt")) )	
		return;
	UpdateData(true);
	szSQL.Format(_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hd_transplace as transfer_place, hd_transplaceid as transplaceid, ") \
				_T(" 	hd_transdiagn as transfer_diagnostic") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" WHERE date(hd_admitdate) between date('%s') and date('%s')") \
				_T(" 	and length(hd_transplaceid) > 0 and hd_status in('P','T') "), m_szFromDate, m_szToDate);
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
		rs.GetValue(_T("transfer_diagnostic"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("transfer_place"), tmpStr);
		if(tmpStr.IsEmpty()){
				rs.GetValue(_T("transplaceid"), tmpStr);
				szSQL.Format(_T("SELECT hh_name as name FROM hms_hospital WHERe hh_id='%s'"), tmpStr);
				rs2.ExecSQL(szSQL);
				if(!rs2.IsEOF()){
					rs2.GetValue(_T("name"), tmpStr);
				}
				
		}

		rptDetail->SetValue(_T("4"), tmpStr);
		rs.MoveNext();
	}
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rs.GetValue(_T("bacsi"),tmpStr);
	rpt.GetReportFooter() ->SetValue(_T("User"), tmpStr);
	rpt.PrintPreview();

}
int CrptListOfPatientTransferFromLowerHospitalsDialog::OnAddrptListOfPatientTransferFromLowerHospitalsDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptListOfPatientTransferFromLowerHospitalsDialog::OnEditrptListOfPatientTransferFromLowerHospitalsDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptListOfPatientTransferFromLowerHospitalsDialog::OnDeleterptListOfPatientTransferFromLowerHospitalsDialog(){
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
 		OnCancelrptListOfPatientTransferFromLowerHospitalsDialog(); 
 	}
	return 0;
}
int CrptListOfPatientTransferFromLowerHospitalsDialog::OnSaverptListOfPatientTransferFromLowerHospitalsDialog(){
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
 		//OnrptListOfPatientTransferFromLowerHospitalsDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptListOfPatientTransferFromLowerHospitalsDialog::OnCancelrptListOfPatientTransferFromLowerHospitalsDialog(){
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
int CrptListOfPatientTransferFromLowerHospitalsDialog::OnrptListOfPatientTransferFromLowerHospitalsDialogListLoadData(){
	return 0;
}
