#include "HMSRecordStorageInfo.h"
#include "MainFrm.h"
/*static void _OnAdmissionNoChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnAdmissionNoChange();
} */
/*static void _OnAdmissionNoSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnAdmissionNoSetfocus();} */ 
/*static void _OnAdmissionNoKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnAdmissionNoKillfocus();
} */
static int _OnAdmissionNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnAdmissionNoCheckValue();
} 
/*static void _OnAdmissionDateChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnAdmissionDateChange();
} */
/*static void _OnAdmissionDateSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnAdmissionDateSetfocus();} */ 
/*static void _OnAdmissionDateKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnAdmissionDateKillfocus();
} */
static int _OnAdmissionDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnAdmissionDateCheckValue();
} 
/*static void _OnDischargeDateChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnDischargeDateChange();
} */
/*static void _OnDischargeDateSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnDischargeDateSetfocus();} */ 
/*static void _OnDischargeDateKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnDischargeDateKillfocus();
} */
static int _OnDischargeDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnDischargeDateCheckValue();
} 
/*static void _OnAdmitDepartmentChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnAdmitDepartmentChange();
} */
/*static void _OnAdmitDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnAdmitDepartmentSetfocus();} */ 
/*static void _OnAdmitDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnAdmitDepartmentKillfocus();
} */
static int _OnAdmitDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnAdmitDepartmentCheckValue();
} 
/*static void _OnFromTimeChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnFromTimeChange();
} */
/*static void _OnFromTimeSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnFromTimeSetfocus();} */ 
/*static void _OnFromTimeKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnFromTimeKillfocus();
} */
static int _OnFromTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnFromTimeCheckValue();
} 
/*static void _OnToTimeChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnToTimeChange();
} */
/*static void _OnToTimeSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnToTimeSetfocus();} */ 
/*static void _OnToTimeKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnToTimeKillfocus();
} */
static int _OnToTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnToTimeCheckValue();
} 
/*static void _OnEndDepartmentChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnEndDepartmentChange();
} */
/*static void _OnEndDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnEndDepartmentSetfocus();} */ 
/*static void _OnEndDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnEndDepartmentKillfocus();
} */
static int _OnEndDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnEndDepartmentCheckValue();
} 
/*static void _OnFromTime2ChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnFromTime2Change();
} */
/*static void _OnFromTime2SetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnFromTime2Setfocus();} */ 
/*static void _OnFromTime2KillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnFromTime2Killfocus();
} */
static int _OnFromTime2CheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnFromTime2CheckValue();
} 
/*static void _OnToTime2ChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnToTime2Change();
} */
/*static void _OnToTime2SetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnToTime2Setfocus();} */ 
/*static void _OnToTime2KillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnToTime2Killfocus();
} */
static int _OnToTime2CheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnToTime2CheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnDiagnosticCheckValue();
} 
/*static void _OnArchivalNoChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnArchivalNoChange();
} */
/*static void _OnArchivalNoSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnArchivalNoSetfocus();} */ 
/*static void _OnArchivalNoKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnArchivalNoKillfocus();
} */
static int _OnArchivalNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnArchivalNoCheckValue();
} 
/*static void _OnStoredDateChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnStoredDateChange();
} */
/*static void _OnStoredDateSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnStoredDateSetfocus();} */ 
/*static void _OnStoredDateKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnStoredDateKillfocus();
} */
static int _OnStoredDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnStoredDateCheckValue();
} 
static void _OnRecordStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRecordStorageInfo* )pWnd)->OnRecordStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRecordStatusSelendokFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnRecordStatusSelendok();
}
/*static void _OnRecordStatusSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnRecordStatusKillfocus();
}*/
/*static void _OnRecordStatusKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnRecordStatusKillfocus();
}*/
static long _OnRecordStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnRecordStatusLoadData();
}
/*static void _OnRecordStatusAddNewFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnRecordStatusAddNew();
}*/
/*static void _OnRoomIDChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnRoomIDChange();
} */
/*static void _OnRoomIDSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnRoomIDSetfocus();} */ 
/*static void _OnRoomIDKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnRoomIDKillfocus();
} */
static int _OnRoomIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnRoomIDCheckValue();
} 
/*static void _OnCabinetChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnCabinetChange();
} */
/*static void _OnCabinetSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnCabinetSetfocus();} */ 
/*static void _OnCabinetKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnCabinetKillfocus();
} */
static int _OnCabinetCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnCabinetCheckValue();
} 
/*static void _OnDrawerChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnDrawerChange();
} */
/*static void _OnDrawerSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnDrawerSetfocus();} */ 
/*static void _OnDrawerKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnDrawerKillfocus();
} */
static int _OnDrawerCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnDrawerCheckValue();
} 
/*static void _OnLocationChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnLocationChange();
} */
/*static void _OnLocationSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnLocationSetfocus();} */ 
/*static void _OnLocationKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnLocationKillfocus();
} */
static int _OnLocationCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnLocationCheckValue();
} 
/*static void _OnShortcutChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnShortcutChange();
} */
/*static void _OnShortcutSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnShortcutSetfocus();} */ 
/*static void _OnShortcutKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnShortcutKillfocus();
} */
static int _OnShortcutCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnShortcutCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSRecordStorageInfo *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordStorageInfo *)pWnd)->OnNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSRecordStorageInfo *pVw = (CHMSRecordStorageInfo *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSRecordStorageInfo *pVw = (CHMSRecordStorageInfo *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSRecordStorageInfo *pVw = (CHMSRecordStorageInfo *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSRecordStorageInfo *pVw = (CHMSRecordStorageInfo *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSRecordStorageInfo *pVw = (CHMSRecordStorageInfo *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSRecordStorageInfo *pVw = (CHMSRecordStorageInfo *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSRecordStorageInfoFnc(CWnd *pWnd){
	 return ((CHMSRecordStorageInfo*)pWnd)->OnAddHMSRecordStorageInfo();
} 
static int _OnEditHMSRecordStorageInfoFnc(CWnd *pWnd){
	 return ((CHMSRecordStorageInfo*)pWnd)->OnEditHMSRecordStorageInfo();
} 
static int _OnDeleteHMSRecordStorageInfoFnc(CWnd *pWnd){
	 return ((CHMSRecordStorageInfo*)pWnd)->OnDeleteHMSRecordStorageInfo();
} 
static int _OnSaveHMSRecordStorageInfoFnc(CWnd *pWnd){
	 return ((CHMSRecordStorageInfo*)pWnd)->OnSaveHMSRecordStorageInfo();
} 
static int _OnCancelHMSRecordStorageInfoFnc(CWnd *pWnd){
	 return ((CHMSRecordStorageInfo*)pWnd)->OnCancelHMSRecordStorageInfo();
} 
CHMSRecordStorageInfo::CHMSRecordStorageInfo(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSRecordStorageInfo::~CHMSRecordStorageInfo(){
}
void CHMSRecordStorageInfo::OnCreateComponents(){
	m_wndRecordInformation.Create(this, _T("Archival Record Information"), 5, 5, 710, 260);
	m_wndAdmissionNoLabel.Create(this, _T("Admission No"), 10, 30, 100, 55);
	m_wndAdmissionNo.Create(this,105, 30, 195, 55); 
	m_wndAdmissionDateLabel.Create(this, _T("Admission Date"), 200, 30, 295, 55);
	m_wndAdmissionDate.Create(this,300, 30, 420, 55); 
	m_wndDischargeDateLabel.Create(this, _T("Out Date"), 425, 30, 485, 55);
	m_wndDischargeDate.Create(this,490, 30, 615, 55); 
	m_wndAdmitDepartmentLabel.Create(this, _T("In From Dept"), 10, 60, 100, 85);
	m_wndAdmitDepartment.Create(this,105, 60, 420, 85); 
	m_wndFromTimeLabel.Create(this, _T("From"), 425, 60, 485, 85);
	m_wndFromTime.Create(this,490, 60, 575, 85); 
	m_wndToTimeLabel.Create(this, _T("To"), 580, 60, 615, 85);
	m_wndToTime.Create(this,620, 60, 705, 85); 
	m_wndEndDepartmentLabel.Create(this, _T("Out From Dept"), 10, 90, 100, 115);
	m_wndEndDepartment.Create(this,105, 90, 420, 115); 
	m_wndFromTime2Label.Create(this, _T("From"), 425, 90, 485, 115);
	m_wndFromTime2.Create(this,490, 90, 575, 115); 
	m_wndToTime2.Create(this,620, 90, 706, 115); 
	m_wndToTime2Label.Create(this, _T("To"), 580, 90, 615, 115);
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 120, 100, 145);
	m_wndDiagnostic.Create(this,105, 120, 705, 145); 
	m_wndArchivalNoLabel.Create(this, _T("Archival No"), 10, 150, 100, 175);
	m_wndArchivalNo.Create(this,105, 150, 265, 175); 
	m_wndStoredDateLabel.Create(this, _T("Stored Date"), 270, 150, 345, 175);
	m_wndStoredDate.Create(this,350, 150, 460, 175); 
	m_wndRecordStatusLabel.Create(this, _T("Record Status"), 465, 150, 550, 175);
	m_wndRecordStatus.Create(this,555, 150, 705, 175); 
	m_wndRoomIDLabel.Create(this, _T("Room ID"), 10, 180, 100, 205);
	m_wndRoomID.Create(this,105, 180, 155, 205); 
	m_wndCabinetLabel.Create(this, _T("Cabinet"), 160, 180, 205, 205);
	m_wndCabinet.Create(this,210, 180, 265, 205); 
	m_wndDrawerLabel.Create(this, _T("Drawer"), 270, 180, 345, 205);
	m_wndDrawer.Create(this,351, 180, 406, 205); 
	m_wndLocationLabel.Create(this, _T("Location"), 410, 180, 460, 205);
	m_wndLocation.Create(this,465, 180, 550, 205); 
	m_wndShortcutLabel.Create(this, _T("Symbol"), 555, 180, 605, 205);
	m_wndShortcut.Create(this,610, 180, 705, 205); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 210, 100, 235);
	m_wndNote.Create(this,105, 210, 705, 255); 
	m_wndAdd.Create(this, _T("&Add"), 205, 265, 285, 290);
	m_wndEdit.Create(this, _T("&Edit"), 290, 265, 370, 290);
	m_wndDelete.Create(this, _T("&Delete"), 375, 265, 455, 290);
	m_wndSave.Create(this, _T("&Save"), 460, 265, 540, 290);
	m_wndCancel.Create(this, _T("&Cancel"), 545, 265, 625, 290);
	m_wndPrint.Create(this, _T("&Print Report"), 630, 265, 710, 290);

}
void CHMSRecordStorageInfo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdmissionNo.SetLimitText(1024);
	m_wndAdmissionNo.SetCheckValue(true);
	m_wndAdmissionDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmissionDate.SetCheckValue(true);
	m_wndDischargeDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDischargeDate.SetCheckValue(true);
	m_wndAdmitDepartment.SetLimitText(1024);
	m_wndAdmitDepartment.SetCheckValue(true);
	m_wndFromTime.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromTime.SetCheckValue(true);
	m_wndToTime.SetMax(CDate(pMF->GetSysDate()));
	m_wndToTime.SetCheckValue(true);
	m_wndEndDepartment.SetLimitText(1024);
	m_wndEndDepartment.SetCheckValue(true);
	m_wndFromTime2.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromTime2.SetCheckValue(true);
	m_wndToTime2.SetMax(CDate(pMF->GetSysDate()));
	m_wndToTime2.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(1024);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndArchivalNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndArchivalNo.SetTextColor(RGB(0, 0, 255));
	m_wndArchivalNo.SetLimitText(35);
	m_wndArchivalNo.SetCheckValue(true);

	//m_wndStoredDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndStoredDate.SetCheckValue(true);
	m_wndRecordStatus.SetCheckValue(true);
	m_wndRecordStatus.LimitText(1024);
	m_wndRoomID.SetLimitText(1024);
	//m_wndRoomID.SetCheckValue(true);
	m_wndCabinet.SetLimitText(1024);
	//m_wndCabinet.SetCheckValue(true);
	m_wndDrawer.SetLimitText(1024);
	m_wndDrawer.SetCheckValue(true);
	m_wndLocation.SetLimitText(1024);
	//m_wndLocation.SetCheckValue(true);
	m_wndShortcut.SetLimitText(1024);
	//m_wndShortcut.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	//m_wndNote.SetCheckValue(true);

	m_wndRecordStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRecordStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_hms_patient_recordTbl.SetTableName(_T("hms_patient_record"));
	m_hms_patient_recordTbl.AddField(_T("hpr_createdby"), dfText, 15); 
	m_hms_patient_recordTbl.AddField(_T("hpr_createddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_updatedby"), dfText, 15); 
	m_hms_patient_recordTbl.AddField(_T("hpr_updateddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_patientno"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_docno"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_idx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_docrec"), dfText, 35); 
	m_hms_patient_recordTbl.AddField(_T("hpr_admitdeptid"), dfText, 7); 
	m_hms_patient_recordTbl.AddField(_T("hpr_enddeptid"), dfText, 7); 
	m_hms_patient_recordTbl.AddField(_T("hpr_admitdate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_enddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_storeddate"), dfDateTime); 
	m_hms_patient_recordTbl.AddField(_T("hpr_status"), dfText, 1); 
	m_hms_patient_recordTbl.AddField(_T("hpr_roomidx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_cabinetidx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_draweridx"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_position"), dfLong); 
	m_hms_patient_recordTbl.AddField(_T("hpr_shortcut"), dfText, 13); 
	m_hms_patient_recordTbl.AddField(_T("hpr_comment"), dfText, 512); 
	m_hms_patient_recordTbl.AddField(_T("hpr_reverse"), dfText, 1); 
	m_hms_patient_recordTbl.AddField(_T("hpr_rvsreason"), dfText, 512);
	m_hms_patient_recordTbl.AddField(_T("hpr_class"), dfText, 1);
	m_hms_patient_recordTbl.AddField(_T("hpr_type"), dfText, 1);
	m_hms_patient_recordTbl.AddField(_T("hpr_dead"), dfText, 1);



}
void CHMSRecordStorageInfo::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndAdmissionNo.SetEvent(WE_CHANGE, _OnAdmissionNoChangeFnc);
	//m_wndAdmissionNo.SetEvent(WE_SETFOCUS, _OnAdmissionNoSetfocusFnc);
	//m_wndAdmissionNo.SetEvent(WE_KILLFOCUS, _OnAdmissionNoKillfocusFnc);
	m_wndAdmissionNo.SetEvent(WE_CHECKVALUE, _OnAdmissionNoCheckValueFnc);
	//m_wndAdmissionDate.SetEvent(WE_CHANGE, _OnAdmissionDateChangeFnc);
	//m_wndAdmissionDate.SetEvent(WE_SETFOCUS, _OnAdmissionDateSetfocusFnc);
	//m_wndAdmissionDate.SetEvent(WE_KILLFOCUS, _OnAdmissionDateKillfocusFnc);
	m_wndAdmissionDate.SetEvent(WE_CHECKVALUE, _OnAdmissionDateCheckValueFnc);
	//m_wndDischargeDate.SetEvent(WE_CHANGE, _OnDischargeDateChangeFnc);
	//m_wndDischargeDate.SetEvent(WE_SETFOCUS, _OnDischargeDateSetfocusFnc);
	//m_wndDischargeDate.SetEvent(WE_KILLFOCUS, _OnDischargeDateKillfocusFnc);
	m_wndDischargeDate.SetEvent(WE_CHECKVALUE, _OnDischargeDateCheckValueFnc);
	//m_wndAdmitDepartment.SetEvent(WE_CHANGE, _OnAdmitDepartmentChangeFnc);
	//m_wndAdmitDepartment.SetEvent(WE_SETFOCUS, _OnAdmitDepartmentSetfocusFnc);
	//m_wndAdmitDepartment.SetEvent(WE_KILLFOCUS, _OnAdmitDepartmentKillfocusFnc);
	m_wndAdmitDepartment.SetEvent(WE_CHECKVALUE, _OnAdmitDepartmentCheckValueFnc);
	//m_wndFromTime.SetEvent(WE_CHANGE, _OnFromTimeChangeFnc);
	//m_wndFromTime.SetEvent(WE_SETFOCUS, _OnFromTimeSetfocusFnc);
	//m_wndFromTime.SetEvent(WE_KILLFOCUS, _OnFromTimeKillfocusFnc);
	m_wndFromTime.SetEvent(WE_CHECKVALUE, _OnFromTimeCheckValueFnc);
	//m_wndToTime.SetEvent(WE_CHANGE, _OnToTimeChangeFnc);
	//m_wndToTime.SetEvent(WE_SETFOCUS, _OnToTimeSetfocusFnc);
	//m_wndToTime.SetEvent(WE_KILLFOCUS, _OnToTimeKillfocusFnc);
	m_wndToTime.SetEvent(WE_CHECKVALUE, _OnToTimeCheckValueFnc);
	//m_wndEndDepartment.SetEvent(WE_CHANGE, _OnEndDepartmentChangeFnc);
	//m_wndEndDepartment.SetEvent(WE_SETFOCUS, _OnEndDepartmentSetfocusFnc);
	//m_wndEndDepartment.SetEvent(WE_KILLFOCUS, _OnEndDepartmentKillfocusFnc);
	m_wndEndDepartment.SetEvent(WE_CHECKVALUE, _OnEndDepartmentCheckValueFnc);
	//m_wndFromTime2.SetEvent(WE_CHANGE, _OnFromTime2ChangeFnc);
	//m_wndFromTime2.SetEvent(WE_SETFOCUS, _OnFromTime2SetfocusFnc);
	//m_wndFromTime2.SetEvent(WE_KILLFOCUS, _OnFromTime2KillfocusFnc);
	m_wndFromTime2.SetEvent(WE_CHECKVALUE, _OnFromTime2CheckValueFnc);
	//m_wndToTime2.SetEvent(WE_CHANGE, _OnToTime2ChangeFnc);
	//m_wndToTime2.SetEvent(WE_SETFOCUS, _OnToTime2SetfocusFnc);
	//m_wndToTime2.SetEvent(WE_KILLFOCUS, _OnToTime2KillfocusFnc);
	m_wndToTime2.SetEvent(WE_CHECKVALUE, _OnToTime2CheckValueFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	//m_wndArchivalNo.SetEvent(WE_CHANGE, _OnArchivalNoChangeFnc);
	//m_wndArchivalNo.SetEvent(WE_SETFOCUS, _OnArchivalNoSetfocusFnc);
	//m_wndArchivalNo.SetEvent(WE_KILLFOCUS, _OnArchivalNoKillfocusFnc);
	m_wndArchivalNo.SetEvent(WE_CHECKVALUE, _OnArchivalNoCheckValueFnc);
	//m_wndStoredDate.SetEvent(WE_CHANGE, _OnStoredDateChangeFnc);
	//m_wndStoredDate.SetEvent(WE_SETFOCUS, _OnStoredDateSetfocusFnc);
	//m_wndStoredDate.SetEvent(WE_KILLFOCUS, _OnStoredDateKillfocusFnc);
	m_wndStoredDate.SetEvent(WE_CHECKVALUE, _OnStoredDateCheckValueFnc);
	m_wndRecordStatus.SetEvent(WE_SELENDOK, _OnRecordStatusSelendokFnc);
	//m_wndRecordStatus.SetEvent(WE_SETFOCUS, _OnRecordStatusSetfocusFnc);
	//m_wndRecordStatus.SetEvent(WE_KILLFOCUS, _OnRecordStatusKillfocusFnc);
	m_wndRecordStatus.SetEvent(WE_SELCHANGE, _OnRecordStatusSelectChangeFnc);
	m_wndRecordStatus.SetEvent(WE_LOADDATA, _OnRecordStatusLoadDataFnc);
	//m_wndRecordStatus.SetEvent(WE_ADDNEW, _OnRecordStatusAddNewFnc);
	//m_wndRoomID.SetEvent(WE_CHANGE, _OnRoomIDChangeFnc);
	//m_wndRoomID.SetEvent(WE_SETFOCUS, _OnRoomIDSetfocusFnc);
	//m_wndRoomID.SetEvent(WE_KILLFOCUS, _OnRoomIDKillfocusFnc);
	m_wndRoomID.SetEvent(WE_CHECKVALUE, _OnRoomIDCheckValueFnc);
	//m_wndCabinet.SetEvent(WE_CHANGE, _OnCabinetChangeFnc);
	//m_wndCabinet.SetEvent(WE_SETFOCUS, _OnCabinetSetfocusFnc);
	//m_wndCabinet.SetEvent(WE_KILLFOCUS, _OnCabinetKillfocusFnc);
	m_wndCabinet.SetEvent(WE_CHECKVALUE, _OnCabinetCheckValueFnc);
	//m_wndDrawer.SetEvent(WE_CHANGE, _OnDrawerChangeFnc);
	//m_wndDrawer.SetEvent(WE_SETFOCUS, _OnDrawerSetfocusFnc);
	//m_wndDrawer.SetEvent(WE_KILLFOCUS, _OnDrawerKillfocusFnc);
	m_wndDrawer.SetEvent(WE_CHECKVALUE, _OnDrawerCheckValueFnc);
	//m_wndLocation.SetEvent(WE_CHANGE, _OnLocationChangeFnc);
	//m_wndLocation.SetEvent(WE_SETFOCUS, _OnLocationSetfocusFnc);
	//m_wndLocation.SetEvent(WE_KILLFOCUS, _OnLocationKillfocusFnc);
	m_wndLocation.SetEvent(WE_CHECKVALUE, _OnLocationCheckValueFnc);
	//m_wndShortcut.SetEvent(WE_CHANGE, _OnShortcutChangeFnc);
	//m_wndShortcut.SetEvent(WE_SETFOCUS, _OnShortcutSetfocusFnc);
	//m_wndShortcut.SetEvent(WE_KILLFOCUS, _OnShortcutKillfocusFnc);
	m_wndShortcut.SetEvent(WE_CHECKVALUE, _OnShortcutCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSRecordStorageInfoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSRecordStorageInfoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSRecordStorageInfoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSRecordStorageInfoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSRecordStorageInfoFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSRecordStorageInfo::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAdmissionNo.GetDlgCtrlID(), m_szAdmissionNo);
	DDX_TextEx(pDX, m_wndAdmissionDate.GetDlgCtrlID(), m_szAdmissionDate);
	DDX_TextEx(pDX, m_wndDischargeDate.GetDlgCtrlID(), m_szDischargeDate);
	DDX_Text(pDX, m_wndAdmitDepartment.GetDlgCtrlID(), m_szAdmitDepartment);
	DDX_TextEx(pDX, m_wndFromTime.GetDlgCtrlID(), m_szFromTime);
	DDX_TextEx(pDX, m_wndToTime.GetDlgCtrlID(), m_szToTime);
	DDX_Text(pDX, m_wndEndDepartment.GetDlgCtrlID(), m_szEndDepartment);
	DDX_TextEx(pDX, m_wndFromTime2.GetDlgCtrlID(), m_szFromTime2);
	DDX_TextEx(pDX, m_wndToTime2.GetDlgCtrlID(), m_szToTime2);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_Text(pDX, m_wndArchivalNo.GetDlgCtrlID(), m_szArchivalNo);
	DDX_TextEx(pDX, m_wndStoredDate.GetDlgCtrlID(), m_szStoredDate);
	DDX_TextEx(pDX, m_wndRecordStatus.GetDlgCtrlID(), m_szRecordStatusKey);
	DDX_Text(pDX, m_wndRoomID.GetDlgCtrlID(), m_nRoomID);
	DDX_Text(pDX, m_wndCabinet.GetDlgCtrlID(), m_nCabinet);
	DDX_Text(pDX, m_wndDrawer.GetDlgCtrlID(), m_nDrawer);
	DDX_Text(pDX, m_wndLocation.GetDlgCtrlID(), m_nLocation);
	DDX_Text(pDX, m_wndShortcut.GetDlgCtrlID(), m_szShortcut);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSRecordStorageInfo::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("AdmissionNo")] =  m_szAdmissionNo;
	m_jData[_T("AdmissionDate")] =  m_szAdmissionDate;
	m_jData[_T("DischargeDate")] =  m_szDischargeDate;
	m_jData[_T("AdmitDepartment")] =  m_szAdmitDepartment;
	m_jData[_T("FromTime")] =  m_szFromTime;
	m_jData[_T("ToTime")] =  m_szToTime;
	m_jData[_T("EndDepartment")] =  m_szEndDepartment;
	m_jData[_T("FromTime2")] =  m_szFromTime2;
	m_jData[_T("ToTime2")] =  m_szToTime2;
	m_jData[_T("Diagnostic")] =  m_szDiagnostic;
	m_jData[_T("ArchivalNo")] =  m_szArchivalNo;
	m_jData[_T("StoredDate")] =  m_szStoredDate;
	m_jData[_T("RecordStatus")] =  m_szRecordStatusKey;
	m_jData[_T("RoomID")] =  m_nRoomID;
	m_jData[_T("Cabinet")] =  m_nCabinet;
	m_jData[_T("Drawer")] =  m_nDrawer;
	m_jData[_T("Location")] =  m_nLocation;
	m_jData[_T("Shortcut")] =  m_szShortcut;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("AdmissionNo")].GetValue(m_szAdmissionNo);
	m_jData[_T("AdmissionDate")].GetValue(m_szAdmissionDate);
	m_jData[_T("DischargeDate")].GetValue(m_szDischargeDate);
	m_jData[_T("AdmitDepartment")].GetValue(m_szAdmitDepartment);
	m_jData[_T("FromTime")].GetValue(m_szFromTime);
	m_jData[_T("ToTime")].GetValue(m_szToTime);
	m_jData[_T("EndDepartment")].GetValue(m_szEndDepartment);
	m_jData[_T("FromTime2")].GetValue(m_szFromTime2);
	m_jData[_T("ToTime2")].GetValue(m_szToTime2);
	m_jData[_T("Diagnostic")].GetValue(m_szDiagnostic);
	m_jData[_T("ArchivalNo")].GetValue(m_szArchivalNo);
	m_jData[_T("StoredDate")].GetValue(m_szStoredDate);
	m_jData[_T("RecordStatus")].GetValue(m_szRecordStatusKey);
	m_jData[_T("RoomID")].GetValue(m_nRoomID);
	m_jData[_T("Cabinet")].GetValue(m_nCabinet);
	m_jData[_T("Drawer")].GetValue(m_nDrawer);
	m_jData[_T("Location")].GetValue(m_nLocation);
	m_jData[_T("Shortcut")].GetValue(m_szShortcut);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSRecordStorageInfo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nRefidx =0;
	m_nDocNo= pMF->m_nDocumentNo;
	szSQL.Format(_T("SELECT * FROM hms_patient_record WHERE hpr_docno=%ld"), m_nDocNo);
	rs.ExecSQL(szSQL);	
	if (rs.GetRecordCount() <= 0)
	{
		SetDefaultValues();
		//m_szArchivalNo.Empty();
		LoadDataToScreen();
		return;
	}		
	else
	{
		if (m_szClass.Trim() == _T("E"))
		{
			szSQL.Format(_T("SELECT hpr_idx, hpr_docno AS DocumentNo, ")\
						_T("hpr_patientno AS PatientNo, ")\
						_T("trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS PatientName, ")\
						_T("hms_getage(TRUNC(hd_admitdate), hp_birthdate) as Age, ")\
						_T("(SELECT ss_desc FROM sys_sel WHERE ss_code=hp_sex AND ss_id='sys_sex' AND rownum <=1) AS Sex, ")\
						_T("hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS Address, ")\
						_T("(SELECT ss_desc FROM sys_sel WHERE ss_id='sys_occupation' AND ss_code=CAST(hp_occupation AS VARCHAR(10)) AND rownum <=1) AS Occupation, ")\
						_T("(SELECT ho_desc FROM hms_object WHERE ho_id=hd_object AND rownum <=1) AS ObjectName, ")\
						_T("'' AS RecordNo, ")\
						_T(" hd_result as result, ") \
						_T("hpr_admitdate AS AdmissionDate, ")\
						_T("hpr_enddate AS OutDate, hpr_admitdeptid, hpr_enddeptid, ")\
						_T("(SELECT sd_name FROM sys_dept WHERE sd_id=hpr_admitdeptid AND rownum <=1) AS InFromDept, ")\
						_T("(SELECT sd_name FROM sys_dept WHERE sd_id=hpr_enddeptid AND rownum <=1) AS OutFromDept, ")\
						_T("(SELECT TRUNC(hd_admitdate) FROM hms_doc WHERE hd_docno=hpr_docno AND hd_admitdept=hpr_admitdeptid AND rownum <=1) AS fdate1, ")\
						_T("(SELECT TRUNC(hd_enddate) FROM hms_doc WHERE hd_docno=hpr_docno AND hd_admitdept=hpr_admitdeptid AND rownum <=1) AS tdate1, ")\
						_T("(SELECT TRUNC(hd_admitdate) FROM hms_doc WHERE hd_docno=hpr_docno AND hd_enddept=hpr_enddeptid AND rownum <=1) AS fdate2, ")\
						_T("(SELECT TRUNC(hd_enddate) FROM hms_doc WHERE hd_docno=hpr_docno AND hd_enddept=hpr_enddeptid AND rownum <=1) AS tdate2, ")\
						_T("hd_diagnostic AS Diagnostic, ")\
						_T("hpr_docrec, hpr_storeddate, hpr_status, hpr_roomidx, hpr_cabinetidx, hpr_draweridx, hpr_position, hpr_shortcut, hpr_comment ")\
						_T("FROM hms_patient_record ")\
						_T("LEFT JOIN hms_doc ON(hpr_docno=hd_docno) ")\
						_T("LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ")\
						_T("WHERE hpr_docno=%ld"), m_nDocNo);
		}
		else
		{
			szSQL.Format(_T("SELECT hpr_idx, hpr_docno AS DocumentNo, ")\
						_T(" hpr_patientno AS PatientNo, ")\
						_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS PatientName, ")\
						_T(" hms_getage(TRUNC(hd_admitdate), hp_birthdate) as Age, ")\
						_T(" (SELECT ss_desc FROM sys_sel WHERE ss_code=hp_sex AND ss_id='sys_sex' AND rownum <=1) AS Sex, ")\
						_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS Address, ")\
						_T(" (SELECT ss_desc FROM sys_sel WHERE ss_id='sys_occupation' AND ss_code=CAST(hp_occupation AS VARCHAR(10)) AND rownum <=1) AS Occupation, ")\
						_T(" (SELECT ho_desc FROM hms_object WHERE ho_id=hd_object AND rownum <=1) AS ObjectName, ")\
						_T(" hcr_recordno AS RecordNo, ")\
						_T(" hcr_result as result, ") \
						_T(" hpr_admitdate AS AdmissionDate, ")\
						_T(" hpr_enddate AS OutDate, hpr_admitdeptid, hpr_enddeptid, ")\
						_T(" (SELECT sd_name FROM sys_dept WHERE sd_id=hpr_admitdeptid AND rownum <=1) AS InFromDept, ")\
						_T(" (SELECT sd_name FROM sys_dept WHERE sd_id=hpr_enddeptid AND rownum <=1) AS OutFromDept, ")\
						_T(" (SELECT max(htr_idx) FROM hms_treatment_record WHERE htr_docno=hcr_docno AND htr_deptid=hcr_admitdept AND rownum <=1) AS refidx, ")\
						_T(" (SELECT min(TRUNC(htr_admitdate)) FROM hms_treatment_record WHERE htr_docno=hpr_docno AND htr_deptid=hpr_admitdeptid AND rownum <=1) AS fdate1, ")\
						_T(" (SELECT max(TRUNC(htr_dischargedate)) FROM hms_treatment_record WHERE htr_docno=hpr_docno AND htr_deptid=hpr_admitdeptid AND rownum <=1) AS tdate1, ")\
						_T(" (SELECT min(TRUNC(htr_admitdate)) FROM hms_treatment_record WHERE htr_docno=hpr_docno AND htr_deptid=hpr_enddeptid AND rownum <=1) AS fdate2, ")\
						_T(" (SELECT max(TRUNC(htr_dischargedate)) FROM hms_treatment_record WHERE htr_docno=hpr_docno AND htr_deptid=hpr_enddeptid AND rownum <=1) AS tdate2, ")\
						_T("hcr_maindisease AS Diagnostic, ")\
						_T("hpr_docrec, hpr_storeddate, hpr_status, hpr_roomidx, hpr_cabinetidx, hpr_draweridx, hpr_position, hpr_shortcut, hpr_comment ")\
						_T("FROM hms_patient_record ")\
						_T("LEFT JOIN hms_doc ON(hpr_docno=hd_docno) ")\
						_T("LEFT JOIN hms_patient ON(hd_patientno=hp_patientno) ")\
						_T("LEFT JOIN hms_clinical_record ON(hcr_docno=hpr_docno) ")\
						_T("WHERE hpr_docno=%ld"), m_nDocNo);
		}
		//_msg(_T("%s"), szSQL);
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			m_nIdx = ToLong(rs.GetValue(_T("hpr_idx")));
			rs.GetValue(_T("DocumentNo"), m_nDocNo);
			rs.GetValue(_T("PatientNo"), m_szPatientNo);
			
			rs.GetValue(_T("RecordNo"), m_szAdmissionNo);
			m_szAdmitNo = m_szAdmissionNo;
			rs.GetValue(_T("AdmissionDate"), m_szAdmissionDate);
			rs.GetValue(_T("OutDate"), m_szDischargeDate);
			rs.GetValue(_T("hpr_admitdeptid"), m_szAdmitDept);
			rs.GetValue(_T("hpr_enddeptid"), m_szDischargeDept);
			rs.GetValue(_T("InFromDept"), m_szAdmitDepartment);
			rs.GetValue(_T("OutFromDept"), m_szEndDepartment);
			rs.GetValue(_T("fdate1"), m_szFromTime);
			rs.GetValue(_T("tdate1"), m_szToTime);
			rs.GetValue(_T("fdate2"), m_szFromTime2);
			rs.GetValue(_T("tdate2"), m_szToTime2);
			rs.GetValue(_T("Diagnostic"), m_szDiagnostic);
			rs.GetValue(_T("hpr_docrec"), m_szArchivalNo);
			m_szArchivalNoOld = m_szArchivalNo;

			rs.GetValue(_T("Result"), tmpStr);
			m_szPatientDead = _T("N");
			if(tmpStr == _T("5") || tmpStr == _T("6")){
				m_szPatientDead = _T("Y");
			}

			//rs.GetValue(_T("hpr_admitdeptid"), m_szAdmitDepartment);
			//rs.GetValue(_T("hpr_enddeptid"), m_szEndDepartment);
			//rs.GetValue(_T("hpr_admitdate"), m_szAdmissionDate);
			//rs.GetValue(_T("hpr_enddate"), m_szDischargeDate);
			rs.GetValue(_T("hpr_storeddate"), m_szStoredDate);
			rs.GetValue(_T("hpr_status"), m_szRecordStatusKey);
			rs.GetValue(_T("hpr_roomidx"), m_nRoomID);
			rs.GetValue(_T("hpr_cabinetidx"), m_nCabinet);
			rs.GetValue(_T("hpr_draweridx"), m_nDrawer);
			rs.GetValue(_T("hpr_position"), m_nLocation);
			rs.GetValue(_T("hpr_shortcut"), m_szShortcut);
			rs.GetValue(_T("hpr_comment"), m_szNote);
			rs.GetValue(_T("refidx"), nRefidx);

			m_nOutPatient = TRUE;

		
//			m_wndTreatmentType.SetTextColor(RGB(0, 0,0));
			szSQL.Format(_T("SELECT htr_outpatient FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d "), m_nDocNo, nRefidx);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("htr_outpatient"), m_szTreatmentTypeID);
			/*if(m_szTreatmentTypeID == _T("Y"))
			{
				m_szTreatmentType.Format(_T("Bệnh án điều trị ngoại trú"));				
			}*/
			
			/*if(m_szPatientDead == _T("Y")){
				m_wndTreatmentType.SetTextColor(RGB(255, 0,0));
			}*/


			SetMode(VM_VIEW);
		}
		else
		{
			m_nOutPatient = FALSE;
			SetMode(VM_NONE);
		}
	}

}
void CHMSRecordStorageInfo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_hms_patient_recordTbl.SetValue(_T("hpr_createdby"), pMF->GetCurrentUser());
	m_hms_patient_recordTbl.SetValue(_T("hpr_createddate"), pMF->GetSysDateTime());
	m_hms_patient_recordTbl.SetValue(_T("hpr_updatedby"), pMF->GetCurrentUser());
	m_hms_patient_recordTbl.SetValue(_T("hpr_updateddate"), pMF->GetSysDateTime());
	m_hms_patient_recordTbl.SetValue(_T("hpr_patientno"), m_szPatientNo);
	m_hms_patient_recordTbl.SetValue(_T("hpr_docno"), m_nDocNo);
	m_hms_patient_recordTbl.SetValue(_T("hpr_docrec"), m_szArchivalNo);
	m_hms_patient_recordTbl.SetValue(_T("hpr_admitdeptid"), m_szAdmitDept);
	m_hms_patient_recordTbl.SetValue(_T("hpr_enddeptid"), m_szDischargeDept);
	m_hms_patient_recordTbl.SetValue(_T("hpr_admitdate"), m_szAdmissionDate);
	m_hms_patient_recordTbl.SetValue(_T("hpr_enddate"), m_szDischargeDate);
	m_hms_patient_recordTbl.SetValue(_T("hpr_storeddate"), m_szStoredDate);
	m_hms_patient_recordTbl.SetValue(_T("hpr_status"), m_szRecordStatusKey);
	m_hms_patient_recordTbl.SetValue(_T("hpr_roomidx"), m_nRoomID);
	m_hms_patient_recordTbl.SetValue(_T("hpr_cabinetidx"), m_nCabinet);
	m_hms_patient_recordTbl.SetValue(_T("hpr_draweridx"), m_nDrawer);
	m_hms_patient_recordTbl.SetValue(_T("hpr_position"), m_nLocation);
	m_hms_patient_recordTbl.SetValue(_T("hpr_shortcut"), m_szShortcut);
	m_hms_patient_recordTbl.SetValue(_T("hpr_comment"), m_szNote);
	m_hms_patient_recordTbl.SetValue(_T("hpr_class"), m_szClass);
	m_hms_patient_recordTbl.SetValue(_T("hpr_type"), m_szTreatmentTypeID);
	m_hms_patient_recordTbl.SetValue(_T("hpr_dead"), m_szPatientDead);

}
void CHMSRecordStorageInfo::SetDefaultValues(){

	m_szAdmissionNo.Empty();
	m_szAdmissionDate.Empty();
	m_szDischargeDate.Empty();
	m_szAdmitDepartment.Empty();
	m_szFromTime.Empty();
	m_szToTime.Empty();
	m_szEndDepartment.Empty();
	m_szFromTime2.Empty();
	m_szToTime2.Empty();
	m_szDiagnostic.Empty();
	m_szArchivalNo.Empty();
	m_szStoredDate.Empty();
	m_szRecordStatusKey.Empty();
	m_nRoomID=0;
	m_nCabinet=0;
	m_nDrawer=0;
	m_nLocation=0;
	m_szShortcut.Empty();
	m_szNote.Empty();

}
int CHMSRecordStorageInfo::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			//SetDefaultValues();
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
/*void CHMSRecordStorageInfo::OnAdmissionNoChange(){
	
} */
/*void CHMSRecordStorageInfo::OnAdmissionNoSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnAdmissionNoKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnAdmissionNoCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnAdmissionDateChange(){
	
} */
/*void CHMSRecordStorageInfo::OnAdmissionDateSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnAdmissionDateKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnAdmissionDateCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnDischargeDateChange(){
	
} */
/*void CHMSRecordStorageInfo::OnDischargeDateSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnDischargeDateKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnDischargeDateCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnAdmitDepartmentChange(){
	
} */
/*void CHMSRecordStorageInfo::OnAdmitDepartmentSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnAdmitDepartmentKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnAdmitDepartmentCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnFromTimeChange(){
	
} */
/*void CHMSRecordStorageInfo::OnFromTimeSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnFromTimeKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnFromTimeCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnToTimeChange(){
	
} */
/*void CHMSRecordStorageInfo::OnToTimeSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnToTimeKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnToTimeCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnEndDepartmentChange(){
	
} */
/*void CHMSRecordStorageInfo::OnEndDepartmentSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnEndDepartmentKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnEndDepartmentCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnFromTime2Change(){
	
} */
/*void CHMSRecordStorageInfo::OnFromTime2Setfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnFromTime2Killfocus(){
	
} */
int CHMSRecordStorageInfo::OnFromTime2CheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnToTime2Change(){
	
} */
/*void CHMSRecordStorageInfo::OnToTime2Setfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnToTime2Killfocus(){
	
} */
int CHMSRecordStorageInfo::OnToTime2CheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnDiagnosticChange(){
	
} */
/*void CHMSRecordStorageInfo::OnDiagnosticSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnDiagnosticKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnDiagnosticCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnArchivalNoChange(){
	
} */
/*void CHMSRecordStorageInfo::OnArchivalNoSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnArchivalNoKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnArchivalNoCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnStoredDateChange(){
	
} */
/*void CHMSRecordStorageInfo::OnStoredDateSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnStoredDateKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnStoredDateCheckValue(){
	return 0;
} 
void CHMSRecordStorageInfo::OnRecordStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRecordStorageInfo::OnRecordStatusSelendok(){
	 
}
/*void CHMSRecordStorageInfo::OnRecordStatusSetfocus(){
	
}*/
/*void CHMSRecordStorageInfo::OnRecordStatusKillfocus(){
	
}*/
long CHMSRecordStorageInfo::OnRecordStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndRecordStatus.IsSearchKey() && !m_szRecordStatusKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szRecordStatusKey);
	}
	m_wndRecordStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel ")\
		         _T("WHERE ss_id='hms_patientrecord_status' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRecordStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSRecordStorageInfo::OnRecordStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRecordStorageInfo::OnRoomIDChange(){
	
} */
/*void CHMSRecordStorageInfo::OnRoomIDSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnRoomIDKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnRoomIDCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnCabinetChange(){
	
} */
/*void CHMSRecordStorageInfo::OnCabinetSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnCabinetKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnCabinetCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnDrawerChange(){
	
} */
/*void CHMSRecordStorageInfo::OnDrawerSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnDrawerKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnDrawerCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnLocationChange(){
	
} */
/*void CHMSRecordStorageInfo::OnLocationSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnLocationKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnLocationCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnShortcutChange(){
	
} */
/*void CHMSRecordStorageInfo::OnShortcutSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnShortcutKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnShortcutCheckValue(){
	return 0;
} 
/*void CHMSRecordStorageInfo::OnNoteChange(){
	
} */
/*void CHMSRecordStorageInfo::OnNoteSetfocus(){
	
} */
/*void CHMSRecordStorageInfo::OnNoteKillfocus(){
	
} */
int CHMSRecordStorageInfo::OnNoteCheckValue(){
	return 0;
} 
void CHMSRecordStorageInfo::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	OnAddHMSRecordStorageInfo();

	szSQL.Format(_T("SELECT hd_suggestion AS Suggestion FROM hms_doc WHERE hd_docno=%ld"), m_nDocNo);
		rs.ExecSQL(szSQL);
		
		if (!rs.IsEOF())
		{
			if (rs.GetValue(_T("Suggestion")).Trim() == _T("D"))
				m_szClass = _T("I");
			else
				m_szClass = _T("E");


			//if (pMF->m_szIDCode.Trim().GetLength() >= 1)
			{
				CRecord rsp(&pMF->m_db);
				szSQL.Format(_T("SELECT hms_patientrec_calcid('%ld') AS Result"), m_nDocNo);
				rsp.ExecSQL(szSQL);
			//	_msg(_T("%s"),szSQL);
				if (!rsp.IsEOF())
				{
					m_szArchivalNo = rsp.GetValue(_T("Result"));
				}
			}
			if(!m_szArchivalNo.IsEmpty())
			{
				m_wndArchivalNo.SetWindowText(m_szArchivalNo);
				m_wndArchivalNo.SetFocus();
			}
				
		
		}
	
} 
void CHMSRecordStorageInfo::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRecordStorageInfo::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRecordStorageInfo::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSRecordStorageInfo();
	
} 
void CHMSRecordStorageInfo::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSRecordStorageInfo();
	
} 
void CHMSRecordStorageInfo::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRecordStorageInfo::OnAddHMSRecordStorageInfo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSRecordStorageInfo::OnEditHMSRecordStorageInfo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSRecordStorageInfo::OnDeleteHMSRecordStorageInfo(){
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
 		OnCancelHMSRecordStorageInfo();
 	}
	return 0;
}
int CHMSRecordStorageInfo::OnSaveHMSRecordStorageInfo(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	CRecord rs(&pMF->m_db);

	bool bAdd;
	if(m_szPatientDead == _T("Y"))
	{
		szSQL.Format(_T(" SELECT COUNT(*)") \
					_T(" FROM hms_patient_record") \
					_T(" WHERE hpr_docrec ='%s' ") \
					_T(" AND extract(YEAR FROM hpr_storeddate)=extract(YEAR FROM current_date)") \
					_T(" AND hpr_dead = 'Y'"), m_szArchivalNo);
	}
	else
	{
		szSQL.Format(_T(" SELECT COUNT(*)") \
				_T(" FROM hms_patient_record") \
				_T(" WHERE hpr_enddeptid = '%s'") \
				_T(" AND hpr_type = '%s'") \
				_T(" AND hpr_docrec ='%s' ") \
				_T(" AND extract(YEAR FROM hpr_storeddate)=extract(YEAR FROM current_date)") \
				_T(" AND hpr_dead <> 'Y'"), m_szDischargeDept, m_szTreatmentTypeID, m_szArchivalNo);	
	}
	
	rs.ExecSQL(szSQL);


	if(rs.GetIntValue()){
		ShowMessageBox(_T("Đã có số lưu trữ. Không thể lưu dữ liệu"), MB_ICONSTOP);
		return -1;
	}

	m_hms_patient_recordTbl.SetValue(_T("hpr_dead"), m_szPatientDead);

 	if(GetMode() == VM_ADD)
	{ 
		bAdd = true;
 		szSQL = m_hms_patient_recordTbl.GetInsertSQL(_T("hpr_idx")); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE hpr_docno = %ld AND hpr_docrec='%s' "), m_nDocNo,m_szArchivalNoOld); 
 		szSQL = m_hms_patient_recordTbl.GetUpdateSQL(_T("hpr_createdby, hpr_createddate, hpr_patientno, hpr_docno, hpr_idx,")\
													 _T("hpr_admitdeptid, hpr_enddeptid, hpr_admitdate, hpr_enddate, hpr_class")); 
 		szSQL += szWhere; 
 	}
   
 	int ret = pMF->ExecSQL(szSQL);
	  _fmsg(_T("%s"), szSQL);
 	if(ret > 0) 
 	{ 
		GetDataToScreen();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSRecordStorageInfo::OnCancelHMSRecordStorageInfo(){
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
int CHMSRecordStorageInfo::OnHMSRecordStorageInfoListLoadData(){
	return 0;
}
bool CHMSRecordStorageInfo::LoadDataToScreen()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nRefidx=0;
	//UpdateData(true);
	if (m_szClass.Trim() == _T("E"))
	{
		szSQL.Format(_T("SELECT  hd_patientno AS PatientNo ,")\
	             _T("trim(hp_surname||' '||hp_midname||' '||hp_firstname) as PatientName, ")\
	             _T("hms_getage(TRUNC(hd_admitdate), hp_birthdate) AS Age, ")\
	             _T("(SELECT ss_desc FROM sys_sel WHERE ss_code=hp_sex AND ss_id='sys_sex' AND rownum <=1) AS Sex, ")\
	             _T("hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS Address, ")\
	             _T("(SELECT ss_desc FROM sys_sel WHERE ss_id='sys_occupation' AND ss_code=CAST(hp_occupation AS VARCHAR(10)) AND rownum <=1) AS Occupation, ")\
	             _T("(SELECT ho_desc FROM hms_object WHERE ho_id=hd_object AND rownum <=1) AS ObjectName, ")\
	             _T("'' AS RecordNo, ")\
				 _T("hd_result AS result, ")\
	             _T("hd_admitdate AS AdmitDate, ")\
	             _T("hd_enddate AS DischargeDate, ")\
				 _T("hd_admitdept AS StartDept, hd_enddept AS EndDept, ")\
	             _T("(SELECT sd_name FROM sys_dept WHERE sd_id=hd_admitdept AND rownum <=1) AS AdmitDept, ")\
	             _T("(SELECT sd_name FROM sys_dept WHERE sd_id=hd_enddept AND rownum <=1) AS DischargeDept, ")\
	           	 _T("(SELECT TRUNC(hd_admitdate) FROM hms_doc WHERE hd_docno=%ld AND rownum <=1) AS fdate1, ")\
				 _T("(SELECT TRUNC(hd_enddate) FROM hms_doc WHERE hd_docno=%ld AND rownum <=1) AS tdate1, ")\
				 _T("(SELECT TRUNC(hd_admitdate) FROM hms_doc WHERE hd_docno=%ld AND rownum <=1) AS fdate2, ")\
				 _T("(SELECT TRUNC(hd_enddate) FROM hms_doc WHERE hd_docno=%ld AND rownum <=1) AS tdate2, ")\
	             _T("hd_diagnostic AS Diagnostic ")\
                 _T("FROM hms_patient ")\
                 _T("LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ")\
				 _T("WHERE hd_docno=%ld AND hd_status ='T'"), m_nDocNo, m_nDocNo, m_nDocNo, m_nDocNo, m_nDocNo);
	}
	else
	{
		szSQL.Format(_T("SELECT  hd_patientno AS PatientNo ,")\
					_T("trim(hp_surname||' '||hp_midname||' '||hp_firstname) as PatientName, ")\
					_T("hms_getage(TRUNC(hd_admitdate), hp_birthdate) AS Age, ")\
					_T("(SELECT ss_desc FROM sys_sel WHERE ss_code=hp_sex AND ss_id='sys_sex' AND rownum <=1) AS Sex, ")\
					_T("hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS Address, ")\
					_T("(SELECT ss_desc FROM sys_sel WHERE ss_id='sys_occupation' AND ss_code=CAST(hp_occupation AS VARCHAR(10)) AND rownum <=1) AS Occupation, ")\
					_T("(SELECT ho_desc FROM hms_object WHERE ho_id=hd_object AND rownum <=1) AS ObjectName, ")\
					_T("hcr_recordno AS RecordNo, ")\
					_T("hcr_result AS result, ")\
					_T("hcr_admitdate AS AdmitDate, ")\
					_T("hcr_dischargedate AS DischargeDate, ")\
					_T("hcr_admitdept AS StartDept, hcr_dischargedept AS EndDept, ")\
					_T("(SELECT max(htr_idx) FROM hms_treatment_record WHERE htr_docno=hcr_docno AND htr_deptid=hcr_admitdept AND rownum <=1) AS refidx, ")\
					_T("(SELECT sd_name FROM sys_dept WHERE sd_id=hcr_admitdept AND rownum <=1) AS AdmitDept, ")\
					_T("(SELECT sd_name FROM sys_dept WHERE sd_id=hcr_dischargedept AND rownum <=1) AS DischargeDept, ")\
					_T("(SELECT min(TRUNC(htr_admitdate)) FROM hms_treatment_record WHERE htr_docno=hcr_docno AND htr_deptid=hcr_admitdept AND rownum <=1) AS fdate1, ")\
					_T("(SELECT max(TRUNC(htr_dischargedate)) FROM hms_treatment_record WHERE htr_docno=hcr_docno AND htr_deptid=hcr_admitdept AND rownum <=1) AS tdate1, ")\
					_T("(SELECT min(TRUNC(htr_admitdate)) FROM hms_treatment_record WHERE htr_docno=hcr_docno AND htr_deptid=hcr_dischargedept AND rownum <=1) AS fdate2, ")\
					_T("(SELECT max(TRUNC(htr_dischargedate)) FROM hms_treatment_record WHERE htr_docno=hcr_docno AND htr_deptid=hcr_dischargedept AND rownum <=1) AS tdate2, ")\
					_T("hcr_maindisease AS Diagnostic ")\
					_T("FROM hms_patient ")\
					_T("LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ")\
					_T("LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ")\
					_T("WHERE hcr_docno=%ld AND hcr_status ='T'"), m_nDocNo);
	}
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("PatientNo"), m_szPatientNo);
		
		rs.GetValue(_T("RecordNo"), m_szAdmissionNo);
		m_szAdmitNo = m_szAdmissionNo;
		rs.GetValue(_T("AdmitDate"), m_szAdmissionDate);
		rs.GetValue(_T("DischargeDate"), m_szDischargeDate);
		rs.GetValue(_T("StartDept"), m_szAdmitDept);
		rs.GetValue(_T("EndDept"), m_szDischargeDept);
		rs.GetValue(_T("AdmitDept"), m_szAdmitDepartment);
		rs.GetValue(_T("DischargeDept"), m_szEndDepartment);
		rs.GetValue(_T("fdate1"), m_szFromTime);
		rs.GetValue(_T("tdate1"), m_szToTime);
		rs.GetValue(_T("fdate2"), m_szFromTime2);
		rs.GetValue(_T("tdate2"), m_szToTime2);
		rs.GetValue(_T("Diagnostic"), m_szDiagnostic);
		rs.GetValue(_T("refidx"), nRefidx);

		if (m_szAdmissionNo.IsEmpty())
			m_wndAdmissionNo.EnableWindow(TRUE);

		m_szStoredDate = pMF->GetSysDateTime();
		m_szRecordStatusKey = _T("A");		

		rs.GetValue(_T("Result"), tmpStr);
		m_szPatientDead = _T("N");
		if(tmpStr == _T("5") || tmpStr == _T("6")){
			m_szPatientDead = _T("Y");
		}
//		m_wndTreatmentType.SetTextColor(RGB(0, 0,0));
		szSQL.Format(_T("SELECT htr_outpatient FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d "), m_nDocNo, nRefidx);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("htr_outpatient"), m_szTreatmentTypeID);
		
		SetMode(VM_VIEW);
		return true;
	}
	else
	{
		SetMode(VM_NONE);
		return false;
	}

	
}