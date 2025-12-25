#include "IVFAppointmentDialog2.h"
#include "MainFrm.h"
#include "HMSReportForms/PrintForms.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFAppointmentDialog2 *)pWnd)->OnDateCheckValue();
} 

static long _OnTimeLoadDataFnc(CWnd *pWnd){
	return ((CIVFAppointmentDialog2 *)pWnd)->OnTimeLoadData();
} 
static void _OnTimeSelendokFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnTimeSelendok();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFAppointmentDialog2* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CIVFAppointmentDialog2 *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnTypeAddNew();
}*/

static int _OnTypeCheckValueFnc(CWnd *pWnd){
	return ((CIVFAppointmentDialog2 *)pWnd)->OnTypeCheckValue();
}
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog2 *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CIVFAppointmentDialog2 *)pWnd)->OnNoteCheckValue();
} 

static void _OnUpdateSelectFnc(CWnd *pWnd){
	CIVFAppointmentDialog2 *pVw = (CIVFAppointmentDialog2 *)pWnd;
	pVw->OnUpdateSelect();
} 

static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFAppointmentDialog2 *pVw = (CIVFAppointmentDialog2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CIVFAppointmentDialog2 *pVw = (CIVFAppointmentDialog2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CIVFAppointmentDialog2 *pVw = (CIVFAppointmentDialog2 *)pWnd;
	pVw->OnConfirmSelect();
} 
static int _OnAddIVFAppointmentDialogFnc(CWnd *pWnd){
	 return ((CIVFAppointmentDialog2*)pWnd)->OnAddIVFAppointmentDialog();
} 
static int _OnEditIVFAppointmentDialogFnc(CWnd *pWnd){
	 return ((CIVFAppointmentDialog2*)pWnd)->OnEditIVFAppointmentDialog();
} 
static int _OnDeleteIVFAppointmentDialogFnc(CWnd *pWnd){
	 return ((CIVFAppointmentDialog2*)pWnd)->OnDeleteIVFAppointmentDialog();
} 
static int _OnSaveIVFAppointmentDialogFnc(CWnd *pWnd){
	 return ((CIVFAppointmentDialog2*)pWnd)->OnSaveIVFAppointmentDialog();
} 
static int _OnCancelIVFAppointmentDialogFnc(CWnd *pWnd){
	 return ((CIVFAppointmentDialog2*)pWnd)->OnCancelIVFAppointmentDialog();
} 
CIVFAppointmentDialog2::CIVFAppointmentDialog2(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 515;
	m_nDlgHeight = 130;
	SetDefaultValues();
	m_nIdx = 0;
	m_nDocumentNo = 0;
	m_nOrderId = 0;
}
CIVFAppointmentDialog2::~CIVFAppointmentDialog2(){
}
void CIVFAppointmentDialog2::OnCreateComponents(){
	m_wndTypeLabel.Create(this, _T("Type"), 5, 5, 85, 30);
	m_wndType.Create(this,90, 5, 290, 30); 
	m_wndTimeLabel.Create(this, _T("Time"), 295, 5, 375, 30);
	m_wndTime.Create(this,380, 5, 505, 30); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 35, 85, 60);
	m_wndNote.Create(this,90, 35, 505, 90, 1, 0, 1); 
	m_wndUpdate.Create(this, _T("&Update"), 130, 95, 220, 120);
	m_wndSave.Create(this, _T("&Save"), 225, 95, 315, 120);
	m_wndPrint.Create(this, _T("&Print"), 320, 95, 410, 120);
	m_wndConfirm.Create(this, _T("&Confirm"), 415, 95, 505, 120);

}
void CIVFAppointmentDialog2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(3);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);

	m_wndTime.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTime.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_ivf_appointmentTbl.SetTableName(_T("ivf_appointment"));
	//m_ivf_appointmentTbl.AddField(_T("IVF_APPOINTMENT_ID"), dfLong); 
	m_ivf_appointmentTbl.AddField(_T("DOCNO"), dfLong); 
	//m_ivf_appointmentTbl.AddField(_T("CREATEDDATE"), dfDateTime); 
	m_ivf_appointmentTbl.AddField(_T("CREATEDBY"), dfText, 20); 
	m_ivf_appointmentTbl.AddField(_T("UPDATEDDATE"), dfDateTime); 
	m_ivf_appointmentTbl.AddField(_T("UPDATEDBY"), dfText, 20); 
	//m_ivf_appointmentTbl.AddField(_T("APPOINTMENT_DATE"), dfDateTime); 
	m_ivf_appointmentTbl.AddField(_T("DEPTID"), dfText, 7); 
	m_ivf_appointmentTbl.AddField(_T("ROOMID"), dfLong); 
	m_ivf_appointmentTbl.AddField(_T("DOCTOR"), dfText, 20); 
	m_ivf_appointmentTbl.AddField(_T("TYPEID"), dfText, 3); 
	m_ivf_appointmentTbl.AddField(_T("NOTE"), dfText, 254); 
	m_ivf_appointmentTbl.AddField(_T("ORDERID"), dfLong); 
	m_ivf_appointmentTbl.AddField(_T("APPOINTMENT_TIME"), dfText, 15); 
	m_ivf_appointmentTbl.AddField(_T("CATEGORYID"), dfText, 5); 
}
void CIVFAppointmentDialog2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTime.SetEvent(WE_SELENDOK, _OnTimeSelendokFnc);
	//m_wndTime.SetEvent(WE_SETFOCUS, _OnTimeSetfocusFnc);
	//m_wndTime.SetEvent(WE_KILLFOCUS, _OnTimeKillfocusFnc);
	//m_wndTime.SetEvent(WE_SELCHANGE, _OnTimeSelectChangeFnc);
	m_wndTime.SetEvent(WE_LOADDATA, _OnTimeLoadDataFnc);
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
void CIVFAppointmentDialog2::OnDoDataExchange(CDataExchange* pDX){
	//DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndTime.GetDlgCtrlID(), m_szTimeKey);
}
void CIVFAppointmentDialog2::UpdateJson(BOOL bSave){
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
void CIVFAppointmentDialog2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nMode = GetMode();
	szSQL.Format(_T("SELECT appointment_date, typeid, note, orderid, appointment_time ") \
				_T(" FROM ivf_appointment ") \
				_T(" WHERE docno = %ld AND IVF_APPOINTMENT_ID = %ld") \
				_T(" ORDER BY IVF_APPOINTMENT_ID desc"), m_nDocumentNo, m_nIdx);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("appointment_time"), m_szTimeKey);
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
void CIVFAppointmentDialog2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_ivf_appointmentTbl.SetValue(_T("APPOINTMENT_DATE"), m_szDate);
	m_ivf_appointmentTbl.SetValue(_T("APPOINTMENT_TIME"), m_szTimeKey);
	m_ivf_appointmentTbl.SetValue(_T("CATEGORYID"), _T("T"));
	m_ivf_appointmentTbl.SetValue(_T("TYPEID"), m_szTypeKey);
	m_ivf_appointmentTbl.SetValue(_T("NOTE"), m_szNote);
	m_ivf_appointmentTbl.SetValue(_T("DOCNO"), m_nDocumentNo);
	m_ivf_appointmentTbl.SetValue(_T("CREATEDBY"), pMF->GetCurrentUser());
	m_ivf_appointmentTbl.SetValue(_T("UPDATEDDATE"), pMF->GetSysDateTime());
	m_ivf_appointmentTbl.SetValue(_T("UPDATEDBY"), pMF->GetCurrentUser());
	m_ivf_appointmentTbl.SetValue(_T("DEPTID"), pMF->GetCurrentDepartmentID());
	m_ivf_appointmentTbl.SetValue(_T("ROOMID"), pMF->GetCurrentRoomID());
	m_ivf_appointmentTbl.SetValue(_T("DOCTOR"), pMF->GetCurrentUser());
	m_ivf_appointmentTbl.SetValue(_T("ORDERID"), m_nOrderId);

}
void CIVFAppointmentDialog2::SetDefaultValues(){

	//m_szDate.Empty();
	m_szTypeKey.Empty();
	m_szNote.Empty();
	m_szTimeKey.Empty();
}
int CIVFAppointmentDialog2::SetMode(int nMode){
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
			EnableButtons(TRUE, -1);
			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CIVFAppointmentDialog2::OnDateChange(){
	
} */
/*void CIVFAppointmentDialog2::OnDateSetfocus(){
	
} */
/*void CIVFAppointmentDialog2::OnDateKillfocus(){
	
} */
int CIVFAppointmentDialog2::OnDateCheckValue(){
	UpdateData();
	m_szNote.Format(_T("%s %s vào lúc %s")
		, m_wndType.GetCurrent(1), CDate::Convert(m_szDate, yyyymmdd, ddmmyyyy), m_szDate.Mid(11, 5));
	UpdateData(FALSE);
	return 0;
} 
void CIVFAppointmentDialog2::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFAppointmentDialog2::OnTypeSelendok(){
	 
}
/*void CIVFAppointmentDialog2::OnTypeSetfocus(){
	
}*/
/*void CIVFAppointmentDialog2::OnTypeKillfocus(){
	
}*/
long CIVFAppointmentDialog2::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndType, _T("ivf_appointment_type"), m_szTypeKey);
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFAppointmentDialog2::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFAppointmentDialog2::OnNoteChange(){
	
} */
/*void CIVFAppointmentDialog2::OnNoteSetfocus(){
	
} */
/*void CIVFAppointmentDialog2::OnNoteKillfocus(){
	
} */
int CIVFAppointmentDialog2::OnNoteCheckValue(){
	return 0;
} 
void CIVFAppointmentDialog2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFAppointmentDialog();
} 
void CIVFAppointmentDialog2::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*
	CPrintForms printer;
	printer.TM_OnPrintAppointmentSheet(m_nDocumentNo, pMF->m_szDept, true);	
	*/
	pMF->PrintIVFAppointmentSheet(m_nDocumentNo, m_nIdx);
} 
int CIVFAppointmentDialog2::OnAddIVFAppointmentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFAppointmentDialog2::OnEditIVFAppointmentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFAppointmentDialog2::OnDeleteIVFAppointmentDialog(){
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
 		OnCancelIVFAppointmentDialog();
 	}
	return 0;
}
int CIVFAppointmentDialog2::OnSaveIVFAppointmentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_ivf_appointmentTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE docno = %ld AND ivf_appointment_id = %ld"), m_nDocumentNo, m_nIdx);
 		szSQL = m_ivf_appointmentTbl.GetUpdateSQL(_T("createdby,createddate,orderid"));
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
int CIVFAppointmentDialog2::OnCancelIVFAppointmentDialog(){
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
int CIVFAppointmentDialog2::OnIVFAppointmentDialogListLoadData(){
	return 0;
}

void CIVFAppointmentDialog2::OnUpdateSelect()
{
	if (GetMode() == VM_VIEW)
	{
		SetMode(VM_EDIT);
	}
}
int CIVFAppointmentDialog2::OnTypeCheckValue()
{
	return 0;
}

long CIVFAppointmentDialog2::OnTimeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndTime, _T("ivf_appointment_time"), m_szTimeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTime.IsSearchKey() && !m_szTimeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTimeKey
};
	m_wndTime.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTime.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

void CIVFAppointmentDialog2::OnTimeSelendok(){
	UpdateData();
	m_szNote.Format(_T("%s %s")
		, m_wndType.GetCurrent(1), m_wndTime.GetCurrent(1));
	UpdateData(FALSE);
}

void CIVFAppointmentDialog2::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("UPDATE ivf_appointment ") \
				_T(" SET status = 'T', approveddate = systimestamp, approvedby = '%s' ") \
				_T(" WHERE ivf_appointment_id = %ld"), pMF->GetCurrentUser(), m_nIdx);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		SetMode(VM_TERM);
	}
} 