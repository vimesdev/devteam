#include "HMSPatientListRecord.h"
#include "MainFrm.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientListRecord *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientListRecord *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnDocumentNoSetfocus();} */ 
static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnDocumentNoKillfocus();
}
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientListRecord *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientListRecord* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnDepartmentKillfocus();
}*/
static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnDepartmentKillfocus();
}
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientListRecord *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnTreatmentTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientListRecord* )pWnd)->OnTreatmentTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatmentTypeSelendokFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnTreatmentTypeSelendok();
}
/*static void _OnTreatmentTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnTreatmentTypeKillfocus();
}*/
/*static void _OnTreatmentTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnTreatmentTypeKillfocus();
}*/
static long _OnTreatmentTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientListRecord *)pWnd)->OnTreatmentTypeLoadData();
}
/*static void _OnTreatmentTypeAddNewFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnTreatmentTypeAddNew();
}*/

/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientListRecord *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientListRecord *)pWnd)->OnNameCheckValue();
} 
static int _OnArchivalNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientListRecord *)pWnd)->OnArchivalNoCheckValue();;
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSPatientListRecord *pVw = (CHMSPatientListRecord *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnRecordListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientListRecord*)pWnd)->OnRecordListLoadData();
} 
static void _OnRecordListDblClickFnc(CWnd *pWnd){
	((CHMSPatientListRecord*)pWnd)->OnRecordListDblClick();
} 
static void _OnRecordListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientListRecord*)pWnd)->OnRecordListSelectChange(nOldItem, nNewItem);
} 
static int _OnRecordListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientListRecord*)pWnd)->OnRecordListDeleteItem();
}
static int _OnRecordListExportFnc(CWnd *pWnd){
	 return ((CHMSPatientListRecord*)pWnd)->OnRecordListExport();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CHMSPatientListRecord*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CHMSPatientListRecord*)pWnd)->OnOutPatientSelect();
}
static int _OnAddHMSPatientListRecordFnc(CWnd *pWnd){
	 return ((CHMSPatientListRecord*)pWnd)->OnAddHMSPatientListRecord();
} 
static int _OnEditHMSPatientListRecordFnc(CWnd *pWnd){
	 return ((CHMSPatientListRecord*)pWnd)->OnEditHMSPatientListRecord();
} 
static int _OnDeleteHMSPatientListRecordFnc(CWnd *pWnd){
	 return ((CHMSPatientListRecord*)pWnd)->OnDeleteHMSPatientListRecord();
} 
static int _OnSaveHMSPatientListRecordFnc(CWnd *pWnd){
	 return ((CHMSPatientListRecord*)pWnd)->OnSaveHMSPatientListRecord();
} 
static int _OnCancelHMSPatientListRecordFnc(CWnd *pWnd){
	 return ((CHMSPatientListRecord*)pWnd)->OnCancelHMSPatientListRecord();
} 
CHMSPatientListRecord::CHMSPatientListRecord()	
{
	m_nDlgWidth = 945;
	m_nDlgHeight = 815;
	SetDefaultValues();
}
CHMSPatientListRecord::~CHMSPatientListRecord(){
}
void CHMSPatientListRecord::OnCreateComponents()
{
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1005, 655);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 95, 55);
	m_wndFromDate.Create(this,100, 30, 190, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 195, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 375, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 60, 95, 85);
	m_wndDocumentNo.Create(this,100, 60, 190, 85); 
	m_wndTreatmentTypeLabel.Create(this, _T("Treatment Type"), 685, 30, 785, 55);
	m_wndTreatmentType.Create(this,790, 30, 910, 55); 
	m_wndPatientDead.Create(this, _T("T\x1EED vong"), 915, 30, 1000, 55);
	m_wndDepartmentLabel.Create(this, _T("Department"), 380, 30, 465, 55);
	m_wndDepartment.Create(this,470, 30, 680, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 380, 60, 465, 85);
	m_wndName.Create(this,470, 60, 680, 85); 	
	m_wndRecordList.Create(this,10, 90, 1000, 650); 
	m_wndArchivalNoLabel.Create(this, _T("Archival No"), 195, 60, 280, 85);
	m_wndArchivalNo.Create(this,285, 60, 375, 85); 
	m_wndTotalLabel.Create(this, _T("Total"), 685, 60, 785, 85);
	m_wndTotal.Create(this,790, 60, 910, 85);
	m_wndSearch.Create(this, _T("Search"), 915, 60, 1000, 85);
}
void CHMSPatientListRecord::OnInitializeComponents()
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
	m_wndRecordList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 170);
	m_wndRecordList.InsertColumn(3, _T("Age"), CFMT_TEXT, 40);
	m_wndRecordList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 40);
	m_wndRecordList.InsertColumn(5, _T("Address"), CFMT_TEXT, 200);
	m_wndRecordList.InsertColumn(6, _T("Admission Date"), CFMT_DATETIME, 80);
	m_wndRecordList.InsertColumn(7, _T("Out Date"), CFMT_DATETIME, 80);
	m_wndRecordList.InsertColumn(8, _T("In From Dept"), CFMT_TEXT, 105);
	m_wndRecordList.InsertColumn(9, _T("Out From Dept"), CFMT_TEXT, 105);
	m_wndRecordList.InsertColumn(10, _T("Have Film"), CFMT_TEXT, 50);
	m_wndRecordList.InsertColumn(11, _T("Diagnostic"), CFMT_TEXT, 180);
	m_wndRecordList.InsertColumn(12, _T("Class"), CFMT_TEXT, 0);
	m_wndRecordList.InsertColumn(13, _T("Rank"), CFMT_TEXT, 100);	
	m_wndRecordList.InsertColumn(14, _T("Object"), CFMT_TEXT, 150);	
	m_wndRecordList.InsertColumn(15, _T("Duration"), CFMT_DATETIME, 150);

}
void CHMSPatientListRecord::OnSetWindowEvents()
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
	//m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	//m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndRecordList.AddEvent(1, _T("Export"), _OnRecordListExportFnc);
	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize() + 3, TRUE); 
	CMainFrame *pMF = (CMainFrame* ) AfxGetMainWnd();
	m_szFromDate = pMF->GetSysDate();
	m_szToDate = pMF->GetSysDate();
	

	UpdateData(FALSE);
	
}
void CHMSPatientListRecord::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndArchivalNo.GetDlgCtrlID(), m_szArchivalNo);
	DDX_Text(pDX, m_wndTotal.GetDlgCtrlID(), m_nTotal);
	DDX_TextEx(pDX, m_wndTreatmentType.GetDlgCtrlID(), m_szTreatmentTypeKey);
	DDX_Check(pDX, m_wndPatientDead.GetDlgCtrlID(), m_bPatientDead);
}
void CHMSPatientListRecord::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientListRecord::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientListRecord::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDocumentNo=0;
	m_szDepartmentKey.Empty();
	m_szName.Empty();
	m_szArchivalNo.Empty();
	m_nInPatient=1;
	m_nTotal = 0;
	//m_nOutPatient=0;
}
int CHMSPatientListRecord::SetMode(int nMode)
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
/*void CHMSPatientListRecord::OnFromDateChange(){
	
} */
/*void CHMSPatientListRecord::OnFromDateSetfocus(){
	
} */
/*void CHMSPatientListRecord::OnFromDateKillfocus(){
	
} */
int CHMSPatientListRecord::OnFromDateCheckValue()
{
	OnRecordListLoadData();	
	return 0;
} 
/*void CHMSPatientListRecord::OnToDateChange(){
	
} */
/*void CHMSPatientListRecord::OnToDateSetfocus(){
	
} */
/*void CHMSPatientListRecord::OnToDateKillfocus(){
	
} */
int CHMSPatientListRecord::OnToDateCheckValue()
{
	OnRecordListLoadData();
	return 0;
} 
/*void CHMSPatientListRecord::OnDocumentNoChange(){
	
} */
/*void CHMSPatientListRecord::OnDocumentNoSetfocus(){
	
} */
void CHMSPatientListRecord::OnDocumentNoKillfocus()
{
	CString szTemp;
	m_wndDocumentNo.GetWindowText(szTemp);
	if (szTemp.IsEmpty())
		m_wndDocumentNo.SetWindowText(_T("0"));
}
int CHMSPatientListRecord::OnDocumentNoCheckValue()
{
	OnRecordListLoadData();	
	return 0;
} 
void CHMSPatientListRecord::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CHMSPatientListRecord::OnDepartmentSelendok()
{
	
}
/*void CHMSPatientListRecord::OnDepartmentSetfocus(){
	
}*/
void CHMSPatientListRecord::OnDepartmentKillfocus()
{
}
long CHMSPatientListRecord::OnDepartmentLoadData()
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
/*void CHMSPatientListRecord::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSPatientListRecord::OnTreatmentTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientListRecord::OnTreatmentTypeSelendok(){
	 
}
/*void CHMSPatientListRecord::OnTreatmentTypeSetfocus(){
	
}*/
/*void CHMSPatientListRecord::OnTreatmentTypeKillfocus(){
	
}*/
long CHMSPatientListRecord::OnTreatmentTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndTreatmentType.AddItems(
			_T("N"),
			_T("\x42\x1EC7nh \xE1n \x111i\x1EC1u tr\x1ECB n\x1ED9i tr\xFA"),NULL);
	m_wndTreatmentType.AddItems(			
			_T("Y"),
			_T("\x42\x1EC7nh \xE1n \x111i\x1EC1u tr\x1ECB ngo\x1EA1i tr\xFA"), NULL);
	

	return 0;
}
/*void CHMSPatientListRecord::OnTreatmentTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void CHMSPatientListRecord::OnNameChange(){
	
} */
/*void CHMSPatientListRecord::OnNameSetfocus(){
	
} */
/*void CHMSPatientListRecord::OnNameKillfocus(){
	
} */
int CHMSPatientListRecord::OnNameCheckValue()
{
	OnRecordListLoadData();
	return 0;
}

