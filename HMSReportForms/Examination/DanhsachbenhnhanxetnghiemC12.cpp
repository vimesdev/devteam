#include "stdafx.h"
#include "DanhsachbenhnhanxetnghiemC12.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
	return ((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnToDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CDanhsachbenhnhanxetnghiemC12* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12 *)pWnd)->OnPerformDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CDanhsachbenhnhanxetnghiemC12 *pVw = (CDanhsachbenhnhanxetnghiemC12 *)pWnd;
	pVw->OnPrintSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CDanhsachbenhnhanxetnghiemC12 *pVw = (CDanhsachbenhnhanxetnghiemC12 *)pWnd;
	pVw->OnExportSelect();
}
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnObjectLoadData();
} 
static void _OnObjectDblClickFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnObjectDblClick();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnObjectSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectDeleteItemFnc(CWnd *pWnd){
	 return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnObjectDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnListDeleteItem();
}
static void _OnSubItemSelectFnc(CWnd *pWnd){
	 ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnSubItemSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnInPatientSelect();
}
static void _OnAllHospitalsSelectFnc(CWnd *pWnd){
	 ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnAllHospitalsSelect();
}
static void _OnPDeptSelectFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnPDeptSelect();
}
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnDepartmentDeleteItem();
}
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnTestGroupLoadData();
} 
static void _OnTestGroupDblClickFnc(CWnd *pWnd){
	((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnTestGroupDblClick();
} 
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnTestGroupSelectChange(nOldItem, nNewItem);
} 
static int _OnTestGroupDeleteItemFnc(CWnd *pWnd){
	 return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnTestGroupDeleteItem();
} 
static int _OnAddLIMSTestPatientListFnc(CWnd *pWnd){
	 return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnAddLIMSTestPatientList();
} 
static int _OnEditLIMSTestPatientListFnc(CWnd *pWnd){
	 return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnEditLIMSTestPatientList();
} 
static int _OnDeleteLIMSTestPatientListFnc(CWnd *pWnd){
	 return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnDeleteLIMSTestPatientList();
} 
static int _OnSaveLIMSTestPatientListFnc(CWnd *pWnd){
	 return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnSaveLIMSTestPatientList();
} 
static int _OnCancelLIMSTestPatientListFnc(CWnd *pWnd){
	 return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnCancelLIMSTestPatientList();
}
static int _OnMachineListCheckAllFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnMachineListCheckAll();
}
static int _OnMachineListUnCheckAllFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnMachineListUnCheckAll();
}
static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CDanhsachbenhnhanxetnghiemC12*)pWnd)->OnDeptListUnCheckAll();
}

