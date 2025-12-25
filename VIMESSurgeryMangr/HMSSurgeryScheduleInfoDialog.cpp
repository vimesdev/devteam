#include "HMSSurgeryScheduleInfoDialog.h"
#include "MainFrm.h"
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnStartDateCheckValue();
} 
/*static void _OnStartTimeChangeFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnStartTimeChange();
} */
/*static void _OnStartTimeSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnStartTimeSetfocus();} */ 
/*static void _OnStartTimeKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnStartTimeKillfocus();
} */
static int _OnStartTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnStartTimeCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnEndDateCheckValue();
} 
/*static void _OnEndTimeChangeFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnEndTimeChange();
} */
/*static void _OnEndTimeSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnEndTimeSetfocus();} */ 
/*static void _OnEndTimeKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnEndTimeKillfocus();
} */
static int _OnEndTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnEndTimeCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryScheduleInfoDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnDoctorAddNew();
}*/
static void _OnDoctor1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryScheduleInfoDialog* )pWnd)->OnDoctor1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctor1SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnDoctor1Selendok();
}
/*static void _OnDoctor1SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnDoctor1Killfocus();
}*/
/*static void _OnDoctor1KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnDoctor1Killfocus();
}*/
static long _OnDoctor1LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnDoctor1LoadData();
}
/*static void _OnDoctor1AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnDoctor1AddNew();
}*/
static void _OnNurses1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryScheduleInfoDialog* )pWnd)->OnNurses1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses1SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses1Selendok();
}
/*static void _OnNurses1SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses1Killfocus();
}*/
/*static void _OnNurses1KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses1Killfocus();
}*/
static long _OnNurses1LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses1LoadData();
}
/*static void _OnNurses1AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses1AddNew();
}*/
static void _OnNurses2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryScheduleInfoDialog* )pWnd)->OnNurses2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses2SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses2Selendok();
}
/*static void _OnNurses2SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses2Killfocus();
}*/
/*static void _OnNurses2KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses2Killfocus();
}*/
static long _OnNurses2LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses2LoadData();
}
/*static void _OnNurses2AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses2AddNew();
}*/
static void _OnNurses3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryScheduleInfoDialog* )pWnd)->OnNurses3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses3SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses3Selendok();
}
/*static void _OnNurses3SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses3Killfocus();
}*/
/*static void _OnNurses3KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses3Killfocus();
}*/
static long _OnNurses3LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses3LoadData();
}
/*static void _OnNurses3AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses3AddNew();
}*/
static void _OnNurses4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryScheduleInfoDialog* )pWnd)->OnNurses4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses4SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses4Selendok();
}
/*static void _OnNurses4SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses4Killfocus();
}*/
/*static void _OnNurses4KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses4Killfocus();
}*/
static long _OnNurses4LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses4LoadData();
}
/*static void _OnNurses4AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses4AddNew();
}*/
static void _OnNurses5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryScheduleInfoDialog* )pWnd)->OnNurses5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses5SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses5Selendok();
}
/*static void _OnNurses5SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses5Killfocus();
}*/
/*static void _OnNurses5KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses5Killfocus();
}*/
static long _OnNurses5LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses5LoadData();
}
/*static void _OnNurses5AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses5AddNew();
}*/
static void _OnNurses6SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses6SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurses6SelendokFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses6Selendok();
}
/*static void _OnNurses6SetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses6Killfocus();
}*/
/*static void _OnNurses6KillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses6Killfocus();
}*/
static long _OnNurses6LoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses6LoadData();
}
/*static void _OnNurses6AddNewFnc(CWnd *pWnd){
	((CHMSSurgeryScheduleInfoDialog *)pWnd)->OnNurses6AddNew();
}*/
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSSurgeryScheduleInfoDialog *pVw = (CHMSSurgeryScheduleInfoDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSurgeryScheduleInfoDialog *pVw = (CHMSSurgeryScheduleInfoDialog *)pWnd;
	pVw->OnCloseSelect();
}
static void _OnLockScheduleSelectFnc(CWnd *pWnd){
	 ((CHMSSurgeryScheduleInfoDialog*)pWnd)->OnLockScheduleSelect();
}
static int _OnAddHMSSurgeryScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryScheduleInfoDialog*)pWnd)->OnAddHMSSurgeryScheduleInfoDialog();
} 
static int _OnEditHMSSurgeryScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryScheduleInfoDialog*)pWnd)->OnEditHMSSurgeryScheduleInfoDialog();
} 
static int _OnDeleteHMSSurgeryScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryScheduleInfoDialog*)pWnd)->OnDeleteHMSSurgeryScheduleInfoDialog();
} 
static int _OnSaveHMSSurgeryScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryScheduleInfoDialog*)pWnd)->OnSaveHMSSurgeryScheduleInfoDialog();
} 
static int _OnCancelHMSSurgeryScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryScheduleInfoDialog*)pWnd)->OnCancelHMSSurgeryScheduleInfoDialog();
} 
CHMSSurgeryScheduleInfoDialog::CHMSSurgeryScheduleInfoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 315;
	m_nDlgHeight = 345;
	SetDefaultValues();
}
CHMSSurgeryScheduleInfoDialog::~CHMSSurgeryScheduleInfoDialog(){
}
void CHMSSurgeryScheduleInfoDialog::OnCreateComponents(){
	m_wndScheduleInfo.Create(this, _T("Schedule Information"), 5, 5, 305, 330);
	m_wndStartDateLabel.Create(this, _T("Start Date"), 10, 30, 90, 55);
	m_wndStartDate.Create(this,95, 30, 215, 55); 
	m_wndStartTime.Create(this,220, 30, 300, 55); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 10, 60, 90, 85);
	m_wndEndDate.Create(this,95, 60, 215, 85); 
	m_wndEndTime.Create(this,220, 60, 300, 85); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 90, 90, 115);
	m_wndDoctor.Create(this,95, 90, 300, 115); 
	m_wndDoctor1Label.Create(this, _T("Doctor1"), 10, 120, 90, 145);
	m_wndDoctor1.Create(this,95, 120, 300, 145); 
	m_wndNurses1Label.Create(this, _T("Nurses1"), 10, 150, 90, 175);
	m_wndNurses1.Create(this,95, 150, 300, 175); 
	m_wndNurses2Label.Create(this, _T("Nurses2"), 10, 180, 90, 205);
	m_wndNurses2.Create(this,95, 180, 300, 205); 
	m_wndNurses3Label.Create(this, _T("Nurses3"), 10, 210, 90, 235);
	m_wndNurses3.Create(this,95, 210, 300, 235); 
	m_wndNurses4Label.Create(this, _T("Nurses4"), 10, 240, 90, 265);
	m_wndNurses4.Create(this,95, 240, 300, 265); 
	m_wndNurses5Label.Create(this, _T("Nurses5"), 10, 270, 90, 295);
	m_wndNurses5.Create(this,95, 270, 300, 295); 
	m_wndNurses6Label.Create(this, _T("Nurses6"), 10, 300, 90, 325);
	m_wndNurses6.Create(this,95, 300, 300, 325); 
	m_wndUpdate.Create(this, _T("&Update"), 140, 335, 220, 360);
	m_wndClose.Create(this, _T("&Close"), 225, 335, 305, 360);
	m_wndLockSchedule.Create(this, _T("Lock Schedule"), 5, 335, 135, 360);
}
void CHMSSurgeryScheduleInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndStartDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndStartDate.SetCheckValue(true);
	//m_wndStartTime.SetMax(CTime(pMF->GetSysTime()));
	//m_wndStartTime.SetCheckValue(true);
	//m_wndEndDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndEndDate.SetCheckValue(true);
	//m_wndEndTime.SetMax(CTime(pMF->GetSysTime()));
	//m_wndEndTime.SetCheckValue(true);
	//m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	//m_wndDoctor1.SetCheckValue(true);
	m_wndDoctor1.LimitText(35);
	//m_wndNurses1.SetCheckValue(true);
	m_wndNurses1.LimitText(35);
	//m_wndNurses2.SetCheckValue(true);
	m_wndNurses2.LimitText(35);
	//m_wndNurses3.SetCheckValue(true);
	m_wndNurses3.LimitText(35);
	//m_wndNurses4.SetCheckValue(true);
	m_wndNurses4.LimitText(35);
	//m_wndNurses5.SetCheckValue(true);
	m_wndNurses5.LimitText(35);
	//m_wndNurses5.SetCheckValue(true);
	m_wndNurses6.LimitText(35);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndDoctor.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndDoctor1.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDoctor1.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndDoctor1.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndNurses1.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndNurses1.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndNurses1.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndNurses2.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndNurses2.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndNurses2.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndNurses3.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndNurses3.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndNurses3.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndNurses4.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndNurses4.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndNurses4.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);


	m_wndNurses5.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndNurses5.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndNurses5.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);

	m_wndNurses6.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndNurses6.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndNurses6.InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);

	m_hms_surgery_scheduleTbl.SetTableName(_T("hms_surgery_schedule"));
	m_hms_surgery_scheduleTbl.AddField(_T("hss_createdby"), dfText, 15);
	m_hms_surgery_scheduleTbl.AddField(_T("hss_createddate"), dfDateTime);
	m_hms_surgery_scheduleTbl.AddField(_T("hss_updatedby"), dfText, 15);
	m_hms_surgery_scheduleTbl.AddField(_T("hss_updateddate"), dfDateTime);
	m_hms_surgery_scheduleTbl.AddField(_T("hss_idx"), dfLong);
	m_hms_surgery_scheduleTbl.AddField(_T("hss_starttime"), dfDateTime);
	m_hms_surgery_scheduleTbl.AddField(_T("hss_endtime"), dfDateTime);
	m_hms_surgery_scheduleTbl.AddField(_T("hss_status"), dfText, 1);

	m_hms_surgery_schedule_lineTbl.SetTableName(_T("hms_surgery_schedule_line"));
	m_hms_surgery_schedule_lineTbl.AddField(_T("hssl_refidx"), dfLong);
	m_hms_surgery_schedule_lineTbl.AddField(_T("hssl_doctor"), dfText, 15);
	m_hms_surgery_schedule_lineTbl.AddField(_T("hssl_doctor1"), dfText, 15);
	m_hms_surgery_schedule_lineTbl.AddField(_T("hssl_nurse1"), dfText, 15);
	m_hms_surgery_schedule_lineTbl.AddField(_T("hssl_nurse2"), dfText, 15);
	m_hms_surgery_schedule_lineTbl.AddField(_T("hssl_nurse3"), dfText, 15);
	m_hms_surgery_schedule_lineTbl.AddField(_T("hssl_nurse4"), dfText, 15);
	m_hms_surgery_schedule_lineTbl.AddField(_T("hssl_nurse5"), dfText, 15);
	m_hms_surgery_schedule_lineTbl.AddField(_T("hssl_nurse6"), dfText, 15);
}
void CHMSSurgeryScheduleInfoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndStartDate.SetEvent(WE_CHANGE, _OnStartDateChangeFnc);
	//m_wndStartDate.SetEvent(WE_SETFOCUS, _OnStartDateSetfocusFnc);
	//m_wndStartDate.SetEvent(WE_KILLFOCUS, _OnStartDateKillfocusFnc);
	m_wndStartDate.SetEvent(WE_CHECKVALUE, _OnStartDateCheckValueFnc);
	//m_wndStartTime.SetEvent(WE_CHANGE, _OnStartTimeChangeFnc);
	//m_wndStartTime.SetEvent(WE_SETFOCUS, _OnStartTimeSetfocusFnc);
	//m_wndStartTime.SetEvent(WE_KILLFOCUS, _OnStartTimeKillfocusFnc);
	m_wndStartTime.SetEvent(WE_CHECKVALUE, _OnStartTimeCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	//m_wndEndTime.SetEvent(WE_CHANGE, _OnEndTimeChangeFnc);
	//m_wndEndTime.SetEvent(WE_SETFOCUS, _OnEndTimeSetfocusFnc);
	//m_wndEndTime.SetEvent(WE_KILLFOCUS, _OnEndTimeKillfocusFnc);
	m_wndEndTime.SetEvent(WE_CHECKVALUE, _OnEndTimeCheckValueFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndDoctor1.SetEvent(WE_SELENDOK, _OnDoctor1SelendokFnc);
	//m_wndDoctor1.SetEvent(WE_SETFOCUS, _OnDoctor1SetfocusFnc);
	//m_wndDoctor1.SetEvent(WE_KILLFOCUS, _OnDoctor1KillfocusFnc);
	m_wndDoctor1.SetEvent(WE_SELCHANGE, _OnDoctor1SelectChangeFnc);
	m_wndDoctor1.SetEvent(WE_LOADDATA, _OnDoctor1LoadDataFnc);
	//m_wndDoctor1.SetEvent(WE_ADDNEW, _OnDoctor1AddNewFnc);
	m_wndNurses1.SetEvent(WE_SELENDOK, _OnNurses1SelendokFnc);
	//m_wndNurses1.SetEvent(WE_SETFOCUS, _OnNurses1SetfocusFnc);
	//m_wndNurses1.SetEvent(WE_KILLFOCUS, _OnNurses1KillfocusFnc);
	m_wndNurses1.SetEvent(WE_SELCHANGE, _OnNurses1SelectChangeFnc);
	m_wndNurses1.SetEvent(WE_LOADDATA, _OnNurses1LoadDataFnc);
	//m_wndNurses1.SetEvent(WE_ADDNEW, _OnNurses1AddNewFnc);
	m_wndNurses2.SetEvent(WE_SELENDOK, _OnNurses2SelendokFnc);
	//m_wndNurses2.SetEvent(WE_SETFOCUS, _OnNurses2SetfocusFnc);
	//m_wndNurses2.SetEvent(WE_KILLFOCUS, _OnNurses2KillfocusFnc);
	m_wndNurses2.SetEvent(WE_SELCHANGE, _OnNurses2SelectChangeFnc);
	m_wndNurses2.SetEvent(WE_LOADDATA, _OnNurses2LoadDataFnc);
	//m_wndNurses2.SetEvent(WE_ADDNEW, _OnNurses2AddNewFnc);
	m_wndNurses3.SetEvent(WE_SELENDOK, _OnNurses3SelendokFnc);
	//m_wndNurses3.SetEvent(WE_SETFOCUS, _OnNurses3SetfocusFnc);
	//m_wndNurses3.SetEvent(WE_KILLFOCUS, _OnNurses3KillfocusFnc);
	m_wndNurses3.SetEvent(WE_SELCHANGE, _OnNurses3SelectChangeFnc);
	m_wndNurses3.SetEvent(WE_LOADDATA, _OnNurses3LoadDataFnc);
	//m_wndNurses3.SetEvent(WE_ADDNEW, _OnNurses3AddNewFnc);
	m_wndNurses4.SetEvent(WE_SELENDOK, _OnNurses4SelendokFnc);
	//m_wndNurses4.SetEvent(WE_SETFOCUS, _OnNurses4SetfocusFnc);
	//m_wndNurses4.SetEvent(WE_KILLFOCUS, _OnNurses4KillfocusFnc);
	m_wndNurses4.SetEvent(WE_SELCHANGE, _OnNurses4SelectChangeFnc);
	m_wndNurses4.SetEvent(WE_LOADDATA, _OnNurses4LoadDataFnc);
	//m_wndNurses4.SetEvent(WE_ADDNEW, _OnNurses4AddNewFnc);
	m_wndNurses5.SetEvent(WE_SELENDOK, _OnNurses5SelendokFnc);
	//m_wndNurses5.SetEvent(WE_SETFOCUS, _OnNurses5SetfocusFnc);
	//m_wndNurses5.SetEvent(WE_KILLFOCUS, _OnNurses5KillfocusFnc);
	m_wndNurses5.SetEvent(WE_SELCHANGE, _OnNurses5SelectChangeFnc);
	m_wndNurses5.SetEvent(WE_LOADDATA, _OnNurses5LoadDataFnc);
	//m_wndNurses5.SetEvent(WE_ADDNEW, _OnNurses5AddNewFnc);
	m_wndNurses6.SetEvent(WE_SELENDOK, _OnNurses6SelendokFnc);
	//m_wndNurses6.SetEvent(WE_SETFOCUS, _OnNurses6SetfocusFnc);
	//m_wndNurses6.SetEvent(WE_KILLFOCUS, _OnNurses6KillfocusFnc);
	m_wndNurses6.SetEvent(WE_SELCHANGE, _OnNurses6SelectChangeFnc);
	m_wndNurses6.SetEvent(WE_LOADDATA, _OnNurses6LoadDataFnc);
	//m_wndNurses6.SetEvent(WE_ADDNEW, _OnNurses6AddNewFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndLockSchedule.SetEvent(WE_CLICK, _OnLockScheduleSelectFnc);
	SetMode(GetMode());

	if (GetMode() == VM_EDIT)
		GetDataToScreen();
}
void CHMSSurgeryScheduleInfoDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndStartDate.GetDlgCtrlID(), m_szStartDate);
	DDX_TextEx(pDX, m_wndStartTime.GetDlgCtrlID(), m_szStartTime);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_TextEx(pDX, m_wndEndTime.GetDlgCtrlID(), m_szEndTime);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndDoctor1.GetDlgCtrlID(), m_szDoctor1Key);
	DDX_TextEx(pDX, m_wndNurses1.GetDlgCtrlID(), m_szNurses1Key);
	DDX_TextEx(pDX, m_wndNurses2.GetDlgCtrlID(), m_szNurses2Key);
	DDX_TextEx(pDX, m_wndNurses3.GetDlgCtrlID(), m_szNurses3Key);
	DDX_TextEx(pDX, m_wndNurses4.GetDlgCtrlID(), m_szNurses4Key);
	DDX_TextEx(pDX, m_wndNurses5.GetDlgCtrlID(), m_szNurses5Key);
	DDX_TextEx(pDX, m_wndNurses6.GetDlgCtrlID(), m_szNurses6Key);
	DDX_Check(pDX, m_wndLockSchedule.GetDlgCtrlID(), m_bLockSchedule);
}
void CHMSSurgeryScheduleInfoDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT hss_starttime AS StartTime, hss_endtime AS EndTime, hss_status AS Status, ")\
				 _T("hssl_doctor AS Doctor, hssl_doctor1 AS Doctor1, ")\
				 _T("hssl_nurse1 AS Nurse1, hssl_nurse2 AS Nurse2, ")\
				 _T("hssl_nurse3 AS Nurse3, hssl_nurse4 AS Nurse4, ")\
				 _T("hssl_nurse5 AS Nurse5, hssl_nurse6 AS Nurse6 ")\
				 _T("FROM hms_surgery_schedule ")\
				 _T("LEFT JOIN hms_surgery_schedule_line ON(hssl_refidx=hss_idx) ")\
				 _T("WHERE hss_idx=%ld"), m_nIdx);
	rs.ExecSQL(szSQL);

	CDateTime dt;
	CDate date;
	CTimeStamp ts;
	CString szTemp;

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("StartTime"), szTemp);
		dt.ParseDateTime(szTemp);
		date = dt.GetDate();
		ts = dt.GetTime();
		m_szStartDate.Format(_T("%.4d/%.2d/%.2d"), date.GetYear(), date.GetMonth(), date.GetDay());
		m_szStartTime.Format(_T("%.2d:%.2d"), ts.GetHour(), ts.GetMinute());

		rs.GetValue(_T("EndTime"), szTemp);
		dt.ParseDateTime(szTemp);
		date = dt.GetDate();
		ts = dt.GetTime();
		m_szEndDate.Format(_T("%.4d/%.2d/%.2d"), date.GetYear(), date.GetMonth(), date.GetDay());
		m_szEndTime.Format(_T("%.2d:%.2d"), ts.GetHour(), ts.GetMinute());

		rs.GetValue(_T("Doctor"), m_szDoctorKey);
		rs.GetValue(_T("Doctor1"), m_szDoctor1Key);
		rs.GetValue(_T("Nurse1"), m_szNurses1Key);
		rs.GetValue(_T("Nurse2"), m_szNurses2Key);
		rs.GetValue(_T("Nurse3"), m_szNurses3Key);
		rs.GetValue(_T("Nurse4"), m_szNurses4Key);
		rs.GetValue(_T("Nurse5"), m_szNurses5Key);
		rs.GetValue(_T("Nurse6"), m_szNurses6Key);

		rs.GetValue(_T("Status"), szTemp);
		if (szTemp == _T("O"))
			m_bLockSchedule = FALSE;
		else
			m_bLockSchedule = TRUE;

		if (szTemp != _T("O") && !pMF->CheckPermission(_T("4.1")))
			SetMode(VM_VIEW);
		else
			UpdateData(FALSE);
	}
	else
		SetMode(VM_NONE);
}
void CHMSSurgeryScheduleInfoDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if (GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(Max(hss_idx), 0)+1 AS Idx FROM hms_surgery_schedule"));
		rs.ExecSQL(szSQL);

		if (!rs.IsEOF())
			rs.GetValue(_T("Idx"), m_nIdx);

		m_hms_surgery_scheduleTbl.SetValue(_T("hss_idx"), m_nIdx);
		m_hms_surgery_schedule_lineTbl.SetValue(_T("hssl_refidx"), m_nIdx);
	}

	CString szStartTime, szEndTime;
	szStartTime.Format(_T("%s %s"), m_szStartDate, m_szStartTime);
	szEndTime.Format(_T("%s %s"), m_szEndDate, m_szEndTime);

	m_hms_surgery_scheduleTbl.SetValue(_T("hss_createdby"), pMF->GetCurrentUser());
	m_hms_surgery_scheduleTbl.SetValue(_T("hss_createddate"), pMF->GetSysDateTime());
	m_hms_surgery_scheduleTbl.SetValue(_T("hss_updatedby"), pMF->GetCurrentUser());
	m_hms_surgery_scheduleTbl.SetValue(_T("hss_updateddate"), pMF->GetSysDateTime());

	m_hms_surgery_scheduleTbl.SetValue(_T("hss_starttime"), szStartTime);
	m_hms_surgery_scheduleTbl.SetValue(_T("hss_endtime"), szEndTime);

	if (m_bLockSchedule)
		m_hms_surgery_scheduleTbl.SetValue(_T("hss_status"), _T("T"));
	else
		m_hms_surgery_scheduleTbl.SetValue(_T("hss_status"), _T("O"));

	m_hms_surgery_schedule_lineTbl.SetValue(_T("hssl_doctor"), m_szDoctorKey);
	m_hms_surgery_schedule_lineTbl.SetValue(_T("hssl_doctor1"), m_szDoctor1Key);
	m_hms_surgery_schedule_lineTbl.SetValue(_T("hssl_nurse1"), m_szNurses1Key);
	m_hms_surgery_schedule_lineTbl.SetValue(_T("hssl_nurse2"), m_szNurses2Key);
	m_hms_surgery_schedule_lineTbl.SetValue(_T("hssl_nurse3"), m_szNurses3Key);
	m_hms_surgery_schedule_lineTbl.SetValue(_T("hssl_nurse4"), m_szNurses4Key);
	m_hms_surgery_schedule_lineTbl.SetValue(_T("hssl_nurse5"), m_szNurses5Key);
	m_hms_surgery_schedule_lineTbl.SetValue(_T("hssl_nurse6"), m_szNurses6Key);
}
void CHMSSurgeryScheduleInfoDialog::SetDefaultValues()
{

	m_szStartDate.Empty();
	m_szStartTime.Empty();
	m_szEndDate.Empty();
	m_szEndTime.Empty();
	m_szDoctorKey.Empty();
	m_szDoctor1Key.Empty();
	m_szNurses1Key.Empty();
	m_szNurses2Key.Empty();
	m_szNurses3Key.Empty();
	m_szNurses4Key.Empty();
	m_szNurses5Key.Empty();
	m_szNurses6Key.Empty();
	m_bLockSchedule=FALSE;

}
int CHMSSurgeryScheduleInfoDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db);
		CDate dte;
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_szStartDate.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay());
			m_szStartTime.Format(_T("%.2d:%.2d"), 6, 59);
			dte.ParseDate(m_szStartDate);
			if (m_DateTime.GetMonth() == 12 && m_DateTime.GetDay() == 31)
			{
				m_szEndDate.Format(_T("%.4d/01/01"), m_DateTime.GetYear()+1);
			}
			else if (m_DateTime.GetDay() == dte.GetMonthLastDay())
			{
				m_szEndDate.Format(_T("%.4d/%.2d/01"), m_DateTime.GetYear(), m_DateTime.GetMonth()+1);
			}
			else
			{
				m_szEndDate.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay()+1);
			}
			m_szEndTime.Format(_T("%.2d:%.2d"), 7, 00);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
			m_wndLockSchedule.EnableWindow(FALSE);
 			break; 
 		case VM_NONE:
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1);
			m_wndLockSchedule.EnableWindow(FALSE);
 			SetDefaultValues();
			m_szStartDate.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay());
			m_szStartTime.Format(_T("%.2d:%.2d"), 6, 59);
			dte.ParseDate(m_szStartDate);
			if (m_DateTime.GetMonth() == 12 && m_DateTime.GetDay() == 31)
			{
				m_szEndDate.Format(_T("%.4d/01/01"), m_DateTime.GetYear()+1);
			}
			else if (m_DateTime.GetDay() == dte.GetMonthLastDay())
			{
				m_szEndDate.Format(_T("%.4d/%.2d/01"), m_DateTime.GetYear(), m_DateTime.GetMonth()+1);
			}
			else
			{
				m_szEndDate.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay()+1);
			}
			m_szEndTime.Format(_T("%.2d:%.2d"), 7, 00);
 			break;
 		};
		//m_wndStartDate.EnableWindow(FALSE);
		m_wndEndDate.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSSurgeryScheduleInfoDialog::OnStartDateChange(){
	
} */
/*void CHMSSurgeryScheduleInfoDialog::OnStartDateSetfocus(){
	
} */
/*void CHMSSurgeryScheduleInfoDialog::OnStartDateKillfocus(){
	
} */
int CHMSSurgeryScheduleInfoDialog::OnStartDateCheckValue(){
	//UpdateData();
	//CDate dte;
	//dte.ParseDate(m_szStartDate);
	//dte++;
	//m_szEndDate.Format(_T("%d/%d/%d"), dte.GetYear(), dte.GetMonth(), dte.GetDay());
	//UpdateData(FALSE);
	return 0;
} 
/*void CHMSSurgeryScheduleInfoDialog::OnStartTimeChange(){
	
} */
/*void CHMSSurgeryScheduleInfoDialog::OnStartTimeSetfocus(){
	
} */
/*void CHMSSurgeryScheduleInfoDialog::OnStartTimeKillfocus(){
	
} */
int CHMSSurgeryScheduleInfoDialog::OnStartTimeCheckValue(){
	return 0;
} 
/*void CHMSSurgeryScheduleInfoDialog::OnEndDateChange(){
	
} */
/*void CHMSSurgeryScheduleInfoDialog::OnEndDateSetfocus(){
	
} */
/*void CHMSSurgeryScheduleInfoDialog::OnEndDateKillfocus(){
	
} */
int CHMSSurgeryScheduleInfoDialog::OnEndDateCheckValue(){
	return 0;
} 
/*void CHMSSurgeryScheduleInfoDialog::OnEndTimeChange(){
	
} */
/*void CHMSSurgeryScheduleInfoDialog::OnEndTimeSetfocus(){
	
} */
/*void CHMSSurgeryScheduleInfoDialog::OnEndTimeKillfocus(){
	
} */
int CHMSSurgeryScheduleInfoDialog::OnEndTimeCheckValue(){
	return 0;
} 
void CHMSSurgeryScheduleInfoDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryScheduleInfoDialog::OnDoctorSelendok(){
	 
}
/*void CHMSSurgeryScheduleInfoDialog::OnDoctorSetfocus(){
	
}*/
/*void CHMSSurgeryScheduleInfoDialog::OnDoctorKillfocus(){
	
}*/
long CHMSSurgeryScheduleInfoDialog::OnDoctorLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szNurses6Key.IsEmpty())
		m_szNurses6Key = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctorKey);
	}

	m_wndDoctor.DeleteAllItems(); 	
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE su_deptid = 'B5' AND lower(su_userid) not in('%s', '%s', '%s', '%s', '%s', '%s', '%s') %s ORDER BY su_userid"), 
		         m_szNurses1Key, m_szNurses2Key,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key,m_szNurses6Key,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSurgeryScheduleInfoDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryScheduleInfoDialog::OnDoctor1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryScheduleInfoDialog::OnDoctor1Selendok(){
	 
}
/*void CHMSSurgeryScheduleInfoDialog::OnDoctor1Setfocus(){
	
}*/
/*void CHMSSurgeryScheduleInfoDialog::OnDoctor1Killfocus(){
	
}*/
long CHMSSurgeryScheduleInfoDialog::OnDoctor1LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
	{
		m_szNurses1Key = _T("''''");
	}

	if (m_szNurses2Key.IsEmpty())
	{
		m_szNurses2Key = _T("''''");
	}

	if (m_szNurses3Key.IsEmpty())
	{
		m_szNurses3Key = _T("''''");
	}

	if (m_szNurses4Key.IsEmpty())
	{
		m_szNurses4Key = _T("''''");
	}

	if (m_szNurses5Key.IsEmpty())
	{
		m_szNurses5Key = _T("''''");
	}

	if (m_szNurses6Key.IsEmpty())
	{
		m_szNurses6Key = _T("''''");
	}

	if (m_szDoctorKey.IsEmpty())
	{
		m_szDoctorKey = _T("''''");
	}

	if(m_wndDoctor1.IsSearchKey() && !m_szDoctor1Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szDoctor1Key);
	}

	//m_szNurses1Key, m_szNurses2Key,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key,m_szDoctorKey;

	m_wndDoctor1.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE su_deptid = 'B5' AND lower(su_userid) not in('%s', '%s', '%s', '%s', '%s', '%s', '%s') %s ORDER BY su_userid"), 
		         m_szNurses1Key, m_szNurses2Key,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key,m_szNurses6Key, m_szDoctorKey, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDoctor1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSurgeryScheduleInfoDialog::OnDoctor1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryScheduleInfoDialog::OnNurses1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryScheduleInfoDialog::OnNurses1Selendok(){
	 
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses1Setfocus(){
	
}*/
/*void CHMSSurgeryScheduleInfoDialog::OnNurses1Killfocus(){
	
}*/
long CHMSSurgeryScheduleInfoDialog::OnNurses1LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	//m_szNurses2Key,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key,m_szNurses6Key, m_szDoctorKey,m_szDoctor1Key;

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szNurses6Key.IsEmpty())
		m_szNurses6Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses1.IsSearchKey() && !m_szNurses1Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses1Key);
	}
	m_wndNurses1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE su_deptid = 'B5' AND lower(su_userid) not in('%s', '%s', '%s', '%s', '%s', '%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses2Key,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key,m_szNurses6Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryScheduleInfoDialog::OnNurses2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryScheduleInfoDialog::OnNurses2Selendok(){
	 
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses2Setfocus(){
	
}*/
/*void CHMSSurgeryScheduleInfoDialog::OnNurses2Killfocus(){
	
}*/
long CHMSSurgeryScheduleInfoDialog::OnNurses2LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	//m_szNurses1Key,m_szNurses3Key ,m_szNurses4Key,m_szNurses5Key,m_szNurses6Key, m_szDoctorKey,m_szDoctor1Key

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szNurses6Key.IsEmpty())
		m_szNurses6Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses2.IsSearchKey() && !m_szNurses2Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses2Key);
	}
	m_wndNurses2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE su_deptid = 'B5' AND lower(su_userid) not in('%s', '%s', '%s', '%s', '%s', '%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses1Key,m_szNurses3Key ,m_szNurses4Key,m_szNurses5Key,m_szNurses6Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryScheduleInfoDialog::OnNurses3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryScheduleInfoDialog::OnNurses3Selendok(){
	 
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses3Setfocus(){
	
}*/
/*void CHMSSurgeryScheduleInfoDialog::OnNurses3Killfocus(){
	
}*/
long CHMSSurgeryScheduleInfoDialog::OnNurses3LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szNurses6Key.IsEmpty())
		m_szNurses6Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses3.IsSearchKey() && !m_szNurses3Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses3Key);
	}
	m_wndNurses3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE su_deptid = 'B5' AND lower(su_userid) not in('%s', '%s', '%s', '%s', '%s', '%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses1Key,m_szNurses2Key ,m_szNurses4Key,m_szNurses5Key,m_szNurses6Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryScheduleInfoDialog::OnNurses4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryScheduleInfoDialog::OnNurses4Selendok(){
	 
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses4Setfocus(){
	
}*/
/*void CHMSSurgeryScheduleInfoDialog::OnNurses4Killfocus(){
	
}*/
long CHMSSurgeryScheduleInfoDialog::OnNurses4LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szNurses6Key.IsEmpty())
		m_szNurses6Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses4.IsSearchKey() && !m_szNurses4Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses4Key);
	}
	m_wndNurses4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE su_deptid = 'B5' AND lower(su_userid) not in('%s', '%s', '%s', '%s', '%s', '%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses1Key,m_szNurses2Key ,m_szNurses3Key,m_szNurses5Key,m_szNurses6Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryScheduleInfoDialog::OnNurses5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryScheduleInfoDialog::OnNurses5Selendok(){
	 
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses5Setfocus(){
	
}*/
/*void CHMSSurgeryScheduleInfoDialog::OnNurses5Killfocus(){
	
}*/
long CHMSSurgeryScheduleInfoDialog::OnNurses5LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szNurses6Key.IsEmpty())
		m_szNurses6Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses5.IsSearchKey() && !m_szNurses5Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses5Key);
	}

	//m_szNurses1Key,m_szNurses2Key ,m_szNurses3Key,m_szNurses4Key, m_szDoctorKey,m_szDoctor1Key;

	m_wndNurses5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE su_deptid = 'B5' AND lower(su_userid) not in('%s', '%s', '%s', '%s', '%s', '%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses1Key,m_szNurses2Key ,m_szNurses3Key,m_szNurses4Key,m_szNurses6Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryScheduleInfoDialog::OnNurses6SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryScheduleInfoDialog::OnNurses6Selendok(){
	 
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses6Setfocus(){
	
}*/
/*void CHMSSurgeryScheduleInfoDialog::OnNurses6Killfocus(){
	
}*/
long CHMSSurgeryScheduleInfoDialog::OnNurses6LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_szNurses1Key.IsEmpty())
		m_szNurses1Key = _T("''''");

	if (m_szNurses2Key.IsEmpty())
		m_szNurses2Key = _T("''''");

	if (m_szNurses3Key.IsEmpty())
		m_szNurses3Key = _T("''''");

	if (m_szNurses4Key.IsEmpty())
		m_szNurses4Key = _T("''''");

	if (m_szNurses5Key.IsEmpty())
		m_szNurses5Key = _T("''''");

	if (m_szDoctorKey.IsEmpty())
		m_szDoctorKey = _T("''''");

	if (m_szDoctor1Key.IsEmpty())
		m_szDoctor1Key = _T("''''");

	if(m_wndNurses6.IsSearchKey() && !m_szNurses6Key.Trim(_T("'")).IsEmpty())
	{
		szWhere.Format(_T(" AND lower(su_userid)=lower('%s') "), m_szNurses6Key);
	}

	//m_szNurses1Key,m_szNurses2Key ,m_szNurses3Key,m_szNurses4Key, m_szDoctorKey,m_szDoctor1Key;

	m_wndNurses6.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name, su_deptid as deptid FROM sys_user WHERE su_deptid = 'B5' AND lower(su_userid) not in('%s', '%s', '%s', '%s', '%s', '%s', '%s') %s ORDER BY su_userid"),
		         m_szNurses1Key,m_szNurses2Key ,m_szNurses3Key,m_szNurses4Key,m_szNurses5Key, m_szDoctorKey,m_szDoctor1Key, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurses6.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSurgeryScheduleInfoDialog::OnNurses6AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryScheduleInfoDialog::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSSurgeryScheduleInfoDialog();
} 
void CHMSSurgeryScheduleInfoDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
}
void CHMSSurgeryScheduleInfoDialog::OnLockScheduleSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSSurgeryScheduleInfoDialog::OnAddHMSSurgeryScheduleInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSurgeryScheduleInfoDialog::OnEditHMSSurgeryScheduleInfoDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgeryScheduleInfoDialog::OnDeleteHMSSurgeryScheduleInfoDialog(){
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
 		OnCancelHMSSurgeryScheduleInfoDialog(); 
 	}
	return 0;
}
int CHMSSurgeryScheduleInfoDialog::OnSaveHMSSurgeryScheduleInfoDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szSQL1; 
 	if (GetMode() == VM_ADD)
	{ 
		szSQL = m_hms_surgery_scheduleTbl.GetInsertSQL();
		szSQL1 = m_hms_surgery_schedule_lineTbl.GetInsertSQL();
 	} 
 	else if (GetMode() == VM_EDIT)
	{ 
 		CString szWhere;
		szWhere.Format(_T(" WHERE hss_idx=%ld "), m_nIdx); 
		szSQL = m_hms_surgery_scheduleTbl.GetUpdateSQL(_T("hss_idx,hss_createdby,hss_createddate")); 
 		szSQL += szWhere;
		szWhere.Format(_T(" WHERE hssl_refidx=%ld "), m_nIdx);
		szSQL1 = m_hms_surgery_schedule_lineTbl.GetUpdateSQL(_T("hssl_refidx"));
		szSQL1 += szWhere;
 	} 
    _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL);
 	if (ret > 0) 
 	{ 
 		//OnHMSSurgeryScheduleInfoDialogListLoadData(); 
 		//SetMode(VM_VIEW);
		pMF->ExecSQL(szSQL1);
		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgeryScheduleInfoDialog::OnCancelHMSSurgeryScheduleInfoDialog(){
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
int CHMSSurgeryScheduleInfoDialog::OnHMSSurgeryScheduleInfoDialogListLoadData(){
	return 0;
}

COleDateTime CHMSSurgeryScheduleInfoDialog::GetFromTime()
{
	COleDateTime dt;
	CString szTemp;

	szTemp.Format(_T("%s %s"), m_szStartDate, m_szStartTime);
	dt.ParseDateTime(szTemp);

	return dt;
}

COleDateTime CHMSSurgeryScheduleInfoDialog::GetToTime()
{
	COleDateTime dt;
	CString szTemp;

	szTemp.Format(_T("%s %s"), m_szEndDate, m_szEndTime);
	dt.ParseDateTime(szTemp);

	return dt;
}

//CString CHMSSurgeryScheduleInfoDialog::GetSubject()
//{
//	CString szValue;
//	CString szDoctors, szNurses, szNurses1;
//
//	UpdateData(TRUE);
//
//	szDoctors = _T("\x42\xE1\x63 s\x129: ");
//	szNurses = _T("\x110i\x1EC1u \x64\x1B0\x1EE1ng: ");
//	szNurses1 = _T("Y t\xE1: ");
//
//	if (!m_wndDoctor.GetCurrent(1).Trim().IsEmpty())
//		szDoctors += m_wndDoctor.GetCurrent(1);
//
//	if (!m_wndDoctor1.GetCurrent(1).Trim().IsEmpty())
//		szDoctors += _T(", ") + m_wndDoctor1.GetCurrent(1);
//
//	if (!m_wndNurses1.GetCurrent(1).Trim().IsEmpty())
//		szNurses += m_wndNurses1.GetCurrent(1);
//
//	if (!m_wndNurses2.GetCurrent(1).Trim().IsEmpty())
//		szNurses += _T(", ") + m_wndNurses2.GetCurrent(1);
//
//	if (!m_wndNurses3.GetCurrent(1).Trim().IsEmpty())
//		szNurses1 += m_wndNurses3.GetCurrent(1);
//
//	if (!m_wndNurses4.GetCurrent(1).Trim().IsEmpty())
//		szNurses1 += _T(", ") + m_wndNurses4.GetCurrent(1);
//
//	if (!m_wndNurses5.GetCurrent(1).Trim().IsEmpty())
//		szNurses1 += _T(", ") + m_wndNurses5.GetCurrent(1);
//
//	szValue = szDoctors + _T("\n") + szNurses + _T("\n") + szNurses1;
//
//	return szValue;
//}