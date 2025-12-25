#include "HMSHFPatientList.h"
#include "MainFrm.h"
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((CHMSHFPatientList*)pWnd)->OnOutpatientSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((CHMSHFPatientList*)pWnd)->OnInpatientSelect();
}
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHFPatientList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSHFPatientList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnStatusAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHFPatientList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSHFPatientList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientList *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSHFPatientList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSHFPatientList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSHFPatientList *pVw = (CHMSHFPatientList *)pWnd;
	pVw->OnLoadSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSHFPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSHFPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSHFPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListRefreshFnc(CWnd *pWnd){
	 return ((CHMSHFPatientList*)pWnd)->OnListRefresh();
} 
static int _OnAddHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSHFPatientList*)pWnd)->OnAddHMSHFPatientList();
} 
static int _OnEditHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSHFPatientList*)pWnd)->OnEditHMSHFPatientList();
} 
static int _OnDeleteHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSHFPatientList*)pWnd)->OnDeleteHMSHFPatientList();
} 
static int _OnSaveHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSHFPatientList*)pWnd)->OnSaveHMSHFPatientList();
} 
static int _OnCancelHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSHFPatientList*)pWnd)->OnCancelHMSHFPatientList();
} 
CHMSHFPatientList::CHMSHFPatientList(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 645;
	SetDefaultValues();
}
CHMSHFPatientList::~CHMSHFPatientList(){
}
void CHMSHFPatientList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1000, 90);
	m_wndOutpatient.Create(this, _T("Outpatient"), 10, 30, 160, 55);
	m_wndInpatient.Create(this, _T("Inpatient"), 10, 60, 160, 85);
	m_wndStatusLabel.Create(this, _T("Status"), 165, 30, 245, 55);
	m_wndStatus.Create(this,250, 30, 500, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 505, 30, 615, 55);
	m_wndFromDate.Create(this,620, 30, 705, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 710, 30, 810, 55);
	m_wndToDate.Create(this,815, 30, 900, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 165, 60, 245, 85);
	m_wndDepartment.Create(this,250, 60, 500, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 505, 60, 615, 85);
	m_wndDocumentNo.Create(this,620, 60, 705, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 710, 60, 810, 85);
	m_wndPatientName.Create(this,815, 60, 995, 85); 
	
	m_wndLoad.Create(this, _T("Load - F5"), 905, 30, 995, 55);
	m_wndList.Create(this,5, 95, 1000, 635); 

}
void CHMSHFPatientList::OnInitializeComponents(){
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


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_CENTER, 30);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndDepartment.InsertColumn(2, _T("Type"), CFMT_TEXT, 30);

	m_wndList.InsertColumn(0, _T("Document No"), CFMT_DATE, 80);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Age"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 45);
	m_wndList.InsertColumn(4, _T("Object"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Card No"), CFMT_TEXT, 160);
	m_wndList.InsertColumn(6, _T("Discount"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(7, _T("Department"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(8, _T("From Date -> To Date"), CFMT_TEXT, 220);
	m_wndList.InsertColumn(9, _T("Refidx"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(10, _T("deptid"), CFMT_TEXT, 0);

	m_szFromDate = m_szToDate = pMF->GetSysDate();
//	m_szDepartmentKey = pMF->GetCurrentDepartmentID();

}
void CHMSHFPatientList::OnSetWindowEvents(){
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
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
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Patient List"));
	m_wndList.AddEvent(1, _T("Refresh"), _OnListRefreshFnc, 0, VK_F5);
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
void CHMSHFPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndOutpatient.GetDlgCtrlID(), m_nInpatient);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);

}
void CHMSHFPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSHFPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSHFPatientList::SetDefaultValues(){
	
	m_szStatusKey.Empty();
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo=0;
	m_nInpatient = 0;

}
int CHMSHFPatientList::SetMode(int nMode){
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
void CHMSHFPatientList::OnOutpatientSelect(){
	UpdateData(true);
//	m_wndFromDate.EnableWindow(true);
//	m_wndToDate.EnableWindow(true);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_nInpatient  = m_nInpatient;
	m_wndDepartment.SetCurSel(-1);
	m_szStatusKey.Empty();
	UpdateData(false);
	//OnListLoadData();
}
void CHMSHFPatientList::OnInpatientSelect(){
	UpdateData(true);
	m_wndStatus.EnableWindow(true);
//	m_wndFromDate.EnableWindow(false);
//	m_wndToDate.EnableWindow(false);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_nInpatient  = m_nInpatient;
	m_szStatusKey = _T("2");
	UpdateData(false);
	//OnListLoadData();
}
void CHMSHFPatientList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHFPatientList::OnStatusSelendok(){
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
/*void CHMSHFPatientList::OnStatusSetfocus(){
	
}*/
/*void CHMSHFPatientList::OnStatusKillfocus(){
	
}*/
long CHMSHFPatientList::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szLabel;
	int nCount = 0;
	m_wndStatus.DeleteAllItems(); 
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		if(m_szStatusKey == _T("1")){
			TranslateString(_T("Open"), szLabel);
			m_wndStatus.AddItems(_T("1"), szLabel, NULL);
		}
		if(m_szStatusKey == _T("2")){
			TranslateString(_T("Terminated"), szLabel);
			m_wndStatus.AddItems(_T("2"), szLabel, NULL);
		}
		if(m_szStatusKey == _T("3")){
			TranslateString(_T("Discharged"), szLabel);
			m_wndStatus.AddItems(_T("3"), szLabel, NULL);
		}
		return 1;
	}

	TranslateString(_T("Open"), szLabel);
	m_wndStatus.AddItems(_T("1"), szLabel, NULL);
	TranslateString(_T("Terminated"), szLabel);
	m_wndStatus.AddItems(_T("2"), szLabel, NULL);
	TranslateString(_T("Discharged"), szLabel);
	m_wndStatus.AddItems(_T("3"), szLabel, NULL);
	return 3;
}
/*void CHMSHFPatientList::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSHFPatientList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHFPatientList::OnDepartmentSelendok(){
	 //OnListLoadData();
}
/*void CHMSHFPatientList::OnDepartmentSetfocus(){
	
}*/
/*void CHMSHFPatientList::OnDepartmentKillfocus(){
	
}*/
long CHMSHFPatientList::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	};
	if(m_nInpatient== 0){
		szWhere.AppendFormat(_T(" AND sd_type='KB' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND sd_type='DT' "));
	}
	
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
/*void CHMSHFPatientList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSHFPatientList::OnFromDateChange(){
	
} */
/*void CHMSHFPatientList::OnFromDateSetfocus(){
	
} */
/*void CHMSHFPatientList::OnFromDateKillfocus(){
	
} */
int CHMSHFPatientList::OnFromDateCheckValue(){
	//OnListLoadData();
	return 0;
} 
/*void CHMSHFPatientList::OnToDateChange(){
	
} */
/*void CHMSHFPatientList::OnToDateSetfocus(){
	
} */
/*void CHMSHFPatientList::OnToDateKillfocus(){
	
} */
int CHMSHFPatientList::OnToDateCheckValue(){
	//OnListLoadData();
	return 0;
} 
/*void CHMSHFPatientList::OnPatientNameChange(){
	
} */
/*void CHMSHFPatientList::OnPatientNameSetfocus(){
	
} */
/*void CHMSHFPatientList::OnPatientNameKillfocus(){
	
} */
int CHMSHFPatientList::OnPatientNameCheckValue(){
	OnListLoadData();
	return 1;
} 
/*void CHMSHFPatientList::OnDocumentNoChange(){
	
} */
/*void CHMSHFPatientList::OnDocumentNoSetfocus(){
	
} */
/*void CHMSHFPatientList::OnDocumentNoKillfocus(){
	
} */
int CHMSHFPatientList::OnDocumentNoCheckValue(){
	if(m_wndDocumentNo.GetWindowTextLength() == 0){
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	OnListLoadData();
	return 1;
} 
void CHMSHFPatientList::OnLoadSelect(){
	OnListLoadData();
}
void CHMSHFPatientList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nDoc = ToLong(m_wndList.GetItemText(nSel, 0));
	pMF->m_nDocumentNo = nDoc;
	if(m_nInpatient)
		pMF->m_nRefIndex = ToInt(m_wndList.GetItemText(nSel, 9));
	else
		pMF->m_nRefIndex = 0;
	pMF->m_nInpatient = m_nInpatient;
	pMF->m_szPaymentDept = m_wndList.GetItemText(nSel, 10);
	pMF->m_wndPatientFee.LoadData(nDoc);
} 
void CHMSHFPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSHFPatientList::OnListRefresh(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return OnListLoadData();
} 
long CHMSHFPatientList::OnListLoadData(){
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

	if(m_nInpatient == 0)
	{
		szWhere.Format(_T(" and date(hd_admitdate) BETWEEN date('%s') AND date('%s') "), m_szFromDate, m_szToDate);

		if(!m_szDepartmentKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND hd_admitdept='%s' "), m_szDepartmentKey);
		
		szWhere.AppendFormat(_T(" AND hd_object in(%s) "), szObjects);
		if(m_szStatusKey == _T("1")){
			szWhere.AppendFormat(_T(" and hd_status <>'T' "));
		}
		if(m_szStatusKey == _T("2")){
			szWhere.AppendFormat(_T(" and hd_status='T' "));
		}
		if(m_szStatusKey == _T("3")){
			szWhere.AppendFormat(_T(" and hd_status='T' and hdf_acceptedfee='Y' "));
		}
		
		
		if(m_nDocumentNo > 0){
			szWhere.Format(_T(" AND hd_docno=%ld "), m_nDocumentNo);
			m_szPatientName.Empty();
		}

		
		

		szSQL.Format(_T(" SELECT distinct hd_docno as docno,") \
						_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
						_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
						_T(" (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ss_code=hp_sex) as sex,") \
						_T(" (SELECT ho_desc FROM hms_object WHERE ho_id=hd_object) as object, ") \
						_T(" hd_cardno as cardno, ") \
						_T(" hms_getaddress(hp_provid,hp_distid,hp_villid) as address, ") \
						_T(" (SELECT sd_name FROM sys_dept where sd_id=hd_admitdept) as department, ") \
						_T(" hd_admitdept as deptid, ") \
						_T(" cast(hd_disrate as integer) as disrate, ") \
						_T(" hd_emergency as emergency, ") \
						_T(" date(hd_admitdate) as admitdate, ") \
						_T(" date(hd_enddate) as enddate ") \
						_T(" FROM hms_patient") \
						_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" WHERE 1=1 %s ORDER BY patientname, admitdate ") , szWhere);

	}
	else
	{
		if(!m_szDepartmentKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND htr_deptid='%s' "), m_szDepartmentKey);

		szWhere.AppendFormat(_T(" AND hd_object in(%s) "), szObjects);
		
		if(m_szStatusKey == _T("1")){
			szWhere.AppendFormat(_T(" and hcr_status<>'T' "));
		}
		else if(m_szStatusKey == _T("2")){
			szWhere.AppendFormat(_T(" and hcr_status='T' and (htrf_acceptedfee<>'Y' or htrf_acceptedfee is null) "));
		}
		else if(m_szStatusKey == _T("3")){
			szWhere.AppendFormat(_T(" and hcr_status='T' and htrf_acceptedfee='Y' and date(htrf_accepteddate) BETWEEN date('%s') AND date('%s') "), m_szFromDate, m_szToDate);
		}

		if(m_nDocumentNo > 0){
			szWhere.Format(_T(" AND htr_docno=%ld "), m_nDocumentNo);
			m_szPatientName.Empty();
		}

		szSQL.Format(_T(" SELECT distinct hd_docno as docno,") \
						_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
						_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
						_T(" (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ss_code=hp_sex) as sex,") \
						_T(" (SELECT ho_desc FROM hms_object WHERE ho_id=hd_object) as object, ") \
						_T(" hd_cardno as cardno, ") \
						_T(" hms_getaddress(hp_provid,hp_distid,hp_villid) as address, ") \
						_T(" (SELECT sd_name FROM sys_dept where sd_id=htr_deptid) as department, ") \
						_T(" htr_idx as refidx, ") \
						_T(" htr_deptid  as deptid,  ") \
						_T(" cast(hd_disrate as integer) as disrate, ") \
						_T(" date(htr_admitdate) as admitdate, ") \
						_T(" date(htr_dischargedate) as enddate ") \
						_T(" FROM hms_patient ") \
						_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
						_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno)") \
						_T(" LEFT JOIN hms_treatment_record ON(hd_docno=htr_docno)") \
						_T(" WHERE 1=1 AND htr_idx > 0  %s ORDER BY patientname, htr_idx ") , 	szWhere);
	}

_fmsg(_T("%s"), szSQL);
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

		szDate.Format(_T("%s -> %s"), 
			CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy),
			CDate::Convert(rs.GetValue(_T("enddate")), yyyymmdd, ddmmyyyy));
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("patientname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("object")), 
			rs.GetValue(_T("cardno")), 
			insrate, 
			rs.GetValue(_T("department")), 
			szDate, 
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
int CHMSHFPatientList::OnAddHMSHFPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSHFPatientList::OnEditHMSHFPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSHFPatientList::OnDeleteHMSHFPatientList(){
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
int CHMSHFPatientList::OnSaveHMSHFPatientList(){
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
 		//OnHMSHFPatientListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSHFPatientList::OnCancelHMSHFPatientList(){
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
int CHMSHFPatientList::OnHMSHFPatientListListLoadData(){
	return 0;
}