CDanhsachbenhnhanxetnghiemC12::CDanhsachbenhnhanxetnghiemC12(CWnd *pParent)
{
	m_nDlgWidth = 585;
	m_nDlgHeight = 650;
	SetDefaultValues();
}
CDanhsachbenhnhanxetnghiemC12::~CDanhsachbenhnhanxetnghiemC12()
{
}
void CDanhsachbenhnhanxetnghiemC12::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 90);
	m_wndMachineLabel.Create(this, _T("MachineList"), 0, 0, 0, 0);
	m_wndDepartmentList.Create(this, _T("Department"), 5, 352, 575, 523);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 150, 55);
	m_wndFromDate.Create(this,156, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 425, 55);
	m_wndToDate.Create(this,430, 30, 570, 55); 
	m_wndPerformDept.Create(this,155, 60, 570, 85);
	m_wndList.Create(this,0, 0, 0, 0);
	m_wndNoSubItem.Create(this, _T("NoSubItem"), 0, 0, 0, 0);
	m_wndOutPatient.Create(this, _T("OutPatient"), 0, 0, 0, 0);
	m_wndInPatient.Create(this, _T("InPatient"), 0, 0, 0, 0);
	m_wndAllHospitals.Create(this, _T("All Hospitals"), 0, 0, 0, 0);
	m_wndPDept.Create(this, _T("Kho\x61 th\x1EF1\x63 hi\x1EC7n"), 0, 0, 0, 0);
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 150, 85);
	m_wndDepartment.Create(this,5, 377, 575, 518); 
	m_wndTestGroup.Create(this,5, 95, 575, 181); 
	m_wndPrint.Create(this, _T("&Print"), 370, 524, 470, 549);
	m_wndExport.Create(this, _T("&ExportXLS"), 475, 524, 575, 549);
	m_wndObject.Create(this,5, 185, 575, 352); 
}
void CDanhsachbenhnhanxetnghiemC12::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(35);
	/*m_szFromDate = pMF->GetSysDate() + _T("00:01");
	m_szToDate = pMF->GetSysDate()+ _T("23:59");*/
	
	m_wndPerformDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndPerformDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 280);
	//m_wndPerformDept.SetCheckBox(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 280);
	m_wndList.InsertColumn(2, _T("Port"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Baudrate"), CFMT_TEXT, 100);
	m_wndList.SetCheckBox(true);
	
	m_wndObject.InsertColumn(0, _T("ObjectID"), CFMT_TEXT, 100);
	m_wndObject.InsertColumn(1, _T("ObjectName"), CFMT_TEXT, 450);
	m_wndObject.SetCheckBox(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);
	m_wndDepartment.SetCheckBox(true);
	m_wndTestGroup.InsertColumn(0, _T("IDTest"), CFMT_TEXT, 100);
	m_wndTestGroup.InsertColumn(1, _T("TestName"), CFMT_TEXT, 450);
	m_wndTestGroup.SetCheckBox(true);

}
void CDanhsachbenhnhanxetnghiemC12::OnSetWindowEvents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPerformDept.SetEvent(WE_SELENDOK, _OnPerformDeptSelendokFnc);
	//m_wndPerformDept.SetEvent(WE_SETFOCUS, _OnPerformDeptSetfocusFnc);
	//m_wndPerformDept.SetEvent(WE_KILLFOCUS, _OnPerformDeptKillfocusFnc);
	m_wndPerformDept.SetEvent(WE_SELCHANGE, _OnPerformDeptSelectChangeFnc);
	m_wndPerformDept.SetEvent(WE_LOADDATA, _OnPerformDeptLoadDataFnc);
	//m_wndPerformDept.SetEvent(WE_ADDNEW, _OnPerformDeptAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndNoSubItem.SetEvent(WE_CLICK, _OnSubItemSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndAllHospitals.SetEvent(WE_CLICK, _OnAllHospitalsSelectFnc);
	m_wndPDept.SetEvent(WE_CLICK, _OnPDeptSelectFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndDepartment.SetEvent(WE_DBLCLICK, _OnDepartmentDblClickFnc);
	m_wndTestGroup.SetEvent(WE_SELCHANGE, _OnTestGroupSelectChangeFnc);
	m_wndTestGroup.SetEvent(WE_LOADDATA, _OnTestGroupLoadDataFnc);
	m_wndTestGroup.SetEvent(WE_DBLCLICK, _OnTestGroupDblClickFnc);
	//m_wndTestGroup.AddEvent(1, _T("Delete"), _OnTestGroupDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetWindowText(_T("MachineList"));
	m_wndList.AddEvent(1, _T("Check All"), _OnMachineListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnMachineListUnCheckAllFnc);

	m_wndObject.SetWindowText(_T("MachineList"));
	m_wndObject.AddEvent(1, _T("Check All"), _OnObjectListCheckAllFnc);
	m_wndObject.AddEvent(2, _T("UnCheck All"), _OnObjectListUnCheckAllFnc);
	
	m_wndDepartment.SetWindowText(_T("DeptList"));
	m_wndDepartment.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc);
	m_wndDepartment.AddEvent(2, _T("UnCheck All"), _OnDeptListUnCheckAllFnc);

	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	m_wndObject.SetEvent(WE_DBLCLICK, _OnObjectDblClickFnc);
	//m_wndObject.AddEvent(1, _T("Delete"), _OnObjectDeleteItemFnc, 0, VK_DELETE, 0);

	//OnPerformDeptLoadDataCHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szPerformDeptKey = pMF->m_szDept;
	m_szUserKey=pMF->m_szUser;
	//_msg(_T("%s"), m_szUserKey);
	m_wndPerformDept.EnableWindow(false);
	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = szSysDate + _T("00:00");
	m_szToDate = szSysDate + _T("23:59");
    //_msg(_T("%s"), m_szPerformDeptKey);
	OnTestGroupLoadData();
	OnObjectLoadData();
	OnListLoadData();
	OnDepartmentLoadData();
	UpdateData(false);
		
}
void CDanhsachbenhnhanxetnghiemC12::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTestGroup.GetDlgCtrlID(), m_szUserKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Check(pDX, m_wndNoSubItem.GetDlgCtrlID(), m_bSubItem);
	DDX_TextEx(pDX, m_wndList.GetDlgCtrlID(), m_szListKey);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_bInPatient);
	DDX_Check(pDX, m_wndAllHospitals.GetDlgCtrlID(), m_bAllHospitals);
	DDX_Check(pDX, m_wndPDept.GetDlgCtrlID(), m_bPDept);
}
void CDanhsachbenhnhanxetnghiemC12::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CDanhsachbenhnhanxetnghiemC12::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CDanhsachbenhnhanxetnghiemC12::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPerformDeptKey.Empty();
	m_bSubItem=TRUE;
	m_bOutPatient=FALSE;
	m_bInPatient=FALSE;
	m_bAllHospitals=TRUE;
	m_bPDept=FALSE;

}
int CDanhsachbenhnhanxetnghiemC12::SetMode(int nMode){
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
/*void CDanhsachbenhnhanxetnghiemC12::OnFromDateChange(){
	
} */
/*void CDanhsachbenhnhanxetnghiemC12::OnFromDateSetfocus(){
	
} */
/*void CDanhsachbenhnhanxetnghiemC12::OnFromDateKillfocus(){
	
} */
int CDanhsachbenhnhanxetnghiemC12::OnFromDateCheckValue(){
	return 0;
} 
/*void CDanhsachbenhnhanxetnghiemC12::OnToDateChange(){
	
} */
/*void CDanhsachbenhnhanxetnghiemC12::OnToDateSetfocus(){
	
} */
/*void CDanhsachbenhnhanxetnghiemC12::OnToDateKillfocus(){
	
} */
int CDanhsachbenhnhanxetnghiemC12::OnToDateCheckValue(){
	return 0;
} 
void CDanhsachbenhnhanxetnghiemC12::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CDanhsachbenhnhanxetnghiemC12::OnPerformDeptSelendok(){
	 
}
/*void CDanhsachbenhnhanxetnghiemC12::OnPerformDeptSetfocus(){
	
}*/
/*void CDanhsachbenhnhanxetnghiemC12::OnPerformDeptKillfocus(){
	
}*/
long CDanhsachbenhnhanxetnghiemC12::OnPerformDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDept.IsSearchKey() && !m_szPerformDeptKey.IsEmpty())
	{
	
	};
	m_wndPerformDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_type in('XN') order by sd_id "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CDanhsachbenhnhanxetnghiemC12::OnPerformDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CDanhsachbenhnhanxetnghiemC12::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[21], nGroupTotal[21];
	for(int i = 0; i < 21; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACHBENHNHANLAMXETNGHIEM_C12.xls"))) AfxMessageBox(_T("Chưa có Files DANHSACHBENHNHANLAMXETNGHIEM_C2.xls trong thư mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 11;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("tenbn"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("OBjectName"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("total_slhuyethoc"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_sldongmau"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slsinhhoamau"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slkhimau"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slshnuoctieu"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slshdichchocdo"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slshtuyengiap"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slvisinh"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_sledta"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slserum"), nTemp);
		nGroupTotal[13] += nTemp;
		xls.SetCellText(nCol+13, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slherparin"), nTemp);
		nGroupTotal[14] += nTemp;
		xls.SetCellText(nCol+14, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slsinhhocphantu"), nTemp);
		nGroupTotal[15] += nTemp;
		xls.SetCellText(nCol+15, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slgpbenh"), nTemp);
		nGroupTotal[16] += nTemp;
		xls.SetCellText(nCol+16, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_sltruyenmau"), nTemp);
		nGroupTotal[17] += nTemp;
		xls.SetCellText(nCol+17, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slctscanner"), nTemp);
		nGroupTotal[18] += nTemp;
		xls.SetCellText(nCol+18, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("total_slmri"), nTemp);
		nGroupTotal[19] += nTemp;
		xls.SetCellText(nCol+19, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);


		rs.GetValue(_T("total"), nTemp);
		nGroupTotal[20] += nTemp;
		xls.SetCellText(nCol+20, nRow, double2str(nTemp), FMT_INTEGER | FMT_CENTER);

			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[20] > 0)
	{
		xls.SetCellText(2, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 4; i < 21; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[20] > 0)
	{
		xls.SetCellText(2, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 4; i < 21; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACHBENHNHANLAMXETNGHIEM_C123.xls"));
}
void CDanhsachbenhnhanxetnghiemC12::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return;
}
CString CDanhsachbenhnhanxetnghiemC12::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, tmpStr, szTemp;
	int nMachineID;
	CString szMachineID, szMachineName;
	CString szDeptID, szDeptName;
	CString szTestID, szTestName, szObjectID, szObjectName;

	szWhere.Format(_T(" AND hpc_performdate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			if (!szObjectName.IsEmpty())
				szObjectID += _T(",");
			szObjectName += _T("-");
			szObjectID.AppendFormat(_T("'%s'"), m_wndObject.GetItemText(i, 0));
			szObjectName.AppendFormat(_T("'%s'"), m_wndObject.GetItemText(i, 1));
		}
	}
	if (!szObjectID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and HPC_OBJECT in (%s)"), szObjectID);
	}
	
	szSQL.Format(_T(" select sohoso, tenbn, OBjectName, ") \
				_T(" SUM(slhuyethoc) as total_slhuyethoc,") \
				_T(" SUM(sldongmau) as total_sldongmau,") \
				_T(" SUM(slsinhhoamau) as total_slsinhhoamau,") \
				_T(" SUM(slkhimau) as total_slkhimau,") \
				_T(" SUM(slshnuoctieu) as total_slshnuoctieu,") \
				_T(" SUM(slshdichchocdo) as total_slshdichchocdo,") \
				_T(" SUM(slshtuyengiap) as total_slshtuyengiap,") \
				_T(" SUM(slvisinh) as total_slvisinh,") \
				_T(" SUM(sledta) as total_sledta,") \
				_T(" SUM(slserum) as total_slserum,") \
				_T(" SUM(slherparin) as total_slherparin,") \
				_T(" SUM(slsinhhocphantu) as total_slsinhhocphantu,") \
				_T(" SUM(slgpbenh) as total_slgpbenh,") \
				_T(" SUM(sltruyenmau) as total_sltruyenmau,") \
				_T(" SUM(slctscanner) as total_slctscanner,") \
				_T(" SUM(slmri) as total_slmri,") \
				_T(" SUM(slhuyethoc+sldongmau+slsinhhoamau+slkhimau+slshnuoctieu+slshdichchocdo+slshtuyengiap+slvisinh+sledta+slserum+slherparin+slsinhhocphantu+slgpbenh+sltruyenmau+slctscanner+slmri) as total") \
				_T(" FROM") \
				_T(" (") \
				_T(" SELECT ") \
				_T("     hpc_docno as sohoso,") \
				_T("     GET_PATIENTNAME(hpc_docno) as tenbn,") \
				_T("     GET_OBJECTNAME(HPC_OBJECT) AS OBjectName,") \
				_T("     case when hpc_groupid in  ('B1100') then 1 else 0 end as slhuyethoc ,") \
				_T("     case when hpc_groupid in  ('B1110') then 1 else 0 end as sldongmau,") \
				_T("     case when hpc_groupid in  ('B1200') then 1 else 0 end as slsinhhoamau,") \
				_T("     case when hpc_groupid in  ('B1220') then 1 else 0 end as slkhimau,") \
				_T("     case when hpc_groupid in  ('B1300') then 1 else 0 end as slshnuoctieu,") \
				_T("     case when hpc_groupid in  ('B1320') then 1 else 0 end as slshdichchocdo,") \
				_T("     case when hpc_groupid in  ('B1600') then 1 else 0 end as slshtuyengiap,") \
				_T("     case when hpc_groupid in  ('B1500') then 1 else 0 end as slvisinh,") \
				_T("     case when hpc_groupid in  ('B1400') then 1 else 0 end as sledta,") \
				_T("     case when hpc_groupid in  ('B1410') then 1 else 0 end as slserum,") \
				_T("     case when hpc_groupid in  ('B1420') then 1 else 0 end as slherparin,") \
				_T("     case when hpc_groupid in  ('B1B00') then 1 else 0 end as slsinhhocphantu,") \
				_T("     0 as slgpbenh,") \
				_T("     case when hpc_groupid in  ('B1G00') then 1 else 0 end as sltruyenmau,") \
				_T("     0 as slctscanner,") \
				_T("     0 as slmri") \
				_T("   FROM hms_testorder ") \
				_T("   WHERE 1=1 %s ") \
				_T("   and hpc_status  IN ('P', 'T')") \
				_T("   AND HPC_DEPTID='C1.2'") \
				_T("   UNION ALL ") \
				_T(" SELECT ") \
				_T("     hpc_docno as sohoso,") \
				_T("     GET_PATIENTNAME(hpc_docno) as tenbn,") \
				_T("     GET_OBJECTNAME(HPC_OBJECT) AS OBjectName,") \
				_T("     0 slhuyethoc ,") \
				_T("     0 as sldongmau,") \
				_T("     0 as slsinhhoamau,") \
				_T("     0 as slkhimau,") \
				_T("     0 as slshnuoctieu,") \
				_T("     0 as slshdichchocdo,") \
				_T("     0 as slshtuyengiap,") \
				_T("     0 as slvisinh,") \
				_T("     0 as sledta,") \
				_T("     0 as slserum,") \
				_T("     0 as slherparin,") \
				_T("     0 as slsinhhocphantu,") \
				_T("     case when hpc_groupid in  ('B1E00') then 1 else 0 end as slgpbenh,") \
				_T("     case when hpc_groupid in  ('B1G00') then 1 else 0 end as sltruyenmau,") \
				_T("     case when hpc_groupid in  ('B2200') then 1 else 0 end as slctscanner,") \
				_T("     case when hpc_groupid in  ('B2300') then 1 else 0 end as slmri") \
				_T("   FROM HMS_PACSORDER ") \
				_T("   WHERE 1=1 %s ") \
				_T("   and hpc_status  IN ('P', 'T')") \
				_T("   AND HPC_DEPTID='C1.2'") \
				_T(" )") \
				_T(" GROUP BY sohoso, tenbn, OBjectName "), szWhere, szWhere);
		return szSQL;
}

void CDanhsachbenhnhanxetnghiemC12::OnObjectDblClick()
{
	
} 
void CDanhsachbenhnhanxetnghiemC12::OnObjectSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CDanhsachbenhnhanxetnghiemC12::OnObjectDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDanhsachbenhnhanxetnghiemC12::OnObjectLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndObject.BeginLoad(); 
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select cast(ho_id as int) as ObjectID, ho_desc as ObjectName from hms_object order by ObjectID "), m_szObjectKey);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("ObjectID")), 
			rs.GetValue(_T("ObjectName")), NULL);
		rs.MoveNext();
	}
	m_wndObject.EndLoad(); 
	return nCount;

	return 0;
}

void CDanhsachbenhnhanxetnghiemC12::OnListDblClick(){
	
} 
void CDanhsachbenhnhanxetnghiemC12::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CDanhsachbenhnhanxetnghiemC12::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDanhsachbenhnhanxetnghiemC12::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select limsi_id as id, limsi_model as name, limsi_port as port, limsi_baudrate as baudrate from lims_instrument where limsi_deptid = '%s' order by limsi_id "), m_szPerformDeptKey);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("port")), 
			rs.GetValue(_T("baudrate")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

	return 0;
}
void CDanhsachbenhnhanxetnghiemC12::OnSubItemSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CDanhsachbenhnhanxetnghiemC12::OnOutPatientSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_bOutPatient)
	{
		m_bOutPatient=1;
		m_bInPatient=0;
		m_bAllHospitals=0;		
		OnDepartmentLoadData();
	}
	UpdateData(false);	
}
	void CDanhsachbenhnhanxetnghiemC12::OnInPatientSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_bInPatient)
	{
		m_bOutPatient=0;
		m_bInPatient=1;
		m_bAllHospitals=0;
		OnDepartmentLoadData();
	}
	UpdateData(false);
}
	void CDanhsachbenhnhanxetnghiemC12::OnAllHospitalsSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if (m_bAllHospitals)
	{
		m_bOutPatient=0;
		m_bInPatient=0;
		m_bAllHospitals=1;
		OnDepartmentLoadData();
	}
	UpdateData(false);	
}
void CDanhsachbenhnhanxetnghiemC12::OnPDeptSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CDanhsachbenhnhanxetnghiemC12::OnDepartmentDblClick(){
	
} 
void CDanhsachbenhnhanxetnghiemC12::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CDanhsachbenhnhanxetnghiemC12::OnDepartmentDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDanhsachbenhnhanxetnghiemC12::OnDepartmentLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDepartment.BeginLoad();
	m_wndDepartment.DeleteAllItems();
	int nCount = 0;
	if (m_bOutPatient)
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from para_dept_report  where sd_type in('KB') order by sd_index "));
	}
	if (m_bInPatient)
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from para_dept_report  where sd_type in('DT') order by sd_index "));
	}
	
	if (m_bAllHospitals) 
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from para_dept_report  where sd_type in('KB','DT') order by sd_index "));
	}
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);		
		rs.MoveNext();
	}	
	m_wndDepartment.EndLoad();
	
	for (int i=0; i< m_wndDepartment.GetItemCount(); i++)
	{
		m_wndDepartment.SetCheck(i,true);
	}
	return nCount;
}

