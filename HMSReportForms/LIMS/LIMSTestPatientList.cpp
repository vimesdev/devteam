#include "stdafx.h"
#include "LIMSTestPatientList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSTestPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSTestPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSTestPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
	return ((CLIMSTestPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSTestPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSTestPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSTestPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSTestPatientList* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CLIMSTestPatientList *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CLIMSTestPatientList *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CLIMSTestPatientList *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CLIMSTestPatientList *)pWnd)->OnPerformDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CLIMSTestPatientList *pVw = (CLIMSTestPatientList *)pWnd;
	pVw->OnPrintSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CLIMSTestPatientList *pVw = (CLIMSTestPatientList *)pWnd;
	pVw->OnExportSelect();
}
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList*)pWnd)->OnObjectLoadData();
} 
static void _OnObjectDblClickFnc(CWnd *pWnd){
	((CLIMSTestPatientList*)pWnd)->OnObjectDblClick();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestPatientList*)pWnd)->OnObjectSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestPatientList*)pWnd)->OnObjectDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CLIMSTestPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestPatientList*)pWnd)->OnListDeleteItem();
}
static void _OnSubItemSelectFnc(CWnd *pWnd){
	 ((CLIMSTestPatientList*)pWnd)->OnSubItemSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CLIMSTestPatientList*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CLIMSTestPatientList*)pWnd)->OnInPatientSelect();
}
static void _OnAllHospitalsSelectFnc(CWnd *pWnd){
	 ((CLIMSTestPatientList*)pWnd)->OnAllHospitalsSelect();
}
static void _OnPDeptSelectFnc(CWnd *pWnd){
	((CLIMSTestPatientList*)pWnd)->OnPDeptSelect();
}
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CLIMSTestPatientList*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestPatientList*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestPatientList*)pWnd)->OnDepartmentDeleteItem();
}
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList*)pWnd)->OnTestGroupLoadData();
} 
static void _OnTestGroupDblClickFnc(CWnd *pWnd){
	((CLIMSTestPatientList*)pWnd)->OnTestGroupDblClick();
} 
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestPatientList*)pWnd)->OnTestGroupSelectChange(nOldItem, nNewItem);
} 
static int _OnTestGroupDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestPatientList*)pWnd)->OnTestGroupDeleteItem();
} 
static int _OnAddLIMSTestPatientListFnc(CWnd *pWnd){
	 return ((CLIMSTestPatientList*)pWnd)->OnAddLIMSTestPatientList();
} 
static int _OnEditLIMSTestPatientListFnc(CWnd *pWnd){
	 return ((CLIMSTestPatientList*)pWnd)->OnEditLIMSTestPatientList();
} 
static int _OnDeleteLIMSTestPatientListFnc(CWnd *pWnd){
	 return ((CLIMSTestPatientList*)pWnd)->OnDeleteLIMSTestPatientList();
} 
static int _OnSaveLIMSTestPatientListFnc(CWnd *pWnd){
	 return ((CLIMSTestPatientList*)pWnd)->OnSaveLIMSTestPatientList();
} 
static int _OnCancelLIMSTestPatientListFnc(CWnd *pWnd){
	 return ((CLIMSTestPatientList*)pWnd)->OnCancelLIMSTestPatientList();
}
static int _OnMachineListCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList*)pWnd)->OnMachineListCheckAll();
}
static int _OnMachineListUnCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList*)pWnd)->OnMachineListUnCheckAll();
}
static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestPatientList*)pWnd)->OnDeptListUnCheckAll();
}

