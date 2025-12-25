#include "stdafx.h"
#include "PMSDepartmentUsageinDetail_108Old.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include ".\pmsdepartmentusageindetail.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSDepartmentUsageinDetail_108Old* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnStorageAddNew();
}*/
static int _OnStockSetCheckFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old*) pWnd)->OnStockSetCheck();
	return 0;
}
static int _OnDeptSetCheckFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old*) pWnd)->OnDeptSetCheck();
	return 0;
}
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	return ((CPMSDepartmentUsageinDetail_108Old*)pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
}
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnDepartmentLoadData();
}
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnClerkLoadData();
}
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnTypeLoadData();
}
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSDepartmentUsageinDetail_108Old* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnExportTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSDepartmentUsageinDetail_108Old* )pWnd)->OnExportTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExportTypeSelendokFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnExportTypeSelendok();
}
/*static void _OnExportTypeSetfocusFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnExportTypeKillfocus();
}*/
/*static void _OnExportTypeKillfocusFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnExportTypeKillfocus();
}*/
static long _OnExportTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnExportTypeLoadData();
}
/*static void _OnExportTypeAddNewFnc(CWnd *pWnd){
	((CPMSDepartmentUsageinDetail_108Old *)pWnd)->OnExportTypeAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMSDepartmentUsageinDetail_108Old *pVw = (CPMSDepartmentUsageinDetail_108Old *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMSDepartmentUsageinDetail_108Old *pVw = (CPMSDepartmentUsageinDetail_108Old *)pWnd;
	pVw->OnExportSelect();
} 
CPMSDepartmentUsageinDetail_108Old::CPMSDepartmentUsageinDetail_108Old(CWnd* pParent){

	m_nDlgWidth = 545;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CPMSDepartmentUsageinDetail_108Old::~CPMSDepartmentUsageinDetail_108Old(){
}
void CPMSDepartmentUsageinDetail_108Old::OnCreateComponents(){
	m_wndDepartmentUsageinDetail.Create(this, _T("Department Usage in Detail"), 5, 5, 575, 545);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 60, 90, 85);
	m_wndClerk.Create(this,95, 60, 290, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 295, 60, 375, 85);
	m_wndType.Create(this,380, 60, 570, 85); 
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 90, 90, 115);
	m_wndItemGroup.Create(this,95, 90, 290, 115); 
	m_wndExportTypeLabel.Create(this, _T("Export Type"), 295, 90, 375, 115);
	m_wndExportType.SetCheckBox(true);
	m_wndExportType.Create(this,380, 90, 570, 115);
	m_wndDepartmentList.Create(this,10, 120, 570, 330); 
	m_wndDepartmentList.SetCheckBox(true);
	m_wndStorageList.Create(this,10, 335, 570, 540); 
	m_wndStorageList.SetCheckBox(true);
	m_wndGroupbyDept.Create(this, _T("Group by Dept"), 5, 550, 110, 575);
	m_wndGroupbyType.Create(this, _T("Group by Type"), 115, 550, 210, 575);
	m_wndDDODMO.Create(this, _T("Only DDO"), 215, 550, 320, 575);
	m_wndXNT.Create(this, _T("Only OutDrug"), 325, 550, 390, 575);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 395, 550, 490, 575);
	m_wndExport.Create(this, _T("&Export"), 495, 550, 575, 575);
}
void CPMSDepartmentUsageinDetail_108Old::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndItemGroup.LimitText(35);

	m_wndStorageList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndStorageList.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_wndDepartmentList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDepartmentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 140);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 140);

	m_wndExportType.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 120);
	m_wndExportType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndItemGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndItemGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

}
void CPMSDepartmentUsageinDetail_108Old::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorageList.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorageList.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorageList.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorageList.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorageList.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorageList.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndStorageList.AddEvent(1, _T("Check/ Uncheck All"), _OnStockSetCheckFnc);
	m_wndDepartmentList.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartmentList.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndDepartmentList.AddEvent(1, _T("Check/ Uncheck All"), _OnDeptSetCheckFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
	//m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
	//m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
	m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
	m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
	//m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
	m_wndExportType.SetEvent(WE_SELENDOK, _OnExportTypeSelendokFnc);
	//m_wndExportType.SetEvent(WE_SETFOCUS, _OnExportTypeSetfocusFnc);
	//m_wndExportType.SetEvent(WE_KILLFOCUS, _OnExportTypeKillfocusFnc);
	m_wndExportType.SetEvent(WE_SELCHANGE, _OnExportTypeSelectChangeFnc);
	m_wndExportType.SetEvent(WE_LOADDATA, _OnExportTypeLoadDataFnc);
	//m_wndExportType.SetEvent(WE_ADDNEW, _OnExportTypeAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	OnDepartmentLoadData();
	OnStorageLoadData();
	OnClerkLoadData();
	UpdateData(false);

}
void CPMSDepartmentUsageinDetail_108Old::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorageList.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndExportType.GetDlgCtrlID(), m_szExportTypeKey);
	DDX_Check(pDX, m_wndGroupbyDept.GetDlgCtrlID(), m_bGroupbyDept);
	DDX_Check(pDX, m_wndGroupbyType.GetDlgCtrlID(), m_bGroupbyType);
	DDX_Check(pDX, m_wndDDODMO.GetDlgCtrlID(), m_bDDODMO);
	DDX_Check(pDX, m_wndXNT.GetDlgCtrlID(), m_bXNT);
}
void CPMSDepartmentUsageinDetail_108Old::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szItemGroupKey.Empty();
	m_szExportTypeKey.Empty();
	m_bStockCheck = FALSE;
	m_bDeptCheck = FALSE;
	m_bDDODMO = FALSE;
	m_bXNT = FALSE;

}
int CPMSDepartmentUsageinDetail_108Old::SetMode(int nMode){
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
/*void CPMSDepartmentUsageinDetail_108Old::OnFromDateChange(){
	
} */
/*void CPMSDepartmentUsageinDetail_108Old::OnFromDateSetfocus(){
	
} */
/*void CPMSDepartmentUsageinDetail_108Old::OnFromDateKillfocus(){
	
} */
int CPMSDepartmentUsageinDetail_108Old::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMSDepartmentUsageinDetail_108Old::OnToDateChange(){
	
} */
/*void CPMSDepartmentUsageinDetail_108Old::OnToDateSetfocus(){
	
} */
/*void CPMSDepartmentUsageinDetail_108Old::OnToDateKillfocus(){
	
} */
int CPMSDepartmentUsageinDetail_108Old::OnToDateCheckValue(){
	return 0;
} 
void CPMSDepartmentUsageinDetail_108Old::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMSDepartmentUsageinDetail_108Old::OnStorageSelendok(){
	 
}
/*void CPMSDepartmentUsageinDetail_108Old::OnStorageSetfocus(){
	
}*/
/*void CPMSDepartmentUsageinDetail_108Old::OnStorageKillfocus(){
	
}*/
long CPMSDepartmentUsageinDetail_108Old::OnStorageLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//return pMF->LoadStorageIntoListCtrl(&m_wndStorageList);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndStorageList.BeginLoad();
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE 1=1 %s ORDER BY msl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorageList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndStorageList.EndLoad();
	return nCount;
}
/*void CPMSDepartmentUsageinDetail_108Old::OnStorageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMSDepartmentUsageinDetail_108Old::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	
}
long CPMSDepartmentUsageinDetail_108Old::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartmentList.BeginLoad(); 
	m_wndDepartmentList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_type IN ('DT', 'KB', 'KD', 'XN', 'HA') OR sd_id IN ('C10', 'C8', 'C7', 'C8-D') order by  sd_name"));
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
long CPMSDepartmentUsageinDetail_108Old::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select su_userid as id, su_name as name from sys_user where su_deptid IN ('KD') order by su_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

long CPMSDepartmentUsageinDetail_108Old::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T(" SELECT DISTINCT product_type_id, ") \
	_T("                 product_type_name ") \
	_T(" FROM   (SELECT CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
	_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'A0000' ") \
	_T("                ELSE mpt_product_type_id ") \
	_T("                END product_type_id, ") \
	_T("                CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
	_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'Thuốc' ") \
	_T("                ELSE mpt_name ") \
	_T("                END product_type_name ") \
	_T("         FROM   m_product_type ") \
	_T("         WHERE  mpt_org_id = 'PM' ") \
	_T("            AND mpt_isactive = 'Y' AND mpt_product_type_id <> 'A1000') ") \
	_T(" ORDER BY product_type_id"));
	nCount = rs.ExecSQL(szSQL);
	m_wndType.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndType.AddItems(
			rs.GetValue(_T("product_type_id")),
			rs.GetValue(_T("product_type_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CPMSDepartmentUsageinDetail_108Old::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
void CPMSDepartmentUsageinDetail_108Old::OnItemGroupSelendok(){
	 
}
/*void CPMSDepartmentUsageinDetail_108Old::OnItemGroupSetfocus(){
	
}*/
/*void CPMSDepartmentUsageinDetail_108Old::OnItemGroupKillfocus(){
	
}*/
long CPMSDepartmentUsageinDetail_108Old::OnItemGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	// 	CString szFilter;
	// 	szFilter.Format(_T(" AND mpc_level = 2"));
	// 	return pMF->LoadProductCategoryList(&m_wndItemGroup, m_szItemGroupKey, szFilter);

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemGroup.IsSearchKey() && !m_szItemGroupKey.IsEmpty())
		szWhere.Format(_T(" and mpc_code = '%s' "), m_szItemGroupKey);
	m_wndItemGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpc_code as id, mpc_name as name FROM m_product_category  WHERE 1=1 AND mpc_level = 2 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSDepartmentUsageinDetail_108Old::OnItemGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMSDepartmentUsageinDetail_108Old::OnExportTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMSDepartmentUsageinDetail_108Old::OnExportTypeSelendok(){
	 
}
/*void CPMSDepartmentUsageinDetail_108Old::OnExportTypeSetfocus(){
	
}*/
/*void CPMSDepartmentUsageinDetail_108Old::OnExportTypeKillfocus(){
	
}*/
long CPMSDepartmentUsageinDetail_108Old::OnExportTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExportType.IsSearchKey() && !m_szExportTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and adpt_partner_type_id = '%s' "), m_szExportTypeKey);
};
	m_wndExportType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  1 AS trans, CAST ('XK' AS nvarchar2(2)) AS id, CAST ('Xuất Khoa' AS nvarchar2(10)) AS name FROM dual") \
		_T(" UNION ALL") \
		_T(" SELECT  2 AS trans, CAST ('XK2' AS nvarchar2(3)) AS id, CAST ('Xuất Khác' AS nvarchar2(10)) AS name FROM dual") \
		_T(" UNION ALL") \
		_T(" SELECT  3 AS trans, CAST ('XDC' AS nvarchar2(3)) AS id, CAST ('Xuất điều chuyển' AS nvarchar2(20)) AS name FROM dual") \
		_T(" UNION ALL") \
		_T(" SELECT 4 AS trans, adp_partner_id AS id, adp_name AS name FROM ad_partner ") \
		_T(" WHERE adp_partner_type_id = 'CT' AND adp_isactive = 'Y' %s ORDER BY trans, id"), m_szExportTypeKey);
		nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExportType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMSDepartmentUsageinDetail_108Old::OnExportTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMSDepartmentUsageinDetail_108Old::OnPrintPreviewSelect(){
	CGuiMenu menu(this);
	CString tmpStr;

	menu.CreatePopupMenu();
	TranslateString(_T("In (hiện tại)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("In (phiên bản 2)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	CRect rect;
	m_wndPrintPreview.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnPrintPreview(1);
		break;
	case 2:
		OnPrintPreview(2);
		break;
	}
}

void CPMSDepartmentUsageinDetail_108Old::OnPrintPreview(int nVersion)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szNewType, szOldType, szTemp, szOldGroup, szNewGroup;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader, *rptDetail;
	CStringArray arrDat;
	CString szCurDte;
	int nIdx = 1, j = 0, k = 0, nSel = 0, nCount = 0;
	long double nTtCost[8], nGrpCost[8], nCatCost[8], nTemp = 0;
	long double nTtQty[8], nGrpQty[8], nCatQty[8];

	if(m_bDDODMO)
	{
		if (!rpt.Init(_T("Reports\\HMS\\PM_CHITIETTINHHINHSUDUNGTAIDONVI_PTTT.RPT")))
		return;
	}
	else
	{
		if (!rpt.Init(_T("Reports\\HMS\\PM_CHITIETTINHHINHSUDUNGTAIDONVI.RPT")))
		return;
	}
	
	if(m_bDDODMO)
	{
		if (nVersion == 1)
		{
			szSQL = GetQueryString1();
		}
		else
		{
			szSQL = GetQueryString1_v2();
		}
	}
	else if (m_bXNT)
	{
		szSQL = GetQueryString2();
	}
	else
	{
		szSQL = GetQueryString();
	}
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	for (int i = 0; i < 8; i++)
	{
		nGrpQty[i] = 0;
		nGrpCost[i] = 0;
		nCatQty[i] = 0;
		nCatCost[i] = 0;
		nTtQty[i] = 0;
		nTtCost[i] = 0;
	}
	//Header Section
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr = _T("Toàn bộ");
	nSel = m_wndStorageList.GetCurSel();
	if (!m_szStorageKey.IsEmpty())
		rptHeader->SetValue(_T("StockName"), m_wndStorageList.GetItemText(nSel, 1));
	else
		rptHeader->SetValue(_T("StockName"), tmpStr);
	nSel = m_wndDepartmentList.GetCurSel();
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
		if (m_wndDepartmentList.GetCheck(i))
			nCount++;
	if (nCount == 0)
		rptHeader->SetValue(_T("Department"), _T("Toàn bộ"));
	else if (nCount == 1)
		rptHeader->SetValue(_T("Department"), m_wndDepartmentList.GetItemText(nSel, 1));
	else
		rptHeader->SetValue(_T("Department"), _T("Nhiều kho"));
	if (!m_szItemGroupKey.IsEmpty())
		rptHeader->SetValue(_T("Type"), m_wndItemGroup.GetCurrent(1));
	else
		rptHeader->SetValue(_T("Type"), tmpStr);
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), 
	CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	//Detail
	arrDat.Add(_T("product_name"));
	arrDat.Add(_T("product_uomname"));
	arrDat.Add(_T("unit_price"));
	arrDat.Add(_T("sol_qty"));
	arrDat.Add(_T("sol_amt"));
	arrDat.Add(_T("pol_qty"));
	arrDat.Add(_T("pol_amt"));
	arrDat.Add(_T("solins_qty"));
	arrDat.Add(_T("solins_amt"));
	arrDat.Add(_T("othins_qty"));
	arrDat.Add(_T("othins_amt"));
	arrDat.Add(_T("ser_qty"));
	arrDat.Add(_T("ser_amt"));
	arrDat.Add(_T("other_qty"));
	arrDat.Add(_T("other_amt"));
	arrDat.Add(_T("solcard_qty"));
	arrDat.Add(_T("solcard_amt"));
	arrDat.Add(_T("total_qty"));
	arrDat.Add(_T("total_amt"));
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("transaction_type"), szNewType);
		if (m_bGroupbyDept)
			rs.GetValue(_T("dept_id"), szNewGroup);
		else if (m_bGroupbyType)
		{
			rs.GetValue(_T("product_groupid"), szTemp);
			if (szTemp.IsEmpty())
			{
				rs.GetValue(_T("mp_producttype"), szTemp);
			}
			szNewGroup = szTemp;
		}
		if (szNewType != szOldType)
		{
			nTemp = 0;
			for (int i = 0; i < 8; i++)
			{
				nTemp += nGrpQty[i];
			}
			if (nTemp > 0)
			{
				if (m_bGroupbyDept || m_bGroupbyType)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					rptDetail->SetValue(_T("TotalGroup"), _T("Tổng nhóm"));
					for (int i = 0; i < 8; i++)
					{
						tmpStr.Format(_T("s%d"), (i+2)*2+1);
						szTemp.Format(_T("%f"), nGrpQty[i]);
						nCatQty[i] += nGrpQty[i];
						nGrpQty[i] = 0;
						rptDetail->SetValue(tmpStr, szTemp);
						tmpStr.Format(_T("s%d"), (i+3)*2);
						szTemp.Format(_T("%.2f"), nGrpCost[i]);
						nCatCost[i] += nGrpCost[i];
						nGrpCost[i] = 0;
						rptDetail->SetValue(tmpStr, szTemp);
					}
				}
			 }
				nTemp = 0;
				for (int i = 0; i < 8; i++)
					nTemp += nCatQty[i];
				if (nTemp > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i = 0; i < 8; i++)
					{
						if (!m_bGroupbyDept && !m_bGroupbyType)
						{
							nCatQty[i] += nGrpQty[i];
							nCatCost[i] += nGrpCost[i];
						}
						tmpStr.Format(_T("s%d"), (i+2)*2+1);
						szTemp.Format(_T("%f"), nCatQty[i]);
						nTtQty[i] += nCatQty[i];
						nCatQty[i] = 0;
						rptDetail->SetValue(tmpStr, szTemp);
						tmpStr.Format(_T("s%d"), (i+3)*2);
						szTemp.Format(_T("%.2f"), nCatCost[i]);
						nTtCost[i] += nCatCost[i];
						nCatCost[i] = 0;
						rptDetail->SetValue(tmpStr, szTemp);
					}
				}
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			if(m_bDDODMO)
			{
				if (szNewType == _T("1"))
					tmpStr = _T("Phiếu lĩnh dùng chung");
				else if (szNewType == _T("2"))
					tmpStr = _T("Phiếu lĩnh PTTT");
				else
					tmpStr = _T("Trả lại PTTT");
			}
			else
			{
				if (szNewType == _T("1"))
					tmpStr = _T("Cấp phát");
				else
					tmpStr = _T("Trả lại");
			}
			rptDetail->SetValue(_T("GroupName"), tmpStr);
			szOldType = szNewType;
			nIdx = 1;
		}
		if (m_bGroupbyDept || m_bGroupbyType)
			if (szNewGroup != szOldGroup)
			{
				nTemp = 0;
				for (int i = 0; i < 8; i++)
				{
					nTemp += nGrpQty[i];
				}
				if (nTemp > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					rptDetail->SetValue(_T("TotalGroup"), _T("Tổng nhóm"));
					for (int i = 0; i < 8; i++)
					{
						tmpStr.Format(_T("s%d"), (i+2)*2+1);
						szTemp.Format(_T("%f"), nGrpQty[i]);
						nCatQty[i] += nGrpQty[i];
						nGrpQty[i] = 0;
						rptDetail->SetValue(tmpStr, szTemp);
						tmpStr.Format(_T("s%d"), (i+3)*2);
						szTemp.Format(_T("%.2f"), nGrpCost[i]);
						nCatCost[i] += nGrpCost[i];
						nGrpCost[i] = 0;
						rptDetail->SetValue(tmpStr, szTemp);
					}
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				if (m_bGroupbyDept)
				{
					if(szNewGroup == _T("X")|| szNewGroup == _T("Y"))
					{
						tmpStr = _T("Toàn bộ");
					}
					else
					{
						tmpStr = pMF->GetDepartmentName(szNewGroup);
					}
				}
				else if (m_bGroupbyType)
				{
					rs.GetValue(_T("product_groupname"), szTemp);
					if (szTemp.IsEmpty())
					{
						rs.GetValue(_T("mpt_name"), szTemp);
					}
					TranslateString(szTemp, tmpStr);
				}
				rptDetail->SetValue(_T("GroupName"), tmpStr);
				szOldGroup = szNewGroup;
				nIdx = 1;
			}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));	
		//i: 0..16
		//j: 2..18
		//k: 0..7
		k = 0;
		for (int i = 0; i < arrDat.GetCount(); i++)
		{
			j = i + 2;
			rs.GetValue(arrDat.GetAt(i), tmpStr);
			if (tmpStr != _T("0"))
				rptDetail->SetValue(int2str(j), tmpStr);
			if ((j%2 == 1) && (j >= 5))
			{
				if (m_bGroupbyDept || m_bGroupbyType)
					nGrpQty[k] += str2double(tmpStr);
				else
					nCatQty[k] += str2double(tmpStr);
			}
			if ((j%2 == 0) && (j >= 6))
			{
				if (m_bGroupbyDept || m_bGroupbyType)
					nGrpCost[k] += str2double(tmpStr);
				else
					nCatCost[k] += str2double(tmpStr);
				k++;
			}
		}
		rs.MoveNext();
	}
	if (m_bGroupbyDept || m_bGroupbyType)
	{
		nTemp = 0;
		for (int i = 0; i < 8; i++)
		{
			nTemp += nGrpQty[i];
		}
		if (nTemp > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->SetValue(_T("TotalGroup"), _T("Tổng nhóm"));
			for (int i = 0; i < 8; i++)
			{
				tmpStr.Format(_T("s%d"), (i+2)*2+1);
				szTemp.Format(_T("%f"), nGrpQty[i]);
				nCatQty[i] += nGrpQty[i];
				rptDetail->SetValue(tmpStr, szTemp);
				tmpStr.Format(_T("s%d"), (i+3)*2);
				szTemp.Format(_T("%.2f"), nGrpCost[i]);
				nCatCost[i] += nGrpCost[i];
				nGrpCost[i] = 0;
				rptDetail->SetValue(tmpStr, szTemp);
			}
		}
	}
	nTemp = 0;
	for (int i = 0; i < 8; i++)
	{
		nTemp += nCatQty[i];
	}
	if (nTemp > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i = 0; i < 8; i++)
		{
			if (!m_bGroupbyDept && !m_bGroupbyType)
			{
				nCatQty[i] += nGrpQty[i];
				nCatCost[i] += nGrpCost[i];
			}
			tmpStr.Format(_T("s%d"), (i+2)*2+1);
			szTemp.Format(_T("%f"), nCatQty[i]);
			rptDetail->SetValue(tmpStr, szTemp);
			tmpStr.Format(_T("s%d"), (i+3)*2);
			szTemp.Format(_T("%.2f"), nCatCost[i]);
			rptDetail->SetValue(tmpStr, szTemp);
		}
	}
	szCurDte = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szCurDte.Right(2), szCurDte.Mid(5, 2), szCurDte.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
} 

