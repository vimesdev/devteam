#include "LISTestList.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnTestListLoadDataFnc(CWnd *pWnd){
	 return ((CLISTestList*)pWnd)->OnTestListLoadData();
} 
static int _OnTestListDblClickFnc(CWnd *pWnd){
	 return ((CLISTestList*)pWnd)->OnTestListDblClick();
} 
static int _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CLISTestList*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CLISTestList*)pWnd)->OnTestListDeleteItem();
} 
/*static int _OnFromDateChangeFnc(CWnd *pWnd){
	return ((CLISTestList *)pWnd)->OnFromDateChange();
} */
/*static int _OnFromDateSetfocusFnc(CWnd *pWnd){
	return ((CLISTestList *)pWnd)->OnFromDateKillfocus();} */ 
/*static int _OnFromDateKillfocusFnc(CWnd *pWnd){
	return ((CLISTestList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLISTestList *)pWnd)->OnFromDateCheckValue();
} 
/*static int _OnToDateChangeFnc(CWnd *pWnd){
	return ((CLISTestList *)pWnd)->OnToDateChange();
} */
/*static int _OnToDateSetfocusFnc(CWnd *pWnd){
	return ((CLISTestList *)pWnd)->OnToDateKillfocus();} */ 
/*static int _OnToDateKillfocusFnc(CWnd *pWnd){
	return ((CLISTestList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLISTestList *)pWnd)->OnToDateCheckValue();
} 
static int _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CLISTestList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDepartmentSelendokFnc(CWnd *pWnd){
	 return ((CLISTestList *)pWnd)->OnDepartmentSelendok();
}
/*static int _OnDepartmentSetfocusFnc(CWnd *pWnd){
	 return ((CLISTestList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static int _OnDepartmentKillfocusFnc(CWnd *pWnd){
	 return ((CLISTestList *)pWnd)->OnDepartmentKillfocus();
}*/
static int _OnDepartmentLoadDataFnc(CWnd *pWnd){
	 return ((CLISTestList *)pWnd)->OnDepartmentLoadData();
}
/*static int _OnDepartmentAddNewFnc(CWnd *pWnd){
	 return ((CLISTestList *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnWaitingSelectFnc(CWnd *pWnd){
	 return ((CLISTestList*)pWnd)->OnWaitingSelect();
}
static int _OnPerformedSelectFnc(CWnd *pWnd){
	 return ((CLISTestList*)pWnd)->OnPerformedSelect();
}
static int _OnAddLISTestListFnc(CWnd *pWnd){
	 return ((CLISTestList*)pWnd)->OnAddLISTestList();
} 
static int _OnEditLISTestListFnc(CWnd *pWnd){
	 return ((CLISTestList*)pWnd)->OnEditLISTestList();
} 
static int _OnDeleteLISTestListFnc(CWnd *pWnd){
	 return ((CLISTestList*)pWnd)->OnDeleteLISTestList();
} 
static int _OnSaveLISTestListFnc(CWnd *pWnd){
	 return ((CLISTestList*)pWnd)->OnSaveLISTestList();
} 
static int _OnCancelLISTestListFnc(CWnd *pWnd){
	 return ((CLISTestList*)pWnd)->OnCancelLISTestList();
} 
CLISTestList::CLISTestList(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CLISTestList::~CLISTestList(){
}
void CLISTestList::OnCreateComponents(){
	m_wndTestOrderInformation.Create(this, _T("Test Order Information"), 5, 3, 600, 399);
	m_wndTestList.Create(this,10, 52, 595, 394); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 25, 60, 47);
	m_wndFromDate.Create(this,65, 25, 135, 47); 
	m_wndToDateLabel.Create(this, _T("To Date"), 140, 25, 190, 47);
	m_wndToDate.Create(this,195, 25, 265, 47); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 270, 25, 332, 47);
	m_wndDepartment.Create(this,337, 25, 437, 47); 
	m_wndWaiting.Create(this, _T("Waiting"), 442, 25, 504, 47);
	m_wndPerformed.Create(this, _T("Performed"), 509, 25, 582, 47);

}
void CLISTestList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);


	m_wndTestList.InsertColumn(0, _T("Order No"), CFMT_NUMBER, 70);
	m_wndTestList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 70);
	m_wndTestList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndTestList.InsertColumn(3, _T("Age"), CFMT_TEXT, 40);
	m_wndTestList.InsertColumn(4, _T("Department"), CFMT_DATE, 150);
	m_wndTestList.InsertColumn(5, _T("Perform Date"), CFMT_DATE, 70);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CLISTestList::OnSetWindowEvents(){
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
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
	m_wndWaiting.SetEvent(WE_CLICK, _OnWaitingSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);

}
void CLISTestList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndWaiting.GetDlgCtrlID(), m_nWaiting);
	DDX_Radio(pDX, m_wndPerformed.GetDlgCtrlID(), m_nPerformed);

}
void CLISTestList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLISTestList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLISTestList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nWaiting=0;
	m_nPerformed=0;

}
int CLISTestList::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		//CGuiView::SetMode(nMode); 
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
int CLISTestList::OnTestListDblClick(){
	 return 0;
} 
int CLISTestList::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CLISTestList::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CLISTestList::OnTestListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestList.BeginLoad(); 
	m_wndTestList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestList.AddItems(
			rs.GetValue(_T("OrderNo")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Department")), 
			rs.GetValue(_T("PerformDate")), NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*int CLISTestList::OnFromDateChange(){
	return 0;
} */
/*int CLISTestList::OnFromDateSetfocus(){
	return 0;
} */
/*int CLISTestList::OnFromDateKillfocus(){
	return 0;
} */
int CLISTestList::OnFromDateCheckValue(){
	return 0;
} 
/*int CLISTestList::OnToDateChange(){
	return 0;
} */
/*int CLISTestList::OnToDateSetfocus(){
	return 0;
} */
/*int CLISTestList::OnToDateKillfocus(){
	return 0;
} */
int CLISTestList::OnToDateCheckValue(){
	return 0;
} 
int CLISTestList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CLISTestList::OnDepartmentSelendok(){
	 return 0;
}
/*int CLISTestList::OnDepartmentSetfocus(){
	 return 0;
}*/
/*int CLISTestList::OnDepartmentKillfocus(){
	 return 0;
}*/
int CLISTestList::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey()){
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
/*int CLISTestList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CLISTestList::OnWaitingSelect(){
	return 0;
}
int CLISTestList::OnPerformedSelect(){
	return 0;
}
int CLISTestList::OnAddLISTestList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add LISTestList"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CLISTestList::OnEditLISTestList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit LISTestList"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CLISTestList::OnDeleteLISTestList(){
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
 		OnCancelLISTestList(); 
 	}
return 0;
 } 
int CLISTestList::OnSaveLISTestList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnLISTestListListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLISTestList::OnCancelLISTestList(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CLISTestList::OnLISTestListListLoadData(){
	return 0;
}
