#include "HMSBackupEMRList.h"
#include "MainFrm.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBackupEMRList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBackupEMRList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnDocumentNoSetfocus();} */ 
static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnDocumentNoKillfocus();
}
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSBackupEMRList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBackupEMRList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnDepartmentKillfocus();
}*/
static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnDepartmentKillfocus();
}
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSBackupEMRList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnTreatmentTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBackupEMRList* )pWnd)->OnTreatmentTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatmentTypeSelendokFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnTreatmentTypeSelendok();
}
/*static void _OnTreatmentTypeSetfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnTreatmentTypeKillfocus();
}*/
/*static void _OnTreatmentTypeKillfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnTreatmentTypeKillfocus();
}*/
static long _OnTreatmentTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSBackupEMRList *)pWnd)->OnTreatmentTypeLoadData();
}
/*static void _OnTreatmentTypeAddNewFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnTreatmentTypeAddNew();
}*/

/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSBackupEMRList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSBackupEMRList *)pWnd)->OnNameCheckValue();
} 
static int _OnArchivalNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSBackupEMRList *)pWnd)->OnArchivalNoCheckValue();;
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSBackupEMRList *pVw = (CHMSBackupEMRList *)pWnd;
	pVw->OnSearchSelect();
} 

static void _OnOpenDirSelectFnc(CWnd *pWnd){
	CHMSBackupEMRList *pVw = (CHMSBackupEMRList *)pWnd;
	pVw->OnOpenDirSelect();
} 

static void _OnBackupSelectFnc(CWnd *pWnd){
	CHMSBackupEMRList *pVw = (CHMSBackupEMRList *)pWnd;
	pVw->OnBackupSelect();
} 

static long _OnRecordListLoadDataFnc(CWnd *pWnd){
	return ((CHMSBackupEMRList*)pWnd)->OnRecordListLoadData();
} 
static void _OnRecordListDblClickFnc(CWnd *pWnd){
	((CHMSBackupEMRList*)pWnd)->OnRecordListDblClick();
} 
static void _OnRecordListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSBackupEMRList*)pWnd)->OnRecordListSelectChange(nOldItem, nNewItem);
} 
static int _OnRecordListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSBackupEMRList*)pWnd)->OnRecordListDeleteItem();
}
static int _OnRecordListExportFnc(CWnd *pWnd){
	 return ((CHMSBackupEMRList*)pWnd)->OnRecordListExport();
}

static int _OnSelectAllFnc(CWnd *pWnd){
	 return ((CHMSBackupEMRList*)pWnd)->OnSelectAll();
}

static int _OnUnSelectAllFnc(CWnd *pWnd){
	 return ((CHMSBackupEMRList*)pWnd)->OnUnSelectAll();
}
static int _OnBackupRecordFnc(CWnd *pWnd){
	 return ((CHMSBackupEMRList*)pWnd)->OnBackupRecord();
}

