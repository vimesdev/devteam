#include "LIMSPatientList.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSPatientList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CLIMSPatientList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CLIMSPatientList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CLIMSPatientList *pVw = (CLIMSPatientList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CLIMSPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnListDeleteItem();
} 
static void _OnWaitingSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientList*)pWnd)->OnWaitingSelect();
}
static void _OnRunningSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientList*)pWnd)->OnRunningSelect();
}
static void _OnPerformedSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientList*)pWnd)->OnPerformedSelect();
}
static void _OnConfirmedSelectFnc(CWnd *pWnd){
	  ((CLIMSPatientList*)pWnd)->OnConfirmedSelect();
}
static int _OnAddLIMSPatientListFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnAddLIMSPatientList();
} 
static int _OnEditLIMSPatientListFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnEditLIMSPatientList();
} 
static int _OnDeleteLIMSPatientListFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnDeleteLIMSPatientList();
} 
static int _OnSaveLIMSPatientListFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnSaveLIMSPatientList();
} 
static int _OnCancelLIMSPatientListFnc(CWnd *pWnd){
	 return ((CLIMSPatientList*)pWnd)->OnCancelLIMSPatientList();
} 
CLIMSPatientList::CLIMSPatientList(){

	m_nDlgWidth = 1025;
	m_nDlgHeight = 660;
	SetDefaultValues();
}
CLIMSPatientList::~CLIMSPatientList(){
}
void CLIMSPatientList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1015, 120);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 125, 1015, 650);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 110, 55);
	m_wndDepartment.Create(this,115, 30, 505, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 110, 85);
	m_wndType.Create(this,115, 60, 505, 85); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 510, 30, 620, 55);
	m_wndFromDate.Create(this,625, 30, 715, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 720, 30, 820, 55);
	m_wndToDate.Create(this,825, 30, 915, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 510, 60, 620, 85);
	m_wndPatientName.Create(this,625, 60, 715, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 720, 60, 820, 85);
	m_wndDocumentNo.Create(this,825, 60, 915, 85); 
	m_wndRefresh.Create(this, _T("&Refresh"), 920, 60, 1010, 85);
	m_wndList.Create(this,9, 150, 1009, 645); 
	m_wndWaiting.Create(this, _T("Waiting"), 116, 90, 236, 115);
	m_wndRunning.Create(this, _T("Running"), 241, 90, 361, 115);
	m_wndPerformed.Create(this, _T("Performed"), 366, 90, 486, 115);
	m_wndConfirmed.Create(this, _T("Confirmed"), 491, 90, 611, 115);

}
void CLIMSPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(10);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Age"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("Department"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(5, _T("Room"), CFMT_TEXT, 170);

}
void CLIMSPatientList::OnSetWindowEvents(){
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
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
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndWaiting.SetEvent(WE_CLICK, _OnWaitingSelectFnc);
	m_wndRunning.SetEvent(WE_CLICK, _OnRunningSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
	m_wndConfirmed.SetEvent(WE_CLICK, _OnConfirmedSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSPatientListFnc, 0, 'T', VK_CONTROL);

}
void CLIMSPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Radio(pDX, m_wndWaiting.GetDlgCtrlID(), m_nWaiting);
	DDX_Radio(pDX, m_wndRunning.GetDlgCtrlID(), m_nRunning);
	DDX_Radio(pDX, m_wndPerformed.GetDlgCtrlID(), m_nPerformed);
	DDX_Radio(pDX, m_wndConfirmed.GetDlgCtrlID(), m_nConfirmed);

}
void CLIMSPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLIMSPatientList::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szTypeKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo=0;
	m_nWaiting=0;
	m_nRunning=0;
	m_nPerformed=0;
	m_nConfirmed=0;

}
int CLIMSPatientList::SetMode(int nMode){
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
void CLIMSPatientList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientList::OnDepartmentSelendok(){
	 
}
/*void CLIMSPatientList::OnDepartmentSetfocus(){
	
}*/
/*void CLIMSPatientList::OnDepartmentKillfocus(){
	
}*/
long CLIMSPatientList::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	};
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
*/
	return 0;
}
/*void CLIMSPatientList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSPatientList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientList::OnTypeSelendok(){
	 
}
/*void CLIMSPatientList::OnTypeSetfocus(){
	
}*/
/*void CLIMSPatientList::OnTypeKillfocus(){
	
}*/
long CLIMSPatientList::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSPatientList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CLIMSPatientList::OnFromDateChange(){
	
} */
/*void CLIMSPatientList::OnFromDateSetfocus(){
	
} */
/*void CLIMSPatientList::OnFromDateKillfocus(){
	
} */
int CLIMSPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSPatientList::OnToDateChange(){
	
} */
/*void CLIMSPatientList::OnToDateSetfocus(){
	
} */
/*void CLIMSPatientList::OnToDateKillfocus(){
	
} */
int CLIMSPatientList::OnToDateCheckValue(){
	return 0;
} 
/*void CLIMSPatientList::OnPatientNameChange(){
	
} */
/*void CLIMSPatientList::OnPatientNameSetfocus(){
	
} */
/*void CLIMSPatientList::OnPatientNameKillfocus(){
	
} */
int CLIMSPatientList::OnPatientNameCheckValue(){
	return 0;
} 
/*void CLIMSPatientList::OnDocumentNoChange(){
	
} */
/*void CLIMSPatientList::OnDocumentNoSetfocus(){
	
} */
/*void CLIMSPatientList::OnDocumentNoKillfocus(){
	
} */
int CLIMSPatientList::OnDocumentNoCheckValue(){
	return 0;
} 
void CLIMSPatientList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSPatientList::OnListDblClick(){
	
} 
void CLIMSPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSPatientList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSPatientList::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("Department")), 
			rs.GetValue(_T("Room")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CLIMSPatientList::OnWaitingSelect(){
	
}
void CLIMSPatientList::OnRunningSelect(){
	
}
void CLIMSPatientList::OnPerformedSelect(){
	
}
void CLIMSPatientList::OnConfirmedSelect(){
	
}
int CLIMSPatientList::OnAddLIMSPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSPatientList::OnEditLIMSPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSPatientList::OnDeleteLIMSPatientList(){
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
 		OnCancelLIMSPatientList(); 
 	}
	return 0;
}
int CLIMSPatientList::OnSaveLIMSPatientList(){
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
 		//OnLIMSPatientListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLIMSPatientList::OnCancelLIMSPatientList(){
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
int CLIMSPatientList::OnLIMSPatientListListLoadData(){
	return 0;
}
