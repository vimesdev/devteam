#include "stdafx.h"
#include "PMMaterialFinalAccount.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMMaterialFinalAccount *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMMaterialFinalAccount *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMMaterialFinalAccount* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMMaterialFinalAccount *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnStorageAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMMaterialFinalAccount* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPMMaterialFinalAccount *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMMaterialFinalAccount *pVw = (CPMMaterialFinalAccount *)pWnd;
	pVw->OnExportSelect();
}
static void _OnDrugSelectFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount*)pWnd)->OnDrugSelect();
}
static void _OnMaterialSelectFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount*)pWnd)->OnMaterialSelect();
}
static void _OnAddPXSelectFnc(CWnd *pWnd){
	((CPMMaterialFinalAccount*)pWnd)->OnAddPXSelect();
}
CPMMaterialFinalAccount::CPMMaterialFinalAccount(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMMaterialFinalAccount::~CPMMaterialFinalAccount(){
}
void CPMMaterialFinalAccount::OnCreateComponents(){
	m_wndMaterialFinalAccount.Create(this, _T("Material Final Account"), 5, 5, 445, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 310, 55);
	m_wndToDate.Create(this,315, 30, 440, 55);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.SetCheckBox(TRUE);
	m_wndStorage.Create(this,95, 60, 440, 85);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 90, 115);
	m_wndDepartment.Create(this,95, 90, 440, 115);
	m_wndDrug.Create(this, _T("Drug"), 5, 125, 85, 150);
	m_wndMaterial.Create(this, _T("Material"), 90, 125, 190, 150);
	m_wndExport.Create(this, _T("&Export"), 365, 125, 445, 150);
	m_wndAddPX.Create(this, _T("AddPX"), 195, 125, 325, 150);

}
void CPMMaterialFinalAccount::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndDepartment.InsertColumn(1, _T("Department"), CFMT_TEXT, 250);

}
void CPMMaterialFinalAccount::OnSetWindowEvents(){
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndAddPX.SetEvent(WE_CLICK, _OnAddPXSelectFnc);
	m_wndDrug.SetEvent(WE_CLICK, _OnDrugSelectFnc);
	m_wndMaterial.SetEvent(WE_CLICK, _OnMaterialSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CPMMaterialFinalAccount::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Check(pDX, m_wndDrug.GetDlgCtrlID(), m_bDrug);
	DDX_Check(pDX, m_wndMaterial.GetDlgCtrlID(), m_bMaterial);
	DDX_Check(pDX, m_wndAddPX.GetDlgCtrlID(), m_bAddPX);

}
void CPMMaterialFinalAccount::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();
	m_szDepartmentKey.Empty();
	m_bDrug = false;
	m_bMaterial = false;
	m_bAddPX=FALSE;

}
int CPMMaterialFinalAccount::SetMode(int nMode){
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
/*void CPMMaterialFinalAccount::OnFromDateChange(){
	
} */
/*void CPMMaterialFinalAccount::OnFromDateSetfocus(){
	
} */
/*void CPMMaterialFinalAccount::OnFromDateKillfocus(){
	
} */
int CPMMaterialFinalAccount::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMMaterialFinalAccount::OnToDateChange(){
	
} */
/*void CPMMaterialFinalAccount::OnToDateSetfocus(){
	
} */
/*void CPMMaterialFinalAccount::OnToDateKillfocus(){
	
} */
int CPMMaterialFinalAccount::OnToDateCheckValue(){
	return 0;
} 
void CPMMaterialFinalAccount::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMMaterialFinalAccount::OnStorageSelendok(){
	 
}
/*void CPMMaterialFinalAccount::OnStorageSetfocus(){
	
}*/
/*void CPMMaterialFinalAccount::OnStorageKillfocus(){
	
}*/
long CPMMaterialFinalAccount::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStorages;

	if(pMF->GetModuleID() != _T("PM"))
		{

	szSQL.Format(_T("SELECT mup_stocks FROM m_userperm WHERE mup_userid='%s'"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("mup_stocks"), szStorages);

			szWhere.AppendFormat(_T(" AND msl_storage_id IN(%s) "), szStorages);
		}

	if(m_wndStorage.IsSearchKey() && ToInt(m_szStorageKey) > 0){
		szWhere.AppendFormat(_T(" and msl_storage_id='%s' "), m_szStorageKey);
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist ") \
		_T("WHERE msl_isactive = 'Y' AND msl_type = 'C' AND msl_category IN ('A', 'I', 'S', 'P') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMMaterialFinalAccount::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMMaterialFinalAccount::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMMaterialFinalAccount::OnDepartmentSelendok(){
	 
}
/*void CPMMaterialFinalAccount::OnDepartmentSetfocus(){
	
}*/
/*void CPMMaterialFinalAccount::OnDepartmentKillfocus(){
	
}*/
long CPMMaterialFinalAccount::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndDepartment.IsSearchKey() && ToInt(m_szDepartmentKey) > 0){
	 szWhere.Format(_T(" AND sd_id = '%s' "), m_szDepartmentKey);
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept WHERE sd_type IN('KB','DT','XN','HA') %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMMaterialFinalAccount::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMMaterialFinalAccount::OnAddPXSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMMaterialFinalAccount::OnDrugSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	//if(m_bDrug)
	//{
	//	m_bMaterial = FALSE;
	//}
	//UpdateData(false);
	m_wndMaterial.SetCheck(!m_bDrug);
}
void CPMMaterialFinalAccount::OnMaterialSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	//if(m_bMaterial)
	//{
	//	m_bDrug = FALSE;
	//}
	//UpdateData(false);
	m_wndDrug.SetCheck(!m_bMaterial);
}
void CPMMaterialFinalAccount::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	int nCol = 0, nRow = 0;
	double nTemp = 0;
	double nTotal[6];
	for(int i = 1; i < 6; i++)
	{
		nTotal[i] = 0;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 30);
	xls.SetColumnWidth(1, 3);
	xls.SetColumnWidth(2, 5);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 5);
	xls.SetColumnWidth(5, 5);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 5);
	xls.SetColumnWidth(8, 5);
	xls.SetColumnWidth(9, 5);
	xls.SetColumnWidth(10, 5);
	xls.SetColumnWidth(11, 5);
	xls.SetColumnWidth(12, 5);
	xls.SetColumnWidth(13, 5);
	xls.SetColumnWidth(14, 10);
	xls.SetColumnWidth(15, 5);
	xls.SetColumnWidth(16, 5);
	xls.SetColumnWidth(17, 5);
	xls.SetColumnWidth(18, 5);
	xls.SetColumnWidth(19, 5);
	xls.SetColumnWidth(20, 5);
	xls.SetColumnWidth(21, 5);
	xls.SetColumnWidth(22, 5);
	xls.SetColumnWidth(23, 5);
	xls.SetColumnWidth(24, 5);
	xls.SetColumnWidth(25, 5);
	xls.SetColumnWidth(26, 5);
	xls.SetColumnWidth(27, 5);
	xls.SetColumnWidth(28, 5);
	xls.SetColumnWidth(29, 5);
	xls.SetColumnWidth(30, 5);
	xls.SetColumnWidth(31, 5);
	xls.SetColumnWidth(32, 5);
	xls.SetColumnWidth(33, 5);
	xls.SetColumnWidth(34, 5);
	xls.SetColumnWidth(35, 5);
	xls.SetColumnWidth(36, 5);
	xls.SetColumnWidth(37, 5);
	xls.SetColumnWidth(38, 5);
	xls.SetColumnWidth(39, 5);
	xls.SetColumnWidth(40, 5);
	xls.SetColumnWidth(41, 5);
	xls.SetColumnWidth(42, 5);
	xls.SetColumnWidth(43, 5);
	xls.SetColumnWidth(44, 5);
	xls.SetColumnWidth(45, 5);
	xls.SetColumnWidth(46, 10);
	xls.SetColumnWidth(47, 5);
	xls.SetColumnWidth(48, 5);
	xls.SetColumnWidth(49, 5);
	xls.SetColumnWidth(50, 5);
	xls.SetColumnWidth(51, 5);
	xls.SetColumnWidth(52, 5);
	xls.SetColumnWidth(53, 5);
	xls.SetColumnWidth(54, 5);
	xls.SetColumnWidth(55, 5);
	xls.SetColumnWidth(56, 5);
	xls.SetColumnWidth(57, 15);

	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT , true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT , true);

	xls.SetCellText(0, 2, _T("BÁO CÁO QUYẾT TOÁN THUỐC, HÓA CHẤT CHO XÉT NGHIỆM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 12);
	xls.SetCellText(0, 4, _T("Tên hóa chất"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 4, _T("ĐVT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 4, _T("TỒN ĐẦU KỲ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 5, _T("Các tủ trực"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 6, _T("Quân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 6, _T("BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 5, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 6, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 6, _T("T.Tiền"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 4, _T("LĨNH TRONG THÁNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 5, _T("Bổ sung cho các tủ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 6, _T("Quân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, 6, _T("BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 5, _T("Nhập"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 6, _T("Quân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 6, _T("BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 5, _T("Tổng lĩnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 6, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(14, 6, _T("T.Tiền"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 4, _T("XUẤT SỬ DỤNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(15, 5, _T("Xuất theo đối tượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 6, _T("QUÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(15, 7, _T("Nội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(16, 7, _T("Ngoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(17, 7, _T("Khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(18, 6, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(18, 7, _T("Nội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(19, 7, _T("Ngoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(20, 7, _T("Khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 6, _T("BHQD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(21, 7, _T("Nội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(22, 7, _T("Ngoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(23, 7, _T("Khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(24, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(24, 7, _T("Nội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(25, 7, _T("Ngoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(26, 7, _T("Khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(27, 6, _T("BẠN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(27, 7, _T("Nội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(28, 7, _T("Ngoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(29, 7, _T("Khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(30, 6, _T("TRẺ EM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(30, 7, _T("Nội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(31, 7, _T("Ngoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(32, 7, _T("Khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(33, 6, _T("C SÁCH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(33, 7, _T("Nội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(34, 7, _T("Ngoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(35, 7, _T("Khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(36, 6, _T("DỊCH VỤ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(36, 7, _T("Nội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(37, 7, _T("Ngoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(38, 7, _T("Khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(39, 6, _T("BH KHÁC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(39, 7, _T("Nội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(40, 7, _T("Ngoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(41, 7, _T("Khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(42, 6, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(42, 7, _T("Nội"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(43, 7, _T("Ngoại"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(44, 7, _T("Khác"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(45, 5, _T("Tổng giá trị sử dụng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(45, 6, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(46, 6, _T("T.Tiền"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(47, 4, _T("ĐIỀU CHỈNH TĂNG GIẢM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(47, 5, _T("Tăng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(47, 6, _T("Quân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(48, 6, _T("BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(49, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(50, 5, _T("Giảm"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(50, 6, _T("Quân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(51, 6, _T("BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(52, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(53, 4, _T("TỒN CUỐI KỲ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(53, 5, _T("Các tủ trực"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(53, 6, _T("Quân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(54, 6, _T("BHYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(55, 6, _T("DV"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(56, 5, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(56, 6, _T("SL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(57, 6, _T("T.Tiền"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(2, 2, 0, 37);
	xls.SetMerge(4, 7, 0, 0);
	xls.SetMerge(4, 7, 1, 1);
	xls.SetMerge(4, 4, 2, 6);
	xls.SetMerge(5, 5, 2, 4);
	xls.SetMerge(6, 7, 2, 2);
	xls.SetMerge(6, 7, 3, 3);
	xls.SetMerge(6, 7, 4, 4);
	xls.SetMerge(5, 5, 5, 6);
	xls.SetMerge(6, 7, 5, 5);
	xls.SetMerge(6, 7, 6, 6);
	xls.SetMerge(4, 4, 7, 14);
	xls.SetMerge(5, 5, 7, 9);
	xls.SetMerge(6, 7, 7, 7);
	xls.SetMerge(6, 7, 8, 8);
	xls.SetMerge(6, 7, 9, 9);
	xls.SetMerge(5, 5, 10, 12);
	xls.SetMerge(6, 7, 10, 10);
	xls.SetMerge(6, 7, 11, 11);
	xls.SetMerge(6, 7, 12, 12);
	xls.SetMerge(5, 5, 13, 14);
	xls.SetMerge(6, 7, 13, 13);
	xls.SetMerge(6, 7, 14, 14);
	xls.SetMerge(5, 5, 15, 44);
	xls.SetMerge(4, 4, 15, 45);
	xls.SetMerge(5, 5, 45, 46);
	xls.SetMerge(6, 6, 15, 17);
	xls.SetMerge(6, 6, 18, 20);
	xls.SetMerge(6, 6, 21, 23);
	xls.SetMerge(6, 6, 24, 26);
	xls.SetMerge(6, 6, 27, 29);
	xls.SetMerge(6, 6, 30, 32);
	xls.SetMerge(6, 6, 33, 35);
	xls.SetMerge(6, 6, 36, 38);
	xls.SetMerge(6, 6, 39, 41);
	xls.SetMerge(6, 6, 42, 44);
	xls.SetMerge(6, 7, 45, 45);
	xls.SetMerge(6, 7, 46, 46);
	xls.SetMerge(4, 4, 47, 52);
	xls.SetMerge(5, 5, 47, 49);
	xls.SetMerge(6, 7, 47, 47);
	xls.SetMerge(6, 7, 48, 48);
	xls.SetMerge(6, 7, 49, 49);
	xls.SetMerge(5, 5, 50, 52);
	xls.SetMerge(6, 7, 50, 50);
	xls.SetMerge(6, 7, 51, 51);
	xls.SetMerge(6, 7, 52, 52);
	xls.SetMerge(4, 4, 53, 57);
	xls.SetMerge(5, 5, 53, 55);
	xls.SetMerge(6, 7, 53, 53);
	xls.SetMerge(6, 7, 54, 54);
	xls.SetMerge(6, 7, 55, 55);
	xls.SetMerge(5, 5, 56, 57);
	xls.SetMerge(6, 7, 56, 56);
	xls.SetMerge(6, 7, 57, 57);

	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		if (nCount < 0)
			_msg(_T("%s"), szSQL);
		else
			_fmsg(_T("%s"), szSQL);
		AfxMessageBox(_T("No Data."));
		return;
	}
	nRow = 8;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, rs.GetValue(_T("product_name")), FMT_TEXT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("product_uomname")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("solqty_fp")), FMT_NUMBER1);
		xls.SetCellText(3, nRow, rs.GetValue(_T("insqty_fp")), FMT_NUMBER1);
		xls.SetCellText(4, nRow, rs.GetValue(_T("serqty_fp")), FMT_NUMBER1);
		xls.SetCellText(5, nRow, rs.GetValue(_T("totalqty_fp")), FMT_NUMBER1);
		rs.GetValue(_T("totalamount_fp"), nTemp);
		nTotal[1] += nTemp;
		xls.SetCellText(6, nRow, double2str(nTemp), FMT_NUMBER1);
		xls.SetCellText(7, nRow, rs.GetValue(_T("solqty_import")), FMT_NUMBER1);
		xls.SetCellText(8, nRow, rs.GetValue(_T("insqty_import")), FMT_NUMBER1);
		xls.SetCellText(9, nRow, rs.GetValue(_T("serqty_import")), FMT_NUMBER1);
		xls.SetCellText(10, nRow, rs.GetValue(_T("solpurchase_import")), FMT_NUMBER1);
		xls.SetCellText(11, nRow, rs.GetValue(_T("inspurchase_import")), FMT_NUMBER1);
		xls.SetCellText(12, nRow, rs.GetValue(_T("serpurchase_import")), FMT_NUMBER1);
		xls.SetCellText(13, nRow, rs.GetValue(_T("totalqty_import")), FMT_NUMBER1);
		rs.GetValue(_T("totalamount_import"), nTemp);
		nTotal[2] += nTemp;
		xls.SetCellText(14, nRow, double2str(nTemp), FMT_NUMBER1);
		xls.SetCellText(15, nRow, rs.GetValue(_T("quannoi")), FMT_NUMBER1);
		xls.SetCellText(16, nRow, rs.GetValue(_T("quanngoai")), FMT_NUMBER1);
		xls.SetCellText(17, nRow, rs.GetValue(_T("quankhac")), FMT_NUMBER1);

		xls.SetCellText(18, nRow, rs.GetValue(_T("bhqnnoi")), FMT_NUMBER1);
		xls.SetCellText(19, nRow, rs.GetValue(_T("bhqnngoai")), FMT_NUMBER1);
		xls.SetCellText(20, nRow, rs.GetValue(_T("bhqnkhac")), FMT_NUMBER1);

		xls.SetCellText(21, nRow, rs.GetValue(_T("bhqdnoi")), FMT_NUMBER1);
		xls.SetCellText(22, nRow, rs.GetValue(_T("bhqdngoai")), FMT_NUMBER1);
		xls.SetCellText(23, nRow, rs.GetValue(_T("bhqdkhac")), FMT_NUMBER1);

		xls.SetCellText(24, nRow, rs.GetValue(_T("bhqhnoi")), FMT_NUMBER1);
		xls.SetCellText(25, nRow, rs.GetValue(_T("bhqhngoai")), FMT_NUMBER1);
		xls.SetCellText(26, nRow, rs.GetValue(_T("bhqhkhac")), FMT_NUMBER1);

		xls.SetCellText(27, nRow, rs.GetValue(_T("bannoi")), FMT_NUMBER1);
		xls.SetCellText(28, nRow, rs.GetValue(_T("banngoai")), FMT_NUMBER1);
		xls.SetCellText(29, nRow, rs.GetValue(_T("bankhac")), FMT_NUMBER1);

		xls.SetCellText(30, nRow, rs.GetValue(_T("te6tnoi")), FMT_NUMBER1);
		xls.SetCellText(31, nRow, rs.GetValue(_T("te6tngoai")), FMT_NUMBER1);
		xls.SetCellText(32, nRow, rs.GetValue(_T("te6tkhac")), FMT_NUMBER1);

		xls.SetCellText(33, nRow, rs.GetValue(_T("csachnoi")), FMT_NUMBER1);
		xls.SetCellText(34, nRow, rs.GetValue(_T("csachngoai")), FMT_NUMBER1);
		xls.SetCellText(35, nRow, rs.GetValue(_T("csachkhac")), FMT_NUMBER1);

		xls.SetCellText(36, nRow, rs.GetValue(_T("dvytnoi")), FMT_NUMBER1);
		xls.SetCellText(37, nRow, rs.GetValue(_T("dvytngoai")), FMT_NUMBER1);
		xls.SetCellText(38, nRow, rs.GetValue(_T("dvytkhac")), FMT_NUMBER1);

		xls.SetCellText(39, nRow, rs.GetValue(_T("bhknoi")), FMT_NUMBER1);
		xls.SetCellText(40, nRow, rs.GetValue(_T("bhkngoai")), FMT_NUMBER1);
		xls.SetCellText(41, nRow, rs.GetValue(_T("bhkkhac")), FMT_NUMBER1);

		xls.SetCellText(42, nRow, rs.GetValue(_T("bhtnnoi")), FMT_NUMBER1);
		xls.SetCellText(43, nRow, rs.GetValue(_T("bhtnngoai")), FMT_NUMBER1);
		xls.SetCellText(44, nRow, rs.GetValue(_T("bhtnkhac")), FMT_NUMBER1);

		xls.SetCellText(45, nRow, rs.GetValue(_T("totalqty_export")), FMT_NUMBER1);
		rs.GetValue(_T("totalamount_export"), nTemp);
		nTotal[3] += nTemp;
		xls.SetCellText(46, nRow, double2str(nTemp), FMT_NUMBER1);
		xls.SetCellText(47, nRow, rs.GetValue(_T("solqty_adjustimport")), FMT_NUMBER1);
		xls.SetCellText(48, nRow, rs.GetValue(_T("insqty_adjustimport")), FMT_NUMBER1);
		xls.SetCellText(49, nRow, rs.GetValue(_T("serqty_adjustimport")), FMT_NUMBER1);
		xls.SetCellText(50, nRow, rs.GetValue(_T("solqty_adjustexport")), FMT_NUMBER1);
		xls.SetCellText(51, nRow, rs.GetValue(_T("insqty_adjustexport")), FMT_NUMBER1);
		xls.SetCellText(52, nRow, rs.GetValue(_T("serqty_adjustexport")), FMT_NUMBER1);
		xls.SetCellText(53, nRow, rs.GetValue(_T("solqty_lp")), FMT_NUMBER1);
		xls.SetCellText(54, nRow, rs.GetValue(_T("insqty_lp")), FMT_NUMBER1);
		xls.SetCellText(55, nRow, rs.GetValue(_T("serqty_lp")), FMT_NUMBER1);
		xls.SetCellText(56, nRow, rs.GetValue(_T("totalqty_lp")), FMT_NUMBER1);
		rs.GetValue(_T("totalamount_lp"), nTemp);
		nTotal[4] += nTemp;
		xls.SetCellText(57, nRow, double2str(nTemp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	if(nTotal[1] + nTotal[2] + nTotal[3] + nTotal[4] > 0)
	{
		xls.SetCellText(0, nRow, _T("Tổng cộng:"), FMT_TEXT, true);
		xls.SetCellText(6, nRow, double2str(nTotal[1]), FMT_NUMBER1, true);
		xls.SetCellText(14, nRow, double2str(nTotal[2]), FMT_NUMBER1, true);
		xls.SetCellText(46, nRow, double2str(nTotal[3]), FMT_NUMBER1, true);
		xls.SetCellText(57, nRow, double2str(nTotal[4]), FMT_NUMBER1, true);
		nRow++;
	}

	xls.SetCellText(0, nRow, _T("Tổng tiền bằng chữ:"), FMT_TEXT, true);
	MoneyToString(ToString(nTotal[4]), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);

	nRow++;
	nRow++;
	nRow++;
	nRow++;

	xls.SetCellText(0, nRow, _T("CHỦ NHIỆM KHOA"), FMT_TEXT, true);
	xls.SetCellText(6, nRow, _T("HÀNH CHÍNH"), FMT_TEXT, true);
	xls.SetCellText(14, nRow, _T("KHOA DƯỢC"), FMT_TEXT, true);
	xls.SetCellText(25, nRow, _T("TÀI CHÍNH"), FMT_TEXT, true);

	EndWaitCursor();
	xls.Save(_T("Exports\\Quyet Toan Thuoc Hoa Chat cho Xet nghiem.xls"));

} 

CString CPMMaterialFinalAccount::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szFpWhere, szLpWhere, szWhere2, szStorages, szAddPx, szDept;

	szFpWhere.Format(_T(" AND approval_date < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate);
	szLpWhere.Format(_T(" AND approval_date <= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szToDate);
	szWhere.Format(_T(" AND approval_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			_tprintf(_T("\r\nid: %s"), m_wndStorage.GetCurrent(0));
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if(!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStorages);
		szFpWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStorages);
		szLpWhere.AppendFormat(_T(" AND storage_id IN (%s)"), szStorages);
	}

	if (m_bDrug)
	{
		szWhere.AppendFormat(_T(" AND product_org_id IN ('PM')"));
		szFpWhere.AppendFormat(_T(" AND product_org_id IN ('PM')"));
		szLpWhere.AppendFormat(_T(" AND product_org_id IN ('PM')"));
		szWhere2.AppendFormat(_T(" AND product_org_id IN ('PM')"));
	}
	if (m_bMaterial)
	{
		szWhere.AppendFormat(_T(" AND product_org_id IN ('MA')"));
		szFpWhere.AppendFormat(_T(" AND product_org_id IN ('MA')"));
		szLpWhere.AppendFormat(_T(" AND product_org_id IN ('MA')"));
		szWhere2.AppendFormat(_T(" AND product_org_id IN ('MA')"));
	}

	if(!m_szDepartmentKey.IsEmpty())
		{
			szWhere2.AppendFormat(_T(" AND mt_department_to_id = '%s' "), m_szDepartmentKey);
			szDept.Format(_T(" NVL(hpc_deptid, '%s') AS deptid "), m_szDepartmentKey);
		}
	else
		{
			szWhere2.AppendFormat(_T(" AND mt_department_to_id = '%s' "), pMF->GetDepartmentID());
			szDept.Format(_T(" NVL(hpc_deptid, '%s') AS deptid "), pMF->GetDepartmentID());
		}

	if (m_bAddPX)
	{
		szAddPx.Format(_T(" UNION ALL") \
			_T(" SELECT product_id,") \
			_T("     product_name,") \
			_T("     product_uomname,") \
			_T("     SUM(mtl_qtysold    + mtl_qtypolicy)   AS solqty_import,") \
			_T("     SUM(mtl_qtysoldins + mtl_qtyotherins) AS insqty_import,") \
			_T("     SUM(mtl_qtyservice + mtl_qtyother)    AS serqty_import,") \
			_T("     0 quannoi,") \
			_T("     0 bhqnnoi,") \
			_T("     0 bhqdnoi,") \
			_T("     0 bhqhnoi,") \
			_T("     0 bannoi,") \
			_T("     0 te6tnoi,") \
			_T("     0 csachnoi,") \
			_T("     0 dvytnoi,") \
			_T("     0 bhknoi,") \
			_T("     0 bhtnnoi,   ") \
			_T("     0 quanngoai,") \
			_T("     0 bhqnngoai,") \
			_T("     0 bhqdngoai,") \
			_T("     0 bhqhngoai,") \
			_T("     0 banngoai,") \
			_T("     0 te6tngoai,") \
			_T("     0 csachngoai,") \
			_T("     0 dvytngoai,") \
			_T("     0 bhkngoai,") \
			_T("     0 bhtnngoai, ") \
			_T("     SUM(mtl_qtysold + mtl_qtypolicy) AS quankhac,") \
			_T("     0 bhqnkhac,") \
			_T("     0 bhqdkhac,") \
			_T("     0 bhqhkhac,") \
			_T("     SUM(mtl_qtyservice + mtl_qtyother) AS bhtnkhac,") \
			_T("     0 bankhac,") \
			_T("     0 te6tkhac,") \
			_T("     0 csachkhac,") \
			_T("     SUM(mtl_qtysoldins + mtl_qtyotherins) AS dvytkhac,") \
			_T("     0 bhkkhac,") \
			_T("     0 solpurchase_import,") \
			_T("     0 inspurchase_import,") \
			_T("     0 serpurchase_import,") \
			_T("     0 solqty_adjustimport,") \
			_T("     0 insqty_adjustimport,") \
			_T("     0 serqty_adjustimport,") \
			_T("     0 solqty_adjustexport,") \
			_T("     0 insqty_adjustexport,") \
			_T("     0 serqty_adjustexport,") \
			_T("     SUM(mtl_qtydelivery)                                                                                                                                          AS totalqty_import,") \
			_T("     SUM(mtl_qtydelivery * DECODE(0, mtl_taxprice, DECODE(msl_category, 'I', product_taxprice, 'S', product_saleprice1, 'P', product_saleprice3), mtl_taxprice)) AS totalamount_import,") \
			_T("     SUM(mtl_qtydelivery)                                                                                                                                          AS totalqty_export,") \
			_T("     SUM(mtl_qtydelivery * DECODE(0, mtl_taxprice, DECODE(msl_category, 'I', product_taxprice, 'S', product_saleprice1, 'P', product_saleprice3), mtl_taxprice)) AS totalamount_export,") \
			_T("     0 totalqty_adjustimport,") \
			_T("     0 totalamount_adjustimport,") \
			_T("     0 totalqty_adjustexport,") \
			_T("     0 totalamount_adjustexport") \
			_T(" FROM m_transaction") \
			_T(" LEFT JOIN m_transactionline") \
			_T(" ON(mt_transaction_id = mtl_transaction_id)") \
			_T(" LEFT JOIN m_productitem_view") \
			_T(" ON(mtl_product_item_id = product_item_id)") \
			_T(" LEFT JOIN m_storagelist") \
			_T(" ON(msl_storage_id = mt_storage_id)") \
			_T(" WHERE mt_doctype = 'DDO'") \
			_T(" AND mt_status = 'A'") \
			_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" %s") \
			_T(" GROUP BY") \
			_T(" product_id,") \
			_T(" product_name,") \
			_T(" product_uomname"), m_szFromDate, m_szToDate, szWhere2);
	}

	szSQL.Format(_T("SELECT product_id,") \
		_T("     product_name,") \
		_T("     product_uomname,") \
		_T("     solqty_fp,") \
		_T("     insqty_fp,") \
		_T("     serqty_fp,") \
		_T("     totalqty_fp,") \
		_T("     totalamount_fp,") \
		_T("     solqty_import,") \
		_T("     insqty_import,") \
		_T("     serqty_import,") \
		_T("     solpurchase_import,") \
		_T("     inspurchase_import,") \
		_T("     serpurchase_import,") \
		_T("   quannoi,") \
		_T("   bhqnnoi,") \
		_T("   bhqhnoi,") \
		_T("   bhqdnoi,") \
		_T("   bhtnnoi,") \
		_T("   bhknoi,") \
		_T("   csachnoi,") \
		_T("   te6tnoi,") \
		_T("   dvytnoi,") \
		_T("   bannoi,") \
		_T("   quanngoai,") \
		_T("   bhqnngoai,") \
		_T("   bhqhngoai,") \
		_T("   bhqdngoai,") \
		_T("   bhtnngoai,") \
		_T("   bhkngoai,") \
		_T("   csachngoai,") \
		_T("   te6tngoai,") \
		_T("   dvytngoai,") \
		_T("   banngoai,") \
		_T("   quankhac,") \
		_T("   bhqnkhac,") \
		_T("   bhqhkhac,") \
		_T("   bhqdkhac,") \
		_T("   bhtnkhac,") \
		_T("   bhkkhac,") \
		_T("   csachkhac,") \
		_T("   te6tkhac,") \
		_T("   dvytkhac,") \
		_T("   bankhac,") \
		_T("     solqty_adjustimport,") \
		_T("     insqty_adjustimport,") \
		_T("     serqty_adjustimport,") \
		_T("     solqty_adjustexport,") \
		_T("     insqty_adjustexport,") \
		_T("     serqty_adjustexport,") \
		_T("     totalqty_import,") \
		_T("     totalamount_import,") \
		_T("     totalqty_export,") \
		_T("     totalamount_export,") \
		_T("     solqty_lp,") \
		_T("     serqty_lp,") \
		_T("     insqty_lp,") \
		_T("     totalqty_lp,") \
		_T("     totalamount_lp") \
		_T("   FROM") \
		_T("  (SELECT product_id,") \
		_T("       product_name,") \
		_T("       product_uomname,") \
		_T("       SUM(") \
		_T("       CASE") \
		_T("         WHEN msl_category = 'P'") \
		_T("         THEN import_qty - export_qty") \
		_T("         ELSE 0") \
		_T("       END) solqty_fp,") \
		_T("       SUM(") \
		_T("       CASE") \
		_T("         WHEN msl_category = 'I'") \
		_T("         THEN import_qty - export_qty") \
		_T("         ELSE 0") \
		_T("       END) insqty_fp,") \
		_T("       SUM(") \
		_T("       CASE") \
		_T("         WHEN msl_category = 'S'") \
		_T("         THEN import_qty - export_qty") \
		_T("         ELSE 0") \
		_T("       END) serqty_fp,") \
		_T("       SUM(import_qty   - export_qty) totalqty_fp,") \
		_T("       SUM(( import_qty - export_qty ) * DECODE(msl_category, 'I', product_taxprice, 'S', product_saleprice1, 'P', product_saleprice3)) totalamount_fp") \
		_T("     FROM") \
		_T("       (SELECT storage_id,") \
		_T("         product_item_id sitem_id,") \
		_T("         qtyimport import_qty,") \
		_T("         0 export_qty,") \
		_T("         unit_price,") \
		_T("         approved_date approval_date") \
		_T("       FROM m_import_view") \
		_T("       UNION ALL") \
		_T("       SELECT storage_id,") \
		_T("         product_item_id sitem_id,") \
		_T("         0 import_qty,") \
		_T("         qtyexport export_qty,") \
		_T("         unit_price,") \
		_T("         approved_date approval_date") \
		_T("       FROM m_export_view") \
		_T("       )") \
		_T("     LEFT JOIN m_productitem_view") \
		_T("     ON ( sitem_id = product_item_id )") \
		_T("     LEFT JOIN m_storagelist") \
		_T("     ON ( msl_storage_id = storage_id )") \
		_T("     WHERE msl_type      = 'C'") \
		_T("     AND msl_category   IN ( 'I', 'S', 'P' ) %s") \
		_T("     HAVING SUM(import_qty - export_qty) > 0") \
		_T("     GROUP BY product_id,") \
		_T("       product_name,") \
		_T("       product_uomname") \
		_T("     ) tbl_fp") \
		_T("   FULL JOIN") \
		_T("     (SELECT product_id,") \
		_T("       product_name,") \
		_T("       product_uomname,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'P'") \
		_T("       THEN import_qty") \
		_T("       ELSE 0") \
		_T("     END) solqty_import,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'I'") \
		_T("       THEN import_qty") \
		_T("       ELSE 0") \
		_T("     END) insqty_import,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'S'") \
		_T("       THEN import_qty") \
		_T("       ELSE 0") \
		_T("     END) serqty_import,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(1) AND deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'K')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS quannoi,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(11, 13) AND deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'K')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhqnnoi,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(10) AND deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'K')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhqdnoi,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(2) AND deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'K')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhqhnoi,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(8) AND deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'K')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bannoi,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(6, 9) AND deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'K')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS te6tnoi,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(3) AND deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'K')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS csachnoi,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(7) AND deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'K')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS dvytnoi,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(4, 12) AND deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'K')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhknoi,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(5) AND deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC', 'K')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhtnnoi,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(1) AND deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS quanngoai,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(11, 13) AND deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhqnngoai,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(10) AND deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhqdngoai,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(2) AND deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhqhngoai,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(8) AND deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS banngoai,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(6, 9) AND deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS te6tngoai,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(3) AND deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS csachngoai,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(7) AND deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS dvytngoai,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(4, 12) AND deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhkngoai,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(5) AND deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhtnngoai,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(1) AND deptid = 'K'") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS quankhac,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(11, 13) AND deptid = 'K'") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhqnkhac,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(10) AND deptid = 'K'") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhqdkhac,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(2) AND deptid = 'K'") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhqhkhac,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(8) AND deptid = 'K'") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bankhac,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(6, 9) AND deptid = 'K'") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS te6tkhac,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(3) AND deptid = 'K'") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS csachkhac,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(7) AND deptid = 'K'") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS dvytkhac,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(4, 12) AND deptid = 'K'") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhkkhac,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN pobject IN(5) AND deptid = 'K'") \
		_T("       THEN export_qty") \
		_T("       ELSE 0") \
		_T("     END) AS bhtnkhac,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'P'") \
		_T("       THEN purchase_qty") \
		_T("       ELSE 0") \
		_T("     END) solpurchase_import,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'I'") \
		_T("       THEN purchase_qty") \
		_T("       ELSE 0") \
		_T("     END) inspurchase_import,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'S'") \
		_T("       THEN purchase_qty") \
		_T("       ELSE 0") \
		_T("     END) serpurchase_import,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'P'") \
		_T("       THEN adjust_qtyimport") \
		_T("       ELSE 0") \
		_T("     END) solqty_adjustimport,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'I'") \
		_T("       THEN adjust_qtyimport") \
		_T("       ELSE 0") \
		_T("     END) insqty_adjustimport,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'S'") \
		_T("       THEN adjust_qtyimport") \
		_T("       ELSE 0") \
		_T("     END) serqty_adjustimport,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'P'") \
		_T("       THEN adjust_qtyexport") \
		_T("       ELSE 0") \
		_T("     END) solqty_adjustexport,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'I'") \
		_T("       THEN adjust_qtyexport") \
		_T("       ELSE 0") \
		_T("     END) insqty_adjustexport,") \
		_T("     SUM(") \
		_T("     CASE") \
		_T("       WHEN msl_category = 'S'") \
		_T("       THEN adjust_qtyexport") \
		_T("       ELSE 0") \
		_T("     END) serqty_adjustexport,") \
		_T("       SUM(import_qty  + purchase_qty) totalqty_import,") \
		_T("       SUM((import_qty + purchase_qty) * DECODE(msl_category, 'I', product_taxprice, 'S', product_saleprice1, 'P', product_saleprice3)) totalamount_import,") \
		_T("       SUM(export_qty) totalqty_export,") \
		_T("       SUM(export_qty * DECODE(msl_category, 'I', product_taxprice, 'S', product_saleprice1, 'P', product_saleprice3)) totalamount_export,") \
		_T("       SUM(adjust_qtyimport) totalqty_adjustimport,") \
		_T("       SUM(adjust_qtyimport * DECODE(msl_category, 'I', product_taxprice, 'S', product_saleprice1, 'P', product_saleprice3)) totalamount_adjustimport,") \
		_T("       SUM(adjust_qtyexport) totalqty_adjustexport,") \
		_T("       SUM(adjust_qtyexport * DECODE(msl_category, 'I', product_taxprice, 'S', product_saleprice1, 'P', product_saleprice3)) totalamount_adjustexport") \
		_T("     FROM") \
		_T("  (SELECT storage_id,") \
		_T("         product_item_id sitem_id,") \
		_T("         CASE") \
		_T("           WHEN iotype = 'CSO'") \
		_T("           THEN qtyimport") \
		_T("           ELSE 0") \
		_T("         END import_qty,") \
		_T("         CASE") \
		_T("           WHEN iotype = 'POO'") \
		_T("           THEN qtyimport") \
		_T("           ELSE 0") \
		_T("         END purchase_qty,") \
		_T("         0 export_qty,") \
		_T("         CASE") \
		_T("           WHEN iotype = 'ADO'") \
		_T("           THEN qtyimport") \
		_T("           ELSE 0") \
		_T("         END adjust_qtyimport,") \
		_T("         0 adjust_qtyexport,") \
		_T("         unit_price,") \
		_T("         approved_date approval_date,") \
		_T("         0 pobject,") \
		_T("         CAST('X' AS NVARCHAR2(1)) AS deptid") \
		_T("       FROM m_import_view") \
		_T("       WHERE iotype IN ( 'CSO', 'ADO', 'POO' )") \
		_T("       UNION ALL") \
		_T("       SELECT storage_id,") \
		_T("         product_item_id sitem_id,") \
		_T("         0 import_qty,") \
		_T("         0 purchase_qty,") \
		_T("         CASE") \
		_T("           WHEN iotype <> 'ADO'") \
		_T("           THEN qtyexport") \
		_T("           ELSE 0") \
		_T("         END export_qty,") \
		_T("         0 adjust_qtyimport,") \
		_T("         CASE") \
		_T("           WHEN iotype = 'ADO'") \
		_T("           THEN qtyexport") \
		_T("           ELSE 0") \
		_T("         END adjust_qtyexport,") \
		_T("         unit_price,") \
		_T("         approved_date approval_date,") \
		_T("         pobject,") \
		_T("         CAST('K' AS NVARCHAR2(1)) AS deptid") \
		_T("       FROM m_export_view4") \
		_T("       WHERE iotype NOT IN ('CON', 'PPO', 'DMO', 'DDO', 'DOO', 'CSO', 'DPO')") \
		_T("       UNION ALL") \
		_T("       SELECT hpo_storage_id,") \
		_T("         hpol_product_item_id,") \
		_T("         0,") \
		_T("         0,") \
		_T("         hpol_qtyissue,") \
		_T("         0,") \
		_T("         0,") \
		_T("         hpol_unitprice,") \
		_T("         hpo_approvedate,") \
		_T("         hpo_object_id,") \
		_T("         %s ") \
		_T("       FROM hms_pharmaorder_view") \
		_T("       LEFT JOIN hms_pharmaorderline_view2") \
		_T("       ON ( hpo_orderid = hpol_orderid )") \
		_T("       LEFT JOIN hmsv_paraclinic") \
		_T("       ON (hpc_docno       = hpo_docno") \
		_T("       AND hpc_orderid     = hpo_reference_id)") \
		_T("       WHERE hpo_ordertype = 'C'") \
		_T(" UNION ALL") \
		_T(" SELECT  hpo_storage_id,") \
		_T(" hpolr_product_item_id,") \
		_T(" hpolr_qtyreverse,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" 0,") \
		_T(" hpolr_unitprice,") \
		_T(" hpolr_createddate AS approval_date,") \
		_T(" hpo_object_id AS object_id,") \
		_T(" hpo_deptid AS deptid") \
		_T(" FROM hms_ipharmaorderline_r") \
		_T(" LEFT JOIN hms_pharmaorder_view") \
		_T(" ON(hpolr_orderid = hpo_orderid)") \
		_T(" LEFT JOIN hms_pharmaorderline_view2") \
		_T(" ON(hpolr_orderid = hpol_orderid AND hpolr_product_item_id = hpol_product_item_id)") \
		_T(" WHERE hpo_ordertype = 'C' AND NVL(hpol_processed, 'N') <> 'N'") \
		_T("       )") \
		_T("     LEFT JOIN m_productitem_view") \
		_T("     ON ( sitem_id = product_item_id )") \
		_T("     LEFT JOIN m_storagelist") \
		_T("     ON ( msl_storage_id = storage_id )") \
		_T("     WHERE msl_type      = 'C'") \
		_T("     AND msl_category   IN ( 'I', 'S', 'P' ) %s") \
		_T("     GROUP BY product_id,") \
		_T("       product_name,") \
		_T("       product_uomname") \
		_T("    %s ) tbl_io USING (product_id, product_name, product_uomname)") \
		_T("     FULL JOIN") \
		_T("     (") \
		_T("     SELECT product_id,") \
		_T("       product_name,") \
		_T("       product_uomname,") \
		_T("       SUM(") \
		_T("       CASE") \
		_T("         WHEN msl_category = 'P'") \
		_T("         THEN import_qty - export_qty") \
		_T("         ELSE 0") \
		_T("       END) solqty_lp,") \
		_T("       SUM(") \
		_T("       CASE") \
		_T("         WHEN msl_category = 'I'") \
		_T("         THEN import_qty - export_qty") \
		_T("         ELSE 0") \
		_T("       END) insqty_lp,") \
		_T("       SUM(") \
		_T("       CASE") \
		_T("         WHEN msl_category = 'S'") \
		_T("         THEN import_qty - export_qty") \
		_T("         ELSE 0") \
		_T("       END) serqty_lp,") \
		_T("       SUM(import_qty   - export_qty) totalqty_lp,") \
		_T("       SUM(( import_qty - export_qty ) * DECODE(msl_category, 'I', product_taxprice, 'S', product_saleprice1, 'P', product_saleprice3)) totalamount_lp") \
		_T("     FROM") \
		_T("       (SELECT storage_id,") \
		_T("         product_item_id sitem_id,") \
		_T("         qtyimport import_qty,") \
		_T("         0 export_qty,") \
		_T("         unit_price,") \
		_T("         approved_date approval_date") \
		_T("       FROM m_import_view") \
		_T("       UNION ALL") \
		_T("       SELECT storage_id,") \
		_T("         product_item_id sitem_id,") \
		_T("         0 import_qty,") \
		_T("         qtyexport export_qty,") \
		_T("         unit_price,") \
		_T("         approved_date approval_date") \
		_T("       FROM m_export_view") \
		_T("       )") \
		_T("     LEFT JOIN m_productitem_view") \
		_T("     ON ( sitem_id = product_item_id )") \
		_T("     LEFT JOIN m_storagelist") \
		_T("     ON ( msl_storage_id = storage_id )") \
		_T("     WHERE msl_type      = 'C'") \
		_T("     AND msl_category   IN ( 'I', 'S', 'P' ) %s") \
		_T("     HAVING SUM(import_qty - export_qty) > 0") \
		_T("     GROUP BY product_id,") \
		_T("       product_name,") \
		_T("       product_uomname") \
		_T("     ) tbl_lp USING (product_id, product_name, product_uomname)"), szFpWhere, szDept, szWhere, szAddPx, szLpWhere);	
		_fmsg(_T("%s"), szSQL);
		return szSQL;
}