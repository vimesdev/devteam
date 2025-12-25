#include "HMSAppointmentReTreatment.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSReportForms/PrintForms.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentReTreatment *)pWnd)->OnDateCheckValue();
} 
/*static void _OnFromTimeChangeFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnFromTimeChange();
} */
/*static void _OnFromTimeSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnFromTimeSetfocus();} */ 
/*static void _OnFromTimeKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnFromTimeKillfocus();
} */
static int _OnFromTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentReTreatment *)pWnd)->OnFromTimeCheckValue();
} 
/*static void _OnToTimeChangeFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnToTimeChange();
} */
/*static void _OnToTimeSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnToTimeSetfocus();} */ 
/*static void _OnToTimeKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnToTimeKillfocus();
} */
static int _OnToTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentReTreatment *)pWnd)->OnToTimeCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentReTreatment *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReTreatment *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentReTreatment *)pWnd)->OnReasonCheckValue();
} 											 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSAppointmentReTreatment *pVw = (CHMSAppointmentReTreatment *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAppointmentReTreatment *pVw = (CHMSAppointmentReTreatment *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAppointmentReTreatment *pVw = (CHMSAppointmentReTreatment *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAppointmentReTreatment *pVw = (CHMSAppointmentReTreatment *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSAppointmentReTreatmentFnc(CWnd *pWnd){
	 return ((CHMSAppointmentReTreatment*)pWnd)->OnAddHMSAppointmentReTreatment();
} 
static int _OnEditHMSAppointmentReTreatmentFnc(CWnd *pWnd){
	 return ((CHMSAppointmentReTreatment*)pWnd)->OnEditHMSAppointmentReTreatment();
} 
static int _OnDeleteHMSAppointmentReTreatmentFnc(CWnd *pWnd){
	 return ((CHMSAppointmentReTreatment*)pWnd)->OnDeleteHMSAppointmentReTreatment();
} 
static int _OnSaveHMSAppointmentReTreatmentFnc(CWnd *pWnd){
	 return ((CHMSAppointmentReTreatment*)pWnd)->OnSaveHMSAppointmentReTreatment();
} 
static int _OnCancelHMSAppointmentReTreatmentFnc(CWnd *pWnd){
	 return ((CHMSAppointmentReTreatment*)pWnd)->OnCancelHMSAppointmentReTreatment();
}

static int _OnAdmitdateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentReTreatment *)pWnd)->OnAdmitdateCheckValue();
}

static int _OnDischargeDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentReTreatment *)pWnd)->OnDischargeDateCheckValue();
}
static void _OnTreatTimeSelectFnc(CWnd *pWnd){
	CHMSAppointmentReTreatment *pVw = (CHMSAppointmentReTreatment *)pWnd;
	pVw->OnTreatTimeSelect();
} 

