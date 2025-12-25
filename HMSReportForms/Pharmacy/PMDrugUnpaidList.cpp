#include "stdafx.h"
#include "PMDrugUnpaidList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMDrugUnpaidList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMDrugUnpaidList *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMDrugUnpaidList* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPMDrugUnpaidList *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMDrugUnpaidList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPMDrugUnpaidList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMDrugUnpaidList* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMDrugUnpaidList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMDrugUnpaidList *)pWnd)->OnStorageAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CPMDrugUnpaidList*)pWnd)->OnAllSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CPMDrugUnpaidList*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CPMDrugUnpaidList*)pWnd)->OnInPatientSelect();
}
static void _OnOutInPatientSelectFnc(CWnd *pWnd){
	  ((CPMDrugUnpaidList*)pWnd)->OnOutInPatientSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMDrugUnpaidList *pVw = (CPMDrugUnpaidList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMDrugUnpaidListFnc(CWnd *pWnd){
	 return ((CPMDrugUnpaidList*)pWnd)->OnAddPMDrugUnpaidList();
} 
static int _OnEditPMDrugUnpaidListFnc(CWnd *pWnd){
	 return ((CPMDrugUnpaidList*)pWnd)->OnEditPMDrugUnpaidList();
} 
static int _OnDeletePMDrugUnpaidListFnc(CWnd *pWnd){
	 return ((CPMDrugUnpaidList*)pWnd)->OnDeletePMDrugUnpaidList();
} 
static int _OnSavePMDrugUnpaidListFnc(CWnd *pWnd){
	 return ((CPMDrugUnpaidList*)pWnd)->OnSavePMDrugUnpaidList();
} 
static int _OnCancelPMDrugUnpaidListFnc(CWnd *pWnd){
	 return ((CPMDrugUnpaidList*)pWnd)->OnCancelPMDrugUnpaidList();
} 
CPMDrugUnpaidList::CPMDrugUnpaidList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMDrugUnpaidList::~CPMDrugUnpaidList(){
}
void CPMDrugUnpaidList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 445, 180);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 115, 55);
	m_wndFromDate.Create(this,120, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 440, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 60, 115, 85);
	m_wndObject.SetCheckBox(TRUE);
	m_wndObject.Create(this,120, 60, 440, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 115, 115);
	m_wndDepartment.SetCheckBox(TRUE);
	m_wndDepartment.Create(this,120, 90, 440, 115); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 120, 115, 145);
	m_wndStorage.SetCheckBox(TRUE);
	m_wndStorage.Create(this,120, 120, 440, 145); 
	m_wndAll.Create(this, _T("All"), 10, 150, 90, 175);
	m_wndOutPatient.Create(this, _T("OutPatient"), 95, 150, 175, 175);
	m_wndInPatient.Create(this, _T("InPatient"), 180, 150, 260, 175);
	m_wndOutInPatient.Create(this, _T("OutInPatient"), 265, 150, 385, 175);
	m_wndExport.Create(this, _T("&Export"), 365, 185, 445, 210);

}
void CPMDrugUnpaidList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	//m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

}
void CPMDrugUnpaidList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutInPatient.SetEvent(WE_CLICK, _OnOutInPatientSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate =  pMF->GetSysDate()+ _T("00:00");	
	m_szToDate =pMF->GetSysDate() + _T("23:59");
	UpdateData(false);

}
void CPMDrugUnpaidList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutInPatient.GetDlgCtrlID(), m_nOutInPatient);

}
void CPMDrugUnpaidList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMDrugUnpaidList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPMDrugUnpaidList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_szStorageKey.Empty();
	m_nAll=0;
	m_nOutPatient=1;
	m_nInPatient=1;
	m_nOutInPatient=1;

}
int CPMDrugUnpaidList::SetMode(int nMode){
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
/*void CPMDrugUnpaidList::OnFromDateChange(){
	
} */
/*void CPMDrugUnpaidList::OnFromDateSetfocus(){
	
} */
/*void CPMDrugUnpaidList::OnFromDateKillfocus(){
	
} */
int CPMDrugUnpaidList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMDrugUnpaidList::OnToDateChange(){
	
} */
/*void CPMDrugUnpaidList::OnToDateSetfocus(){
	
} */
/*void CPMDrugUnpaidList::OnToDateKillfocus(){
	
} */
int CPMDrugUnpaidList::OnToDateCheckValue(){
	return 0;
} 
void CPMDrugUnpaidList::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMDrugUnpaidList::OnObjectSelendok(){
	 
}
/*void CPMDrugUnpaidList::OnObjectSetfocus(){
	
}*/
/*void CPMDrugUnpaidList::OnObjectKillfocus(){
	
}*/
long CPMDrugUnpaidList::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and ho_id = '%s' "), m_szObjectKey);
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id AS id, ho_desc AS name FROM hms_object WHERE 1 = 1 %s ORDER BY ho_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMDrugUnpaidList::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMDrugUnpaidList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMDrugUnpaidList::OnDepartmentSelendok(){
	 
}
/*void CPMDrugUnpaidList::OnDepartmentSetfocus(){
	
}*/
/*void CPMDrugUnpaidList::OnDepartmentKillfocus(){
	
}*/
long CPMDrugUnpaidList::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id = '%s' "), m_szDepartmentKey);
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept WHERE sd_type IN('DT', 'KB', 'HA') AND sd_isactive = 'Y' %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMDrugUnpaidList::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMDrugUnpaidList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMDrugUnpaidList::OnStorageSelendok(){
	 
}
/*void CPMDrugUnpaidList::OnStorageSetfocus(){
	
}*/
/*void CPMDrugUnpaidList::OnStorageKillfocus(){
	
}*/
long CPMDrugUnpaidList::OnStorageLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and msl_storage_id = '%s' "), m_szStorageKey);
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id AS id, msl_name AS name FROM m_storagelist WHERE msl_isactive = 'Y' AND msl_storage_id > 0 %s ORDER BY msl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMDrugUnpaidList::OnStorageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMDrugUnpaidList::OnAllSelect(){
	
}
void CPMDrugUnpaidList::OnOutPatientSelect(){
	
}
void CPMDrugUnpaidList::OnInPatientSelect(){
	
}
void CPMDrugUnpaidList::OnOutInPatientSelect(){
	
}
void CPMDrugUnpaidList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szNewDept, szOldDept, szNewStorageID, szOldStorageID;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow = 0, nCol = 0, nIdx = 1;	double nTotalQty = 0, nTotal = 0, nTotalQty2 = 0, nTotal2 = 0;	bool bNewStorage = false;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 40);	xls.SetColumnWidth(2, 30);	xls.SetColumnWidth(3, 12);	xls.SetColumnWidth(4, 14);	xls.SetColumnWidth(5, 14);	xls.SetColumnWidth(6, 18);	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER);	xls.SetCellText(0, 2, _T("TH\x1ED0NG K\xCA \x44\x41NH S\xC1\x43H S\x1EEC \x44\x1EE4NG THU\x1ED0\x43 \x42N \x43H\x1AF\x41 TH\x41NH TO\xC1N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("T\xEAn thu\x1ED1\x63, h\xE0m l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("Ho\x1EA1t \x63h\x1EA5t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("Kho"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 6);	xls.SetMerge(3, 3, 0, 6);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("deptid"), szNewDept);
		rs.GetValue(_T("storage_id"), szNewStorageID);
		if (szNewStorageID != szOldStorageID){
			bNewStorage = true;
			szOldStorageID = szNewStorageID;
		}
		if (szNewDept != szOldDept)
		{
			if (nTotalQty > 0)
			{
				xls.SetCellText(0, nRow, _T("T\x1ED5ng kho\x61"), FMT_TEXT, true);
				xls.SetCellText(4, nRow, double2str(nTotalQty), FMT_NUMBER1, true);
				xls.SetCellText(6, nRow, double2str(nTotal), FMT_NUMBER1, true);
				nTotalQty2 += nTotalQty;
				nTotal2 += nTotal;
				nTotalQty = 0;
				nTotal = 0;
				nRow++;
			}
			xls.SetCellMergedColumns(0, nRow, 7);
			xls.SetCellText(0, nRow, pMF->GetDepartmentName(szNewDept), FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("classname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("uomname"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("qty"), tmpStr);		nTotalQty += str2double(tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("unitprice"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("amount"), tmpStr);		nTotal += str2double(tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);		if (bNewStorage){			xls.SetCellText(7, nRow, pMF->GetStorageName(str2int(szNewStorageID)), FMT_TEXT);			bNewStorage = false;		}		nRow++;		rs.MoveNext();	}	if (nTotalQty > 0)
	{
		xls.SetCellText(0, nRow, _T("T\x1ED5ng kho\x61"), FMT_TEXT, true);
		xls.SetCellText(4, nRow, double2str(nTotalQty), FMT_NUMBER1, true);
		xls.SetCellText(6, nRow, double2str(nTotal), FMT_NUMBER1, true);
		nTotalQty2 += nTotalQty;
		nTotal2 += nTotal;
		nRow++;
	}	if (nTotalQty2 > 0)
	{
		xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		xls.SetCellText(4, nRow, double2str(nTotalQty2), FMT_NUMBER1, true);
		xls.SetCellText(6, nRow, double2str(nTotal2), FMT_NUMBER1, true);
		nRow++;
	}	EndWaitCursor();	xls.Save(_T("Exports\\abcd.xls"));
} 
int CPMDrugUnpaidList::OnAddPMDrugUnpaidList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMDrugUnpaidList::OnEditPMDrugUnpaidList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMDrugUnpaidList::OnDeletePMDrugUnpaidList(){
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
 		OnCancelPMDrugUnpaidList();
 	}
	return 0;
}
int CPMDrugUnpaidList::OnSavePMDrugUnpaidList(){
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
 		//OnPMDrugUnpaidListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMDrugUnpaidList::OnCancelPMDrugUnpaidList(){
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
int CPMDrugUnpaidList::OnPMDrugUnpaidListListLoadData(){
	return 0;
}
CString CPMDrugUnpaidList::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, szObjects, szDepts, szStorages;

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object IN(%s)"), szObjects);

	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			m_wndDepartment.SetCurSel(i);
			if (!szDepts.IsEmpty())
				szDepts += _T("', '");
			szDepts += m_wndDepartment.GetCurrent(0);
		}
	}
	if (!szDepts.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_deptid IN('%s')"), szDepts);

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_storage_id IN(%s) "), szStorages);

	szWhere.AppendFormat(_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if(m_nOutPatient == 0)
		szWhere2.Format(_T("AND hfe_class = 'E'"));
	if(m_nInPatient == 0)
		szWhere2.Format(_T("AND hfe_class = 'I'"));
	if(m_nOutInPatient == 0)
		szWhere.AppendFormat(_T(" AND NVL(hd_outpatient, 'X') = 'Y'"));

	szSQL.Format(_T(" SELECT ") \
		_T(" deptid,") \
		_T(" storageid storage_id,") \
		_T(" pname,") \
		_T(" classname,") \
		_T(" uomname,") \
		_T(" SUM(qty) AS qty,") \
		_T(" unitprice,") \
		_T(" SUM(amount) AS amount") \
		_T(" FROM ") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" hpo_deptid AS deptid,") \
		_T(" hpo_storage_id AS storageid,") \
		_T(" hpo_orderid AS orderid,") \
		_T(" hpol_orderlineid orderline_id,") \
		_T(" mp_name AS pname,") \
		_T(" mpc_name AS classname,") \
		_T(" get_uomname(mp_uom_id) AS uomname,") \
		_T(" hpol_qtyissue AS qty,") \
		_T(" hpol_unitprice AS unitprice,") \
		_T(" hpol_qtyissue * hpol_unitprice AS amount") \
		_T(" FROM hms_pharmaorder") \
		_T(" LEFT JOIN hms_pharmaorderline") \
		_T(" ON(hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hpo_docno = hd_docno)") \
		_T(" LEFT JOIN m_product") \
		_T(" ON(mp_product_id = hpol_product_id)") \
		_T(" LEFT JOIN m_product_class") \
		_T(" ON(mpc_product_class_id = mp_product_class_id)") \
		_T(" WHERE hpo_orderstatus = 'A'") \
		_T(" AND mp_org_id = 'PM' %s") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" hpo_deptid AS hpo_deptid,") \
		_T(" hpo_storage_id AS storage_id,") \
		_T(" hpo_orderid AS orderid,") \
		_T(" hpol_orderlineid orderline_id,") \
		_T(" mp_name AS pname,") \
		_T(" mpc_name AS classname,") \
		_T(" get_uomname(mp_uom_id) AS uomname,") \
		_T(" hpol_qtyissue AS qty,") \
		_T(" hpol_unitprice AS unitprice,") \
		_T(" hpol_qtyissue * hpol_unitprice AS amount") \
		_T(" FROM hms_ipharmaorder") \
		_T(" LEFT JOIN hms_ipharmaorderline") \
		_T(" ON(hpo_orderid = hpol_orderid)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hpo_docno = hd_docno)") \
		_T(" LEFT JOIN m_product") \
		_T(" ON(mp_product_id = hpol_product_id)") \
		_T(" LEFT JOIN m_product_class") \
		_T(" ON(mpc_product_class_id = mp_product_class_id)") \
		_T(" WHERE hpo_orderstatus = 'A'") \
		_T(" AND mp_org_id = 'PM' %s") \
		_T(" ) tbl") \
		_T(" LEFT JOIN hms_fee") \
		_T(" ON(hfe_orderid = orderid AND hfe_orderline = orderline_id)") \
		_T(" WHERE hfe_type IN('D')") \
		_T(" AND hfe_status <> 'P' %s") \
		_T(" GROUP BY deptid, storageid,") \
		_T(" pname,") \
		_T(" classname,") \
		_T(" uomname,") \
		_T(" unitprice") \
		_T(" ORDER BY") \
		_T(" deptid, storageid"), szWhere, szWhere, szWhere2);

	return szSQL;
}