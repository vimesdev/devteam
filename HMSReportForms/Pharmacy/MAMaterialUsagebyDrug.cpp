#include "stdafx.h"
#include "MAMaterialUsagebyDrug.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "StringToken.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMAMaterialUsagebyDrug *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMAMaterialUsagebyDrug *)pWnd)->OnToDateCheckValue();
} 
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialUsagebyDrug*)pWnd)->OnStorageLoadData();
} 
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialUsagebyDrug*)pWnd)->OnObjectLoadData();
}
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAMaterialUsagebyDrug* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialUsagebyDrug *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug *)pWnd)->OnInvoiceTypeAddNew();
}*/
static int _OnDepartmentListCheckAllFnc(CWnd *pWnd){
	 ((CMAMaterialUsagebyDrug*)pWnd)->OnDepartmentListCheckAll();
	 return 0;
} 
static int _OnDepartmentListUncheckAllFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug*)pWnd)->OnDepartmentListUncheckAll();
	return 0;
} 
static long _OnDepartmentListLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialUsagebyDrug*)pWnd)->OnDepartmentListLoadData();
} 
static void _OnDepartmentListDblClickFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug*)pWnd)->OnDepartmentListDblClick();
} 
static void _OnDepartmentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMAMaterialUsagebyDrug*)pWnd)->OnDepartmentListSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentListDeleteItemFnc(CWnd *pWnd){
	 return ((CMAMaterialUsagebyDrug*)pWnd)->OnDepartmentListDeleteItem();
} 
static long _OnTypeListLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialUsagebyDrug*)pWnd)->OnTypeListLoadData();
}
static void _OnTypeListDblClickFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug*)pWnd)->OnTypeListDblClick();
}
static int _OnTypeListCheckAllFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug*)pWnd)->OnTypeListCheckAll();
	return 0;
}
static int _OnTypeListUncheckAllFnc(CWnd *pWnd){
	((CMAMaterialUsagebyDrug*)pWnd)->OnTypeListUncheckAll();
	return 0;
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMAMaterialUsagebyDrug *pVw = (CMAMaterialUsagebyDrug *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMAMaterialUsagebyDrug *pVw = (CMAMaterialUsagebyDrug *)pWnd;
	pVw->OnExportSelect();
} 
CMAMaterialUsagebyDrug::CMAMaterialUsagebyDrug(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMAMaterialUsagebyDrug::~CMAMaterialUsagebyDrug(){
}
void CMAMaterialUsagebyDrug::OnCreateComponents(){
	m_wndMaterialFinalAccount.Create(this, _T("Material Usage by Drug"), 5, 5, 575, 545);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.SetCheckBox(true);
	m_wndStorage.Create(this,95, 60, 290, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 295, 60, 375, 85);
	m_wndObject.SetCheckBox(true);
	m_wndObject.Create(this,381, 60, 570, 85); 
	m_wndInvoiceTypeLabel.Create(this, _T("Invoice Type"), 10, 90, 90, 115);
	m_wndInvoiceType.SetCheckBox(true);
	m_wndInvoiceType.Create(this,95, 90, 570, 115); 
	m_wndDepartmentList.Create(this,10, 120, 570, 330); 
	m_wndDepartmentList.SetCheckBox(true);
	m_wndTypeList.Create(this,10, 335, 570, 540);
	m_wndTypeList.SetCheckBox(true);
	m_wndPTTYC.Create(this, _T("Tủ trực PTTYC"), 10, 550, 140, 575);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 390, 550, 490, 575);
	m_wndExport.Create(this, _T("&Export"), 495, 550, 575, 575);
}
void CMAMaterialUsagebyDrug::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndTypeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndTypeList.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndObject.Format(2, 1, 12);

	m_wndInvoiceType.InsertColumn(0, _T("ID"), CFMT_TEXT | FMT_RIGHT, 85);
	m_wndInvoiceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);

	m_wndDepartmentList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndDepartmentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);

}

void CMAMaterialUsagebyDrug::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	m_wndInvoiceType.SetEvent(WE_SELENDOK, _OnInvoiceTypeSelendokFnc);
	//m_wndInvoiceType.SetEvent(WE_SETFOCUS, _OnInvoiceTypeSetfocusFnc);
	//m_wndInvoiceType.SetEvent(WE_KILLFOCUS, _OnInvoiceTypeKillfocusFnc);
	m_wndInvoiceType.SetEvent(WE_SELCHANGE, _OnInvoiceTypeSelectChangeFnc);
	m_wndInvoiceType.SetEvent(WE_LOADDATA, _OnInvoiceTypeLoadDataFnc);
	//m_wndInvoiceType.SetEvent(WE_ADDNEW, _OnInvoiceTypeAddNewFnc);
	m_wndDepartmentList.SetEvent(WE_SELCHANGE, _OnDepartmentListSelectChangeFnc);
	m_wndDepartmentList.SetEvent(WE_LOADDATA, _OnDepartmentListLoadDataFnc);
	m_wndDepartmentList.SetEvent(WE_DBLCLICK, _OnDepartmentListDblClickFnc);
	m_wndDepartmentList.AddEvent(1, _T("Check All"), _OnDepartmentListCheckAllFnc);
	m_wndDepartmentList.AddEvent(2, _T("UnCheck All"), _OnDepartmentListUncheckAllFnc);
	m_wndTypeList.SetEvent(WE_LOADDATA, _OnTypeListLoadDataFnc);
	m_wndTypeList.SetEvent(WE_DBLCLICK, _OnTypeListDblClickFnc);
	m_wndTypeList.AddEvent(1, _T("Check All"), _OnTypeListCheckAllFnc);
	m_wndTypeList.AddEvent(2, _T("Uncheck All"), _OnTypeListUncheckAllFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnObjectLoadData();
	OnStorageLoadData();
	OnTypeListLoadData();
	OnDepartmentListLoadData();
}
void CMAMaterialUsagebyDrug::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);
	DDX_Check(pDX, m_wndPTTYC.GetDlgCtrlID(), m_bPTTYC);
}
void CMAMaterialUsagebyDrug::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bPTTYC = FALSE;
}

