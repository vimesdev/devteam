#include "CLIMSPatientList.h"
#include "MainFrm.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCLIMSPatientList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCLIMSPatientList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientList *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CCLIMSPatientList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CCLIMSPatientList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CCLIMSPatientList *pVw = (CCLIMSPatientList *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCLIMSPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCLIMSPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCLIMSPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCLIMSPatientList*)pWnd)->OnListDeleteItem();
} 
static void _OnWaitingSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientList*)pWnd)->OnWaitingSelect();
}
static void _OnSamplingSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientList*)pWnd)->OnSamplingSelect();
}
static void _OnReceivingSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientList*)pWnd)->OnReceivingSelect();
}
static void _OnApprovalSelectFnc(CWnd *pWnd){
	  ((CCLIMSPatientList*)pWnd)->OnApprovalSelect();
}
static int _OnAddCLIMSPatientListFnc(CWnd *pWnd){
	 return ((CCLIMSPatientList*)pWnd)->OnAddCLIMSPatientList();
} 
static int _OnEditCLIMSPatientListFnc(CWnd *pWnd){
	 return ((CCLIMSPatientList*)pWnd)->OnEditCLIMSPatientList();
} 
static int _OnDeleteCLIMSPatientListFnc(CWnd *pWnd){
	 return ((CCLIMSPatientList*)pWnd)->OnDeleteCLIMSPatientList();
} 
static int _OnSaveCLIMSPatientListFnc(CWnd *pWnd){
	 return ((CCLIMSPatientList*)pWnd)->OnSaveCLIMSPatientList();
} 
static int _OnCancelCLIMSPatientListFnc(CWnd *pWnd){
	 return ((CCLIMSPatientList*)pWnd)->OnCancelCLIMSPatientList();
} 
CCLIMSPatientList::CCLIMSPatientList(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 694;
	SetDefaultValues();
}
CCLIMSPatientList::~CCLIMSPatientList(){
}
void CCLIMSPatientList::OnCreateComponents(){
	m_wndStatusInformation.Create(this, _T("Status"), 5, 5, 205, 90);
	m_wndSearchInformation.Create(this, _T("Search Information"), 210, 5, 1015, 90);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 95, 1015, 650);
	m_wndDepartmentLabel.Create(this, _T("Department"), 215, 30, 315, 55);
	m_wndDepartment.Create(this,320, 30, 570, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 215, 60, 315, 85);
	m_wndType.Create(this,320, 60, 570, 85); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 575, 30, 685, 55);
	m_wndFromDate.Create(this,690, 30, 780, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 785, 30, 885, 55);
	m_wndToDate.Create(this,890, 30, 980, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 575, 60, 685, 85);
	m_wndPatientName.Create(this,690, 60, 780, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 785, 60, 885, 85);
	m_wndDocumentNo.Create(this,890, 60, 980, 85); 
	m_wndRefresh.Create(this, _T("@"), 985, 60, 1010, 85);
	m_wndList.Create(this,10, 119, 1010, 644); 
	m_wndWaiting.Create(this, _T("Waiting"), 10, 30, 105, 55);
	m_wndSampling.Create(this, _T("Sampling"), 110, 30, 200, 55);
	m_wndReceiving.Create(this, _T("Receiving"), 10, 60, 105, 85);
	m_wndApproval.Create(this, _T("Approval"), 110, 60, 200, 85);

}
void CCLIMSPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);







}
void CCLIMSPatientList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndSampling.SetEvent(WE_CLICK, _OnSamplingSelectFnc);
	m_wndReceiving.SetEvent(WE_CLICK, _OnReceivingSelectFnc);
	m_wndApproval.SetEvent(WE_CLICK, _OnApprovalSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCLIMSPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCLIMSPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCLIMSPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCLIMSPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCLIMSPatientListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCLIMSPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Radio(pDX, m_wndWaiting.GetDlgCtrlID(), m_nWaiting);
	DDX_Radio(pDX, m_wndSampling.GetDlgCtrlID(), m_nSampling);
	DDX_Radio(pDX, m_wndReceiving.GetDlgCtrlID(), m_nReceiving);
	DDX_Radio(pDX, m_wndApproval.GetDlgCtrlID(), m_nApproval);

}
void CCLIMSPatientList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("Waiting")] =  m_nWaiting;
	m_jData[_T("Sampling")] =  m_nSampling;
	m_jData[_T("Receiving")] =  m_nReceiving;
	m_jData[_T("Approval")] =  m_nApproval;
	}
	else
	{
			
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("Waiting")].GetValue(m_nWaiting);
	m_jData[_T("Sampling")].GetValue(m_nSampling);
	m_jData[_T("Receiving")].GetValue(m_nReceiving);
	m_jData[_T("Approval")].GetValue(m_nApproval);
	}

}
void CCLIMSPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCLIMSPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCLIMSPatientList::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szTypeKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo=0;
	m_nWaiting=0;
	m_nSampling=0;
	m_nReceiving=0;
	m_nApproval=0;

}
int CCLIMSPatientList::SetMode(int nMode){
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
void CCLIMSPatientList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientList::OnDepartmentSelendok(){
	 
}
/*void CCLIMSPatientList::OnDepartmentSetfocus(){
	
}*/
/*void CCLIMSPatientList::OnDepartmentKillfocus(){
	
}*/
long CCLIMSPatientList::OnDepartmentLoadData(){
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
/*void CCLIMSPatientList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCLIMSPatientList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientList::OnTypeSelendok(){
	 
}
/*void CCLIMSPatientList::OnTypeSetfocus(){
	
}*/
/*void CCLIMSPatientList::OnTypeKillfocus(){
	
}*/
long CCLIMSPatientList::OnTypeLoadData(){
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
/*void CCLIMSPatientList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCLIMSPatientList::OnFromDateChange(){
	
} */
/*void CCLIMSPatientList::OnFromDateSetfocus(){
	
} */
/*void CCLIMSPatientList::OnFromDateKillfocus(){
	
} */
int CCLIMSPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CCLIMSPatientList::OnToDateChange(){
	
} */
/*void CCLIMSPatientList::OnToDateSetfocus(){
	
} */
/*void CCLIMSPatientList::OnToDateKillfocus(){
	
} */
int CCLIMSPatientList::OnToDateCheckValue(){
	return 0;
} 
/*void CCLIMSPatientList::OnPatientNameChange(){
	
} */
/*void CCLIMSPatientList::OnPatientNameSetfocus(){
	
} */
/*void CCLIMSPatientList::OnPatientNameKillfocus(){
	
} */
int CCLIMSPatientList::OnPatientNameCheckValue(){
	return 0;
} 
/*void CCLIMSPatientList::OnDocumentNoChange(){
	
} */
/*void CCLIMSPatientList::OnDocumentNoSetfocus(){
	
} */
/*void CCLIMSPatientList::OnDocumentNoKillfocus(){
	
} */
int CCLIMSPatientList::OnDocumentNoCheckValue(){
	return 0;
} 
void CCLIMSPatientList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCLIMSPatientList::OnListDblClick(){
	
} 
void CCLIMSPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCLIMSPatientList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCLIMSPatientList::OnListLoadData(){
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
void CCLIMSPatientList::OnWaitingSelect(){
	
}
void CCLIMSPatientList::OnSamplingSelect(){
	
}
void CCLIMSPatientList::OnReceivingSelect(){
	
}
void CCLIMSPatientList::OnApprovalSelect(){
	
}
int CCLIMSPatientList::OnAddCLIMSPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCLIMSPatientList::OnEditCLIMSPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCLIMSPatientList::OnDeleteCLIMSPatientList(){
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
 		OnCancelCLIMSPatientList();
 	}
	return 0;
}
int CCLIMSPatientList::OnSaveCLIMSPatientList(){
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
 		//OnCLIMSPatientListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCLIMSPatientList::OnCancelCLIMSPatientList(){
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
int CCLIMSPatientList::OnCLIMSPatientListListLoadData(){
	return 0;
}