static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CHMSBackupEMRList*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CHMSBackupEMRList*)pWnd)->OnOutPatientSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CHMSBackupEMRList*)pWnd)->OnAllSelect();
}
static void _OnSendSelectFnc(CWnd *pWnd){
	  ((CHMSBackupEMRList*)pWnd)->OnSendSelect();
}
static void _OnReturnSelectFnc(CWnd *pWnd){
	  ((CHMSBackupEMRList*)pWnd)->OnReturnSelect();
}
static void _OnApproveSelectFnc(CWnd *pWnd){
	  ((CHMSBackupEMRList*)pWnd)->OnApproveSelect();
}
static void _OnDontSendSelectFnc(CWnd *pWnd){
	  ((CHMSBackupEMRList*)pWnd)->OnDontSendSelect();
}
static int _OnAddHMSBackupEMRListFnc(CWnd *pWnd){
	 return ((CHMSBackupEMRList*)pWnd)->OnAddHMSBackupEMRList();
} 
static int _OnEditHMSBackupEMRListFnc(CWnd *pWnd){
	 return ((CHMSBackupEMRList*)pWnd)->OnEditHMSBackupEMRList();
} 
static int _OnDeleteHMSBackupEMRListFnc(CWnd *pWnd){
	 return ((CHMSBackupEMRList*)pWnd)->OnDeleteHMSBackupEMRList();
} 
static int _OnSaveHMSBackupEMRListFnc(CWnd *pWnd){
	 return ((CHMSBackupEMRList*)pWnd)->OnSaveHMSBackupEMRList();
} 
static int _OnCancelHMSBackupEMRListFnc(CWnd *pWnd){
	 return ((CHMSBackupEMRList*)pWnd)->OnCancelHMSBackupEMRList();
} 
CHMSBackupEMRList::CHMSBackupEMRList()	
{
	m_nDlgWidth = 945;
	m_nDlgHeight = 815;
	SetDefaultValues();
}
CHMSBackupEMRList::~CHMSBackupEMRList(){
}
void CHMSBackupEMRList::OnCreateComponents()
{
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1005, 625);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 95, 55);
	m_wndFromDate.Create(this,100, 30, 190, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 195, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 375, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 60, 95, 85);
	m_wndDocumentNo.Create(this,100, 60, 190, 85); 
	m_wndTreatmentTypeLabel.Create(this, _T("Treatment Type"), 685, 30, 785, 55);
	m_wndTreatmentType.Create(this,790, 30, 910, 55);	
	m_wndDepartmentLabel.Create(this, _T("Department"), 380, 30, 465, 55);
	m_wndDepartment.Create(this,470, 30, 680, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 380, 60, 465, 85);
	m_wndName.Create(this,470, 60, 680, 85); 	
	m_wndRecordList.Create(this,10, 90, 1000, 620); 
	m_wndArchivalNoLabel.Create(this, _T("Archival No"), 195, 60, 280, 85);
	m_wndArchivalNo.Create(this,285, 60, 375, 85); 
	m_wndTotalLabel.Create(this, _T("Total"), 685, 60, 785, 85);
	m_wndTotal.Create(this,790, 60, 910, 85);
	m_wndSearch.Create(this, _T("Search"), 915, 60, 1000, 85);
	
	m_wndAll.Create(this, _T("All"), 10, 630, 125, 655);
	m_wndDontSend.Create(this, _T("Đã backup"), 130, 630, 265, 655);
	m_wndSend.Create(this, _T("Chưa backup"), 270, 630, 405, 655);
	m_wndOpenDir.Create(this, _T("Vị trí"), 815, 630, 910, 655);
	m_wndBackup.Create(this, _T("&Backup"), 915, 630, 1000, 655);
}
void CHMSBackupEMRList::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));
	m_wndDocumentNo.SetLimitText(16);
	//m_wndDocumentNo.SetCheckValue(true);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(81);
	m_wndName.SetLimitText(75);
	m_wndArchivalNo.SetLimitText(75);
	//m_wndName.SetCheckValue(true);
	m_wndTotal.SetReadOnly(true);
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndTreatmentType.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndTreatmentType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndRecordList.InsertColumn(0, _T("Document No"), CFMT_TEXT, 70);
	m_wndRecordList.InsertColumn(1, _T("Record No"), CFMT_TEXT, 80);
	m_wndRecordList.InsertColumn(2, _T("Số BA vviện"), CFMT_TEXT, 80);
	
	m_wndRecordList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 170);
	m_wndRecordList.InsertColumn(4, _T("Age"), CFMT_TEXT, 40);
	m_wndRecordList.InsertColumn(5, _T("Sex"), CFMT_TEXT, 40);
	m_wndRecordList.InsertColumn(6, _T("Address"), CFMT_TEXT, 200);
	m_wndRecordList.InsertColumn(7, _T("Admission Date"), CFMT_DATETIME, 80);
	m_wndRecordList.InsertColumn(8, _T("Out Date"), CFMT_DATETIME, 80);
	m_wndRecordList.InsertColumn(9, _T("In From Dept"), CFMT_TEXT, 105);
	m_wndRecordList.InsertColumn(10, _T("Out From Dept"), CFMT_TEXT, 105);
	m_wndRecordList.InsertColumn(11, _T("Have Film"), CFMT_TEXT, 50);
	m_wndRecordList.InsertColumn(12, _T("Diagnostic"), CFMT_TEXT, 180);
	m_wndRecordList.InsertColumn(13, _T("Class"), CFMT_TEXT, 0);
	m_wndRecordList.InsertColumn(14, _T("Rank"), CFMT_TEXT, 100);	
	m_wndRecordList.InsertColumn(15, _T("Object"), CFMT_TEXT, 150);	
	m_wndRecordList.InsertColumn(16, _T("Duration"), CFMT_DATETIME, 150);
	m_wndRecordList.SetCheckBox(true);

}
void CHMSBackupEMRList::OnSetWindowEvents()
{
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);

	m_wndTreatmentType.SetEvent(WE_SELENDOK, _OnTreatmentTypeSelendokFnc);
	//m_wndTreatmentType.SetEvent(WE_SETFOCUS, _OnTreatmentTypeSetfocusFnc);
	//m_wndTreatmentType.SetEvent(WE_KILLFOCUS, _OnTreatmentTypeKillfocusFnc);
	m_wndTreatmentType.SetEvent(WE_SELCHANGE, _OnTreatmentTypeSelectChangeFnc);
	m_wndTreatmentType.SetEvent(WE_LOADDATA, _OnTreatmentTypeLoadDataFnc);
	//m_wndTreatmentType.SetEvent(WE_ADDNEW, _OnTreatmentTypeAddNewFnc);

	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndArchivalNo.SetEvent(WE_CHECKVALUE, _OnArchivalNoCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndRecordList.SetEvent(WE_SELCHANGE, _OnRecordListSelectChangeFnc);
	m_wndRecordList.SetEvent(WE_LOADDATA, _OnRecordListLoadDataFnc);
	m_wndRecordList.SetEvent(WE_DBLCLICK, _OnRecordListDblClickFnc);

	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndDontSend.SetEvent(WE_CLICK, _OnDontSendSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);

	m_wndOpenDir.SetEvent(WE_CLICK, _OnOpenDirSelectFnc);
	m_wndBackup.SetEvent(WE_CLICK, _OnBackupSelectFnc);
	//m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	//m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);

	m_wndRecordList.AddEvent(1, _T("Select all"), _OnSelectAllFnc);
	m_wndRecordList.AddEvent(0, _T("-"));
	m_wndRecordList.AddEvent(2, _T("Un select all"), _OnUnSelectAllFnc);
	m_wndRecordList.AddEvent(0, _T("-"));
	m_wndRecordList.AddEvent(3, _T("Backup"), _OnBackupRecordFnc);
	m_wndRecordList.AddEvent(0, _T("-"));
	m_wndRecordList.AddEvent(4, _T("Xuất Excell"), _OnRecordListExportFnc);

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize() + 3, TRUE); 
	CMainFrame *pMF = (CMainFrame* ) AfxGetMainWnd();
	m_szFromDate = pMF->GetSysDate();
	m_szToDate = pMF->GetSysDate();
	
	UpdateData(FALSE);
	
}
void CHMSBackupEMRList::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndArchivalNo.GetDlgCtrlID(), m_szArchivalNo);
	DDX_Text(pDX, m_wndTotal.GetDlgCtrlID(), m_nTotal);
	DDX_TextEx(pDX, m_wndTreatmentType.GetDlgCtrlID(), m_szTreatmentTypeKey);
	//DDX_Check(pDX, m_wndPatientDead.GetDlgCtrlID(), m_bPatientDead);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndDontSend.GetDlgCtrlID(), m_nDontSend);
	DDX_Radio(pDX, m_wndSend.GetDlgCtrlID(), m_nSend);
}
void CHMSBackupEMRList::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSBackupEMRList::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBackupEMRList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDocumentNo=0;
	m_szDepartmentKey.Empty();
	m_szName.Empty();
	m_szArchivalNo.Empty();
	m_nInPatient=1;
	m_nTotal = 0;
	//m_nOutPatient=0;
	m_nAll=0;
	m_nSend=1;
	m_nReturn=1;
	m_nApprove=1;
	m_nDontSend=1;
}
int CHMSBackupEMRList::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
 			EnableButtons(TRUE, 0, -1);
			m_szFromDate = pMF->GetSysDate();
	        m_szToDate = pMF->GetSysDate();
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
/*void CHMSBackupEMRList::OnFromDateChange(){
	
} */
/*void CHMSBackupEMRList::OnFromDateSetfocus(){
	
} */
/*void CHMSBackupEMRList::OnFromDateKillfocus(){
	
} */
int CHMSBackupEMRList::OnFromDateCheckValue()
{
	OnRecordListLoadData();	
	return 0;
} 
/*void CHMSBackupEMRList::OnToDateChange(){
	
} */
/*void CHMSBackupEMRList::OnToDateSetfocus(){
	
} */
/*void CHMSBackupEMRList::OnToDateKillfocus(){
	
} */
int CHMSBackupEMRList::OnToDateCheckValue()
{
	OnRecordListLoadData();
	return 0;
} 
/*void CHMSBackupEMRList::OnDocumentNoChange(){
	
} */
/*void CHMSBackupEMRList::OnDocumentNoSetfocus(){
	
} */
void CHMSBackupEMRList::OnDocumentNoKillfocus()
{
	CString szTemp;
	m_wndDocumentNo.GetWindowText(szTemp);
	if (szTemp.IsEmpty())
		m_wndDocumentNo.SetWindowText(_T("0"));
}
int CHMSBackupEMRList::OnDocumentNoCheckValue()
{
	OnRecordListLoadData();	
	return 0;
} 
void CHMSBackupEMRList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CHMSBackupEMRList::OnDepartmentSelendok()
{
	
}
/*void CHMSBackupEMRList::OnDepartmentSetfocus(){
	
}*/
void CHMSBackupEMRList::OnDepartmentKillfocus()
{
}
long CHMSBackupEMRList::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	m_nOutPatient = 1;

	if (m_nOutPatient == 0)
		szSQL.Format(_T("SELECT sd_id AS ID, sd_name AS Name FROM sys_dept ")\
		             _T("WHERE sd_type IN('KB') %s ORDER BY sd_id"), szWhere);
	else
		szSQL.Format(_T("SELECT sd_id AS ID, sd_name AS Name FROM sys_dept ")\
		             _T("WHERE sd_type IN('DT') %s ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(rs.GetValue(_T("ID")),
								 rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSBackupEMRList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSBackupEMRList::OnTreatmentTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBackupEMRList::OnTreatmentTypeSelendok(){
	 
}
/*void CHMSBackupEMRList::OnTreatmentTypeSetfocus(){
	
}*/
/*void CHMSBackupEMRList::OnTreatmentTypeKillfocus(){
	
}*/
long CHMSBackupEMRList::OnTreatmentTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndTreatmentType.AddItems(
			_T("N"),
			_T("\x42\x1EC7nh \xE1n \x111i\x1EC1u tr\x1ECB n\x1ED9i tr\xFA"),NULL);
	m_wndTreatmentType.AddItems(			
			_T("Y"),
			_T("\x42\x1EC7nh \xE1n \x111i\x1EC1u tr\x1ECB ngo\x1EA1i tr\xFA"), NULL);
	

	return 0;
}
/*void CHMSBackupEMRList::OnTreatmentTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void CHMSBackupEMRList::OnNameChange(){
	
} */
/*void CHMSBackupEMRList::OnNameSetfocus(){
	
} */
/*void CHMSBackupEMRList::OnNameKillfocus(){
	
} */
int CHMSBackupEMRList::OnNameCheckValue()
{
	OnRecordListLoadData();
	return 0;
}

int CHMSBackupEMRList::OnArchivalNoCheckValue()
{
	OnRecordListLoadData();
	return 0;
}

void CHMSBackupEMRList::OnSearchSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szTemp;
	OnRecordListLoadData();
} 
#include "HMSExportEMRDialog.h"
void CHMSBackupEMRList::OnOpenDirSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szTemp;

	CHMSExportEMRDialog dlg(this);
	dlg.DoModal();
	
} 
void CHMSBackupEMRList::OnBackupSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szTemp;
	pMF->m_szBackupDir = AfxGetApp()->GetProfileString(_T("VIMES_ERM_EXPORT"), _T("Drirectory"));
	
	for(int i = 0; i < m_wndRecordList.GetItemCount(); i++){
		long nDocumentNo;
		nDocumentNo = ToLong(m_wndRecordList.GetItemText(i, 0));
		if(OnBackupDoccument(nDocumentNo))
			m_wndRecordList.SetCheck(i, false);
	}

	//OnRecordListLoadData();
} 

