#include "stdafx.h"
#include "RPTStatisticMedicalDevices.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPTStatisticMedicalDevices *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPTStatisticMedicalDevices *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPTStatisticMedicalDevices *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTStatisticMedicalDevices *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTStatisticMedicalDevices *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTStatisticMedicalDevices *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTStatisticMedicalDevices *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTStatisticMedicalDevices *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTStatisticMedicalDevices* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTStatisticMedicalDevices *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTStatisticMedicalDevices *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTStatisticMedicalDevices *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTStatisticMedicalDevices *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTStatisticMedicalDevices *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTStatisticMedicalDevices *pVw = (CRPTStatisticMedicalDevices *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTStatisticMedicalDevices *pVw = (CRPTStatisticMedicalDevices *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddRPTStatisticMedicalDevicesFnc(CWnd *pWnd){
	 return ((CRPTStatisticMedicalDevices*)pWnd)->OnAddRPTStatisticMedicalDevices();
} 
static int _OnEditRPTStatisticMedicalDevicesFnc(CWnd *pWnd){
	 return ((CRPTStatisticMedicalDevices*)pWnd)->OnEditRPTStatisticMedicalDevices();
} 
static int _OnDeleteRPTStatisticMedicalDevicesFnc(CWnd *pWnd){
	 return ((CRPTStatisticMedicalDevices*)pWnd)->OnDeleteRPTStatisticMedicalDevices();
} 
static int _OnSaveRPTStatisticMedicalDevicesFnc(CWnd *pWnd){
	 return ((CRPTStatisticMedicalDevices*)pWnd)->OnSaveRPTStatisticMedicalDevices();
} 
static int _OnCancelRPTStatisticMedicalDevicesFnc(CWnd *pWnd){
	 return ((CRPTStatisticMedicalDevices*)pWnd)->OnCancelRPTStatisticMedicalDevices();
} 
CRPTStatisticMedicalDevices::CRPTStatisticMedicalDevices(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTStatisticMedicalDevices::~CRPTStatisticMedicalDevices(){
}
void CRPTStatisticMedicalDevices::OnCreateComponents(){
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
void CRPTStatisticMedicalDevices::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


}
void CRPTStatisticMedicalDevices::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
void CRPTStatisticMedicalDevices::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CRPTStatisticMedicalDevices::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTStatisticMedicalDevices::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTStatisticMedicalDevices::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CRPTStatisticMedicalDevices::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CRPTStatisticMedicalDevices::OnFromDateChange(){
	
} */
/*void CRPTStatisticMedicalDevices::OnFromDateSetfocus(){
	
} */
/*void CRPTStatisticMedicalDevices::OnFromDateKillfocus(){
	
} */
int CRPTStatisticMedicalDevices::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPTStatisticMedicalDevices::OnToDateChange(){
	
} */
/*void CRPTStatisticMedicalDevices::OnToDateSetfocus(){
	
} */
/*void CRPTStatisticMedicalDevices::OnToDateKillfocus(){
	
} */
int CRPTStatisticMedicalDevices::OnToDateCheckValue(){
	return 0;
} 
void CRPTStatisticMedicalDevices::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTStatisticMedicalDevices::OnDepartmentSelendok(){
	 
}
/*void CRPTStatisticMedicalDevices::OnDepartmentSetfocus(){
	
}*/
/*void CRPTStatisticMedicalDevices::OnDepartmentKillfocus(){
	
}*/
long CRPTStatisticMedicalDevices::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
/*void CRPTStatisticMedicalDevices::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTStatisticMedicalDevices::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	int nIndex = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 21);	xls.SetColumnWidth(2, 10);	xls.SetColumnWidth(3, 10);	xls.SetColumnWidth(4, 10);	xls.SetColumnWidth(5, 8);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 8);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 13);	xls.SetColumnWidth(10, 14);	xls.SetCellText(0, 1, _T("Qu\x1EA3n l\xFD th\x1ED1ng k\xEA T\x42YT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 3, _T("TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 3, _T("T\xEAn m\xE1y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 3, _T("Mo\x64\x65l"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 3, _T("Seri"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 3, _T("H\xE3ng S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 3, _T("N\x1B0\x1EDB\x63 S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 3, _T("N\x103m S\x44"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 3, _T("Gi\xE1 tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 3, _T("\x110\x1A1n v\x1ECB s\x64"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 3, _T("\x43\x1EA5p \x63h\x1EA5t l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 3, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 0);	xls.SetMerge(1, 1, 0, 9);	if(!m_szDepartmentKey.IsEmpty())		szWhere.Format(_T(" AND fa_department = '%s'"), m_szDepartmentKey);	szSQL.Format(_T("SELECT    fa_name, ") \
				_T("          fa_model, fa_serial,") \
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
				_T("WHERE     fa_type = 'TBYT' AND fa_org_id = 'FAM' and fa_useddate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') %s"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){			xls.SetCellText(nCol+0, nRow, int2str(nIndex++), FMT_TEXT);		rs.GetValue(_T("fa_name"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_model"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_serial"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mfg"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("madein"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("uyear"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_purchaseprice"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("fa_department"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("qtylevel"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_description"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\thongke.xls"));
} 
void CRPTStatisticMedicalDevices::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate, szWhere;
	int nIndex = 1;

	if(!m_szDepartmentKey.IsEmpty())		szWhere.Format(_T(" AND fa_department = '%s'"), m_szDepartmentKey);	szSQL.Format(_T("SELECT    fa_name, ") \
				_T("          fa_model, fa_serial, ") \
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
				_T("LEFT JOIN fam_inventoried ON ( fami_fid = fa_assetno ) ") \
				_T("WHERE     fa_type = 'TBYT' AND fa_org_id = 'FAM' and fa_useddate between to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') %s"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/FAM/FAM_THONGKETSCD.RPT")))
		return;

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("fa_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fa_model"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("fa_serial"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("mfg"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("madein"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("uyear"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("fa_purchaseprice"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("fa_department"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("qtylevel"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("fa_description"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.MoveNext();
	}

	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
int CRPTStatisticMedicalDevices::OnAddRPTStatisticMedicalDevices(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTStatisticMedicalDevices::OnEditRPTStatisticMedicalDevices(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTStatisticMedicalDevices::OnDeleteRPTStatisticMedicalDevices(){
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
 		OnCancelRPTStatisticMedicalDevices();
 	}
	return 0;
}
int CRPTStatisticMedicalDevices::OnSaveRPTStatisticMedicalDevices(){
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
 		//OnRPTStatisticMedicalDevicesListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTStatisticMedicalDevices::OnCancelRPTStatisticMedicalDevices(){
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
int CRPTStatisticMedicalDevices::OnRPTStatisticMedicalDevicesListLoadData(){
	return 0;
}