int CHMSPatientListRecord::OnArchivalNoCheckValue()
{
	OnRecordListLoadData();
	return 0;
}

void CHMSPatientListRecord::OnSearchSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szTemp;
	OnRecordListLoadData();
} 
void CHMSPatientListRecord::OnRecordListDblClick()
{	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndRecordList.GetCurSel();
	if (nSel < 0)
		return;
	m_nDoNo = ToLong(m_wndRecordList.GetItemText(nSel, 0));
	//pMF->m_wndPatientRecord.m_nDocNo = m_nDoNo;
	//pMF->m_wndPatientRecord.GetDataToScreen();
	pMF->SetActivePane(0);
} 
void CHMSPatientListRecord::OnRecordListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientListRecord::OnRecordListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientListRecord::OnRecordListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndRecordList.BeginLoad(); 
	m_wndRecordList.DeleteAllItems(); 
	int nCount = 0;
	
	UpdateData(true);
	if (!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND TRUNC(hpr_storeddate) BETWEEN TO_DATE('%s', 'YYYY-MM-DD') AND TO_DATE('%s', 'YYYY-MM-DD') "), 
			           m_szFromDate, m_szToDate);
	}

	if(!m_szDepartmentKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND hpr_enddeptid ='%s' "), m_szDepartmentKey);
	}
	
	if(!m_szTreatmentTypeKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND hpr_type ='%s' "), m_szTreatmentTypeKey);
	}

	if(m_bPatientDead){
		szWhere.AppendFormat(_T(" AND hpr_dead ='%s' "), _T("Y"));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND hpr_dead ='%s' "), _T("N"));
	}

	if (m_nDocumentNo > 0)
	{
		szWhere.AppendFormat(_T(" AND hpr_docno=%ld "), m_nDocumentNo);
	}

	if (!m_szArchivalNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hpr_docrec)=lower('%s') "), m_szArchivalNo);		
	}

	szSQL.Format(_T("SELECT hpr_docno AS DocumentNo, ")\
				 _T("hpr_docrec AS RecordNo, ")\
				 _T("hpr_class AS Class, ")\
				 _T("trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS PatientName, ")\
				 _T("hms_getage(TRUNC(hd_admitdate), hp_birthdate) as Age, ")\
				 _T("(SELECT ss_desc FROM sys_sel WHERE ss_code=hp_sex AND ss_id='sys_sex' AND rownum <=1) AS Sex, ")\
				 _T("hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS Address, ")\
				 _T("to_char(hpr_admitdate, 'DD/MM/YYYY HH24:MI:SS') AS AdmissionDate, ")\
				 _T("to_char(hpr_enddate, 'DD/MM/YYYY HH24:MI:SS') AS OutDate, ")\
				 _T("hpr_enddate - hpr_admitdate As duration,") \
				 _T("(SELECT ss_desc FROM sys_sel WHERE ss_id='hms_rank' AND ss_code = to_char(hp_rank) AND rownum <=1) AS rank, ")\
				 _T("(SELECT sd_name FROM sys_dept WHERE sd_id=hcr_admitdept AND rownum <=1) AS InFromDept, ")\
				 _T("(SELECT sd_name FROM sys_dept WHERE sd_id=hcr_dischargedept AND rownum <=1) AS OutFromDept, ")\
				 _T("case when hpr_class='E' then hd_diagnostic else hcr_maindisease end AS Diagnostic, ")\
				 _T(" case when (select count(*) from pr_image_line where pil_docno = hd_docno) > 0 then 'X' else '' end as have_film, ") \
				 _T("DECODE('I', ho_type, hd_cardno, get_objectname(hd_object)) \"object\" ") \
				 _T("FROM hms_patient_record ")\
				 _T("LEFT JOIN hms_doc ON(hpr_docno=hd_docno) ")\
				 _T("LEFT JOIN hms_object ON (hd_object = ho_id)") \
				 _T("LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ")\
				 _T("LEFT JOIN hms_clinical_record ON(hcr_docno=hpr_docno) ")\
				 _T("WHERE 1=1 %s ORDER BY cast(hpr_docrec as nvarchar2(35)), PatientName"),
				 szWhere);

	_fmsg(_T("%s"),szSQL);
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
void CHMSPatientListRecord::OnInPatientSelect()
{
}
void CHMSPatientListRecord::OnOutPatientSelect()
{	
}
int CHMSPatientListRecord::OnAddHMSPatientListRecord(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPatientListRecord::OnEditHMSPatientListRecord(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientListRecord::OnDeleteHMSPatientListRecord(){
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
 		OnCancelHMSPatientListRecord(); 
 	}
	return 0;
}
int CHMSPatientListRecord::OnSaveHMSPatientListRecord(){
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
 		//OnHMSPatientListRecordListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPatientListRecord::OnCancelHMSPatientListRecord(){
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
int CHMSPatientListRecord::OnHMSPatientListRecordListLoadData(){
	return 0;
}

int CHMSPatientListRecord::OnRecordListExport(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	int nRow = 0, nCol = 0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	/*rs.ExecSQL(m_szSQLWindow);
	if (rs.IsEOF())
		return;
	for (int i = 0; i < rs.GetFieldCount(); i++)
	{
		xls.SetCellText(i, 0, rs.GetFieldName(i), FMT_TEXT | FMT_CENTER);
	}
	nRow++;
	while (!rs.IsEOF())
	{
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			xls.SetCellText(i, nRow, rs.GetValue(rs.GetFieldName(i)), FMT_TEXT);
		}
		nRow++;
		rs.MoveNext();
	}*/
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