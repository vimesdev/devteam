#include "stdafx.h"
#include "PMInsuranceDrugUsage.h"
#include "MainFrame_E10.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMInsuranceDrugUsage *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMInsuranceDrugUsage *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMInsuranceDrugUsage* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMInsuranceDrugUsage *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnStockAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMInsuranceDrugUsage* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CPMInsuranceDrugUsage *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CPMInsuranceDrugUsage *)pWnd)->OnItemAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMInsuranceDrugUsage *pVw = (CPMInsuranceDrugUsage *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMInsuranceDrugUsage *pVw = (CPMInsuranceDrugUsage *)pWnd;
	pVw->OnExportSelect();
} 
CPMInsuranceDrugUsage::CPMInsuranceDrugUsage(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMInsuranceDrugUsage::~CPMInsuranceDrugUsage(){
}
void CPMInsuranceDrugUsage::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 495, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 260, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 265, 30, 345, 55);
	m_wndToDate.Create(this,350, 30, 490, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 110, 85);
	m_wndStock.SetCheckBox(TRUE);
	m_wndStock.Create(this,115, 60, 490, 85); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 90, 110, 115);
	m_wndItem.Create(this,115, 90, 490, 115); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 125, 410, 150);
	m_wndExport.Create(this, _T("&Export"), 415, 125, 495, 150);
	m_wndPrintPreview.EnableWindow(FALSE);
}
void CPMInsuranceDrugUsage::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(1024);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 80);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndItem.Format(3, 2);
	m_wndItem.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndItem.InsertColumn(1, _T("ID"), CFMT_TEXT, 70);
	m_wndItem.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);

}

void CPMInsuranceDrugUsage::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(FALSE);

}
void CPMInsuranceDrugUsage::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);

}
void CPMInsuranceDrugUsage::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey = _T("2");

}

int CPMInsuranceDrugUsage::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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

/*void CPMInsuranceDrugUsage::OnFromDateChange(){
	
} */
/*void CPMInsuranceDrugUsage::OnFromDateSetfocus(){
	
} */
/*void CPMInsuranceDrugUsage::OnFromDateKillfocus(){
	
} */
int CPMInsuranceDrugUsage::OnFromDateCheckValue(){
	return 0;
}
 
/*void CPMInsuranceDrugUsage::OnToDateChange(){
	
} */
/*void CPMInsuranceDrugUsage::OnToDateSetfocus(){
	
} */
/*void CPMInsuranceDrugUsage::OnToDateKillfocus(){
	
} */
int CPMInsuranceDrugUsage::OnToDateCheckValue(){
	return 0;
}
 
void CPMInsuranceDrugUsage::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPMInsuranceDrugUsage::OnStockSelendok(){
	 
}

/*void CPMInsuranceDrugUsage::OnStockSetfocus(){
	
}*/
/*void CPMInsuranceDrugUsage::OnStockKillfocus(){
	
}*/
long CPMInsuranceDrugUsage::OnStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT mup_stocks FROM m_userperm WHERE mup_userid = '%s'"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("mup_stocks"), tmpStr);

	CString szFilter;
	szFilter.Format(_T(" AND msl_storage_id IN (%s)"), tmpStr);
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey, szFilter);
}

/*void CPMInsuranceDrugUsage::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMInsuranceDrugUsage::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMInsuranceDrugUsage::OnItemSelendok(){
	 
}
/*void CPMInsuranceDrugUsage::OnItemSetfocus(){
	
}*/
/*void CPMInsuranceDrugUsage::OnItemKillfocus(){
	
}*/
long CPMInsuranceDrugUsage::OnItemLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
		szWhere.Format(_T(" and product_name = '%s' "), m_szItemKey);
	}
	if (!m_szStockKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND msl_storage_id = %s"), m_szStockKey);
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT distinct product_id id, product_code as code, product_name as name ") \
				 _T(" FROM m_storageline ") \
				 _T(" LEFT JOIN m_productitem_view ON (msl_product_item_id = product_item_id) ") \
				 _T(" WHERE product_org_id = '%s' %s ") \
				 _T(" ORDER BY product_code "), pMF->GetModuleID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMInsuranceDrugUsage::OnItemAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMInsuranceDrugUsage::OnPrintPreviewSelect(){
	return;
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1, j = 0;
	CString szSQL, tmpStr, szReportName, szDate, szPos, szStorages;
	long double nTotal[3];
	for (int i = 0; i < 3; i++)
	{
		nTotal[i] = 0;
	}
	szReportName = _T("Reports\\HMS\\PM_BAOCAODUTRU.RPT");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
		for (int i = 0; i < m_wndStock.GetItemCount(); i++)
		{
			if (m_wndStock.GetCheck(i))
			{
				m_wndStock.SetCurSel(i);
				if (!szStorages.IsEmpty())
					szStorages += _T(", ");
				szStorages += m_wndStock.GetCurrent(1);
			}
		}
		if (!szStorages.IsEmpty())
			rptHeader->SetValue(_T("Storage"), szStorages);
		else
			rptHeader->SetValue(_T("Storage"), _T("To\xE0n \x62\x1ED9"));
	}
	while (!rs.IsEOF())
	{
		//Group Seperation
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("generic")));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("unit")));
			rptDetail->SetValue(_T("4.1"), rs.GetValue(_T("product_bpartnerid")));
			rs.GetValue(_T("expqty"), nTmp);
			nTotal[0]+= nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));
			rs.GetValue(_T("instockqty"), nTmp);
			nTotal[1]+= nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			rs.GetValue(_T("plan_qty"), nTmp);
			nTotal[2]+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	tmpStr = pMF->GetSysDate();
	/*szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);*/
	EndWaitCursor();
	rpt.PrintPreview();

}
 
