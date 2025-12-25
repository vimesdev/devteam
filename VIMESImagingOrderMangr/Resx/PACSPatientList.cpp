#include "PACSPatientList.h"
#include "MainFrm.h"
static void _OnWaittingSelectFnc(CWnd *pWnd){
	  ((CPACSPatientList*)pWnd)->OnWaittingSelect();
}
static void _OnPerformedSelectFnc(CWnd *pWnd){
	  ((CPACSPatientList*)pWnd)->OnPerformedSelect();
}
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CPACSPatientList *pVw = (CPACSPatientList *)pWnd;
	pVw->OnRefreshSelect();
} 
/*static void _OnNumberChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnNumberChange();
} */
/*static void _OnNumberSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnNumberSetfocus();} */ 
/*static void _OnNumberKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnNumberKillfocus();
} */
static int _OnNumberCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnNumberCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPACSPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnListDeleteItem();
} 
static int _OnAddPACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnAddPACSPatientList();
} 
static int _OnEditPACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnEditPACSPatientList();
} 
static int _OnDeletePACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnDeletePACSPatientList();
} 
static int _OnSavePACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnSavePACSPatientList();
} 
static int _OnCancelPACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnCancelPACSPatientList();
} 
CPACSPatientList::CPACSPatientList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPACSPatientList::~CPACSPatientList(){
}
void CPACSPatientList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 180, 5, 1015, 90);
	m_wndStatus.Create(this, _T("Status"), 5, 5, 175, 90);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 95, 1015, 550);
	m_wndWaitting.Create(this, _T("Waitting"), 10, 29, 168, 54);
	m_wndPerformed.Create(this, _T("Performed"), 10, 59, 168, 84);
	m_wndDepartmentLabel.Create(this, _T("Room"), 185, 30, 285, 55);
	m_wndDepartment.Create(this,290, 30, 490, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 495, 30, 595, 55);
	m_wndFromDate.Create(this,600, 30, 710, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 715, 30, 815, 55);
	m_wndToDate.Create(this,820, 30, 930, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 185, 60, 285, 85);
	m_wndType.Create(this,290, 60, 490, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 495, 60, 595, 85);
	m_wndPatientName.Create(this,600, 60, 710, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 715, 60, 815, 85);
	m_wndDocumentNo.Create(this,820, 60, 930, 85); 
	m_wndRefresh.Create(this, _T("&Refresh"), 935, 60, 1010, 85);
	m_wndNumber.Create(this,935, 30, 1010, 55); 
	m_wndList.Create(this,10, 120, 1010, 545); 

}
void CPACSPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndNumber.SetLimitText(1024);
	m_wndNumber.SetCheckValue(true);







}
void CPACSPatientList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWaitting.SetEvent(WE_CLICK, _OnWaittingSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
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
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	//m_wndNumber.SetEvent(WE_CHANGE, _OnNumberChangeFnc);
	//m_wndNumber.SetEvent(WE_SETFOCUS, _OnNumberSetfocusFnc);
	//m_wndNumber.SetEvent(WE_KILLFOCUS, _OnNumberKillfocusFnc);
	m_wndNumber.SetEvent(WE_CHECKVALUE, _OnNumberCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPACSPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPACSPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePACSPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePACSPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPACSPatientListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPACSPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndWaitting.GetDlgCtrlID(), m_nWaitting);
	DDX_Radio(pDX, m_wndPerformed.GetDlgCtrlID(), m_nPerformed);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndNumber.GetDlgCtrlID(), m_nNumber);

}
void CPACSPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSPatientList::SetDefaultValues(){

	m_nWaitting=0;
	m_nPerformed=0;
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo=0;
	m_nNumber=0;

}
int CPACSPatientList::SetMode(int nMode){
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
void CPACSPatientList::OnWaittingSelect(){
	
}
void CPACSPatientList::OnPerformedSelect(){
	
}
void CPACSPatientList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientList::OnDepartmentSelendok(){
	 
}
/*void CPACSPatientList::OnDepartmentSetfocus(){
	
}*/
/*void CPACSPatientList::OnDepartmentKillfocus(){
	
}*/
long CPACSPatientList::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSPatientList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSPatientList::OnFromDateChange(){
	
} */
/*void CPACSPatientList::OnFromDateSetfocus(){
	
} */
/*void CPACSPatientList::OnFromDateKillfocus(){
	
} */
int CPACSPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSPatientList::OnToDateChange(){
	
} */
/*void CPACSPatientList::OnToDateSetfocus(){
	
} */
/*void CPACSPatientList::OnToDateKillfocus(){
	
} */
int CPACSPatientList::OnToDateCheckValue(){
	return 0;
} 
void CPACSPatientList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientList::OnTypeSelendok(){
	 
}
/*void CPACSPatientList::OnTypeSetfocus(){
	
}*/
/*void CPACSPatientList::OnTypeKillfocus(){
	
}*/
long CPACSPatientList::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPACSPatientList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSPatientList::OnPatientNameChange(){
	
} */
/*void CPACSPatientList::OnPatientNameSetfocus(){
	
} */
/*void CPACSPatientList::OnPatientNameKillfocus(){
	
} */
int CPACSPatientList::OnPatientNameCheckValue(){
	return 0;
} 
/*void CPACSPatientList::OnDocumentNoChange(){
	
} */
/*void CPACSPatientList::OnDocumentNoSetfocus(){
	
} */
/*void CPACSPatientList::OnDocumentNoKillfocus(){
	
} */
int CPACSPatientList::OnDocumentNoCheckValue(){
	return 0;
} 
void CPACSPatientList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CPACSPatientList::OnNumberChange(){
	
} */
/*void CPACSPatientList::OnNumberSetfocus(){
	
} */
/*void CPACSPatientList::OnNumberKillfocus(){
	
} */
int CPACSPatientList::OnNumberCheckValue(){
	return 0;
} 
void CPACSPatientList::OnListDblClick(){
	
} 
void CPACSPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSPatientList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSPatientList::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CPACSPatientList::OnAddPACSPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSPatientList::OnEditPACSPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSPatientList::OnDeletePACSPatientList(){
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
 		OnCancelPACSPatientList();
 	}
	return 0;
}
int CPACSPatientList::OnSavePACSPatientList(){
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
 		//OnPACSPatientListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSPatientList::OnCancelPACSPatientList(){
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
int CPACSPatientList::OnPACSPatientListListLoadData(){
	return 0;
}
