#include "HMSTreatmentQueue.h"
#include "MainFrm.h"
#include "HMSDepartmentAdmissionDialog.h"
#include "HMSTreatMovementDialog.h"
#include "HMSCreateOutpatientRecordDialog.h"
#include "HMSNewbornRecord.h"
#include "HMSAdmissionRegistrationDialog.h"
#include "HMSExtraInfoDialog.h"
#include "json.h"
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

static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue *)pWnd)->OnDepartmentLoadData();
}


static void _OnCombinedTreatmentSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentQueue*)pWnd)->OnCombinedTreatmentSelect();
}
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentQueue*)pWnd)->OnOutpatientSelect();
}
static void _OnWaitingForPaymentSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentQueue*)pWnd)->OnWaitingForPaymentSelect();
}
static void _OnSendingTreatmentSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentQueue*)pWnd)->OnSendingTreatmentSelect();
}
static void _OnCancerSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentQueue*)pWnd)->OnCancerSelect();
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
static int _OnPatientListAdmissionFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnPatientListAdmission();
}
static int _OnDebriefingDischargeFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue*)pWnd)->OnDebriefingDischarge();
}

static int _OnUpdateRelativeInfoFnc(CWnd *pWnd){
	return ((CHMSTreatmentQueue*)pWnd)->OnUpdateRelativeInfo();
}

static int _OnCreateOutpatientRecordFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnCreateOutpatientRecord();
}

static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnPatientListDeleteItem();
} 

static int _OnCancelClinicalRecordFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnCancelClinicalRecord();
}