int CMAMaterialUsagebyDrug::SetMode(int nMode){
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

/*void CMAMaterialUsagebyDrug::OnFromDateChange(){
	
} */
/*void CMAMaterialUsagebyDrug::OnFromDateSetfocus(){
	
} */
/*void CMAMaterialUsagebyDrug::OnFromDateKillfocus(){
	
} */
int CMAMaterialUsagebyDrug::OnFromDateCheckValue(){
	return 0;
}
 
/*void CMAMaterialUsagebyDrug::OnToDateChange(){
	
} */
/*void CMAMaterialUsagebyDrug::OnToDateSetfocus(){
	
} */
/*void CMAMaterialUsagebyDrug::OnToDateKillfocus(){
	
} */
int CMAMaterialUsagebyDrug::OnToDateCheckValue(){
	return 0;
}

void CMAMaterialUsagebyDrug::OnStorageSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10* ) AfxGetMainWnd();
	
} 
int CMAMaterialUsagebyDrug::OnStorageListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10* ) AfxGetMainWnd();
	 return 0;
} 
long CMAMaterialUsagebyDrug::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10* ) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND msl_org_id = 'MA'"));
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szFilter);
}
long CMAMaterialUsagebyDrug::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ho_id id, ho_desc descr FROM hms_object ORDER BY cast(ho_id as integer)"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndObject.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndObject.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("descr")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
void CMAMaterialUsagebyDrug::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CMAMaterialUsagebyDrug::OnInvoiceTypeSelendok(){
	 
}
/*void CMAMaterialUsagebyDrug::OnInvoiceTypeSetfocus(){
	
}*/
/*void CMAMaterialUsagebyDrug::OnInvoiceTypeKillfocus(){
	
}*/
long CMAMaterialUsagebyDrug::OnInvoiceTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInvoiceType.IsSearchKey() && !m_szInvoiceTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and addt_doctype_id ='%s' "), m_szInvoiceTypeKey);
};
	m_wndInvoiceType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT addt_doctype_id AS id, addt_name AS name FROm ad_doctype WHERE addt_doctype_id IN('PPO', 'DDO', 'DPO', 'SOO', 'CSO') %s ORDER BY addt_doctype_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMAMaterialUsagebyDrug::OnInvoiceTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMAMaterialUsagebyDrug::OnDepartmentListDblClick(){
	
} 
void CMAMaterialUsagebyDrug::OnDepartmentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10* ) AfxGetMainWnd();
	
} 
int CMAMaterialUsagebyDrug::OnDepartmentListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10* ) AfxGetMainWnd();
	 return 0;
} 
long CMAMaterialUsagebyDrug::OnDepartmentListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartmentList.BeginLoad(); 
	m_wndDepartmentList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where 1 = 1 order by  sd_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartmentList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDepartmentList.EndLoad(); 
	return nCount;
}

long CMAMaterialUsagebyDrug::OnTypeListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTypeList.BeginLoad(); 
	m_wndTypeList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpt_product_type_id as id, mpt_name as name ") \
		_T("FROM m_product_type ") \
		_T("WHERE mpt_isactive='Y' AND mpt_org_id in('GL', '%s') ORDER BY mpt_product_type_id "), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndTypeList.EndLoad(); 
	return nCount;
	
}

void CMAMaterialUsagebyDrug::OnTypeListDblClick(){
}
void CMAMaterialUsagebyDrug::OnPrintPreviewSelect(){
	UpdateData(true);
	if(m_bPTTYC)
	{
		OnPrint2();
		return;
	}
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	BeginWaitCursor();
	CReport rpt;
	if (!rpt.Init(_T("Reports\\HMS\\MA_BAOCAOSUDUNGVATTUYTE.RPT")))
		return;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate;
	CReportSection *rptDetail = NULL, *rptHeader = NULL;
	int nIdx = 1;
	double nCost = 0;
	double nTtlCost = 0;
	szSQL = GetQueryString();
	//szSQL = BuildQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rptHeader->SetValue(_T("Stockname"), m_szStorageStr);
	rptHeader->SetValue(_T("Object"), m_szObjectStr);
	rptHeader->SetValue(_T("DrugType"), m_szTypeStr);
	rptHeader->SetValue(_T("Department"), m_szDeptStr);
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("product_name")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("uom")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("unitprice")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("qtyorder")));
		rs.GetValue(_T("amount"), nCost);
		nTtlCost += nCost;
		rptDetail->SetValue(_T("6"), double2str(nCost));
		rs.MoveNext();
	}
	tmpStr.Format(_T("%f"), nTtlCost);
	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
	rptDetail->SetValue(_T("s6"), tmpStr);
	szSysDate = pMF->GetSysDateTime();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Mid(11, 5),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}
void CMAMaterialUsagebyDrug::OnPrint2(){
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	if (!rpt.Init(_T("Reports\\HMS\\MA_BAOCAOSUDUNGVATTUYTE.RPT")))
		return;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate, szOldType, szNewType;
	double nAmount = 0;
	long double nGrpTotal = 0, nTotalAmount = 0;
	CReportSection *rptDetail = NULL, *rptHeader = NULL;
	int nIdx = 1;
	szSQL = GetQueryString2();
	//szSQL = BuildQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rptHeader->SetValue(_T("Stockname"), m_szStorageStr);
	rptHeader->SetValue(_T("Object"), m_szObjectStr);
	rptHeader->SetValue(_T("DrugType"), m_szTypeStr);
	rptHeader->SetValue(_T("Department"), m_szDeptStr);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("storage_to_id"), szNewType);
		if (szOldType != szNewType)
		{
			if (nGrpTotal > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->GetItem(_T("TotalGroup"))->SetItalic(true);
				tmpStr.Format(_T("T\x1ED5ng kho: "));
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);
				rptDetail->SetValue(_T("s6"), double2str(nGrpTotal));
				nTotalAmount += nGrpTotal;
				nGrpTotal = 0;
			}
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptDetail->SetValue(_T("groupName"), szNewType);
			szOldType = szNewType;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("product_name")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("uom")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("unitprice")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("qtyorder")));
		rs.GetValue(_T("amount"), nAmount);
		nGrpTotal += nAmount;
		rptDetail->SetValue(_T("6"), double2str(nAmount));
		rs.MoveNext();
	}
	if (nGrpTotal > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng kho: "));
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		rptDetail->SetValue(_T("s6"), double2str(nGrpTotal));
		nTotalAmount += nGrpTotal;
	}
	if (nTotalAmount > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng ti\x1EC1n: "));
		rptDetail->SetValue(_T("TotalGroup"), tmpStr);
		rptDetail->SetValue(_T("s6"), double2str(nTotalAmount));
	}
	
	szSysDate = pMF->GetSysDateTime();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Mid(11, 5),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
}
void CMAMaterialUsagebyDrug::OnExportSelect(){
	UpdateData(true);
	if(m_bPTTYC)
	{
		OnExport2();
		return;
	}
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr, szNewType, szOldType;
	CRecord rs(&pMF->m_db);
	int nIdx = 1, j = 0;
	double nTotal = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header Section
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 50);
	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 15);
	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 3, 4);
	xls.SetCellText(nCol, nRow + 3, _T("T\xCCNH H\xCCNH S\x1EEC \x44\x1EE4NG V\x1EACT T\x1AF Y T\x1EBE"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 4);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("T\xEAn v\x1EADt t\x1B0"));
	arrCol.Add(_T("\x110VT"));
	arrCol.Add(_T("\x110\x1A1n gi\xE1"));
	arrCol.Add(_T("S\x1ED1 l\x1B0\x1EE3ng"));
	arrCol.Add(_T("Th\xE0nh ti\x1EC1n"));
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(nCol + i, nRow + 5, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("product_name")), FMT_TEXT);
		xls.SetCellText(nCol+2, nRow, rs.GetValue(_T("uom")), FMT_TEXT);
		xls.SetCellText(nCol+3, nRow, rs.GetValue(_T("unitprice")), FMT_NUMBER1);
		xls.SetCellText(nCol+4, nRow, rs.GetValue(_T("qtyorder")), FMT_NUMBER1);
		xls.SetCellText(nCol+5, nRow, rs.GetValue(_T("amount")), FMT_NUMBER1);
		xls.SetCellText(nCol+6, nRow, rs.GetValue(_T("product_id")), FMT_TEXT);
		xls.SetCellText(nCol+7, nRow, rs.GetValue(_T("product_code")), FMT_TEXT);
		nTotal += str2double(rs.GetValue(_T("amount")));
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol + 4, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("%.2f"), nTotal);
	xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1, true);
	EndWaitCursor();
	xls.Save(_T("Exports\\TINH HINH SU DUNG VAT TU Y TE.xls"));
}

