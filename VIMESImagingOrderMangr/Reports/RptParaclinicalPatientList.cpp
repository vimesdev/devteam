#include "RptParaclinicalPatientList.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
static void _OnOrderDateSelectFnc(CWnd *pWnd){
	  ((CRptParaclinicalPatientList*)pWnd)->OnOrderDateSelect();
}
static void _OnPerformDateSelectFnc(CWnd *pWnd){
	  ((CRptParaclinicalPatientList*)pWnd)->OnPerformDateSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRptParaclinicalPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRptParaclinicalPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRptParaclinicalPatientList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRptParaclinicalPatientList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnDepartmentAddNew();
}
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRptParaclinicalPatientList* )pWnd)->OnTestGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestGroupSelendokFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnTestGroupSelendok();
}
/*static void _OnTestGroupSetfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnTestGroupKillfocus();
}*/
/*static void _OnTestGroupKillfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnTestGroupKillfocus();
}*/
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CRptParaclinicalPatientList *)pWnd)->OnTestGroupLoadData();
}
/*static void _OnTestGroupAddNewFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnTestGroupAddNew();
}*/
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRptParaclinicalPatientList* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CRptParaclinicalPatientList *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnPractitionerAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRptParaclinicalPatientList* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CRptParaclinicalPatientList *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList *)pWnd)->OnObjectAddNew();
}*/
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CRptParaclinicalPatientList*)pWnd)->OnOutpatientSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CRptParaclinicalPatientList*)pWnd)->OnInpatientSelect();
}
static void _OnAllHospitallSelectFnc(CWnd *pWnd){
	  ((CRptParaclinicalPatientList*)pWnd)->OnAllHospitallSelect();
}
static long _OnListItemLoadDataFnc(CWnd *pWnd){
	return ((CRptParaclinicalPatientList*)pWnd)->OnListItemLoadData();
} 
static void _OnListItemDblClickFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList*)pWnd)->OnListItemDblClick();
} 