CLIMSTestPatientList::CLIMSTestPatientList(CWnd *pParent)
{

	m_nDlgWidth = 585;
	m_nDlgHeight = 650;
	SetDefaultValues();
}
CLIMSTestPatientList::~CLIMSTestPatientList()
{
}
void CLIMSTestPatientList::OnCreateComponents()
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
	m_wndOutPatient.Create(this, _T("OutPatient"), 11, 524, 106, 549);
	m_wndInPatient.Create(this, _T("InPatient"), 111, 524, 201, 549);
	m_wndAllHospitals.Create(this, _T("All Hospitals"), 206, 524, 316, 549);
	m_wndPDept.Create(this, _T("Kho\x61 th\x1EF1\x63 hi\x1EC7n"), 0, 0, 0, 0);
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 150, 85);
	m_wndDepartment.Create(this,5, 377, 575, 518); 
	m_wndTestGroup.Create(this,5, 95, 575, 181); 
	m_wndPrint.Create(this, _T("&Print"), 370, 524, 470, 549);
	m_wndExport.Create(this, _T("&ExportXLS"), 475, 524, 575, 549);
	m_wndObject.Create(this,5, 185, 575, 352); 
}
void CLIMSTestPatientList::OnInitializeComponents(){
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
void CLIMSTestPatientList::OnSetWindowEvents()
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
void CLIMSTestPatientList::OnDoDataExchange(CDataExchange* pDX){
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
void CLIMSTestPatientList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSTestPatientList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSTestPatientList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPerformDeptKey.Empty();
	m_bSubItem=TRUE;
	m_bOutPatient=FALSE;
	m_bInPatient=FALSE;
	m_bAllHospitals=TRUE;
	m_bPDept=FALSE;

}
int CLIMSTestPatientList::SetMode(int nMode){
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
/*void CLIMSTestPatientList::OnFromDateChange(){
	
} */
/*void CLIMSTestPatientList::OnFromDateSetfocus(){
	
} */
/*void CLIMSTestPatientList::OnFromDateKillfocus(){
	
} */
int CLIMSTestPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSTestPatientList::OnToDateChange(){
	
} */
/*void CLIMSTestPatientList::OnToDateSetfocus(){
	
} */
/*void CLIMSTestPatientList::OnToDateKillfocus(){
	
} */
int CLIMSTestPatientList::OnToDateCheckValue(){
	return 0;
} 
void CLIMSTestPatientList::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSTestPatientList::OnPerformDeptSelendok(){
	 
}
/*void CLIMSTestPatientList::OnPerformDeptSetfocus(){
	
}*/
/*void CLIMSTestPatientList::OnPerformDeptKillfocus(){
	
}*/
long CLIMSTestPatientList::OnPerformDeptLoadData(){
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
/*void CLIMSTestPatientList::OnPerformDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSTestPatientList::OnExportSelect()
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
	TranslateString(_T("Mẫu bàn giao kết quả cho các khoa"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Mẫu quản lý chất lượng"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	
	TranslateString(_T("Sổ nhận mẫu bệnh phẩm"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport1();
		break;
	case 2:
		OnExport2();
		break;
	case 3:
		OnExport3();
		break;
	}
}
void CLIMSTestPatientList::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CReportSection *rptDetail = NULL, *rptGroup = NULL;
	CString szSQL, tmpStr, szPrintDate;
	int nIdx = 1;
	if (!rpt.Init(_T("Reports\\HMS\\TM_SoNhanMau.RPT")))
		return;
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss),
		CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("docno")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("pname")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("deptid")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("sample_by")));
		rs.GetValue(_T("sample_date"), tmpStr);
		if(!tmpStr.IsEmpty())
			rptDetail->SetValue(_T("6"), CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
		rs.GetValue(_T("receive_date"), tmpStr);
		if(!tmpStr.IsEmpty())
			rptDetail->SetValue(_T("7"), CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
		rptDetail->SetValue(_T("8"), rs.GetValue(_T("sample_by")));
		rptDetail->SetValue(_T("12"), rs.GetValue(_T("receive_by")));
		rptDetail->SetValue(_T("14"), rs.GetValue(_T("bar_code")));
		rs.MoveNext();
	}
	
	szPrintDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szPrintDate.Mid(8, 2), szPrintDate.Mid(5, 2), szPrintDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
}
void CLIMSTestPatientList::OnExport1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay, szNewDept, szOldDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACH_BENHNHAN_THUCHIEN_XETNGHIEM.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 2, pMF->m_szDept, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 10);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);	
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("deptname"), szNewDept);
		if(szNewDept != szOldDept && !szNewDept.IsEmpty())
		{
			nRow++;
			xls.SetCellMergedColumns(0, nRow, 11);
			tmpStr.Format(_T("%s"),  szNewDept);			
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true,10,0);
			szOldDept = szNewDept;
			nIdx=1;
		}
		nRow++;
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("objectname"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("groupname"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("orderid"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("performdate"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_DATE);

		rs.GetValue(_T("barcode"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);				
		
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DANHSACH_BENHNHAN_THUCHIEN_XETNGHIEM2.xls"));
}

CString CLIMSTestPatientList::GetQueryString()
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
		szWhere.AppendFormat(_T(" and hd_object in (%s)"), szObjectID);
	}


	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szMachineName.IsEmpty())
				szMachineID += _T(",");
			szMachineName += _T("-");
			szMachineID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			szMachineName.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 1));
		}
	}
	if (!szMachineID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpcl_instid in (%s)"), szMachineID);
	}

	for (int i = 0; i < m_wndTestGroup.GetItemCount(); i++)
	{
		if (m_wndTestGroup.GetCheck(i))
		{
			if (!szTestName.IsEmpty())
				szTestName += _T(",");
			szTestName.AppendFormat(_T("'%s'"), m_wndTestGroup.GetItemText(i, 0));
		}
	}
	if (!szTestName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpc_groupid in (%s)"), szTestName);
	}
	
	if (m_bOutPatient)
	{
		{
			szWhere.AppendFormat(_T(" AND hpc_class='E'"));
		}

	}

	if (m_bInPatient)
	{
		{
			szWhere.AppendFormat(_T(" AND hpc_class='I'"));
		}
	}
	if (m_bAllHospitals)
	{
		{
			szWhere.AppendFormat(_T(" AND hpc_class in ('E','I')"));
		}
	}
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDeptName.IsEmpty())
				szDeptName += _T(",");
			szDeptName.AppendFormat(_T("'%s'"), m_wndDepartment.GetItemText(i, 0));
		}
	}
	if (!szDeptName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpc_deptid in (%s)"), szDeptName);
	}	
	
	szSQL.Format(_T(" SELECT DISTINCT hd_docno as docno, hpc_orderid as orderid, hpc_sid as barcode, ") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hd_object as objectid,") \
		_T(" hms_getobjectname(hd_object) as objectname, ") \
		_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
		_T(" 	HMS_GetSex(hp_sex) as sex,") \
		_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
		_T(" 	hd_diagnostic as diagnostic,") \
		_T(" 	HMS_GetFeeGroupName(hpc_groupid) as groupname,") \
		_T(" 	to_char(hpc_orderdate,'YYYY-MM-DD') as orderdate,") \
		_T(" 	hpc_doctor as doctor,") \
		_T(" 	hpc_deptid as deptid,") \
		_T(" 	sd_index as para_index,") \
		_T(" 	HMS_GETDEPARTMENTNAME(hpc_deptid) as deptname,") \
		_T(" 	hpc_roomid as roomid,") \
		_T("	HMS_GetRoomName(hpc_deptid, hpc_roomid) as roomname, ") \
		_T(" 	hpc_status as status,") \
		_T(" 	trunc(hpc_performdate) as performdate,") \
		_T(" 	hpc_practitioner as perfromby, hpc_updateddate as map_date ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_object ON(ho_id=hd_object) ") \
		_T(" LEFT JOIN hms_testorder ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN para_dept_report ON(hpc_deptid=sd_id)") \
		_T(" WHERE 	hpc_orderid > 0 AND hpc_status='T' ") \
		_T(" %s ") \
		_T(" GROUP BY hpc_deptid,sd_index,hd_docno,hpc_orderid,hpc_sid,hp_surname, hp_midname, hp_firstname,hd_object,hd_admitdate,hp_birthdate,hp_sex, ") \
		_T(" hp_provid,hp_distid,hp_villid,hd_diagnostic,hpc_groupid,hpc_orderdate,hpc_doctor,hpc_roomid,hpc_status,hpc_performdate,hpc_practitioner,hpc_updateddate") \
		_T(" ORDER BY sd_index,hpc_deptid,performdate "), szWhere);
		return szSQL;
}
CString CLIMSTestPatientList::GetQueryString1()
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
		szWhere.AppendFormat(_T(" and hd_object in (%s)"), szObjectID);
	}


	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szMachineName.IsEmpty())
				szMachineID += _T(",");
			szMachineName += _T("-");
			szMachineID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			szMachineName.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 1));
		}
	}
	if (!szMachineID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpcl_instid in (%s)"), szMachineID);
	}

	for (int i = 0; i < m_wndTestGroup.GetItemCount(); i++)
	{
		if (m_wndTestGroup.GetCheck(i))
		{
			if (!szTestName.IsEmpty())
				szTestName += _T(",");
			szTestName.AppendFormat(_T("'%s'"), m_wndTestGroup.GetItemText(i, 0));
		}
	}
	if (!szTestName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpc_groupid in (%s)"), szTestName);
	}
	
	if (m_bOutPatient)
	{
		{
			szWhere.AppendFormat(_T(" AND hpc_class='E'"));
		}

	}

	if (m_bInPatient)
	{
		{
			szWhere.AppendFormat(_T(" AND hpc_class='I'"));
		}
	}
	if (m_bAllHospitals)
	{
		{
			szWhere.AppendFormat(_T(" AND hpc_class in ('E','I')"));
		}
	}
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDeptName.IsEmpty())
				szDeptName += _T(",");
			szDeptName.AppendFormat(_T("'%s'"), m_wndDepartment.GetItemText(i, 0));
		}
	}
	if (!szDeptName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpc_deptid in (%s)"), szDeptName);
	}	
	szSQL.Format(_T(" SELECT") \
		_T(" docno, pname, age, sex, objectname, deptid, deptname, groupname, orderid, barcode, t1,t2,t3,t4,t5,") \
		_T(" (Gio_t51*60+phut_t51) as totalminutet1,") \
		_T(" (Gio_t53*60+phut_t53) as totalminutet2,") \
		_T(" (Gio_t32*60+phut_t32) as totalminutet3,") \
		_T(" (Gio_t43*60+phut_t43) as totalminutet4,") \
		_T(" (Gio_t54*60+phut_t54) as totalminutet5") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" docno, pname, age, sex, objectname, deptid, deptname, groupname, orderid, barcode, t1,t2,t3,t4,t5,") \
		_T(" extract(Hour from (t5-t1)) Gio_t51,") \
		_T(" extract(minute from (t5-t1)) phut_t51,") \
		_T(" extract(Hour from (t5-t3)) Gio_t53,") \
		_T(" extract(minute from (t5-t3)) phut_t53,") \
		_T(" extract(Hour from (t3-t2)) Gio_t32,") \
		_T(" extract(minute from (t3-t2)) phut_t32,") \
		_T(" extract(Hour from (t4-t3)) Gio_t43,") \
		_T(" extract(minute from (t4-t3)) phut_t43,") \
		_T(" extract(Hour from (t5-t4)) Gio_t54,") \
		_T(" extract(minute from (t5-t4)) phut_t54") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT ") \
		_T("   hd_docno AS docno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                               AS pname,") \
		_T("   hms_getage(TRUNC(hd_admitdate), hp_birthdate) AS age,") \
		_T("   HMS_GetSex(hp_sex)                            AS sex,") \
		_T("   hms_getobjectname(hd_object)                  AS objectname,") \
		_T("   hpc_deptid									 AS deptid,") \
		_T("   HMS_GETDEPARTMENTNAME(hpc_deptid)             AS deptname,") \
		_T("   HMS_GetFeeGroupName(hpc_groupid)              AS groupname,") \
		_T("   hpc_orderid            AS orderid,") \
		_T("   hpc_sid                AS barcode,  ") \
		_T("   sd_index                                      AS para_index,") \
		_T("   hpc_orderdate          AS t1,") \
		//_T("   hpc_updateddate                               AS t2,") \//
		_T("   limsoe_map_date                               AS t2,") \
		_T("   LIMSOE_SAMPLE_DATE AS t3,") \
		//_T("   (select limsoe_map_date + interval '4' minute from dual) AS t3,") \//
		_T("   limsoe_receive_date AS t4,") \
		_T("   hpc_performdate                        AS t5  ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T(" LEFT JOIN hms_testorder ON(hpc_docno=hd_docno)") \
		_T(" LEFT JOIN Lims_Order_Extra ON(hpc_docno=LIMSOE_DOCNO and hpc_orderid=LIMSOE_ORDERID)") \
		_T(" LEFT JOIN para_dept_report ON(hpc_deptid     =sd_id)") \
		_T(" WHERE hpc_orderid > 0") \
		_T(" AND hpc_status    ='T'") \
		_T(" %s") \
		_T(" GROUP BY hpc_deptid,") \
		_T("   sd_index,") \
		_T("   hd_docno,") \
		_T("   hpc_orderid,") \
		_T("   hpc_sid,") \
		_T("   hp_surname,") \
		_T("   hp_midname,") \
		_T("   hp_firstname,") \
		_T("   hd_object,") \
		_T("   hd_admitdate,") \
		_T("   hp_birthdate,") \
		_T("   hp_sex,") \
		_T("   hp_provid,") \
		_T("   hp_distid,") \
		_T("   hp_villid,") \
		_T("   hd_diagnostic,") \
		_T("   hpc_groupid,") \
		_T("   hpc_orderdate,") \
		_T("   hpc_doctor,") \
		_T("   hpc_roomid,") \
		_T("   hpc_status,") \
		_T("   hpc_performdate,") \
		_T("   hpc_practitioner,") \
		_T("   hpc_updateddate,") \
		_T("   limsoe_map_date,") \
		_T("   LIMSOE_SAMPLE_DATE,") \
		_T("   LIMSOE_RECEIVE_DATE") \
		_T(" ORDER BY sd_index,") \
		_T("   t5") \
		_T("   ))"), szWhere);
		return szSQL;
}

CString CLIMSTestPatientList::GetQueryString2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, tmpStr, szTemp;
	int nMachineID;
	CString szMachineID, szMachineName;
	CString szDeptID, szDeptName;
	CString szTestID, szTestName, szObjectID, szObjectName;

	szWhere.Format(_T(" AND LIMSOE_RECEIVE_DATE BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

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
		szWhere.AppendFormat(_T(" and hd_object in (%s)"), szObjectID);
	}


	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szMachineName.IsEmpty())
				szMachineID += _T(",");
			szMachineName += _T("-");
			szMachineID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
			szMachineName.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 1));
		}
	}
	if (!szMachineID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpcl_instid in (%s)"), szMachineID);
	}

	for (int i = 0; i < m_wndTestGroup.GetItemCount(); i++)
	{
		if (m_wndTestGroup.GetCheck(i))
		{
			if (!szTestName.IsEmpty())
				szTestName += _T(",");
			szTestName.AppendFormat(_T("'%s'"), m_wndTestGroup.GetItemText(i, 0));
		}
	}
	if (!szTestName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpc_groupid in (%s)"), szTestName);
	}

	if (m_bOutPatient)
	{
		{
			szWhere.AppendFormat(_T(" AND hpc_class='E'"));
		}

	}

	if (m_bInPatient)
	{
		{
			szWhere.AppendFormat(_T(" AND hpc_class='I'"));
		}
	}
	if (m_bAllHospitals)
	{
		{
			szWhere.AppendFormat(_T(" AND hpc_class in ('E','I')"));
		}
	}
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDeptName.IsEmpty())
				szDeptName += _T(",");
			szDeptName.AppendFormat(_T("'%s'"), m_wndDepartment.GetItemText(i, 0));
		}
	}
	if (!szDeptName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpc_deptid in (%s)"), szDeptName);
	}	
	szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
		_T("       trim(hp_surname") \
		_T("       ||' '") \
		_T("       ||hp_midname") \
		_T("       ||' '") \
		_T("       ||hp_firstname)                               AS pname,") \
		_T("       hms_getage(TRUNC(hd_admitdate), hp_birthdate) AS age,") \
		_T("       HMS_GetSex(hp_sex)                            AS sex,") \
		_T("       hms_getobjectname(hd_object)                  AS objectname,") \
		_T("       hpc_deptid                                    AS deptid,") \
		_T("       HMS_GETDEPARTMENTNAME(hpc_deptid)             AS deptname,") \
		_T("       hpc_sid                                       AS barcode,") \
		_T("       sd_index                                      AS para_index,") \
		_T("       limsoe_sample_date                            AS sample_date,") \
		//_T("       limsoe_sample_by                              AS sample_by,") \//
		_T(" CASE") \
		_T("     WHEN hpc_class = 'E'") \
		_T("     THEN get_username_from_gate(hpc_orderid)") \
		_T("     ELSE limsoe_sample_by") \
		_T("   END                 AS sample_by,") \
		_T("       limsoe_receive_date                           AS receive_date,") \
		_T("       limsoe_receive_by                             AS receive_by,") \
		_T("       limsoe_doctor                                 AS doctor,") \
		_T("       hpc_sid                                       AS bar_code") \
		_T("     FROM hms_patient") \
		_T("     LEFT JOIN hms_doc") \
		_T("     ON(hd_patientno=hp_patientno)") \
		_T("     LEFT JOIN hms_object") \
		_T("     ON(ho_id=hd_object)") \
		_T("     LEFT JOIN hms_testorder") \
		_T("     ON(hpc_docno=hd_docno)") \
		_T("     LEFT JOIN Lims_Order_Extra") \
		_T("     ON(hpc_docno   =LIMSOE_DOCNO") \
		_T("     AND hpc_orderid=LIMSOE_ORDERID)") \
		_T("     LEFT JOIN para_dept_report") \
		_T("     ON(hpc_deptid     =sd_id)") \
		_T("     WHERE hpc_orderid > 0") \
		//_T("     AND hpc_status    ='T' %s ") \//
		_T("     %s ") \
		_T("     ORDER BY sd_index, hd_docno"), szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}

void CLIMSTestPatientList::OnExport2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay, szNewDept, szOldDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\MAUQUANLYCHATLUONG_XETNGHIEM.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 2, pMF->m_szDept, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 10);

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);	
	
	nRow = 13;
	nCol = 0;
	while(!rs.IsEOF())
	{
		nRow++;
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("objectname"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("groupname"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("orderid"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("barcode"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);				

		rs.GetValue(_T("t1"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("t2"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("t3"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_DATETIME);
		
		rs.GetValue(_T("t4"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_DATETIME);
		
		rs.GetValue(_T("t5"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("totalminutet1"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("totalminutet2"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("totalminutet3"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("totalminutet4"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("totalminutet5"), tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_INTEGER);

		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\MAUQUANLYCHATLUONG_XETNGHIEM2.xls"));
}
void CLIMSTestPatientList::OnExport3()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay, szNewDept, szOldDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\SOGIAONHAN_BENHPHAM.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	//xls.SetCellText(0, 2, pMF->m_szDept, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 10);

	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);	
	
	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		nRow++;
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("barcode"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sample_by"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("sample_date"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("receive_date"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_DATETIME);		

		rs.GetValue(_T("sample_by"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);				

		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("receive_by"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		

		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\SOGIAONHAN_BENHPHAM2.xls"));
}

void CLIMSTestPatientList::OnObjectDblClick()
{
	
} 
void CLIMSTestPatientList::OnObjectSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestPatientList::OnObjectDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestPatientList::OnObjectLoadData(){

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

void CLIMSTestPatientList::OnListDblClick(){
	
} 
void CLIMSTestPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestPatientList::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestPatientList::OnListLoadData(){

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
void CLIMSTestPatientList::OnSubItemSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CLIMSTestPatientList::OnOutPatientSelect()
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
	void CLIMSTestPatientList::OnInPatientSelect()
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
	void CLIMSTestPatientList::OnAllHospitalsSelect()
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
void CLIMSTestPatientList::OnPDeptSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CLIMSTestPatientList::OnDepartmentDblClick(){
	
} 
void CLIMSTestPatientList::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestPatientList::OnDepartmentDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestPatientList::OnDepartmentLoadData()
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

void CLIMSTestPatientList::OnTestGroupDblClick(){
	
} 
void CLIMSTestPatientList::OnTestGroupSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestPatientList::OnTestGroupDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestPatientList::OnTestGroupLoadData()
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

int CLIMSTestPatientList::OnAddLIMSTestPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSTestPatientList::OnEditLIMSTestPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSTestPatientList::OnDeleteLIMSTestPatientList(){
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
int CLIMSTestPatientList::OnSaveLIMSTestPatientList(){
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
int CLIMSTestPatientList::OnCancelLIMSTestPatientList(){
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
int CLIMSTestPatientList::OnLIMSTestPatientListListLoadData()
{
	return 0;
}
int CLIMSTestPatientList::OnMachineListCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, TRUE);
	}

	return 0;
}
int CLIMSTestPatientList::OnMachineListUnCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, FALSE);
	}

	return 0;
}

int CLIMSTestPatientList::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (!m_wndObject.GetCheck(i))
			m_wndObject.SetCheck(i, TRUE);
	}

	return 0;
}
int CLIMSTestPatientList::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
			m_wndObject.SetCheck(i, FALSE);
	}

	return 0;
}

int CLIMSTestPatientList::OnDeptListCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (!m_wndDepartment.GetCheck(i))
			m_wndDepartment.SetCheck(i, TRUE);
	}

	return 0;
}
int CLIMSTestPatientList::OnDeptListUnCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
			m_wndDepartment.SetCheck(i, FALSE);
	}

	return 0;
}