void CDanhsachbenhnhanxetnghiemC12::OnTestGroupDblClick(){
	
} 
void CDanhsachbenhnhanxetnghiemC12::OnTestGroupSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CDanhsachbenhnhanxetnghiemC12::OnTestGroupDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDanhsachbenhnhanxetnghiemC12::OnTestGroupLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestGroup.BeginLoad(); 
	m_wndTestGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT sup_permid as testID, hfg_name as Testname FROM sys_userperm LEFT JOIN hms_fee_group ON (sup_permid=hfg_id) WHERE substr(hfg_id,1,2)='B1' AND sup_userid='%s'"), m_szUserKey);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndTestGroup.AddItems(
			rs.GetValue(_T("TestID")), 
			rs.GetValue(_T("TestName")), NULL);
		rs.MoveNext();
	}
	m_wndTestGroup.EndLoad();
	for (int i=0; i< m_wndTestGroup.GetItemCount(); i++)
	{
		m_wndTestGroup.SetCheck(i,true);
	}
	return nCount;
	return 0;
}

int CDanhsachbenhnhanxetnghiemC12::OnAddLIMSTestPatientList()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CDanhsachbenhnhanxetnghiemC12::OnEditLIMSTestPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CDanhsachbenhnhanxetnghiemC12::OnDeleteLIMSTestPatientList(){
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
 		OnCancelLIMSTestPatientList(); 
 	}
	return 0;
}
int CDanhsachbenhnhanxetnghiemC12::OnSaveLIMSTestPatientList(){
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
 		//OnLIMSTestPatientListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CDanhsachbenhnhanxetnghiemC12::OnCancelLIMSTestPatientList(){
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
int CDanhsachbenhnhanxetnghiemC12::OnLIMSTestPatientListListLoadData()
{
	return 0;
}
int CDanhsachbenhnhanxetnghiemC12::OnMachineListCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, TRUE);
	}

	return 0;
}
int CDanhsachbenhnhanxetnghiemC12::OnMachineListUnCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, FALSE);
	}

	return 0;
}

int CDanhsachbenhnhanxetnghiemC12::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (!m_wndObject.GetCheck(i))
			m_wndObject.SetCheck(i, TRUE);
	}

	return 0;
}
int CDanhsachbenhnhanxetnghiemC12::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
			m_wndObject.SetCheck(i, FALSE);
	}

	return 0;
}

int CDanhsachbenhnhanxetnghiemC12::OnDeptListCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (!m_wndDepartment.GetCheck(i))
			m_wndDepartment.SetCheck(i, TRUE);
	}

	return 0;
}
int CDanhsachbenhnhanxetnghiemC12::OnDeptListUnCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
			m_wndDepartment.SetCheck(i, FALSE);
	}

	return 0;
}