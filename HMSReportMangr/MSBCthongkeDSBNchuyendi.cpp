#include "MSBCthongkeDSBNchuyendi.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCthongkeDSBNchuyendi *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCthongkeDSBNchuyendi *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCthongkeDSBNchuyendi* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CMSBCthongkeDSBNchuyendi *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnDeptAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCthongkeDSBNchuyendi* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CMSBCthongkeDSBNchuyendi *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnObjectAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCthongkeDSBNchuyendi* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CMSBCthongkeDSBNchuyendi *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi *)pWnd)->OnEthnicAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBCthongkeDSBNchuyendi *pVw = (CMSBCthongkeDSBNchuyendi *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CMSBCthongkeDSBNchuyendi *pVw = (CMSBCthongkeDSBNchuyendi *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMSBCthongkeDSBNchuyendi *pVw = (CMSBCthongkeDSBNchuyendi *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBCthongkeDSBNchuyendi*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBCthongkeDSBNchuyendi*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBCthongkeDSBNchuyendi*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBCthongkeDSBNchuyendi*)pWnd)->OnListDeleteItem();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CMSBCthongkeDSBNchuyendi*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CMSBCthongkeDSBNchuyendi*)pWnd)->OnInPatientSelect();
}
static void _OnAllHospitalsSelectFnc(CWnd *pWnd){
	  ((CMSBCthongkeDSBNchuyendi*)pWnd)->OnAllHospitalsSelect();
}
static int _OnAddMSBCthongkeDSBNchuyendiFnc(CWnd *pWnd){
	 return ((CMSBCthongkeDSBNchuyendi*)pWnd)->OnAddMSBCthongkeDSBNchuyendi();
} 
static int _OnEditMSBCthongkeDSBNchuyendiFnc(CWnd *pWnd){
	 return ((CMSBCthongkeDSBNchuyendi*)pWnd)->OnEditMSBCthongkeDSBNchuyendi();
} 
static int _OnDeleteMSBCthongkeDSBNchuyendiFnc(CWnd *pWnd){
	 return ((CMSBCthongkeDSBNchuyendi*)pWnd)->OnDeleteMSBCthongkeDSBNchuyendi();
} 
static int _OnSaveMSBCthongkeDSBNchuyendiFnc(CWnd *pWnd){
	 return ((CMSBCthongkeDSBNchuyendi*)pWnd)->OnSaveMSBCthongkeDSBNchuyendi();
} 
static int _OnCancelMSBCthongkeDSBNchuyendiFnc(CWnd *pWnd){
	 return ((CMSBCthongkeDSBNchuyendi*)pWnd)->OnCancelMSBCthongkeDSBNchuyendi();
} 
CMSBCthongkeDSBNchuyendi::CMSBCthongkeDSBNchuyendi()
{
	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CMSBCthongkeDSBNchuyendi::~CMSBCthongkeDSBNchuyendi()
{

}
void CMSBCthongkeDSBNchuyendi::OnCreateComponents()
{
	CMainFrame *pMF =(CMainFrame*) AfxGetMainWnd();

	m_wndReportCriteria.Create(this, _T("Report criteria"), 5, 5, 1000, 600);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 70, 55);
	m_wndFromDate.Create(this,75, 30, 190, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 195, 30, 255, 55);
	m_wndToDate.Create(this,260, 30, 375, 55); 
	m_wndDeptLabel.Create(this, _T("Hospital"), 380, 30, 450, 55);
	m_wndDept.Create(this,455, 30, 735, 55); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 10, 60, 70, 85);
	m_wndEthnic.Create(this,75, 60, 255, 85); 
	m_wndLoad.Create(this, _T("&Load"), 740, 30, 820, 55);
	m_wndExport.Create(this, _T("&Export"), 825, 30, 905, 55);
	m_wndList.Create(this,10, 90, 1000, 600); 
}
void CMSBCthongkeDSBNchuyendi::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(TRUE);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(128);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	//m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(81);
	m_wndObject.SetCheckBox(TRUE);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT | CFMT_CENTER, 40);
	m_wndList.InsertColumn(1, _T("InDate"), CFMT_DATETIME, 115);
	m_wndList.InsertColumn(2, _T("Translate Date"), CFMT_DATETIME, 115);
	m_wndList.InsertColumn(3, _T("Document No"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Age"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(6, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(7, _T("Ethnic"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("Address"), CFMT_TEXT, 250);	
	m_wndList.InsertColumn(9, _T("Diagnosis"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(10, _T("CardNo"), CFMT_TEXT, 160);
	m_wndList.InsertColumn(11, _T("Doctor"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(12, _T("Dept"), CFMT_TEXT, 80);
	//m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	//m_wndList.SetDisplayColor(true);
	m_wndList.GetHeaderControl()->SetItemHeight(2);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEthnic.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CMSBCthongkeDSBNchuyendi::OnSetWindowEvents()
{
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndEthnic.SetEvent(WE_SELENDOK, _OnEthnicSelendokFnc);
	//m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
	//m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
	m_wndEthnic.SetEvent(WE_SELCHANGE, _OnEthnicSelectChangeFnc);
	m_wndEthnic.SetEvent(WE_LOADDATA, _OnEthnicLoadDataFnc);
	//m_wndEthnic.SetEvent(WE_ADDNEW, _OnEthnicAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndAllHospitals.SetEvent(WE_CLICK, _OnAllHospitalsSelectFnc);
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = pMF->GetSysDate() + _T("07:00");
	m_szToDate = pMF->GetSysDate() + _T("07:00");
	UpdateData(false);

}
void CMSBCthongkeDSBNchuyendi::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndAllHospitals.GetDlgCtrlID(), m_nAllHospitals);
}
void CMSBCthongkeDSBNchuyendi::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCthongkeDSBNchuyendi::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCthongkeDSBNchuyendi::SetDefaultValues()
{
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_szObjectKey.Empty();
	m_szEthnicKey.Empty();
	m_nOutPatient=1;
	m_nInPatient=1;
	m_nAllHospitals=0;
}
int CMSBCthongkeDSBNchuyendi::SetMode(int nMode)
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
/*void CMSBCthongkeDSBNchuyendi::OnFromDateChange(){
	
} */
/*void CMSBCthongkeDSBNchuyendi::OnFromDateSetfocus(){
	
} */
/*void CMSBCthongkeDSBNchuyendi::OnFromDateKillfocus(){
	
} */
int CMSBCthongkeDSBNchuyendi::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCthongkeDSBNchuyendi::OnToDateChange(){
	
} */
/*void CMSBCthongkeDSBNchuyendi::OnToDateSetfocus(){
	
} */
/*void CMSBCthongkeDSBNchuyendi::OnToDateKillfocus(){
	
} */
int CMSBCthongkeDSBNchuyendi::OnToDateCheckValue(){
	return 0;
} 
void CMSBCthongkeDSBNchuyendi::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCthongkeDSBNchuyendi::OnDeptSelendok(){
	 
}
/*void CMSBCthongkeDSBNchuyendi::OnDeptSetfocus(){
	
}*/
/*void CMSBCthongkeDSBNchuyendi::OnDeptKillfocus(){
	
}*/
long CMSBCthongkeDSBNchuyendi::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" WHERE hh_id ='%s' "), m_szDeptKey);
	};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hh_id as id, hh_name as name FROM hms_hospital  %s ") , szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CMSBCthongkeDSBNchuyendi::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCthongkeDSBNchuyendi::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCthongkeDSBNchuyendi::OnObjectSelendok(){
	 
}
/*void CMSBCthongkeDSBNchuyendi::OnObjectSetfocus(){
	
}*/
/*void CMSBCthongkeDSBNchuyendi::OnObjectKillfocus(){
	
}*/
long CMSBCthongkeDSBNchuyendi::OnObjectLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ho_type='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_type AS id, ho_desc AS name ") \
		         _T("FROM hms_object WHERE ho_active='Y' %s ORDER BY ho_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMSBCthongkeDSBNchuyendi::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCthongkeDSBNchuyendi::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CMSBCthongkeDSBNchuyendi::OnEthnicSelendok()
{
}
/*void CMSBCthongkeDSBNchuyendi::OnEthnicSetfocus()
{
}*/
/*void CMSBCthongkeDSBNchuyendi::OnEthnicKillfocus()
{
}*/
long CMSBCthongkeDSBNchuyendi::OnEthnicLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndEthnic.IsSearchKey() && ToInt(m_szEthnicKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szEthnicKey);
	}
	m_wndEthnic.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel ")\
				 _T("WHERE ss_id='sys_ethnic' %s ORDER BY cast(ss_code as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEthnic.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMSBCthongkeDSBNchuyendi::OnEthnicAddNew()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} */
