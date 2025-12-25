#include "stdafx.h"
#include "LIMSTestReportByMachine.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "GuiMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
	return ((CLIMSTestReportByMachine *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine *)pWnd)->OnToDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSTestReportByMachine* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine *)pWnd)->OnPerformDeptAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CLIMSTestReportByMachine *pVw = (CLIMSTestReportByMachine *)pWnd;
	pVw->OnExportSelect();
}
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine*)pWnd)->OnObjectLoadData();
} 
static void _OnObjectDblClickFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine*)pWnd)->OnObjectDblClick();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestReportByMachine*)pWnd)->OnObjectSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestReportByMachine*)pWnd)->OnObjectDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestReportByMachine*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestReportByMachine*)pWnd)->OnListDeleteItem();
}
static void _OnSubItemSelectFnc(CWnd *pWnd){
	 ((CLIMSTestReportByMachine*)pWnd)->OnSubItemSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CLIMSTestReportByMachine*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CLIMSTestReportByMachine*)pWnd)->OnInPatientSelect();
}
static void _OnAllHospitalsSelectFnc(CWnd *pWnd){
	 ((CLIMSTestReportByMachine*)pWnd)->OnAllHospitalsSelect();
}
static void _OnPDeptSelectFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine*)pWnd)->OnPDeptSelect();
}
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestReportByMachine*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestReportByMachine*)pWnd)->OnDepartmentDeleteItem();
}
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine*)pWnd)->OnTestGroupLoadData();
} 
static void _OnTestGroupDblClickFnc(CWnd *pWnd){
	((CLIMSTestReportByMachine*)pWnd)->OnTestGroupDblClick();
} 
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSTestReportByMachine*)pWnd)->OnTestGroupSelectChange(nOldItem, nNewItem);
} 
static int _OnTestGroupDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSTestReportByMachine*)pWnd)->OnTestGroupDeleteItem();
} 
static int _OnAddLIMSTestReportByMachineFnc(CWnd *pWnd){
	 return ((CLIMSTestReportByMachine*)pWnd)->OnAddLIMSTestReportByMachine();
} 
static int _OnEditLIMSTestReportByMachineFnc(CWnd *pWnd){
	 return ((CLIMSTestReportByMachine*)pWnd)->OnEditLIMSTestReportByMachine();
} 
static int _OnDeleteLIMSTestReportByMachineFnc(CWnd *pWnd){
	 return ((CLIMSTestReportByMachine*)pWnd)->OnDeleteLIMSTestReportByMachine();
} 
static int _OnSaveLIMSTestReportByMachineFnc(CWnd *pWnd){
	 return ((CLIMSTestReportByMachine*)pWnd)->OnSaveLIMSTestReportByMachine();
} 
static int _OnCancelLIMSTestReportByMachineFnc(CWnd *pWnd){
	 return ((CLIMSTestReportByMachine*)pWnd)->OnCancelLIMSTestReportByMachine();
}
static int _OnMachineListCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine*)pWnd)->OnMachineListCheckAll();
}
static int _OnMachineListUnCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine*)pWnd)->OnMachineListUnCheckAll();
}
static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd){
	return ((CLIMSTestReportByMachine*)pWnd)->OnDeptListUnCheckAll();
}

