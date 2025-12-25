#include "HMSTreatmentQueue.h"
#include "MainFrm.h"
static void _OnAdmissionSelectFnc(CWnd *pWnd){
	  ((CHMSTreatmentQueue*)pWnd)->OnAdmissionSelect();
}
static void _OnTreatingSelectFnc(CWnd *pWnd){
	  ((CHMSTreatmentQueue*)pWnd)->OnTreatingSelect();
}
static void _OnTransferSelectFnc(CWnd *pWnd){
	  ((CHMSTreatmentQueue*)pWnd)->OnTransferSelect();
}
static void _OnDischargedSelectFnc(CWnd *pWnd){
	  ((CHMSTreatmentQueue*)pWnd)->OnDischargedSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentQueue* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentQueue* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentQueue*)pWnd)->OnOutpatientSelect();
}
static void _OnWaitingForPaymentSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentQueue*)pWnd)->OnWaitingForPaymentSelect();
}
static void _OnCombinedTreatmentSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentQueue*)pWnd)->OnCombinedTreatmentSelect();
}
static void _OnSendingTreatmentSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentQueue*)pWnd)->OnSendingTreatmentSelect();
}
static void _OnExaminationSurgerySelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentQueue*)pWnd)->OnExaminationSurgerySelect();
}
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentQueue *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnRefrehSelectFnc(CWnd *pWnd){
	CHMSTreatmentQueue *pVw = (CHMSTreatmentQueue *)pWnd;
	pVw->OnRefrehSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentQueue*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentQueue*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnPatientListDeleteItem();
} 
static int _OnAddHMSTreatmentQueueFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnAddHMSTreatmentQueue();
} 
static int _OnEditHMSTreatmentQueueFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnEditHMSTreatmentQueue();
} 
static int _OnDeleteHMSTreatmentQueueFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnDeleteHMSTreatmentQueue();
} 
static int _OnSaveHMSTreatmentQueueFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnSaveHMSTreatmentQueue();
} 
static int _OnCancelHMSTreatmentQueueFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnCancelHMSTreatmentQueue();
} 
CHMSTreatmentQueue::CHMSTreatmentQueue(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSTreatmentQueue::~CHMSTreatmentQueue(){
}
void CHMSTreatmentQueue::OnCreateComponents(){
	m_wndStatus.Create(this, _T("Status"), 5, 5, 270, 90);
	m_wndSearchInformation.Create(this, _T("Search Information"), 275, 5, 1005, 90);
	m_wndPatientListGroupBox.Create(this, _T("Patients List"), 5, 95, 1005, 595);
	m_wndAdmission.Create(this, _T("Admission"), 10, 30, 135, 55);
	m_wndTreating.Create(this, _T("Treating"), 140, 30, 265, 55);
	m_wndTransfer.Create(this, _T("Ward Movement"), 10, 60, 135, 85);
	m_wndDischarged.Create(this, _T("Discharged"), 140, 60, 265, 85);
	m_wndFromDateLabel.Create(this, _T("From Date"), 270, 30, 370, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 475, 30, 575, 55);
	m_wndFromDate.Create(this,375, 30, 470, 55); 
	m_wndToDate.Create(this,580, 30, 675, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 680, 30, 780, 55);
	m_wndObject.Create(this,785, 30, 990, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 9, 600, 89, 625);
	m_wndDepartment.Create(this,94, 600, 344, 625); 
	m_wndOutpatient.Create(this, _T("Out patient"), 349, 600, 509, 625);
	m_wndWaitingForPayment.Create(this, _T("Waiting for pay"), 514, 600, 674, 625);
	m_wndCombinedTreatment.Create(this, _T("Receipt Treatment"), 679, 600, 839, 625);
	m_wndSendingTreatment.Create(this, _T("Sending Treatment"), 844, 600, 1004, 625);
	m_wndExaminationSurgery.Create(this, _T(""), 0, 0, 25, 25);
	m_wndRecordNoLabel.Create(this, _T("Record No"), 270, 60, 370, 85);
	m_wndRecordNo.Create(this,375, 60, 469, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 474, 60, 574, 85);
	m_wndDocumentNo.Create(this,579, 60, 674, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 679, 60, 779, 85);
	m_wndPatientName.Create(this,784, 60, 949, 85); 
	m_wndRefreh.Create(this, _T("@"), 954, 60, 989, 85);
	m_wndPatientList.Create(this,9, 120, 999, 590); 

}
void CHMSTreatmentQueue::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndRecordNo.SetLimitText(1024);
	m_wndRecordNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);







}
void CHMSTreatmentQueue::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdmission.SetEvent(WE_CLICK, _OnAdmissionSelectFnc);
	m_wndTreating.SetEvent(WE_CLICK, _OnTreatingSelectFnc);
	m_wndTransfer.SetEvent(WE_CLICK, _OnTransferSelectFnc);
	m_wndDischarged.SetEvent(WE_CLICK, _OnDischargedSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndWaitingForPayment.SetEvent(WE_CLICK, _OnWaitingForPaymentSelectFnc);
	m_wndCombinedTreatment.SetEvent(WE_CLICK, _OnCombinedTreatmentSelectFnc);
	m_wndSendingTreatment.SetEvent(WE_CLICK, _OnSendingTreatmentSelectFnc);
	m_wndExaminationSurgery.SetEvent(WE_CLICK, _OnExaminationSurgerySelectFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndRefreh.SetEvent(WE_CLICK, _OnRefrehSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatmentQueueFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatmentQueueFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatmentQueueFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatmentQueueFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatmentQueueFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSTreatmentQueue::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAdmission.GetDlgCtrlID(), m_nAdmission);
	DDX_Radio(pDX, m_wndTreating.GetDlgCtrlID(), m_nTreating);
	DDX_Radio(pDX, m_wndTransfer.GetDlgCtrlID(), m_nTransfer);
	DDX_Radio(pDX, m_wndDischarged.GetDlgCtrlID(), m_nDischarged);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndWaitingForPayment.GetDlgCtrlID(), m_bWaitingForPayment);
	DDX_Check(pDX, m_wndCombinedTreatment.GetDlgCtrlID(), m_bCombinedTreatment);
	DDX_Check(pDX, m_wndSendingTreatment.GetDlgCtrlID(), m_bSendingTreatment);
	DDX_Check(pDX, m_wndExaminationSurgery.GetDlgCtrlID(), m_bExaminationSurgery);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSTreatmentQueue::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentQueue::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentQueue::SetDefaultValues(){

	m_nAdmission=0;
	m_nTreating=0;
	m_nTransfer=0;
	m_nDischarged=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_bOutpatient=FALSE;
	m_bWaitingForPayment=FALSE;
	m_bCombinedTreatment=FALSE;
	m_bSendingTreatment=FALSE;
	m_bExaminationSurgery=FALSE;
	m_szRecordNo.Empty();
	m_nDocumentNo=0;
	m_szPatientName.Empty();

}
int CHMSTreatmentQueue::SetMode(int nMode){
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
void CHMSTreatmentQueue::OnAdmissionSelect(){
	
}
void CHMSTreatmentQueue::OnTreatingSelect(){
	
}
void CHMSTreatmentQueue::OnTransferSelect(){
	
}
void CHMSTreatmentQueue::OnDischargedSelect(){
	
}
/*void CHMSTreatmentQueue::OnFromDateChange(){
	
} */
/*void CHMSTreatmentQueue::OnFromDateSetfocus(){
	
} */
/*void CHMSTreatmentQueue::OnFromDateKillfocus(){
	
} */
int CHMSTreatmentQueue::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSTreatmentQueue::OnToDateChange(){
	
} */
/*void CHMSTreatmentQueue::OnToDateSetfocus(){
	
} */
/*void CHMSTreatmentQueue::OnToDateKillfocus(){
	
} */
int CHMSTreatmentQueue::OnToDateCheckValue(){
	return 0;
} 
void CHMSTreatmentQueue::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentQueue::OnObjectSelendok(){
	 
}
/*void CHMSTreatmentQueue::OnObjectSetfocus(){
	
}*/
/*void CHMSTreatmentQueue::OnObjectKillfocus(){
	
}*/
long CHMSTreatmentQueue::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentQueue::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentQueue::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentQueue::OnDepartmentSelendok(){
	 
}
/*void CHMSTreatmentQueue::OnDepartmentSetfocus(){
	
}*/
/*void CHMSTreatmentQueue::OnDepartmentKillfocus(){
	
}*/
long CHMSTreatmentQueue::OnDepartmentLoadData(){
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
/*void CHMSTreatmentQueue::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSTreatmentQueue::OnOutpatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSTreatmentQueue::OnWaitingForPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSTreatmentQueue::OnCombinedTreatmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSTreatmentQueue::OnSendingTreatmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSTreatmentQueue::OnExaminationSurgerySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSTreatmentQueue::OnRecordNoChange(){
	
} */
/*void CHMSTreatmentQueue::OnRecordNoSetfocus(){
	
} */
/*void CHMSTreatmentQueue::OnRecordNoKillfocus(){
	
} */
int CHMSTreatmentQueue::OnRecordNoCheckValue(){
	return 0;
} 
/*void CHMSTreatmentQueue::OnDocumentNoChange(){
	
} */
/*void CHMSTreatmentQueue::OnDocumentNoSetfocus(){
	
} */
/*void CHMSTreatmentQueue::OnDocumentNoKillfocus(){
	
} */
int CHMSTreatmentQueue::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSTreatmentQueue::OnPatientNameChange(){
	
} */
/*void CHMSTreatmentQueue::OnPatientNameSetfocus(){
	
} */
/*void CHMSTreatmentQueue::OnPatientNameKillfocus(){
	
} */
int CHMSTreatmentQueue::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSTreatmentQueue::OnRefrehSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentQueue::OnPatientListDblClick(){
	
} 
void CHMSTreatmentQueue::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentQueue::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentQueue::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSTreatmentQueue::OnAddHMSTreatmentQueue(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentQueue::OnEditHMSTreatmentQueue(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentQueue::OnDeleteHMSTreatmentQueue(){
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
 		OnCancelHMSTreatmentQueue();
 	}
	return 0;
}
int CHMSTreatmentQueue::OnSaveHMSTreatmentQueue(){
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
 		//OnHMSTreatmentQueueListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentQueue::OnCancelHMSTreatmentQueue(){
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
int CHMSTreatmentQueue::OnHMSTreatmentQueueListLoadData(){
	return 0;
}