CHMSAppointmentReTreatment::CHMSAppointmentReTreatment(CWnd* pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSAppointmentReTreatment::~CHMSAppointmentReTreatment()
{
}
void CHMSAppointmentReTreatment::OnCreateComponents()
{
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 90, 55);
	m_wndDate.Create(this,95, 30, 185, 55); 
	m_wndTimeFrameLabel.Create(this, _T("Time Frame"), 190, 30, 270, 55);
	m_wndFromTime.Create(this,275, 30, 325, 55); 
	m_wndToTime.Create(this,330, 30, 380, 55); 
	m_wndAppointmentReTreatment.Create(this, _T("Appointment Re-examine"), 5, 5, 385, 220);
	m_wndAdmitdateLabel.Create(this, _T("Ngày vào"), 10, 60, 90, 85);
	m_wndAdmitdate.Create(this,95, 60, 185, 85); 
	m_wndDischargeDateLabel.Create(this, _T("Ngày ra"), 190, 60, 270, 85);
	m_wndDischargeDate.Create(this,275, 60, 380, 85); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 90, 90, 115);
	m_wndNote.Create(this,95, 89, 380, 149); 
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 155, 90, 180);
	m_wndReason.Create(this,95, 155, 380, 215); 
	m_wndUpdate.Create(this, _T("&Update"), 50, 225, 130, 250);
	m_wndSave.Create(this, _T("&Save"), 135, 225, 215, 250);
	m_wndCancel.Create(this, _T("&Cancel"), 220, 225, 300, 250);
	m_wndPrint.Create(this, _T("&Print"), 305, 225, 385, 250);
}
void CHMSAppointmentReTreatment::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromTime.SetCheckValue(true);
	m_wndToTime.SetCheckValue(true);	
	m_wndDate.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	//m_wndNote.SetCheckValue(true);

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_status"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_outstate"), dfInteger);
	m_hms_docTbl.AddField(_T("hd_enddept"), dfText, 7);
	m_hms_docTbl.AddField(_T("hd_enddate"), dfDateTime);
	m_hms_docTbl.AddField(_T("hd_icd"), dfText, 13);
	m_hms_docTbl.AddField(_T("hd_diagnostic"), dfText, 254);	//Benh chinh
	m_hms_docTbl.AddField(_T("hd_reldisease"), dfText, 254);	//benh kem theo
	m_hms_docTbl.AddField(_T("hd_conclusion"), dfText, 254);	//Ket luan
	m_hms_docTbl.AddField(_T("hd_suggestion"), dfText, 1);	//Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien), T: Transfer(Chuyen vien), R: Re-Treatment(Hen Kham lai)
	m_hms_docTbl.AddField(_T("hd_result"), dfText, 1);	//1: Khoi, 2: Do giam, 3: Khong thay doi, 4: Nang hon, 5: Tu vong
	m_hms_docTbl.AddField(_T("hd_doctor"), dfText, 15);
	m_hms_docTbl.AddField(_T("hd_indept"), dfText, 7);	//Khoa dieu tri
	m_hms_docTbl.AddField(_T("hd_tohosid"), dfText, 13);	//Benh vien chuyen toi
	m_hms_docTbl.AddField(_T("hd_areceptidx"), dfInteger);
	m_hms_docTbl.AddField(_T("hd_outpatient"), dfText, 1);

	m_hms_reexamTbl.SetTableName(_T("hms_reexam"));
	m_hms_reexamTbl.AddField(_T("hre_docno"), dfLong);
	m_hms_reexamTbl.AddField(_T("hre_date"), dfDate);
	m_hms_reexamTbl.AddField(_T("hre_doctor"), dfText, 15);
	m_hms_reexamTbl.AddField(_T("hre_note"), dfText, 254);
	m_hms_reexamTbl.AddField(_T("HRE_ADMITDATE"), dfDate);
	m_hms_reexamTbl.AddField(_T("HRE_DISCHARGEDATE"), dfDate);
	m_hms_reexamTbl.AddField(_T("hre_deptid"), dfText, 20);
	m_hms_reexamTbl.AddField(_T("hre_fromtime"), dfText, 5);
	m_hms_reexamTbl.AddField(_T("hre_totime"), dfText, 5);
	m_hms_reexamTbl.AddField(_T("hre_reason"), dfText, 512);

	CRecord rs(&pMF->m_db);
	CString szSQL, sz;
	szSQL.Format(_T("SELECT htr_treattime, MIN(htr_admitdate) as ngayvao,  MAX(htr_dischargedate) as ngayra FROM hms_treatment_record WHERE htr_docno = %ld and  htr_idx=%d GROUP BY htr_treattime "),
		pMF->m_nDocumentNo,  pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("htr_treattime"), m_nTreatTime);
	rs.GetValue(_T("ngayvao"), m_szAdmitdate2);
	rs.GetValue(_T("ngayra"), m_szDischargeDate2);
	CString szLabel;
	szLabel.Format(_T("Lần điều trị thứ (%d)"),  m_nTreatTime);
	//m_wndTreatTime.SetWindowText(szLabel);
	m_wndAppointmentReTreatment.SetWindowText(szLabel);
	m_szTitle = _T("Hẹn khám lại");
}
void CHMSAppointmentReTreatment::OnSetWindowEvents(){
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndFromTime.SetEvent(WE_CHANGE, _OnFromTimeChangeFnc);
	//m_wndFromTime.SetEvent(WE_SETFOCUS, _OnFromTimeSetfocusFnc);
	//m_wndFromTime.SetEvent(WE_KILLFOCUS, _OnFromTimeKillfocusFnc);
	m_wndFromTime.SetEvent(WE_CHECKVALUE, _OnFromTimeCheckValueFnc);
	//m_wndToTime.SetEvent(WE_CHANGE, _OnToTimeChangeFnc);
	//m_wndToTime.SetEvent(WE_SETFOCUS, _OnToTimeSetfocusFnc);
	//m_wndToTime.SetEvent(WE_KILLFOCUS, _OnToTimeKillfocusFnc);
	m_wndToTime.SetEvent(WE_CHECKVALUE, _OnToTimeCheckValueFnc);																		 
	m_wndAdmitdate.SetEvent(WE_CHECKVALUE, _OnAdmitdateCheckValueFnc);
	m_wndDischargeDate.SetEvent(WE_CHECKVALUE, _OnDischargeDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);																					 
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndTreatTime.SetEvent(WE_CLICK, _OnTreatTimeSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAppointmentReTreatmentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAppointmentReTreatmentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAppointmentReTreatmentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAppointmentReTreatmentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAppointmentReTreatmentFnc, 0, 'T', VK_CONTROL);
*/
	GetDataToScreen();
}
void CHMSAppointmentReTreatment::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndFromTime.GetDlgCtrlID(), m_szFromTime);
	DDX_TextEx(pDX, m_wndToTime.GetDlgCtrlID(), m_szToTime);														 
	DDX_TextEx(pDX, m_wndAdmitdate.GetDlgCtrlID(), m_szAdmitdate);
	DDX_TextEx(pDX, m_wndDischargeDate.GetDlgCtrlID(), m_szDischargeDate);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);												   
}
void CHMSAppointmentReTreatment::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("FromTime")] =  m_szFromTime;
	m_jData[_T("ToTime")] =  m_szToTime;
	m_jData[_T("Admitdate")] =  m_szAdmitdate;
	m_jData[_T("DischargeDate")] =  m_szDischargeDate;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("Reason")] =  m_szReason;
	}
	else
	{
			
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("FromTime")].GetValue(m_szFromTime);
	m_jData[_T("ToTime")].GetValue(m_szToTime);
	m_jData[_T("Admitdate")].GetValue(m_szAdmitdate);
	m_jData[_T("DischargeDate")].GetValue(m_szDischargeDate);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("Reason")].GetValue(m_szReason);
	}

}
void CHMSAppointmentReTreatment::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_reexam WHERE hre_docno=%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hre_date"), m_szDate);
		rs.GetValue(_T("hre_note"), m_szNote);
		rs.GetValue(_T("HRE_ADMITDATE"), m_szAdmitdate);
		rs.GetValue(_T("HRE_DISCHARGEDATE"), m_szDischargeDate);
		rs.GetValue(_T("hre_fromtime"), m_szFromTime);
		rs.GetValue(_T("hre_totime"), m_szToTime);
		rs.GetValue(_T("hre_reason"), m_szReason);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
	if(m_szDate.IsEmpty())
	{
		m_szDate = pMF->GetSysDate();
		if (pMF->m_szDept == _T("A6-A") || pMF->m_szDept == _T("A6-B") || pMF->m_szDept == _T("A6-C") || pMF->m_szDept == _T("A6-D"))
		{
			m_szFromTime = _T("06:30");
		}
		else
		{
		m_szFromTime = _T("13:30");
		}

		m_szToTime = _T("16:30");
	}
	m_szAdmitdate = m_szAdmitdate2;
	m_szDischargeDate = m_szDischargeDate2;
	UpdateData(FALSE);
}
void CHMSAppointmentReTreatment::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_docTbl.SetValue(_T("hd_status"), _T("P"));
	m_hms_docTbl.SetValue(_T("hd_doctor"), pMF->m_szDoctor);
	m_hms_docTbl.SetValue(_T("hd_suggestion"), _T("R"));
	m_hms_docTbl.SetValue(_T("hd_enddept"), pMF->m_szDept);
	m_hms_docTbl.SetValue(_T("hd_enddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_areceptidx"), pMF->m_nBedID);

	m_hms_reexamTbl.SetValue(_T("hre_docno"), pMF->m_nDocumentNo);
	m_hms_reexamTbl.SetValue(_T("hre_date"), m_szDate);
	m_hms_reexamTbl.SetValue(_T("hre_doctor"), pMF->m_szDoctor);
	m_hms_reexamTbl.SetValue(_T("hre_note"), m_szNote);
	m_hms_reexamTbl.SetValue(_T("HRE_ADMITDATE"),m_szAdmitdate);
	m_hms_reexamTbl.SetValue(_T("HRE_DISCHARGEDATE"), m_szDischargeDate);
	m_hms_reexamTbl.SetValue(_T("HRE_deptid"), pMF->GetCurrentDepartmentID());
	m_hms_reexamTbl.SetValue(_T("HRE_fromtime"), m_szFromTime);
	m_hms_reexamTbl.SetValue(_T("HRE_totime"), m_szToTime);
	m_hms_reexamTbl.SetValue(_T("HRE_reason"), m_szReason);
}
void CHMSAppointmentReTreatment::SetDefaultValues(){

	m_szDate.Empty();
	m_szFromTime.Empty();
	m_szToTime.Empty();					  
	m_szNote.Empty();
	//m_szAdmitdate.Empty();
	//m_szDischargeDate.Empty();


}
int CHMSAppointmentReTreatment::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 3, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0,  -1); 
 			SetDefaultValues(); 
 			break; 
 		};
		m_wndTreatTime.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
