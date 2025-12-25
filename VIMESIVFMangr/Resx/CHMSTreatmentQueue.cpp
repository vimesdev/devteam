#include "CHMSTreatmentQueue.h"
#include "MainFrm.h"
static void _OnAdmissionSelectFnc(CWnd *pWnd){
	  ((CCHMSTreatmentQueue*)pWnd)->OnAdmissionSelect();
}
static void _OnTreatingSelectFnc(CWnd *pWnd){
	  ((CCHMSTreatmentQueue*)pWnd)->OnTreatingSelect();
}
static void _OnTransferSelectFnc(CWnd *pWnd){
	  ((CCHMSTreatmentQueue*)pWnd)->OnTransferSelect();
}
static void _OnDischargedSelectFnc(CWnd *pWnd){
	  ((CCHMSTreatmentQueue*)pWnd)->OnDischargedSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSTreatmentQueue *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSTreatmentQueue *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSTreatmentQueue* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CCHMSTreatmentQueue *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnObjectAddNew();
}*/
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CCHMSTreatmentQueue*)pWnd)->OnOutpatientSelect();
}
static void _OnWaitingForPaymentSelectFnc(CWnd *pWnd){
	 ((CCHMSTreatmentQueue*)pWnd)->OnWaitingForPaymentSelect();
}
static void _OnCombinedTreatmentSelectFnc(CWnd *pWnd){
	 ((CCHMSTreatmentQueue*)pWnd)->OnCombinedTreatmentSelect();
}
static void _OnSendingTreatmentSelectFnc(CWnd *pWnd){
	 ((CCHMSTreatmentQueue*)pWnd)->OnSendingTreatmentSelect();
}
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CCHMSTreatmentQueue *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CCHMSTreatmentQueue *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CCHMSTreatmentQueue *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnRefrehSelectFnc(CWnd *pWnd){
	CCHMSTreatmentQueue *pVw = (CCHMSTreatmentQueue *)pWnd;
	pVw->OnRefrehSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSTreatmentQueue*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CCHMSTreatmentQueue*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSTreatmentQueue*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentQueue*)pWnd)->OnPatientListDeleteItem();
} 
static int _OnAddCHMSTreatmentQueueFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentQueue*)pWnd)->OnAddCHMSTreatmentQueue();
} 
static int _OnEditCHMSTreatmentQueueFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentQueue*)pWnd)->OnEditCHMSTreatmentQueue();
} 
static int _OnDeleteCHMSTreatmentQueueFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentQueue*)pWnd)->OnDeleteCHMSTreatmentQueue();
} 
static int _OnSaveCHMSTreatmentQueueFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentQueue*)pWnd)->OnSaveCHMSTreatmentQueue();
} 
static int _OnCancelCHMSTreatmentQueueFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentQueue*)pWnd)->OnCancelCHMSTreatmentQueue();
} 
CCHMSTreatmentQueue::CCHMSTreatmentQueue(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 694;
	SetDefaultValues();
}
CCHMSTreatmentQueue::~CCHMSTreatmentQueue(){
}
void CCHMSTreatmentQueue::OnCreateComponents(){
	m_wndStatus.Create(this, _T("Status"), 5, 5, 270, 90);
	m_wndSearchInformation.Create(this, _T("Search Information"), 275, 5, 1005, 90);
	m_wndPatientListGroupBox.Create(this, _T("Patients List"), 5, 95, 1005, 595);
	m_wndAdmission.Create(this, _T("Admission"), 10, 30, 135, 55);
	m_wndTreating.Create(this, _T("Treating"), 140, 30, 265, 55);
	m_wndTransfer.Create(this, _T("Ward Movement"), 10, 60, 135, 85);
	m_wndDischarged.Create(this, _T("Discharged"), 140, 60, 265, 85);
	m_wndFromDateLabel.Create(this, _T("From Date"), 280, 30, 380, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 485, 30, 585, 55);
	m_wndFromDate.Create(this,385, 30, 480, 55); 
	m_wndToDate.Create(this,590, 30, 685, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 690, 30, 790, 55);
	m_wndObject.Create(this,795, 30, 1000, 55); 
	m_wndOutpatient.Create(this, _T("Out patient"), 5, 600, 160, 625);
	m_wndWaitingForPayment.Create(this, _T("Waiting for pay"), 165, 600, 320, 625);
	m_wndCombinedTreatment.Create(this, _T("Moved Treatment"), 332, 600, 532, 625);
	m_wndSendingTreatment.Create(this, _T("SendingTreatment"), 537, 600, 748, 625);
	m_wndRecordNoLabel.Create(this, _T("Record No"), 280, 60, 380, 85);
	m_wndRecordNo.Create(this,386, 60, 480, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 485, 60, 585, 85);
	m_wndDocumentNo.Create(this,590, 60, 685, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 690, 60, 790, 85);
	m_wndPatientName.Create(this,795, 60, 960, 85); 
	m_wndRefreh.Create(this, _T("@"), 965, 60, 1000, 85);
	m_wndPatientList.Create(this,10, 120, 990, 590); 

}
void CCHMSTreatmentQueue::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);





}
void CCHMSTreatmentQueue::OnSetWindowEvents(){
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
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndWaitingForPayment.SetEvent(WE_CLICK, _OnWaitingForPaymentSelectFnc);
	m_wndCombinedTreatment.SetEvent(WE_CLICK, _OnCombinedTreatmentSelectFnc);
	m_wndSendingTreatment.SetEvent(WE_CLICK, _OnSendingTreatmentSelectFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCHMSTreatmentQueueFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCHMSTreatmentQueueFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCHMSTreatmentQueueFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCHMSTreatmentQueueFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCHMSTreatmentQueueFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCHMSTreatmentQueue::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAdmission.GetDlgCtrlID(), m_nAdmission);
	DDX_Radio(pDX, m_wndTreating.GetDlgCtrlID(), m_nTreating);
	DDX_Radio(pDX, m_wndTransfer.GetDlgCtrlID(), m_nTransfer);
	DDX_Radio(pDX, m_wndDischarged.GetDlgCtrlID(), m_nDischarged);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndWaitingForPayment.GetDlgCtrlID(), m_bWaitingForPayment);
	DDX_Check(pDX, m_wndCombinedTreatment.GetDlgCtrlID(), m_bCombinedTreatment);
	DDX_Check(pDX, m_wndSendingTreatment.GetDlgCtrlID(), m_bSendingTreatment);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CCHMSTreatmentQueue::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSTreatmentQueue::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSTreatmentQueue::SetDefaultValues(){

	m_nAdmission=0;
	m_nTreating=0;
	m_nTransfer=0;
	m_nDischarged=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_bOutpatient=FALSE;
	m_bWaitingForPayment=FALSE;
	m_bCombinedTreatment=FALSE;
	m_bSendingTreatment=FALSE;
	m_szRecordNo.Empty();
	m_nDocumentNo=0;
	m_szPatientName.Empty();

}
int CCHMSTreatmentQueue::SetMode(int nMode){
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
void CCHMSTreatmentQueue::OnAdmissionSelect(){
	
}
void CCHMSTreatmentQueue::OnTreatingSelect(){
	
}
void CCHMSTreatmentQueue::OnTransferSelect(){
	
}
void CCHMSTreatmentQueue::OnDischargedSelect(){
	
}
/*void CCHMSTreatmentQueue::OnFromDateChange(){
	
} */
/*void CCHMSTreatmentQueue::OnFromDateSetfocus(){
	
} */
/*void CCHMSTreatmentQueue::OnFromDateKillfocus(){
	
} */
int CCHMSTreatmentQueue::OnFromDateCheckValue(){
	return 0;
} 
/*void CCHMSTreatmentQueue::OnToDateChange(){
	
} */
/*void CCHMSTreatmentQueue::OnToDateSetfocus(){
	
} */
/*void CCHMSTreatmentQueue::OnToDateKillfocus(){
	
} */
int CCHMSTreatmentQueue::OnToDateCheckValue(){
	return 0;
} 
void CCHMSTreatmentQueue::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSTreatmentQueue::OnObjectSelendok(){
	 
}
/*void CCHMSTreatmentQueue::OnObjectSetfocus(){
	
}*/
/*void CCHMSTreatmentQueue::OnObjectKillfocus(){
	
}*/
long CCHMSTreatmentQueue::OnObjectLoadData(){
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
/*void CCHMSTreatmentQueue::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CCHMSTreatmentQueue::OnOutpatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCHMSTreatmentQueue::OnWaitingForPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCHMSTreatmentQueue::OnCombinedTreatmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCHMSTreatmentQueue::OnSendingTreatmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CCHMSTreatmentQueue::OnRecordNoChange(){
	
} */
/*void CCHMSTreatmentQueue::OnRecordNoSetfocus(){
	
} */
/*void CCHMSTreatmentQueue::OnRecordNoKillfocus(){
	
} */
int CCHMSTreatmentQueue::OnRecordNoCheckValue(){
	return 0;
} 
/*void CCHMSTreatmentQueue::OnDocumentNoChange(){
	
} */
/*void CCHMSTreatmentQueue::OnDocumentNoSetfocus(){
	
} */
/*void CCHMSTreatmentQueue::OnDocumentNoKillfocus(){
	
} */
int CCHMSTreatmentQueue::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CCHMSTreatmentQueue::OnPatientNameChange(){
	
} */
/*void CCHMSTreatmentQueue::OnPatientNameSetfocus(){
	
} */
/*void CCHMSTreatmentQueue::OnPatientNameKillfocus(){
	
} */
int CCHMSTreatmentQueue::OnPatientNameCheckValue(){
	return 0;
} 
void CCHMSTreatmentQueue::OnRefrehSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSTreatmentQueue::OnPatientListDblClick(){
	
} 
void CCHMSTreatmentQueue::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSTreatmentQueue::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSTreatmentQueue::OnPatientListLoadData(){
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
int CCHMSTreatmentQueue::OnAddCHMSTreatmentQueue(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSTreatmentQueue::OnEditCHMSTreatmentQueue(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSTreatmentQueue::OnDeleteCHMSTreatmentQueue(){
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
 		OnCancelCHMSTreatmentQueue();
 	}
	return 0;
}
int CCHMSTreatmentQueue::OnSaveCHMSTreatmentQueue(){
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
 		//OnCHMSTreatmentQueueListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSTreatmentQueue::OnCancelCHMSTreatmentQueue(){
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
int CCHMSTreatmentQueue::OnCHMSTreatmentQueueListLoadData(){
	return 0;
}