void CPMInsuranceDrugUsage::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 30);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 6);
	xls.SetCellMergedColumns(0, 3, 6);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x42\xC1O \x43\xC1O S\x1EEC \x44\x1EE4NG THU\x1ED0\x43 \x42\x1EA2O HI\x1EC2M NGO\x1EA0I TR\xDA");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;

	xls.SetCellText(0, nRow, _T("STT"), 4098, true);
	xls.SetCellText(1, nRow, _T("S\x1ED1 HS"), 4098, true);
	xls.SetCellText(2, nRow, _T("H\x1ECD t\xEAn"), 4098, true);
	xls.SetCellText(3, nRow, _T("M\xE3 th\x1EBB"), 4098, true);
	xls.SetCellText(4, nRow, _T("Ng\xE0y kh\xE1m"), 4098, true);
	xls.SetCellText(5, nRow, _T("K\x1EBFt lu\x1EADn"), 4098, true);
	xls.SetCellText(6, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"), 4098, true);
	xls.SetCellText(7, nRow, _T("Ph\xF2ng kh\xE1m"), 4098, true);
	xls.SetCellText(8, nRow, _T("\x42\xE1\x63 s\x1EF9"), 4098, true);
	

	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("so_hs")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("ho_ten")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("ma_the")), FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("ngay_kham")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		xls.SetCellText(5, nRow, rs.GetValue(_T("ket_luan")), FMT_TEXT);
		xls.SetCellText(6, nRow, rs.GetValue(_T("so_luong")), FMT_TEXT);
		xls.SetCellText(7, nRow, rs.GetValue(_T("phong_kham")), FMT_TEXT);
		xls.SetCellText(8, nRow, rs.GetValue(_T("bac_sy")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao su dung thuoc bao hiem ngoai tru.xls"));
}
 
CString CPMInsuranceDrugUsage::GetQueryString(){
	CString szSQL, szWhere, szStocks;
	szWhere.Format(_T(" AND hpo_approvedate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStocks.IsEmpty())
				szStocks += _T(", ");
			szStocks += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStocks.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s)"), szStocks);

	if (!m_szItemKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpol_product_id = %s"), m_szItemKey);
	szSQL.Format(_T(" SELECT hpo_docno so_hs, get_patientname(hpo_docno) ho_ten, hd_cardno ma_the, ") \
				 _T("		(select max(he_examdate) from hms_exam where he_docno = hpo_docno and he_deptid = hpo_deptid and he_roomid = hpo_roomid and hpo_doctor = he_doctor) ngay_kham, ") \
				 _T("		(select he_diagnostic from hms_exam where he_docno = hpo_docno and he_deptid = hpo_deptid and he_roomid = hpo_roomid and hpo_doctor = he_doctor) ket_luan, ") \
				 _T("		sum(hpol_qtyorder) so_luong, hpo_roomid phong_kham, get_username(hpo_doctor) bac_sy ") \
				 _T(" FROM hms_pharmaorder ") \
				 _T(" LEFT JOIN hms_pharmaorderline ON (hpo_docno = hpol_docno AND hpo_orderid = hpol_orderid) ") \
				 _T(" LEFT JOIN hms_doc ON (hd_docno = hpo_docno)") \
				 _T(" WHERE hpo_orderstatus = 'A' AND hpo_payment = 'P' %s") \
				 _T(" GROUP BY hpo_docno, hd_cardno, hpo_deptid, hpo_roomid, hpo_doctor") \
				 _T(" ORDER BY hpo_docno"), szWhere);
	return szSQL;
}