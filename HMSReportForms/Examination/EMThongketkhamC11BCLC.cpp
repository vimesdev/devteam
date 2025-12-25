#include "stdafx.h"
#include "EMThongketkhamC11BCLC.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMThongkekhamc11bclc *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMThongkekhamc11bclc* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMThongkekhamc11bclc *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMThongkekhamc11bclc *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMThongkekhamc11bclc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMThongkekhamc11bclc *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMThongkekhamc11bclc *pVw = (CEMThongkekhamc11bclc *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMThongkekhamc11bclc *pVw = (CEMThongkekhamc11bclc *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CEMThongkekhamc11bclc *pVw = (CEMThongkekhamc11bclc *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMThongkekhamc11bclc*)pWnd)->OnAddEMStatisticsGeneralPatientReport();
} 
static int _OnEditEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMThongkekhamc11bclc*)pWnd)->OnEditEMStatisticsGeneralPatientReport();
} 
static int _OnDeleteEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMThongkekhamc11bclc*)pWnd)->OnDeleteEMStatisticsGeneralPatientReport();
} 
static int _OnSaveEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMThongkekhamc11bclc*)pWnd)->OnSaveEMStatisticsGeneralPatientReport();
} 
static int _OnCancelEMStatisticsGeneralPatientReportFnc(CWnd *pWnd){
	 return ((CEMThongkekhamc11bclc*)pWnd)->OnCancelEMStatisticsGeneralPatientReport();
} 
CEMThongkekhamc11bclc::CEMThongkekhamc11bclc(CWnd *pParent)
{
	m_nDlgWidth = 420;
	m_nDlgHeight = 125;
	SetDefaultValues();
}

