#include "HMSSurgeryQueue.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSAddPatientToBoardDlg.h"
#include "HMSTreatmentPlanDlg.h"
#include "HMSTreatmentAppointment.h"
//#include ".\hmsexaminationqueue.h"
/*static int _OnFromDateChangeFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnFromDateChange();
} */
/*static int _OnFromDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnFromDateKillfocus();} */ 
/*static int _OnFromDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnFromDateCheckValue();
} 
/*static int _OnFromTimeChangeFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnFromTimeChange();
} */
/*static int _OnFromTimeSetfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnFromTimeKillfocus();} */ 
/*static int _OnFromTimeKillfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnFromTimeKillfocus();
} */
static int _OnFromTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnFromTimeCheckValue();
} 
/*static int _OnToDateChangeFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnToDateChange();
} */
/*static int _OnToDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnToDateKillfocus();} */ 
/*static int _OnToDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnToDateCheckValue();
} 
/*static int _OnToTimeChangeFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnToTimeChange();
} */
/*static int _OnToTimeSetfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnToTimeKillfocus();} */ 
/*static int _OnToTimeKillfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnToTimeKillfocus();
} */
static int _OnToTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnToTimeCheckValue();
} 
static int _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSurgeryQueue* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnRoomSelendokFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue *)pWnd)->OnRoomSelendok();
}
/*static int _OnRoomSetfocusFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue *)pWnd)->OnRoomKillfocus();
}*/
/*static int _OnRoomKillfocusFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue *)pWnd)->OnRoomKillfocus();
}*/
static int _OnRoomLoadDataFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue *)pWnd)->OnRoomLoadData();
}
/*static int _OnRoomAddNewFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue *)pWnd)->OnRoomAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSurgeryQueue* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSurgeryQueue *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSurgeryQueue *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSurgeryQueue *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSurgeryQueue *)pWnd)->OnDeptAddNew();
}*/
/*static int _OnDocumentNoChangeFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnDocumentNoChange();
} */
/*static int _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnDocumentNoKillfocus();} */ 
/*static int _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnDocumentNoCheckValue();
} 
/*static int _OnPatientNameChangeFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnPatientNameChange();
} */
/*static int _OnPatientNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnPatientNameKillfocus();} */ 
/*static int _OnPatientNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnPatientNameKillfocus();
} */
/*static void _OnAdmissionNoChangeFnc(CWnd *pWnd){
	((CHMSurgeryQueue *)pWnd)->OnAdmissionNoChange();
} */
/*static void _OnAdmissionNoSetfocusFnc(CWnd *pWnd){
	((CHMSurgeryQueue *)pWnd)->OnAdmissionNoSetfocus();} */ 