void CMSBCthongkeDSBNchuyendi::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnReportInpatientpatientlistreport();
} 
void CMSBCthongkeDSBNchuyendi::OnLoadSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnListLoadData();
} 
void CMSBCthongkeDSBNchuyendi::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnExportInpatientpatientlistreport();
} 
void CMSBCthongkeDSBNchuyendi::OnListDblClick()
{
} 
void CMSBCthongkeDSBNchuyendi::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBCthongkeDSBNchuyendi::OnListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBCthongkeDSBNchuyendi::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CString szSQL, szDept, szObject, tmpStr, szOldLine, szNewLine, szWhere;
	CString szOutPatient, szInPatient;
	CRecord rs(&pMF->m_db);

	szSQL = GetQueryString();

	BeginWaitCursor();
	//_fmsg(_T("%s"), szSQL);
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0, nIndex = 1, nItem;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("hospitalname"), szNewLine);
		if (szNewLine != szOldLine && !szNewLine.IsEmpty())
		{			
			nItem = m_wndList.AddItems(_T(""), szNewLine, NULL);			
			m_wndList.SetItemTextColor(nItem, RGB(0, 0, 250), FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 7, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);			
			szOldLine = szNewLine;
			nIndex=1;
		}
		
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			tmpStr,
			CDateTime::Convert(rs.GetValue(_T("admitdate")), yyyymmdd | hhmm, ddmmyyyy | hhmm),
			CDateTime::Convert(rs.GetValue(_T("enddate")), yyyymmdd | hhmm, ddmmyyyy | hhmm),
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("age")),
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("ethnic")),
			rs.GetValue(_T("address")),			
			rs.GetValue(_T("maindisease")),
			rs.GetValue(_T("cardno")),
			rs.GetValue(_T("doctor")),
			rs.GetValue(_T("Deptid")),NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad();
	rs.MoveFirst();
	EndWaitCursor();
	return nCount;

}
void CMSBCthongkeDSBNchuyendi::OnOutPatientSelect(){
	
}
void CMSBCthongkeDSBNchuyendi::OnInPatientSelect(){
	
}
void CMSBCthongkeDSBNchuyendi::OnAllHospitalsSelect(){
	
}
int CMSBCthongkeDSBNchuyendi::OnAddMSBCthongkeDSBNchuyendi(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CMSBCthongkeDSBNchuyendi::OnEditMSBCthongkeDSBNchuyendi(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCthongkeDSBNchuyendi::OnDeleteMSBCthongkeDSBNchuyendi(){
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
 		OnCancelMSBCthongkeDSBNchuyendi(); 
 	}
	return 0;
}
int CMSBCthongkeDSBNchuyendi::OnSaveMSBCthongkeDSBNchuyendi(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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
 		//OnMSBCthongkeDSBNchuyendiListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CMSBCthongkeDSBNchuyendi::OnCancelMSBCthongkeDSBNchuyendi(){
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
int CMSBCthongkeDSBNchuyendi::OnMSBCthongkeDSBNchuyendiListLoadData(){
	return 0;
}
void CMSBCthongkeDSBNchuyendi::OnReportInpatientpatientlistreport()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();	
	CString szSQL, tmpStr,tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate;
	CReport rpt;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;

	if (rs.IsEOF())
		return;

	if (!rpt.Init(_T("Reports/HMS/HT_DANHSACHBENHNHANCHUYENDEN.RPT")))
		return;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr,
		          CDateTime::Convert(szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC6NH VI\x1EC6N TWQ\x110 \x31\x30\x38"));
	//Report Detail
	
	
//Danh sachs benh nhan dang dieu tri
	int nIndex = 1;
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;
	long double grpCost[17];
	long double ttlCost[17];
	double cost = 0;
	CString szField, szAmount;
	TranslateString(_T("Total Group"), szAmount);

	for (int i =0; i < 17; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

		while(!rs.IsEOF())
		{
			rs.GetValue(_T("hospitalname"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty())
			{								
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
				rptDetail->SetValue(_T("GroupName"), szNewLine);
				szOldLine = szNewLine;
				nIndex=1;
			}

			rptDetail = rpt.AddDetail();

			tmpStr.Format(_T("%d"), nIndex++);
			rptDetail->SetValue(_T("0"), tmpStr);

			rs.GetValue(_T("admitdate"), tmpStr);
			rptDetail->SetValue(_T("1"), CDateTime::Convert(tmpStr, yyyymmdd | hhmm, ddmmyyyy | hhmm));

			rs.GetValue(_T("docno"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);

			rs.GetValue(_T("pname"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);

			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);

			rs.GetValue(_T("sex"), tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);

			rs.GetValue(_T("ethnic"), tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);

			rs.GetValue(_T("address"), tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);

			rs.GetValue(_T("maindisease"), tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);

			rs.GetValue(_T("doctor"), tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);

			rs.GetValue(_T("deptid"),tmpStr);
			rptDetail->SetValue(_T("11"), tmpStr);
			rs.MoveNext();
		}
	//Page Footer
	//Report Footer
	UpdateData(false);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5,2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	rs.MoveFirst();
	EndWaitCursor();

	rpt.PrintPreview();
	
}

void CMSBCthongkeDSBNchuyendi::OnExportInpatientpatientlistreport()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();	
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate;
	CReport rpt; 
	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	int nCount = 0;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return;
	BeginWaitCursor();

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 8);
	xls.SetColumnWidth(2, 17);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 5);
	xls.SetColumnWidth(5, 5);
	xls.SetColumnWidth(6, 28);
	xls.SetColumnWidth(7, 16);
	xls.SetColumnWidth(8, 17);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 22);
	xls.SetColumnWidth(11, 13);
	xls.SetColumnWidth(12, 13);
	xls.SetColumnWidth(13, 13);
	xls.SetColumnWidth(14, 16);
	xls.SetColumnWidth(15, 21);
	xls.SetColumnWidth(16, 14);
	
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 5);

	xls.SetCellMergedColumns(0, 4, 17);
	xls.SetCellMergedColumns(0, 5, 17);

	xls.SetCellText(0, 1, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"),FMT_TEXT|FMT_CENTER, true, 12, 0);
	xls.SetCellText(0, 2, _T("\x42\x1EC6NH VI\x1EC6N TWQ\x110 \x31\x30\x38"),FMT_TEXT|FMT_CENTER, true, 12, 0);
	
	xls.SetCellText(0, 4, _T("\x42\xE1o \x63\xE1o th\x1ED1ng k\xEA \x64\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n t\x1EEB \x63\x1A1 qu\x61n y t\x1EBF \x63huy\x1EC3n \x111i"),
		            FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);
	
	
	int nRow = 7, age = 0;
	
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Age"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Ethnic"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Adress"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(7, nRow, _T("T\xEAn kho\x61, ph\xF2ng kh\xE1m \x63huy\x1EC3n \x111i"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(8, nRow, _T("Ng\xE0y \x63huy\x1EC3n"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(9, nRow, _T("M\xE3 I\x43\x44"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(10, nRow, _T("\x43h\x1EA9n \x111o\xE1n \x62\x1EC7nh vi\x1EC7n tuy\x1EBFn \x64\x1B0\x1EDBi"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(11, nRow, _T("K\x1EBFt qu\x1EA3 \x111i\x1EC1u tr\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(12, nRow, _T("L\xFD \x64o \x63huy\x1EC3n vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	
	xls.SetCellText(13, nRow, _T("T\xEAn \x62\x1EC7nh vi\x1EC7n \x63huy\x1EC3n \x111\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(14, nRow, _T("\x110\xFAng tuy\x1EBFn / tr\xE1i tuy\x1EBFn"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("CardNo"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Doctor"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	int nIndex = 1;
	CString szOldLine, szNewLine;
	
	long double grpCost[17];
	long double ttlCost[17];
	double cost = 0;
	CString szField, szAmount;
	TranslateString(_T("Total Group"), szAmount);

	for (int i = 0; i < 17; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

	while (!rs.IsEOF())
	{
		/*rs.GetValue(_T("hospitalname"), szNewLine);
		if (szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField;				
			nRow++;
			xls.SetCellMergedColumns(0, nRow, 16);
			xls.SetCellText(0, nRow, szNewLine, FMT_TEXT, true);				
			szOldLine = szNewLine;
			nIndex=1;
		}*/
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("sex"), tmpStr);			
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("ethnic"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		if (rs.GetValue(_T("roomid")) == _T("-1"))
			rs.GetValue(_T("deptname"), tmpStr);
		else
			rs.GetValue(_T("roomname"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("enddate"), tmpStr);
		tmpStr2 = CDateTime::Convert(tmpStr, yyyymmdd | hhmm, ddmmyyyy | hhmm);
		xls.SetCellText(8, nRow, tmpStr2, FMT_DATETIME | FMT_WRAPING);

		rs.GetValue(_T("icd"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("maindisease"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("result"), tmpStr);
		xls.SetCellText(11, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("reason"), tmpStr);
		xls.SetCellText(12, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("hospitalname"), tmpStr);
		xls.SetCellText(13, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("insline"), tmpStr);
		if (tmpStr == _T("DT"))
			xls.SetCellText(14, nRow, _T("\x110\xFAng tuy\x1EBFn"), FMT_TEXT | FMT_WRAPING);
		else
			xls.SetCellText(14, nRow, _T("Tr\xE1i tuy\x1EBFn"), FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(15, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("doctor"), tmpStr);		
		xls.SetCellText(16, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	rs.MoveFirst();
	EndWaitCursor();
	xls.Save(_T("Exports\\MSBCthongkeDSBNchuyendi.xls"));
	//UpdateData(false);
}
CString CMSBCthongkeDSBNchuyendi::GetQueryString()
{
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
CString szSQL, szDept, szObject, tmpStr, szOldLine, szNewLine, szWhere;
CString szOutPatient, szInPatient;
CRecord rs(&pMF->m_db);

if (!m_szDeptKey.IsEmpty())
szWhere.AppendFormat(_T(" AND hospitalid = '%s' "), m_szDeptKey);

if (!m_szEthnicKey.IsEmpty())
szWhere.AppendFormat(_T(" AND hp_ethnic = %d "), ToInt(m_szEthnicKey));


szSQL.Format(_T(" SELECT") \
			 _T("   (SELECT hh_name FROM hms_hospital WHERE hh_id=hospitalid") \
			 _T("   ) AS hospitalname,") \
			 _T("   admitdate,") \
			 _T("   enddate,") \
			 _T("   hd_docno AS docno,") \
			 _T("   trim(hp_surname") \
			 _T("   ||' '") \
			 _T("   ||hp_midname") \
			 _T("   ||' '") \
			 _T("   ||hp_firstname) AS pname,") \
			 _T("   hms_getage(hd_admitdate, hp_birthdate) AS age,") \
			 _T("   hms_getsex(hp_sex) AS sex,") \
			 _T("   (SELECT ss_desc AS name") \
			 _T("   FROM sys_sel") \
			 _T("   WHERE ss_id                 ='sys_ethnic'") \
			 _T("   AND CAST(ss_code AS INTEGER)=hp_ethnic") \
			 _T("   )                                               AS ethnic,") \
			 _T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
			 _T("   icd,") \
			 _T("   maindisease,") \
			 _T("   (SELECT ss_desc") \
			 _T("   FROM sys_sel") \
			 _T("   WHERE ss_code=result") \
			 _T("   AND ss_id    ='hms_result'") \
			 _T("   ) AS result,") \
			 _T("   get_username(doctor) AS doctor,") \
			 _T("   hc_cardno AS cardno,") \
			 _T("   CASE") \
			 _T("     WHEN hd_insline='Y'") \
			 _T("     THEN 'TT'") \
			 _T("     ELSE 'DT'") \
			 _T("   END AS insline,") \
			 _T("   roomid,") \
			 _T("   deptid,") \
			 _T("   hrl_name    AS roomname,") \
			 _T("   sd_name     AS deptname,") \
			 _T("   hhtd_reason AS reason") \
			 _T(" FROM") \
			 _T("   (SELECT hd_admitdate AS admitdate,") \
			 _T("     hd_enddate         AS enddate,") \
			 _T("     hd_patientno       AS patientno,") \
			 _T("     hd_docno           AS docno,") \
			 _T("     hd_suggestion      AS suggestion,") \
			 _T("     hd_status          AS status,") \
			 _T("     hd_tohosid         AS hospitalid,") \
			 _T("     hd_icd             AS icd,") \
			 _T("     hd_diagnostic      AS maindisease,") \
			 _T("     hd_doctor          AS doctor,") \
			 _T("     he_roomid          AS roomid,") \
			 _T("     hd_enddept         AS deptid,") \
			 _T("     hd_result          AS result") \
			 _T("   FROM hms_exam") \
			 _T("   LEFT JOIN hms_doc") \
			 _T("   ON(hd_docno      =he_docno") \
			 _T("   AND hd_areceptidx=he_receptidx)") \
			 _T("   WHERE hd_status  ='T'") \
			 _T("   AND hd_suggestion='F' ") \
			 _T("   UNION ALL") \
			 _T("   SELECT hcr_admitdate,") \
			 _T("     hcr_dischargedate,") \
			 _T("     hcr_patientno,") \
			 _T("     hcr_docno,") \
			 _T("     hcr_suggestion,") \
			 _T("     hcr_status,") \
			 _T("     hcr_hospitalid,") \
			 _T("     hcr_mainicd,") \
			 _T("     hcr_maindisease,") \
			 _T("     hcr_treatdoctor,") \
			 _T("     0,") \
			 _T("     hcr_admitdept,") \
			 _T("     hcr_result") \
			 _T("   FROM hms_clinical_record") \
			 _T("   WHERE hcr_status  ='T'") \
			 _T("   AND hcr_suggestion='F' ") \
			 _T("   ) Tbl") \
			 _T(" LEFT JOIN hms_patient") \
			 _T(" ON(hp_patientno=patientno)") \
			 _T(" LEFT JOIN hms_doc") \
			 _T(" ON(hd_docno=docno)") \
			 _T(" LEFT JOIN hms_object") \
			 _T(" ON(ho_id=hd_object)") \
			 _T(" LEFT JOIN hms_card") \
			 _T(" ON(hc_patientno=patientno") \
			 _T(" AND hc_idx     =hd_cardidx") \
			 _T(" AND hc_cardno  =hd_cardno)") \
			 _T(" LEFT JOIN hms_roomlist") \
			 _T(" ON(hrl_id     =roomid") \
			 _T(" AND hrl_deptid=deptid)") \
			 _T(" LEFT JOIN sys_dept") \
			 _T(" ON(sd_id=deptid)") \
			 _T(" LEFT JOIN hms_htdoc") \
			 _T(" ON(hhtd_docno=docno)") \
			 _T(" WHERE enddate  BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			 _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			 _T(" AND suggestion='F'") \
			 _T(" AND status    ='T' %s") \
			 _T(" ORDER BY hospitalname,") \
			 _T("   admitdate,") \
			 _T("   enddate,") \
			 _T("   pname,") \
			 _T("   deptid"),
			 m_szFromDate, m_szToDate, szWhere);
return szSQL;			 
}