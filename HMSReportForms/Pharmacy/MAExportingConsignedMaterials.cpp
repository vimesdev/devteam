#include "MAExportingConsignedMaterials.h"
#include "stdafx.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMAExportingConsignedMaterials *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMAExportingConsignedMaterials *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAExportingConsignedMaterials* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CMAExportingConsignedMaterials *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAExportingConsignedMaterials* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CMAExportingConsignedMaterials *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CMAExportingConsignedMaterials*)pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDepartmentSelendokFnc(CWnd* pWnd) {
	((CMAExportingConsignedMaterials*)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd* pWnd) {
	return ((CMAExportingConsignedMaterials*)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CMAExportingConsignedMaterials *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMAExportingConsignedMaterials *pVw = (CMAExportingConsignedMaterials *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMAExportingConsignedMaterials *pVw = (CMAExportingConsignedMaterials *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddMAExportingConsignedMaterialsFnc(CWnd *pWnd){
	 return ((CMAExportingConsignedMaterials*)pWnd)->OnAddMAExportingConsignedMaterials();
} 
static int _OnEditMAExportingConsignedMaterialsFnc(CWnd *pWnd){
	 return ((CMAExportingConsignedMaterials*)pWnd)->OnEditMAExportingConsignedMaterials();
} 
static int _OnDeleteMAExportingConsignedMaterialsFnc(CWnd *pWnd){
	 return ((CMAExportingConsignedMaterials*)pWnd)->OnDeleteMAExportingConsignedMaterials();
} 
static int _OnSaveMAExportingConsignedMaterialsFnc(CWnd *pWnd){
	 return ((CMAExportingConsignedMaterials*)pWnd)->OnSaveMAExportingConsignedMaterials();
} 
static int _OnCancelMAExportingConsignedMaterialsFnc(CWnd *pWnd){
	 return ((CMAExportingConsignedMaterials*)pWnd)->OnCancelMAExportingConsignedMaterials();
} 
CMAExportingConsignedMaterials::CMAExportingConsignedMaterials(CWnd* pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMAExportingConsignedMaterials::~CMAExportingConsignedMaterials(){
}
void CMAExportingConsignedMaterials::OnCreateComponents(){
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 6, 4, 575, 151);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this, 95, 30, 290, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this, 380, 30, 570, 55);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.Create(this, 94, 60, 569, 85);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 90, 115);
	m_wndDepartment.Create(this, 95, 90, 570, 115);
	m_wndStatusLabel.Create(this, _T("Status"), 10, 120, 90, 145);
	m_wndItemGroup.Create(this, 95, 120, 570, 145);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 380, 155, 490, 180);
	m_wndExport.Create(this, _T("&Export"), 495, 155, 575, 180);
	

}
void CMAExportingConsignedMaterials::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndItemGroup.SetCheckValue(true);
	m_wndItemGroup.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	//m_wndDepartment.InsertColumn(1, _T("alias"), CFMT_TEXT, 0);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);

	m_wndItemGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndItemGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);



}
void CMAExportingConsignedMaterials::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
	//m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
	//m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
	m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
	m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
	//m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

	
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CMAExportingConsignedMaterials::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
}
void CMAExportingConsignedMaterials::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Storage")] =  m_szStorageKey;
	m_jData[_T("ItemGroup")] =  m_szItemGroupKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	m_jData[_T("ItemGroup")].GetValue(m_szItemGroupKey);
	}

}
void CMAExportingConsignedMaterials::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMAExportingConsignedMaterials::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CMAExportingConsignedMaterials::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szItemGroupKey.Empty();
	m_szDepartmentKey.Empty();

}
int CMAExportingConsignedMaterials::SetMode(int nMode){
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
/*void CMAExportingConsignedMaterials::OnFromDateChange(){
	
} */
/*void CMAExportingConsignedMaterials::OnFromDateSetfocus(){
	
} */
/*void CMAExportingConsignedMaterials::OnFromDateKillfocus(){
	
} */
int CMAExportingConsignedMaterials::OnFromDateCheckValue(){
	return 0;
} 
/*void CMAExportingConsignedMaterials::OnToDateChange(){
	
} */
/*void CMAExportingConsignedMaterials::OnToDateSetfocus(){
	
} */
/*void CMAExportingConsignedMaterials::OnToDateKillfocus(){
	
} */
int CMAExportingConsignedMaterials::OnToDateCheckValue(){
	return 0;
} 
void CMAExportingConsignedMaterials::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMAExportingConsignedMaterials::OnStorageSelendok(){
	 
}
/*void CMAExportingConsignedMaterials::OnStorageSetfocus(){
	
}*/
/*void CMAExportingConsignedMaterials::OnStorageKillfocus(){
	
}*/
long CMAExportingConsignedMaterials::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CMAExportingConsignedMaterials::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMAExportingConsignedMaterials::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMAExportingConsignedMaterials::OnItemGroupSelendok(){
	 
}
/*void CMAExportingConsignedMaterials::OnItemGroupSetfocus(){
	
}*/
/*void CMAExportingConsignedMaterials::OnItemGroupKillfocus(){
	
}*/
long CMAExportingConsignedMaterials::OnItemGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndItemGroup.IsSearchKey() && !m_szItemGroupKey.IsEmpty()) {
		szWhere.Format(_T(" AND ss_code='%s' "), m_szItemGroupKey);
	};
	m_wndItemGroup.DeleteAllItems();
	int nCount = 0;
	szWhere.Format(_T(" and ss_code in('S','A') "));
	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_id='pms_order_status'  %s ORDER BY ss_index "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndItemGroup.AddItems(
			rs.GetValue(_T("ss_code")),
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMAExportingConsignedMaterials::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMAExportingConsignedMaterials::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();

}
void CMAExportingConsignedMaterials::OnDepartmentSelendok() {
	
}
/*void CMAExportingConsignedMaterials::OnDepartmentSetfocus(){

}*/
/*void CMAExportingConsignedMaterials::OnDepartmentKillfocus(){

}*/
long CMAExportingConsignedMaterials::OnDepartmentLoadData() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	//return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()) {
		szWhere.Format(_T(" AND ss_code='%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems();
	int nCount = 0;
	//szWhere.Format(_T(" and ss_code in('S','A') "));
	szSQL.Format(_T("SELECT * FROM sys_dept WHERE sd_isactive = 'Y'  %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")),
			rs.GetValue(_T("sd_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
void CMAExportingConsignedMaterials::OnPrintPreviewSelect(){
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CReportSection* rptDetail, * rptHeader, * rptGroup = NULL, * rptOldGroup = NULL;
	CString szSQL, tmpStr, tmpInfo;
	CRecord rs(&pMF->m_db);
	CStringArray arrDat;
	CString szCurDte, szOldCat, szNewCat;
	double nGrpAmt = 0;
	long double nTotalAmt = 0;
	int nIdx = 1, j = 0;

	if (!rpt.Init(_T("Reports/HMS/MA_XUATKHOVTKG.RPT"), true)){
		return;
	}
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	arrDat.Add(_T("Nh\x1EADp \x63\xF3 h\xF3\x61 \x111\x1A1n"));
	arrDat.Add(_T("Tr\x1EA3 l\x1EA1i h\xE0ng"));
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr = _T("To\xE0n \x62\x1ED9");
	if (!m_szStorageKey.IsEmpty())
		rptHeader->SetValue(_T("StockName"), m_wndStorage.GetCurrent(1));
	else
		rptHeader->SetValue(_T("StockName"), tmpStr);

	if (!m_szDepartmentKey.IsEmpty())
		rptHeader->SetValue(_T("DeptName"), m_wndDepartment.GetCurrent(1));
	else
		rptHeader->SetValue(_T("DeptName"), tmpStr);
	/*if (!m_szItemGroupKey.IsEmpty())
		rptHeader->SetValue(_T("Type"), m_wndItemGroup.GetCurrent(1));
	else
		rptHeader->SetValue(_T("Type"), tmpStr);*/
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
		CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	//Detail
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), szNewCat);
		if (szNewCat != szOldCat && !szNewCat.IsEmpty())
		{
			if (nGrpAmt > 0)
			{
				tmpStr.Format(_T("%f"), nGrpAmt);
				rptOldGroup->SetValue(_T("s7"), tmpStr);
				nTotalAmt += nGrpAmt;
				nGrpAmt = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			tmpInfo.Format(_T("%s-SHS: %s-Đối tượng:%s"), rs.GetValue(_T("pname")), rs.GetValue(_T("pol_docno")), rs.GetValue(_T("objectname")));
			rptGroup->SetValue(_T("GroupName"), tmpInfo);
			rptOldGroup = rptGroup;
			szOldCat = szNewCat;

		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		//tmpStr.Format(_T("%s %s"), rs.GetValue(_T("pname")), rs.GetValue(_T("pname2")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("name")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("unit")));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("qtyorder")));
		rptDetail->SetValue(_T("7"), rs.GetValue(_T("qty")));
		rptDetail->SetValue(_T("8"), rs.GetValue(_T("price")));
		//rptDetail->SetValue(_T("9"), rs.GetValue(_T("thanhtien")));
		rs.GetValue(_T("amount"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		nGrpAmt += str2double(tmpStr);
		rs.MoveNext();
	}
	//Footer
	if (nGrpAmt > 0)
	{
		tmpStr.Format(_T("%f"), nGrpAmt);
		rptOldGroup->SetValue(_T("s7"), tmpStr);
		nTotalAmt += nGrpAmt;
	}
	if (nTotalAmt > 0)
	{
		tmpStr.Format(_T("%.2f"), nTotalAmt);
		rpt.GetReportFooter()->SetValue(_T("total"), tmpStr);
		
		CString szMoney;
		MoneyToString(tmpStr, szMoney);
		rpt.GetReportFooter()->SetValue(_T("moneytext"), szMoney);

		rpt.GetReportFooter()->SetValue(_T("totalmoney"), tmpStr);
	}
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
	
} 
void CMAExportingConsignedMaterials::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept, szNewCat, szOldCat, tmpInfo, szMoneyText;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, nCurRowGrp = 0;
	double nGrpAmt = 0;
	long double nTotalAmt = 0;
	
	CExcel xls;

	if (!xls.Load(_T("Exports\\Template\\MA_XUATKHOVTKG.xls"))) AfxMessageBox(_T("Chưa có File MA_XUATKHOVTKG.xls trong thư mục Export\Template!"));

	xls.SetWorksheet(0);

	//xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	//xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	tmpStr.Format(_T("Kho xuất: %s"), m_wndStorage.GetCurrent(1));
	xls.SetCellText(0, 6, tmpStr, FMT_TEXT, true);

	tmpStr.Format(_T("Đơn vị nhận: %s"), m_wndDepartment.GetCurrent(1));
	xls.SetCellText(0, 7, tmpStr, FMT_TEXT, true);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 11;
	nCol = 0;

	xls.SetCellText(nCol + 6, nRow, _T("0"), FMT_NUMBER1, true);

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), szNewCat);
		if (szNewCat != szOldCat && !szNewCat.IsEmpty())
		{
			
			if (nGrpAmt > 0)
			{
				tmpStr.Format(_T("%f"), nGrpAmt);
				xls.SetCellText(nCol + 6, nCurRowGrp, tmpStr, FMT_NUMBER1, true);
				nTotalAmt += nGrpAmt;
				nGrpAmt = 0;
			}
			nCurRowGrp = nRow;
			tmpInfo.Format(_T("%s-SHS: %s-Đối tượng:%s"), rs.GetValue(_T("pname")), rs.GetValue(_T("pol_docno")), rs.GetValue(_T("objectname")));
			xls.SetCellMergedColumns(nCol, nRow, 4);
			xls.SetCellText(nCol, nRow, tmpInfo, FMT_TEXT, true);
			
			szOldCat = szNewCat;
			nRow++;
		}

		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("qtyorder"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("qty"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("amount"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_NUMBER1);
		nGrpAmt += str2double(tmpStr);
		
		rs.MoveNext();
		nRow++;
	}
	if (nGrpAmt > 0) {
		tmpStr.Format(_T("%f"), nGrpAmt);
		xls.SetCellText(nCol + 6, nCurRowGrp, tmpStr, FMT_NUMBER1, true);
		nTotalAmt += nGrpAmt;
	}
	if (nTotalAmt > 0)
	{
		xls.SetCellMergedColumns(nCol + 1, nRow, 2);
		tmpStr.Format(_T("Tổng cộng: "));
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);

		tmpStr.Format(_T("%.2f"), nTotalAmt);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1, true);

		xls.SetCellMergedColumns(nCol + 1, nRow+1, 5);
		tmpStr.Format(_T("%.2f"), nTotalAmt);
		MoneyToString(tmpStr, szMoneyText);
		xls.SetCellText(1, nRow + 1, L"Số tiền bằng chữ:" + szMoneyText, FMT_TEXT, true);
	}

	EndWaitCursor();

	xls.Save(_T("Exports\\Template\\MA_XUATKHOVTKG_DATA.xls"));
} 
int CMAExportingConsignedMaterials::OnAddMAExportingConsignedMaterials(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMAExportingConsignedMaterials::OnEditMAExportingConsignedMaterials(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMAExportingConsignedMaterials::OnDeleteMAExportingConsignedMaterials(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelMAExportingConsignedMaterials();
 	}
	return 0;
}
int CMAExportingConsignedMaterials::OnSaveMAExportingConsignedMaterials(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnMAExportingConsignedMaterialsListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMAExportingConsignedMaterials::OnCancelMAExportingConsignedMaterials(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CMAExportingConsignedMaterials::OnMAExportingConsignedMaterialsListLoadData(){
	return 0;
}

CString CMAExportingConsignedMaterials::GetQueryString() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szWhere.Empty();
	if (!m_szDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mt_department_to_id = '%s'"), m_szDepartmentKey);

	if (!m_szStorageKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mt_storage_id = %ld"), ToInt(m_szStorageKey));
	szSQL.Format(_T(" SELECT  ") \
		_T(" pol_docno, ") \
		_T(" pol_orderid,  ") \
		_T(" pname, objectname,") \
		_T(" deptid,  ") \
		_T(" product_id                   AS id, ") \
		_T(" product_name                 AS name,  ") \
		_T(" product_uomname              AS unit, ") \
		_T(" product_expdate              AS expdate,  ") \
		_T(" product_lotno                AS lotno, ") \
		_T(" pol_unitprice                AS price,  ") \
		_T(" SUM(pol_qty)                 AS qty, ") \
		_T(" SUM(pol_qtyorder)            AS qtyorder,  ") \
		_T(" SUM(pol_unitprice * pol_qty) AS amount  ") \
		_T(" FROM  ") \
		_T(" (") \
		_T(" 	SELECT  ") \
		_T(" 	pol_product_item_id, ") \
		_T(" 	pol_qtyorder,  ") \
		_T(" 	pol_qty, ") \
		_T(" 	pol_docno, ") \
		_T(" 	pol_orderid, ") \
		_T(" 	TRIM(hp_surname|| ' '|| hp_midname|| ' '|| hp_firstname)             AS pname,   ") \
		_T(" 	hms_getobjectname(hd_object) AS objectname, ") \
		_T(" 	mt_department_to_id          AS deptid,  ") \
		_T(" 	CASE  ") \
		_T(" 	WHEN pol_unitprice > 0 THEN  ") \
		_T(" 	pol_unitprice  ") \
		_T(" 	ELSE  ") \
		_T(" 	(") \
		_T(" 		SELECT DISTINCT  ") \
		_T(" 		hpol_unitprice  ") \
		_T(" 		FROM  ") \
		_T(" 		hms_pharmaorderline_view2  ") \
		_T(" 		WHERE  ") \
		_T(" 		hpol_docno = pol_docno  ") \
		_T(" 		AND hpol_orderid = pol_orderid  ") \
		_T(" 		AND hpol_product_id = pol_product_id  ") \
		_T(" 	AND(hpol_unitprice = pol_unitprice  ") \
		_T(" 			OR coalesce(pol_unitprice, 0) = 0)  ") \
		_T(" 	) ") \
		_T(" 	END                          AS pol_unitprice  ") \
		_T(" 	FROM  ") \
		_T(" 	purchase_orderline2  ") \
		_T(" LEFT JOIN m_transaction ON(mt_transaction_id = pol_transaction_id)  ") \
		_T(" LEFT JOIN hms_doc ON(hd_docno = pol_docno)  ") \
		_T(" LEFT JOIN hms_patient ON(hp_patientno = hd_patientno)  ") \
		_T(" WHERE  ") \
		_T(" mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss')  ") \
		_T(" %s  ") \
		_T(" ) ") \
		_T(" LEFT JOIN m_productitem_view ON(pol_product_item_id = product_item_id)  ") \
		_T(" GROUP BY  ") \
		_T(" product_uomindex, ") \
		_T(" 	product_id,  ") \
		_T(" 	pol_docno, ") \
		_T(" 	pol_orderid,  ") \
		_T(" pname, ") \
		_T(" 	objectname,  ") \
		_T(" deptid, ") \
		_T(" product_name,  ") \
		_T(" product_uomname, ") \
		_T(" product_expdate,  ") \
		_T(" product_lotno, ") \
		_T(" 	pol_unitprice  ") \
		_T(" 	ORDER BY  ") \
		_T(" 	pol_docno,  ") \
		_T(" product_name "), m_szFromDate, m_szToDate, szWhere);

	
	return szSQL;
}