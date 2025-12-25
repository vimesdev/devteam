#include "HMSAppointmentScheduleDialog.h"
#include "MainFrm.h"
#include "HMSReportForms/PrintForms.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSAppointmentScheduleDialog *)pWnd)->OnDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAppointmentScheduleDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSAppointmentScheduleDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleDialog *)pWnd)->OnTypeAddNew();
}*/

static int _OnTypeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentScheduleDialog *)pWnd)->OnTypeCheckValue();
}
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentScheduleDialog *)pWnd)->OnNoteCheckValue();
} 

static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSAppointmentScheduleDialog *pVw = (CHMSAppointmentScheduleDialog *)pWnd;
	pVw->OnUpdateSelect();
} 

static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAppointmentScheduleDialog *pVw = (CHMSAppointmentScheduleDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAppointmentScheduleDialog *pVw = (CHMSAppointmentScheduleDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSAppointmentScheduleDialog *pVw = (CHMSAppointmentScheduleDialog *)pWnd;
	pVw->OnConfirmSelect();
} 
static int _OnAddHMSAppointmentScheduleDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleDialog*)pWnd)->OnAddHMSAppointmentScheduleDialog();
} 
static int _OnEditHMSAppointmentScheduleDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleDialog*)pWnd)->OnEditHMSAppointmentScheduleDialog();
} 
static int _OnDeleteHMSAppointmentScheduleDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleDialog*)pWnd)->OnDeleteHMSAppointmentScheduleDialog();
} 
static int _OnSaveHMSAppointmentScheduleDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleDialog*)pWnd)->OnSaveHMSAppointmentScheduleDialog();
} 
static int _OnCancelHMSAppointmentScheduleDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleDialog*)pWnd)->OnCancelHMSAppointmentScheduleDialog();
}