void CPMSDepartmentUsageinDetail_108Old::OnExportSelect(){
	CGuiMenu menu(this);
	CString tmpStr;

	menu.CreatePopupMenu();
	TranslateString(_T("Xuất( hiện tại)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Xuất (phiên bản 2)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	CRect rect;
	m_wndPrintPreview.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport(1);
		break;
	case 2:
		OnExport(2);
		break;
	}
}

void CPMSDepartmentUsageinDetail_108Old::OnExport(int nVersioin)
{
	_debug(_T("%s"), CString(typeid(this).name()));
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr, szNewType, szOldType, szNewGroup, szOldGroup, szTemp;
	CRecord rs(&pMF->m_db);
	int nIdx = 1, j = 0, k = 0;
	long double nTtCost[8], nGrpCost[8], nCatCost[8], nTemp = 0;
	long double nTtQty[8], nGrpQty[8], nCatQty[8];
	CStringArray arrDat;
	CellFormat hf(&xls);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING);
	if(m_bDDODMO)
		szSQL = GetQueryString1();
	else if (m_bXNT)
		szSQL = GetQueryString2();
	else
		szSQL = GetQueryString();
	_fmsg(_T("%s"), szSQL);
	int ret = rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		if (ret < 0)
		{
			
		}
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	for (int i = 0; i < 8; i++)
	{
		nGrpQty[i] = 0;
		nGrpCost[i] = 0;
		nCatQty[i] = 0;
		nCatCost[i] = 0;
		nTtQty[i] = 0;
		nTtCost[i] = 0;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header Section
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 30);

	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 3, 20);
	xls.SetCellText(nCol, nRow + 3, _T("CHI TIẾT SỬ DỤNG THUỐC TẠI ĐƠN VỊ"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 21);
	tmpStr.Format(_T("Từ %s Đến %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	nRow = 5;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellMergedRows(nCol+1, nRow, 2);
	xls.SetCellMergedRows(nCol+2, nRow, 2);
	xls.SetCellMergedRows(nCol+3, nRow, 2);
	xls.SetCellMergedColumns(nCol+4, nRow, 2);
	xls.SetCellMergedColumns(nCol+6, nRow, 2);
	xls.SetCellMergedColumns(nCol+8, nRow, 2);
	xls.SetCellMergedColumns(nCol+10, nRow, 2);
	xls.SetCellMergedColumns(nCol+12, nRow, 2);
	xls.SetCellMergedColumns(nCol+14, nRow, 2);
	xls.SetCellMergedColumns(nCol+16, nRow, 2);
	xls.SetCellMergedColumns(nCol+18, nRow, 2);
	xls.SetCellMergedColumns(nCol+19, nRow, 2);
	xls.SetCellMergedColumns(nCol+20, nRow, 2);
	xls.SetCellMergedColumns(nCol+21, nRow, 2);

	xls.SetCellText(nCol, nRow, _T("STT"), &hf);
	xls.SetCellText(nCol+1, nRow, _T("Tên thuốc, hàm lượng"));
	xls.SetCellText(nCol+2, nRow, _T("ĐVT"));
	xls.SetCellText(nCol+3, nRow, _T("Đơn giá"));
	xls.SetCellText(nCol+4, nRow, _T("Bộ đội"));
	xls.SetCellText(nCol+4, nRow+1, _T("SL"));
	xls.SetCellText(nCol+5, nRow+1, _T("Thành tiền"));
	xls.SetCellText(nCol+6, nRow, _T("Chính sách"));
	xls.SetCellText(nCol+6, nRow+1, _T("SL"));
	xls.SetCellText(nCol+7, nRow+1, _T("Thành tiền"));
	xls.SetCellText(nCol+8, nRow, _T("BH Quân"));
	xls.SetCellText(nCol+8, nRow+1, _T("SL"));
	xls.SetCellText(nCol+9, nRow+1, _T("Thành tiền"));
	xls.SetCellText(nCol+10, nRow, _T("BH Khác"));
	xls.SetCellText(nCol+10, nRow+1, _T("SL"));
	xls.SetCellText(nCol+11, nRow+1, _T("Thành tiền"));
	xls.SetCellText(nCol+12, nRow, _T("Dịch vụ"));
	xls.SetCellText(nCol+12, nRow+1, _T("SL"));
	xls.SetCellText(nCol+13, nRow+1, _T("Thành tiền"));
	xls.SetCellText(nCol+14, nRow, _T("ĐT khác"));
	xls.SetCellText(nCol+14, nRow+1, _T("SL"));
	xls.SetCellText(nCol+15, nRow+1, _T("Thành tiền"));
	xls.SetCellText(nCol+16, nRow, _T("Quân có thẻ"));
	xls.SetCellText(nCol+16, nRow+1, _T("SL"));
	xls.SetCellText(nCol+17, nRow+1, _T("Thành tiền"));
	xls.SetCellText(nCol+18, nRow, _T("Tổng cộng"));
	xls.SetCellText(nCol+18, nRow+1, _T("SL"));
	xls.SetCellText(nCol+19, nRow+1, _T("Thành tiền"));
	xls.SetCellText(nCol+20, nRow+1, _T("Nhà cung cấp"));
	xls.SetCellText(nCol+21, nRow+1, _T("Hoạt chất"));

	nRow = 7;
	arrDat.Add(_T("product_name"));
	arrDat.Add(_T("product_uomname"));
	arrDat.Add(_T("unit_price"));
	arrDat.Add(_T("sol_qty"));
	arrDat.Add(_T("sol_amt"));
	arrDat.Add(_T("pol_qty"));
	arrDat.Add(_T("pol_amt"));
	arrDat.Add(_T("solins_qty"));
	arrDat.Add(_T("solins_amt"));
	arrDat.Add(_T("othins_qty"));
	arrDat.Add(_T("othins_amt"));
	arrDat.Add(_T("ser_qty"));
	arrDat.Add(_T("ser_amt"));
	arrDat.Add(_T("other_qty"));
	arrDat.Add(_T("other_amt"));
	arrDat.Add(_T("solcard_qty"));
	arrDat.Add(_T("solcard_amt"));
	arrDat.Add(_T("total_qty"));
	arrDat.Add(_T("total_amt"));
	arrDat.Add(_T("product_classname"));
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("transaction_type"), szNewType);
		if (m_bGroupbyDept)
			rs.GetValue(_T("dept_id"), szNewGroup);
		else if (m_bGroupbyType)
		{
			rs.GetValue(_T("product_groupid"), szTemp);
			if (szTemp.IsEmpty())
			{
				rs.GetValue(_T("mp_producttype"), szTemp);
			}
			szNewGroup = szTemp;
		}
		if (szNewType != szOldType)
		{
			nTemp = 0;
			for (int i = 0; i < 8; i++)
			{
				nTemp += nGrpQty[i];
			}
			if (nTemp > 0)
			{
				xls.SetCellText(1, nRow, _T("Tổng nhóm:"), FMT_TEXT | FMT_CENTER, true);
				for (int i = 0; i < 8; i++)
				{
					tmpStr.Format(_T("%d"), (i + 2)*2);
					szTemp.Format(_T("%f"), nGrpQty[i]);
					nCatQty[i] += nGrpQty[i];
					nGrpQty[i] = 0;
					xls.SetCellText(str2int(tmpStr), nRow, szTemp, FMT_NUMBER1);
					tmpStr.Format(_T("%d"), (i + 2)*2+1);
					szTemp.Format(_T("%.2f"), nGrpCost[i]);
					nCatCost[i] += nGrpCost[i];
					nGrpCost[i] = 0;
					xls.SetCellText(str2int(tmpStr), nRow, szTemp, FMT_NUMBER1);
				}
				nRow++;
			}
			nTemp = 0;
			for (int i = 0; i < 8; i++)
				nTemp += nCatQty[i];
			if (nTemp > 0)
			{
				xls.SetCellText(1, nRow, _T("Tổng cộng"), 4098, true);
				for (int i = 0; i < 8; i++)
				{
					if (!m_bGroupbyDept &&!m_bGroupbyType)
					{
						nCatQty[i] += nGrpQty[i];
						nCatCost[i] += nGrpCost[i];
					}
					tmpStr.Format(_T("%d"), (i + 2)*2);
					szTemp.Format(_T("%f"), nCatQty[i]);
					nTtQty[i] += nCatQty[i];
					nCatQty[i] = 0;
					xls.SetCellText(str2int(tmpStr), nRow, szTemp, FMT_NUMBER1, true);
					tmpStr.Format(_T("%d"), (i + 2)*2+1);
					szTemp.Format(_T("%.2f"), nCatCost[i]);
					nTtCost[i] += nGrpCost[i];
					nCatCost[i] = 0;
					xls.SetCellText(str2int(tmpStr), nRow, szTemp, FMT_NUMBER1, true);
				}
				nRow++;

			}
			xls.SetCellMergedColumns(nCol, nRow, 9);
			if(m_bDDODMO)
			{
				if (szNewType == _T("1"))
					tmpStr = _T("Phiếu lĩnh dùng chung");
				else if (szNewType == _T("2"))
					tmpStr = _T("Phiếu lĩnh PTTT");
				else
					tmpStr = _T("Trả lại PTTT");
			}
			else
			{
				if (szNewType == _T("1"))
					tmpStr = _T("Cấp phát");
				else
					tmpStr = _T("Trả lại");
			}
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true);
			szOldType = szNewType;
			nIdx = 1;
			nRow++;
		}
		if (m_bGroupbyDept || m_bGroupbyType)
			if (szNewGroup != szOldGroup)
			{
				nTemp = 0;
				for (int i = 0; i < 8; i++)
				{
					nTemp += nGrpQty[i];
				}
				if (nTemp > 0)
				{
					xls.SetCellText(1, nRow, _T("Tổng nhóm:"), FMT_TEXT | FMT_CENTER, true);
					for (int i = 0; i < 8; i++)
					{
						tmpStr.Format(_T("%d"), (i + 2)*2);
						szTemp.Format(_T("%f"), nGrpQty[i]);
						nCatQty[i] += nGrpQty[i];
						nGrpQty[i] = 0;
						xls.SetCellText(str2int(tmpStr), nRow, szTemp, FMT_NUMBER1);
						tmpStr.Format(_T("%d"), (i + 2)*2+1);
						szTemp.Format(_T("%.2f"), nGrpCost[i]);
						nCatCost[i] += nGrpCost[i];
						nGrpCost[i] = 0;
						xls.SetCellText(str2int(tmpStr), nRow, szTemp, FMT_NUMBER1);
					}
					nRow++;
				}
				xls.SetCellMergedColumns(0, nRow, 10);
				if (m_bGroupbyDept)
				{
					if(szNewGroup == _T("X")|| szNewGroup == _T("Y"))
					{
						tmpStr = _T("Toàn bộ");
					}
					else
					{
						tmpStr = pMF->GetDepartmentName(szNewGroup);
					}
				}
				else if (m_bGroupbyType)
				{
					rs.GetValue(_T("product_groupname"), szTemp);
					if (szTemp.IsEmpty())
					{
						rs.GetValue(_T("mpt_name"), szTemp);
					}
					TranslateString(szTemp, tmpStr);
				}
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
				szOldGroup = szNewGroup;
				nIdx = 1;
				nRow++;
			}
		xls.SetCellText(nCol, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(nCol+1, nRow, rs.GetValue(_T("product_name")), FMT_TEXT);
		xls.SetCellText(nCol+2, nRow, rs.GetValue(_T("product_uomname")), FMT_TEXT);
		k = 0;
		for (int i = 2; i < arrDat.GetCount(); i++)
		{
			j = i + 1;
			xls.SetCellText(nCol+j, nRow, rs.GetValue(arrDat.GetAt(i)), FMT_NUMBER1);
			if ((j%2 == 0) && (j >=4))
			{
				if (m_bGroupbyDept || m_bGroupbyType)
					nGrpQty[k] += str2double(rs.GetValue(arrDat.GetAt(i)));
				else
					nCatQty[k] += str2double(rs.GetValue(arrDat.GetAt(i)));
			}
			if ((j%2 == 1) && (j >=5))
			{
				if (m_bGroupbyDept || m_bGroupbyType)
					nGrpCost[k] += str2double(rs.GetValue(arrDat.GetAt(i)));
				else
					nCatCost[k] += str2double(rs.GetValue(arrDat.GetAt(i)));
				k++;
			}
		}
		xls.SetCellText(nCol+20, nRow, rs.GetValue(_T("partner_name")), FMT_TEXT);
		xls.SetCellText(nCol+21, nRow, rs.GetValue(_T("product_classname")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	if (m_bGroupbyDept || m_bGroupbyType)
	{
		nTemp = 0;
		for (int i = 0; i < 8; i++)
		{
			nTemp += nGrpQty[i];
		}
		if (nTemp > 0)
		{
			xls.SetCellText(1, nRow, _T("Tổng nhóm:"), FMT_TEXT | FMT_CENTER, true);
			for (int i = 0; i < 8; i++)
			{
				tmpStr.Format(_T("%d"), (i + 2)*2);
				szTemp.Format(_T("%f"), nGrpQty[i]);
				nCatQty[i] += nGrpQty[i];
				nGrpQty[i] = 0;
				xls.SetCellText(str2int(tmpStr), nRow, szTemp, FMT_NUMBER1);
				tmpStr.Format(_T("%d"), (i + 2)*2+1);
				szTemp.Format(_T("%.2f"), nGrpCost[i]);
				nCatCost[i] += nGrpCost[i];
				nGrpCost[i] = 0;
				xls.SetCellText(str2int(tmpStr), nRow, szTemp, FMT_NUMBER1);
			}
			nRow++;
		}
	}
	//Tong tra lai
	nTemp = 0;
	for (int i = 0; i < 8; i++)
		nTemp += nCatQty[i];
	if (nTemp > 0)
	{
		xls.SetCellText(1, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER, true);
		for (int i = 0; i < 8; i ++)
		{
			if (!m_bGroupbyDept && !m_bGroupbyType)
			{
				nCatQty[i] += nGrpQty[i];
				nCatCost[i] += nGrpCost[i];
			}
			tmpStr.Format(_T("%f"), nCatQty[i]);
			xls.SetCellText((i + 2)*2, nRow, tmpStr, FMT_NUMBER1, true);
			tmpStr.Format(_T("%.2f"), nCatCost[i]);
			xls.SetCellText((i + 2)*2+1, nRow, tmpStr, FMT_NUMBER1, true);
		}
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\CHITIETSUDUNGTHUOCTAIDONVI.xls"));
} 

CString CPMSDepartmentUsageinDetail_108Old::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1, szWhereET, szTemp, szDept, szStorageStr, szField, szGroupBy, szOrderBy, szLeftJoin, szExportType;
	CString szIssueSQL, szReturnSQL;
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);
			
		}
	}
	for (int i = 0; i < m_wndStorageList.GetItemCount();i++)
		if (m_wndStorageList.GetCheck(i))
		{
			m_wndStorageList.SetCurSel(i);
			if (!szStorageStr.IsEmpty())
				szStorageStr += _T(", ");
			szStorageStr.AppendFormat(_T("'%s'"), m_wndStorageList.GetItemText(i, 0));
		}

		szWhere.Format(_T(" AND approval_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
						m_szFromDate, m_szToDate);
	if (!szStorageStr.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStorageStr);
			szWhere1.Format(_T(" AND mt_storage_to_id NOT IN (%s)"), szStorageStr);
		}
	if (!szDept.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id IN (%s)"), szDept);
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND approval_clerk = '%s'"), m_szClerkKey);
	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND cat.mpc_code = '%s'"), m_szItemGroupKey);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mp_producttype = '%s'"), m_szTypeKey);

	for (int i = 0; i < m_wndExportType.GetItemCount(); i++)
	{
		if (m_wndExportType.GetCheck(i))
		{
			m_wndExportType.SetCurSel(i);
			if (!szExportType.IsEmpty())
				szExportType += _T("', '");
			szExportType += m_wndExportType.GetCurrent(0);
		}
	}
	if (!szExportType.IsEmpty())
		szWhereET.AppendFormat(_T(" WHERE exporttype IN('%s')"), szExportType);
	//szWhere.AppendFormat(_T(" AND mpi_org_id = 'PM'"));
	//mtl_saleprice fixed price
	if (m_bGroupbyDept)
	{
		szField.Format(_T("sd_index, dept_id,"));
		szGroupBy.Format(_T("sd_index, dept_id,"));
		szOrderBy.Format(_T("sd_index, dept_id,"));
		szLeftJoin.Format(_T(" LEFT JOIN sys_dept ON (dept_id = sd_id)"));
	}
	else if (m_bGroupbyType)
	{
		szField.Format(_T("mp_producttype, mpt_name,"));
		szGroupBy.Format(_T("mp_producttype, mpt_name,"));
		szOrderBy.Format(_T("mp_producttype, mpt_name,"));
	}

	szIssueSQL.Format(_T(" SELECT    1 AS transaction_type, ") \
				_T("           %s ") \
				_T("     mpi_product_id AS product_id,") \
				_T("     mp_name AS product_name,") \
				_T("     cls.mpc_name AS product_classname,") \
				_T("     unit_price,") \
				_T("     get_uomname(mp_product_uom_id) AS product_uomname,") \
				_T("           SUM(sol_qty) AS sol_qty, ") \
				_T("           SUM(pol_qty) AS pol_qty, ") \
				_T("           SUM(solins_qty) AS solins_qty, ") \
				_T("           SUM(othins_qty) AS othins_qty, ") \
				_T("           SUM(ser_qty) AS ser_qty, ") \
				_T("           SUM(solcard_qty) AS solcard_qty, ") \
				_T("           SUM(other_qty) AS other_qty, ") \
				_T("           SUM(total_qty) AS total_qty, ") \
				_T("           SUM(sol_amt) AS sol_amt, ") \
				_T("           SUM(pol_amt) AS pol_amt, ") \
				_T("           SUM(solins_amt) AS solins_amt, ") \
				_T("           SUM(othins_amt) AS othins_amt, ") \
				_T("           SUM(ser_amt) AS ser_amt, ") \
				_T("           SUM(other_amt) AS other_amt, ") \
				_T("           SUM(solcard_amt) AS solcard_amt, ") \
				_T("           SUM(total_amt) AS total_amt, exporttype,") \
				_T("   (SELECT") \
				_T("   get_partnername(po_partner_id)") \
				_T("   FROM purchase_order") \
				_T("   LEFT JOIN purchase_orderline x") \
				_T("   ON(po_purchase_order_id  = pol_purchase_order_id)") \
				_T("   WHERE x.pol_product_item_id = mpi_product_item_id AND x.pol_purchase_order_id = (SELECT MAX(pol_purchase_order_id)") \
				_T("   FROM purchase_orderline y") \
				_T("   WHERE y.pol_product_item_id = x.pol_product_item_id)) AS partner_name") \
				_T(" FROM      (SELECT Dept_id, ") \
				_T("                   Storage_id, ") \
				_T("                   Approval_date, ") \
				_T("                   unit_price, ") \
				_T("                   CASE WHEN object_id IN(1, 13) THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END sol_qty, ") \
				_T("                   CASE WHEN object_id = 3 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END pol_qty, ") \
				_T("                   CASE WHEN object_id = 2 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END solins_qty, ") \
				_T("                   CASE WHEN object_id = 4 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END othins_qty, ") \
				_T("                   CASE WHEN object_id = 7 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END ser_qty, ") \
				_T("                   CASE WHEN object_id = 11 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END solcard_qty, ") \
				_T("                   CASE WHEN object_id IN ( 5, 6, 8, 9, ") \
				_T("                                       10, 12 ) THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END other_qty, ") \
				_T("                   line_qty total_qty, ") \
				_T("                   CASE WHEN object_id IN(1, 13) THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END sol_amt, ") \
				_T("                   CASE WHEN object_id = 3 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END pol_amt, ") \
				_T("                   CASE WHEN object_id = 2 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END solins_amt, ") \
				_T("                   CASE WHEN object_id = 4 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END othins_amt, ") \
				_T("                   CASE WHEN object_id = 7 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END ser_amt, ") \
				_T("                   CASE WHEN object_id = 11 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END solcard_amt, ") \
				_T("                   CASE WHEN object_id IN ( 5, 6, 8, 9, ") \
				_T("                                       10, 12 ) THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END other_amt, ") \
				_T("                   line_qty * unit_price total_amt, ") \
				_T("                   sitem_id, ") \
				_T("				   doc_type,") \
				_T("                   stt, ") \
				_T("                   approval_clerk,  exporttype ") \
				_T("            FROM   (SELECT    so_partneraddress AS dept_id, ") \
				_T("                              7 AS object_id, ") \
				_T("                              Sol_unitprice AS unit_price, ") \
				_T("                              Sol_qtyorder AS line_qty, ") \
				_T("                              So_storage_id storage_id, ") \
				_T("                              So_approveddate approval_date, ") \
				_T("                              Sol_product_item_id sitem_id, ") \
				_T("							  so_doctype doc_type,")
				_T("                              so_status stt, ") \
				_T("                              so_approvedby approval_clerk,  CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("                    FROM      sale_order ") \
				_T("                    LEFT JOIN sale_orderline ON ( so_sale_order_id = sol_sale_order_id ) ") \
				_T("                    WHERE     so_doctype = 'SOO' AND so_status = 'A' AND so_partner_type_id = 'I' ") \
				_T("                    UNION ALL ") \
				_T("                    SELECT    hpo_deptid, ") \
				_T("                              Hpo_object_id, ") \
				_T("                              Hpol_unitprice, ") \
				_T("                              Hpol_qtyorder, ") \
				_T("                              CASE WHEN Coalesce(hpo_reforder_id, 0) > 0 THEN mt_storage_id ") \
				_T("                              ELSE hpo_storage_id ") \
				_T("                              END, ") \
				_T("                              CASE WHEN Coalesce(hpo_reforder_id, 0) > 0 THEN mt_approveddate ") \
				_T("                              ELSE hpo_approvedate ") \
				_T("                              END, ") \
				_T("                              Hpol_product_item_id, ") \
				_T("							  NVL(mt_doctype, 'P'),") \
				_T("                              CASE WHEN Coalesce(hpo_reforder_id, 0) > 0 THEN mt_status ") \
				_T("                              ELSE hpo_orderstatus ") \
				_T("                              END, ") \
				_T("                              hpo_approveby,  CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("         FROM (") \
				_T("         SELECT HPO_TRANSACTION_ID hpo_reforder_id,") \
				_T("         hpo_orderstatus,") \
				_T("         hpo_ordertype,") \
				_T("         hpo_approveby,") \
				_T("         hpo_approvedate,") \
				_T("         hpo_storage_id,") \
				_T("         hpo_deptid,") \
				_T("         Hpo_object_id,") \
				_T("         Hpol_unitprice,") \
				_T("         Hpol_qtyorder,") \
				_T("         Hpol_product_item_id") \
				_T("         FROM hms_pharmaorder") \
				_T("         LEFT JOIN hms_pharmaorderline") \
				_T("         ON(hpo_orderid = hpol_orderid)") \
				_T("         UNION ALL") \
				_T("         SELECT HPO_TRANSACTION_ID hpo_reforder_id,") \
				_T("         hpo_orderstatus,") \
				_T("         hpo_ordertype,") \
				_T("         hpo_approveby,") \
				_T("         hpo_approvedate,") \
				_T("         hpo_storage_id,") \
				_T("         hpo_deptid,") \
				_T("         Hpo_object_id,") \
				_T("         Hpol_unitprice,") \
				_T("         Hpol_qtyorder,") \
				_T("         Hpol_product_item_id") \
				_T("         FROM hms_ipharmaorder") \
				_T("         LEFT JOIN hms_ipharmaorderline") \
				_T("         ON(hpo_orderid = hpol_orderid)") \
				_T("         ) pharmaorder") \
				_T("                    LEFT JOIN m_transaction ON ( mt_transaction_id = hpo_reforder_id ) ") \
				_T("                    WHERE     hpo_orderstatus = 'A' AND hpo_ordertype <> 'C'") \
				_T("				    ) tbl_pharma") \
				_T("            UNION ALL ") \
				_T("            SELECT    mt_department_to_id AS dept_id, ") \
				_T("                      Mt_storage_id, ") \
				_T("                      Mt_approveddate, ") \
				_T("                      mtl_saleprice, ") \
				_T("                      mtl_qtysold, ") \
				_T("                      mtl_qtypolicy, ") \
				_T("                      mtl_qtysoldins, ") \
				_T("                      mtl_qtyotherins, ") \
				_T("                      mtl_qtyservice, ") \
				_T("                      mtl_qtyother, ") \
				_T("                      0, ") \
				_T("                      mtl_qtydelivery, ") \
				_T("                      mtl_qtysold * mtl_saleprice, ") \
				_T("                      mtl_qtypolicy * mtl_saleprice, ") \
				_T("                      mtl_qtysoldins * mtl_saleprice, ") \
				_T("                      mtl_qtyotherins * mtl_saleprice, ") \
				_T("                      mtl_qtyservice * mtl_saleprice, ") \
				_T("                      mtl_qtyother * mtl_saleprice, ") \
				_T("                      0, ") \
				_T("                      mtl_qtydelivery * mtl_saleprice, ") \
				_T("                      mtl_product_item_id, ") \
				_T("					  mt_doctype,") \
				_T("                      mt_status, ") \
				_T("                      mt_approvedby, ") \
				_T("					  CASE WHEN mt_partner_id IS NOT NULL THEN mt_partner_id WHEN mt_doctype = 'EXO' ") \
				_T("					  THEN CAST ('XK2' AS NVARCHAR2(3)) ELSE CAST ('XK' AS nvarchar2(2)) END AS exporttype ") \
				_T("            FROM      m_transaction ") \
				_T("            LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T("            WHERE     mt_doctype NOT IN ( 'CRO', 'DRO', 'SRO', 'PRO', ") \
				_T("                                          'DMO', 'MOV', 'BIO' ) AND mt_status = 'A' AND mtl_qtydelivery > 0 AND NVL(mtl_client_id, 'X') <> 'TT' ") \
				_T(" UNION ALL") \
				_T(" SELECT mt_department_to_id AS dept_id,") \
				_T("   Mt_storage_id,") \
				_T("   Mt_approveddate,") \
				_T("   (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtysold,") \
				_T("   mtl_qtypolicy,") \
				_T("   mtl_qtysoldins,") \
				_T("   mtl_qtyotherins,") \
				_T("   mtl_qtyservice,") \
				_T("   mtl_qtyother,") \
				_T("   0,") \
				_T("   mtl_qtydelivery,") \
				_T("   mtl_qtysold     * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtypolicy   * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtysoldins  * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtyotherins * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtyservice  * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtyother    * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   0,") \
				_T("   mtl_qtydelivery * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_product_item_id,") \
				_T("   mt_doctype,") \
				_T("   mt_status,") \
				_T("   mt_approvedby,") \
				_T("   CASE") \
				_T("     WHEN mt_partner_id IS NOT NULL") \
				_T("     THEN mt_partner_id") \
				_T("     ELSE CAST ('XDC' AS NVARCHAR2(3))") \
				_T("   END AS exporttype") \
				_T(" FROM m_transaction") \
				_T(" LEFT JOIN m_transactionline") \
				_T(" ON ( mt_transaction_id    = mtl_transaction_id )") \
				_T(" LEFT JOIN m_product_item ON ( mpi_product_item_id = mtl_product_item_id ) ") \
				_T(" WHERE mt_status           = 'A'") \
				_T(" AND mt_doctype            = 'MOV' %s") \
				_T(" ) tbl_issue ") \
				_T("   LEFT JOIN m_product_item") \
				_T("   ON (mpi_product_item_id  = sitem_id)") \
				_T("   LEFT JOIN m_product") \
				_T("   ON (mp_product_id = mpi_product_id)") \
				_T("   LEFT JOIN m_product_class cls") \
				_T("   ON(mpc_product_class_id = mp_product_class_id)") \
				_T("   LEFT JOIN m_product_category cat") \
				_T("   ON(cat.mpc_product_category_id = mp_product_category_id) ") \
				_T("   LEFT JOIN m_product_type") \
				_T("   ON(mpt_product_type_id = mp_producttype) ") \
				_T("	%s") \
				_T(" WHERE 1 = 1 %s") \
				_T(" GROUP BY %s ") \
				_T("     mpi_product_id,") \
				_T("     mp_product_uom_id,") \
				_T("     unit_price,") \
				_T("     mp_name,") \
				_T("     cls.mpc_name,") \
				_T("     exporttype,") \
				_T("     mpi_product_item_id"), szField, szWhere1, szLeftJoin, szWhere, szGroupBy);

	szReturnSQL.Format(_T(" SELECT    16 AS transaction_type, ") \
				_T("           %s ") \
				_T("     mpi_product_id AS product_id,") \
				_T("     mp_name AS product_name,") \
				_T("     cls.mpc_name AS product_classname,") \
				_T("     unit_price,") \
				_T("     get_uomname(mp_product_uom_id) AS product_uomname,") \
				_T("           SUM(sol_qty) sol_qty, ") \
				_T("           SUM(pol_qty) pol_qty, ") \
				_T("           SUM(solins_qty) solins_qty, ") \
				_T("           SUM(othins_qty) othins_qty, ") \
				_T("           SUM(ser_qty) ser_qty, ") \
				_T("           SUM(other_qty) other_qty, ") \
				_T("           SUM(solcard_qty) AS solcard_qty, ") \
				_T("           SUM(total_qty) total_qty, ") \
				_T("           SUM(sol) sol, ") \
				_T("           SUM(pol) pol, ") \
				_T("           SUM(solins) solins, ") \
				_T("           SUM(othins) othins, ") \
				_T("           SUM(ser) ser, ") \
				_T("           SUM(other) other, ") \
				_T("           SUM(solcard) AS solcard, ") \
				_T("           SUM(total) total,  exporttype, ") \
				_T("   (SELECT") \
				_T("   get_partnername(po_partner_id)") \
				_T("   FROM purchase_order") \
				_T("   LEFT JOIN purchase_orderline x") \
				_T("   ON(po_purchase_order_id  = pol_purchase_order_id)") \
				_T("   WHERE x.pol_product_item_id = mpi_product_item_id AND x.pol_purchase_order_id = (SELECT MAX(pol_purchase_order_id)") \
				_T("   FROM purchase_orderline y") \
				_T("   WHERE y.pol_product_item_id = x.pol_product_item_id)) AS partner_name") \
				_T(" FROM (") \
				_T("	SELECT sitem_id, ") \
				_T("		   dept_id,") \
				_T("		   approval_date,") \
				_T("		   storage_id,") \
				_T("		   doc_type,") \
				_T("		   stt,") \
				_T("		   approval_clerk,") \
				_T("		   unit_price,") \
				_T("           CASE WHEN object_id IN(1, 13) THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END sol_qty, ") \
				_T("           CASE WHEN object_id = 3 THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END pol_qty, ") \
				_T("           CASE WHEN object_id = 2 THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END solins_qty, ") \
				_T("           CASE WHEN object_id = 4 THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END othins_qty, ") \
				_T("           CASE WHEN object_id = 7 THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END ser_qty, ") \
				_T("           CASE WHEN object_id = 11 THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END solcard_qty, ") \
				_T("           CASE WHEN object_id IN ( 5, 6, 8, 9, ") \
				_T("                                   10, 12 ) THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END other_qty, ") \
				_T("           line_qty total_qty, ") \
				_T("           CASE WHEN object_id IN(1, 13) THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END sol, ") \
				_T("           CASE WHEN object_id = 3 THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END pol, ") \
				_T("           CASE WHEN object_id = 2 THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END solins, ") \
				_T("           CASE WHEN object_id = 4 THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END othins, ") \
				_T("           CASE WHEN object_id = 7 THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END ser, ") \
				_T("           CASE WHEN object_id = 11 THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END solcard, ") \
				_T("           CASE WHEN object_id IN ( 5, 6, 8, 9, ") \
				_T("                                   10, 12 ) THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END other, ") \
				_T("           line_qty * unit_price total,   exporttype ") \
				_T("	FROM      (SELECT    hpo.Hpo_deptid AS dept_id, ") \
				_T("                      Hpo.Hpo_object_id AS object_id, ") \
				_T("                      Hpol_unitprice unit_price, ") \
				_T("                      Hpol_qtyreturn line_qty, ") \
				_T("                      Hpo_approveddate approval_date, ") \
				_T("                      hpo.Hpo_storage_id storage_id, ") \
				_T("                      hpol_product_item_id sitem_id, ") \
				_T("					  hpo_approvedby approval_clerk,") \
				_T("					  cast('P' as NVARCHAR2(1)) doc_type,") \
				_T("                      hpro.hpo_status stt,   CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("            FROM      hms_pharmareturnorder hpro ") \
				_T("            LEFT JOIN hms_pharmareturnorder_line ON ( hpro.hpo_pharmareturnorder_id = hpol_pharmareturnorder_id ) ") \
				_T("            LEFT JOIN hms_pharmaorder hpo ON ( hpo.hpo_docno = hpro.hpo_docno AND hpo.hpo_orderid = hpro.hpo_orderid ) ") \
				_T("			WHERE hpro.hpo_status = 'A'") \
				_T("            UNION ALL ") \
				_T("            SELECT    Hpo_deptid, ") \
				_T("                      Hpo_object_id, ") \
				_T("                      Hpol_unitprice, ") \
				_T("                      Hpol_qtyreverse, ") \
				_T("                      Mt_approveddate, ") \
				_T("                      Hpo_storage_id, ") \
				_T("                      Hpol_product_item_id sitem_id, ") \
				_T("					  mt_approvedby,") \
				_T("					  mt_doctype,") \
				_T("                      mt_status,   CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("            FROM      hms_ipharmaorder ") \
				_T("            LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
				_T("            LEFT JOIN m_transaction ON ( mt_transaction_id = hpol_retorder_id ) ") \
				_T("            WHERE     hpol_qtyreverse > 0 AND mt_status = 'A') tbl_pharma ") \
				_T("    UNION ALL ") \
				_T("    SELECT    mtl_product_item_id, ") \
				_T("		   mt_department_id,") \
				_T("		   mt_approveddate,") \
				_T("		   mt_storage_to_id,") \
				_T("           mt_doctype,") \
				_T("		   mt_status,") \
				_T("		   mt_approvedby,") \
				_T("		   mtl_saleprice,") \
				_T("      mtl_qtysold, ") \
				_T("      mtl_qtypolicy, ") \
				_T("      mtl_qtysoldins, ") \
				_T("      mtl_qtyotherins, ") \
				_T("      mtl_qtyservice, ") \
				_T("      mtl_qtyother, ") \
				_T("      0, ") \
				_T("      mtl_qtyorder, ") \
				_T("      mtl_qtysold * mtl_saleprice, ") \
				_T("      mtl_qtypolicy * mtl_saleprice, ") \
				_T("      mtl_qtysoldins * mtl_saleprice, ") \
				_T("      mtl_qtyotherins * mtl_saleprice, ") \
				_T("      mtl_qtyservice * mtl_saleprice, ") \
				_T("      mtl_qtyother * mtl_saleprice, ") \
				_T("      0, ") \
				_T("      mtl_qtyorder * mtl_saleprice, CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("    FROM      m_transaction ") \
				_T("    LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T("    WHERE     mt_doctype = 'CRO' AND mt_status = 'A' AND mtl_qtydelivery > 0 ") \
				_T("	  UNION ALL ") \
				_T("    SELECT    mtl_product_item_id, ") \
				_T("		   mt_department_id,") \
				_T("		   mt_approveddate,") \
				_T("		   mt_storage_to_id,") \
				_T("           mt_doctype,") \
				_T("		   mt_status,") \
				_T("		   mt_approvedby,") \
				_T("		   mtl_saleprice,") \
				_T("      mtl_qtysold, ") \
				_T("      mtl_qtypolicy, ") \
				_T("      mtl_qtysoldins, ") \
				_T("      mtl_qtyotherins, ") \
				_T("      mtl_qtyservice, ") \
				_T("      mtl_qtyother, ") \
				_T("      0, ") \
				_T("      mtl_qtyorder, ") \
				_T("      mtl_qtysold * mtl_saleprice, ") \
				_T("      mtl_qtypolicy * mtl_saleprice, ") \
				_T("      mtl_qtysoldins * mtl_saleprice, ") \
				_T("      mtl_qtyotherins * mtl_saleprice, ") \
				_T("      mtl_qtyservice * mtl_saleprice, ") \
				_T("      mtl_qtyother * mtl_saleprice, ") \
				_T("      0, ") \
				_T("      mtl_qtyorder * mtl_saleprice, CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("    FROM      m_transaction ") \
				_T("    LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T("	LEFT JOIN hms_ipharmaorderline_r ON (nvl(hpolr_retorder_id,0) = mt_transaction_id) ") \
				_T("    WHERE     mt_doctype = 'DRO' AND mt_status = 'A' AND mtl_qtydelivery > 0 and nvl(hpolr_retorder_id,0) =0  ) tbl_return") \
				_T("   LEFT JOIN m_product_item") \
				_T("   ON (mpi_product_item_id  = sitem_id)") \
				_T("   LEFT JOIN m_product") \
				_T("   ON (mp_product_id = mpi_product_id)") \
				_T("   LEFT JOIN m_product_class cls") \
				_T("   ON(mpc_product_class_id = mp_product_class_id)") \
				_T("   LEFT JOIN m_product_category cat") \
				_T("   ON(cat.mpc_product_category_id = mp_product_category_id) ") \
				_T("   LEFT JOIN m_product_type") \
				_T("   ON(mpt_product_type_id = mp_producttype) ") \
				_T("	%s") \
				_T(" WHERE dept_id IS NOT NULL %s") \
				_T(" GROUP BY %s ") \
				_T("     mpi_product_id,") \
				_T("     mp_product_uom_id,") \
				_T("     unit_price,") \
				_T("     mp_name,") \
				_T("     cls.mpc_name,") \
				_T("     exporttype,") \
				_T("     mpi_product_item_id"), szField, szLeftJoin, szWhere, szGroupBy);

				szSQL.Format(_T(" SELECT") \
					_T("     transaction_type, %s") \
					_T("     product_id,") \
					_T("     product_name,") \
					_T("     product_classname,") \
					_T("     unit_price,") \
					_T("     product_uomname,") \
					_T("     SUM(sol_qty)     AS sol_qty,") \
					_T("     SUM(pol_qty)     AS pol_qty,") \
					_T("     SUM(solins_qty)  AS solins_qty,") \
					_T("     SUM(othins_qty)  AS othins_qty,") \
					_T("     SUM(ser_qty)     AS ser_qty,") \
					_T("     SUM(solcard_qty) AS solcard_qty,") \
					_T("     SUM(other_qty)   AS other_qty,") \
					_T("     SUM(total_qty)   AS total_qty,") \
					_T("     SUM(sol_amt)     AS sol_amt,") \
					_T("     SUM(pol_amt)     AS pol_amt,") \
					_T("     SUM(solins_amt)  AS solins_amt,") \
					_T("     SUM(othins_amt)  AS othins_amt,") \
					_T("     SUM(ser_amt)     AS ser_amt,") \
					_T("     SUM(other_amt)   AS other_amt,") \
					_T("     SUM(solcard_amt) AS solcard_amt,") \
					_T("     SUM(total_amt)   AS total_amt,") \
					_T("     exporttype,") \
					_T("     partner_name") \
					_T(" FROM (") \
					_T(" %s") \
					_T(" UNION ALL") \
					_T(" %s) %s") \
					_T(" GROUP BY transaction_type, %s") \
					_T("     product_id,") \
					_T("     product_name,") \
					_T("     product_classname,") \
					_T("     unit_price,") \
					_T("     product_uomname,") \
					_T("     exporttype,") \
					_T("     partner_name") \
					_T(" ORDER BY transaction_type, %s product_name"), szField, szIssueSQL, szReturnSQL, szWhereET, szGroupBy, szOrderBy);
	return szSQL;
}

CString CPMSDepartmentUsageinDetail_108Old::GetQueryString1(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szTemp, szDept, szStorageStr, szField, szField2, szGroupBy, szOrderBy, szLeftJoin;
	CString szIssueSQL, szReturnSQL;
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);

		}
	}
	for (int i = 0; i < m_wndStorageList.GetItemCount();i++)
		if (m_wndStorageList.GetCheck(i))
		{
			m_wndStorageList.SetCurSel(i);
			if (!szStorageStr.IsEmpty())
				szStorageStr += _T(", ");
			szStorageStr.AppendFormat(_T("'%s'"), m_wndStorageList.GetItemText(i, 0));
		}
		CString szWherePPO,szWhereMTrans,szWhereMTransR;
		szWherePPO.Format(_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
			m_szFromDate, m_szToDate);
		szWhereMTrans.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
			m_szFromDate, m_szToDate);
		szWhereMTransR.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
			m_szFromDate, m_szToDate);
		szWhere.Format(_T(" AND approval_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
			m_szFromDate, m_szToDate);
		if (!szStorageStr.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStorageStr);
			szWherePPO.AppendFormat(_T(" AND hpo_storage_id IN (%s)"), szStorageStr);
			szWhereMTrans.AppendFormat(_T(" AND mt_storage_id IN (%s)"), szStorageStr);
			szWhereMTransR.AppendFormat(_T(" AND mt_storage_to_id IN (%s)"), szStorageStr);
		}
		if (!szDept.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND dept_id IN (%s)"), szDept);
			szWherePPO.AppendFormat(_T(" AND hpo_deptid IN (%s)"), szDept);
			szWhereMTrans.AppendFormat(_T(" AND mt_department_to_id IN (%s)"), szDept);
			szWhereMTransR.AppendFormat(_T(" AND mt_department_id IN (%s)"), szDept);

		}
		if (!m_szClerkKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND approval_clerk = '%s'"), m_szClerkKey);
		if (!m_szItemGroupKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND product_rootid = '%s'"), m_szItemGroupKey);
		if (!m_szTypeKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
		//szWhere.AppendFormat(_T(" AND product_org_id = 'PM'"));
		//mtl_saleprice fixed price
		if (m_bGroupbyDept)
		{
			szField.Format(_T("sd_index, CASE WHEN transaction_type = 2 THEN CAST('X' AS NVARCHAR2(1)) WHEN transaction_type = 16 THEN CAST('Y' AS NVARCHAR2(1)) ELSE dept_id END AS dept_id,"));
			szField2.Format(_T("sd_index, dept_id,"));
			szGroupBy.Format(_T("sd_index, dept_id,"));
			szOrderBy.Format(_T("sd_index, dept_id,"));
			szLeftJoin.Format(_T(" LEFT JOIN sys_dept ON (dept_id = sd_id)"));
		}
		else if (m_bGroupbyType)
		{
			szField.Format(_T("product_groupid, product_groupname,"));
			szField2.Format(_T("product_groupid, product_groupname,"));
			szGroupBy.Format(_T("product_groupid, product_groupname,"));
			szOrderBy.Format(_T("product_groupid, product_groupname,"));
		}

		szSQL.Format(_T(" SELECT") \
			_T("   transaction_type, %s") \
			_T("   product_id,") \
			_T("   product_name,") \
			_T("   unit_price,") \
			_T("   product_uomname,") \
			_T("   SUM(sol_qty)     AS sol_qty,") \
			_T("   SUM(pol_qty)     AS pol_qty,") \
			_T("   SUM(solins_qty)  AS solins_qty,") \
			_T("   SUM(othins_qty)  AS othins_qty,") \
			_T("   SUM(ser_qty)     AS ser_qty,") \
			_T("   SUM(other_qty)   AS other_qty,") \
			_T("   SUM(solcard_qty) AS solcard_qty,") \
			_T("   SUM(total_qty)   AS total_qty,") \
			_T("   SUM(sol_amt)     AS sol_amt,") \
			_T("   SUM(pol_amt)     AS pol_amt,") \
			_T("   SUM(solins_amt)  AS solins_amt,") \
			_T("   SUM(othins_amt)  AS othins_amt,") \
			_T("   SUM(ser_amt)     AS ser_amt,") \
			_T("   SUM(other_amt)   AS other_amt,") \
			_T("   SUM(solcard_amt) AS solcard_amt,") \
			_T("   SUM(total_amt)   AS total_amt,") \
			_T("   partner_name") \
			_T(" FROM") \
			_T(" (") \
			_T(" SELECT transaction_type, %s") \
			_T(" product_id,") \
			_T(" product_name,") \
			_T(" unit_price,") \
			_T(" product_uomname,") \
			_T(" SUM(sol_qty) AS sol_qty,") \
			_T(" SUM(pol_qty) AS pol_qty,") \
			_T(" SUM(solins_qty) AS solins_qty,") \
			_T(" SUM(othins_qty) AS othins_qty,") \
			_T(" SUM(ser_qty) AS ser_qty,") \
			_T(" SUM(other_qty) AS other_qty,") \
			_T(" SUM(solcard_qty) AS solcard_qty,") \
			_T(" SUM(total_qty) AS total_qty,") \
			_T(" SUM(sol_amt) AS sol_amt,") \
			_T(" SUM(pol_amt) AS pol_amt,") \
			_T(" SUM(solins_amt) AS solins_amt,") \
			_T(" SUM(othins_amt) AS othins_amt,") \
			_T(" SUM(ser_amt) AS ser_amt,") \
			_T(" SUM(other_amt) AS other_amt,") \
			_T(" SUM(solcard_amt) AS solcard_amt,") \
			_T(" SUM(total_amt) AS total_amt,") \
			_T("   (SELECT") \
			_T("   get_partnername(po_partner_id)") \
			_T("   FROM purchase_order") \
			_T("   LEFT JOIN purchase_orderline x") \
			_T("   ON(po_purchase_order_id  = pol_purchase_order_id)") \
			_T("   WHERE x.pol_product_item_id = product_item_id AND x.pol_purchase_order_id = (SELECT MAX(pol_purchase_order_id)") \
			_T("   FROM purchase_orderline y") \
			_T("   WHERE y.pol_product_item_id = x.pol_product_item_id)) AS partner_name") \
			_T(" FROM") \
			_T(" (SELECT 2 AS transaction_type,") \
			_T(" Dept_id,") \
			_T(" Storage_id,") \
			_T(" Approval_date,") \
			_T(" unit_price,") \
			_T(" CASE") \
			_T(" WHEN object_id IN(1, 13)") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS sol_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 3") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS pol_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 2") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS solins_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 4") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS othins_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 7") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS ser_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 11") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS solcard_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id IN ( 5, 6, 8, 9, 10, 12 )") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS other_qty,") \
			_T(" line_qty total_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id IN(1, 13)") \
			_T(" THEN line_qty   * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS sol_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id = 3") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS pol_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id = 2") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS solins_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id = 4") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS othins_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id = 7") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS ser_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id = 11") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS solcard_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id IN ( 5, 6, 8, 9, 10, 12 )") \
			_T(" THEN line_qty   * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS other_amt,") \
			_T(" line_qty * unit_price AS total_amt,") \
			_T(" sitem_id,") \
			_T(" doc_type,") \
			_T(" stt,") \
			_T(" approval_clerk") \
			_T("  FROM") \
			_T("                      (") \
			_T("                          SELECT") \
			_T("                              hpo_deptid             AS dept_id,") \
			_T("                              hpo_object_id          AS object_id,") \
			_T("                              hpol_unitprice         AS unit_price,") \
			_T("                              hpol_qtyorder          AS line_qty,") \
			_T("                               hpo_storage_id AS storage_id,") \
			_T("                              hpo_approvedate AS approval_date,") \
			_T("                              hpol_product_item_id   AS sitem_id,") \
			_T("                              cast('' as nvarchar2(1)) AS doc_type,") \
			_T("                               hpo_orderstatus AS stt,") \
			_T("                              hpo_approveby          AS approval_clerk") \
			_T("                          FROM") \
			_T("                              hms_pharmaorder_view ") \
			_T("                              left JOIN HMS_PHARMAORDERLINE_VIEW4 ON ( hpo_orderid = hpol_orderid  and hpo_docno = hpol_docno)") \
			_T("                          WHERE 1=1 %s") \
			_T("                             and  hpo_orderstatus = 'A'") \
			_T("                              and hpo_doctype='PPO'") \
			_T("                             AND nvl(hpo_outpatient_order,'N') <> 'Y'") \
			_T("                              and nvl(hpo_reforder_id,0) <=0") \
			_T("                              AND hpo_ordertype NOT IN (") \
			_T("                                  'C',") \
			_T("                                  'D'") \
			_T("                              )") \
			_T("                      ) tbl_pharma") \
			_T(" UNION ALL") \
			_T(" SELECT 1 AS transaction_type,") \
			_T(" mt_department_to_id,") \
			_T(" Mt_storage_id,") \
			_T(" Mt_approveddate,") \
			_T(" mtl_saleprice,") \
			_T(" mtl_qtysold,") \
			_T(" mtl_qtypolicy,") \
			_T(" mtl_qtysoldins,") \
			_T(" mtl_qtyotherins,") \
			_T(" mtl_qtyservice,") \
			_T(" mtl_qtyother,") \
			_T(" 0,") \
			_T(" mtl_qtyorder,") \
			_T(" mtl_qtysold     * mtl_saleprice,") \
			_T(" mtl_qtypolicy   * mtl_saleprice,") \
			_T(" mtl_qtysoldins  * mtl_saleprice,") \
			_T(" mtl_qtyotherins * mtl_saleprice,") \
			_T(" mtl_qtyservice  * mtl_saleprice,") \
			_T(" mtl_qtyother    * mtl_saleprice,") \
			_T(" 0,") \
			_T(" mtl_qtyorder    * mtl_saleprice,") \
			_T(" mtl_product_item_id,") \
			_T(" mt_doctype,") \
			_T(" mt_status,") \
			_T(" mt_approvedby") \
			_T(" FROM m_transaction") \
			_T(" LEFT JOIN m_transactionline") \
			_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
			_T(" WHERE 1=1 %s and ( mt_doctype = 'DDO' or (mt_doctype = 'DMO' and mt_ordertype='M') ) ") \
			_T(" AND mt_status          = 'A'") \
			_T(" AND mtl_qtydelivery    > 0") \
			_T(" UNION ALL") \
			_T(" SELECT 16 AS transaction_type,") \
			_T(" Dept_id,") \
			_T(" storage_id,") \
			_T(" approval_date,") \
			_T(" unit_price,") \
			_T(" CASE") \
			_T(" WHEN object_id IN(1, 13)") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS sol_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 3") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS pol_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 2") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS solins_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 4") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS othins_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 7") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS ser_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 11") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS solcard_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id IN ( 5, 6, 8, 9, 10, 12 )") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS other_qty,") \
			_T(" line_qty total_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id IN(1, 13)") \
			_T(" THEN line_qty   * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS sol,") \
			_T(" CASE") \
			_T(" WHEN object_id = 3") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS pol,") \
			_T(" CASE") \
			_T(" WHEN object_id = 2") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS solins,") \
			_T(" CASE") \
			_T(" WHEN object_id = 4") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS othins,") \
			_T(" CASE") \
			_T(" WHEN object_id = 7") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS ser,") \
			_T(" CASE") \
			_T(" WHEN object_id = 11") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS solcard,") \
			_T(" CASE") \
			_T(" WHEN object_id IN ( 5, 6, 8, 9, 10, 12 )") \
			_T(" THEN line_qty   * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS other,") \
			_T(" line_qty * unit_price,") \
			_T(" sitem_id,") \
			_T(" doc_type,") \
			_T(" stt,") \
			_T(" approval_clerk") \
			_T(" FROM") \
			_T(" (") \
			_T("                          SELECT") \
			_T("                              hpo_deptid             AS dept_id,") \
			_T("                              hpo_object_id          AS object_id,") \
			_T("                              hpolr_unitprice         AS unit_price,") \
			_T("                              hpolr_qtyreverse        AS line_qty,") \
			_T("                              mt_approveddate        AS approval_date,") \
			_T("                              mt_storage_to_id         AS storage_id,") \
			_T("                              hpolr_product_item_id   AS sitem_id,") \
			_T("                              mt_approvedby          AS approval_clerk,") \
			_T("                              mt_doctype             AS doc_type,") \
			_T("                              mt_status              AS stt") \
			_T("                          FROM m_transaction") \
			_T("                          LEFT JOIN (select hpolr_docno ,hpolr_orderid, hpolr_product_item_id, hpolr_product_id,") \
			_T("                                         hpolr_qtyreverse,hpolr_retorder_id,hpolr_unitprice") \
			_T("                                 from VIMES.hms_ipharmaorderline_r") \
			_T("                                 UNION ALL ") \
			_T("                                 select hpolr_docno, hpolr_orderid, hpolr_product_item_id, hpolr_product_id,") \
			_T("                                         hpolr_qtyreverse,hpolr_retorder_id,hpolr_unitprice") \
			_T("                                         from hms_pharmaorderline_r) ON (mt_transaction_id = hpolr_retorder_id)") \
			_T("                             LEFT JOIN  hms_pharmaorder_view on (hpo_orderid = hpolr_orderid and hpo_docno = hpolr_docno)") \
			_T("                          WHERE ") \
			_T("                          1=1 %s  ") \
			_T("                             and hpolr_qtyreverse > 0") \
			_T("                              AND hpo_ordertype = 'M'") \
			_T("                              AND hpo_deptid NOT IN (") \
			_T("                                  'A14'") \
			_T("                              )") \
			_T("                      ) tbl_return") \
			_T(" ) tbl2") \
			_T(" LEFT JOIN m_productitem_view3") \
			_T(" ON ( sitem_id  = product_item_id ) %s") \
			_T(" WHERE dept_id IS NOT NULL %s") \
			_T(" GROUP BY transaction_type, %s") \
			_T(" product_id,") \
			_T(" product_uomname,") \
			_T(" unit_price,") \
			_T(" product_name, product_item_id") \
			_T(" ) tbl3") \
			_T(" GROUP BY transaction_type, %s") \
			_T("   product_id,") \
			_T("   product_name,") \
			_T("   unit_price,") \
			_T("   product_uomname,") \
			_T("   partner_name") \
			_T(" ORDER BY transaction_type, %s") \
			_T(" product_name"), szField2, szField,szWherePPO,szWhereMTrans,szWhereMTransR, szLeftJoin, szWhere, szGroupBy, szGroupBy, szOrderBy);