/*void CHMSAppointmentReTreatment::OnDateChange(){
	
} */
/*void CHMSAppointmentReTreatment::OnDateSetfocus(){
	
} */
/*void CHMSAppointmentReTreatment::OnDateKillfocus(){
	
} */
int CHMSAppointmentReTreatment::OnDateCheckValue(){
	return 0;
}

void CHMSAppointmentReTreatment::OnTreatTimeSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSAppointmentReTreatment::OnFromTimeChange(){
	
} */
/*void CHMSAppointmentReTreatment::OnFromTimeSetfocus(){
	
} */
/*void CHMSAppointmentReTreatment::OnFromTimeKillfocus(){
	
} */
int CHMSAppointmentReTreatment::OnFromTimeCheckValue(){
	return 0;
} 
/*void CHMSAppointmentReTreatment::OnToTimeChange(){
	
} */
/*void CHMSAppointmentReTreatment::OnToTimeSetfocus(){
	
} */
/*void CHMSAppointmentReTreatment::OnToTimeKillfocus(){
	
} */
int CHMSAppointmentReTreatment::OnToTimeCheckValue(){
	return 0;
} 

int CHMSAppointmentReTreatment::CheckAppointment(CString& szFromTime, CString& szToTime, CGuiTextCtrl& wndReason)
{
	CMainFrame * pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	/*Valid time*/
	CString szSQL;
	szSQL.Format(_T("HMS_CHECK_APPOINTMENT_TIME('%s', '%s')"), szFromTime, szToTime);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet < 0)
	{
		switch (nRet)
		{
			case -2:
				ShowMessageBox(_T("Không tạo được phiếu hẹn khám. Thông tin giờ hẹn không hợp lệ!"));
				m_wndFromTime.SetFocus();
				break;
			case -3:
				ShowMessageBox(_T("Không tạo được phiếu hẹn khám. Thông tin giờ hẹn không hợp lệ!"));
				m_wndToTime.SetFocus();
				break;
			default:
				ShowMessageBox(_T("Không tạo được phiếu hẹn khám."));
				break;
		}
		return nRet;
	}
	CString szReason;
	wndReason.GetWindowText(szReason);
	if (str2int(szFromTime.Left(2)) < 12 || str2int(szToTime.Left(2)) < 12)
	{
		if (szReason.Trim().GetLength() == 0)
		{
			wndReason.SetToolTipMessage(_T("Cần ghi lại lý do đặt lịch hẹn sáng ở đây!"));
			wndReason.SetCheckValue(true);
			return -1;
		}		
	}
	else
	{
		wndReason.SetCheckValue(false);
	}
	return 0;
}