/*static void _OnAdmissionNoKillfocusFnc(CWnd *pWnd){
	((CHMSurgeryQueue *)pWnd)->OnAdmissionNoKillfocus();
} */
static int _OnAdmissionNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnAdmissionNoCheckValue();
} 
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue *)pWnd)->OnPatientNameCheckValue();
} 
static int _OnWaitingSelectFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue*)pWnd)->OnWaitingSelect();
}
static int _OnExaminedSelectFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue*)pWnd)->OnExaminedSelect();
}
static int _OnTerminatedSelectFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue*)pWnd)->OnTerminatedSelect();
}
static int _OnLoadSelectFnc(CWnd *pWnd){
	CHMSurgeryQueue *pVw = (CHMSurgeryQueue *)pWnd;
	return pVw->OnLoadSelect();
} 
static int _OnPatientListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue*)pWnd)->OnPatientListLoadData();
} 
static int _OnPatientListDblClickFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue*)pWnd)->OnPatientListDblClick();
} 
static int _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
	 return ((CHMSurgeryQueue*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListSelectItemFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue*)pWnd)->OnPatientListDblClick();
} 
static int _OnAddPatientToBoardFnc(CWnd *pWnd){
	((CHMSurgeryQueue*)pWnd)->OnAddPatientToBoard();
	return 0;
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CHMSurgeryQueue*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CHMSurgeryQueue*)pWnd)->OnInPatientSelect();
}
static int _OnPatientListSetEmergencyFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue*)pWnd)->OnPatientListSetEmergency();
} 
static int _OnPatientListSetPriorityFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue*)pWnd)->OnPatientListSetPriority();
} 
static int _OnTreatmentAppoitnmentFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue*)pWnd)->OnTreatmentAppointment();
}
static int _OnTreatmentPlanFnc(CWnd *pWnd){
	return ((CHMSurgeryQueue*)pWnd)->OnTreatmentPlan();
}
static int _OnAddHMSurgeryQueueFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue*)pWnd)->OnAddHMSurgeryQueue();
} 
static int _OnEditHMSurgeryQueueFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue*)pWnd)->OnEditHMSurgeryQueue();
} 
static int _OnDeleteHMSurgeryQueueFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue*)pWnd)->OnDeleteHMSurgeryQueue();
} 
static int _OnSaveHMSurgeryQueueFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue*)pWnd)->OnSaveHMSurgeryQueue();
} 
static int _OnCancelHMSurgeryQueueFnc(CWnd *pWnd){
	 return ((CHMSurgeryQueue*)pWnd)->OnCancelHMSurgeryQueue();
}
static void _OnDa_tao_lich_moSelectFnc(CWnd *pWnd)
{
	 ((CHMSurgeryQueue*)pWnd)->OnDa_tao_lich_moSelect();
}
CHMSurgeryQueue::CHMSurgeryQueue()
{

	m_nDlgWidth = 1000;
	m_nDlgHeight = 620;
	
}
CHMSurgeryQueue::~CHMSurgeryQueue(){
}
void CHMSurgeryQueue::OnCreateComponents()
{
	/*m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1010, 90);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 95, 1010, 655);
	m_wndFromDateLabel.Create(this, _T("From Date"), 95, 30, 165, 55);
	m_wndFromDate.Create(this,170, 30, 250, 55); 
	m_wndFromTime.Create(this,255, 30, 305, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 310, 30, 380, 55);
	m_wndToDate.Create(this,385, 30, 465, 55); 
	m_wndToTime.Create(this,470, 30, 520, 55); 
	m_wndRoomLabel.Create(this, _T("Status"), 525, 30, 605, 55);
	m_wndRoom.Create(this,610, 30, 730, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 95, 60, 165, 85);
	m_wndDept.Create(this,170, 60, 305, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 310, 60, 380, 85);
	m_wndDocumentNo.Create(this,385, 60, 520, 85); 
	m_wndAdmissionNoLabel.Create(this, _T("Admission No"), 525, 60, 605, 85);
	m_wndAdmissionNo.Create(this,610, 60, 730, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 735, 60, 820, 85);
	m_wndPatientName.Create(this,825, 60, 1005, 85); 
	m_wndLoad.Create(this, _T("Load"), 915, 30, 1005, 55);
	m_wndPatientList.Create(this,10, 120, 1005, 650); 
	m_wndTotalLabel.Create(this, _T("Total"), 735, 30, 820, 55);
	m_wndTotal.Create(this,825, 30, 910, 55); 
	m_wndOutPatient.Create(this, _T("OutPatient"), 10, 30, 90, 55);
	m_wndInPatient.Create(this, _T("InPatient"), 10, 60, 90, 85);*/
	
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1010, 90);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 95, 1010, 655);
	m_wndFromDateLabel.Create(this, _T("From Date"), 95, 30, 165, 55);
	m_wndFromDate.Create(this,170, 30, 250, 55); 
	m_wndFromTime.Create(this,255, 30, 305, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 310, 30, 380, 55);
	m_wndToDate.Create(this,385, 30, 465, 55); 
	m_wndToTime.Create(this,470, 30, 520, 55); 
	m_wndRoomLabel.Create(this, _T("Status"), 525, 30, 605, 55);
	m_wndRoom.Create(this,610, 30, 730, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 95, 60, 165, 85);
	m_wndDept.Create(this,170, 60, 305, 85); 
	m_wndTotalLabel.Create(this, _T("Total"), 735, 30, 820, 55);
	m_wndTotal.Create(this,825, 30, 910, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 310, 60, 380, 85);
	m_wndDocumentNo.Create(this,385, 60, 520, 85); 
	m_wndAdmissionNoLabel.Create(this, _T("Admission No"), 525, 60, 605, 85);
	m_wndAdmissionNo.Create(this,610, 60, 730, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 735, 60, 820, 85);
	m_wndPatientName.Create(this,825, 60, 1005, 85); 
	/*
	m_wndWaiting.Create(this, _T(""), 0, 0, 25, 25);
	m_wndExamined.Create(this, _T(""), 0, 0, 25, 25);
	m_wndTerminated.Create(this, _T(""), 0, 0, 25, 25);
	*/
	m_wndLoad.Create(this, _T("Load"), 915, 30, 1005, 55);
	m_wndPatientList.Create(this,10, 120, 1005, 650); 
	m_wndOutPatient.Create(this, _T("OutPatient"), 10, 30, 90, 55);
	m_wndInPatient.Create(this, _T("InPatient"), 10, 60, 90, 85);
	m_wndDa_tao_lich_mo.Create(this, _T("Đã tạo lịch mổ từ khoa"), 220, 96, 520, 121);

}
void CHMSurgeryQueue::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndFromTime.SetMax(CDate(pMF->GetSysTime()));
	m_wndFromTime.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndToTime.SetMax(CDate(pMF->GetSysTime()));
	m_wndToTime.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(15);