CEMThongkekhamc11bclc::~CEMThongkekhamc11bclc()
{
}
void CEMThongkekhamc11bclc::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Khoa"), 215, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 410, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 90);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 410, 85); 
	//m_wndPrint.Create(this, _T("&Print"), 250, 95, 330, 120);
	m_wndExport.Create(this, _T("&ExportXLS"), 335, 95, 415, 120);

}
void CEMThongkekhamc11bclc::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(false);
	m_wndReportPeriod.SetCheckValue(false);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(false);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(false);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndReportPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
}
void CEMThongkekhamc11bclc::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	//m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	SetMode(VM_EDIT);
}
void CEMThongkekhamc11bclc::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}
void CEMThongkekhamc11bclc::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CEMThongkekhamc11bclc::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMThongkekhamc11bclc::SetDefaultValues(){

	m_nYear=0;
	//m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CEMThongkekhamc11bclc::SetMode(int nMode){
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
 			EnableButtons(TRUE,0,1,2,3,-1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CEMThongkekhamc11bclc::OnYearChange(){
	
} */
/*void CEMThongkekhamc11bclc::OnYearSetfocus(){
	
} */
/*void CEMThongkekhamc11bclc::OnYearKillfocus(){
	
} */
int CEMThongkekhamc11bclc::OnYearCheckValue(){
	return 0;
} 
void CEMThongkekhamc11bclc::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMThongkekhamc11bclc::OnReportPeriodSelendok()
{
	 
	 
}
/*void CEMThongkekhamc11bclc::OnReportPeriodSetfocus(){
	
}*/
/*void CEMThongkekhamc11bclc::OnReportPeriodKillfocus(){
	
}*/
long CEMThongkekhamc11bclc::OnReportPeriodLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty())
	{
		szWhere.Format(_T(" and sd_id='%s' "), m_szReportPeriodKey);
	}
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndReportPeriod.AddItems
			(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMThongkekhamc11bclc::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMThongkekhamc11bclc::OnFromDateChange(){
	
} */
/*void CEMThongkekhamc11bclc::OnFromDateSetfocus(){
	
} */
/*void CEMThongkekhamc11bclc::OnFromDateKillfocus(){
	
} */
int CEMThongkekhamc11bclc::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMThongkekhamc11bclc::OnToDateChange(){
	
} */
/*void CEMThongkekhamc11bclc::OnToDateSetfocus(){
	
} */
/*void CEMThongkekhamc11bclc::OnToDateKillfocus(){
	
} */
int CEMThongkekhamc11bclc::OnToDateCheckValue(){
	return 0;
} 
void CEMThongkekhamc11bclc::OnPrintSelect(){}
void CEMThongkekhamc11bclc::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	

	TranslateString(_T("Export chi tiết"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	//TranslateString(_T("Export tổng hợp"), tmpStr);
	//menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);


	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect_V1();
			break;
		case 2:
			OnExportSelect_V2();
			break;
	
	}
} 

void CEMThongkekhamc11bclc::OnExportSelect_V2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	AfxMessageBox(_T("Báo cáo lấy thuốc của đối tượng bảo hiểm, có cột hoạt chất để lọc trên excel"));
	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAOTHUOCTHEOTHONGTU_5251.xls"))) 
		AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	//xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	int nCount = 1;
	while(!rs.IsEOF())
	{
		if(nRow == 65000)
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow = 0;
		}		
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("thuoc"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hoathat"), tmpStr);		
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thanh_tien"), tmpStr);		
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_NUMBER1);	
		
		rs.GetValue(_T("tenbacsi"), tmpStr);		
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoachidinh"), tmpStr);		
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOTHUOCTHEOTHONGTU_52512.xls"));
} 
void CEMThongkekhamc11bclc::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMThongkekhamc11bclc::OnAddEMStatisticsGeneralPatientReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CEMThongkekhamc11bclc::OnEditEMStatisticsGeneralPatientReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMThongkekhamc11bclc::OnDeleteEMStatisticsGeneralPatientReport(){
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
 		OnCancelEMStatisticsGeneralPatientReport(); 
 	}
	return 0;
}
int CEMThongkekhamc11bclc::OnSaveEMStatisticsGeneralPatientReport(){
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
 		//OnEMStatisticsGeneralPatientReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CEMThongkekhamc11bclc::OnCancelEMStatisticsGeneralPatientReport(){
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
int CEMThongkekhamc11bclc::OnEMStatisticsGeneralPatientReportListLoadData(){
	return 0;
}
CString CEMThongkekhamc11bclc::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;	
	
	szWhere.Format(_T(" AND HPO_APPROVEDATE BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if(!m_szReportPeriodKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_deptid = '%s'"), m_szReportPeriodKey);
	}

		szSQL.Format(_T(" SELECT product_name thuoc,") \
		_T("   product_classname                 AS hoathat,") \
		_T("   SUM(hpol_qtyissue*hpol_unitprice) AS thanh_tien,") \
		_T("   GET_USERNAME(hpo_doctor)          AS tenbacsi,") \
		_T("   GET_DEPTNAME(hpo_doctor) as khoachidinh") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON (hpo_orderid = hpol_orderid") \
		_T(" AND hpo_docno   = hpol_docno)") \
		_T(" LEFT JOIN hms_fee") \
		_T(" ON (hpo_docno        = hfe_docno") \
		_T(" AND hpo_orderid      = hfe_orderid") \
		_T(" AND hpol_orderlineid = hfe_orderline)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (hpol_product_item_id = product_item_id)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hpo_docno = hd_docno)") \
		_T(" LEFT JOIN hms_object") \
		_T(" ON (HPO_OBJECT_ID   = ho_id)") \
		_T(" WHERE 1             =1") \
		_T(" AND HPO_ORDERSTATUS = 'A'") \
		_T(" AND hpol_qtyissue   > 0") \
		_T(" %s") \
		_T(" AND hpo_deptid   IN ('C1.1', 'AB')") \
		_T(" AND ho_type      IN ('I', 'C')") \
		_T(" AND hfe_category <> 'Y'") \
		_T(" GROUP BY product_name,") \
		_T("   product_classname,") \
		_T("   hpo_doctor,") \
		_T("   hpo_deptid") \
		_T(" ORDER BY product_name "), szWhere);
		//_msg(_T("%s"), szSQL);
	return szSQL;
}

