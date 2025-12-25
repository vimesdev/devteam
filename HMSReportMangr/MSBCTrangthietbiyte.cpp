#include "MSBCTrangthietbiyte.h"
#include "MainFrm.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCTrangthietbiyte *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCTrangthietbiyte *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCTrangthietbiyte *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCTrangthietbiyte *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCTrangthietbiyte *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCTrangthietbiyte *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCTrangthietbiyte *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCTrangthietbiyte *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCTrangthietbiyte* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CMSBCTrangthietbiyte *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CMSBCTrangthietbiyte *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CMSBCTrangthietbiyte *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CMSBCTrangthietbiyte *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CMSBCTrangthietbiyte *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CMSBCTrangthietbiyte *pVw = (CMSBCTrangthietbiyte *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBCTrangthietbiyte *pVw = (CMSBCTrangthietbiyte *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddMSBCTrangthietbiyteFnc(CWnd *pWnd){
	 return ((CMSBCTrangthietbiyte*)pWnd)->OnAddMSBCTrangthietbiyte();
} 
static int _OnEditMSBCTrangthietbiyteFnc(CWnd *pWnd){
	 return ((CMSBCTrangthietbiyte*)pWnd)->OnEditMSBCTrangthietbiyte();
} 
static int _OnDeleteMSBCTrangthietbiyteFnc(CWnd *pWnd){
	 return ((CMSBCTrangthietbiyte*)pWnd)->OnDeleteMSBCTrangthietbiyte();
} 
static int _OnSaveMSBCTrangthietbiyteFnc(CWnd *pWnd){
	 return ((CMSBCTrangthietbiyte*)pWnd)->OnSaveMSBCTrangthietbiyte();
} 
static int _OnCancelMSBCTrangthietbiyteFnc(CWnd *pWnd){
	 return ((CMSBCTrangthietbiyte*)pWnd)->OnCancelMSBCTrangthietbiyte();
} 
CMSBCTrangthietbiyte::CMSBCTrangthietbiyte()
{

	m_nDlgWidth = 400;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CMSBCTrangthietbiyte::~CMSBCTrangthietbiyte(){
}
void CMSBCTrangthietbiyte::OnCreateComponents(){
	m_wndInformationReport.Create(this, _T("Information report"), 5, 5, 450, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 310, 55);
	m_wndToDate.Create(this,315, 30, 445, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 90, 85);
	m_wndDepartment.Create(this,95, 60, 445, 85); 
	m_wndExport.Create(this, _T("&Export"), 370, 95, 450, 120);
	m_wndPrint.Create(this, _T("&Print"), 285, 95, 365, 120);
}
void CMSBCTrangthietbiyte::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CMSBCTrangthietbiyte::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	SetMode(VM_EDIT);
}
void CMSBCTrangthietbiyte::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CMSBCTrangthietbiyte::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCTrangthietbiyte::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCTrangthietbiyte::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CMSBCTrangthietbiyte::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
			m_szFromDate = pMF->GetSysDate();
			m_szFromDate += _T("00:00");
			m_szToDate = pMF->GetSysDateTime();
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
/*void CMSBCTrangthietbiyte::OnFromDateChange(){
	
} */
/*void CMSBCTrangthietbiyte::OnFromDateSetfocus(){
	
} */
/*void CMSBCTrangthietbiyte::OnFromDateKillfocus(){
	
} */
int CMSBCTrangthietbiyte::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCTrangthietbiyte::OnToDateChange(){
	
} */
/*void CMSBCTrangthietbiyte::OnToDateSetfocus(){
	
} */
/*void CMSBCTrangthietbiyte::OnToDateKillfocus(){
	
} */
int CMSBCTrangthietbiyte::OnToDateCheckValue(){
	return 0;
} 
void CMSBCTrangthietbiyte::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCTrangthietbiyte::OnDepartmentSelendok(){
	 
}
/*void CMSBCTrangthietbiyte::OnDepartmentSetfocus(){
	
}*/
/*void CMSBCTrangthietbiyte::OnDepartmentKillfocus(){
	
}*/
long CMSBCTrangthietbiyte::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CMSBCTrangthietbiyte::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCTrangthietbiyte::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	int nIndex = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 30);	xls.SetColumnWidth(2, 10);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 8);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 8);	xls.SetColumnWidth(8, 16);	xls.SetColumnWidth(9, 16);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_CENTER,true, 11);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_CENTER,true, 11);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0,3, tmpStr,FMT_CENTER,true,11);	xls.SetCellText(0, 2, _T("\x42\xE1o \x63\xE1o tr\x61ng thi\x1EBFt \x62\x1ECB y t\x1EBF"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	xls.SetCellText(0, 4, _T("TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("T\xEAn m\xE1y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("Mo\x64\x65l"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("H\xE3ng S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("N\x1B0\x1EDB\x63 S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("N\x103m S\x44"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Gi\xE1 tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("\x110\x1A1n v\x1ECB s\x64"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("\x43\x1EA5p \x63h\x1EA5t l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 9);	xls.SetMerge(3, 3, 0, 9);	if(!m_szDepartmentKey.IsEmpty())		szWhere.Format(_T(" AND fa_department = '%s'"), m_szDepartmentKey);	szSQL.Format(_T("SELECT    fa_name, ") \
				_T("          fa_model, ") \
				_T("          (SELECT famm_name FROM   fam_manufacture  WHERE  famm_id = fa_mfgid) AS mfg, ") \
				_T("          (SELECT sc_name FROM   sys_country WHERE  sc_id = fa_madein) AS madein, ") \
				_T("          Extract(year FROM fa_useddate) AS uyear, ") \
				_T("          fa_purchaseprice, ") \
				_T("          fa_department, ") \
				_T("          fa_description, ") \
				_T("          CASE WHEN fami_level1 IS NOT NULL THEN 1 ") \
				_T("            WHEN fami_level2 IS NOT NULL THEN 2 ") \
				_T("            WHEN fami_level3 IS NOT NULL THEN 3 ") \
				_T("            WHEN fami_level4 IS NOT NULL THEN 4 ") \
				_T("            WHEN fami_level5 IS NOT NULL THEN 5 ") \
				_T("          ELSE 0 ") \
				_T("          END AS qtylevel ") \
				_T("FROM      fam_asset ") \
				_T("LEFT JOIN storage_transactionline ON( stl_transactionline_id = fa_strgtransline_id ) ") \
				_T("LEFT JOIN fam_inventoried ON ( fami_fid = fa_assetno ) ") \
				_T("WHERE     fa_type = 'TBYT' and fa_useddate between cast_string2timestamp('%s') and cast_string2timestamp('%s') %s"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){			xls.SetCellText(nCol+0, nRow, int2str(nIndex++), FMT_TEXT);		rs.GetValue(_T("fa_name"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_model"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mfg"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("madein"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("uyear"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_purchaseprice"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_department"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("qtylevel"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_description"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\MSBCTrangthietbiyte.xls"));
} 
void CMSBCTrangthietbiyte::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate, szWhere;
	int nIndex = 1;

	if(!m_szDepartmentKey.IsEmpty())		szWhere.Format(_T(" AND fa_department = '%s'"), m_szDepartmentKey);	szSQL.Format(_T("SELECT    fa_name, ") \
				_T("          fa_model, ") \
				_T("          (SELECT famm_name FROM   fam_manufacture  WHERE  famm_id = fa_mfgid) AS mfg, ") \
				_T("          (SELECT sc_name FROM   sys_country WHERE  sc_id = fa_madein) AS madein, ") \
				_T("          Extract(year FROM fa_useddate) AS uyear, ") \
				_T("          fa_purchaseprice, ") \
				_T("          fa_department, ") \
				_T("          fa_description, ") \
				_T("          CASE WHEN fami_level1 IS NOT NULL THEN 1 ") \
				_T("            WHEN fami_level2 IS NOT NULL THEN 2 ") \
				_T("            WHEN fami_level3 IS NOT NULL THEN 3 ") \
				_T("            WHEN fami_level4 IS NOT NULL THEN 4 ") \
				_T("            WHEN fami_level5 IS NOT NULL THEN 5 ") \
				_T("          ELSE 0 ") \
				_T("          END AS qtylevel ") \
				_T("FROM      fam_asset ") \
				_T("LEFT JOIN storage_transactionline ON( stl_transactionline_id = fa_strgtransline_id ) ") \
				_T("LEFT JOIN fam_inventoried ON ( fami_fid = fa_assetno ) ") \
				_T("WHERE     fa_type = 'TBYT' and fa_useddate between cast_string2timestamp('%s') and cast_string2timestamp('%s') %s"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports\\HMS\\BCTRANGTHIETBIYTE.RPT")))
		return;

	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("fa_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fa_model"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("mfg"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("madein"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("uyear"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("fa_purchaseprice"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("fa_department"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("qtylevel"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("fa_description"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.MoveNext();
	}

	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
int CMSBCTrangthietbiyte::OnAddMSBCTrangthietbiyte(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMSBCTrangthietbiyte::OnEditMSBCTrangthietbiyte(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCTrangthietbiyte::OnDeleteMSBCTrangthietbiyte(){
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
 		OnCancelMSBCTrangthietbiyte();
 	}
	return 0;
}
int CMSBCTrangthietbiyte::OnSaveMSBCTrangthietbiyte(){
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
 		//OnMSBCTrangthietbiyteListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMSBCTrangthietbiyte::OnCancelMSBCTrangthietbiyte(){
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
int CMSBCTrangthietbiyte::OnMSBCTrangthietbiyteListLoadData(){
	return 0;
}