/*void CHMSAppointmentReTreatment::OnAdmitdateChange(){
	
} */
/*void CHMSAppointmentReTreatment::OnAdmitdateSetfocus(){
	
} */
/*void CHMSAppointmentReTreatment::OnAdmitdateKillfocus(){
	
} */
/*void CHMSAppointmentReTreatment::OnDischargeDateChange(){
	
} */
/*void CHMSAppointmentReTreatment::OnDischargeDateSetfocus(){
	
} */
/*void CHMSAppointmentReTreatment::OnDischargeDateKillfocus(){
	
} */
int CHMSAppointmentReTreatment::OnDischargeDateCheckValue(){
	return 0;
}
/*void CHMSAppointmentReTreatment::OnNoteChange(){
	
} */
/*void CHMSAppointmentReTreatment::OnNoteSetfocus(){
	
} */
/*void CHMSAppointmentReTreatment::OnNoteKillfocus(){
	
} */
int CHMSAppointmentReTreatment::OnNoteCheckValue(){
	return 0;
} 
/*void CHMSAppointmentReTreatment::OnReasonChange(){
	
} */
/*void CHMSAppointmentReTreatment::OnReasonSetfocus(){
	
} */
/*void CHMSAppointmentReTreatment::OnReasonKillfocus(){
	
} */
int CHMSAppointmentReTreatment::OnReasonCheckValue(){
	UpdateData();
	int nCount = m_szReason.Trim().GetLength();
	_tprintf(_T("\ncount: %d"), nCount);
	if (nCount == 0)
	{
		return -1;
	}
	return 0;
} 													
void CHMSAppointmentReTreatment::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSAppointmentReTreatment();
} 
void CHMSAppointmentReTreatment::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAppointmentReTreatment();
} 
void CHMSAppointmentReTreatment::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSAppointmentReTreatment();
} 
void CHMSAppointmentReTreatment::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//CPrintForms printer;
	//printer.TM_OnPrintAppointmentSheet(pMF->m_nDocumentNo, pMF->m_szDept, true);

	
	CPrintForms printer;
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("In phiếu hẹn mẫu 1 (1 tờ)"));
	menu.AppendMenu(MF_SEPARATOR);
	menu.AppendMenu(MF_BYPOSITION, 2, _T("In phiếu hẹn mẫu 1 (2 tờ)"));
	CPoint pt;
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	pt.x = rect.left;
	pt.y = rect.top-2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	switch (ret)
	{
	case 1:		
		printer.TM_OnPrintAppointmentSheet(pMF->m_nDocumentNo, pMF->m_szDept,
                                           true, false, m_szDate);
		break;
	case 2:
        printer.TM_OnPrintAppointmentSheet_V2(pMF->m_nDocumentNo, pMF->m_szDept,
                                              true, false, m_szDate);
		break;
	}
} 
int CHMSAppointmentReTreatment::OnAddHMSAppointmentReTreatment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSAppointmentReTreatment::OnEditHMSAppointmentReTreatment(){
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CHMSAppointmentReTreatment::OnDeleteHMSAppointmentReTreatment(){
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
 		OnCancelHMSAppointmentReTreatment(); 
 	}
return 0;
 } 
