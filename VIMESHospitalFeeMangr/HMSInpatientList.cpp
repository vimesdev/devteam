#include "HMSInPatientList.h"
#include "MainFrm.h"

static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInPatientList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSInPatientList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnStatusAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInPatientList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSInPatientList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInPatientList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSInPatientList *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSInPatientList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSInPatientList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSInPatientList *pVw = (CHMSInPatientList *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSInPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListRefreshFnc(CWnd *pWnd){
	 return ((CHMSInPatientList*)pWnd)->OnListRefresh();
} 
static int _OnAddHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSInPatientList*)pWnd)->OnAddHMSHFPatientList();
} 
static int _OnEditHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSInPatientList*)pWnd)->OnEditHMSHFPatientList();
} 
static int _OnDeleteHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSInPatientList*)pWnd)->OnDeleteHMSHFPatientList();
} 
static int _OnSaveHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSInPatientList*)pWnd)->OnSaveHMSHFPatientList();
} 
static int _OnCancelHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSInPatientList*)pWnd)->OnCancelHMSHFPatientList();
} 
CHMSInPatientList::CHMSInPatientList(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 645;
	SetDefaultValues();
}
CHMSInPatientList::~CHMSInPatientList(){
}
void CHMSInPatientList::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient List"), 5, 95, 1015, 620);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1015, 90);
	m_wndStatusLabel.Create(this, _T("Status"), 10, 30, 110, 55);
	m_wndStatus.Create(this,115, 30, 560, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 565, 30, 665, 55);
	m_wndFromDate.Create(this,670, 30, 770, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 775, 30, 875, 55);
	m_wndToDate.Create(this,880, 30, 980, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 110, 85);
	m_wndDepartment.Create(this,115, 60, 560, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 565, 60, 665, 85);
	m_wndPatientName.Create(this,670, 60, 770, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 775, 60, 875, 85);
	m_wndDocumentNo.Create(this,880, 60, 980, 85); 
	m_wndSearch.Create(this, _T("@"), 985, 60, 1010, 85);
	m_wndList.Create(this,10, 120, 1010, 615); 


}
void CHMSInPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetNotEmpty(false);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetNotEmpty(false);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndDepartment.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);

	m_wndList.InsertColumn(0, _T("Document No"), CFMT_DATE, 85);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Age"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 45);
	m_wndList.InsertColumn(4, _T("Object"), CFMT_TEXT, 105);
	m_wndList.InsertColumn(5, _T("Card No"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(6, _T("Discount"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(7, _T("Department"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(8, _T("In Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(9, _T("Out Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(10, _T("deptid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("Refidx"), CFMT_NUMBER, 0);
	

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate = _T("2012/09/30");
//	m_szDepartmentKey = pMF->GetCurrentDepartmentID();

}
void CHMSInPatientList::OnSetWindowEvents(){
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Patient List"));
	m_wndList.AddEvent(1, _T("Refresh"), _OnListRefreshFnc, 0, VK_F5);

	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPatientInformation, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndStatus, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDepartment, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndFromDateLabel, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndFromDate, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndToDateLabel, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndToDate, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPatientNameLabel, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPatientName, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDocumentNoLabel, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDocumentNo, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndSearch, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
//	m_wndList.SetAutoColumnSize(true);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSHFPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSHFPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSHFPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSHFPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSHFPatientListFnc, 0, 'T', VK_CONTROL);
*/
	//m_szStatusKey = _T("1");
	SetMode(VM_VIEW);
	//OnListLoadData();
}
void CHMSInPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);

}
void CHMSInPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInPatientList::SetDefaultValues(){
	
	m_szStatusKey.Empty();
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo=0;
}
int CHMSInPatientList::SetMode(int nMode){
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
 			EnableControls(TRUE); 
			m_wndDocumentNo.SetFocus();
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
void CHMSInPatientList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInPatientList::OnStatusSelendok(){
/*
	UpdateData(true);
	 if(m_szStatusKey == _T("3")){
		m_wndFromDate.EnableWindow(true);
		m_wndToDate.EnableWindow(true);
	 }
	 else
	 {
		m_wndFromDate.EnableWindow(false);
		m_wndToDate.EnableWindow(false);
	 }
	//OnListLoadData();
*/
}
/*void CHMSInPatientList::OnStatusSetfocus(){
	
}*/
/*void CHMSInPatientList::OnStatusKillfocus(){
	
}*/
long CHMSInPatientList::OnStatusLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szLabel;
	int nCount = 0;
	m_wndStatus.DeleteAllItems(); 
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		if(m_szStatusKey == _T("1")){
			TranslateString(_T("Admission"), szLabel);
			m_wndStatus.AddItems(_T("1"), szLabel, NULL);
		}
		if(m_szStatusKey == _T("2")){
			TranslateString(_T("Treating"), szLabel);
			m_wndStatus.AddItems(_T("2"), szLabel, NULL);
		}
		if(m_szStatusKey == _T("3")){
			TranslateString(_T("Waiting For Payment"), szLabel);
			m_wndStatus.AddItems(_T("3"), szLabel, NULL);
		}

		if(m_szStatusKey == _T("4")){
			TranslateString(_T("Discharged Paid"), szLabel);
			m_wndStatus.AddItems(_T("4"), szLabel, NULL);
		}
		return 1;
	}

	TranslateString(_T("Admission"), szLabel);
	m_wndStatus.AddItems(_T("1"), szLabel, NULL);
	TranslateString(_T("Treating"), szLabel);
	m_wndStatus.AddItems(_T("2"), szLabel, NULL);
	TranslateString(_T("Waiting For Payment"), szLabel);
	m_wndStatus.AddItems(_T("3"), szLabel, NULL);
	TranslateString(_T("Discharged Paid"), szLabel);
	m_wndStatus.AddItems(_T("4"), szLabel, NULL);

	return 3;
}
/*void CHMSInPatientList::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInPatientList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInPatientList::OnDepartmentSelendok(){
	 //OnListLoadData();
}
/*void CHMSInPatientList::OnDepartmentSetfocus(){
	
}*/
/*void CHMSInPatientList::OnDepartmentKillfocus(){
	
}*/
long CHMSInPatientList::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	};
	szWhere.AppendFormat(_T(" AND sd_type='DT' "));
	
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_dept WHERE 1=1 %s ORDER BY sd_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), 
			rs.GetValue(_T("sd_type")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSInPatientList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInPatientList::OnFromDateChange(){
	
} */
/*void CHMSInPatientList::OnFromDateSetfocus(){
	
} */
/*void CHMSInPatientList::OnFromDateKillfocus(){
	
} */
int CHMSInPatientList::OnFromDateCheckValue(){
	//OnListLoadData();
	return 0;
} 
/*void CHMSInPatientList::OnToDateChange(){
	
} */
/*void CHMSInPatientList::OnToDateSetfocus(){
	
} */
/*void CHMSInPatientList::OnToDateKillfocus(){
	
} */
int CHMSInPatientList::OnToDateCheckValue(){
	//OnListLoadData();
	return 0;
} 
/*void CHMSInPatientList::OnPatientNameChange(){
	
} */
/*void CHMSInPatientList::OnPatientNameSetfocus(){
	
} */
/*void CHMSInPatientList::OnPatientNameKillfocus(){
	
} */
int CHMSInPatientList::OnPatientNameCheckValue(){
	OnListLoadData();
	return 1;
} 
/*void CHMSInPatientList::OnDocumentNoChange(){
	
} */
/*void CHMSInPatientList::OnDocumentNoSetfocus(){
	
} */
/*void CHMSInPatientList::OnDocumentNoKillfocus(){
	
} */
int CHMSInPatientList::OnDocumentNoCheckValue(){
	if(m_wndDocumentNo.GetWindowTextLength() == 0){
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	OnListLoadData();
	return 1;
} 
void CHMSInPatientList::OnSearchSelect(){
	OnListLoadData();
}
void CHMSInPatientList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nDoc = ToLong(m_wndList.GetItemText(nSel, 0));
	pMF->m_nDocumentNo = nDoc;
	pMF->m_szReceiptDeptID = m_wndList.GetItemText(nSel, 10);
	pMF->m_nRefIndex = str2int(m_wndList.GetItemText(nSel, 11));
	pMF->m_nInpatient = 1;
	pMF->m_wndPatientFee.LoadData(nDoc);
} 
void CHMSInPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInPatientList::OnListRefresh(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return OnListLoadData();
} 
long CHMSInPatientList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szType, tmpStr, szObjects;
	UpdateData(true);
	
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	szType = m_wndDepartment.GetCurrent(2);
	
	if(!m_szPatientName.IsEmpty()){
	//	InitCap(m_szPatientName, tmpStr);
	//	szWhere.AppendFormat(_T(" AND lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
		m_nDocumentNo = 0;
	}

	
	
	szObjects = pMF->m_UserInfo.su_hms_xobject;
	if(szObjects.IsEmpty())
		szObjects = _T("''");

		
		if(!m_szDepartmentKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND htr_deptid='%s' "), m_szDepartmentKey);
		
		szWhere.AppendFormat(_T(" AND hd_object in(%s) "), szObjects);
		if(m_szStatusKey == _T("1")){
			szWhere.AppendFormat(_T(" and htr_status ='A' "));
		}
		if(m_szStatusKey == _T("2")){
			szWhere.AppendFormat(_T(" and htr_status='I' "));
		}
		if(m_szStatusKey == _T("3")){
			szWhere.AppendFormat(_T(" and htr_status='T' and htrf_acceptedfee<>'Y'  "));
		}
			
		if(m_szStatusKey == _T("4")){
			szWhere.AppendFormat(_T(" and htr_status='T' and (htrf_acceptedfee='Y' and HTRF_ACCEPTEDDATE BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s 23:59:59', 'yyyy/mm/dd hh24:mi:ss') )  "), m_szFromDate, m_szToDate);
		}

		if(m_nDocumentNo > 0){
			szWhere.Format(_T(" AND htr_docno=%ld "), m_nDocumentNo);
			m_szPatientName.Empty();
		}

		
		

		szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
					_T("      trim(hp_surname") \
					_T("      ||' '") \
					_T("      ||hp_midname") \
					_T("      ||' '") \
					_T("      ||hp_firstname)                               AS patientname,") \
					_T("      hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
					_T("      (SELECT DISTINCT ss_desc") \
					_T("      FROM sys_sel") \
					_T("      WHERE ss_id     ='sys_sex'") \
					_T("           AND ss_code=hp_sex") \
					_T("      ) AS sex,") \
					_T("      (SELECT DISTINCT ho_desc FROM hms_object WHERE ho_id=hd_object") \
					_T("      )                                             AS OBJECT,") \
					_T("      hd_cardno                                     AS cardno,") \
					_T("      hms_getaddress(hp_provid,hp_distid,hp_villid) AS address,") \
					_T("      (SELECT DISTINCT sd_name FROM sys_dept WHERE sd_id=htr_deptid ") \
					_T("      )                           AS department,") \
					_T("      htr_deptid                AS deptid,") \
					_T("      htr_idx                AS refidx,") \
					_T("      CAST(hd_disrate AS INTEGER) AS disrate,") \
					//_T("   case when NVL(HD_INSLINE, 'N') = 'Y' AND NVL(HD_EMERGENCY,'N')='N' THEN HC_DISCOUNT*(select HMS_INSOFFLINE from hms_config)/100 else cast(hd_disrate as integer) end as disrate, ") \//
					_T("      hd_emergency                AS emergency,") \
					_T("      trunc_date(htr_admitdate)         AS admitdate,") \
					_T("      trunc_date(htr_dischargedate)           AS enddate") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc ") \
					_T(" ON(hd_patientno=hp_patientno)") \
					//_T(" LEFT JOIN hms_card ON (hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \//
					_T(" LEFT JOIN hms_clinical_record ") \
					_T(" ON(hcr_docno=hd_docno) ") \
					_T(" LEFT JOIN hms_treatment_record ") \
					_T(" ON(htr_docno=hd_docno) ") \
					_T(" WHERE 1=1") \
					_T(" %s ") \
					_T(" ORDER BY patientname,") \
					_T("      admitdate "), szWhere);





_debug(_T("%s"), szSQL);
	CString szDate, insrate;

	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 

		rs.GetValue(_T("patientname"), tmpStr);
		if(!m_szPatientName.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szPatientName)
				{
					if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
						rs.MoveNext();
						continue;
					}
				}

					
					if(!szSurName.IsEmpty() && szSurName != szSurName2){
						rs.MoveNext();
						continue;
					}
					if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
						rs.MoveNext();
						continue;
					}
			
		}


		rs.GetValue(_T("emergency"), tmpStr);
		rs.GetValue(_T("disrate"), insrate);
		if(insrate == _T("0"))
			insrate.Empty();

		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("patientname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("object")), 
			rs.GetValue(_T("cardno")), 
			insrate, 
			rs.GetValue(_T("department")), 
			rs.GetValue(_T("admitdate")),
			rs.GetValue(_T("enddate")),
			rs.GetValue(_T("refidx")), 
			rs.GetValue(_T("deptid")), 
			NULL);
		if(tmpStr == _T("Y")){
			m_wndList.SetItemBkColor(nItem, RGB(128, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
int CHMSInPatientList::OnAddHMSHFPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSInPatientList::OnEditHMSHFPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInPatientList::OnDeleteHMSHFPatientList(){
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
 		OnCancelHMSHFPatientList(); 
 	}
	return 0;
}
int CHMSInPatientList::OnSaveHMSHFPatientList(){
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
 		//OnHMSHFPatientListListSearchData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInPatientList::OnCancelHMSHFPatientList(){
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
int CHMSInPatientList::OnHMSHFPatientListListSearchData(){
	return 0;

}

void CHMSInPatientList::OnResizeLayout()
{
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndPatientInformation, 100, 100);
}