static int _OnCombinedTreatMovementFnc(CWnd *pWnd){
	 return ((CHMSTreatmentQueue*)pWnd)->OnCombinedTreatMovement();
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
static int _OnGiveBirthFnc(CWnd *pWnd){
	((CHMSTreatmentQueue*)pWnd)->OnGiveBirth();
	return 0;
}
//
//static int _OnSortByPatientFnc(CWnd *pWnd){
//	((CHMSTreatmentQueue*)pWnd)->OnSortByPatient();
//	return 0;
//}
//
//static int _OnSortByObjectFnc(CWnd *pWnd){
//	((CHMSTreatmentQueue*)pWnd)->OnSortByObject();
//	return 0;
//}

CHMSTreatmentQueue::CHMSTreatmentQueue(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 685;
	SetDefaultValues();
}
CHMSTreatmentQueue::~CHMSTreatmentQueue(){
}
void CHMSTreatmentQueue::OnCreateComponents(){
	m_wndStatus.Create(this, _T("Status"), 5, 5, 270, 90);
	m_wndSearchInformation.Create(this, _T("Search Information"), 275, 5, 1005, 90);
	m_wndPatientListGroupBox.Create(this, _T("Patients List"), 5, 95, 1005, 595);
	m_wndAdmission.Create(this, _T("Đang đợi"), 10, 30, 135, 55);
	m_wndTreating.Create(this, _T("Đang điều trị"), 140, 30, 265, 55);
	m_wndTransfer.Create(this, _T("Chuyển khoa"), 10, 60, 135, 85);
	m_wndDischarged.Create(this, _T("Đã kết thúc"), 140, 60, 265, 85);
	m_wndFromDateLabel.Create(this, _T("From Date"), 280, 30, 380, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 485, 30, 585, 55);
	m_wndFromDate.Create(this,385, 30, 480, 55); 
	m_wndToDate.Create(this,590, 30, 685, 55); 
	m_wndObjectLabel.Create(this, _T("Loại"), 690, 30, 790, 55);
	m_wndObject.Create(this,795, 30, 1000, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 280, 60, 380, 85);
	m_wndRecordNo.Create(this,386, 60, 480, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 485, 60, 585, 85);
	m_wndDocumentNo.Create(this,590, 60, 685, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 690, 60, 790, 85);
	m_wndPatientName.Create(this,795, 60, 960, 85); 
	m_wndRefreh.Create(this, _T("@"), 965, 60, 1000, 85);
	m_wndPatientList.Create(this,10, 120, 990, 590);
	
	
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 600, 85, 625);
	m_wndDepartment.Create(this,90, 600, 315, 625); 
	m_wndOutpatient.Create(this, _T("Out patient"), 320, 600, 470, 625);
	m_wndWaitingForPayment.Create(this, _T("Waiting for pay"), 475, 600, 590, 625);
	m_wndCombinedTreatment.Create(this, _T("Receipt Treatment"), 595, 600, 760, 625);
	m_wndSendingTreatment.Create(this, _T("Sending Treatment"), 765, 600, 915, 625);
	m_wndCancer.Create(this, _T("Cancer"), 920, 600, 1000, 625);
//	m_wndExaminationSurgery.Create(this, _T(""), 0, 0, 25, 25);

	
}
void CHMSTreatmentQueue::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);

	m_wndRecordNo.SetNotEmpty(false);
	m_wndDocumentNo.SetNotEmpty(false);
	m_wndDepartment.SetReadOnly(TRUE);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndDepartment.SetReadOnly(TRUE);

	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER|CFMT_FIXSIZE, 40);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 85);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 140);
	m_wndPatientList.InsertColumn(3, _T("Yob"), CFMT_TEXT|CFMT_CENTER|CFMT_FIXSIZE, 50);
	m_wndPatientList.InsertColumn(4, _T("Sex"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndPatientList.InsertColumn(5, _T("Object"), CFMT_TEXT, 100);
	m_wndPatientList.InsertColumn(6, _T("(%)"), CFMT_NUMBER, 40);
	m_wndPatientList.InsertColumn(7, _T("Admit Date"), CFMT_DATETIME|CFMT_CENTER, 125);
	m_wndPatientList.InsertColumn(8, _T("Discharge Date"), CFMT_DATETIME|CFMT_CENTER, 125);
	m_wndPatientList.InsertColumn(9, _T("Status"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(10, _T("AdmitNumber"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(11, _T("Room - Bed"), CFMT_TEXT, 100);
	m_wndPatientList.InsertColumn(12, _T("PatientNo"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(13, _T("Idx"), CFMT_NUMBER, 0);
	m_wndPatientList.InsertColumn(14, _T("Doctor"), CFMT_TEXT, 80);	
	m_wndPatientList.InsertColumn(15, _T("From Dept"), CFMT_TEXT, 80);
	m_wndPatientList.InsertColumn(16, _T("Rel Phone"), CFMT_TEXT, 90);	
	m_wndPatientList.InsertColumn(17, _T("Phone"), CFMT_TEXT, 90);
	/*m_wndPatientList.AddFixedColumn(0);
	m_wndPatientList.AddFixedColumn(1);
	m_wndPatientList.AddFixedColumn(2);*/
	//prevent modifystyle
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
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndWaitingForPayment.SetEvent(WE_CLICK, _OnWaitingForPaymentSelectFnc);
	m_wndCombinedTreatment.SetEvent(WE_CLICK, _OnCombinedTreatmentSelectFnc);
	m_wndSendingTreatment.SetEvent(WE_CLICK, _OnSendingTreatmentSelectFnc);
	m_wndCancer.SetEvent(WE_CLICK, _OnCancerSelectFnc);
//	m_wndExaminationSurgery.SetEvent(WE_CLICK, _OnExaminationSurgerySelectFnc);

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


	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);



	m_wndPatientList.SetWindowText(_T("Patient List"));
	m_wndPatientList.AddEvent(1, _T("Create clinical record"), _OnPatientListAdmissionFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(2, _T("Cancel clinical record"), _OnCancelClinicalRecordFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(3, _T("Create next outpatient record"), _OnCreateOutpatientRecordFnc);
	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(4, _T("Phiếu tổng kết bệnh nhân ra viện"), _OnDebriefingDischargeFnc);

	m_wndPatientList.AddEvent(0, _T("-"), NULL);
	m_wndPatientList.AddEvent(5, _T("Cập nhân thông tin người nhà"), _OnUpdateRelativeInfoFnc);


//	m_wndPatientList.AddEvent(0, _T("-"), NULL);
//	m_wndPatientList.AddEvent(3, _T("Combined Treat Movement"), _OnCombinedTreatMovementFnc);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatmentQueueFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatmentQueueFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatmentQueueFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatmentQueueFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatmentQueueFnc, 0, 'T', VK_CONTROL);
*/
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_bOutpatient = TRUE;
	m_szObjectKey.Empty();	
	m_szDepartmentKey = pMF->m_szDept;

	if(pMF->CheckPermission(_T("20.01")))
	{
		m_wndDepartment.SetReadOnly(FALSE);
	}
	SetMode(VM_EDIT);
	OnPatientListLoadData();

	
	m_wndCancer.ShowWindow(SW_HIDE);
	
}
void CHMSTreatmentQueue::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAdmission.GetDlgCtrlID(), m_nStatus);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndWaitingForPayment.GetDlgCtrlID(), m_bWaitingForPayment);
	DDX_Check(pDX, m_wndCombinedTreatment.GetDlgCtrlID(), m_bCombinedTreatment);
	DDX_Check(pDX, m_wndSendingTreatment.GetDlgCtrlID(), m_bSendingTreatment);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Check(pDX, m_wndCancer.GetDlgCtrlID(), m_bCancer);
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
	m_bCancer=FALSE;
	m_nStatus = 1;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_bOutpatient=TRUE;
	m_bWaitingForPayment=FALSE;
	m_bCombinedTreatment=FALSE;
	m_bSendingTreatment=FALSE;
	m_bExaminationSurgery = FALSE;
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
		if(!pMF->CheckPermission(_T("20.01")))
		{
			m_wndDepartment.EnableWindow(FALSE);
		}
		m_wndOutpatient.EnableWindow(FALSE);
		
 		return nOldMode; 
}
void CHMSTreatmentQueue::OnAdmissionSelect(){
	OnPatientListLoadData();	
}
void CHMSTreatmentQueue::OnTreatingSelect(){
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnTransferSelect(){
	OnPatientListLoadData();
}
void CHMSTreatmentQueue::OnDischargedSelect(){
	OnPatientListLoadData();
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
	return pMF->LoadIVFSelectionList(&m_wndObject, _T("IVF_TYPE"), m_szObjectKey);
	
	return 0;
	/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" WHERE ho_id='%s' "), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_object %s ORDER BY ho_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("ho_id")), 
			rs.GetValue(_T("ho_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
}
/*void CHMSTreatmentQueue::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSTreatmentQueue::OnCombinedTreatmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bSendingTreatment = FALSE;
	UpdateData(FALSE);
	OnPatientListLoadData();	
}
void CHMSTreatmentQueue::OnOutpatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPatientListLoadData();	
}
void CHMSTreatmentQueue::OnWaitingForPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPatientListLoadData();
}

void CHMSTreatmentQueue::OnSendingTreatmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bCombinedTreatment = FALSE;
	UpdateData(FALSE);
	OnPatientListLoadData();	
}

void CHMSTreatmentQueue::OnCancerSelect(){
	UpdateData(TRUE);
	OnPatientListLoadData();
}

void CHMSTreatmentQueue::OnExaminationSurgerySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bExaminationSurgery = TRUE;
	m_bCombinedTreatment = FALSE;
	m_bSendingTreatment = FALSE;
	UpdateData(FALSE);
	OnPatientListLoadData();	
}

/*void CHMSTreatmentQueue::OnRecordNoChange(){
	
} */
/*void CHMSTreatmentQueue::OnRecordNoSetfocus(){
	
} */
/*void CHMSTreatmentQueue::OnRecordNoKillfocus(){
	
} */
int CHMSTreatmentQueue::OnRecordNoCheckValue(){
	OnPatientListLoadData();
	return 1;
} 
/*void CHMSTreatmentQueue::OnDocumentNoChange(){
	
} */
/*void CHMSTreatmentQueue::OnDocumentNoSetfocus(){
	
} */
/*void CHMSTreatmentQueue::OnDocumentNoKillfocus(){
	
} */
int CHMSTreatmentQueue::OnDocumentNoCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr, szDate;
	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	if(tmpStr.GetLength() < 7 && m_nDocumentNo > 0){
		szDate = pMF->GetSysDate();
		tmpStr.Format(_T("%d%.7ld"), ToLong(szDate.Mid(2, 2)), m_nDocumentNo);
		m_nDocumentNo = ToLong(tmpStr);
		UpdateData(false);
	}
	m_wndDocumentNo.SetSel(0, 8);
	OnPatientListLoadData();
	if(m_nDocumentNo == 0)
		return 0;
	return 1;
} 
/*void CHMSTreatmentQueue::OnPatientNameChange(){
	
} */
/*void CHMSTreatmentQueue::OnPatientNameSetfocus(){
	
} */
/*void CHMSTreatmentQueue::OnPatientNameKillfocus(){
	
} */
int CHMSTreatmentQueue::OnPatientNameCheckValue(){
	
	OnPatientListLoadData();
//	if(m_szPatientName.IsEmpty())
//		return 0;
	return 1;
} 
void CHMSTreatmentQueue::OnRefrehSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPatientListLoadData();

} 
void CHMSTreatmentQueue::OnPatientListDblClick(){
	 CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0)
		return;
	UpdateData(true);

	if(m_nStatus == 0){
		OnAdmissionRegistration();
		return ;
	}

	pMF->m_nPatientNo = ToLong(m_wndPatientList.GetItemText(nSel, 12));
	pMF->m_nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	pMF->m_nRefIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));
	m_szDischargeDate = m_wndPatientList.GetItemText(nSel, 8);
	pMF->m_wndPatientDocument.LoadData(pMF->m_nPatientNo, pMF->m_nDocumentNo, pMF->m_nRefIndex);
	pMF->SetActivePane(1);
} 
void CHMSTreatmentQueue::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndPatientList.GetCurSel();
	m_nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	m_szDischargeDate = m_wndPatientList.GetItemText(nSel, 8);
	m_szSex = m_wndPatientList.GetItemText(nSel, 4);
	m_szTreatNo = m_wndPatientList.GetItemText(nSel, 10);

	m_wndPatientList.SetMenuState(1, false);
	m_wndPatientList.SetMenuState(2, false);
	m_wndPatientList.SetMenuState(3, false);

	if(m_nStatus == 0)
	{
		m_wndPatientList.SetMenuState(1, true);
		m_wndPatientList.SetMenuState(2, true);
	}
	if(m_nStatus == 1)
	{
		m_wndPatientList.SetMenuState(1, true);
//		m_wndPatientList.SetMenuState(2, true);
	}
	if(m_nStatus == 3)
	{
		m_wndPatientList.SetMenuState(3, true);
	}

} 
int CHMSTreatmentQueue::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentQueue::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szSheetNo;
	UpdateData(true);
	
	if(m_bCombinedTreatment){
		szWhere.Format(_T(" and htr_ctdeptid = '%s' "), m_szDepartmentKey);
		szWhere.AppendFormat(_T(" and htr_status='I' AND htr_combinedtreat='Y' and htr_ctdeptid='%s' "), m_szDepartmentKey);
	}
	else if(m_bSendingTreatment)
	{
		szWhere.Format(_T(" and htr_deptid = '%s' "), m_szDepartmentKey);
		szWhere.AppendFormat(_T(" and htr_status='I' AND htr_combinedtreat='Y' and htr_deptid='%s' "), m_szDepartmentKey);
	}
	else
	{
		szWhere.Format(_T(" and htr_deptid = '%s' "), m_szDepartmentKey);
		//Trang thai doi nhap vien 
		if(m_nStatus == 0){
			szWhere.AppendFormat(_T(" AND htr_status='A' "));
		}
		//Trang thai dang dieu tri
		else if(m_nStatus == 1){
			szWhere.AppendFormat(_T(" AND htr_status='I' "));
		}
		//Trang thai chuyen khoa
		else if(m_nStatus == 2){
			szWhere.AppendFormat(_T(" AND ( htr_suggestion ='M') "));
			szWhere.AppendFormat(_T(" AND (htr_dischargedate) between TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		}
		//Trang thai da ra vien
		else if(m_nStatus == 3)
		{
			szWhere.AppendFormat(_T(" AND htr_status='T' AND htr_suggestion <> 'M'"));
			if(m_bWaitingForPayment){
				szWhere.AppendFormat(_T(" and (hcrf_acceptedfee = 'Y' ) "));
			}
//			else
				szWhere.AppendFormat(_T(" AND (htr_dischargedate) between TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		}
		

		if(!m_szObjectKey.IsEmpty()){
			szWhere.AppendFormat(_T(" AND HTR_IVF_TYPE='%s' "), m_szObjectKey);
		}

		szWhere.AppendFormat(_T(" AND (htr_outpatient='Y' or hd_outpatient='Y')  "));
		
	}
	if(m_nDocumentNo > 0){
		szWhere.Format(_T(" and (htr_deptid='%s' or htr_ctdeptid='%s') and hd_docno=%ld"), m_szDepartmentKey,m_szDepartmentKey, m_nDocumentNo);
		m_szPatientName.Empty();
	}	
	if (!m_szRecordNo.IsEmpty())
	{
		szWhere.Format(_T(" and htr_deptid='%s' and lower(hcr_recordno) like(chr(37)||lower('%s')||chr(37)) "), m_szDepartmentKey, m_szRecordNo);
	}
	if(!m_szPatientName.IsEmpty()){
		szWhere.Format(_T(" AND (htr_deptid='%s' or htr_ctdeptid='%s') AND lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(lower(chr(37)||'%s'||chr(37))) ")
			, m_szDepartmentKey,m_szDepartmentKey, m_szPatientName);

		m_nDocumentNo = 0;
	}
	if (m_bCancer)
		szWhere.AppendFormat(_T(" and hcr_cancer = 'Y'"));


	szSQL.Format(_T(" SELECT hp_patientno AS patientno,") \
_T("   hd_docno          AS docno,") \
_T("   GET_PATIENTNAME(hd_docno)             AS pname,") \
_T("   extract(YEAR FROM hp_birthdate)       AS age,") \
_T("   get_selection_desc('sys_sex', hp_sex) AS sex,") \
_T("   hms_getobjectname(hd_object)          AS object,") \
_T("   CASE") \
_T("     WHEN hd_disrate > 0") \
_T("     THEN TO_CHAR(hd_disrate,'999')") \
_T("     ELSE ''") \
_T("   END                                                  AS disrate,") \
_T("   (htr_admitdate)                                 AS admitdate,") \
_T("   (htr_dischargedate)                             AS dischargedate,") \
_T("   htr_idx                                              AS idx,") \
_T("   htr_status                                           AS status,") \
_T("   hcr_recordno                                         AS admitnumber,") \
_T("   htr_emergency                                        AS emergency,") \
_T("   hms_getActiveBed(htr_docno, htr_deptid)              AS bedName,") \
_T("   get_selection_desc('hms_suggestion', htr_suggestion) AS suggestion,") \
_T("   htr_doctor                                           AS doctor, ") \
_T("   hd_telephone phone, hd_contacttel contact_tel,") \
_T("case when htr_idx=1 then hd_enddept else hcr_admitdept end as from_dept ") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record") \
_T(" ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record") \
_T(" ON(htr_docno         =hd_docno)") \
_T(" WHERE htr_docno > 0 %s ") \
_T(" ORDER BY admitdate,") \
_T("   pname,") \
_T("   htr_idx"),  szWhere);

	
_tprintf(_T("\r\n%s"), szSQL);
	m_wndPatientList.BeginLoad(); 
	int nCount = 0, nItem=1, nDiff = 0;
	CString szEmergency, tmpStr;
	CString szDischargeDate;

	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}


	CString szFromDept;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 

		rs.GetValue(_T("pname"), tmpStr);
		if(!m_szPatientName.IsEmpty()){

			CString szPatientName;
			
			StringLower(tmpStr, szPatientName);

			SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
			GetShortName(szPatientName, szShortName);
			nDiff = 0;
			if(szShortName != m_szPatientName)
			{
				if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
					nDiff++; 
				}
			
				if(!szSurName.IsEmpty() && szSurName != szSurName2){
					nDiff++;
				}
				if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
					nDiff++;
				}
				if (nDiff>=3)
				{
					rs.MoveNext();
					continue;
				}
			}
		}

		tmpStr.Format(_T("%d"), nItem++);
		rs.GetValue(_T("dischargedate"), szDischargeDate);
		CString szStatus;
		rs.GetValue(_T("status"), szStatus);
		if(szStatus != _T("T"))
			szDischargeDate.Empty();

		rs.GetValue(_T("from_dept"), szFromDept);

		int nItem = m_wndPatientList.AddItems(
			tmpStr,
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("object")), 
			rs.GetValue(_T("disrate")), 
			rs.GetValue(_T("admitdate")), 
			szDischargeDate,
			rs.GetValue(_T("status")), 
			rs.GetValue(_T("admitnumber")), 
			rs.GetValue(_T("BedName")), 
			rs.GetValue(_T("patientno")), 
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("doctor")),
			szFromDept,
			rs.GetValue(_T("contact_tel")),
			rs.GetValue(_T("phone")),
			NULL);


		rs.GetValue(_T("emergency"), szEmergency);
		if(szEmergency == _T("Y")){
			m_wndPatientList.SetSubItemBkColor(nItem, 1, RGB(128, 0, 0));
			m_wndPatientList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255));			
		}
		rs.MoveNext();
	}
	
	m_wndPatientList.EndLoad(); 
	UpdateData(false);
	return nCount;
}
int CHMSTreatmentQueue::OnAdmissionRegistration()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szStatus, tmpStr;

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return 0;
	
	pMF->m_nRefIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));
	if(!pMF->CheckPermission(_T("01.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}
	CString szSQL;

	long nDocumentNo = str2long(m_wndPatientList.GetItemText(nSel, 1));

	szSQL.Format(_T("SELECT hcr_status FROM hms_clinical_record WHERE hcr_docno = %ld"), nDocumentNo);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hcr_status"), szStatus);
	if(szStatus == _T("A"))
	{
		CHMSDepartmentAdmissionDialog dlg(this);
		dlg.m_nDocumentNo = nDocumentNo;
		dlg.m_nIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));
		
		tmpStr.Format(_T("Họ tên:%s - Số BA:%s"), m_wndPatientList.GetItemText(nSel, 2), m_wndPatientList.GetItemText(nSel, 10));
		dlg.m_szTiles = tmpStr;	
		szStatus = m_wndPatientList.GetItemText(nSel, 9);

		if(szStatus==_T("A"))
			dlg.SetMode(VM_ADD);
		
		if(dlg.DoModal() == IDOK)
		{		
			if(szStatus==_T("A"))
				m_wndPatientList.DeleteItem(nSel);
		}
	}
	else
	{
		CHMSAdmissionRegistrationDialog dlg(this);
		//_msg(_T("Chào bạn"));
		dlg.m_nDocumentNo = nDocumentNo;
		dlg.m_nIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));
		
		tmpStr.Format(_T("Họ tên:%s - Số BA:%s"), m_wndPatientList.GetItemText(nSel, 2), m_wndPatientList.GetItemText(nSel, 10));
		dlg.m_szTiles = tmpStr;	
		szStatus = m_wndPatientList.GetItemText(nSel, 9);

		if(szStatus==_T("A"))
			dlg.SetMode(VM_ADD);
		
		if(dlg.DoModal() == IDOK)
		{		
			if(szStatus==_T("A"))
				m_wndPatientList.DeleteItem(nSel);
		}
	}
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szStatus, tmpStr;
	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return 0;
	
	if(!pMF->CheckPermission(_T("01.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	CHMSDepartmentAdmissionDialog dlg(this);
	
	tmpStr.Format(_T("Họ tên:%s - Số BA:%s"), m_wndPatientList.GetItemText(nSel, 2), m_wndPatientList.GetItemText(nSel, 10));
	dlg.m_szTiles = tmpStr;
	dlg.m_nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	dlg.m_nIndex = ToInt(m_wndPatientList.GetItemText(nSel, 13));

	szStatus = m_wndPatientList.GetItemText(nSel, 9);
	if(szStatus == _T("A"))
		dlg.SetMode(VM_ADD);

	if(dlg.DoModal() == IDOK){		
		if(szStatus==_T("A"))
			m_wndPatientList.DeleteItem(nSel);
	}
	return 0;
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


int CHMSTreatmentQueue::OnCancelClinicalRecord(){
	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0)
		return -1;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	if(!pMF->CheckPermission(_T("01.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}

	int retMsg = ShowMessageBox(_T("Do you want to cancel record?(Y/N)"), MB_YESNO);
	if(retMsg == IDNO)
		return 0  ;
	int nRefIndex;
	long nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	nRefIndex = str2int(m_wndPatientList.GetItemText(nSel, 13));

	szSQL.Format(_T(" HMS_TREATMENT_RECORD_CANCEL(%ld, %d)"), nDocumentNo, nRefIndex);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Cannot cancel record."));
	}
	else
		m_wndPatientList.DeleteItem(nSel);
	return 1;
/*
	szSQL.Format(_T("SELECT max(htr_idx) FROM hms_treatment_record WHERE htr_docno=%ld "), nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 1)
		return 0;

	
	int nRefIndex = ToInt(m_wndPatientList.GetItemText(nSel, 11));
	if(nRefIndex > 1)
		return 0;
	szSQL.Format(_T("SELECT htr_status as status FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d"), nDocumentNo, nRefIndex);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("status"), tmpStr);
	if(tmpStr != _T("A"))
		return 0;
	int nMsg = ShowMessageBox(_T("Do you want to cancel treatment record?(Y/N)"), MB_YESNO);
	if(nMsg == IDNO)
		return 0;

	szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d and htr_status='A' "), nDocumentNo, nRefIndex);
	pMF->ExecSQL(szSQL);

	szSQL.Format(_T("DELETE FROM hms_clinical_record WHERE hcr_docno=%ld and hcr_status='A' "), nDocumentNo);
	pMF->ExecSQL(szSQL);

	szSQL.Format(_T("UPDATE hms_doc SET hd_suggestion='D', hd_indept='' WHERE hd_docno=%ld"), nDocumentNo);
	pMF->ExecSQL(szSQL);
*/
	return 1;
}

#include "HandinContent.h"
int CHMSTreatmentQueue::OnDebriefingDischarge(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;
	}
	
	CHandinContent dlg(this);
	dlg.m_szDocumentNo.Format(_T("%ld"), m_nDocumentNo);
	dlg.m_szOutDate = m_szDischargeDate;
	dlg.DoModal();
	return 0;
}


int CHMSTreatmentQueue::OnUpdateRelativeInfo(){
	CHMSExtraInfoDialog dlg(this);
	dlg.DoModal();
	return 0;
}

int CHMSTreatmentQueue::OnCombinedTreatMovement(){
	return 0;
}

int CHMSTreatmentQueue::OnPatientListAdmission(){
	OnAdmissionRegistration();
	return 0;
} 


int CHMSTreatmentQueue::OnCreateOutpatientRecord(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CString szStatus, tmpStr, szSQL;
	
	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return 0;
	long nDocumentNo;


	nDocumentNo = str2long(m_wndPatientList.GetItemText(nSel, 1));
	if(!pMF->CheckPermission(_T("01.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}
	

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Hồ sơ chỉ được xem. không cho phép sửa đổi"));
		return 0;
	}

	szSQL.Format(_T("HMS_TREATMENT_CHECKBF_CREATE(%ld) "), nDocumentNo);
	int res = str2int(pMF->ExecDML(szSQL));
	if(res <= 0) 
	{

		CString szMsg;
		//szMsg.Format(_T("[%d] Không thể thao tác với trạng thái hiện thời"), res);
		szMsg.Format(_T("[%d] Không thể thao tác với trạng thái hiện thời. Liên hệ tài chính duyệt lần trước."), res);
		ShowMessageBox(szMsg);
		return -1;
	}

	CHMSCreateOutpatientRecordDialog dlg(this);
	dlg.m_nDocumentNo = nDocumentNo;
	dlg.m_nIndex = res;
	
	tmpStr.Format(_T("Họ tên:%s - Số BA:%s"), m_wndPatientList.GetItemText(nSel, 2), m_wndPatientList.GetItemText(nSel, 10));
	dlg.m_szTiles = tmpStr;	
	szStatus = m_wndPatientList.GetItemText(nSel, 9);

	if(szStatus==_T("A"))
		dlg.SetMode(VM_ADD);
	
	if(dlg.DoModal() == IDOK){		
	}
/*
	CString szSQL, szAdmitDate, szStatus, tmpStr;
	szAdmitDate = pMF->GetSysDate();
	long nDocumentNo;
	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return 0;

	nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));

	szSQL.Format(_T("HMS_TREATMENT_RECORD_CREATENEW(%ld, '%s', TO_DATE('%s', 'YYYY-MM-DD'))"),
		nDocumentNo, pMF->GetCurrentUser(), szAdmitDate);
	int res = str2int(pMF->ExecDML(szSQL));
	if (res <= 0) return 0;
*/
	return 1;

}

void CHMSTreatmentQueue::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(pMF->m_szDept != m_szDepartmentKey)
		pMF->m_bPrivateNoneView = true;
	else
		pMF->m_bPrivateNoneView = false;
	
} 
void CHMSTreatmentQueue::OnDepartmentSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(pMF->m_szDept != m_szDepartmentKey)
		pMF->m_bPrivateNoneView = true;
	else
		pMF->m_bPrivateNoneView = false;
//	OnPatientListLoadData();
}
/*void CHMSTreatmentQueue::OnDepartmentSetfocus(){
	
}*/
/*void CHMSTreatmentQueue::OnDepartmentKillfocus(){
	
}*/
long CHMSTreatmentQueue::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_type ='DT' "));
	if(pMF->m_szDept != _T("A11"))
	{
		szFilter.AppendFormat(_T(" and sd_id <> 'A11' "));
	}
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey, szFilter);

}

void CHMSTreatmentQueue::OnGiveBirth(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szSex == _T("Nữ") && m_szTreatNo.Left(2) != _T("TE"))
		{
			CHMSNewbornRecord dlg(this, m_nDocumentNo);
			//CTMNewbornRecord2 dlg(this, pMF->m_nDocumentNo);
			dlg.DoModal();
		}
	return;
}

void CHMSTreatmentQueue::OnResizeLayout()
{
	AddLayoutControls(WS_RESIZEX, 0, 0, 100, 0,&m_wndSearchInformation,&m_wndObject,&m_wndPatientName,NULL);

	AddLayoutControls(WS_REPOSX, 100, 0, 0, 0,&m_wndRefreh,NULL);

	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100,&m_wndPatientListGroupBox,&m_wndPatientList,NULL);

	AddLayoutControls(WS_REPOSY, 0, 100, 0, 0,&m_wndOutpatient,&m_wndWaitingForPayment,&m_wndCombinedTreatment,&m_wndSendingTreatment,&m_wndDepartmentLabel,&m_wndDepartment,NULL);


}