int CHMSAppointmentReTreatment::OnSaveHMSAppointmentReTreatment(){
 	if(GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_wndDate.SetMin(CDate(pMF->m_szEntryDate.Left(10)));
	int ret = 0;
	ret = CheckAppointment(m_szFromTime, m_szToTime, m_wndReason);
 	if(!IsValidateData()) 
 		return -1; 
	if (ret < 0)
	{
		return ret;
	}
 	CString szSQL; 
	
	szSQL = m_hms_docTbl.GetUpdateSQL(_T("hd_docno"));
 //_fmsg(_T("%s"), szSQL); 
 	//ret = pMF->ExecSQL(szSQL); 
 	//if(ret > 0) 
	if (1==1)
 	{ 
		szSQL.Format(_T("DELETE FROM hms_reexam WHERE hre_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		szSQL = m_hms_reexamTbl.GetInsertSQL(); 
		pMF->ExecSQL(szSQL);
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	}
 	return ret; 
}
int CHMSAppointmentReTreatment::OnCancelHMSAppointmentReTreatment(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
		GetDataToScreen();
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CHMSAppointmentReTreatment::OnHMSAppointmentReTreatmentListLoadData(){
	return 0;
}
int CHMSAppointmentReTreatment::OnAdmitdateCheckValue(){
	return 0;
} 