static void _OnListItemClickFnc(CWnd *pWnd){
	((CRptParaclinicalPatientList*)pWnd)->OnListItemClick();	
} 
static void _OnListItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CRptParaclinicalPatientList*)pWnd)->OnListItemSelectChange(nOldItem, nNewItem);
} 
static int _OnListItemDeleteItemFnc(CWnd *pWnd){
	 return ((CRptParaclinicalPatientList*)pWnd)->OnListItemDeleteItem();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRptParaclinicalPatientList *pVw = (CRptParaclinicalPatientList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRptParaclinicalPatientList *pVw = (CRptParaclinicalPatientList *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddRptParaclinicalPatientListFnc(CWnd *pWnd){
	 return ((CRptParaclinicalPatientList*)pWnd)->OnAddRptParaclinicalPatientList();
} 
static int _OnEditRptParaclinicalPatientListFnc(CWnd *pWnd){
	 return ((CRptParaclinicalPatientList*)pWnd)->OnEditRptParaclinicalPatientList();
} 
static int _OnDeleteRptParaclinicalPatientListFnc(CWnd *pWnd){
	 return ((CRptParaclinicalPatientList*)pWnd)->OnDeleteRptParaclinicalPatientList();
} 
static int _OnSaveRptParaclinicalPatientListFnc(CWnd *pWnd){
	 return ((CRptParaclinicalPatientList*)pWnd)->OnSaveRptParaclinicalPatientList();
} 
static int _OnCancelRptParaclinicalPatientListFnc(CWnd *pWnd){
	 return ((CRptParaclinicalPatientList*)pWnd)->OnCancelRptParaclinicalPatientList();
} 
CRptParaclinicalPatientList::CRptParaclinicalPatientList(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 535;
	m_nDlgHeight = 600;
	m_szTitle = _T("\x44\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n l\xE0m \x63\x1EADn l\xE2m s\xE0ng");
	SetDefaultValues();
}
CRptParaclinicalPatientList::~CRptParaclinicalPatientList(){
}
void CRptParaclinicalPatientList::OnCreateComponents(){
	m_wndOrderDate.Create(this, _T("Order Date"), 10, 30, 130, 55);
	m_wndPerformDate.Create(this, _T("Perform Date"), 275, 30, 395, 55);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 255, 85); 
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 525, 180);
	m_wndToDateLabel.Create(this, _T("To Date"), 275, 60, 375, 85);
	m_wndToDate.Create(this,380, 60, 520, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 110, 115);
	m_wndDepartment.Create(this,115, 90, 520, 115); 
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 10, 120, 110, 145);
	m_wndPractitioner.Create(this,115, 120, 255, 145); 
	m_wndGroupTest.Create(this, _T("Test Group"), 5, 190, 525, 565);
	m_wndObjectLabel.Create(this, _T("Object"), 275, 120, 375, 145);
	m_wndObject.Create(this,380, 120, 520, 145); 
	m_wndOutpatient.Create(this, _T("Outpatient"), 10, 150, 136, 175);
	m_wndInpatient.Create(this, _T("Inpatient"), 185, 150, 310, 175);
	m_wndAllHospitall.Create(this, _T("All Hospitall"), 380, 150, 520, 175);
	m_wndListItem.Create(this,10, 215, 525, 560); 
	m_wndExport.Create(this, _T("&Export"), 360, 570, 440, 595);
	m_wndClose.Create(this, _T("&Close"), 445, 570, 525, 595);

}
void CRptParaclinicalPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	//m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(35);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_wndOutpatient.SetCheckValue(true);
	m_wndTestGroup.SetCheckValue(true);
	m_szFromDate = pMF->GetSysDate() + _T("00:01");
	m_szToDate = pMF->GetSysDate()+ _T("23:59");
	m_wndTestGroup.LimitText(35);
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 280);


	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndPractitioner.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndListItem.SetCheckBox(true);
	m_wndListItem.InsertColumn(1, _T("ID"), CFMT_TEXT, 0);
	m_wndListItem.InsertColumn(0, _T("Desc"), CFMT_TEXT, 400);
	m_wndTestGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_nPerformDate = 0;
	OnListItemLoadData();
	UpdateData(FALSE);
}
void CRptParaclinicalPatientList::OnSetWindowEvents(){
	m_wndOrderDate.SetEvent(WE_CLICK, _OnOrderDateSelectFnc);
	m_wndPerformDate.SetEvent(WE_CLICK, _OnPerformDateSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndAllHospitall.SetEvent(WE_CLICK, _OnAllHospitallSelectFnc);
//	m_wndTestGroup.SetEvent(WE_SELENDOK, _OnTestGroupSelendokFnc);
	//m_wndTestGroup.SetEvent(WE_SETFOCUS, _OnTestGroupSetfocusFnc);
	//m_wndTestGroup.SetEvent(WE_KILLFOCUS, _OnTestGroupKillfocusFnc);
//	m_wndTestGroup.SetEvent(WE_SELCHANGE, _OnTestGroupSelectChangeFnc);
	m_wndTestGroup.SetEvent(WE_LOADDATA, _OnTestGroupLoadDataFnc);
	//m_wndTestGroup.SetEvent(WE_ADDNEW, _OnTestGroupAddNewFnc);
	m_wndListItem.SetEvent(WE_SELCHANGE, _OnListItemSelectChangeFnc);
	m_wndListItem.SetEvent(WE_LOADDATA, _OnListItemLoadDataFnc);
	m_wndListItem.SetEvent(WE_DBLCLICK, _OnListItemDblClickFnc);
	m_wndListItem.SetEvent(WE_CHECKVALUE , _OnListItemClickFnc);

	m_wndListItem.AddEvent(1, _T("Delete"), _OnListItemDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CRptParaclinicalPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndOrderDate.GetDlgCtrlID(), m_nOrderDate);
	DDX_Radio(pDX, m_wndPerformDate.GetDlgCtrlID(), m_nPerformDate);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndTestGroup.GetDlgCtrlID(), m_szTestGroupKey);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);
	DDX_Check(pDX, m_wndAllHospitall.GetDlgCtrlID(), m_bAllHospitall);

}
void CRptParaclinicalPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRptParaclinicalPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CRptParaclinicalPatientList::SetDefaultValues(){

	m_nOrderDate=1;
	m_nPerformDate=1;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szPractitionerKey.Empty();
	m_szObjectKey.Empty();
	m_bOutpatient = FALSE;
	m_bInpatient = FALSE;
	m_bAllHospitall=FALSE;
	m_szTestGroupKey.Empty();

}
int CRptParaclinicalPatientList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
long CRptParaclinicalPatientList::OnTestGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	if(m_wndTestGroup.IsSearchKey() && !m_szTestGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id ='%s' "), m_szTestGroupKey);
	};
	szSQL.Format(_T(" select hfg_id as id, hfg_name as name from hms_feegroup  where hfg_id in('B1000','B2000','B3000') %s") , szWhere);
	m_wndTestGroup.DeleteAllItems(); 
	int i=1,nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		tmpStr.Format(_T("%d"),i++);
		m_wndTestGroup.AddItems(
			tmpStr,			
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
void CRptParaclinicalPatientList::OnOrderDateSelect(){
	
}
void CRptParaclinicalPatientList::OnPerformDateSelect(){
	
}
/*void CRptParaclinicalPatientList::OnFromDateChange(){
	
} */
/*void CRptParaclinicalPatientList::OnFromDateSetfocus(){
	
} */
/*void CRptParaclinicalPatientList::OnFromDateKillfocus(){
	
} */
int CRptParaclinicalPatientList::OnFromDateCheckValue(){
	UpdateData(TRUE);
	CDate date;
	date.ParseDate(m_szToDate);
	if (date.GetYear() != 1752 && CompareDateTime(m_szFromDate, m_szToDate) > 0)
	{
		m_wndFromDate.SetToolTipMessage(_T("T\x1EEB ng\xE0y ph\x1EA3i  <= \x110\x1EBFn ng\xE0y"));
		return -1;
	}
	return 0;
} 
/*void CRptParaclinicalPatientList::OnToDateChange(){
	
} */
/*void CRptParaclinicalPatientList::OnToDateSetfocus(){
	
} */
/*void CRptParaclinicalPatientList::OnToDateKillfocus(){
	
} */
int CRptParaclinicalPatientList::OnToDateCheckValue(){
	UpdateData(TRUE);
	CDate date;
	date.ParseDate(m_szFromDate);
	if (date.GetYear() != 1752 && CompareDateTime(m_szToDate, m_szFromDate) < 0)
	{
		m_wndToDate.SetToolTipMessage(_T("\x110\x1EBFn ng\xE0y ph\x1EA3i >= T\x1EEB ng\xE0y"));
		return -1;
	}
	return 0;
} 
void CRptParaclinicalPatientList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRptParaclinicalPatientList::OnDepartmentSelendok(){
	 
}
/*void CRptParaclinicalPatientList::OnDepartmentSetfocus(){
	
}*/
/*void CRptParaclinicalPatientList::OnDepartmentKillfocus(){
	
}*/
long CRptParaclinicalPatientList::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	};
	szSQL.Format(_T(" SELECT sd_id as id, sd_name as name from sys_dept where sd_type in('KB','DT') %s"), szWhere);
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRptParaclinicalPatientList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRptParaclinicalPatientList::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRptParaclinicalPatientList::OnPractitionerSelendok(){
	 
}
/*void CRptParaclinicalPatientList::OnPractitionerSetfocus(){
	
}*/
/*void CRptParaclinicalPatientList::OnPractitionerKillfocus(){
	
}*/
long CRptParaclinicalPatientList::OnPractitionerLoadData(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPractitioner.IsSearchKey() && !m_szPractitionerKey.IsEmpty()){
		szWhere.Format(_T(" AND su_userid ='%s'"), m_szPractitionerKey);
	};
	szSQL.Format(_T(" SELECT su_userid as id, su_name as name from sys_user as name left join sys_dept on(sd_id=su_deptid)where sd_type in('KB','DT') %s"), szWhere);
	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRptParaclinicalPatientList::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRptParaclinicalPatientList::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRptParaclinicalPatientList::OnObjectSelendok(){
	 
}
/*void CRptParaclinicalPatientList::OnObjectSetfocus(){
	
}*/
/*void CRptParaclinicalPatientList::OnObjectKillfocus(){
	
}*/
long CRptParaclinicalPatientList::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" AND ho_id=%s"), m_szObjectKey);
	};
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name from hms_object where ho_id in('1','9','2') %s ORDER BY cast(ho_id as integer)"), szWhere);
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRptParaclinicalPatientList::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRptParaclinicalPatientList::OnOutpatientSelect(){
	// cap nhat gia tri control vao bien
	UpdateData(TRUE);
	if (m_wndOutpatient.GetCheck())
	{
		m_wndInpatient.EnableWindow(FALSE);
		m_wndAllHospitall.EnableWindow(FALSE);
	}
	else 
	{
		m_wndInpatient.EnableWindow(TRUE);
		m_wndAllHospitall.EnableWindow(TRUE);
	}
}
void CRptParaclinicalPatientList::OnInpatientSelect(){
	UpdateData(TRUE);
	 if (m_wndInpatient.GetCheck())
	 {
		m_wndOutpatient.EnableWindow(FALSE);
		m_wndAllHospitall.EnableWindow(FALSE);
	 }
	else
	{
		m_wndOutpatient.EnableWindow(TRUE);
		m_wndAllHospitall.EnableWindow(TRUE);
	}
	
}
void CRptParaclinicalPatientList::OnAllHospitallSelect(){
	UpdateData(TRUE);
	if(m_wndAllHospitall.GetCheck())
	{
		m_wndOutpatient.EnableWindow(FALSE);
		m_wndInpatient.EnableWindow(FALSE);
	}
	else 
	{
		m_wndOutpatient.EnableWindow(TRUE);
		m_wndInpatient.EnableWindow(TRUE);
	}
	
}
void CRptParaclinicalPatientList::OnListItemDblClick(){
	//int nSel = m_wndListItem.GetCurSel();
	//if (nSel < 0) return;
	//if (m_bCheckAll)
	//	m_bCheckAll = false;
	//else
	//	m_bCheckAll = true;
	//
	//if (m_wndListItem.GetItemText(nSel,2)=="*")
	//{
	//	for (int i = nSel+1; i<= m_wndListItem.GetItemCount(); i++){
	//		m_wndListItem.SetCheck(i-1, m_bCheckAll);
	//		if (m_wndListItem.GetItemText(i,2)=="*") 
	//			break;			
	//	}
	//}
	//return 0;
} 
void CRptParaclinicalPatientList::OnListItemClick()
{	
	int nSel= m_wndListItem.GetCurSel();
	if (nSel < 0) return;
	if (m_bCheckAll)
		m_bCheckAll=false;
	else	
		m_bCheckAll=true;
	m_wndListItem.SetCheck(nSel,m_bCheckAll);
} 
void CRptParaclinicalPatientList::OnListItemSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRptParaclinicalPatientList::OnListItemDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CRptParaclinicalPatientList::OnListItemLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr,tmpName;
	m_wndListItem.BeginLoad(); 
	m_wndListItem.DeleteAllItems(); 

	szSQL.Format(_T(" select hfg_id as id, hfg_name as name from hms_feegroup  where hfg_id like ('B1%s') or hfg_id like ('B2%s') or hfg_id like ('B3%s') order by hfg_id"), _T("%"),_T("%"),_T("%"));
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		tmpStr.Format(_T("%s"),rs.GetValue(_T("id")));
		if (tmpStr==_T("B1000") || tmpStr==_T("B2000") || tmpStr==_T("B3000"))
		{
			tmpStr = _T("*");					
			tmpName.Format(_T("+ %s"), rs.GetValue(_T("name")));			
		}
		else
		{
			tmpStr.Empty();
			tmpName.Format(_T("      - %s"), rs.GetValue(_T("name")));
		}
		m_wndListItem.AddItems(
			tmpName,
			rs.GetValue(_T("id")),
			tmpStr, NULL);
		if (tmpStr==_T("*") )
		{
			
			m_wndListItem.SetItemBkColor(m_wndListItem.GetItemCount()-1, RGB(0, 107, 239), FALSE);
			m_wndListItem.SetItemTextColor(m_wndListItem.GetItemCount()-1, COLOR_WHITE, FALSE);
		}
		rs.MoveNext();
	}
	m_wndListItem.EndLoad(); 
	return nCount;
}
void CRptParaclinicalPatientList::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,szWhere1,szWhere2, szWhere3, szWhere4, m_szGroups;
	szWhere.Empty();
	m_szGroups.Empty();
	UpdateData(true);
	for (int i=0; i< m_wndListItem.GetItemCount(); i++)
	{
		if(m_wndListItem.GetCheck(i))
		{
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");
			m_szGroups.AppendFormat(_T("'%s'"), m_wndListItem.GetItemText(i, 1));
		}
	}
	if (m_nPerformDate==0)		
		szWhere.Format(_T(" pcmso_performdate between '%s' and '%s' and pcmso_status ='T'"), m_szFromDate, m_szToDate);
	else
		szWhere.Format(_T(" pcmso_orderdate between '%s' and '%s' and pcmso_status ='S'"), m_szFromDate, m_szToDate);


	 if(!m_szGroups.IsEmpty())
		szWhere.AppendFormat(_T(" and pcmso_groupid in(%s) "), m_szGroups);

	if (!m_wndDepartment.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND pcmso_deptid='%s' "), m_wndDepartment.GetCurrent(0));
	
	if (!m_wndPractitioner.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND pcmso_doctor='%s' "), m_wndPractitioner.GetCurrent(0));
	
	if (!m_wndObject.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object='%s' "), m_wndObject.GetCurrent(0));
		
	// dieu tri ngoai tru, dieu tri noi tru, tat ca

	if (m_bOutpatient==TRUE)
	{
		szWhere1.Format(_T(" and pcmso_deptid='KB' and pcmso_payment = 'N'"));
		szWhere2.Format(_T(" and pcmso_deptid='KB' and pcmso_payment = 'P'"));
		szWhere3.Format(_T(" and 0 = 1"));
		szWhere4.Format(_T(" and 0 = 1"));
	}
	 else if (m_bInpatient == TRUE)
	 {
		szWhere1.Format(_T(" and 0 = 1  "));
		szWhere2.Format(_T(" and 0 = 1 "));
		szWhere3.Format(_T(" and pcmso_deptid<>'KB' and pcmso_payment = 'N'"));
		szWhere4.Format(_T(" and pcmso_deptid<>'KB' and pcmso_payment = 'P'"));
	 }
	 else if (m_bAllHospitall == TRUE)
	 {
		szWhere1.Format(_T(" and pcmso_deptid='KB' and pcmso_payment = 'N'"));
		szWhere2.Format(_T(" and pcmso_deptid='KB' and pcmso_payment = 'P'"));
		szWhere3.Format(_T(" and pcmso_deptid<>'KB' and pcmso_payment = 'N'"));
		szWhere4.Format(_T(" and pcmso_deptid<>'KB' and pcmso_payment = 'P'"));
	 }

		BeginWaitCursor();
		szSQL.Format(_T(" SELECT '1' as title,") \
					_T(" 	(SELECT hfg_name from hms_feegroup where hfg_id= pcmso_groupid) as groupid,") \
					_T(" 	 docno,") \
					_T(" 	 pname,") \
					_T(" 	 sex,") \
					_T(" 	 age,") \
					_T(" 	 hp_vnaddrcde,") \
					_T(" 	cardno,") \
					_T(" 	hfl_servprice,") \
					_T(" 	hfl_insprice,") \
					_T(" 	hfg_name,name,  ") \
					_T(" 	pcmso_status,") \
					_T(" 	ngayyeucau,") \
					_T(" 	ngaythuchien,") \
					_T(" 	pcmso_practitioner") \
					_T(" from") \
					_T(" (") \
					_T(" 	SELECT pcmso_groupid, hd_docno as docno, ") \
					_T(" 		hp_surname||' '||hp_midname||' '||hp_firstname as pname,") \
					_T(" 		hms_getage(date(hd_admitdate),date(hp_birthdate)) as hp_age,") \
					_T(" 		sys_sel_getname('sys_sex',hp_sex) as sex,") \
					_T(" 		hms_getage(date(hd_admitdate),date(hp_birthdate)) as age,") \
					_T(" 		hms_getaddress(hp_provid,hp_distid,hp_villid) as hp_vnaddrcde,") \
					_T(" 		hd_cardno as cardno,") \
					_T(" 		hfl_servprice,") \
					_T(" 		hfl_insprice,") \
					_T(" 		pcmso_status,") \
					_T(" 		hfg_name,hfl_name as name, ") \
					_T(" 		date(pcmso_orderdate) as ngayyeucau,") \
					_T(" 		date(pcmso_performdate) as ngaythuchien,") \
					_T(" 		su_name as pcmso_practitioner") \
					_T(" 	FROM pcms_order") \
					_T(" 	LEFT JOIN hms_doc ON pcmso_docno = hd_docno") \
					_T(" 	LEFT JOIN hms_patient ON hp_patientno = hd_patientno") \
					_T(" 	LEFT JOIN pcms_order_line ON pcmso_orderid = pcmsol_orderid and pcmso_patientno = hp_patientno") \
					_T(" 	LEFT JOIN hms_feelist ON pcmsol_itemid = hfl_feeid ") \
					_T(" 	LEFT JOIN hms_feegroup on pcms_order.pcmso_groupid=hms_feegroup.hfg_id") \
					_T(" 	LEFT JOIN sys_user on pcms_order.pcmso_doctor = sys_user.su_userid") \
					_T(" 	WHERE  hfl_servprice!=0  and %s %s ") \
					_T(" 	) as tbl1") \
					_T("  union all") \
					_T("  SELECT '2' as title,") \
					_T(" 	(SELECT hfg_name from hms_feegroup where hfg_id= pcmso_groupid) as groupid,") \
					_T(" 	 docno,") \
					_T(" 	 pname,") \
					_T(" 	 sex,") \
					_T(" 	 age,") \
					_T(" 	 hp_vnaddrcde,") \
					_T(" 	cardno,") \
					_T(" 	hfl_servprice,") \
					_T(" 	hfl_insprice,") \
					_T(" 	hfg_name, name, ") \
					_T(" 	pcmso_status,") \
					_T(" 	ngayyeucau,") \
					_T(" 	ngaythuchien,") \
					_T(" 	pcmso_practitioner") \
					_T(" from") \
					_T(" (") \
					_T(" 	SELECT pcmso_groupid, hd_docno as docno, ") \
					_T(" 		hp_surname||' '||hp_midname||' '||hp_firstname as pname,") \
					_T(" 		hms_getage(date(hd_admitdate),date(hp_birthdate)) as hp_age,") \
					_T(" 		sys_sel_getname('sys_sex',hp_sex) as sex,") \
					_T(" 		hms_getage(date(hd_admitdate),date(hp_birthdate)) as age,") \
					_T(" 		hms_getaddress(hp_provid,hp_distid,hp_villid) as hp_vnaddrcde,") \
					_T(" 		hd_cardno as cardno,") \
					_T(" 		hfl_servprice,") \
					_T(" 		hfl_insprice,") \
					_T(" 		pcmso_status,") \
					_T(" 		hfg_name,hfl_name as name, ") \
					_T(" 		date(pcmso_orderdate) as ngayyeucau,") \
					_T(" 		date(pcmso_performdate) as ngaythuchien,") \
					_T(" 		su_name as pcmso_practitioner") \
					_T(" 	FROM pcms_order") \
					_T(" 	LEFT JOIN hms_doc ON pcmso_docno = hd_docno") \
					_T(" 	LEFT JOIN hms_patient ON hp_patientno = hd_patientno") \
					_T(" 	LEFT JOIN pcms_order_line ON pcmso_orderid = pcmsol_orderid and pcmso_patientno = hp_patientno") \
					_T(" 	LEFT JOIN hms_feelist ON pcmsol_itemid = hfl_feeid ") \
					_T(" 	LEFT JOIN hms_feegroup on pcms_order.pcmso_groupid=hms_feegroup.hfg_id") \
					_T(" 	LEFT JOIN sys_user on pcms_order.pcmso_doctor = sys_user.su_userid") \
					_T(" 	WHERE hfl_servprice!=0 and %s %s ") \
					_T(" 	) as tbl2") \
					_T("  union all") \
					_T("  SELECT '3' as title,") \
					_T(" 	(SELECT hfg_name from hms_feegroup where hfg_id= pcmso_groupid) as groupid,") \
					_T(" 	 docno,") \
					_T(" 	 pname,") \
					_T(" 	 sex,") \
					_T(" 	 age,") \
					_T(" 	 hp_vnaddrcde,") \
					_T(" 	cardno,") \
					_T(" 	hfl_servprice,") \
					_T(" 	hfl_insprice,") \
					_T(" 	hfg_name,name, ") \
					_T(" 	pcmso_status,") \
					_T(" 	ngayyeucau,") \
					_T(" 	ngaythuchien,") \
					_T(" 	pcmso_practitioner") \
					_T(" from") \
					_T(" (") \
					_T(" 	SELECT pcmso_groupid, hd_docno as docno, ") \
					_T(" 		hp_surname||' '||hp_midname||' '||hp_firstname as pname,") \
					_T(" 		hms_getage(date(hd_admitdate),date(hp_birthdate)) as hp_age,") \
					_T(" 		sys_sel_getname('sys_sex',hp_sex) as sex,") \
					_T(" 		hms_getage(date(hd_admitdate),date(hp_birthdate)) as age,") \
					_T(" 		hms_getaddress(hp_provid,hp_distid,hp_villid) as hp_vnaddrcde,") \
					_T(" 		hd_cardno as cardno,") \
					_T(" 		hfl_servprice,") \
					_T(" 		hfl_insprice,") \
					_T(" 		pcmso_status,") \
					_T(" 		hfg_name,hfl_name as name, ") \
					_T(" 		date(pcmso_orderdate) as ngayyeucau,") \
					_T(" 		date(pcmso_performdate) as ngaythuchien,") \
					_T(" 		su_name as pcmso_practitioner") \
					_T(" 	FROM pcms_order") \
					_T(" 	LEFT JOIN hms_doc ON pcmso_docno = hd_docno") \
					_T(" 	LEFT JOIN hms_patient ON hp_patientno = hd_patientno") \
					_T(" 	LEFT JOIN pcms_order_line ON pcmso_orderid = pcmsol_orderid and pcmso_patientno = hp_patientno") \
					_T(" 	LEFT JOIN hms_feelist ON pcmsol_itemid = hfl_feeid ") \
					_T(" 	LEFT JOIN hms_feegroup on pcms_order.pcmso_groupid=hms_feegroup.hfg_id") \
					_T(" 	LEFT JOIN sys_user on pcms_order.pcmso_doctor = sys_user.su_userid") \
					_T(" 	WHERE  hfl_servprice!=0 and %s %s ") \
					_T(" 	) as tbl3") \
					_T(" union all") \
					_T("  SELECT '4' as title,") \
					_T(" 	(SELECT hfg_name from hms_feegroup where hfg_id= pcmso_groupid) as groupid,") \
					_T(" 	 docno,") \
					_T(" 	 pname,") \
					_T(" 	 sex,") \
					_T(" 	 age,") \
					_T(" 	 hp_vnaddrcde,") \
					_T(" 	cardno,") \
					_T(" 	hfl_servprice,") \
					_T(" 	hfl_insprice,") \
					_T(" 	hfg_name, name, ") \
					_T(" 	pcmso_status,") \
					_T(" 	ngayyeucau,") \
					_T(" 	ngaythuchien,") \
					_T(" 	pcmso_practitioner") \
					_T(" from") \
					_T(" (") \
					_T(" 	SELECT pcmso_groupid, hd_docno as docno, ") \
					_T(" 		hp_surname||' '||hp_midname||' '||hp_firstname as pname,") \
					_T(" 		hms_getage(date(hd_admitdate),date(hp_birthdate)) as hp_age,") \
					_T(" 		sys_sel_getname('sys_sex',hp_sex) as sex,") \
					_T(" 		hms_getage(date(hd_admitdate),date(hp_birthdate)) as age,") \
					_T(" 		hms_getaddress(hp_provid,hp_distid,hp_villid) as hp_vnaddrcde,") \
					_T(" 		hd_cardno as cardno,") \
					_T(" 		hfl_servprice,") \
					_T(" 		hfl_insprice,") \
					_T(" 		pcmso_status,") \
					_T(" 		hfg_name,hfl_name as name, ") \
					_T(" 		date(pcmso_orderdate) as ngayyeucau,") \
					_T(" 		date(pcmso_performdate) as ngaythuchien,") \
					_T(" 		su_name as pcmso_practitioner") \
					_T(" 	FROM pcms_order") \
					_T(" 	LEFT JOIN hms_doc ON pcmso_docno = hd_docno") \
					_T(" 	LEFT JOIN hms_patient ON hp_patientno = hd_patientno") \
					_T(" 	LEFT JOIN pcms_order_line ON pcmso_orderid = pcmsol_orderid and pcmso_patientno = hp_patientno") \
					_T(" 	LEFT JOIN hms_feelist ON pcmsol_itemid = hfl_feeid ") \
					_T(" 	LEFT JOIN hms_feegroup on pcms_order.pcmso_groupid=hms_feegroup.hfg_id") \
					_T(" 	LEFT JOIN sys_user on pcms_order.pcmso_doctor = sys_user.su_userid") \
					_T(" 	WHERE hfl_servprice!=0  and %s %s ") \
					_T(" 	) as tbl4") \
					_T("  order by title,groupid"),szWhere, szWhere1, szWhere, szWhere2, szWhere, szWhere3, szWhere, szWhere4);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Kh\xF4ng \x63\xF3 \x64\x1EEF li\x1EC7u"), MB_OK | MB_ICONEXCLAMATION);
		return ;
	}

	int nRow = 0;
	int nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 23);
	xls.SetColumnWidth(6, 46);
	xls.SetColumnWidth(7, 11);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 12);
	xls.SetColumnWidth(10, 12);
	xls.SetColumnWidth(11, 25);
	xls.SetColumnWidth(12, 20);
	xls.SetColumnWidth(13, 20);


	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	xls.SetCellMergedColumns(nCol, nRow, 4);
	xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 11);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	xls.SetCellMergedColumns(nCol, nRow + 1, 4);
	xls.SetCellText(nCol, nRow + 1, tmpStr, FMT_TEXT|FMT_CENTER, true, 11);
	xls.SetCellMergedColumns(nCol, nRow + 2, 14);
	xls.SetCellMergedColumns(nCol, nRow + 3, 14);
	xls.SetCellText(nCol, nRow + 2, _T("\x42\xC1O \x43\xC1O \x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N L\xC0M \x43LS"), FMT_TEXT|FMT_CENTER, true, 18);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));

	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT|FMT_CENTER, true, 12);
	xls.SetCellText(nCol, nRow + 6, _T("STT"), FMT_TEXT, true, 11, 0);
	TranslateString(_T("Doc No"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 6, tmpStr, FMT_TEXT|FMT_CENTER, true, 11, 0);
	TranslateString(_T("Full Name"), tmpStr);
	xls.SetCellText(nCol + 2, nRow + 6, tmpStr, FMT_TEXT|FMT_CENTER, true, 11, 0);
	TranslateString(_T("Age"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 6, tmpStr, FMT_TEXT|FMT_CENTER, true, 11, 0);
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(nCol + 4, nRow + 6, tmpStr, FMT_TEXT|FMT_CENTER, true, 11, 0);
	TranslateString(_T("Card No"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 6, tmpStr, FMT_TEXT|FMT_CENTER, true, 11, 0);
	TranslateString(_T("Address"), tmpStr);
	xls.SetCellText(nCol + 6, nRow + 6, tmpStr, FMT_TEXT|FMT_CENTER, true, 11, 0);
	TranslateString(_T("Order Date"), tmpStr);
	xls.SetCellText(nCol + 7, nRow + 6, tmpStr, FMT_TEXT|FMT_CENTER, true, 11, 0);
	TranslateString(_T("Perform Date"), tmpStr);
	xls.SetCellText(nCol + 8, nRow + 6, tmpStr, FMT_TEXT|FMT_CENTER, true, 11, 0);
	TranslateString(_T("Service price"), tmpStr);
	xls.SetCellText(nCol + 9, nRow + 6, _T("Gi\xE1 DV"), FMT_TEXT|FMT_CENTER, true, 11, 0);
	xls.SetCellText(nCol + 10 , nRow + 6, _T("Gi\xE1 BH"), FMT_TEXT|FMT_CENTER, true, 11, 0);
	xls.SetCellText(nCol + 11 , nRow + 6, _T("T\xEAn"), FMT_TEXT|FMT_CENTER, true, 11, 0);
	TranslateString(_T("Test Name"), tmpStr);
	xls.SetCellText(nCol + 12, nRow + 6, tmpStr, FMT_TEXT|FMT_CENTER, true, 11, 0 );
	TranslateString(_T("Practitioner"), tmpStr);
	xls.SetCellText(nCol + 13, nRow + 6, tmpStr, FMT_TEXT|FMT_CENTER, true, 11, 0 );
	int nIndex = 1;
	CString szOldLine, szNewLine;
	CString szAmount;		
	long double grpCost1 = 0.0;
	long double grpCost2 = 0.0;
	long double ttlCost1 = 0.0;
	long double ttlCost2 = 0.0;
		
	double cost = 0;
	
	nRow += 7;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("title"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			if(grpCost1 > 0 && grpCost2 >0)
			{
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellMergedColumns(nCol, nRow, 9);
				xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
				xls.SetCellText(nCol + 9, nRow, double2str(grpCost1), FMT_NUMBER1, true, 11);
				xls.SetCellText(nCol + 10, nRow, double2str(grpCost1), FMT_NUMBER1, true, 11);
				ttlCost1 +=grpCost1;
				ttlCost2 +=grpCost2;
				grpCost1=0;
				grpCost2=0;
				nRow++;
			}
			rs.GetValue(_T("title"), tmpStr);
			if(tmpStr == _T("1"))
			{
				
				tmpStr = _T("1. \x42\x1EC7nh nh\xE2n ngo\x1EA1i tr\xFA \x63h\x1B0\x61 th\x61nh to\xE1n");
			}
			if(tmpStr == _T("2"))
			{
				tmpStr = _T("2. \x42\x1EC7nh nh\xE2n ngo\x1EA1i tr\xFA \x111\xE3 th\x61nh to\xE1n");
			}

			if(tmpStr == _T("3"))
			{
				tmpStr = _T("3. \x42\x1EC7nh nh\xE2n n\x1ED9i tr\xFA \x63h\x1B0\x61 th\x61nh to\xE1n");	
			}

			if(tmpStr == _T("4"))
			{
				tmpStr = _T("4. \x42\x1EC7nh nh\xE2n n\x1ED9i tr\xFA \x111\xE3 th\x61nh to\xE1n");	
			}
			xls.SetCellMergedColumns(nCol, nRow, 13);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true, 11);
			szOldLine = szNewLine;	
			nIndex = 1;
			nRow++;
		}
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
	
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
	
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
	
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("hp_vnaddrcde"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);
		
		tmpStr = CDate::Convert(rs.GetValue(_T("ngayyeucau")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_DATE);
	
		tmpStr = CDate::Convert(rs.GetValue(_T("ngaythuchien")), yyyymmdd,ddmmyyyy);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_DATE);
		
		rs.GetValue(_T("hfl_servprice"), cost);
		grpCost1 += cost;
		xls.SetCellText(nCol + 9, nRow, double2str(cost), FMT_NUMBER1);
		
		rs.GetValue(_T("hfl_insprice"), cost);
		grpCost2 += cost;
		xls.SetCellText(nCol + 10, nRow, double2str(cost), FMT_NUMBER1);

		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(nCol + 11, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("hfg_name"), tmpStr);
		xls.SetCellText(nCol + 12, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("pcmso_practitioner"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	if (grpCost1 > 0 || grpCost2 > 0)
	{
		TranslateString(_T("Total Group"), szAmount);		
		
		xls.SetCellMergedColumns(nCol, nRow, 9);
		xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
		
		xls.SetCellText(nCol + 9, nRow, double2str(grpCost1), FMT_NUMBER1, true, 11);
		xls.SetCellText(nCol + 10, nRow, double2str(grpCost2), FMT_NUMBER1, true, 11);
		ttlCost1 +=grpCost1;
		ttlCost2 +=grpCost2;

		grpCost1=0;
		grpCost2=0;
		nRow++;
	}
	if (ttlCost1 > 0 || ttlCost2 >0)
	{		
		TranslateString(_T("Total Amount"), szAmount);
		xls.SetCellMergedColumns(nCol, nRow, 9);
		xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
		xls.SetCellText(nCol + 9, nRow, double2str(ttlCost1), FMT_NUMBER1, true, 11);
		xls.SetCellText(nCol + 10, nRow, double2str(ttlCost2), FMT_NUMBER1, true, 11);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DANH SACH BENH NHAN LAM CAN LAM SANG.xls"));
	
} 
void CRptParaclinicalPatientList::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CRptParaclinicalPatientList::OnAddRptParaclinicalPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CRptParaclinicalPatientList::OnEditRptParaclinicalPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CRptParaclinicalPatientList::OnDeleteRptParaclinicalPatientList(){
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
 		OnCancelRptParaclinicalPatientList(); 
 	}
	return 0;
}
int CRptParaclinicalPatientList::OnSaveRptParaclinicalPatientList(){
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
 		//OnRptParaclinicalPatientListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CRptParaclinicalPatientList::OnCancelRptParaclinicalPatientList(){
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
int CRptParaclinicalPatientList::OnRptParaclinicalPatientListListLoadData(){
	return 0;
}