#include <windows.h>
#include <stdio.h>
bool CHMSBackupEMRList::OnBackupDoccument(long nDocNo){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	int nItem = 0;	
	CString szSQL, szWhere, szSignatureID, tmpStr;

	szSQL.Format(_T("SELECT hms_signature_id AS signature_id, pdfname,") \
		_T("   typeid, sign_date,   ") \
		_T("   hms_signatrue_get_desc(hms_signature_id,docno) AS description,") \
		_T("   status  ") \
		_T(" FROM hms_signature") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hd_patientno=hp_patientno)") \
		_T(" WHERE status  <> 'C'") \
		_T(" AND docno = %ld") \
		_T(" ORDER BY typeid,") \
		_T("   idx"), nDocNo);
		
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("signature_id"), szSignatureID);
		
		
		if(!szSignatureID.IsEmpty()){
			CPdfSignature signer(this);	
			CString szDirectory;
			//_tprintf(_T("\r\n%s"), szSignatureID);

			szDirectory.Format(_T("%s\\%ld"), pMF->m_szBackupDir, nDocNo);
			if(!CreateDirectory(szDirectory ,NULL))
			{
				_tprintf(_T("Da ton tai thu muc: %s"), szDirectory);
			}

			if(signer.DownloadAndPreview(szSignatureID, false, szDirectory))
			{
				CString szSQL,szFile, szPdfName;			
			
				szSQL.Format(_T("SELECT pdfname FROM hms_signature WHERE docno = %ld AND hms_signature_id='%s'"), nDocNo, szSignatureID);
				rsl.ExecSQL(szSQL);

				szPdfName = rsl.GetValue(_T("pdfname"));
				tmpStr.Format(_T("%d"), nItem++);
				if(!szPdfName.IsEmpty())
				{				
					szFile.Format(_T("%s\\%s"), szDirectory, szPdfName);
					_tprintf(_T("\r\n%s"), szFile);					
				}
			}		
		}
		
		rs.MoveNext();
	}

	return nItem;
}