CHMSAppointmentScheduleDialog::CHMSAppointmentScheduleDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 515;
	m_nDlgHeight = 130;
	SetDefaultValues();
	m_nIdx = 0;
	m_nDocumentNo = 0;
	m_nOrderId = 0;
	
}
CHMSAppointmentScheduleDialog::~CHMSAppointmentScheduleDialog(){
}
void CHMSAppointmentScheduleDialog::OnCreateComponents(){
	/*m_wndTypeLabel.Create(this, _T("Type"), 5, 5, 85, 30);
	m_wndType.Create(this,90, 5, 290, 30); 
	m_wndDateLabel.Create(this, _T("Date"), 295, 5, 375, 30);
	m_wndDate.Create(this,380, 5, 505, 30); 

	m_wndNoteLabel.Create(this, _T("Note"), 5, 35, 85, 60);
	m_wndNote.Create(this,90, 35, 505, 90, 1, 0, 1); 
	m_wndUpdate.Create(this, _T("&Update"), 130, 95, 220, 120);
	m_wndSave.Create(this, _T("&Save"), 225, 95, 315, 120);
	m_wndPrint.Create(this, _T("&Print"), 320, 95, 410, 120);
	m_wndConfirm.Create(this, _T("&Confirm"), 415, 95, 505, 120);*/


	m_wndTypeLabel.Create(this, _T("Type"), 5, 5, 85, 30);
	m_wndType.Create(this,90, 5, 290, 30); 
	m_wndDateLabel.Create(this, _T("Date"), 295, 5, 375, 30);
	m_wndDate.Create(this,380, 5, 505, 30); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 35, 85, 60);
	m_wndNote.Create(this,90, 35, 505, 195,1, 0, 1); 
	m_wndUpdate.Create(this, _T("&Update"), 130, 200, 220, 225);
	m_wndSave.Create(this, _T("&Save"), 225, 200, 315, 225);
	m_wndPrint.Create(this, _T("&Print"), 320, 200, 410, 225);
	m_wndConfirm.Create(this, _T("&Confirm"), 415, 200, 505, 225);



}
void CHMSAppointmentScheduleDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(3);
	m_wndNote.SetLimitText(512);
	m_wndNote.SetCheckValue(true);
	//m_wndDate.SetButtonMode(BUTTON_CALENDAR);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_appointmentscheduleTbl.SetTableName(_T("HMS_APPOINTMENT_SCHEDULE"));
	m_hms_appointmentscheduleTbl.AddField(_T("HMS_APPOINTMENT_ID"), dfLong); 
	m_hms_appointmentscheduleTbl.AddField(_T("DOCNO"), dfLong); 
	//m_hms_appointmentscheduleTbl.AddField(_T("CREATEDDATE"), dfDateTime); 
	m_hms_appointmentscheduleTbl.AddField(_T("CREATEDBY"), dfText, 20); 
	m_hms_appointmentscheduleTbl.AddField(_T("UPDATEDDATE"), dfDateTime); 
	m_hms_appointmentscheduleTbl.AddField(_T("UPDATEDBY"), dfText, 20); 
	m_hms_appointmentscheduleTbl.AddField(_T("APPOINTMENT_DATE"), dfDateTime); 
	m_hms_appointmentscheduleTbl.AddField(_T("DEPTID"), dfText, 7); 
	m_hms_appointmentscheduleTbl.AddField(_T("ROOMID"), dfLong); 
	m_hms_appointmentscheduleTbl.AddField(_T("DOCTOR"), dfText, 20); 
	m_hms_appointmentscheduleTbl.AddField(_T("TYPEID"), dfText, 3); 
	m_hms_appointmentscheduleTbl.AddField(_T("NOTE"), dfText, 512); 
	m_hms_appointmentscheduleTbl.AddField(_T("ORDERID"), dfLong); 

}
void CHMSAppointmentScheduleDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndType.SetEvent(WE_CHECKVALUE, _OnTypeCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	
	GetDataToScreen();
	//m_wndUpdate.ShowWindow(SW_HIDE);
}
void CHMSAppointmentScheduleDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSAppointmentScheduleDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSAppointmentScheduleDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nMode = GetMode();
	szSQL.Format(_T("SELECT appointment_date, typeid, note, orderid, status ") \
				_T(" FROM HMS_APPOINTMENT_SCHEDULE WHERE docno = %ld AND HMS_APPOINTMENT_ID = %ld") \
				_T(" ORDER BY HMS_APPOINTMENT_ID desc"), m_nDocumentNo, m_nIdx);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("APPOINTMENT_DATE"), m_szDate);
		rs.GetValue(_T("TYPEID"), m_szTypeKey);
		rs.GetValue(_T("NOTE"), m_szNote);
		rs.GetValue(_T("orderid"), m_nOrderId);
	}
	if (rs.GetValue(_T("status")) == _T("T"))
	{
		nMode = VM_TERM;
	}
	SetMode(nMode);
}
void CHMSAppointmentScheduleDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (GetMode() == VM_ADD)
	{
		szSQL.Format(_T("select HMS_APPOINTMENTSCHEDULE_ID_ASQ.NEXTVAL as next_id from dual"));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("next_id"), m_nIdx);
	}
	m_hms_appointmentscheduleTbl.SetValue(_T("HMS_APPOINTMENT_ID"), m_nIdx);
	m_hms_appointmentscheduleTbl.SetValue(_T("APPOINTMENT_DATE"), m_szDate);
	m_hms_appointmentscheduleTbl.SetValue(_T("TYPEID"), m_szTypeKey);
	m_hms_appointmentscheduleTbl.SetValue(_T("NOTE"), m_szNote);
	m_hms_appointmentscheduleTbl.SetValue(_T("DOCNO"), m_nDocumentNo);
	m_hms_appointmentscheduleTbl.SetValue(_T("CREATEDBY"), pMF->GetCurrentUser());
	m_hms_appointmentscheduleTbl.SetValue(_T("UPDATEDDATE"), pMF->GetSysDateTime());
	m_hms_appointmentscheduleTbl.SetValue(_T("UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_appointmentscheduleTbl.SetValue(_T("DEPTID"), pMF->GetCurrentDepartmentID());
	m_hms_appointmentscheduleTbl.SetValue(_T("ROOMID"), pMF->GetCurrentRoomID());
	m_hms_appointmentscheduleTbl.SetValue(_T("DOCTOR"), pMF->GetCurrentUser());
	m_hms_appointmentscheduleTbl.SetValue(_T("ORDERID"), m_nOrderId);

}
void CHMSAppointmentScheduleDialog::SetDefaultValues(){

	//m_szDate.Empty();
	m_szTypeKey.Empty();
	m_szNote.Empty();

}
int CHMSAppointmentScheduleDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, 0, -1);
			m_szDate = pMF->GetSysDateTime();
			m_wndType.SetFocus();
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, 0, -1);
			m_wndNote.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
		case VM_TERM:
			EnableControls(FALSE);
			EnableButtons(TRUE, 2, -1);
			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSAppointmentScheduleDialog::OnDateChange(){
	
} */
/*void CHMSAppointmentScheduleDialog::OnDateSetfocus(){
	
} */
/*void CHMSAppointmentScheduleDialog::OnDateKillfocus(){
	
} */
int CHMSAppointmentScheduleDialog::OnDateCheckValue()
{
	/*UpdateData();
	m_szNote.Format(_T("%s %s vào lúc %s")
		, m_wndType.GetCurrent(1), CDate::Convert(m_szDate, yyyymmdd, ddmmyyyy), m_szDate.Mid(11, 5));
	UpdateData(false);*/
	return 0;
} 
void CHMSAppointmentScheduleDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAppointmentScheduleDialog::OnTypeSelendok(){
	 
}
/*void CHMSAppointmentScheduleDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSAppointmentScheduleDialog::OnTypeKillfocus(){
	
}*/
long CHMSAppointmentScheduleDialog::OnTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	};
	m_wndType.DeleteAllItems(); 
	szSQL.Format(_T("select ss_code as id, ss_desc as name from sys_sel where ss_id = 'hms_appointment_schedule' order by cast(ss_code as integer)"));
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAppointmentScheduleDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAppointmentScheduleDialog::OnNoteChange(){
	
} */
/*void CHMSAppointmentScheduleDialog::OnNoteSetfocus(){
	
} */
/*void CHMSAppointmentScheduleDialog::OnNoteKillfocus(){
	
} */
int CHMSAppointmentScheduleDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSAppointmentScheduleDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAppointmentScheduleDialog();
} 
void CHMSAppointmentScheduleDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CPrintForms printer;
	printer.PrintHMSAppointmentScheduleSheet(m_nDocumentNo, m_nIdx);
	
} 
int CHMSAppointmentScheduleDialog::OnAddHMSAppointmentScheduleDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAppointmentScheduleDialog::OnEditHMSAppointmentScheduleDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAppointmentScheduleDialog::OnDeleteHMSAppointmentScheduleDialog(){
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
 		OnCancelHMSAppointmentScheduleDialog();
 	}
	return 0;
}
int CHMSAppointmentScheduleDialog::OnSaveHMSAppointmentScheduleDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_appointmentscheduleTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE docno = %ld AND HMS_APPOINTMENT_ID = %ld"), m_nDocumentNo, m_nIdx);
 		szSQL = m_hms_appointmentscheduleTbl.GetUpdateSQL(_T("createdby,createddate,orderid,HMS_APPOINTMENT_ID"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		if (GetMode() == VM_ADD)
		{
			SetMode(VM_ADD);
		}
		else
		{
			SetMode(VM_VIEW);
		}
 	}
 	else
 	{
 	}
 	return ret;
}
int CHMSAppointmentScheduleDialog::OnCancelHMSAppointmentScheduleDialog(){
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
int CHMSAppointmentScheduleDialog::OnHMSAppointmentScheduleDialogListLoadData(){
	return 0;
}

void CHMSAppointmentScheduleDialog::OnUpdateSelect()
{
	if (GetMode() == VM_VIEW)
	{
		SetMode(VM_EDIT);
	}
}
int CHMSAppointmentScheduleDialog::OnTypeCheckValue()
{
	return 0;
}

void CHMSAppointmentScheduleDialog::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("UPDATE HMS_APPOINTMENT_SCHEDULE ") \
				_T(" SET status = 'T', approveddate = systimestamp, approvedby = '%s' ") \
				_T(" WHERE HMS_APPOINTMENT_ID = %ld"), pMF->GetCurrentUser(), m_nIdx);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		SetMode(VM_TERM);		
	}
} 