void CEMThongkekhamc11bclc::OnExportSelect_V1()
{

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	//AfxMessageBox(_T("Báo cáo lấy thuốc của đối tượng bảo hiểm, có cột hoạt chất để lọc trên excel"));
	int nRow = 0, nCol = 0, nIdx = 1, nSheet = 0;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAOCHITIETKHUCLC.xls"))) 
		AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);	
	//xls.SetSheetName(_T("Sheet 0"));

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString_V1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	int nCount = 1;
	while(!rs.IsEOF())
	{
		if(nRow == 65000)
		{
			nSheet++;
			tmpStr.Format(_T("Sheet %d"), nSheet+1);
			xls.AddSheet(tmpStr);
			xls.SetWorksheet(nSheet);
			nRow = 0;
		}		
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("examdate"), tmpStr);		
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("enddate"), tmpStr);		
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khambenhly"), tmpStr);		
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ketluanbenh"), tmpStr);		
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("mabenh"), tmpStr);		
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("diachi"), tmpStr);		
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phone"), tmpStr);		
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("suggestion"), tmpStr);		
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bacsikham"), tmpStr);		
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bskedon"), tmpStr);		
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenpk"), tmpStr);		
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("tienthuoc"), tmpStr);		
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_NUMBER1);	
		
		rs.GetValue(_T("tongtien"), tmpStr);		
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1);		
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[17] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 15; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}
	
	xls.SetActiveSheet(0);
	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAOCHITIETKHUCLC2.xls"));
} 

CString CEMThongkekhamc11bclc::GetQueryString_V1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;	
	
	szWhere.Format(_T(" AND he_examdate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);	
		
		szSQL.Format(_T(" SELECT hp_patientno AS patientno,") \
		_T("   hd_docno          AS docno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                                    AS pname,") \
		_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
		_T("   HMS_GETSEX(hp_sex) as sex,") \
		_T("   to_char(he_examdate, 'DD/MM/YYYY')                  AS examdate,") \
		_T("   CASE") \
		_T("     WHEN hd_status IN ('T')") \
		_T("     THEN to_char(hd_enddate, 'DD/MM/YYYY')") \
		_T("     ELSE NULL") \
		_T("   END                                                AS enddate,") \
		_T("   trim(he_medical) as khambenhly,") \
		_T("   hd_conclusion as ketluanbenh,") \
		_T("   hd_icd as mabenh,") \
		_T("   HMS_GETADDRESS(hp_provid, 0, 0) as diachi,") \
		_T("   hd_telephone as phone,") \
		_T("   sys_sel_getname('hms_suggestion', hd_suggestion)   AS suggestion,") \
		_T("   GET_USERNAME(he_doctor) as bacsikham,") \
		_T("   ") \
		_T("   (select GET_USERNAME(hpo_doctor) from hms_pharmaorder") \
		_T("   where hpo_docno = hd_docno") \
		_T("   and hpo_deptid = he_deptid") \
		_T("   and hpo_roomid = he_roomid") \
		_T("   and hpo_org_id='EM'") \
		_T("   and hpo_ordertype = 'P'") \
		_T("   and hpo_depttype='KB'") \
		_T("   and rownum <=1") \
		_T("   ) as bskedon,") \
		_T("   hrl_name as tenpk,") \
		_T("   ") \
		_T("   (select sum(hfe_cost)") \
		_T("   from hms_fee where hfe_docno = hd_docno") \
		_T("   and hfe_type in ('D', 'M')") \
		_T("   and hfe_category <> 'Y' and hfe_status='P' ") \
		_T("   and hfe_class='E') as tienthuoc,") \
		_T("   ") \
		_T("   (select sum(hfe_cost)") \
		_T("   from hms_fee where hfe_docno = hd_docno ") \
		_T("   and hfe_category <> 'Y' and hfe_status='P' ") \
		_T("   and hfe_class='E') as tongtien  ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(hd_docno    =he_docno)") \
		_T(" LEFT JOIN hms_roomlist ON (he_deptid = hrl_deptid and he_roomid = hrl_id)") \
		_T(" WHERE 1        =1 %s") \
		_T(" AND he_status IN('O','P','T')") \
		_T(" AND he_deptid  IN ('C11BCLC', 'KB_A16')") \
		_T(" ORDER BY examdate,") \
		_T("   he_roomid,") \
		_T("   he_receptno,") \
		_T("   pname"), szWhere);		
	return szSQL;
}