//	m_wndDocumentNo.SetLimitText(10);
//	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(75);
	//m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetNotEmpty(false);
	
	//m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(254);

	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetNotEmpty(false);
	//m_wndDocumentNo.SetCheckValue(true);

	m_wndAdmissionNo.SetLimitText(15);
	m_wndAdmissionNo.SetNotEmpty(false);
	//m_wndAdmissionNo.SetCheckValue(true);

	m_wndTotal.SetLimitText(16);
	//m_wndTotal.SetCheckValue(true);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Desc"), CFMT_TEXT, 200);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndPatientList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 90);
	m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndPatientList.InsertColumn(2, _T("Age"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(4, _T("Order Date"), CFMT_DATE, 100);
	m_wndPatientList.InsertColumn(5, _T("Perform Date"), CFMT_DATETIME, 125);
	m_wndPatientList.InsertColumn(6, _T("Departments"), CFMT_TEXT, 100);
	m_wndPatientList.InsertColumn(7, _T("Object"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(8, _T("Status"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(9, _T("Pno"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(10, _T("Lịch mổ"), CFMT_TEXT, 90);
	
	SetDefaultValues();
	UpdateData(false);
}
void CHMSurgeryQueue::OnSetWindowEvents()
{
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndFromTime.SetEvent(WE_CHANGE, _OnFromTimeChangeFnc);
	//m_wndFromTime.SetEvent(WE_SETFOCUS, _OnFromTimeSetfocusFnc);
	//m_wndFromTime.SetEvent(WE_KILLFOCUS, _OnFromTimeKillfocusFnc);
	m_wndFromTime.SetEvent(WE_CHECKVALUE, _OnFromTimeCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndToTime.SetEvent(WE_CHANGE, _OnToTimeChangeFnc);
	//m_wndToTime.SetEvent(WE_SETFOCUS, _OnToTimeSetfocusFnc);
	//m_wndToTime.SetEvent(WE_KILLFOCUS, _OnToTimeKillfocusFnc);
	m_wndToTime.SetEvent(WE_CHECKVALUE, _OnToTimeCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndAdmissionNo.SetEvent(WE_CHANGE, _OnAdmissionNoChangeFnc);
	//m_wndAdmissionNo.SetEvent(WE_SETFOCUS, _OnAdmissionNoSetfocusFnc);
	//m_wndAdmissionNo.SetEvent(WE_KILLFOCUS, _OnAdmissionNoKillfocusFnc);
	m_wndAdmissionNo.SetEvent(WE_CHECKVALUE, _OnAdmissionNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
//	m_wndWaiting.SetEvent(WE_CLICK, _OnWaitingSelectFnc);
//	m_wndExamined.SetEvent(WE_CLICK, _OnExaminedSelectFnc);
//	m_wndTerminated.SetEvent(WE_CLICK, _OnTerminatedSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.SetEvent(WE_CHECKVALUE, _OnPatientListSelectItemFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndDa_tao_lich_mo.SetEvent(WE_CLICK, _OnDa_tao_lich_moSelectFnc);

	m_wndPatientList.SetWindowText(_T("Patients List"));
	m_wndPatientList.AddEvent(1, _T("Select Patient"), _OnPatientListSelectItemFnc);
	m_wndPatientList.AddEvent(2, _T("Add patient to board"), _OnAddPatientToBoardFnc);
	m_wndPatientList.AddEvent(3, _T("Appointment"), _OnTreatmentAppoitnmentFnc);
	m_wndPatientList.AddEvent(4, _T("Plan"), _OnTreatmentPlanFnc);
//	m_wndPatientList.AddEvent(0, _T("-"));
//	m_wndPatientList.AddEvent(2, _T("Set Emergency"), _OnPatientListSetEmergencyFnc);
//	m_wndPatientList.AddEvent(0, _T("-"));
//	m_wndPatientList.AddEvent(3, _T("Set Priority"), _OnPatientListSetPriorityFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSurgeryQueueFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSurgeryQueueFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSurgeryQueueFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSurgeryQueueFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSurgeryQueueFnc, 0, 'T', VK_CONTROL);
*/

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndAdmissionNo, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndAdmissionNo.SetTextColor(RGB(0, 0, 255));

	m_wndTotal.EnableWindow(false);
	OnPatientListLoadData();

}
void CHMSurgeryQueue::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndFromTime.GetDlgCtrlID(), m_szFromTime);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndToTime.GetDlgCtrlID(), m_szToTime);
	DDX_Text(pDX, m_wndTotal.GetDlgCtrlID(), m_nTotal);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndAdmissionNo.GetDlgCtrlID(), m_szAdmissionNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
//	DDX_Radio(pDX, m_wndWaiting.GetDlgCtrlID(), m_nWaiting);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	//DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Check(pDX, m_wndDa_tao_lich_mo.GetDlgCtrlID(), m_bDa_tao_lich_mo);
}
void CHMSurgeryQueue::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSurgeryQueue::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSurgeryQueue::SetDefaultValues()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = pMF->GetSysDate();
	m_szFromTime = _T("00:00");
	m_szToDate = m_szFromDate;
	m_szToTime = _T("23:59");
	m_szRoomKey.Empty();
	m_szDeptKey.Empty();
	m_nDocumentNo=0;
	m_szAdmissionNo.Empty();
	m_szPatientName.Empty();
	//m_nWaiting=0;
	m_nTotal =0;
	m_nOutPatient=0;
	m_bDa_tao_lich_mo=TRUE;

}
int CHMSurgeryQueue::SetMode(int nMode){ 
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
		m_wndTotal.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
/*int CHMSurgeryQueue::OnFromDateChange(){
	return 0;
} */
/*int CHMSurgeryQueue::OnFromDateSetfocus(){
	return 0;
} */
/*int CHMSurgeryQueue::OnFromDateKillfocus(){
	return 0;
} */
int CHMSurgeryQueue::OnFromDateCheckValue(){
//	OnPatientListLoadData();
	return 0;
} 
/*int CHMSurgeryQueue::OnFromTimeChange(){
	return 0;
} */
/*int CHMSurgeryQueue::OnFromTimeSetfocus(){
	return 0;
} */
/*int CHMSurgeryQueue::OnFromTimeKillfocus(){
	return 0;
} */
int CHMSurgeryQueue::OnFromTimeCheckValue(){
	//OnPatientListLoadData();
	return 0;
} 
/*int CHMSurgeryQueue::OnToDateChange(){
	return 0;
} */
/*int CHMSurgeryQueue::OnToDateSetfocus(){
	return 0;
} */
/*int CHMSurgeryQueue::OnToDateKillfocus(){
	return 0;
} */
int CHMSurgeryQueue::OnToDateCheckValue(){
	//OnPatientListLoadData();
	return 0;
} 
/*int CHMSurgeryQueue::OnToTimeChange(){
	return 0;
} */
/*int CHMSurgeryQueue::OnToTimeSetfocus(){
	return 0;
} */
/*int CHMSurgeryQueue::OnToTimeKillfocus(){
	return 0;
} */
int CHMSurgeryQueue::OnToTimeCheckValue(){
//	OnPatientListLoadData();
	return 0;
} 
int CHMSurgeryQueue::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSurgeryQueue::OnRoomSelendok(){
	//OnPatientListLoadData();
	return 0;
}
void CHMSurgeryQueue::OnDa_tao_lich_moSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPatientListLoadData();
	
}
/*int CHMSurgeryQueue::OnRoomSetfocus(){
	 return 0;
}*/
/*int CHMSurgeryQueue::OnRoomKillfocus(){
	 return 0;
}*/
int CHMSurgeryQueue::OnRoomLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szLabel;

	/*if(m_wndRoom.IsSearchKey() && ToInt(m_szRoomKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s'"), m_szRoomKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_doc_status' and ss_code in('O','T') %s ORDER BY ss_code "), szWhere);
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}*/

	int nCount = 0;

	if (m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty())
	{
			if (m_szRoomKey == _T("O"))
			{
				TranslateString(_T("Opening"), szLabel);
				m_wndRoom.AddItems(_T("O"), szLabel, NULL);
			}
			if (m_szRoomKey == _T("S"))
			{
				TranslateString(_T("Sended"), szLabel);
				m_wndRoom.AddItems(_T("S"), szLabel, NULL);
			}
			if (m_szRoomKey == _T("A"))
			{
				TranslateString(_T("Approved"), szLabel);
				m_wndRoom.AddItems(_T("A"), szLabel, NULL);
			}

			if (m_szRoomKey == _T("T"))
			{
				TranslateString(_T("Terminated"), szLabel);
				m_wndRoom.AddItems(_T("T"), szLabel, NULL);
			}
			return 1;
	}

	TranslateString(_T("Opening"), szLabel);
	m_wndRoom.AddItems(_T("O"), szLabel, NULL);
	TranslateString(_T("Sended"), szLabel);
	m_wndRoom.AddItems(_T("S"), szLabel, NULL);
	TranslateString(_T("Approved"), szLabel);
	m_wndRoom.AddItems(_T("A"), szLabel, NULL);
	TranslateString(_T("Terminated"), szLabel);
	m_wndRoom.AddItems(_T("T"), szLabel, NULL);

	return nCount;

}
/*int CHMSurgeryQueue::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
void CHMSurgeryQueue::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSurgeryQueue::OnDeptSelendok(){
	 
}
/*void CHMSurgeryQueue::OnDeptSetfocus(){
	
}*/
/*void CHMSurgeryQueue::OnDeptKillfocus(){
	
}*/
long CHMSurgeryQueue::OnDeptLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szCondition;
	szWhere.Empty();

	if (m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDeptKey);
	}

	m_wndDept.DeleteAllItems(); 
	int nCount = 0;

	if (m_nOutPatient == 1)
	{
		szCondition.Format(_T(" AND sd_type IN('DT') "));
	}
	else
	{
		szCondition.Format(_T(" AND sd_type IN('KB') "));
	}

	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_id not in('B5') %s %s ") \
				 _T("ORDER BY sd_type, sd_id"),
				 szCondition, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSurgeryQueue::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*int CHMSurgeryQueue::OnDocumentNoChange(){
	return 0;
} */
/*int CHMSurgeryQueue::OnDocumentNoSetfocus(){
	return 0;
} */
/*int CHMSurgeryQueue::OnDocumentNoKillfocus(){
	return 0;
} */
int CHMSurgeryQueue::OnDocumentNoCheckValue()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr, szDate;
	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	if(tmpStr.GetLength() < 8 && m_nDocumentNo > 0)
	{
		szDate = pMF->GetSysDate(ddmmyyyy);
		tmpStr.Format(_T("%d%.7ld"), ToLong(szDate.Right(2)), m_nDocumentNo);
		m_nDocumentNo = ToLong(tmpStr);
		UpdateData(false);
	}
	m_wndDocumentNo.SetSel(0, 8);
	OnPatientListLoadData();
	if (m_nDocumentNo == 0)
		return 0;
	return 1;
}
/*void CHMSurgeryQueue::OnAdmissionNoChange(){
	
} */
/*void CHMSurgeryQueue::OnAdmissionNoSetfocus(){
	
} */
/*void CHMSurgeryQueue::OnAdmissionNoKillfocus(){
	
} */
int CHMSurgeryQueue::OnAdmissionNoCheckValue()
{
	OnPatientListLoadData();
	return 1;
}
/*int CHMSurgeryQueue::OnPatientNameChange(){
	return 0;
} */
/*int CHMSurgeryQueue::OnPatientNameSetfocus(){
	return 0;
} */
/*int CHMSurgeryQueue::OnPatientNameKillfocus(){
	return 0;
} */
int CHMSurgeryQueue::OnPatientNameCheckValue(){
	OnPatientListLoadData();
//	if(m_szPatientName.IsEmpty())
//		return 0;
	return 1;
} 
int CHMSurgeryQueue::OnWaitingSelect(){
	OnPatientListLoadData();
	return 0;
}
int CHMSurgeryQueue::OnExaminedSelect(){
	OnPatientListLoadData();
	return 0;
}
int CHMSurgeryQueue::OnTerminatedSelect(){
	OnPatientListLoadData();
	return 0;
}
int CHMSurgeryQueue::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPatientListLoadData();
	 return 0;
}
int CHMSurgeryQueue::OnPatientListDblClick()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0)
		return -1;
	
	long nDocNo = ToLong(m_wndPatientList.GetItemText(nSel, 0));
	if (nDocNo > 0)
	{
		pMF->m_wndSurgeryDocument.SetDefaultValues();
		pMF->m_wndSurgeryDocument.m_nDocumentNo= nDocNo;

		if (m_nOutPatient == 0)
			pMF->m_nIsOutPatient = 1;
		else
			pMF->m_nIsOutPatient = 0;
		
/*		pMF->m_wndSurgeryDocument.m_wndInput.ShowWindow(SW_HIDE);	
		pMF->m_wndSurgeryDocument.m_wndAssist2Label.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndAssist2.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndAssist3Label.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndAssist3.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndBeforeSurgeryLabel.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndBeforeSurgery.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndAfterSurgeryLabel.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndAfterSurgery.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndAdd.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndEdit.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndSave.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndDelete.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndCancel.ShowWindow(SW_SHOW);
		pMF->m_wndSurgeryDocument.m_wndAddDrug.ShowWindow(SW_SHOW);*/		

		pMF->m_wndSurgeryDocument.OnDocumentNoCheckValue();	
		pMF->m_wndSurgeryDocument.CloseInput();
		pMF->SetActivePane(0);
	}
	return 0;
} 
int CHMSurgeryQueue::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_nDocNo = ToLong(m_wndPatientList.GetItemText(nNewItem, 0));
	m_szDeptID = m_wndPatientList.GetItemText(nNewItem, 6);
	pMF->m_nPNo = ToLong(m_wndPatientList.GetItemText(nNewItem, 9));
	 return 0;
} 
int CHMSurgeryQueue::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
void CHMSurgeryQueue::OnAddPatientToBoard(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIndex = 0;
	/*if(m_szCurStatus == _T("T"))
	{
		MessageBox(_T("Kh\xF4ng th\x1EC3 th\x61o t\xE1\x63 v\x1EDBi tr\x1EA1ng th\xE1i n\xE0y!"), 0, MB_ICONERROR);
		return;
	}*/
	szSQL.Format(_T(" SELECT count(*) as nCount FROM HMS_OPERATION_BOARD WHERE hob_docno = %ld AND trunc(hob_date) = trunc(sysdate) "), n_curDocNo);
	rs.ExecSQL(szSQL);
	nIndex = ToInt(rs.GetValue(_T("nCount")));
	if(nIndex > 0)
	{
		MessageBox(_T("Th\xF4ng tin \x62\x1EC7nh nh\xE2n n\xE0y \x111\xE3 \x111\x1B0\x1EE3\x63 hi\x1EC3n th\x1ECB l\xEAn \x62\x1EA3ng!"), 0, MB_ICONINFORMATION);
		return;
	}else
	{
		CHMSAddPatientToBoardDlg dlg(this);
		dlg.m_szDeptID = m_szDeptID;
		dlg.m_nDocNo = pMF->m_nDocNo;
		dlg.DoModal();
	}
}
int CHMSurgeryQueue::OnPatientListSetEmergency(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	return 0;
} 
int CHMSurgeryQueue::OnPatientListSetPriority(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSurgeryQueue::OnPatientListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szUser;
	CString tmpStr;
	
	szSQL.Format(_T(" select su_deptid from sys_user where su_userid ='%s' "), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
		szUser = rs.GetStringValue();

	//if (pMF->GetCurrentUser().Trim().MakeLower() == _T("admin"))
		szUser = _T("B5");

	UpdateData(true);
	
	m_nTotal = 0;

	if (m_nOutPatient == 1)
	{
		szWhere.AppendFormat(_T(" AND sd_type <> 'KB' AND ((ho_status<>'O' AND ho_matorder_id IS NOT NULL AND hom_status<>'O') OR ho_status IN ('S', 'T')) " ));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND sd_type = 'KB' AND ho_status<>'O' " ));
	}

	if (m_bDa_tao_lich_mo)
	{
		szWhere.AppendFormat(_T(" AND NVL(ho_matorder_id, 0) > 0 "));
	}


	if (!m_szRoomKey.IsEmpty())
	{
		/*if (m_szRoomKey == _T("T"))
			tmpStr = _T("A");
		else
			tmpStr = _T("O");*/

		szWhere.AppendFormat(_T(" AND ho_status='%s'" ), m_szRoomKey);
	}
	
	if (!szUser.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_pdeptid='%s' ") , szUser);

	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_deptid='%s' ") , m_szDeptKey);

	if (!m_szPatientName.IsEmpty())
	{		
		//InitCap(m_szPatientName, tmpStr);
		//szWhere.AppendFormat(_T(" AND lower(trim(hp_surname||' '||hp_midname||' '||hp_firstname)) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
		m_nDocumentNo = 0;
		m_szAdmissionNo.Empty();
		//m_nWaiting = -1;
	}

	if (!m_szAdmissionNo.IsEmpty())
		szWhere.Format(_T(" AND hcr_recordno='%s' "), m_szAdmissionNo);

	if (m_nDocumentNo > 0)
		szWhere.Format(_T(" AND hd_docno=%ld "), m_nDocumentNo);

	
	szSQL.Format(_T(" SELECT *") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT ho_docno as docno,") \
				_T("          hp_patientno as patientno,") \
				_T("          trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
				_T("          hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("          (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ss_code=hp_sex) as sex,") \
				_T("          trunc_date(ho_orderdate) as orderdate,") \
				_T("          ho_performdate as performdate,") \
				_T("          ho_deptid as deptid,") \
				_T("          ho_status as status,") \
				_T("          hp_dtladdr||'-'||hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as dtladdr,") \
				_T("          case when ho_object > 0 then") \
				_T("          (select ho_desc from hms_object where cast(ho_object as nvarchar2(15))=ho_id) else ho_desc end as obj, NVL(ho_matorder_id, 0) as phieumo,") \
				_T("          row_number() over (partition by ho_docno order by ho_docno,ho_performdate) as dn") \
				_T("  FROM hms_patient") \
				_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
				_T("  LEFT JOIN sys_dept ON(ho_deptid=sd_id)") \
				_T("  LEFT JOIN hms_op_material ON(hom_op_material_id=ho_matorder_id)") \
				_T("  WHERE ho_performdate BETWEEN TO_TIMESTAMP('%s %s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s %s','YYYY-MM-DD HH24:MI:SS')") \
				_T("  %s") \
				_T(" ) Tbl") \
				_T(" WHERE dn=1") \
				_T(" ORDER BY docno, performdate"),
				m_szFromDate, m_szFromTime, m_szToDate, m_szToTime, szWhere);
	//_msg(_T("%s"), szSQL);

	
	/*szSQL.Format(_T(" SELECT distinct on(hsd_docno) hps_patientno as patientno,	") \
					_T(" 	hsd_docno as docno,") \
					_T(" 	trim(hps_pname) as patientname,") \
					_T(" 	 date_part('year',hps_birthdate) as age,") \
					_T(" 	(SELECT ss_desc FROM sys_sel WHERE ss_id='sys_sex' AND ss_code=hps_sex) as sex,") \
					_T("	hsd_date as admitdate, ") \
					_T("	hsd_tdeptid as deptid, ") \
					_T("	hsd_status as status, ") \
					_T(" 	hps_address||'-'||sv_name||'-'||sd_name||'-'||sp_name as address, ") \
					_T("	(SELECT ho_desc FROM hms_object WHERE cast(ho_id as integer)=hsd_object) As object ") \
					_T(" FROM hms_patient_surgery") \
					_T(" LEFT JOIN hms_surgery_detail ON(hsd_docno=hps_docno) ") \
					_T(" LEFT JOIN sys_prov ON(sp_id=hps_provid)") \
					_T(" LEFT JOIN sys_dist ON(sd_provid=hps_provid AND sd_id=hps_distid)") \
					_T(" LEFT JOIN sys_vill ON(sv_provid=hps_provid AND sv_distid=hps_distid AND sv_id=hps_villid)") \
					_T(" WHERE hsd_date BETWEEN '%s %s' AND '%s %s' %s ") \
					_T(" ORDER BY hsd_docno, hsd_date "), m_szFromDate, m_szFromTime, m_szToDate, m_szToTime, szWhere);*/

	_debug(_T("%s"), szSQL);

	//MessageBox(szSQL);

	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	CString szEmergency;
	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;

	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}
	nCount = rs.ExecSQL(szSQL);

	while (!rs.IsEOF())
	{ 
		rs.GetValue(_T("patientname"), tmpStr);

		if (!m_szPatientName.IsEmpty())
		{
			CString szPatientName;
			
			StringLower(tmpStr, szPatientName);

			SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
			GetShortName(szPatientName, szShortName);
			if (szShortName != m_szPatientName)
			{
				if(!szFirstName.IsEmpty() && szFirstName != szFirstName2)
				{
					rs.MoveNext();
					continue;
				}
			}
	
			if (!szSurName.IsEmpty() && szSurName != szSurName2)
			{
				rs.MoveNext();
				continue;
			}
			if (!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1)
			{
				rs.MoveNext();
				continue;
			}
		}

		int nItem = m_wndPatientList.AddItems(
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("patientname")),
			rs.GetValue(_T("age")),
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("orderdate")),		
			rs.GetValue(_T("performdate")),		
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("obj")),
			rs.GetValue(_T("status")),
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("phieumo")),			
			NULL);
		m_nTotal++;
		rs.MoveNext();
	}
	
	
	m_wndPatientList.EndLoad(); 
	
	UpdateData(false);
	return nCount;
}
void CHMSurgeryQueue::OnOutPatientSelect()
{
	UpdateData(TRUE);
	m_szDeptKey.Empty();
	OnDeptLoadData();
	UpdateData(FALSE);
	OnPatientListLoadData();
}
void CHMSurgeryQueue::OnInPatientSelect()
{
	UpdateData(TRUE);
	m_szDeptKey.Empty();
	OnDeptLoadData();
	UpdateData(FALSE);
	OnPatientListLoadData();
}
int CHMSurgeryQueue::OnAddHMSurgeryQueue(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSurgeryQueue"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSurgeryQueue::OnEditHMSurgeryQueue(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSurgeryQueue"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSurgeryQueue::OnDeleteHMSurgeryQueue(){
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
 		OnCancelHMSurgeryQueue();
 	}
return 0;
 } 
int CHMSurgeryQueue::OnSaveHMSurgeryQueue(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 	//	szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
// 		szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSurgeryQueueListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSurgeryQueue::OnCancelHMSurgeryQueue(){
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
int CHMSurgeryQueue::OnHMSurgeryQueueListLoadData(){
	return 0;
}

BOOL CHMSurgeryQueue::PreTranslateMessage(MSG* pMsg)
{
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN)
	{
		if(pMsg->hwnd == m_wndPatientList.GetSafeHwnd())
		{
			OnPatientListDblClick();
			return TRUE;
		}
	}

	return CGuiView::PreTranslateMessage(pMsg);
}

void CHMSurgeryQueue::RefreshData(){
	OnPatientListLoadData();
}

int CHMSurgeryQueue::OnTreatmentAppointment()
{
	CHMSTreatmentAppointment dlg(this);
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
	return 0;
}

int CHMSurgeryQueue::OnTreatmentPlan()
{
	CHMSTreatmentPlanDlg dlg(this);
	dlg.SetMode(VM_ADD);
	//dlg.m_szPatientNo = m_szPNo;
	dlg.DoModal();
	return 0; 
}