void CMAMaterialUsagebyDrug::OnExport2(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr, szNewType, szOldType;
	double nAmount = 0;
	long double nGrpTotal = 0, nTotal = 0;
	CRecord rs(&pMF->m_db);
	int nIdx = 1, j = 0;
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header Section
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 50);
	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 15);
	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 3, 4);
	xls.SetCellText(nCol, nRow + 3, _T("T\xCCNH H\xCCNH S\x1EEC \x44\x1EE4NG V\x1EACT T\x1AF Y T\x1EBE"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 4);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("T\xEAn v\x1EADt t\x1B0"));
	arrCol.Add(_T("\x110VT"));
	arrCol.Add(_T("\x110\x1A1n gi\xE1"));
	arrCol.Add(_T("S\x1ED1 l\x1B0\x1EE3ng"));
	arrCol.Add(_T("Th\xE0nh ti\x1EC1n"));
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(nCol + i, nRow + 5, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("storage_to_id"), szNewType);
		if (szOldType != szNewType)
		{
			if (nGrpTotal > 0)
			{
				xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m"), FMT_TEXT, true);
				tmpStr.Format(_T("%.2f"), nGrpTotal);
				xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
				nTotal += nGrpTotal;
				nRow++;
				nGrpTotal = 0;
			}
			xls.SetCellText(0, nRow, szNewType, FMT_TEXT, true);
			szOldType = szNewType;
			nRow++;
		}

		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("product_name")), FMT_TEXT);
		xls.SetCellText(nCol+2, nRow, rs.GetValue(_T("uom")), FMT_TEXT);
		xls.SetCellText(nCol+3, nRow, rs.GetValue(_T("unitprice")), FMT_NUMBER1);
		xls.SetCellText(nCol+4, nRow, rs.GetValue(_T("qtyorder")), FMT_NUMBER1);
		rs.GetValue(_T("amount"), nAmount);
		nGrpTotal += nAmount;
		xls.SetCellText(nCol + 5, nRow, double2str(nAmount), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (nGrpTotal > 0)
	{
		xls.SetCellText(4, nRow, _T("T\x1ED5ng nh\xF3m"), FMT_TEXT, true);
		tmpStr.Format(_T("%.2f"), nGrpTotal);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
		nTotal += nGrpTotal;
		nRow++;
	}

	if (nTotal > 0)
	{
		xls.SetCellText(4, nRow, _T("T\x1ED5ng cộng"), FMT_TEXT, true);
		tmpStr.Format(_T("%.2f"), nTotal);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
		nRow++;
	}
	
	EndWaitCursor();
	xls.Save(_T("Exports\\TINH HINH SU DUNG VAT TU Y TE.xls"));
}

CString CMAMaterialUsagebyDrug::BuildQueryString(){
	CString szSQL;
	ExtractData();
	szSQL = GetQueryString_New(m_szStorageIDs, m_szObjectIDs, m_szTypeIDs, m_szDeptIDs, m_szInvoiceTypeIDs);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}

void CMAMaterialUsagebyDrug::ExtractData(){
	ResetVar();
	ExtractDataFromControl(&m_wndDepartmentList, m_szDeptIDs, m_szDeptStr, _T("Y"));
	ExtractDataFromControl(&m_wndStorage, m_szStorageIDs, m_szStorageStr, _T("N"));
	ExtractDataFromControl(&m_wndTypeList, m_szTypeIDs, m_szTypeStr, _T("Y"));
	ExtractDataFromControl(&m_wndObject, m_szObjectIDs, m_szObjectStr, _T("N"));
	ExtractDataFromControl(&m_wndInvoiceType, m_szInvoiceTypeIDs, m_szInvoiceTypeStr, _T("Y"));
}

void CMAMaterialUsagebyDrug::ResetVar(){
	m_szDeptStr.Empty();
	m_szDeptIDs.Empty();
	m_szTypeIDs.Empty();
	m_szTypeStr.Empty();
	m_szStorageIDs.Empty();
	m_szStorageStr.Empty();
	m_szObjectIDs.Empty();
	m_szObjectStr.Empty();
}

void CMAMaterialUsagebyDrug::ExtractDataFromControl(CWnd *pWnd, CString& szIDs, CString& szDescr, CString szIsVarchar){
	m_szIsVarchar = szIsVarchar;
	GetIDandDescriptionFromControl(pWnd, szIDs, szDescr);
	RemakeIDescription(pWnd, szIDs, szDescr);
}

void CMAMaterialUsagebyDrug::GetIDandDescriptionFromControl(CWnd *pWnd, CString& szIDs, CString& szDescr){
	CString szClassName = GetClassName(pWnd);
	CGuiListCtrl *pList;
	CGuiComboBox *pCombo;
	if (szClassName == _T("CGuiListCtrl"))
	{
		pList = (CGuiListCtrl*) pWnd;
		GetIDandDescriptionFromList(pList, szIDs, szDescr);
	}
	if (szClassName == _T("CGuiComboBox"))
	{
		pCombo = (CGuiComboBox*) pWnd;
		GetIDandDescriptionFromCombo(pCombo, szIDs, szDescr);
	}
}

void CMAMaterialUsagebyDrug::GetIDandDescriptionFromList(CGuiListCtrl* pList, CString& szIDs, CString& szDescr){
	CString szFormat;
	if (m_szIsVarchar == _T("Y"))
		szFormat = _T("'%s'");
	else
		szFormat = _T("%s");
	for (int i = 0; i < pList->GetItemCount(); i++)
	{
		if (pList->GetCheck(i))
		{
			if (!szIDs.IsEmpty())
				szIDs += _T(",");
			szIDs.AppendFormat(szFormat, pList->GetItemText(i, 0));
			if (!szDescr.IsEmpty())
				szDescr += _T(",");
			szDescr.AppendFormat(szFormat, pList->GetItemText(i, 1));
		}
	}
}