void CHMSBackupEMRList::OnRecordListDblClick()
{	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndRecordList.GetItemCount(); i++){
		m_wndRecordList.SetCheck(i, true);
	}	
} 
void CHMSBackupEMRList::OnRecordListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nDocumentNo = ToLong(m_wndRecordList.GetItemText(nNewItem, 0));
	
} 
int CHMSBackupEMRList::OnRecordListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSBackupEMRList::OnRecordListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndRecordList.BeginLoad(); 
	m_wndRecordList.DeleteAllItems(); 
	int nCount = 0;
	
	UpdateData(true);
	if(m_nAll ==0)
	{
		szWhere.AppendFormat(_T(" AND trunc(hcr_dischargedate) BETWEEN TO_DATE('%s', 'YYYY/MM/DD') AND TO_DATE('%s', 'YYYY/MM/DD') "), 
			           m_szFromDate, m_szToDate);
	}
	else
	{
		if(m_nAll==1)
			szWhere.Format(_T(" and hpr_backup='Y' "));
		if(m_nAll== 2 )
			szWhere.Format(_T(" and hpr_backup='N' "));
		if (!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND TRUNC(hpr_storeddate) BETWEEN TO_DATE('%s', 'YYYY/MM/DD') AND TO_DATE('%s', 'YYYY/MM/DD') "), 
						m_szFromDate, m_szToDate);
		}
	}
	

	if(!m_szDepartmentKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND hcr_dischargedept ='%s' "), m_szDepartmentKey);
	}
	
	if(!m_szTreatmentTypeKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND hpr_type ='%s' "), m_szTreatmentTypeKey);
	}	

	if (m_nDocumentNo > 0)
	{
		szWhere.AppendFormat(_T(" AND hd_docno=%ld "), m_nDocumentNo);
	}

	if (!m_szArchivalNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hpr_docrec)=lower('%s') "), m_szArchivalNo);		
	}

	szSQL.Format(_T("SELECT hd_docno AS DocumentNo, ")\
				 _T("hpr_docrec AS RecordNo, ")\
				 _T(" hcr_recordno as ba_vvien , ") \
				 _T("hpr_class AS Class, ")\
				 _T("trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS PatientName, ")\
				 _T("hms_getage(TRUNC(hd_admitdate), hp_birthdate) as Age, ")\
				 _T("(SELECT ss_desc FROM sys_sel WHERE ss_code=hp_sex AND ss_id='sys_sex' AND rownum <=1) AS Sex, ")\
				 _T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS Address, ")\
				 _T(" case when hpr_status='A' then  to_char(hpr_admitdate, 'DD/MM/YYYY HH24:MI:SS') else to_char(hcr_admitdate, 'DD/MM/YYYY HH24:MI:SS') end AS AdmissionDate, ")\
				 _T(" case when hpr_status='A' then to_char(hpr_enddate, 'DD/MM/YYYY HH24:MI:SS') else to_char(hcr_dischargedate, 'DD/MM/YYYY HH24:MI:SS') end  AS OutDate, ") \
				 _T(" case when hpr_status='A'  then hpr_enddate - hpr_admitdate  else hcr_dischargedate-hcr_admitdate end As duration,") \
				 _T("(SELECT ss_desc FROM sys_sel WHERE ss_id='hms_rank' AND ss_code = to_char(hp_rank) AND rownum <=1) AS rank, ")\
				 _T("(SELECT sd_name FROM sys_dept WHERE sd_id=hcr_admitdept AND rownum <=1) AS InFromDept, ")\
				 _T("(SELECT sd_name FROM sys_dept WHERE sd_id=hcr_dischargedept AND rownum <=1) AS OutFromDept, ") \
				 _T(" case when hcr_docno is null  then hd_diagnostic else hcr_maindisease end AS Diagnostic, ") \
				 _T(" case when (select count(*) from pr_image_line where pil_docno = hd_docno) > 0 then 'X' else '' end as have_film, ") \
				 _T(" DECODE('I', ho_type, hd_cardno, get_objectname(hd_object)) as object ") \
				 _T(" FROM hms_clinical_record  ")\
				 _T(" LEFT JOIN hms_doc ON(hcr_docno=hd_docno) ")\
				 _T(" LEFT JOIN hms_object ON (hd_object = ho_id)") \
				 _T(" LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ")\
				 _T(" LEFT JOIN hms_patient_record ON(hcr_docno=hpr_docno) ")\
				_T("  WHERE 1=1 %s ORDER BY cast(hpr_docrec as nvarchar2(35)), PatientName"), szWhere);

	//_msg(_T("%s"),szSQL);
	//MessageBox(szSQL);
	nCount = rs.ExecSQL(szSQL);
	printf("\nRecord count: %d\n", rs.GetRecordCount());
	CString szFirstName, szMidName, szSurName, szSearchName, tmpStr;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;

	if (!m_szName.IsEmpty())
	{
		StringLower(m_szName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	while(!rs.IsEOF()){ 
		rs.GetValue(_T("PatientName"), tmpStr);
		
		if (!m_szName.IsEmpty())
		{
			CString szPatientName;
			StringLower(tmpStr, szPatientName);

			SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
			GetShortName(szPatientName, szShortName);

			if (szShortName != m_szName)
			{
				if(!szFirstName.IsEmpty() && szFirstName != szFirstName2)
				{
					rs.MoveNext();
					continue;
				}
			}	
				if (!szSurName.IsEmpty() && szSurName != szSurName2)
				{
					rs.MoveNext();
					continue;
				}
				if (!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1)
				{
					rs.MoveNext();
					continue;
				}
			
		}

		m_wndRecordList.AddItems(
			rs.GetValue(_T("DocumentNo")),
			rs.GetValue(_T("RecordNo")),
			rs.GetValue(_T("ba_vvien")),
			rs.GetValue(_T("PatientName")),
			rs.GetValue(_T("Age")),
			rs.GetValue(_T("Sex")),
			rs.GetValue(_T("Address")),
			rs.GetValue(_T("AdmissionDate")),
			rs.GetValue(_T("OutDate")),
			rs.GetValue(_T("InFromDept")),
			rs.GetValue(_T("OutFromDept")),
			rs.GetValue(_T("have_film")),
			rs.GetValue(_T("Diagnostic")),
			rs.GetValue(_T("Class")),
			rs.GetValue(_T("Rank")),
			rs.GetValue(_T("object")),
			rs.GetValue(_T("duration")),
			NULL);
		rs.MoveNext();
	}
	m_nTotal = nCount;
	m_wndRecordList.EndLoad(); 
	UpdateData(false);
	return nCount;
}
void CHMSBackupEMRList::OnInPatientSelect()
{
}
void CHMSBackupEMRList::OnOutPatientSelect()
{	
}
void CHMSBackupEMRList::OnAllSelect(){
	OnRecordListLoadData();
	
}
void CHMSBackupEMRList::OnDontSendSelect(){
	OnRecordListLoadData();
}
void CHMSBackupEMRList::OnSendSelect(){
	OnRecordListLoadData();
	
}
void CHMSBackupEMRList::OnReturnSelect(){
	OnRecordListLoadData();
	
}
void CHMSBackupEMRList::OnApproveSelect(){
	OnRecordListLoadData();
	
}
int CHMSBackupEMRList::OnAddHMSBackupEMRList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSBackupEMRList::OnEditHMSBackupEMRList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBackupEMRList::OnDeleteHMSBackupEMRList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSBackupEMRList(); 
 	}
	return 0;
}
int CHMSBackupEMRList::OnSaveHMSBackupEMRList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_patient_recordTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_patient_recordTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSBackupEMRListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CHMSBackupEMRList::OnCancelHMSBackupEMRList(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CHMSBackupEMRList::OnHMSBackupEMRListListLoadData(){
	return 0;
}
int CHMSBackupEMRList::OnSelectAll(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL,szDocNo;
	CRecord rs(&pMF->m_db);	
	
	for(int i = 0; i < m_wndRecordList.GetItemCount(); i++){
		m_wndRecordList.SetCheck(i, true);
	}

	return 0;
}
int CHMSBackupEMRList::OnUnSelectAll(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
		
	for(int i = 0; i < m_wndRecordList.GetItemCount(); i++){
		m_wndRecordList.SetCheck(i, false);
	}

	return 1;
}

int CHMSBackupEMRList::OnBackupRecord(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
		
	OnBackupSelect();
	return 1;
}

int CHMSBackupEMRList::OnRecordListExport(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	int nRow = 0, nCol = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	
	TCHAR szName[128]; // This is the buffer where the name will be stored
	LVCOLUMN lvColInfo;
	int nWidth = 0;
	
	for (int i = 0; i < m_wndRecordList.GetColumnCount(); i++)
	{
		lvColInfo.mask = LVCF_TEXT | LVCF_WIDTH;
		lvColInfo.pszText = szName;
		lvColInfo.cx = nWidth;
		//m_wndRecordList.GetColumn(i, &lvColInfo);
		xls.SetColumnWidth(i, m_wndRecordList.GetColumnWidth(i)/7);
		xls.SetCellText(i, 0, szName, 4098, true);
	}

	for (int i = 0; i < m_wndRecordList.GetItemCount(); i++)
	{
		for (int j = 0; j < m_wndRecordList.GetColumnCount(); j++)
		{
			xls.SetCellText(j, i + 1, m_wndRecordList.GetItemText(i, j), FMT_TEXT);
		}
	}
	xls.Save(_T("Exports\\Danhsachhosoluutru.xls"));
	return 0;
}
CString CHMSBackupEMRList::GetStatus(long nDocno){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szStatus,szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T(" select hpr_status from hms_patient_record where hpr_docno = %ld "), nDocno);
	rs.ExecSQL(szSQL);
	szStatus= rs.GetStringValue();

	return szStatus;
}