CLIMSTestReportByMachine::CLIMSTestReportByMachine(CWnd *pParent){

	m_nDlgWidth = 585;
	m_nDlgHeight = 650;
	SetDefaultValues();
}
CLIMSTestReportByMachine::~CLIMSTestReportByMachine()
{
}
void CLIMSTestReportByMachine::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 90);
	m_wndMachineLabel.Create(this, _T("MachineList"), 5, 258, 575, 378);
	m_wndDepartmentList.Create(this, _T("Department"), 5, 378, 575, 528);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 150, 55);
	m_wndFromDate.Create(this,156, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 425, 55);
	m_wndToDate.Create(this,430, 30, 570, 55); 
	m_wndPerformDept.Create(this,155, 60, 570, 85); 
	m_wndList.Create(this,10, 283, 570, 373); 
	m_wndNoSubItem.Create(this, _T("NoSubItem"), 5, 525, 150, 550);
	m_wndOutPatient.Create(this, _T("OutPatient"), 155, 525, 250, 550);
	m_wndInPatient.Create(this, _T("InPatient"), 255, 525, 345, 550);
	m_wndAllHospitals.Create(this, _T("All Hospitals"), 350, 525, 460, 550);
	m_wndPDept.Create(this, _T("Kho\x61 th\x1EF1\x63 hi\x1EC7n"), 5, 555, 150, 580);
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 150, 85);
	m_wndDepartment.Create(this,10, 403, 570, 523); 
	m_wndTestGroup.Create(this,5, 95, 575, 170); 
	m_wndExport.Create(this, _T("&Export"), 490, 535, 570, 560);
	m_wndObject.Create(this,5, 175, 575, 255); 
}
void CLIMSTestReportByMachine::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
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


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
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
void CLIMSTestReportByMachine::OnSetWindowEvents()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
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

	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	m_wndObject.SetEvent(WE_DBLCLICK, _OnObjectDblClickFnc);
	//m_wndObject.AddEvent(1, _T("Delete"), _OnObjectDeleteItemFnc, 0, VK_DELETE, 0);

	//OnPerformDeptLoadData
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT su_deptid ") \
				_T(" FROM sys_user ") \
				_T(" WHERE lower(su_userid)=lower('%s')"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	m_szDept = rs.GetStringValue();
	m_szPerformDeptKey = m_szDept;
	m_szUserKey=pMF->GetCurrentUser();
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
void CLIMSTestReportByMachine::OnDoDataExchange(CDataExchange* pDX){
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
void CLIMSTestReportByMachine::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSTestReportByMachine::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CLIMSTestReportByMachine::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPerformDeptKey.Empty();
	m_bSubItem=TRUE;
	m_bOutPatient=FALSE;
	m_bInPatient=FALSE;
	m_bAllHospitals=TRUE;
	m_bPDept=FALSE;

}
int CLIMSTestReportByMachine::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd(); 
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
/*void CLIMSTestReportByMachine::OnFromDateChange(){
	
} */
/*void CLIMSTestReportByMachine::OnFromDateSetfocus(){
	
} */
/*void CLIMSTestReportByMachine::OnFromDateKillfocus(){
	
} */
int CLIMSTestReportByMachine::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSTestReportByMachine::OnToDateChange(){
	
} */
/*void CLIMSTestReportByMachine::OnToDateSetfocus(){
	
} */
/*void CLIMSTestReportByMachine::OnToDateKillfocus(){
	
} */
int CLIMSTestReportByMachine::OnToDateCheckValue(){
	return 0;
} 
void CLIMSTestReportByMachine::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSTestReportByMachine::OnPerformDeptSelendok(){
	 
}
/*void CLIMSTestReportByMachine::OnPerformDeptSetfocus(){
	
}*/
/*void CLIMSTestReportByMachine::OnPerformDeptKillfocus(){
	
}*/
long CLIMSTestReportByMachine::OnPerformDeptLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

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
/*void CLIMSTestReportByMachine::OnPerformDeptAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSTestReportByMachine::OnExportSelect()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Export"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("\x58u\x1EA5t \x63ho TY\x43"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport1();
		break;
	case 2:
		OnExport2();
		break;
	}
}
void CLIMSTestReportByMachine::OnExport1()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhere2, tmpStr, szTemp;
	int nMachineID;
	CString szMachineID, szMachineName;
	CString szDeptID, szDeptName;
	CString szTestID, szTestName, szObjectID, szObjectName;
	CExcel xls;

	UpdateData(TRUE);
	BeginWaitCursor();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

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
	if (m_bSubItem)
	{
		{
			szWhere.AppendFormat(_T(" AND hfl_servprice>0"));
		}


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
	if(m_bPDept)
		szWhere2.AppendFormat(_T(" WHERE pdeptid = '%s'"), m_szDept);
	//szSQL.Format(_T(" SELECT") \
	//_T(" item as item,") \
	//_T(" nametest as nametest,") \
	//_T(" line,") \
	//_T(" idx,") \
	//_T(" sum(tongso) as tongso,") \
	//_T(" sum(tongsotest) as tongsotest,") \
	//_T(" sum(baohiem) as baohiem,") \
	//_T(" sum(baohiemtest) as baohiemtest,") \
	//_T(" sum(treem) as treem,") \
	//_T(" sum(treemtest) as treemtest,") \
	//_T(" sum(baovesuckhoe) as baovesuckhoe,") \
	//_T(" sum(baovesuckhoetest) as baovesuckhoetest,") \
	//_T(" sum(miengiam) as miengiam,") \
	//_T(" sum(miengiamtest) as miengiamtest,") \
	//_T(" sum(nguoinuocngoai) as nguoinuocngoai,") \
	//_T(" sum(nguoinuocngoaitest) as nguoinuocngoaitest,") \
	//_T(" sum(dichvu) as dichvu,") \
	//_T(" sum(dichvutest) as dichvutest") \
	//_T(" FROM") \
	//_T(" (") \
	//_T(" SELECT ") \
	//_T(" 	hfl_name as nametest,") \
	//_T(" 	hfl_feeid as item, ") \
	//_T(" 	hfl_line as line,") \
	//_T(" 	hfl_idx as idx,") \
	//_T(" 	pcmso_docno as docno,") \
	//_T(" 	1 as tongso,") \
	//_T(" 	case when hd_object='1' then 1 else 0 end as baohiem,") \
	//_T(" 	case when hd_object='2' then 1 else 0 end as treem,") \
	//_T(" 	case when hd_object='3' then 1 else 0 end as baovesuckhoe,") \
	//_T(" 	case when hd_object='4' then 1 else 0 end as miengiam,") \
	//_T(" 	case when hd_object='8' then 1 else 0 end as nguoinuocngoai,") \
	//_T(" 	case when hd_object='9' then 1 else 0 end as dichvu,") \
	//_T(" 	case when hd_object='1' and hfl_feeid='B1100114' then 22 when hd_object='1' then 1 else 0 end as baohiemtest,") \
	//_T(" 	case when hd_object='2' and hfl_feeid='B1100114' then 22 when hd_object='2' then 1 else 0 end as treemtest,") \
	//_T(" 	case when hd_object='3' and hfl_feeid='B1100114' then 22 when hd_object='3' then 1 else 0 end as baovesuckhoetest,") \
	//_T(" 	case when hd_object='4' and hfl_feeid='B1100114' then 22 when hd_object='4' then 1 else 0 end as miengiamtest,") \
	//_T(" 	case when hd_object='8' and hfl_feeid='B1100114' then 22 when hd_object='8' then 1 else 0 end as nguoinuocngoaitest,") \
	//_T(" 	case when hd_object='9' and hfl_feeid='B1100114' then 22 when hd_object='9' then 1 else 0 end as dichvutest,") \
	//_T(" 	case when hd_object in('1','2','3','4','8','9') and hfl_feeid='B1100114' then 22 when hd_object in('1','2','3','4','8','9') then 1 else 0 end as tongsotest") \
	//_T(" FROM 	pcms_order ") \
	//_T(" LEFT JOIN pcms_order_line ON (pcmso_orderid=pcmsol_orderid )") \
	////AND pcmso_instid=pcmsol_instid//
	//_T(" LEFT JOIN hms_doc ON (pcmso_docno=hd_docno)") \
	//_T(" lEFT JOIN hms_feelist ON (hfl_feeid=pcmsol_itemid)") \
	//_T(" LEFT JOIN lims_instrument ON (pcmso_instid=limsi_id)") \
	//_T(" WHERE pcmso_status in ('P','T')") \
	//_T(" AND hfl_servprice>0 and substr(hfl_groupid,1,2)='B1'") \
	//_T(" AND pcmso_performdate between timestamp '%s' and timestamp '%s' %s") \
	//_T(" order by hfl_line,hfl_idx") \
	//_T(" ) as tbl") \
	//_T(" GROUP BY item, nametest, line, idx") \
	//_T(" ORDER BY line, idx"), m_szFromDate, m_szToDate, szWhere);
	//rs.ExecSQL(szSQL);
	szSQL.Format(_T("SELECT") \
		_T("   item as item,") \
		_T("   nametest as nametest,") \
		_T("   groupid as groupid,") \
		_T("   applydate AS applydate,") \
		_T("   line,") \
		_T("   idx,") \
		_T("   sum(quan+bhytquan+bhytquandoi+bhytthannhansyquan+bhytkhac+bhytquannhan+bhytnothe+treem+treemcothe+chinhsach+dichvu+ban+tyc) as tongso,") \
		_T("   sum(tongsotest) as tongsotest,") \
		_T("   sum(quan) as quan,") \
		_T("   sum(quantest) as quantest,") \
		_T("   sum(bhytquan) as bhytquan,") \
		_T("   sum(bhytquantest) as bhytquantest,") \
		_T("   sum(bhytquandoi) as bhytquandoi,") \
		_T("   sum(bhytquandoitest) as bhytquandoitest,") \
		_T("   sum(bhytthannhansyquan) as bhytthannhansyquan,") \
		_T("   sum(bhytthannhansyquantest) as bhytthannhansyquantest,") \
		_T("   sum(bhytkhac) as bhytkhac,") \
		_T("   sum(bhytkhactest) as bhytkhactest,") \
		_T("   sum(bhytquannhan) as bhytquannhan,    ") \
		_T("   sum(bhytquannhantest) as bhytquannhantest,") \
		_T("   sum(bhytnothe) as bhytnothe,") \
		_T("   sum(bhytnothetest) as bhytnothetest,") \
		_T("   sum(treem) as treem,") \
		_T("   sum(treemtest) as treemtest,") \
		_T("   sum(treemcothe) as treemcothe,") \
		_T("   sum(treemcothetest) as treemcothetest,") \
		_T("   sum(chinhsach) as chinhsach,") \
		_T("   sum(chinhsachtest) as chinhsachtest,") \
		_T("   sum(dichvu) as dichvu,") \
		_T("   sum(dichvutest) as dichvutest,") \
		_T("   sum(ban) as ban,") \
		_T("   sum(bantest) as bantest,") \
		_T("   sum(tyc) as tyc,") \
		_T("   sum(tyctest) as tyctest") \
		_T("   FROM 	 (") \
		_T("     SELECT") \
		_T("       hfl_name as nametest,") \
		_T("       hfl_feeid as item,	 ") \
		_T("       hfl_groupid as groupid,	 ") \
		_T("       hfl_applydate as applydate,	 ") \
		_T("       hfl_line as line,	 ") \
		_T("       hfl_idx as idx,	 ") \
		_T("       hpc_docno as docno,") \
		_T("       1 as tongso,") \
		_T("       case when hpc_object in ('1','13') then 1 else 0 end as quan,") \
		_T("       case when hpc_object='2' then 1 else 0 end as bhytquan,") \
		_T("       case when hpc_object='3' then 1 else 0 end as chinhsach,") \
		_T("       case when hpc_object='4' then 1 else 0 end as bhytkhac,    ") \
		_T("       case when hpc_object='5' then 1 else 0 end as bhytthannhansyquan,") \
		_T("       case when hpc_object='6' then 1 else 0 end as treem,") \
		_T("       case when hpc_object='7' AND NVL(hpc_isreq, 'N') <> 'Y' then 1 else 0 end as dichvu,") \
		_T("       case when hpc_object='7' and hpc_isreq ='Y' and hpc_class='E' then 1 else 0 end as tyc,") \
		_T("       case when hpc_object='8' then 1 else 0 end as ban,  ") \
		_T("       case when hpc_object='9' then 1 else 0 end as treemcothe,") \
		_T("       case when hpc_object='10' then 1 else 0 end as bhytquandoi,") \
		_T("       case when hpc_object='11' then 1 else 0 end as bhytquannhan,") \
		_T("       case when hpc_object='12' then 1 else 0 end as bhytnothe,      	 ") \
		_T("       case when hpc_object in ('1','13') then hfl_scale else 0 end as quantest,") \
		_T("       case when hpc_object='2' then hfl_scale else 0 end as bhytquantest,") \
		_T("       case when hpc_object='3' then hfl_scale else 0 end as chinhsachtest,") \
		_T("       case when hpc_object='4' then hfl_scale else 0 end as bhytkhactest,    ") \
		_T("       case when hpc_object='5' then hfl_scale else 0 end as bhytthannhansyquantest,") \
		_T("       case when hpc_object='6' then hfl_scale else 0 end as treemtest,") \
		_T("       case when hpc_object='7' AND NVL(hpc_isreq, 'N') <> 'Y' then hfl_scale else 0 end as dichvutest,") \
		_T("       case when hpc_object='7' and hpc_isreq ='Y' and hpc_class='E' then hfl_scale else 0 end as tyctest,") \
		_T("       case when hpc_object='8' then hfl_scale else 0 end as bantest,  ") \
		_T("       case when hpc_object='9' then hfl_scale else 0 end as treemcothetest,") \
		_T("       case when hpc_object='10' then hfl_scale else 0 end as bhytquandoitest,") \
		_T("       case when hpc_object='11' then hfl_scale else 0 end as bhytquannhantest,") \
		_T("       case when hpc_object='12' then hfl_scale else 0 end as bhytnothetest, ") \
		_T("       case when hpc_object in('1','2','3','4','5','6','7','8','9','10','11','12','13') then hfl_scale else 0 end as tongsotest,") \
		_T("       (SELECT su_deptid FROM sys_user WHERE su_userid = hpc_practitioner) AS pdeptid") \
		_T("       FROM hms_testorder") \
		_T("       LEFT JOIN hms_testorderline ON (hpc_orderid=hpcl_orderid)") \
		_T("       LEFT JOIN hms_doc ON (hpc_docno=hd_docno)") \
		_T("       lEFT JOIN hms_fee_list ON (hfl_feeid=hpcl_itemid)") \
		//_T("       LEFT JOIN lims_order ON (hpc_docno=limso_docno AND hpc_orderid=limso_orderid)") \//
		//_T("       LEFT JOIN lims_instrument ON (HPCL_INSTID=limsi_id)") \//
		_T("       WHERE hpc_status in ('P','T')") \
		_T("       AND substr(hfl_groupid,1,2)='B1'") \
		//_T("       AND hpc_groupid = 'B1100' ") \//
		//_T("       AND hfl_servprice>=0 ") \//
		_T("       AND hfl_report <>'N' ") \
		//_T("       AND length(hpcl_instid)>0 ") \//
		_T("       AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T("       order by hfl_groupid,hfl_applydate, hfl_line,hfl_idx") \
		_T("       )") \
		_T("       %s GROUP BY groupid,applydate,item, nametest,line, idx ") \
		_T("       ORDER BY groupid, applydate, line, idx"), m_szFromDate, m_szToDate, szWhere, szWhere2); \
		rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 70);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 10);
	xls.SetColumnWidth(13, 10);
	xls.SetColumnWidth(14, 10);
	xls.SetColumnWidth(15, 10);
	xls.SetColumnWidth(16, 10);
	xls.SetColumnWidth(17, 10);
	xls.SetColumnWidth(18, 10);
	xls.SetColumnWidth(19, 10);
	xls.SetColumnWidth(20, 10);
	xls.SetColumnWidth(21, 10);
	xls.SetColumnWidth(22, 10);
	xls.SetColumnWidth(23, 10);


	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);
	xls.SetRowHeight(4, 20);
	xls.SetCellMergedColumns(0, 4, 28);
	xls.SetCellMergedColumns(0, 5, 28);
	xls.SetCellText(0, 1, pMF->m_szHealthService, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 2, pMF->m_szHospitalName, FMT_TEXT, true, 12, 0);
	TranslateString(_T("Department"), tmpStr);
	szTemp.Format(_T("%s: %s"), tmpStr, m_szDept);
	xls.SetCellText(0, 3, szTemp, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 4, _T("\x42\xC1O \x43\xC1O S\x1ED0 TEST \x43\x1EACN L\xC2M S\xC0NG TH\x45O M\xC1Y"),
		FMT_TEXT | FMT_CENTER, true, 16, 0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);
	TranslateString(_T("MachineName"), tmpStr);
	szTemp.Format(_T("%s: %s"), tmpStr, szMachineName);
	xls.SetCellText(0, 7, szTemp, FMT_TEXT, false, 12, 0);


	int nRow = 9;

	xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER,true);

	xls.SetCellMergedRows(1, nRow, 2);
	TranslateString(_T("Test Name"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER,true);

	//Tong so 
	xls.SetCellMergedColumns(2, nRow, 2);
	xls.SetCellText(2, nRow, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER, true);

	//1. Tong so order 
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(2, nRow+1, tmpStr, FMT_TEXT,true);
	//2. Tong so test
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(3, nRow+1, tmpStr, FMT_TEXT,true);

	//Quan
	xls.SetCellMergedColumns(4, nRow, 2);
	xls.SetCellText(4, nRow, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER, true);
	//3. So order benh nhan quan
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(4, nRow+1, tmpStr, FMT_TEXT,true);
	//4. So test benh nhan quan
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(5, nRow+1, tmpStr, FMT_TEXT,true);
	//BH quan	
	xls.SetCellMergedColumns(6, nRow, 2);
	xls.SetCellText(6, nRow, _T("\x42H qu\xE2n"), FMT_TEXT | FMT_CENTER, true);

	//5. So order bao hiem quan
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(6, nRow+1, tmpStr, FMT_TEXT,true);
	//6. So test bao hiem quan
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(7, nRow+1, tmpStr, FMT_TEXT,true);
	//BH quan doi
	xls.SetCellMergedColumns(8, nRow, 2);
	xls.SetCellText(8, nRow, _T("\x42H qu\xE2n \x111\x1ED9i"), FMT_TEXT | FMT_CENTER, true);
	//7. So order bao hiem quan doi
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(8, nRow+1, tmpStr, FMT_TEXT,true);

	//8. So test bao hiem quan doi
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(9, nRow+1, tmpStr, FMT_TEXT,true);
	//BH than nhan
	xls.SetCellMergedColumns(10, nRow, 2);
	xls.SetCellText(10, nRow, _T("\x42H th\xE2n nh\xE2n"), FMT_TEXT | FMT_CENTER, true);
	//9. So order bao hiem than nhan
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(10, nRow+1, tmpStr, FMT_TEXT,true);
	//10. So test bao hiem than nhan

	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(11, nRow+1, tmpStr, FMT_TEXT,true);
	//BH khac
	xls.SetCellMergedColumns(12, nRow, 2);
	xls.SetCellText(12, nRow, _T("\x42H kh\xE1\x63"), FMT_TEXT | FMT_CENTER, true);
	//11. So order bao hiem khac
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(12, nRow+1, tmpStr, FMT_TEXT,true);
	//12. So test bao hiem khac

	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(13, nRow+1, tmpStr, FMT_TEXT,true);
	//BH quan nhan
	xls.SetCellMergedColumns(14, nRow, 2);
	xls.SetCellText(14, nRow, _T("\x42H qu\xE2n nh\xE2n"), FMT_TEXT | FMT_CENTER, true);
	//13. So order bao hiem quan nhan

	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(14, nRow+1, tmpStr, FMT_TEXT,true);

	//14. So test bao hiem quan nhan
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(15, nRow+1, tmpStr, FMT_TEXT,true);
	//BH no the
	xls.SetCellMergedColumns(16, nRow, 2);
	xls.SetCellText(16, nRow, _T("\x42H n\x1EE3 th\x1EBB"), FMT_TEXT | FMT_CENTER, true);
	//15. So order BH no the
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(16, nRow+1, tmpStr, FMT_TEXT,true);

	//16. So test BH no the
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(17, nRow+1, tmpStr, FMT_TEXT,true);
	//Tre em
	xls.SetCellMergedColumns(18, nRow, 2);
	xls.SetCellText(18, nRow, _T("Tr\x1EBB \x65m"), FMT_TEXT | FMT_CENTER, true);
	//17. So order tre em
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(18, nRow+1, tmpStr, FMT_TEXT,true);
	//18. So test tre em
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(19, nRow+1, tmpStr, FMT_TEXT,true);
	//TE co the
	xls.SetCellMergedColumns(20, nRow, 2);
	xls.SetCellText(20, nRow, _T("TE \x63\xF3 th\x1EBB"), FMT_TEXT | FMT_CENTER, true);
	//19. So order tre em co the
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(20, nRow+1, tmpStr, FMT_TEXT,true);
	//20. So test tre em co the
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(21, nRow+1, tmpStr, FMT_TEXT,true);
	//Chinh sach
	xls.SetCellMergedColumns(22, nRow, 2);
	xls.SetCellText(22, nRow, _T("\x43h\xEDnh s\xE1\x63h"), FMT_TEXT | FMT_CENTER, true);
	//21. So order chinh sach
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(22, nRow+1, tmpStr, FMT_TEXT,true);
	//22. So test chinh sach
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(23, nRow+1, tmpStr, FMT_TEXT,true);
	//Dich vu
	xls.SetCellMergedColumns(24, nRow, 2);
	xls.SetCellText(24, nRow, _T("\x44\x1ECB\x63h v\x1EE5"), FMT_TEXT | FMT_CENTER, true);
	//23. So order dich vu
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(24, nRow+1, tmpStr, FMT_TEXT,true);
	//24. So test dich vu
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(25, nRow+1, tmpStr, FMT_TEXT,true);
	//ban
	xls.SetCellMergedColumns(26, nRow, 2);
	xls.SetCellText(26, nRow, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER, true);
	//25. So order ban
	TranslateString(_T("L\x1B0\x1EE3t \x58N"), tmpStr);
	xls.SetCellText(26, nRow+1, tmpStr, FMT_TEXT,true);
	//26. So test ban
	TranslateString(_T("S\x1ED1 test"), tmpStr);
	xls.SetCellText(27, nRow+1, tmpStr, FMT_TEXT,true);

	//theo yeu cau
	xls.SetCellMergedColumns(28, nRow, 2);
	xls.SetCellText(28, nRow, _T("TYC"), FMT_TEXT | FMT_CENTER, true);
	//25. So order tyc
	TranslateString(_T("L\x1B0\x1EE3t TYC"), tmpStr);
	xls.SetCellText(28, nRow+1, tmpStr, FMT_TEXT,true);
	//26. So test tyc
	TranslateString(_T("TYC test"), tmpStr);
	xls.SetCellText(29, nRow+1, tmpStr, FMT_TEXT,true);

	int nIndex=1, nTotal[28];
	for (int i = 0; i < 28; i++)
	{
		nTotal[i]=0;
	}
	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow+1, tmpStr, FMT_INTEGER);

		//1. Ten XN
		rs.GetValue(_T("nametest"), tmpStr);
		xls.SetCellText(1, nRow+1, tmpStr, FMT_TEXT);
		//2. Tong so order
		rs.GetValue(_T("tongso"), tmpStr);
		xls.SetCellText(2, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[0] +=ToInt(tmpStr);
		//3. Tong so test
		rs.GetValue(_T("tongsotest"), tmpStr);
		xls.SetCellText(3, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[1] +=ToInt(tmpStr);
		//4. Order quan
		rs.GetValue(_T("quan"), tmpStr);
		xls.SetCellText(4, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[2] +=ToInt(tmpStr);
		//5. Order quan test
		rs.GetValue(_T("quantest"), tmpStr);
		xls.SetCellText(5, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[3] +=ToInt(tmpStr);
		//6. order bhytquan
		rs.GetValue(_T("bhytquan"), tmpStr);
		xls.SetCellText(6, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[4] +=ToInt(tmpStr);
		//7. Test bhytquandoi
		rs.GetValue(_T("bhytquantest"), tmpStr);
		xls.SetCellText(7, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[5] +=ToInt(tmpStr);

		//8. Order bhytquandoi
		rs.GetValue(_T("bhytquandoi"), tmpStr);
		xls.SetCellText(8, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[6] +=ToInt(tmpStr);
		//9. Test bhytquandoitest
		rs.GetValue(_T("bhytquandoitest"), tmpStr);
		xls.SetCellText(9, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[7] +=ToInt(tmpStr);
		//10. Order bhytthannhansyquan
		rs.GetValue(_T("bhytthannhansyquan"), tmpStr);
		xls.SetCellText(10, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[8] +=ToInt(tmpStr);
		//11. Test bhytthannhansyquan
		rs.GetValue(_T("bhytthannhansyquantest"), tmpStr);
		xls.SetCellText(11, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[9] +=ToInt(tmpStr);
		//12. Order bhytkhac
		rs.GetValue(_T("bhytkhac"), tmpStr);
		xls.SetCellText(12, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[10] +=ToInt(tmpStr);
		//13. Test bhytkhactest
		rs.GetValue(_T("bhytkhactest"), tmpStr);
		xls.SetCellText(13, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[11] +=ToInt(tmpStr);
		//14. Order bhytquannhan
		rs.GetValue(_T("bhytquannhan"), tmpStr);
		xls.SetCellText(14, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[12] +=ToInt(tmpStr);
		//15. Test bhytquannhantest
		rs.GetValue(_T("bhytquannhantest"), tmpStr);
		xls.SetCellText(15, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[13] +=ToInt(tmpStr);
		//16. Order bhytnothe
		rs.GetValue(_T("bhytnothe"), tmpStr);
		xls.SetCellText(16, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[14] +=ToInt(tmpStr);
		//17. Test bhytnothetest
		rs.GetValue(_T("bhytnothetest"), tmpStr);
		xls.SetCellText(17, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[15] +=ToInt(tmpStr);
		//18. Order treem
		rs.GetValue(_T("treem"), tmpStr);
		xls.SetCellText(18, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[16] +=ToInt(tmpStr);
		//19. Test treemtest
		rs.GetValue(_T("treemtest"), tmpStr);
		xls.SetCellText(19, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[17] +=ToInt(tmpStr);
		//20. Order treemcothe
		rs.GetValue(_T("treemcothe"), tmpStr);
		xls.SetCellText(20, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[18] +=ToInt(tmpStr);
		//21. Test treemcothe
		rs.GetValue(_T("treemcothetest"), tmpStr);
		xls.SetCellText(21, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[19] +=ToInt(tmpStr);
		//22. Order chinhsach
		rs.GetValue(_T("chinhsach"), tmpStr);
		xls.SetCellText(22, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[20] +=ToInt(tmpStr);
		//23. Test chinhsachtest
		rs.GetValue(_T("chinhsachtest"), tmpStr);
		xls.SetCellText(23, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[21] +=ToInt(tmpStr);
		//24. Order dichvu
		rs.GetValue(_T("dichvu"), tmpStr);
		xls.SetCellText(24, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[22] +=ToInt(tmpStr);
		//25. Test dichvutest
		rs.GetValue(_T("dichvutest"), tmpStr);
		xls.SetCellText(25, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[23] +=ToInt(tmpStr);
		//26. Order ban
		rs.GetValue(_T("ban"), tmpStr);
		xls.SetCellText(26, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[24] +=ToInt(tmpStr);
		//27. Test ban
		rs.GetValue(_T("bantest"), tmpStr);
		xls.SetCellText(27, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[25] +=ToInt(tmpStr);
		//28. Order tyc
		rs.GetValue(_T("tyc"), tmpStr);
		xls.SetCellText(28, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[26] +=ToInt(tmpStr);
		//29. Test tyc
		rs.GetValue(_T("tyctest"), tmpStr);
		xls.SetCellText(29, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[27] +=ToInt(tmpStr);


		rs.MoveNext();
	}
	nRow++;
	TranslateString(_T("Total"),tmpStr);
	xls.SetCellText(1, nRow+1, tmpStr, FMT_TEXT, true);
	for (int i = 0; i < 28; i++)
	{		
		tmpStr.Format(_T("%d"),nTotal[i] );		
		xls.SetCellText(i+2, nRow+1, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.SetPaperSize(XLPAPER_A4,true);
	xls.Save(_T("Exports\\BAO CAO CAN LAM SANG THEO MAY.XLS"));


}
void CLIMSTestReportByMachine::OnExport2()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szTemp;
	int nMachineID;
	CString szMachineID, szMachineName;
	CString szDeptID, szDeptName;
	CString szTestID, szTestName, szObjectID, szObjectName;
	CExcel xls;

	UpdateData(TRUE);
	BeginWaitCursor();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

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
		szWhere.AppendFormat(_T(" and hpc_object in (%s)"), szObjectID);
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
	if (m_bSubItem)
	{
		{
			szWhere.AppendFormat(_T(" AND hfl_servprice>0"));
		}


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
// 	if (!szDeptName.IsEmpty())
// 	{
// 		szWhere.AppendFormat(_T(" AND hpc_deptid in (%s)"), szDeptName);
// 	}
	//szSQL.Format(_T(" SELECT") \
	//_T(" item as item,") \
	//_T(" nametest as nametest,") \
	//_T(" line,") \
	//_T(" idx,") \
	//_T(" sum(tongso) as tongso,") \
	//_T(" sum(tongsotest) as tongsotest,") \
	//_T(" sum(baohiem) as baohiem,") \
	//_T(" sum(baohiemtest) as baohiemtest,") \
	//_T(" sum(treem) as treem,") \
	//_T(" sum(treemtest) as treemtest,") \
	//_T(" sum(baovesuckhoe) as baovesuckhoe,") \
	//_T(" sum(baovesuckhoetest) as baovesuckhoetest,") \
	//_T(" sum(miengiam) as miengiam,") \
	//_T(" sum(miengiamtest) as miengiamtest,") \
	//_T(" sum(nguoinuocngoai) as nguoinuocngoai,") \
	//_T(" sum(nguoinuocngoaitest) as nguoinuocngoaitest,") \
	//_T(" sum(dichvu) as dichvu,") \
	//_T(" sum(dichvutest) as dichvutest") \
	//_T(" FROM") \
	//_T(" (") \
	//_T(" SELECT ") \
	//_T(" 	hfl_name as nametest,") \
	//_T(" 	hfl_feeid as item, ") \
	//_T(" 	hfl_line as line,") \
	//_T(" 	hfl_idx as idx,") \
	//_T(" 	pcmso_docno as docno,") \
	//_T(" 	1 as tongso,") \
	//_T(" 	case when hd_object='1' then 1 else 0 end as baohiem,") \
	//_T(" 	case when hd_object='2' then 1 else 0 end as treem,") \
	//_T(" 	case when hd_object='3' then 1 else 0 end as baovesuckhoe,") \
	//_T(" 	case when hd_object='4' then 1 else 0 end as miengiam,") \
	//_T(" 	case when hd_object='8' then 1 else 0 end as nguoinuocngoai,") \
	//_T(" 	case when hd_object='9' then 1 else 0 end as dichvu,") \
	//_T(" 	case when hd_object='1' and hfl_feeid='B1100114' then 22 when hd_object='1' then 1 else 0 end as baohiemtest,") \
	//_T(" 	case when hd_object='2' and hfl_feeid='B1100114' then 22 when hd_object='2' then 1 else 0 end as treemtest,") \
	//_T(" 	case when hd_object='3' and hfl_feeid='B1100114' then 22 when hd_object='3' then 1 else 0 end as baovesuckhoetest,") \
	//_T(" 	case when hd_object='4' and hfl_feeid='B1100114' then 22 when hd_object='4' then 1 else 0 end as miengiamtest,") \
	//_T(" 	case when hd_object='8' and hfl_feeid='B1100114' then 22 when hd_object='8' then 1 else 0 end as nguoinuocngoaitest,") \
	//_T(" 	case when hd_object='9' and hfl_feeid='B1100114' then 22 when hd_object='9' then 1 else 0 end as dichvutest,") \
	//_T(" 	case when hd_object in('1','2','3','4','8','9') and hfl_feeid='B1100114' then 22 when hd_object in('1','2','3','4','8','9') then 1 else 0 end as tongsotest") \
	//_T(" FROM 	pcms_order ") \
	//_T(" LEFT JOIN pcms_order_line ON (pcmso_orderid=pcmsol_orderid )") \
	////AND pcmso_instid=pcmsol_instid//
	//_T(" LEFT JOIN hms_doc ON (pcmso_docno=hd_docno)") \
	//_T(" lEFT JOIN hms_feelist ON (hfl_feeid=pcmsol_itemid)") \
	//_T(" LEFT JOIN lims_instrument ON (pcmso_instid=limsi_id)") \
	//_T(" WHERE pcmso_status in ('P','T')") \
	//_T(" AND hfl_servprice>0 and substr(hfl_groupid,1,2)='B1'") \
	//_T(" AND pcmso_performdate between timestamp '%s' and timestamp '%s' %s") \
	//_T(" order by hfl_line,hfl_idx") \
	//_T(" ) as tbl") \
	//_T(" GROUP BY item, nametest, line, idx") \
	//_T(" ORDER BY line, idx"), m_szFromDate, m_szToDate, szWhere);
	//rs.ExecSQL(szSQL);
	szSQL.Format(_T("SELECT") \
		_T("   item as item,") \
		_T("   nametest as nametest,") \
		_T("   groupid as groupid,") \
		_T("   applydate AS applydate,") \
		_T("   line,") \
		_T("   idx,") \
		_T("   sum(tyc) as tyc,") \
		_T("   sum(tyctest) as tyctest,") \
		_T("   unitprice AS unitprice,") \
		_T("   realprice AS realprice,") \
		_T("   SUM(tyc * realprice) AS totalprice") \
		_T("   FROM 	 (") \
		_T("     SELECT") \
		_T("       hfl_name as nametest,") \
		_T("       hfl_feeid as item,	 ") \
		_T("       hfl_groupid as groupid,	 ") \
		_T("       hfl_applydate as applydate,	 ") \
		_T("       hfl_line as line,	 ") \
		_T("       hfl_idx as idx,	 ") \
		_T("       hpc_docno as docno,") \
		_T("       hfl_servprice AS unitprice,") \
		_T("       hfe_unitprice AS realprice,") \
		_T("       case when hd_object='7' and hd_isreq ='Y' and hpc_class='E' then 1 else 0 end as tyc,") \
		_T("       case when hd_object='7' and hd_isreq ='Y' and hpc_class='E' then hfl_scale when hd_object='7' and hd_isreq ='Y' and hpc_class='E' then 1 else 0 end as tyctest") \
		_T("       FROM hms_testorder") \
		_T("       LEFT JOIN hms_testorderline ON (hpc_orderid=hpcl_orderid)") \
		_T("       LEFT JOIN hms_fee ON(hfe_docno = hpc_docno AND hfe_itemid = hpcl_itemid)") \
		_T("       LEFT JOIN hms_doc ON (hpc_docno=hd_docno)") \
		_T("       lEFT JOIN hms_fee_list ON (hfl_feeid=hpcl_itemid)") \
		_T("       LEFT JOIN lims_order ON (hpc_docno=limso_docno AND hpc_orderid=limso_orderid)") \
		//_T("       LEFT JOIN lims_instrument ON (limso_instid=limsi_id)") \//
		_T("       WHERE hpc_status in ('P','T')") \
		_T("       AND substr(hfl_groupid,1,2)='B1'") \
		_T("       AND hfl_report ='Y' ") \
		_T("       AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hpc_deptid in ('TYC') %s") \
		_T("       )") \
		_T("       GROUP BY groupid,applydate,item, nametest,line, idx, unitprice, realprice ") \
		_T("       ORDER BY groupid, applydate, line, idx, realprice "), m_szFromDate, m_szToDate, szWhere); \
		rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 70);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);


	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 2);
	xls.SetRowHeight(4, 20);
	xls.SetCellMergedColumns(0, 4, 6);
	xls.SetCellMergedColumns(0, 5, 6);
	xls.SetCellText(0, 1, pMF->m_szHealthService, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 2, pMF->m_szHospitalName, FMT_TEXT, true, 12, 0);
	TranslateString(_T("Department"), tmpStr);
	szTemp.Format(_T("%s: %s"), tmpStr, m_szDept);
	xls.SetCellText(0, 3, szTemp, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 4, _T("\x42\xC1O \x43\xC1O S\x1ED0 TEST \x43\x1EACN L\xC2M S\xC0NG TH\x45O M\xC1Y"),
		FMT_TEXT | FMT_CENTER, true, 16, 0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);
	TranslateString(_T("MachineName"), tmpStr);
	szTemp.Format(_T("%s: %s"), tmpStr, szMachineName);
	xls.SetCellText(0, 7, szTemp, FMT_TEXT, false, 12, 0);


	int nRow = 9;

	xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER,true);

	xls.SetCellMergedRows(1, nRow, 2);
	TranslateString(_T("Test Name"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER,true);

	//theo yeu cau
	xls.SetCellMergedColumns(2, nRow, 2);
	xls.SetCellText(2, nRow, _T("TYC"), FMT_TEXT | FMT_CENTER, true);
	//25. So order tyc
	TranslateString(_T("L\x1B0\x1EE3t TYC"), tmpStr);
	xls.SetCellText(2, nRow+1, tmpStr, FMT_TEXT,true);
	//26. So test tyc
	TranslateString(_T("TYC test"), tmpStr);
	xls.SetCellText(3, nRow+1, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedRows(4, nRow, 2);
	TranslateString(_T("Gi\xE1 \x64\x1ECB\x63h v\x1EE5"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING,true);

	xls.SetCellMergedRows(5, nRow, 2);
	TranslateString(_T("Gi\xE1 th\x1EF1\x63 thu"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING,true);

	xls.SetCellMergedRows(6, nRow, 2);
	TranslateString(_T("Total Amount"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT | FMT_CENTER,true);

	int nIndex=1, nTotal[6];
	for (int i = 0; i < 6; i++)
	{
		nTotal[i]=0;
	}
	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow+1, tmpStr, FMT_INTEGER);

		//1. Ten XN
		rs.GetValue(_T("nametest"), tmpStr);
		xls.SetCellText(1, nRow+1, tmpStr, FMT_TEXT);
		//28. Order tyc
		rs.GetValue(_T("tyc"), tmpStr);
		xls.SetCellText(2, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[0] +=ToInt(tmpStr);
		//29. Test tyc
		rs.GetValue(_T("tyctest"), tmpStr);
		xls.SetCellText(3, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[1] +=ToInt(tmpStr);

		rs.GetValue(_T("unitprice"), tmpStr);
		xls.SetCellText(4, nRow+1, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("realprice"), tmpStr);
		xls.SetCellText(5, nRow+1, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("totalprice"), tmpStr);
		xls.SetCellText(6, nRow+1, tmpStr, FMT_INTEGER);
		if (!tmpStr.IsEmpty())nTotal[4] +=ToInt(tmpStr);


		rs.MoveNext();
	}
	nRow++;
	TranslateString(_T("Total"),tmpStr);
	xls.SetCellText(1, nRow+1, tmpStr, FMT_TEXT, true);
	for (int i = 0; i < 6; i++)
	{		
		tmpStr.Format(_T("%d"),nTotal[i] );		
		xls.SetCellText(i+2, nRow+1, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.SetPaperSize(XLPAPER_A4,true);
	xls.Save(_T("Exports\\BAO CAO CAN LAM SANG THEO MAY.XLS"));


}
void CLIMSTestReportByMachine::OnObjectDblClick(){
	
} 
void CLIMSTestReportByMachine::OnObjectSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestReportByMachine::OnObjectDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestReportByMachine::OnObjectLoadData(){

	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
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

void CLIMSTestReportByMachine::OnListDblClick(){
	
} 
void CLIMSTestReportByMachine::OnListSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestReportByMachine::OnListDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestReportByMachine::OnListLoadData(){

	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	//szSQL.Format(_T(" select limsi_id as id, limsi_model as name, limsi_port as port, limsi_baudrate as baudrate from lims_instrument where limsi_deptid = '%s' order by limsi_id "), m_szPerformDeptKey);

	szSQL.Format(_T(" select * from") \
				_T(" (") \
				_T(" select limsi_id as id, limsi_model as name, limsi_port as port, limsi_baudrate as baudrate ") \
				_T(" from lims_instrument") \
				_T(" where limsi_deptid = '%s'") \
				_T(" UNION ALL") \
				_T(" select HPCL_INSTID as id, HPCL_INSTNAME as name, cast('TPH' as nvarchar2(5)) as port, 9600 as baudrate") \
				_T(" FROM tph_machine_list_v2") \
				_T(" where hpcl_deptid = '%s'") \
				_T(" )") \
				_T(" order by id"), m_szPerformDeptKey, m_szPerformDeptKey);

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
void CLIMSTestReportByMachine::OnSubItemSelect()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
}
void CLIMSTestReportByMachine::OnOutPatientSelect()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
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
	void CLIMSTestReportByMachine::OnInPatientSelect()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
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
	void CLIMSTestReportByMachine::OnAllHospitalsSelect()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
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
void CLIMSTestReportByMachine::OnPDeptSelect()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
}
void CLIMSTestReportByMachine::OnDepartmentDblClick(){
	
} 
void CLIMSTestReportByMachine::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestReportByMachine::OnDepartmentDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestReportByMachine::OnDepartmentLoadData()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDepartment.BeginLoad();
	m_wndDepartment.DeleteAllItems();
	int nCount = 0;
	if (m_bOutPatient)
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept  where sd_type in('KB') order by sd_id "));
	}
	if (m_bInPatient)
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept  where sd_type in('DT') order by sd_id "));
	}
	
	if (m_bAllHospitals) 
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept  where sd_type in('KB','DT') order by sd_id "));
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

void CLIMSTestReportByMachine::OnTestGroupDblClick(){
	
} 
void CLIMSTestReportByMachine::OnTestGroupSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSTestReportByMachine::OnTestGroupDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSTestReportByMachine::OnTestGroupLoadData()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestGroup.BeginLoad(); 
	m_wndTestGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT sup_permid as testID, ") \
				_T("		hfg_name as Testname ") \
				_T("  FROM sys_userperm ") \
				_T("  LEFT JOIN hms_fee_group ON (sup_permid=hfg_id) ") \
				_T("  WHERE substr(hfg_id,1,2)='B1' AND sup_userid='%s'"), m_szUserKey);
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

int CLIMSTestReportByMachine::OnAddLIMSTestReportByMachine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSTestReportByMachine::OnEditLIMSTestReportByMachine(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSTestReportByMachine::OnDeleteLIMSTestReportByMachine(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelLIMSTestReportByMachine(); 
 	}
	return 0;
}
int CLIMSTestReportByMachine::OnSaveLIMSTestReportByMachine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd(); 
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
 		//OnLIMSTestReportByMachineListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLIMSTestReportByMachine::OnCancelLIMSTestReportByMachine(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CLIMSTestReportByMachine::OnLIMSTestReportByMachineListLoadData()
{
	return 0;
}
int CLIMSTestReportByMachine::OnMachineListCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, TRUE);
	}

	return 0;
}
int CLIMSTestReportByMachine::OnMachineListUnCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, FALSE);
	}

	return 0;
}

int CLIMSTestReportByMachine::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (!m_wndObject.GetCheck(i))
			m_wndObject.SetCheck(i, TRUE);
	}

	return 0;
}
int CLIMSTestReportByMachine::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
			m_wndObject.SetCheck(i, FALSE);
	}

	return 0;
}

int CLIMSTestReportByMachine::OnDeptListCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (!m_wndDepartment.GetCheck(i))
			m_wndDepartment.SetCheck(i, TRUE);
	}

	return 0;
}
int CLIMSTestReportByMachine::OnDeptListUnCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
			m_wndDepartment.SetCheck(i, FALSE);
	}

	return 0;
}