void CMAMaterialUsagebyDrug::GetIDandDescriptionFromCombo(CGuiComboBox* pCombo, CString& szIDs, CString& szDescr){
	CString szFormat;
	if (m_szIsVarchar == _T("Y"))
		szFormat = _T("'%s'");
	else
		szFormat = _T("%s");
	for (int i = 0; i < pCombo->GetItemCount(); i++)
	{
		if (pCombo->GetCheck(i))
		{
			pCombo->SetCurSel(i);
			if (!szIDs.IsEmpty())
				szIDs += _T(",");
			szIDs.AppendFormat(szFormat, pCombo->GetCurrent(0));
			if (!szDescr.IsEmpty())
				szDescr += _T(",");
			szDescr.AppendFormat(szFormat, pCombo->GetCurrent(1));
		}
	}
}

void CMAMaterialUsagebyDrug::RemakeIDescription(CWnd *pWnd, CString& szIDs, CString& szDescr){
	CString szClassName = GetClassName(pWnd);
	CStringToken token(szIDs);
	int nCount = 0;
	CGuiListCtrl *pList;
	CGuiComboBox *pCombo;
	if (szClassName == _T("CGuiListCtrl"))
	{
		pList = (CGuiListCtrl*) pWnd;
		nCount = pList->GetItemCount();
	}
	else
	{
		pCombo = (CGuiComboBox*) pWnd;
		nCount = pCombo->GetItemCount();
	}
	if (szDescr.IsEmpty() || nCount == token.GetSize())
	{
		szDescr = _T("T\x1EA5t \x63\x1EA3");
		szIDs.Empty();
	}
	else
	{
		if (token.GetSize() > 3)
			szDescr = _T("Nhi\x1EC1u m\x1EE5\x63");
	}		
}