_tprintf(_T("%s"), szSQL);	
		return szSQL;
}
CString CPMSDepartmentUsageinDetail_108Old::GetQueryString2(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1, szWhereET, szTemp, szDept, szStorageStr, szField, szGroupBy, szOrderBy, szLeftJoin, szExportType;
	CString szIssueSQL, szReturnSQL;
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);
			
		}
	}
	for (int i = 0; i < m_wndStorageList.GetItemCount();i++)
		if (m_wndStorageList.GetCheck(i))
		{
			m_wndStorageList.SetCurSel(i);
			if (!szStorageStr.IsEmpty())
				szStorageStr += _T(", ");
			szStorageStr.AppendFormat(_T("'%s'"), m_wndStorageList.GetItemText(i, 0));
		}

		szWhere.Format(_T(" AND approval_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
						m_szFromDate, m_szToDate);
	if (!szStorageStr.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStorageStr);
			szWhere1.Format(_T(" AND mt_storage_to_id NOT IN (%s)"), szStorageStr);
		}
	if (!szDept.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id IN (%s)"), szDept);
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND approval_clerk = '%s'"), m_szClerkKey);
	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND cat.mpc_code = '%s'"), m_szItemGroupKey);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mp_producttype = '%s'"), m_szTypeKey);

	for (int i = 0; i < m_wndExportType.GetItemCount(); i++)
	{
		if (m_wndExportType.GetCheck(i))
		{
			m_wndExportType.SetCurSel(i);
			if (!szExportType.IsEmpty())
				szExportType += _T("', '");
			szExportType += m_wndExportType.GetCurrent(0);
		}
	}
	if (!szExportType.IsEmpty())
		szWhereET.AppendFormat(_T(" WHERE exporttype IN('%s')"), szExportType);
	//szWhere.AppendFormat(_T(" AND mpi_org_id = 'PM'"));
	//mtl_saleprice fixed price
	if (m_bGroupbyDept)
	{
		szField.Format(_T("sd_index, dept_id,"));
		szGroupBy.Format(_T("sd_index, dept_id,"));
		szOrderBy.Format(_T("sd_index, dept_id,"));
		szLeftJoin.Format(_T(" LEFT JOIN sys_dept ON (dept_id = sd_id)"));
	}
	else if (m_bGroupbyType)
	{
		szField.Format(_T("mp_producttype, mpt_name,"));
		szGroupBy.Format(_T("mp_producttype, mpt_name,"));
		szOrderBy.Format(_T("mp_producttype, mpt_name,"));
	}

	szSQL.Format(_T(" SELECT    1 AS transaction_type, ") \
				_T("           %s ") \
				_T("     mpi_product_id AS product_id,") \
				_T("     mp_name AS product_name,") \
				_T("     cls.mpc_name AS product_classname,") \
				_T("     unit_price,") \
				_T("     get_uomname(mp_product_uom_id) AS product_uomname,") \
				_T("           SUM(sol_qty) AS sol_qty, ") \
				_T("           SUM(pol_qty) AS pol_qty, ") \
				_T("           SUM(solins_qty) AS solins_qty, ") \
				_T("           SUM(othins_qty) AS othins_qty, ") \
				_T("           SUM(ser_qty) AS ser_qty, ") \
				_T("           SUM(solcard_qty) AS solcard_qty, ") \
				_T("           SUM(other_qty) AS other_qty, ") \
				_T("           SUM(total_qty) AS total_qty, ") \
				_T("           SUM(sol_amt) AS sol_amt, ") \
				_T("           SUM(pol_amt) AS pol_amt, ") \
				_T("           SUM(solins_amt) AS solins_amt, ") \
				_T("           SUM(othins_amt) AS othins_amt, ") \
				_T("           SUM(ser_amt) AS ser_amt, ") \
				_T("           SUM(other_amt) AS other_amt, ") \
				_T("           SUM(solcard_amt) AS solcard_amt, ") \
				_T("           SUM(total_amt) AS total_amt, exporttype,") \
				_T("   (SELECT") \
				_T("   get_partnername(po_partner_id)") \
				_T("   FROM purchase_order") \
				_T("   LEFT JOIN purchase_orderline x") \
				_T("   ON(po_purchase_order_id  = pol_purchase_order_id)") \
				_T("   WHERE x.pol_product_item_id = mpi_product_item_id AND x.pol_purchase_order_id = (SELECT MAX(pol_purchase_order_id)") \
				_T("   FROM purchase_orderline y") \
				_T("   WHERE y.pol_product_item_id = x.pol_product_item_id)) AS partner_name") \
				_T(" FROM      (SELECT Dept_id, ") \
				_T("                   Storage_id, ") \
				_T("                   Approval_date, ") \
				_T("                   unit_price, ") \
				_T("                   CASE WHEN object_id IN(1, 13) THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END sol_qty, ") \
				_T("                   CASE WHEN object_id = 3 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END pol_qty, ") \
				_T("                   CASE WHEN object_id = 2 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END solins_qty, ") \
				_T("                   CASE WHEN object_id = 4 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END othins_qty, ") \
				_T("                   CASE WHEN object_id = 7 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END ser_qty, ") \
				_T("                   CASE WHEN object_id = 11 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END solcard_qty, ") \
				_T("                   CASE WHEN object_id IN ( 5, 6, 8, 9, ") \
				_T("                                       10, 12 ) THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END other_qty, ") \
				_T("                   line_qty total_qty, ") \
				_T("                   CASE WHEN object_id IN(1, 13) THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END sol_amt, ") \
				_T("                   CASE WHEN object_id = 3 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END pol_amt, ") \
				_T("                   CASE WHEN object_id = 2 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END solins_amt, ") \
				_T("                   CASE WHEN object_id = 4 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END othins_amt, ") \
				_T("                   CASE WHEN object_id = 7 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END ser_amt, ") \
				_T("                   CASE WHEN object_id = 11 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END solcard_amt, ") \
				_T("                   CASE WHEN object_id IN ( 5, 6, 8, 9, ") \
				_T("                                       10, 12 ) THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END other_amt, ") \
				_T("                   line_qty * unit_price total_amt, ") \
				_T("                   sitem_id, ") \
				_T("				   doc_type,") \
				_T("                   stt, ") \
				_T("                   approval_clerk,  exporttype ") \
				_T("            FROM   (SELECT    so_partneraddress AS dept_id, ") \
				_T("                              7 AS object_id, ") \
				_T("                              Sol_unitprice AS unit_price, ") \
				_T("                              Sol_qtyorder AS line_qty, ") \
				_T("                              So_storage_id storage_id, ") \
				_T("                              So_approveddate approval_date, ") \
				_T("                              Sol_product_item_id sitem_id, ") \
				_T("							  so_doctype doc_type,")
				_T("                              so_status stt, ") \
				_T("                              so_approvedby approval_clerk,  CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("                    FROM      sale_order ") \
				_T("                    LEFT JOIN sale_orderline ON ( so_sale_order_id = sol_sale_order_id ) ") \
				_T("                    WHERE   0=1 and  so_doctype = 'SOO' AND so_status = 'A' AND so_partner_type_id = 'I' ") \
				_T("                    UNION ALL ") \
				_T("                    SELECT    hpo_deptid, ") \
				_T("                              Hpo_object_id, ") \
				_T("                              Hpol_unitprice, ") \
				_T("                              Hpol_qtyorder, ") \
				_T("                              CASE WHEN Coalesce(hpo_reforder_id, 0) > 0 THEN mt_storage_id ") \
				_T("                              ELSE hpo_storage_id ") \
				_T("                              END, ") \
				_T("                              CASE WHEN Coalesce(hpo_reforder_id, 0) > 0 THEN mt_approveddate ") \
				_T("                              ELSE hpo_approvedate ") \
				_T("                              END, ") \
				_T("                              Hpol_product_item_id, ") \
				_T("							  NVL(mt_doctype, 'P'),") \
				_T("                              CASE WHEN Coalesce(hpo_reforder_id, 0) > 0 THEN mt_status ") \
				_T("                              ELSE hpo_orderstatus ") \
				_T("                              END, ") \
				_T("                              hpo_approveby,  CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("         FROM (") \
				_T("         SELECT HPO_TRANSACTION_ID hpo_reforder_id,") \
				_T("         hpo_orderstatus,") \
				_T("         hpo_ordertype,") \
				_T("         hpo_approveby,") \
				_T("         hpo_approvedate,") \
				_T("         hpo_storage_id,") \
				_T("         hpo_deptid,") \
				_T("         Hpo_object_id,") \
				_T("         Hpol_unitprice,") \
				_T("         Hpol_qtyorder,") \
				_T("         Hpol_product_item_id") \
				_T("         FROM hms_pharmaorder") \
				_T("         LEFT JOIN hms_pharmaorderline") \
				_T("         ON(hpo_orderid = hpol_orderid)") \
				_T("	where 0=1  ") \
				_T("         UNION ALL") \
				_T("         SELECT HPO_TRANSACTION_ID hpo_reforder_id,") \
				_T("         hpo_orderstatus,") \
				_T("         hpo_ordertype,") \
				_T("         hpo_approveby,") \
				_T("         hpo_approvedate,") \
				_T("         hpo_storage_id,") \
				_T("         hpo_deptid,") \
				_T("         Hpo_object_id,") \
				_T("         Hpol_unitprice,") \
				_T("         Hpol_qtyorder,") \
				_T("         Hpol_product_item_id") \
				_T("         FROM hms_ipharmaorder") \
				_T("         LEFT JOIN hms_ipharmaorderline") \
				_T("         ON(hpo_orderid = hpol_orderid)") \
				_T("		WHERE  HPO_OUTPATIENT_ORDER='Y' ") \
				_T("         ) pharmaorder") \
				_T("                    LEFT JOIN m_transaction ON ( mt_transaction_id = hpo_reforder_id ) ") \
				_T("                    WHERE     hpo_orderstatus = 'A' AND hpo_ordertype <> 'C'  ") \
				_T("				    ) tbl_pharma") \
				_T("            UNION ALL ") \
				_T("            SELECT    mt_department_to_id AS dept_id, ") \
				_T("                      Mt_storage_id, ") \
				_T("                      Mt_approveddate, ") \
				_T("                      mtl_saleprice, ") \
				_T("                      mtl_qtysold, ") \
				_T("                      mtl_qtypolicy, ") \
				_T("                      mtl_qtysoldins, ") \
				_T("                      mtl_qtyotherins, ") \
				_T("                      mtl_qtyservice, ") \
				_T("                      mtl_qtyother, ") \
				_T("                      0, ") \
				_T("                      mtl_qtydelivery, ") \
				_T("                      mtl_qtysold * mtl_saleprice, ") \
				_T("                      mtl_qtypolicy * mtl_saleprice, ") \
				_T("                      mtl_qtysoldins * mtl_saleprice, ") \
				_T("                      mtl_qtyotherins * mtl_saleprice, ") \
				_T("                      mtl_qtyservice * mtl_saleprice, ") \
				_T("                      mtl_qtyother * mtl_saleprice, ") \
				_T("                      0, ") \
				_T("                      mtl_qtydelivery * mtl_saleprice, ") \
				_T("                      mtl_product_item_id, ") \
				_T("					  mt_doctype,") \
				_T("                      mt_status, ") \
				_T("                      mt_approvedby, ") \
				_T("					  CASE WHEN mt_partner_id IS NOT NULL THEN mt_partner_id WHEN mt_doctype = 'EXO' ") \
				_T("					  THEN CAST ('XK2' AS NVARCHAR2(3)) ELSE CAST ('XK' AS nvarchar2(2)) END AS exporttype ") \
				_T("            FROM      m_transaction ") \
				_T("            LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T("            WHERE   0=1 and  mt_doctype NOT IN ( 'CRO', 'DRO', 'SRO', 'PRO', ") \
				_T("                                          'DMO', 'MOV', 'BIO' ) AND mt_status = 'A' AND mtl_qtydelivery > 0 AND NVL(mtl_client_id, 'X') <> 'TT' ") \
				_T(" UNION ALL") \
				_T(" SELECT mt_department_to_id AS dept_id,") \
				_T("   Mt_storage_id,") \
				_T("   Mt_approveddate,") \
				_T("   (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtysold,") \
				_T("   mtl_qtypolicy,") \
				_T("   mtl_qtysoldins,") \
				_T("   mtl_qtyotherins,") \
				_T("   mtl_qtyservice,") \
				_T("   mtl_qtyother,") \
				_T("   0,") \
				_T("   mtl_qtydelivery,") \
				_T("   mtl_qtysold     * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtypolicy   * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtysoldins  * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtyotherins * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtyservice  * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtyother    * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   0,") \
				_T("   mtl_qtydelivery * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_product_item_id,") \
				_T("   mt_doctype,") \
				_T("   mt_status,") \
				_T("   mt_approvedby,") \
				_T("   CASE") \
				_T("     WHEN mt_partner_id IS NOT NULL") \
				_T("     THEN mt_partner_id") \
				_T("     ELSE CAST ('XDC' AS NVARCHAR2(3))") \
				_T("   END AS exporttype") \
				_T(" FROM m_transaction") \
				_T(" LEFT JOIN m_transactionline") \
				_T(" ON ( mt_transaction_id    = mtl_transaction_id )") \
				_T(" LEFT JOIN m_product_item ON ( mpi_product_item_id = mtl_product_item_id ) ") \
				_T(" WHERE mt_status           = 'A' and 0=1 ") \
				_T(" AND mt_doctype            = 'MOV' %s") \
				_T(" ) tbl_issue ") \
				_T("   LEFT JOIN m_product_item") \
				_T("   ON (mpi_product_item_id  = sitem_id)") \
				_T("   LEFT JOIN m_product") \
				_T("   ON (mp_product_id = mpi_product_id)") \
				_T("   LEFT JOIN m_product_class cls") \
				_T("   ON(mpc_product_class_id = mp_product_class_id)") \
				_T("   LEFT JOIN m_product_category cat") \
				_T("   ON(cat.mpc_product_category_id = mp_product_category_id) ") \
				_T("   LEFT JOIN m_product_type") \
				_T("   ON(mpt_product_type_id = mp_producttype) ") \
				_T(" %s") \
				_T(" WHERE 1 = 1 %s") \
				_T(" GROUP BY %s ") \
				_T("     mpi_product_id,") \
				_T("     mp_product_uom_id,") \
				_T("     unit_price,") \
				_T("     mp_name,") \
				_T("     cls.mpc_name,") \
				_T("     exporttype,") \
				_T("     mpi_product_item_id"), szField, szWhere1, szLeftJoin, szWhere, szGroupBy);
				return szSQL;

}
BEGIN_MESSAGE_MAP(CPMSDepartmentUsageinDetail_108Old, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPMSDepartmentUsageinDetail_108Old::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}

void CPMSDepartmentUsageinDetail_108Old::OnStockSetCheck(){
	m_bStockCheck = !m_bStockCheck;
	for (int i = 0; i < m_wndStorageList.GetItemCount();i++)
		m_wndStorageList.SetCheck(i, m_bStockCheck);
}

void CPMSDepartmentUsageinDetail_108Old::OnDeptSetCheck(){
	m_bDeptCheck = !m_bDeptCheck;
	for (int i = 0; i < m_wndDepartmentList.GetItemCount();i++)
		m_wndDepartmentList.SetCheck(i, m_bDeptCheck);
}

CString CPMSDepartmentUsageinDetail_108Old::GetQueryString_v2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere1, szWhereET, szTemp, szDept, szStorageStr, szField, szGroupBy, szOrderBy, szLeftJoin, szExportType;
	CString szIssueSQL, szReturnSQL;
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);
			
		}
	}
	for (int i = 0; i < m_wndStorageList.GetItemCount();i++)
		if (m_wndStorageList.GetCheck(i))
		{
			m_wndStorageList.SetCurSel(i);
			if (!szStorageStr.IsEmpty())
				szStorageStr += _T(", ");
			szStorageStr.AppendFormat(_T("'%s'"), m_wndStorageList.GetItemText(i, 0));
		}

		szWhere.Format(_T(" AND approval_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
						m_szFromDate, m_szToDate);
	if (!szStorageStr.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStorageStr);
			szWhere1.Format(_T(" AND mt_storage_to_id NOT IN (%s)"), szStorageStr);
		}
	if (!szDept.IsEmpty())
		szWhere.AppendFormat(_T(" AND dept_id IN (%s)"), szDept);
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND approval_clerk = '%s'"), m_szClerkKey);
	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND cat.mpc_code = '%s'"), m_szItemGroupKey);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mp_producttype = '%s'"), m_szTypeKey);

	for (int i = 0; i < m_wndExportType.GetItemCount(); i++)
	{
		if (m_wndExportType.GetCheck(i))
		{
			m_wndExportType.SetCurSel(i);
			if (!szExportType.IsEmpty())
				szExportType += _T("', '");
			szExportType += m_wndExportType.GetCurrent(0);
		}
	}
	if (!szExportType.IsEmpty())
		szWhereET.AppendFormat(_T(" WHERE exporttype IN('%s')"), szExportType);
	//szWhere.AppendFormat(_T(" AND mpi_org_id = 'PM'"));
	//mtl_saleprice fixed price
	if (m_bGroupbyDept)
	{
		szField.Format(_T("sd_index, dept_id,"));
		szGroupBy.Format(_T("sd_index, dept_id,"));
		szOrderBy.Format(_T("sd_index, dept_id,"));
		szLeftJoin.Format(_T(" LEFT JOIN sys_dept ON (dept_id = sd_id)"));
	}
	else if (m_bGroupbyType)
	{
		szField.Format(_T("mp_producttype, mpt_name,"));
		szGroupBy.Format(_T("mp_producttype, mpt_name,"));
		szOrderBy.Format(_T("mp_producttype, mpt_name,"));
	}

	szIssueSQL.Format(_T(" SELECT    1 AS transaction_type, ") \
				_T("           %s ") \
				_T("     mpi_product_id AS product_id,") \
				_T("     mp_name AS product_name,") \
				_T("     cls.mpc_name AS product_classname,") \
				_T("     unit_price,") \
				_T("     get_uomname(mp_product_uom_id) AS product_uomname,") \
				_T("           SUM(sol_qty) AS sol_qty, ") \
				_T("           SUM(pol_qty) AS pol_qty, ") \
				_T("           SUM(solins_qty) AS solins_qty, ") \
				_T("           SUM(othins_qty) AS othins_qty, ") \
				_T("           SUM(ser_qty) AS ser_qty, ") \
				_T("           SUM(solcard_qty) AS solcard_qty, ") \
				_T("           SUM(other_qty) AS other_qty, ") \
				_T("           SUM(total_qty) AS total_qty, ") \
				_T("           SUM(sol_amt) AS sol_amt, ") \
				_T("           SUM(pol_amt) AS pol_amt, ") \
				_T("           SUM(solins_amt) AS solins_amt, ") \
				_T("           SUM(othins_amt) AS othins_amt, ") \
				_T("           SUM(ser_amt) AS ser_amt, ") \
				_T("           SUM(other_amt) AS other_amt, ") \
				_T("           SUM(solcard_amt) AS solcard_amt, ") \
				_T("           SUM(total_amt) AS total_amt, exporttype,") \
				_T("   (SELECT") \
				_T("   get_partnername(po_partner_id)") \
				_T("   FROM purchase_order") \
				_T("   LEFT JOIN purchase_orderline x") \
				_T("   ON(po_purchase_order_id  = pol_purchase_order_id)") \
				_T("   WHERE x.pol_product_item_id = mpi_product_item_id AND x.pol_purchase_order_id = (SELECT MAX(pol_purchase_order_id)") \
				_T("   FROM purchase_orderline y") \
				_T("   WHERE y.pol_product_item_id = x.pol_product_item_id)) AS partner_name") \
				_T(" FROM      (SELECT Dept_id, ") \
				_T("                   Storage_id, ") \
				_T("                   Approval_date, ") \
				_T("                   unit_price, ") \
				_T("                   CASE WHEN object_id IN(1, 13) THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END sol_qty, ") \
				_T("                   CASE WHEN object_id = 3 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END pol_qty, ") \
				_T("                   CASE WHEN object_id = 2 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END solins_qty, ") \
				_T("                   CASE WHEN object_id = 4 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END othins_qty, ") \
				_T("                   CASE WHEN object_id = 7 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END ser_qty, ") \
				_T("                   CASE WHEN object_id = 11 THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END solcard_qty, ") \
				_T("                   CASE WHEN object_id IN ( 5, 6, 8, 9, ") \
				_T("                                       10, 12 ) THEN line_qty ") \
				_T("                   ELSE 0 ") \
				_T("                   END other_qty, ") \
				_T("                   line_qty total_qty, ") \
				_T("                   CASE WHEN object_id IN(1, 13) THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END sol_amt, ") \
				_T("                   CASE WHEN object_id = 3 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END pol_amt, ") \
				_T("                   CASE WHEN object_id = 2 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END solins_amt, ") \
				_T("                   CASE WHEN object_id = 4 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END othins_amt, ") \
				_T("                   CASE WHEN object_id = 7 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END ser_amt, ") \
				_T("                   CASE WHEN object_id = 11 THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END solcard_amt, ") \
				_T("                   CASE WHEN object_id IN ( 5, 6, 8, 9, ") \
				_T("                                       10, 12 ) THEN line_qty * unit_price ") \
				_T("                   ELSE 0 ") \
				_T("                   END other_amt, ") \
				_T("                   line_qty * unit_price total_amt, ") \
				_T("                   sitem_id, ") \
				_T("				   doc_type,") \
				_T("                   stt, ") \
				_T("                   approval_clerk,  exporttype ") \
				_T("            FROM   (SELECT    so_partneraddress AS dept_id, ") \
				_T("                              7 AS object_id, ") \
				_T("                              Sol_unitprice AS unit_price, ") \
				_T("                              Sol_qtyorder AS line_qty, ") \
				_T("                              So_storage_id storage_id, ") \
				_T("                              So_approveddate approval_date, ") \
				_T("                              Sol_product_item_id sitem_id, ") \
				_T("							  so_doctype doc_type,")
				_T("                              so_status stt, ") \
				_T("                              so_approvedby approval_clerk,  CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("                    FROM      sale_order ") \
				_T("                    LEFT JOIN sale_orderline ON ( so_sale_order_id = sol_sale_order_id ) ") \
				_T("                    WHERE     so_doctype = 'SOO' AND so_status = 'A' AND so_partner_type_id = 'I' ") \
				_T("                    UNION ALL ") \
				_T("                    SELECT    hpo_deptid, ") \
				_T("                              Hpo_object_id, ") \
				_T("                              Hpol_unitprice, ") \
				_T("                              Hpol_qtyorder, ") \
				_T("                              CASE WHEN Coalesce(hpo_reforder_id, 0) > 0 THEN mt_storage_id ") \
				_T("                              ELSE hpo_storage_id ") \
				_T("                              END, ") \
				_T("                              CASE WHEN Coalesce(hpo_reforder_id, 0) > 0 THEN mt_approveddate ") \
				_T("                              ELSE hpo_approvedate ") \
				_T("                              END, ") \
				_T("                              Hpol_product_item_id, ") \
				_T("							  NVL(mt_doctype, 'P'),") \
				_T("                              CASE WHEN Coalesce(hpo_reforder_id, 0) > 0 THEN mt_status ") \
				_T("                              ELSE hpo_orderstatus ") \
				_T("                              END, ") \
				_T("                              hpo_approveby,  CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("         FROM (") \
				_T("         SELECT HPO_TRANSACTION_ID hpo_reforder_id,") \
				_T("         hpo_orderstatus,") \
				_T("         hpo_ordertype,") \
				_T("         hpo_approveby,") \
				_T("         hpo_approvedate,") \
				_T("         hpo_storage_id,") \
				_T("         hpo_deptid,") \
				_T("         Hpo_object_id,") \
				_T("         Hpol_unitprice,") \
				_T("         Hpol_qtyorder,") \
				_T("         Hpol_product_item_id") \
				_T("         FROM hms_pharmaorder") \
				_T("         LEFT JOIN hms_pharmaorderline") \
				_T("         ON(hpo_orderid = hpol_orderid)") \
				_T("         UNION ALL") \
				_T("         SELECT HPO_TRANSACTION_ID hpo_reforder_id,") \
				_T("         hpo_orderstatus,") \
				_T("         hpo_ordertype,") \
				_T("         hpo_approveby,") \
				_T("         hpo_approvedate,") \
				_T("         hpo_storage_id,") \
				_T("         hpo_deptid,") \
				_T("         Hpo_object_id,") \
				_T("         Hpol_unitprice,") \
				_T("         Hpol_qtyorder,") \
				_T("         Hpol_product_item_id") \
				_T("         FROM hms_ipharmaorder") \
				_T("         LEFT JOIN hms_ipharmaorderline") \
				_T("         ON(hpo_orderid = hpol_orderid)") \
				_T("         ) pharmaorder") \
				_T("                    LEFT JOIN m_transaction ON ( mt_transaction_id = hpo_reforder_id ) ") \
				_T("                    WHERE     hpo_orderstatus = 'A' AND hpo_ordertype <> 'C'") \
				_T("				    ) tbl_pharma") \
				_T("            UNION ALL ") \
				_T("            SELECT    mt_department_to_id AS dept_id, ") \
				_T("                      Mt_storage_id, ") \
				_T("                      Mt_approveddate, ") \
				_T("                      mtl_saleprice, ") \
				_T("                      mtl_qtysold, ") \
				_T("                      mtl_qtypolicy, ") \
				_T("                      mtl_qtysoldins, ") \
				_T("                      mtl_qtyotherins, ") \
				_T("                      mtl_qtyservice, ") \
				_T("                      mtl_qtyother, ") \
				_T("                      0, ") \
				_T("                      mtl_qtydelivery, ") \
				_T("                      mtl_qtysold * mtl_saleprice, ") \
				_T("                      mtl_qtypolicy * mtl_saleprice, ") \
				_T("                      mtl_qtysoldins * mtl_saleprice, ") \
				_T("                      mtl_qtyotherins * mtl_saleprice, ") \
				_T("                      mtl_qtyservice * mtl_saleprice, ") \
				_T("                      mtl_qtyother * mtl_saleprice, ") \
				_T("                      0, ") \
				_T("                      mtl_qtydelivery * mtl_saleprice, ") \
				_T("                      mtl_product_item_id, ") \
				_T("					  mt_doctype,") \
				_T("                      mt_status, ") \
				_T("                      mt_approvedby, ") \
				_T("					  CASE WHEN mt_partner_id IS NOT NULL THEN mt_partner_id WHEN mt_doctype = 'EXO' ") \
				_T("					  THEN CAST ('XK2' AS NVARCHAR2(3)) ELSE CAST ('XK' AS nvarchar2(2)) END AS exporttype ") \
				_T("            FROM      m_transaction ") \
				_T("            LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T("            WHERE     mt_doctype NOT IN ( 'CRO', 'DRO', 'SRO', 'PRO', ") \
				_T("                                          'DMO', 'MOV', 'BIO' ) AND mt_status = 'A' AND mtl_qtydelivery > 0 AND NVL(mtl_client_id, 'X') <> 'TT' ") \
				_T(" UNION ALL") \
				_T(" SELECT mt_department_to_id AS dept_id,") \
				_T("   Mt_storage_id,") \
				_T("   Mt_approveddate,") \
				_T("   (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtysold,") \
				_T("   mtl_qtypolicy,") \
				_T("   mtl_qtysoldins,") \
				_T("   mtl_qtyotherins,") \
				_T("   mtl_qtyservice,") \
				_T("   mtl_qtyother,") \
				_T("   0,") \
				_T("   mtl_qtydelivery,") \
				_T("   mtl_qtysold     * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtypolicy   * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtysoldins  * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtyotherins * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtyservice  * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_qtyother    * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   0,") \
				_T("   mtl_qtydelivery * (mtl_unitprice + (mtl_unitprice * mpi_taxrate)),") \
				_T("   mtl_product_item_id,") \
				_T("   mt_doctype,") \
				_T("   mt_status,") \
				_T("   mt_approvedby,") \
				_T("   CASE") \
				_T("     WHEN mt_partner_id IS NOT NULL") \
				_T("     THEN mt_partner_id") \
				_T("     ELSE CAST ('XDC' AS NVARCHAR2(3))") \
				_T("   END AS exporttype") \
				_T(" FROM m_transaction") \
				_T(" LEFT JOIN m_transactionline") \
				_T(" ON ( mt_transaction_id    = mtl_transaction_id )") \
				_T(" LEFT JOIN m_product_item ON ( mpi_product_item_id = mtl_product_item_id ) ") \
				_T(" WHERE mt_status           = 'A'") \
				_T(" AND mt_doctype            = 'MOV' %s") \
				_T(" ) tbl_issue ") \
				_T("   LEFT JOIN m_product_item") \
				_T("   ON (mpi_product_item_id  = sitem_id)") \
				_T("   LEFT JOIN m_product") \
				_T("   ON (mp_product_id = mpi_product_id)") \
				_T("   LEFT JOIN m_product_class cls") \
				_T("   ON(mpc_product_class_id = mp_product_class_id)") \
				_T("   LEFT JOIN m_product_category cat") \
				_T("   ON(cat.mpc_product_category_id = mp_product_category_id) ") \
				_T("   LEFT JOIN m_product_type") \
				_T("   ON(mpt_product_type_id = mp_producttype) ") \
				_T(" %s") \
				_T(" WHERE 1 = 1 %s") \
				_T(" GROUP BY %s ") \
				_T("     mpi_product_id,") \
				_T("     mp_product_uom_id,") \
				_T("     unit_price,") \
				_T("     mp_name,") \
				_T("     cls.mpc_name,") \
				_T("     exporttype,") \
				_T("     mpi_product_item_id"), szField, szWhere1, szLeftJoin, szWhere, szGroupBy);

	szReturnSQL.Format(_T(" SELECT    16 AS transaction_type, ") \
				_T("           %s ") \
				_T("     mpi_product_id AS product_id,") \
				_T("     mp_name AS product_name,") \
				_T("     cls.mpc_name AS product_classname,") \
				_T("     unit_price,") \
				_T("     get_uomname(mp_product_uom_id) AS product_uomname,") \
				_T("           SUM(sol_qty) sol_qty, ") \
				_T("           SUM(pol_qty) pol_qty, ") \
				_T("           SUM(solins_qty) solins_qty, ") \
				_T("           SUM(othins_qty) othins_qty, ") \
				_T("           SUM(ser_qty) ser_qty, ") \
				_T("           SUM(other_qty) other_qty, ") \
				_T("           SUM(solcard_qty) AS solcard_qty, ") \
				_T("           SUM(total_qty) total_qty, ") \
				_T("           SUM(sol) sol, ") \
				_T("           SUM(pol) pol, ") \
				_T("           SUM(solins) solins, ") \
				_T("           SUM(othins) othins, ") \
				_T("           SUM(ser) ser, ") \
				_T("           SUM(other) other, ") \
				_T("           SUM(solcard) AS solcard, ") \
				_T("           SUM(total) total,  exporttype, ") \
				_T("   (SELECT") \
				_T("   get_partnername(po_partner_id)") \
				_T("   FROM purchase_order") \
				_T("   LEFT JOIN purchase_orderline x") \
				_T("   ON(po_purchase_order_id  = pol_purchase_order_id)") \
				_T("   WHERE x.pol_product_item_id = mpi_product_item_id AND x.pol_purchase_order_id = (SELECT MAX(pol_purchase_order_id)") \
				_T("   FROM purchase_orderline y") \
				_T("   WHERE y.pol_product_item_id = x.pol_product_item_id)) AS partner_name") \
				_T(" FROM (") \
				_T("	SELECT sitem_id, ") \
				_T("		   dept_id,") \
				_T("		   approval_date,") \
				_T("		   storage_id,") \
				_T("		   doc_type,") \
				_T("		   stt,") \
				_T("		   approval_clerk,") \
				_T("		   unit_price,") \
				_T("           CASE WHEN object_id IN(1, 13) THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END sol_qty, ") \
				_T("           CASE WHEN object_id = 3 THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END pol_qty, ") \
				_T("           CASE WHEN object_id = 2 THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END solins_qty, ") \
				_T("           CASE WHEN object_id = 4 THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END othins_qty, ") \
				_T("           CASE WHEN object_id = 7 THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END ser_qty, ") \
				_T("           CASE WHEN object_id = 11 THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END solcard_qty, ") \
				_T("           CASE WHEN object_id IN ( 5, 6, 8, 9, ") \
				_T("                                   10, 12 ) THEN line_qty ") \
				_T("               ELSE 0 ") \
				_T("               END other_qty, ") \
				_T("           line_qty total_qty, ") \
				_T("           CASE WHEN object_id IN(1, 13) THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END sol, ") \
				_T("           CASE WHEN object_id = 3 THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END pol, ") \
				_T("           CASE WHEN object_id = 2 THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END solins, ") \
				_T("           CASE WHEN object_id = 4 THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END othins, ") \
				_T("           CASE WHEN object_id = 7 THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END ser, ") \
				_T("           CASE WHEN object_id = 11 THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END solcard, ") \
				_T("           CASE WHEN object_id IN ( 5, 6, 8, 9, ") \
				_T("                                   10, 12 ) THEN line_qty * unit_price ") \
				_T("               ELSE 0 ") \
				_T("               END other, ") \
				_T("           line_qty * unit_price total,   exporttype ") \
				_T("	FROM      (SELECT    hpo.Hpo_deptid AS dept_id, ") \
				_T("                      Hpo.Hpo_object_id AS object_id, ") \
				_T("                      Hpol_unitprice unit_price, ") \
				_T("                      Hpol_qtyreturn line_qty, ") \
				_T("                      Hpo_approveddate approval_date, ") \
				_T("                      hpo.Hpo_storage_id storage_id, ") \
				_T("                      hpol_product_item_id sitem_id, ") \
				_T("					  hpo_approvedby approval_clerk,") \
				_T("					  cast('P' as NVARCHAR2(1)) doc_type,") \
				_T("                      hpro.hpo_status stt,   CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("            FROM      hms_pharmareturnorder hpro ") \
				_T("            LEFT JOIN hms_pharmareturnorder_line ON ( hpro.hpo_pharmareturnorder_id = hpol_pharmareturnorder_id ) ") \
				_T("            LEFT JOIN hms_pharmaorder hpo ON ( hpo.hpo_docno = hpro.hpo_docno AND hpo.hpo_orderid = hpro.hpo_orderid ) ") \
				_T("			WHERE hpro.hpo_status = 'A'") \
				_T("            UNION ALL ") \
				_T("            SELECT    Hpo_deptid, ") \
				_T("                      Hpo_object_id, ") \
				_T("                      Hpol_unitprice, ") \
				_T("                      Hpol_qtyreverse, ") \
				_T("                      Mt_approveddate, ") \
				_T("                      Hpo_storage_id, ") \
				_T("                      Hpol_product_item_id sitem_id, ") \
				_T("					  mt_approvedby,") \
				_T("					  mt_doctype,") \
				_T("                      mt_status,   CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("            FROM      hms_ipharmaorder ") \
				_T("            LEFT JOIN hms_ipharmaorderline ON ( hpo_orderid = hpol_orderid ) ") \
				_T("            LEFT JOIN m_transaction ON ( mt_transaction_id = hpol_retorder_id ) ") \
				_T("            WHERE     hpol_qtyreverse > 0 AND mt_status = 'A') tbl_pharma ") \
				_T("    UNION ALL ") \
				_T("    SELECT    mtl_product_item_id, ") \
				_T("		   mt_department_id,") \
				_T("		   mt_approveddate,") \
				_T("		   mt_storage_to_id,") \
				_T("           mt_doctype,") \
				_T("		   mt_status,") \
				_T("		   mt_approvedby,") \
				_T("		   mtl_saleprice,") \
				_T("      mtl_qtysold, ") \
				_T("      mtl_qtypolicy, ") \
				_T("      mtl_qtysoldins, ") \
				_T("      mtl_qtyotherins, ") \
				_T("      mtl_qtyservice, ") \
				_T("      mtl_qtyother, ") \
				_T("      0, ") \
				_T("      mtl_qtyorder, ") \
				_T("      mtl_qtysold * mtl_saleprice, ") \
				_T("      mtl_qtypolicy * mtl_saleprice, ") \
				_T("      mtl_qtysoldins * mtl_saleprice, ") \
				_T("      mtl_qtyotherins * mtl_saleprice, ") \
				_T("      mtl_qtyservice * mtl_saleprice, ") \
				_T("      mtl_qtyother * mtl_saleprice, ") \
				_T("      0, ") \
				_T("      mtl_qtyorder * mtl_saleprice, CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("    FROM      m_transaction ") \
				_T("    LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T("    WHERE     mt_doctype = 'CRO' AND mt_status = 'A' AND mtl_qtydelivery > 0 ") \
				_T("	  UNION ALL ") \
				_T("    SELECT    mtl_product_item_id, ") \
				_T("		   mt_department_id,") \
				_T("		   mt_approveddate,") \
				_T("		   mt_storage_to_id,") \
				_T("           mt_doctype,") \
				_T("		   mt_status,") \
				_T("		   mt_approvedby,") \
				_T("		   mtl_saleprice,") \
				_T("      mtl_qtysold, ") \
				_T("      mtl_qtypolicy, ") \
				_T("      mtl_qtysoldins, ") \
				_T("      mtl_qtyotherins, ") \
				_T("      mtl_qtyservice, ") \
				_T("      mtl_qtyother, ") \
				_T("      0, ") \
				_T("      mtl_qtyorder, ") \
				_T("      mtl_qtysold * mtl_saleprice, ") \
				_T("      mtl_qtypolicy * mtl_saleprice, ") \
				_T("      mtl_qtysoldins * mtl_saleprice, ") \
				_T("      mtl_qtyotherins * mtl_saleprice, ") \
				_T("      mtl_qtyservice * mtl_saleprice, ") \
				_T("      mtl_qtyother * mtl_saleprice, ") \
				_T("      0, ") \
				_T("      mtl_qtyorder * mtl_saleprice, CAST ('XK' AS nvarchar2(2)) AS exporttype ") \
				_T("    FROM      m_transaction ") \
				_T("    LEFT JOIN m_transactionline ON ( mt_transaction_id = mtl_transaction_id ) ") \
				_T("	LEFT JOIN hms_ipharmaorderline_r ON (nvl(hpolr_retorder_id,0) = mt_transaction_id) ") \
				_T("    WHERE     mt_doctype = 'DRO' AND mt_status = 'A' AND mtl_qtydelivery > 0 and nvl(hpolr_retorder_id,0) =0  ) tbl_return") \
				_T("   LEFT JOIN m_product_item") \
				_T("   ON (mpi_product_item_id  = sitem_id)") \
				_T("   LEFT JOIN m_product") \
				_T("   ON (mp_product_id = mpi_product_id)") \
				_T("   LEFT JOIN m_product_class cls") \
				_T("   ON(mpc_product_class_id = mp_product_class_id)") \
				_T("   LEFT JOIN m_product_category cat") \
				_T("   ON(cat.mpc_product_category_id = mp_product_category_id) ") \
				_T("   LEFT JOIN m_product_type") \
				_T("   ON(mpt_product_type_id = mp_producttype) ") \
				_T(" %s") \
				_T(" WHERE dept_id IS NOT NULL %s") \
				_T(" GROUP BY %s ") \
				_T("     mpi_product_id,") \
				_T("     mp_product_uom_id,") \
				_T("     unit_price,") \
				_T("     mp_name,") \
				_T("     cls.mpc_name,") \
				_T("     exporttype,") \
				_T("     mpi_product_item_id"), szField, szLeftJoin, szWhere, szGroupBy);

				szSQL.Format(_T(" SELECT") \
					_T("     transaction_type, %s") \
					_T("     product_id,") \
					_T("     product_name,") \
					_T("     product_classname,") \
					_T("     unit_price,") \
					_T("     product_uomname,") \
					_T("     SUM(sol_qty)     AS sol_qty,") \
					_T("     SUM(pol_qty)     AS pol_qty,") \
					_T("     SUM(solins_qty)  AS solins_qty,") \
					_T("     SUM(othins_qty)  AS othins_qty,") \
					_T("     SUM(ser_qty)     AS ser_qty,") \
					_T("     SUM(solcard_qty) AS solcard_qty,") \
					_T("     SUM(other_qty)   AS other_qty,") \
					_T("     SUM(total_qty)   AS total_qty,") \
					_T("     SUM(sol_amt)     AS sol_amt,") \
					_T("     SUM(pol_amt)     AS pol_amt,") \
					_T("     SUM(solins_amt)  AS solins_amt,") \
					_T("     SUM(othins_amt)  AS othins_amt,") \
					_T("     SUM(ser_amt)     AS ser_amt,") \
					_T("     SUM(other_amt)   AS other_amt,") \
					_T("     SUM(solcard_amt) AS solcard_amt,") \
					_T("     SUM(total_amt)   AS total_amt,") \
					_T("     exporttype,") \
					_T("     partner_name") \
					_T(" FROM (") \
					_T(" %s") \
					_T(" UNION ALL") \
					_T(" %s) %s") \
					_T(" GROUP BY transaction_type, %s") \
					_T("     product_id,") \
					_T("     product_name,") \
					_T("     product_classname,") \
					_T("     unit_price,") \
					_T("     product_uomname,") \
					_T("     exporttype,") \
					_T("     partner_name") \
					_T(" ORDER BY transaction_type, %s product_name"), szField, szIssueSQL, szReturnSQL, szWhereET, szGroupBy, szOrderBy);
	return szSQL;
}

CString CPMSDepartmentUsageinDetail_108Old::GetQueryString1_v2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szTemp, szDept, szStorageStr, szField, szField2, szGroupBy, szOrderBy, szLeftJoin;
	CString szIssueSQL, szReturnSQL;
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDept.IsEmpty())
				szDept += _T(", ");
			szDept.AppendFormat(_T("'%s'"), szTemp);

		}
	}
	for (int i = 0; i < m_wndStorageList.GetItemCount();i++)
		if (m_wndStorageList.GetCheck(i))
		{
			m_wndStorageList.SetCurSel(i);
			if (!szStorageStr.IsEmpty())
				szStorageStr += _T(", ");
			szStorageStr.AppendFormat(_T("'%s'"), m_wndStorageList.GetItemText(i, 0));
		}

		szWhere.Format(_T(" AND approval_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
			m_szFromDate, m_szToDate);
		if (!szStorageStr.IsEmpty())
			szWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStorageStr);
		if (!szDept.IsEmpty())
			szWhere.AppendFormat(_T(" AND dept_id IN (%s)"), szDept);
		if (!m_szClerkKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND approval_clerk = '%s'"), m_szClerkKey);
		if (!m_szItemGroupKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND product_rootid = '%s'"), m_szItemGroupKey);
		if (!m_szTypeKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
		//szWhere.AppendFormat(_T(" AND product_org_id = 'PM'"));
		//mtl_saleprice fixed price
		if (m_bGroupbyDept)
		{
			szField.Format(_T("sd_index, CASE WHEN transaction_type = 2 THEN CAST('X' AS NVARCHAR2(1)) WHEN transaction_type = 16 THEN CAST('Y' AS NVARCHAR2(1)) ELSE dept_id END AS dept_id,"));
			szField2.Format(_T("sd_index, dept_id,"));
			szGroupBy.Format(_T("sd_index, dept_id,"));
			szOrderBy.Format(_T("sd_index, dept_id,"));
			szLeftJoin.Format(_T(" LEFT JOIN sys_dept ON (dept_id = sd_id)"));
		}
		else if (m_bGroupbyType)
		{
			szField.Format(_T("product_groupid, product_groupname,"));
			szField2.Format(_T("product_groupid, product_groupname,"));
			szGroupBy.Format(_T("product_groupid, product_groupname,"));
			szOrderBy.Format(_T("product_groupid, product_groupname,"));
		}

		szSQL.Format(_T(" SELECT") \
			_T("   transaction_type, %s") \
			_T("   product_id,") \
			_T("   product_name,") \
			_T("   unit_price,") \
			_T("   product_uomname,") \
			_T("   SUM(sol_qty)     AS sol_qty,") \
			_T("   SUM(pol_qty)     AS pol_qty,") \
			_T("   SUM(solins_qty)  AS solins_qty,") \
			_T("   SUM(othins_qty)  AS othins_qty,") \
			_T("   SUM(ser_qty)     AS ser_qty,") \
			_T("   SUM(other_qty)   AS other_qty,") \
			_T("   SUM(solcard_qty) AS solcard_qty,") \
			_T("   SUM(total_qty)   AS total_qty,") \
			_T("   SUM(sol_amt)     AS sol_amt,") \
			_T("   SUM(pol_amt)     AS pol_amt,") \
			_T("   SUM(solins_amt)  AS solins_amt,") \
			_T("   SUM(othins_amt)  AS othins_amt,") \
			_T("   SUM(ser_amt)     AS ser_amt,") \
			_T("   SUM(other_amt)   AS other_amt,") \
			_T("   SUM(solcard_amt) AS solcard_amt,") \
			_T("   SUM(total_amt)   AS total_amt,") \
			_T("   partner_name") \
			_T(" FROM") \
			_T(" (") \
			_T(" SELECT transaction_type, %s") \
			_T(" product_id,") \
			_T(" product_name,") \
			_T(" unit_price,") \
			_T(" product_uomname,") \
			_T(" SUM(sol_qty) AS sol_qty,") \
			_T(" SUM(pol_qty) AS pol_qty,") \
			_T(" SUM(solins_qty) AS solins_qty,") \
			_T(" SUM(othins_qty) AS othins_qty,") \
			_T(" SUM(ser_qty) AS ser_qty,") \
			_T(" SUM(other_qty) AS other_qty,") \
			_T(" SUM(solcard_qty) AS solcard_qty,") \
			_T(" SUM(total_qty) AS total_qty,") \
			_T(" SUM(sol_amt) AS sol_amt,") \
			_T(" SUM(pol_amt) AS pol_amt,") \
			_T(" SUM(solins_amt) AS solins_amt,") \
			_T(" SUM(othins_amt) AS othins_amt,") \
			_T(" SUM(ser_amt) AS ser_amt,") \
			_T(" SUM(other_amt) AS other_amt,") \
			_T(" SUM(solcard_amt) AS solcard_amt,") \
			_T(" SUM(total_amt) AS total_amt,") \
			_T("   (SELECT") \
			_T("   get_partnername(po_partner_id)") \
			_T("   FROM purchase_order") \
			_T("   WHERE po_purchase_order_id = (SELECT MAX(pol_purchase_order_id)") \
			_T("   FROM purchase_orderline") \
			_T("   WHERE pol_product_id = product_id and pol_product_item_id = product_item_id)) AS partner_name") \
			_T(" FROM") \
			_T(" (SELECT 2 AS transaction_type,") \
			_T(" Dept_id,") \
			_T(" Storage_id,") \
			_T(" Approval_date,") \
			_T(" unit_price,") \
			_T(" CASE") \
			_T(" WHEN object_id IN(1, 13)") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS sol_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 3") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS pol_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 2") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS solins_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 4") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS othins_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 7") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS ser_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 11") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS solcard_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id IN ( 5, 6, 8, 9, 10, 12 )") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS other_qty,") \
			_T(" line_qty total_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id IN(1, 13)") \
			_T(" THEN line_qty   * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS sol_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id = 3") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS pol_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id = 2") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS solins_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id = 4") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS othins_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id = 7") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS ser_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id = 11") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS solcard_amt,") \
			_T(" CASE") \
			_T(" WHEN object_id IN ( 5, 6, 8, 9, 10, 12 )") \
			_T(" THEN line_qty   * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS other_amt,") \
			_T(" line_qty * unit_price AS total_amt,") \
			_T(" sitem_id,") \
			_T(" doc_type,") \
			_T(" stt,") \
			_T(" approval_clerk") \
			_T(" FROM") \
			_T(" (SELECT hpo_deptid AS dept_id,") \
			_T(" Hpo_object_id    AS object_id,") \
			_T(" Hpol_unitprice   AS unit_price,") \
			_T(" Hpol_qtyorder    AS line_qty,") \
			_T(" hpo_storage_id AS storage_id,") \
			_T(" hpo_approvedate AS approval_date,") \
			_T(" Hpol_product_item_id AS sitem_id,") \
			_T(" cast('P' as nvarchar2(1)) AS doc_type,") \
			_T(" hpo_orderstatus AS stt,") \
			_T(" hpo_approveby AS approval_clerk") \
			_T(" FROM hms_pharmaorder_view") \
			_T(" LEFT JOIN hms_pharmaorderlinea_view") \
			_T(" ON ( hpo_orderid = hpol_orderid )") \
			_T(" LEFT JOIN m_transaction") \
			_T(" ON ( mt_transaction_id        = hpo_reforder_id )") \
			_T(" WHERE hpo_orderstatus         = 'A'") \
			_T(" AND hpo_ordertype            NOT IN('C', 'D') AND hpo_reforder_id = 0") \
			_T(" UNION ALL") \
			_T("  SELECT    hpo_deptid AS dept_id,") \
			_T("            hpo_object_id AS object_id,") \
			_T("            hpol_unitprice AS unit_price,") \
			_T("            hpol_qtyorder AS line_qty,") \
			_T("            mt_storage_id AS storage_id,") \
			_T("            mt_approveddate AS approval_date,") \
			_T("            hpol_product_item_id AS sitem_id,") \
			_T("            mt_doctype AS doc_type,") \
			_T("            mt_status AS stt,") \
			_T("            hpo_approveby AS approval_clerk") \
			_T("  FROM      m_transaction") \
			_T("  LEFT JOIN hms_pharmaorder_view ON ( mt_transaction_id = hpo_reforder_id )") \
			_T("  LEFT JOIN hms_pharmaorderlinea_view ON ( hpo_docno = hpol_docno AND") \
			_T("                                           hpo_orderid = hpol_orderid )") \
			_T("  WHERE     1 = 1 AND mt_status = 'A' AND hpo_orderstatus = 'A' AND") \
			_T("            hpo_ordertype NOT IN ( 'C', 'D' )") \
			_T(" ) tbl_pharma") \
			_T(" UNION ALL") \
			_T(" SELECT 1 AS transaction_type,") \
			_T(" mt_department_to_id,") \
			_T(" Mt_storage_id,") \
			_T(" Mt_approveddate,") \
			_T(" mtl_saleprice,") \
			_T(" mtl_qtysold,") \
			_T(" mtl_qtypolicy,") \
			_T(" mtl_qtysoldins,") \
			_T(" mtl_qtyotherins,") \
			_T(" mtl_qtyservice,") \
			_T(" mtl_qtyother,") \
			_T(" 0,") \
			_T(" mtl_qtyorder,") \
			_T(" mtl_qtysold     * mtl_saleprice,") \
			_T(" mtl_qtypolicy   * mtl_saleprice,") \
			_T(" mtl_qtysoldins  * mtl_saleprice,") \
			_T(" mtl_qtyotherins * mtl_saleprice,") \
			_T(" mtl_qtyservice  * mtl_saleprice,") \
			_T(" mtl_qtyother    * mtl_saleprice,") \
			_T(" 0,") \
			_T(" mtl_qtyorder    * mtl_saleprice,") \
			_T(" mtl_product_item_id,") \
			_T(" mt_doctype,") \
			_T(" mt_status,") \
			_T(" mt_approvedby") \
			_T(" FROM m_transaction") \
			_T(" LEFT JOIN m_transactionline") \
			_T(" ON ( mt_transaction_id = mtl_transaction_id )") \
			_T(" WHERE mt_doctype      IN ( 'DDO' )") \
			_T(" AND mt_status          = 'A'") \
			_T(" AND mtl_qtydelivery    > 0") \
			_T(" UNION ALL") \
			_T(" SELECT 16 AS transaction_type,") \
			_T(" Dept_id,") \
			_T(" storage_id,") \
			_T(" approval_date,") \
			_T(" unit_price,") \
			_T(" CASE") \
			_T(" WHEN object_id IN(1, 13)") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS sol_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 3") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS pol_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 2") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS solins_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 4") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS othins_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 7") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS ser_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id = 11") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS solcard_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id IN ( 5, 6, 8, 9, 10, 12 )") \
			_T(" THEN line_qty") \
			_T(" ELSE 0") \
			_T(" END AS other_qty,") \
			_T(" line_qty total_qty,") \
			_T(" CASE") \
			_T(" WHEN object_id IN(1, 13)") \
			_T(" THEN line_qty   * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS sol,") \
			_T(" CASE") \
			_T(" WHEN object_id = 3") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS pol,") \
			_T(" CASE") \
			_T(" WHEN object_id = 2") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS solins,") \
			_T(" CASE") \
			_T(" WHEN object_id = 4") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS othins,") \
			_T(" CASE") \
			_T(" WHEN object_id = 7") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS ser,") \
			_T(" CASE") \
			_T(" WHEN object_id = 11") \
			_T(" THEN line_qty * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS solcard,") \
			_T(" CASE") \
			_T(" WHEN object_id IN ( 5, 6, 8, 9, 10, 12 )") \
			_T(" THEN line_qty   * unit_price") \
			_T(" ELSE 0") \
			_T(" END AS other,") \
			_T(" line_qty * unit_price,") \
			_T(" sitem_id,") \
			_T(" doc_type,") \
			_T(" stt,") \
			_T(" approval_clerk") \
			_T(" FROM") \
			_T(" (") \
			_T(" SELECT Hpo_deptid AS dept_id,") \
			_T(" Hpo_object_id AS object_id,") \
			_T(" Hpol_unitprice AS unit_price,") \
			_T(" Hpol_qtyreverse AS line_qty,") \
			_T(" Mt_approveddate AS approval_date,") \
			_T(" Hpo_storage_id AS storage_id,") \
			_T(" Hpol_product_item_id AS sitem_id,") \
			_T(" mt_approvedby AS approval_clerk,") \
			_T(" mt_doctype AS doc_type,") \
			_T(" mt_status AS stt") \
			_T(" FROM hms_ipharmaorder") \
			_T(" LEFT JOIN hms_ipharmaorderline") \
			_T(" ON ( hpo_orderid = hpol_orderid )") \
			_T(" LEFT JOIN m_transaction") \
			_T(" ON ( mt_transaction_id = hpol_retorder_id )") \
			_T(" WHERE hpol_qtyreverse  > 0") \
			_T(" AND hpo_ordertype = 'M' ") \
			_T(" AND hpo_deptid NOT    IN ('A14')") \
			_T(" ) tbl_return") \
			_T(" ) tbl2") \
			_T(" LEFT JOIN m_productitem_view3") \
			_T(" ON ( sitem_id  = product_item_id ) %s") \
			_T(" WHERE dept_id IS NOT NULL %s") \
			_T(" GROUP BY transaction_type, %s") \
			_T(" product_id,") \
			_T(" product_uomname,") \
			_T(" unit_price,") \
			_T(" product_name, product_item_id") \
			_T(" ) tbl3") \
			_T(" GROUP BY transaction_type, %s") \
			_T("   product_id,") \
			_T("   product_name,") \
			_T("   unit_price,") \
			_T("   product_uomname,") \
			_T("   partner_name") \
			_T(" ORDER BY transaction_type, %s") \
			_T(" product_name"), szField2, szField, szLeftJoin, szWhere, szGroupBy, szGroupBy, szOrderBy);
_tprintf(_T("%s"), szSQL);	
		return szSQL;
}

CString CPMSDepartmentUsageinDetail_108Old::GetQueryString2_v2()
{
	return _T("");	
}