CString CMAMaterialUsagebyDrug::GetQueryString_New(CString szStorageIDs, CString szObjectIDs, CString szTypeIDs, CString szDeptIDs, CString szInvoiceType){
	CString szSQL, szWhere;
	szWhere.Format(_T(" AND approved_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if (!szStorageIDs.IsEmpty())
		szWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStorageIDs);
	if (!szDeptIDs.IsEmpty())
		szWhere.AppendFormat(_T("AND dept_id IN (%s)"), szDeptIDs);
	if (!szTypeIDs.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_producttype IN (%s)"), szTypeIDs);
	if (!szObjectIDs.IsEmpty())
		szWhere.AppendFormat(_T(" AND object_id IN (%s)"), szObjectIDs);
	if (!szInvoiceType.IsEmpty())
		szWhere.AppendFormat(_T(" AND doctype IN (%s)"), szInvoiceType);
	szSQL.Format(_T("SELECT * FROM v_ma_materialusagebydrug WHERE 1=1 %s"), szWhere);
	return szSQL;
}

void CMAMaterialUsagebyDrug::RemakeDescription(CWnd *pWnd, CString szIDs, CString& szDescr){
	CString szClassName = GetClassName(pWnd);
	CStringToken token(szIDs);
	int nCount = 0;
	CGuiListCtrl *pList;
	CGuiComboBox *pCombo;
	if (szClassName == _T("CGuiListCtrl"))
	{
		pList = (CGuiListCtrl*) pWnd;
		nCount = pList->GetItemCount();
	}
	else
	{
		pCombo = (CGuiComboBox*) pWnd;
		nCount = pCombo->GetItemCount();
	}
	if (szDescr.IsEmpty() || nCount == token.GetSize())
		szDescr = _T("T\x1EA5t \x63\x1EA3");
	else
	{
		if (token.GetSize() > 3)
			szDescr = _T("Nhi\x1EC1u m\x1EE5\x63");
	}		
}

void CMAMaterialUsagebyDrug::ExtractDataFromList(CGuiListCtrl* pList, CString& szIDs, CString& szDescr){
	GetIDandDescriptionFromList(pList, szIDs, szDescr);
	MakeDescription(pList, szDescr);
}

void CMAMaterialUsagebyDrug::MakeDescription(CGuiListCtrl *pList, CString& szDescr){
}

void CMAMaterialUsagebyDrug::MakeDescription(CGuiComboBox *pCombo, CString& szDescr){
	if (szDescr.IsEmpty())
		szDescr = _T("\x1EA5t \x63\x1EA3");
	else
	{
		CStringToken token(szDescr);
		if (token.GetSize() > 3)
			szDescr = _T("Nhi\x1EC1u m\x1EE5\x63");
	}
}

void CMAMaterialUsagebyDrug::ExtractDataFromCombo(CGuiComboBox* pCombo, CString& szIDs, CString& szDescr){
	for (int i = 0; i < pCombo->GetItemCount(); i++)
	{
		if (pCombo->GetCheck(i))
		{
			pCombo->SetCurSel(i);
			if (!szIDs.IsEmpty())
				szIDs += _T(",");
			szIDs.AppendFormat(_T("%s"), pCombo->GetCurrent(0));
			if (!szDescr.IsEmpty())
				szDescr += _T(",");
			szDescr.AppendFormat(_T("%s"), pCombo->GetCurrent(1));
		}
	}
	MakeDescription(pCombo, szDescr);
}

CString CMAMaterialUsagebyDrug::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, tmpStr, szQtyExpr, szObjectID, szObjects, szWhereProduct, szWhereObject, szWhereDept, szWhereInvoiceceTypes, szWhere, szWhere1, szWhere2, szWhere3, szWhere4, szWhere5;
	CString szStorageStr, szDepts, szTypes, szInvoiceTypes;
	int nObjectID = 0;
	m_szObjectStr.Empty();
	m_szTypeStr.Empty();
	m_szDeptStr.Empty();
	m_szStorageStr.Empty();

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorageStr.IsEmpty())
			{
				szStorageStr += _T(", ");
				m_szStorageStr += _T(", ");
			}
			szStorageStr.AppendFormat(_T("'%s'"), m_wndStorage.GetCurrent(0));
			m_szStorageStr.AppendFormat(_T("%s"), m_wndStorage.GetCurrent(1));
		}
	}
	if (m_szStorageStr.IsEmpty())
		m_szStorageStr = _T("To\xE0n \x62\x1ED9");
	CStringToken StorageToken(m_szStorageStr);
	if (StorageToken.GetSize() > 3)
		m_szStorageStr = _T("Nhi\x1EC1u kho");

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			 m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
			{
				szObjects += _T(", ");
				m_szObjectStr += _T(", ");
			}
			szObjects.AppendFormat(_T("'%s'"), m_wndObject.GetCurrent(0));
			m_szObjectStr.AppendFormat(_T("%s"), m_wndObject.GetCurrent(1));
		}
	}
	if (m_szObjectStr.IsEmpty())
		m_szObjectStr = _T("To\xE0n \x62\x1ED9");
	CStringToken ObjectToken(m_szObjectStr);
	if (ObjectToken.GetSize() > 3)
		m_szObjectStr = _T("Nhi\x1EC1u \x111\x1ED1i t\x1B0\x1EE3ng");

	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
			{
				szDepts += _T(",");
				m_szDeptStr += _T(", ");
			}
			szDepts.AppendFormat(_T("'%s'"), m_wndDepartmentList.GetItemText(i, 0));
			m_szDeptStr.AppendFormat(_T("%s"), m_wndDepartmentList.GetItemText(i, 1));
		}
	}
	if (m_szDeptStr.IsEmpty())
		m_szDeptStr = _T("To\xE0n \x62\x1ED9");
	CStringToken DeptToken(m_szDeptStr);
	if (DeptToken.GetSize() > 3)
		m_szDeptStr = _T("Nhi\x1EC1u kho\x61");

	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (m_wndTypeList.GetCheck(i))
		{
			if (!szTypes.IsEmpty())
			{
				szTypes += _T(",");
				m_szTypeStr += _T(", ");
			}
			szTypes.AppendFormat(_T("'%s'"), m_wndTypeList.GetItemText(i, 0));
			m_szTypeStr.AppendFormat(_T("%s"), m_wndTypeList.GetItemText(i, 1));
		}
	}
	if (m_szTypeStr.IsEmpty())
		m_szTypeStr = _T("To\xE0n \x62\x1ED9");
	CStringToken TypeToken(m_szTypeStr);
	if (TypeToken.GetSize() > 3)
		m_szTypeStr = _T("Nhi\x1EC1u lo\x1EA1i");

	for (int i = 0; i < m_wndInvoiceType.GetItemCount(); i++)
	{
		if (m_wndInvoiceType.GetCheck(i))
		{
			m_wndInvoiceType.SetCurSel(i);
			if (!szInvoiceTypes.IsEmpty())
			{
				szInvoiceTypes += _T(", ");
			}
			szInvoiceTypes.AppendFormat(_T("'%s'"), m_wndInvoiceType.GetCurrent(0));
		}
	}

	szWhere.AppendFormat(_T("AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere1.AppendFormat(_T("AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere2.AppendFormat(_T("AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere3.AppendFormat(_T("AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere4.AppendFormat(_T("AND so_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere5.AppendFormat(_T("AND hpo_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (!szStorageStr.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorageStr);
			szWhere1.AppendFormat(_T(" AND mt_storage_id IN (%s)"), szStorageStr);
			szWhere2.AppendFormat(_T(" AND mt_storage_id IN (%s)"), szStorageStr);
			szWhere3.AppendFormat(_T(" AND mt_storage_id IN (%s)"), szStorageStr);
			szWhere4.AppendFormat(_T(" AND sol_storage_id IN (%s)"), szStorageStr);
			szWhere5.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorageStr);
		}

	if (!szDepts.IsEmpty())
		{
// 			szWhere.AppendFormat(_T(" AND hpo_deptid IN (%s)"), szDepts);
// 			szWhere1.AppendFormat(_T(" AND hpo_deptid IN (%s)"), szDepts);
// 			szWhere2.AppendFormat(_T(" AND mt_department_to_id IN (%s)"), szDepts);
// 			szWhere3.AppendFormat(_T(" AND mt_department_to_id IN (%s)"), szDepts);
// 			szWhere4.AppendFormat(_T(" AND so_partneraddress IN (%s)"), szDepts);
			szWhereDept.AppendFormat(_T("AND hpo_deptid IN (%s)"), szDepts);
		}

	if (!szTypes.IsEmpty())
		szWhereProduct.AppendFormat(_T(" AND product_producttype IN (%s)"), szTypes);
//	szQtyExpr = _T("0");

	if (!szObjects.IsEmpty())
		szWhereObject.AppendFormat(_T(" AND object_id IN (%s)"), szObjects);

	if (!szInvoiceTypes.IsEmpty())
		szWhereInvoiceceTypes.AppendFormat(_T(" AND doctype IN (%s)"), szInvoiceTypes);

// 		CStringToken token(szObjects);
// 		for (int i = 0; i < token.GetSize(); i++)
// 		{
// 			token.GetAt(i, szObjectID);
// 			szObjectID.Remove('\'');
// 			nObjectID = str2int(szObjectID);
// 			tmpStr = arrObj.GetAt(nObjectID);
// 			if (tmpStr != _T("mtl_qtyother"))
// 				szQtyExpr.AppendFormat(_T("+ %s"), arrObj.GetAt(nObjectID));
// 			else
// 			{
// 				if (szQtyExpr.Find(_T("mtl_qtyother")) == -1)
// 					szQtyExpr.AppendFormat(_T("+ %s"), arrObj.GetAt(nObjectID));
// 			}
// 		}

// 	szSQL.Format(_T(" SELECT    product_name, ") \
// 				_T("			get_uomname(product_uomid) uom,") \
// 				_T("           unitprice, ") \
// 				_T("           SUM(qtyissue)             qtyissue, ") \
// 				_T("           SUM(unitprice * qtyissue) amount ") \
// 				_T(" FROM      (SELECT    hpol_product_id productid, ") \
// 				_T("                      hpol_unitprice unitprice, ") \
// 				_T("                      hpol_qtyissue qtyissue, ") \
// 				_T("                      hpo_storage_id storageid, ") \
// 				_T("					  hpo_orderstatus status,") \
// 				_T("					  hpo_approvedate approveddate,") \
// 				_T("                      hpo_deptid deptid") \
// 				_T("            FROM      hms_ipharmaorder ") \
// 				_T("            LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
// 				_T("            WHERE     hpo_ordertype IN ( 'D', 'M', 'B' ) ") \
// 				_T("			%s") \
// 				_T("            UNION ALL ") \
// 				_T("            SELECT    hmt_product_id, ") \
// 				_T("                      hpol_unitprice, ") \
// 				_T("                      hpol_qtyissue, ") \
// 				_T("                      mt_storage_id, ") \
// 				_T("					  mt_status status,") \
// 				_T("					  mt_approveddate approveddate,") \
// 				_T("                      mt_department_to_id ") \
// 				_T("            FROM      m_transaction ") \
// 				_T(" LEFT JOIN hms_medical_transaction_view ON ( mt_transaction_id = hmt_reftransaction_id ) ") \
// 				_T(" LEFT JOIN hms_ipharmaorder ON ( hpo_orderid = hmt_orderid AND hpo_docno    = hmt_docno ) ") \
// 				_T(" LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid   = hpol_orderid AND hmt_product_id = hpol_product_id ) ")\
// 				_T("            WHERE     mt_doctype = 'CSO' %s") \
// 				_T("            UNION ALL ") \
// 				_T("            SELECT    hpol_product_id, ") \
// 				_T("                      hpol_unitprice, ") \
// 				_T("                      hpol_qtyissue, ") \
// 				_T("                      mt_storage_id, ") \
// 				_T("					  mt_status status,") \
// 				_T("					  mt_approveddate approveddate,") \
// 				_T("                      hpo_deptid ") \
// 				_T("            FROM      m_transaction ") \
// 				_T("            LEFT JOIN purchase_orderline2 ON (pol_transaction_id = mt_transaction_id) ") \
// 				_T("            LEFT JOIN hms_ipharmaorder ON ( hpo_orderid = pol_orderid ) ") \
// 				_T("            LEFT JOIN hms_ipharmaorderline ON ( pol_orderid = hpol_orderid ") \
// 				_T("                                               AND pol_product_id = hpol_product_id ) ") \
// 				_T("            WHERE     mt_doctype = 'CON' ") \
// 				_T("			%s)") \
// 				_T(" LEFT JOIN m_product_view ON ( productid = product_id ) ") \
// 				_T(" WHERE     product_org_id = 'MA' ") \
// 				_T(" %s") \
// 				_T(" GROUP     BY product_name, ") \
// 				_T("              unitprice, product_uomid ") \
// 				_T(" ORDER     BY product_name "), szObjectWhere, szObjectWhere, szObjectWhere, szWhere);

	szSQL.Format(_T(" SELECT product_name,") \
		_T(" get_uomname(product_uomid) AS uom,") \
		_T(" unitprice,") \
		_T(" SUM(qtyorder) AS qtyorder,") \
		_T(" SUM(unitprice * qtyorder) AS amount, product_id, product_code") \
		_T(" FROM") \
		_T(" (SELECT hpol_product_item_id productid,") \
		_T(" hpol_unitprice unitprice,") \
		_T(" hpol_qtyorder qtyorder,") \
		_T(" hpo_object_id object_id,") \
		_T(" CASE WHEN hpo_deptid = 'B5' AND hpo_storage_id IN(12, 13) THEN (SELECT ho_deptid FROM hms_operation WHERE ho_idx = hpo_reference_id) ELSE hpo_deptid END AS hpo_deptid,") \
		_T(" hpo_doctype AS doctype") \
		_T(" FROM hms_ipharmaorder") \
		_T(" LEFT JOIN hms_ipharmaorderline") \
		_T(" ON ( hpo_orderid = hpol_orderid )") \
		_T(" WHERE hpo_ordertype IN ( 'D', 'M', 'B' )") \
		_T(" AND hpo_orderstatus = 'A' %s") \
		_T(" UNION ALL") \
		_T(" SELECT hpol_product_item_id productid,") \
		_T(" hpol_unitprice unitprice,") \
		_T(" hpol_qtyorder qtyorder,") \
		_T(" hpo_object_id object_id,") \
		_T(" CASE WHEN hpo_deptid = 'B5' AND hpo_storage_id IN(12, 13) THEN (SELECT ho_deptid FROM hms_operation WHERE ho_idx = hpo_reference_id) ELSE hpo_deptid END AS hpo_deptid,") \
		_T(" hpo_doctype AS doctype") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON ( hpo_orderid = hpol_orderid )") \
		_T(" WHERE hpo_ordertype IN ( 'D', 'M', 'B' )") \
		_T(" AND hpo_orderstatus = 'A' %s") \
		_T(" UNION ALL") \
		_T(" SELECT pol_product_item_id,") \
		_T(" pol_unitprice,") \
		_T(" pol_qty,") \
		_T(" hpo_object_id,") \
		_T(" CASE WHEN hpo_deptid = 'B5' AND hpo_storage_id IN(12, 13) THEN (SELECT ho_deptid FROM hms_operation WHERE ho_idx = hpo_reference_id) ELSE hpo_deptid END AS hpo_deptid,") \
		_T(" hpo_doctype") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN purchase_orderline2") \
		_T(" ON (pol_transaction_id = mt_transaction_id)") \
		_T(" LEFT JOIN hms_ipharmaorder") \
		_T(" ON ( hpo_orderid = pol_orderid )") \
		_T(" WHERE mt_doctype = 'CON'") \
		_T(" AND mt_status = 'A' %s") \
		_T(" UNION ALL") \
		_T(" SELECT mtl_product_item_id,") \
		_T(" mtl_saleprice,") \
		_T(" mtl_qtyorder,") \
		_T(" 0,") \
		_T(" mt_department_to_id,") \
		_T(" mt_doctype") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
		_T(" WHERE (mt_doctype  = 'DDO'") \
		_T(" OR mt_doctype      = 'DPO')") \
		_T(" AND mt_status      = 'A' %s") \
		_T(" UNION ALL") \
		_T(" SELECT mtl_product_item_id,") \
		_T(" mtl_saleprice,") \
		_T(" mtl_qtydelivery,") \
		_T(" 0,") \
		_T(" mt_department_to_id,") \
		_T(" mt_doctype") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON ( mt_transaction_id        = mtl_transaction_id )") \
		_T(" WHERE mt_doctype              = 'CSO'") \
		_T(" AND mt_status                 = 'A'") \
		_T(" AND mtl_transactionline_id    > 0") \
		_T(" AND NVL(mtl_client_id,'XXX') <> 'TT' %s") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" product_item_id,") \
		_T(" unitprice,") \
		_T(" SUM(qtyorder - qtyreturn) qty,") \
		_T(" 7 AS object_id,") \
		_T(" CAST(' ' AS NVARCHAR2(1)),") \
		_T(" doctype") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT so_docno docno,") \
		_T(" sol_product_item_id product_item_id,") \
		_T(" sol_unitprice unitprice,") \
		_T(" sol_qtyorder qtyorder,") \
		_T(" 0 qtyreturn,") \
		_T(" so_doctype AS doctype") \
		_T(" FROM sale_order") \
		_T(" LEFT JOIN sale_orderline") \
		_T(" ON (so_sale_order_id = sol_sale_order_id)") \
		_T(" WHERE so_status = 'A' %s") \
		_T(" UNION ALL") \
		_T(" SELECT hpo_docno,") \
		_T(" hpol_product_item_id,") \
		_T(" hpol_unitprice,") \
		_T(" 0,") \
		_T(" hpol_qtyreturn,") \
		_T(" hpo_doctype") \
		_T(" FROM hms_pharmareturnorder") \
		_T(" LEFT JOIN hms_pharmareturnorder_line") \
		_T(" ON (hpo_orderid = hpol_orderid)") \
		_T(" WHERE hpo_status = 'A' %s") \
		_T(" ) tbl") \
		_T(" GROUP BY product_item_id, unitprice, doctype") \
		_T(" ) tb2") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON ( productid = product_item_id )") \
		_T(" WHERE product_org_id = 'MA' AND qtyorder > 0") \
		_T(" %s %s %s %s") \
		_T(" GROUP BY product_name,") \
		_T(" product_uomid,") \
		_T(" unitprice,product_id, product_code") \
		_T(" ORDER BY product_name"), szWhere, szWhere, szWhere1, szWhere2, szWhere2, szWhere4, szWhere5, szWhereProduct, szWhereObject, szWhereDept, szWhereInvoiceceTypes);
		return szSQL;
szSQL.Format(_T("WITH dailyorder") \
_T("     AS (SELECT    hpol_product_item_id productid,") \
_T("                   hpol_unitprice       unitprice,") \
_T("                   hpol_qtyorder        qtyorder,") \
_T("                   hpo_object_id        object_id,") \
_T("                   CASE") \
_T("                     WHEN hpo_deptid = 'B5'") \
_T("                          AND hpo_storage_id IN( 12, 13 ) THEN (SELECT ho_deptid") \
_T("                                                                FROM   hms_operation") \
_T("                                                                WHERE  ho_idx = hpo_reference_id)") \
_T("                     ELSE hpo_deptid") \
_T("                   END                  AS hpo_deptid,") \
_T("                   hpo_doctype          AS doctype") \
_T("         FROM      hms_ipharmaorder") \
_T("         LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid = hpol_orderid )") \
_T("         WHERE     hpo_ordertype IN ( 'D', 'M', 'B' )") \
_T("               AND hpo_orderstatus = 'A'),") \
_T("     consignment") \
_T("     AS (SELECT    hpol_product_item_id,") \
_T("                   hpol_unitprice,") \
_T("                   hpol_qtyissue,") \
_T("                   hpo_object_id,") \
_T("                   hpo_deptid,") \
_T("                   hpo_doctype") \
_T("         FROM      m_transaction") \
_T("         LEFT JOIN purchase_orderline2 ON ( pol_transaction_id = mt_transaction_id )") \
_T("         LEFT JOIN hms_ipharmaorder ON ( hpo_orderid = pol_orderid )") \
_T("         LEFT JOIN hms_ipharmaorderline ON ( pol_orderid = hpol_orderid") \
_T("                                             AND pol_product_id = hpol_product_id )") \
_T("         WHERE     mt_doctype = 'CON'") \
_T("               AND mt_status = 'A'),") \
_T("     PL") \
_T("     AS (SELECT    mtl_product_item_id,") \
_T("                   mtl_saleprice,") \
_T("                   mtl_qtyorder,") \
_T("                   0,") \
_T("                   mt_department_to_id,") \
_T("                   mt_doctype") \
_T("         FROM      m_transaction") \
_T("         LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id )") \
_T("         WHERE     ( mt_doctype = 'DDO'") \
_T("                      OR mt_doctype = 'DPO' )") \
_T("               AND mt_status = 'A'),") \
_T("     cabinet") \
_T("     AS (SELECT    hpol_product_item_id,") \
_T("                   hpol_unitprice,") \
_T("                   hpol_qtyissue,") \
_T("                   hpo_object_id,") \
_T("                   mt_department_to_id,") \
_T("                   mt_doctype") \
_T("         FROM      hms_pharmaorder_view") \
_T("         LEFT JOIN hms_pharmaorderline_view2 ON( hpo_docno = hpol_docno") \
_T("                                                 AND hpo_orderid = hpol_orderid )") \
_T("         LEFT JOIN hms_medical_transactionw ON( hpo_docno = hmt_docno") \
_T("                                                AND hpo_orderid = hmt_orderid") \
_T("                                                AND hpol_product_id = hmt_product_id )") \
_T("         LEFT JOIN m_transaction ON ( hmt_reftransaction_id = mt_transaction_id )") \
_T("         WHERE     mt_status = 'A'),") \
_T("     x") \
_T("     AS (SELECT    mtl_product_item_id,") \
_T("                   mtl_saleprice,") \
_T("                   mtl_qtyorder,") \
_T("                   0,") \
_T("                   mt_department_to_id,") \
_T("                   mt_doctype") \
_T("         FROM      m_transaction") \
_T("         LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id )") \
_T("         WHERE     mt_doctype = 'CSO'") \
_T("               AND mt_status = 'A'") \
_T("               AND mtl_transactionline_id > 0") \
_T("               AND Nvl(mtl_client_id, 'XXX') <> 'REP'") \
_T("               AND Substr(mt_orderno, 1, 2) <> 'TT'),") \
_T("     x1") \
_T("     AS (SELECT    so_docno            docno,") \
_T("                   sol_product_item_id product_item_id,") \
_T("                   sol_unitprice       unitprice,") \
_T("                   sol_qtyorder        qtyorder,") \
_T("                   0                   qtyreturn,") \
_T("                   so_doctype          AS doctype") \
_T("         FROM      sale_order") \
_T("         LEFT JOIN sale_orderline ON ( so_sale_order_id = sol_sale_order_id )") \
_T("         WHERE     so_status = 'A'") \
_T("         UNION ALL") \
_T("         SELECT    hpo_docno,") \
_T("                   hpol_product_item_id,") \
_T("                   hpol_unitprice,") \
_T("                   0,") \
_T("                   hpol_qtyreturn,") \
_T("                   hpo_doctype") \
_T("         FROM      hms_pharmareturnorder") \
_T("         LEFT JOIN hms_pharmareturnorder_line ON ( hpo_orderid = hpol_orderid )") \
_T("         WHERE     hpo_status = 'A'),") \
_T("     x2") \
_T("     AS (SELECT product_item_id,") \
_T("                unitprice,") \
_T("                SUM(qtyorder - qtyreturn) qty,") \
_T("                7                         AS object_id,") \
_T("                Cast(' ' AS NVARCHAR2(1)),") \
_T("                doctype") \
_T("         FROM   x1") \
_T("         GROUP  BY product_item_id,") \
_T("                   unitprice,") \
_T("                   doctype),") \
_T("     materialusage") \
_T("     AS (SELECT *") \
_T("         FROM   dailyorder") \
_T("         UNION ALL") \
_T("         SELECT *") \
_T("         FROM   consignment") \
_T("         UNION ALL") \
_T("         SELECT *") \
_T("         FROM   PL") \
_T("         UNION ALL") \
_T("         SELECT *") \
_T("         FROM   cabinet") \
_T("         UNION ALL") \
_T("         SELECT *") \
_T("         FROM   x") \
_T("         UNION ALL") \
_T("         SELECT *") \
_T("         FROM   x2)") \
_T("SELECT    product_name,") \
_T("          Get_uomname(product_uomid) AS uom,") \
_T("          unitprice,") \
_T("          SUM(qtyorder)              AS qtyorder,") \
_T("          SUM(unitprice * qtyorder)  AS amount") \
_T("FROM      materialusage") \
_T("LEFT JOIN m_product_item ON ( productid = mpi_product_item_id )") \
_T("WHERE     product_org_id = 'MA'") \
_T("      AND qtyorder > 0") \
_T("GROUP     BY product_name,") \
_T("             product_uomid,") \
_T("             unitprice") \
_T("ORDER     BY product_name"));

}

CString CMAMaterialUsagebyDrug::GetQueryString2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, tmpStr, szQtyExpr, szObjectID, szObjects, szWhereProduct, szWhereObject, szWhereDept, szWhereInvoiceceTypes, szWhere, szWhere1, szWhere2, szWhere3, szWhere4, szWhere5;
	CString szStorageStr, szDepts, szTypes, szInvoiceTypes;
	int nObjectID = 0;
	m_szObjectStr.Empty();
	m_szTypeStr.Empty();
	m_szDeptStr.Empty();
	m_szStorageStr.Empty();

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorageStr.IsEmpty())
			{
				szStorageStr += _T(", ");
				m_szStorageStr += _T(", ");
			}
			szStorageStr.AppendFormat(_T("'%s'"), m_wndStorage.GetCurrent(0));
			m_szStorageStr.AppendFormat(_T("%s"), m_wndStorage.GetCurrent(1));
		}
	}
	if (m_szStorageStr.IsEmpty())
		m_szStorageStr = _T("To\xE0n \x62\x1ED9");
	CStringToken StorageToken(m_szStorageStr);
	if (StorageToken.GetSize() > 3)
		m_szStorageStr = _T("Nhi\x1EC1u kho");

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
			{
				szObjects += _T(", ");
				m_szObjectStr += _T(", ");
			}
			szObjects.AppendFormat(_T("'%s'"), m_wndObject.GetCurrent(0));
			m_szObjectStr.AppendFormat(_T("%s"), m_wndObject.GetCurrent(1));
		}
	}
	if (m_szObjectStr.IsEmpty())
		m_szObjectStr = _T("To\xE0n \x62\x1ED9");
	CStringToken ObjectToken(m_szObjectStr);
	if (ObjectToken.GetSize() > 3)
		m_szObjectStr = _T("Nhi\x1EC1u \x111\x1ED1i t\x1B0\x1EE3ng");

	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
			{
				szDepts += _T(",");
				m_szDeptStr += _T(", ");
			}
			szDepts.AppendFormat(_T("'%s'"), m_wndDepartmentList.GetItemText(i, 0));
			m_szDeptStr.AppendFormat(_T("%s"), m_wndDepartmentList.GetItemText(i, 1));
		}
	}
	if (m_szDeptStr.IsEmpty())
		m_szDeptStr = _T("To\xE0n \x62\x1ED9");
	CStringToken DeptToken(m_szDeptStr);
	if (DeptToken.GetSize() > 3)
		m_szDeptStr = _T("Nhi\x1EC1u kho\x61");

	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (m_wndTypeList.GetCheck(i))
		{
			if (!szTypes.IsEmpty())
			{
				szTypes += _T(",");
				m_szTypeStr += _T(", ");
			}
			szTypes.AppendFormat(_T("'%s'"), m_wndTypeList.GetItemText(i, 0));
			m_szTypeStr.AppendFormat(_T("%s"), m_wndTypeList.GetItemText(i, 1));
		}
	}
	if (m_szTypeStr.IsEmpty())
		m_szTypeStr = _T("To\xE0n \x62\x1ED9");
	CStringToken TypeToken(m_szTypeStr);
	if (TypeToken.GetSize() > 3)
		m_szTypeStr = _T("Nhi\x1EC1u lo\x1EA1i");

	for (int i = 0; i < m_wndInvoiceType.GetItemCount(); i++)
	{
		if (m_wndInvoiceType.GetCheck(i))
		{
			m_wndInvoiceType.SetCurSel(i);
			if (!szInvoiceTypes.IsEmpty())
			{
				szInvoiceTypes += _T(", ");
			}
			szInvoiceTypes.AppendFormat(_T("'%s'"), m_wndInvoiceType.GetCurrent(0));
		}
	}

	szWhere.AppendFormat(_T("AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	szWhere1.AppendFormat(_T("AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	if (!szStorageStr.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorageStr);
		szWhere1.AppendFormat(_T(" AND mt_storage_id IN (%s)"), szStorageStr);
	}

	if (!szDepts.IsEmpty())
	{
		szWhereDept.AppendFormat(_T("AND hpo_deptid IN (%s)"), szDepts);
	}

	if (!szTypes.IsEmpty())
		szWhereProduct.AppendFormat(_T(" AND product_producttype IN (%s)"), szTypes);
	//	szQtyExpr = _T("0");

	if (!szObjects.IsEmpty())
		szWhereObject.AppendFormat(_T(" AND object_id IN (%s)"), szObjects);

	if (!szInvoiceTypes.IsEmpty())
		szWhereInvoiceceTypes.AppendFormat(_T(" AND doctype IN (%s)"), szInvoiceTypes);

	szSQL.Format(_T(" SELECT product_name,") \
		_T("   get_uomname(product_uomid) AS uom,") \
		_T("   unitprice,") \
		_T("   SUM(qtyorder)             AS qtyorder,") \
		_T("   SUM(unitprice * qtyorder) AS amount,") \
		_T("   (SELECT msl_name FROM m_storagelist WHERE msl_storage_id = storage_to_id) AS storage_to_id") \
		_T(" FROM") \
		_T("   (SELECT mtl_product_item_id AS productid,") \
		_T("     mtl_saleprice AS unitprice,") \
		_T("     mtl_qtydelivery AS qtyorder,") \
		_T("     0 AS object_id,") \
		_T("     mt_department_to_id AS hpo_deptid,") \
		_T("     mt_doctype AS doctype,") \
		_T("     mt_storage_to_id AS storage_to_id") \
		_T("   FROM m_transaction") \
		_T("   LEFT JOIN m_transactionline") \
		_T("   ON ( mt_transaction_id        = mtl_transaction_id )") \
		_T("   WHERE mt_doctype              = 'CSO'") \
		_T("   AND mt_status                 = 'A'") \
		_T("   AND mtl_transactionline_id    > 0") \
		_T("   AND NVL(mtl_client_id,'XXX') <> 'TT'") \
		_T("   %s") \
		_T(" UNION ALL") \
		_T(" SELECT hpol_product_item_id productid,") \
		_T(" hpol_unitprice unitprice,") \
		_T(" hpol_qtyorder qtyorder,") \
		_T(" hpo_object_id object_id,") \
		_T(" CASE WHEN hpo_deptid = 'B5' AND hpo_storage_id IN(12, 13) THEN (SELECT ho_deptid FROM hms_operation WHERE ho_idx = hpo_reference_id) ELSE hpo_deptid END AS hpo_deptid,") \
		_T(" hpo_doctype AS doctype,") \
		_T(" 0") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON ( hpo_orderid = hpol_orderid )") \
		_T(" WHERE hpo_ordertype IN ( 'D', 'M', 'B' )") \
		_T(" AND hpo_orderstatus = 'A' %s") \
		_T("   ) tb2") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON ( productid       = product_item_id )") \
		_T(" WHERE product_org_id = 'MA'") \
		_T(" AND qtyorder         > 0") \
		_T(" %s %s %s %s") \
		_T(" GROUP BY product_name,") \
		_T("   product_uomid,") \
		_T("   unitprice,") \
		_T("   storage_to_id") \
		_T(" ORDER BY storage_to_id, product_name"), szWhere1, szWhere, szWhereProduct, szWhereObject, szWhereDept, szWhereInvoiceceTypes);
	_fmsg(_T("%s"), szSQL);
		return szSQL;
}

void CMAMaterialUsagebyDrug::OnDepartmentListCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (!m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCheck(i, TRUE);
		}
	}
	return;
}

void CMAMaterialUsagebyDrug::OnDepartmentListUncheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCheck(i, FALSE);
		}
	}
	return;
}

void CMAMaterialUsagebyDrug::OnTypeListCheckAll()
{
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (!m_wndTypeList.GetCheck(i))
		{
			m_wndTypeList.SetCheck(i, TRUE);
		}
	}
	return;
}

void CMAMaterialUsagebyDrug::OnTypeListUncheckAll()
{
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (m_wndTypeList.GetCheck(i))
		{
			m_wndTypeList.SetCheck(i, FALSE);
		}
	}
	return;

}