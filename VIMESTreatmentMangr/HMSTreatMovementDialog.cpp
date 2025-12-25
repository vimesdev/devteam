#include "HMSTreatMovementDialog.h"
#include "MainFrm.h"
/*static void _OnSendDepartmentChangeFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnSendDepartmentChange();
} */
/*static void _OnSendDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnSendDepartmentSetfocus();} */ 
/*static void _OnSendDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnSendDepartmentKillfocus();
} */
static int _OnSendDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatMovementDialog *)pWnd)->OnSendDepartmentCheckValue();
} 
static void _OnPerformDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatMovementDialog* )pWnd)->OnPerformDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnPerformDepartmentSelendok();
}
/*static void _OnPerformDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnPerformDepartmentKillfocus();
}*/
/*static void _OnPerformDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnPerformDepartmentKillfocus();
}*/
static long _OnPerformDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatMovementDialog *)pWnd)->OnPerformDepartmentLoadData();
}
/*static void _OnPerformDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnPerformDepartmentAddNew();
}*/
/*static void _OnSendDateChangeFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnSendDateChange();
} */
/*static void _OnSendDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnSendDateSetfocus();} */ 
/*static void _OnSendDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnSendDateKillfocus();
} */
static int _OnSendDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatMovementDialog *)pWnd)->OnSendDateCheckValue();
} 
/*static void _OnTerminatedDateChangeFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnTerminatedDateChange();
} */
/*static void _OnTerminatedDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnTerminatedDateSetfocus();} */ 
/*static void _OnTerminatedDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnTerminatedDateKillfocus();
} */
static int _OnTerminatedDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatMovementDialog *)pWnd)->OnTerminatedDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSTreatMovementDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatMovementDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSTreatMovementDialog *pVw = (CHMSTreatMovementDialog *)pWnd;
	pVw->OnSendSelect();
} 
static int _OnReturnDeptSelectFnc(CWnd *pWnd)
{
	return ((CHMSTreatMovementDialog*)pWnd)->OnReturnDeptSelect();
	
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatMovementDialog *pVw = (CHMSTreatMovementDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatMovementDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatMovementDialog*)pWnd)->OnAddHMSTreatMovementDialog();
} 
static int _OnEditHMSTreatMovementDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatMovementDialog*)pWnd)->OnEditHMSTreatMovementDialog();
} 
static int _OnDeleteHMSTreatMovementDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatMovementDialog*)pWnd)->OnDeleteHMSTreatMovementDialog();
} 
static int _OnSaveHMSTreatMovementDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatMovementDialog*)pWnd)->OnSaveHMSTreatMovementDialog();
} 
static int _OnCancelHMSTreatMovementDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatMovementDialog*)pWnd)->OnCancelHMSTreatMovementDialog();
}
static long _OnSendToDepartmentLoadDataFnc(CWnd *pWnd)
{
	return ((CHMSTreatMovementDialog*)pWnd)->OnSendToDepartmentLoadData();
}

static void _OnAddSelectFnc(CWnd *pWnd)
{
	CHMSTreatMovementDialog *pVw = (CHMSTreatMovementDialog *)pWnd;
	pVw->OnAddSelect();
} 

CHMSTreatMovementDialog::CHMSTreatMovementDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 510;
	m_nDlgHeight = 265;
	SetDefaultValues();
	m_bReturnFlag = false;
	m_bReturnMode = false;
}
CHMSTreatMovementDialog::~CHMSTreatMovementDialog(){
}
void CHMSTreatMovementDialog::OnCreateComponents()
{
	m_wndDepartmentMovementInformation.Create(this, _T("Thông tin chuyển khám chuyên khoa"), 4, 5, 819, 478);
	m_wndSendDepartmentLabel.Create(this, _T("Send Department"), 10, 30, 135, 55);
	m_wndSendToDepartment.Create(this,10, 61, 815, 235); 
	m_wndPerformDepartmentLabel.Create(this, _T("Perform Department"), 10, 241, 135, 266);
	m_wndPerformDepartment.Create(this,10, 271, 815, 296); 
	m_wndSendDateLabel.Create(this, _T("Send Date"), 10, 301, 135, 326);
	m_wndSendDate.Create(this,140, 301, 284, 326); 
	m_wndTerminatedDateLabel.Create(this, _T("Terminated Date"), 289, 301, 405, 326);
	m_wndTerminatedDate.Create(this,411, 301, 555, 326); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 331, 135, 356);
	m_wndNote.Create(this,10, 362, 815, 444 , 1, 0, 1);
	m_wndSend.Create(this, _T("&Send"), 0, 0, 0, 0);
	m_wndReturnDept.Create(this, _T("&Return Dept"), 629, 449, 719, 474);
	m_wndClose.Create(this, _T("&Close"), 724, 449, 814, 474);
	m_wndAdd.Create(this, _T("&Thêm khoa"), 489, 449, 624, 474);

	m_wndSendDepartment.Create(this, 0, 0, 0, 0);
	m_wndSendDepartment.ShowWindow(SW_HIDE);
	m_wndSendDepartment.EnableWindow(FALSE);
}
void CHMSTreatMovementDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSendDepartment.SetLimitText(35);
	//m_wndSendDepartment.SetCheckValue(true);
	m_wndSendDepartment.SetReadOnly(true);
	m_wndPerformDepartment.SetCheckValue(true);
	m_wndPerformDepartment.LimitText(35);
	m_wndSendDate.SetMax(CDateTime(pMF->GetSysDateTime()));
//	m_wndSendDate.SetCheckValue(true);
	m_wndSendDate.SetReadOnly(true);
	m_wndTerminatedDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndTerminatedDate.SetCheckValue(true);
	m_wndTerminatedDate.SetReadOnly(true);
	m_wndNote.SetLimitText(254);
	//m_wndNote.SetCheckValue(true);
	m_wndNote.SetReadOnly(false);


	m_wndPerformDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndPerformDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 80);
	m_wndPerformDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 350);

	m_wndSendToDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndSendToDepartment.InsertColumn(1, _T("Khoa gửi"), CFMT_TEXT, 90);
	m_wndSendToDepartment.InsertColumn(2, _T("Khoa đến"), CFMT_TEXT, 90);
	m_wndSendToDepartment.InsertColumn(3, _T("Name"), CFMT_TEXT, 350);
	m_wndSendToDepartment.InsertColumn(4, _T("status"), CFMT_TEXT, 100);
	m_wndSendToDepartment.InsertColumn(5, _T("note"), CFMT_TEXT, 250);
	m_wndSendToDepartment.InsertColumn(6, _T("T/G đến"), CFMT_DATETIME, 130);
	m_wndSendToDepartment.InsertColumn(7, _T("T/G kết thúc"), CFMT_DATETIME, 130);
	m_wndSendToDepartment.SetCheckBox(TRUE);

	m_hms_treat_movementTbl.SetTableName(_T("hms_treat_movement"));
	//m_hms_treat_movementTbl.AddField(_T("HTM_TREAT_MOVEMENT_ID"), dfLong); 
	m_hms_treat_movementTbl.AddField(_T("HTM_CREATEDBY"), dfText, 20); 
	m_hms_treat_movementTbl.AddField(_T("HTM_CREATEDDATE"), dfDateTime); 
	m_hms_treat_movementTbl.AddField(_T("HTM_UPDATEDBY"), dfText, 20); 
	m_hms_treat_movementTbl.AddField(_T("HTM_UPDATEDDATE"), dfDateTime); 
	m_hms_treat_movementTbl.AddField(_T("HTM_DOCNO"), dfLong); 
	m_hms_treat_movementTbl.AddField(_T("HTM_REFIDX"), dfLong); 
	m_hms_treat_movementTbl.AddField(_T("HTM_SEND_DEPTID"), dfText, 7); 
	m_hms_treat_movementTbl.AddField(_T("HTM_PERFORM_DEPTID"), dfText, 7); 
	m_hms_treat_movementTbl.AddField(_T("HTM_SEND_DATE"), dfDateTime); 
	m_hms_treat_movementTbl.AddField(_T("HTM_TERMINATED_DATE"), dfDateTime); 
	m_hms_treat_movementTbl.AddField(_T("HTM_NOTE"), dfText, 254); 

}
void CHMSTreatMovementDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSendDepartment.SetEvent(WE_CHANGE, _OnSendDepartmentChangeFnc);
	//m_wndSendDepartment.SetEvent(WE_SETFOCUS, _OnSendDepartmentSetfocusFnc);
	//m_wndSendDepartment.SetEvent(WE_KILLFOCUS, _OnSendDepartmentKillfocusFnc);
	m_wndSendDepartment.SetEvent(WE_CHECKVALUE, _OnSendDepartmentCheckValueFnc);
	m_wndPerformDepartment.SetEvent(WE_SELENDOK, _OnPerformDepartmentSelendokFnc);
	m_wndSendToDepartment.SetEvent(WE_LOADDATA, _OnSendToDepartmentLoadDataFnc);
	//m_wndPerformDepartment.SetEvent(WE_SETFOCUS, _OnPerformDepartmentSetfocusFnc);
	//m_wndPerformDepartment.SetEvent(WE_KILLFOCUS, _OnPerformDepartmentKillfocusFnc);
	m_wndPerformDepartment.SetEvent(WE_SELCHANGE, _OnPerformDepartmentSelectChangeFnc);
	m_wndPerformDepartment.SetEvent(WE_LOADDATA, _OnPerformDepartmentLoadDataFnc);
	//m_wndPerformDepartment.SetEvent(WE_ADDNEW, _OnPerformDepartmentAddNewFnc);
	//m_wndSendDate.SetEvent(WE_CHANGE, _OnSendDateChangeFnc);
	//m_wndSendDate.SetEvent(WE_SETFOCUS, _OnSendDateSetfocusFnc);
	//m_wndSendDate.SetEvent(WE_KILLFOCUS, _OnSendDateKillfocusFnc);
	m_wndSendDate.SetEvent(WE_CHECKVALUE, _OnSendDateCheckValueFnc);
	//m_wndTerminatedDate.SetEvent(WE_CHANGE, _OnTerminatedDateChangeFnc);
	//m_wndTerminatedDate.SetEvent(WE_SETFOCUS, _OnTerminatedDateSetfocusFnc);
	//m_wndTerminatedDate.SetEvent(WE_KILLFOCUS, _OnTerminatedDateKillfocusFnc);
	m_wndTerminatedDate.SetEvent(WE_CHECKVALUE, _OnTerminatedDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	
	m_wndSendToDepartment.AddEvent(1, _T("Kết thúc lượt khám chuyên khoa"), _OnReturnDeptSelectFnc);
	

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndReturnDept.SetEvent(WE_CLICK, _OnReturnDeptSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetDefaultValues();
	m_szSendDate = pMF->GetSysDateTime();
	m_szTerminatedDate = pMF->GetSysDateTime();

	GetDataToScreen();
	OnSendToDepartmentLoadData();
	SetFocus();

}
void CHMSTreatMovementDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSendDepartment.GetDlgCtrlID(), m_szSendDepartment);
	DDX_TextEx(pDX, m_wndPerformDepartment.GetDlgCtrlID(), m_szPerformDepartmentKey);
	DDX_TextEx(pDX, m_wndSendDate.GetDlgCtrlID(), m_szSendDate);
	DDX_TextEx(pDX, m_wndTerminatedDate.GetDlgCtrlID(), m_szTerminatedDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSTreatMovementDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr;
	
	szSQL.Format(_T("SELECT htr_status as statusid FROM hms_treatment_record ") \
		_T("WHERE htr_docno=%ld and htr_idx=%ld "),m_nDocumentNo, m_nRefIdx);	 
	rsl.ExecSQL(szSQL);
	
	if(!rsl.IsEOF())
	{
		rsl.GetValue(_T("statusid"), m_szDocStatus);
		//_msg(_T("%s"), szSQL);
	}

	szSQL.Format(_T("SELECT * FROM hms_treat_movement ") \
		_T("WHERE htm_docno=%ld and htm_refidx=%ld ") \
		_T("Order By htm_treat_movement_id DESC"), m_nDocumentNo, m_nRefIdx);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
	if(!rs.IsEOF()){
		rs.GetValue(_T("htm_treat_movement_id"), m_nID);
		rs.GetValue(_T("htm_send_deptid"), tmpStr);
		//rs.GetValue(_T("htm_perform_deptid"), m_szPerformDepartmentKey);
		rs.GetValue(_T("htm_send_date"), m_szSendDate);
		rs.GetValue(_T("htm_terminated_date"), m_szTerminatedDate);
		rs.GetValue(_T("htm_note"), m_szNote);
		rs.GetValue(_T("htm_status"), m_szStatus);
	}
	else
	{
		m_szStatus.Empty();
	}
	if(m_szStatus == _T("O"))
	{
		SetMode(VM_EDIT);
	}
	else
	{
		SetMode(VM_ADD);
	}
	

}
void CHMSTreatMovementDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_treat_movementTbl.SetValue(_T("htm_treat_movement_id"), m_nID);
	m_hms_treat_movementTbl.SetValue(_T("htm_createdby"), pMF->GetCurrentUser());
	m_hms_treat_movementTbl.SetValue(_T("htm_updatedby"), pMF->GetCurrentUser());
	m_hms_treat_movementTbl.SetValue(_T("htm_updateddate"), pMF->GetSysDateTime());
	m_hms_treat_movementTbl.SetValue(_T("htm_docno"), m_nDocumentNo);
	m_hms_treat_movementTbl.SetValue(_T("htm_refidx"), m_nRefIdx);
	m_hms_treat_movementTbl.SetValue(_T("htm_send_deptid"), pMF->GetCurrentDepartmentID());
	m_hms_treat_movementTbl.SetValue(_T("htm_perform_deptid"), m_szPerformDepartmentKey);
	m_hms_treat_movementTbl.SetValue(_T("htm_send_date"), m_szSendDate);
	m_hms_treat_movementTbl.SetValue(_T("htm_terminated_date"),m_szTerminatedDate);
	m_hms_treat_movementTbl.SetValue(_T("htm_note"), m_szNote);
}
void CHMSTreatMovementDialog::SetDefaultValues(){

	m_szSendDepartment.Empty();
	m_szPerformDepartmentKey.Empty();
	m_szSendDate.Empty();
	m_szTerminatedDate.Empty();
	m_szNote.Empty();

}
int CHMSTreatMovementDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
			m_szSendDate = pMF->GetSysDateTime();

 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 2, -1);
// 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
			m_szTerminatedDate = pMF->GetSysDateTime();

 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
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

		if(m_szStatus == _T("O"))
		{
			//m_wndPerformDepartment.EnableWindow(FALSE);
			m_wndSend.EnableWindow(FALSE);
			m_wndReturnDept.EnableWindow(TRUE);
			//m_szTerminatedDate.Empty();
		}
		else
		{
			
			m_wndReturnDept.EnableWindow(FALSE);
			m_wndSend.EnableWindow(TRUE);
			m_wndAdd.EnableWindow(TRUE);
		}

		if(m_bReturnMode)
		{
			m_wndSend.EnableWindow(FALSE);
			m_wndAdd.EnableWindow(FALSE);
		}

		if (m_szDocStatus != _T("I"))
		{
			m_wndAdd.EnableWindow(false);		
		}
		else
		{
			m_wndAdd.EnableWindow(true);			
		}
		m_wndSend.EnableWindow(false);
		m_wndSendDate.EnableWindow(true);
		m_szSendDate = pMF->GetSysDateTime();
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSTreatMovementDialog::OnSendDepartmentChange(){
	
} */
/*void CHMSTreatMovementDialog::OnSendDepartmentSetfocus(){
	
} */
/*void CHMSTreatMovementDialog::OnSendDepartmentKillfocus(){
	
} */
int CHMSTreatMovementDialog::OnSendDepartmentCheckValue()
{
	return 0;
} 
void CHMSTreatMovementDialog::OnPerformDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatMovementDialog::OnPerformDepartmentSelendok()
{
	//_msg(_T("chào lộc"));
	//m_wndAdd.SetFocus();
	//UpdateData(FALSE);
}
/*void CHMSTreatMovementDialog::OnPerformDepartmentSetfocus(){
	
}*/
/*void CHMSTreatMovementDialog::OnPerformDepartmentKillfocus(){
	
}*/

long CHMSTreatMovementDialog::OnSendToDepartmentLoadData()
{

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, szStatusStr;

	m_wndSendToDepartment.BeginLoad();	
	int nCount = 0;
	
	szSQL.Format(_T(" SELECT HTM_TREAT_MOVEMENT_ID as id,") \
	_T(" HTM_SEND_DEPTID as fromdept,") \
	_T(" HTM_PERFORM_DEPTID as todept,") \
	_T(" sd_name as todeptname,") \
	_T(" htm_status as status,") \
	_T(" htm_note as note,") \
	_T(" htm_send_date as begintime,") \
	_T(" CASE when htm_status = 'T' then HTM_TERMINATED_DATE else NULL end as endtime") \
	_T(" from hms_treat_movement") \
	_T(" left join sys_dept ON (HTM_PERFORM_DEPTID=sd_id)") \
	_T(" WHERE HTM_DOCNO=%ld") \
	_T(" and htm_refidx=%d") \
	_T(" order by HTM_TREAT_MOVEMENT_ID desc"), m_nDocumentNo, pMF->m_nRefIndex);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 		
		rs.GetValue(_T("status"), szStatus);
		if (szStatus == _T("O"))
		{
			szStatusStr = _T("Đang gửi khám");
		}
		else
			szStatusStr = _T("Đã kết thúc");

		int nItem = m_wndSendToDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("fromdept")),
			rs.GetValue(_T("todept")),
			rs.GetValue(_T("todeptname")),			
			szStatusStr,
			rs.GetValue(_T("note")),
			rs.GetValue(_T("begintime")),
			rs.GetValue(_T("endtime")),
			NULL);
		if(szStatus == _T("T"))
		{
			m_wndSendToDepartment.SetSubItemBkColor(nItem, 0, RGB(255, 128, 0), FALSE);
			m_wndSendToDepartment.SetSubItemTextColor(nItem, 0, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndSendToDepartment.EndLoad();
	return nCount;
}

long CHMSTreatMovementDialog::OnPerformDepartmentLoadData()
{
	/*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_id <>'%s' and (sd_type='DT' OR SD_ID='C11') and sd_id not in (select HTM_PERFORM_DEPTID from hms_treat_movement WHERE htm_docno=%ld AND htm_refidx=%ld AND htm_status='O')"), pMF->m_szDept, m_nDocumentNo, pMF->m_nRefIndex);
	return pMF->LoadDepartment(&m_wndPerformDepartment, m_szPerformDepartmentKey, szFilter);*/
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDepartment.IsSearchKey() && !m_szPerformDepartmentKey.IsEmpty())
	{
	 szWhere.Format(_T(" and id='%s' "), m_szPerformDepartmentKey
	};
	m_wndPerformDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPerformDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDepartment.IsSearchKey() && !m_szPerformDepartmentKey.IsEmpty())
	{
	 szWhere.Format(_T(" and sd_id='%s' "), m_szPerformDepartmentKey);
	}
	m_wndPerformDepartment.DeleteAllItems();
	m_wndPerformDepartment.Format(3, 2, 10, 2);

	szSQL.Format(_T(" SELECT sd_id  AS id,") \
	_T("   SD_ID_ALIAS AS aliasid,") \
	_T("   sd_name     AS name") \
	_T(" FROM sys_dept") \
	_T(" WHERE 1        =1 %s ") \
	_T(" AND sd_isactive='Y'") \
	_T(" AND sd_id     <> '%s'") \
	_T(" AND (sd_type   IN ('DT', 'HA')") \
	_T(" OR SD_ID       ='C11')") \
	_T(" AND sd_id NOT IN") \
	_T("   (SELECT HTM_PERFORM_DEPTID") \
	_T("   FROM hms_treat_movement") \
	_T("   WHERE htm_docno=%ld") \
	_T("   AND htm_refidx =%ld") \
	_T("   AND htm_status ='O'") \
	_T("   )") \
	_T(" ORDER BY sd_id "), szWhere, pMF->GetCurrentDepartmentID(), m_nDocumentNo, pMF->m_nRefIndex);	

	int nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPerformDepartment.AddItems
			(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("aliasid")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;


	return 0;
}
/*void CHMSTreatMovementDialog::OnPerformDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatMovementDialog::OnSendDateChange(){
	
} */
/*void CHMSTreatMovementDialog::OnSendDateSetfocus(){
	
} */
/*void CHMSTreatMovementDialog::OnSendDateKillfocus(){
	
} */
int CHMSTreatMovementDialog::OnSendDateCheckValue(){
	return 0;
} 
/*void CHMSTreatMovementDialog::OnTerminatedDateChange(){
	
} */
/*void CHMSTreatMovementDialog::OnTerminatedDateSetfocus(){
	
} */
/*void CHMSTreatMovementDialog::OnTerminatedDateKillfocus(){
	
} */
int CHMSTreatMovementDialog::OnTerminatedDateCheckValue(){
	return 0;
} 
/*void CHMSTreatMovementDialog::OnNoteChange(){
	
} */
/*void CHMSTreatMovementDialog::OnNoteSetfocus(){
	
} */
/*void CHMSTreatMovementDialog::OnNoteKillfocus(){
	
} */

void CHMSTreatMovementDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	
 	if(!IsValidateData())
 		return;
	

 	CString szSQL;
	int ncount = 0;
	//Nếu đã có rồi thì không insert nữa//
	
	szSQL.Format(_T(" SELECT ") \
	_T("   count(*)") \
	_T("   FROM hms_treat_movement") \
	_T("   WHERE htm_docno=%ld") \
	_T("   AND htm_refidx =%ld") \
	_T("   AND htm_status ='O'") \
	_T("   AND HTM_PERFORM_DEPTID='%s'"), m_nDocumentNo, pMF->m_nRefIndex, m_szPerformDepartmentKey);
	rs.ExecSQL(szSQL);
	ncount = rs.GetIntValue();
	//_msg(_T("%s"), szSQL);
	if (ncount >0)
	{
		_msg(_T("Bệnh nhân đã được gửi khám chuyên khoa %s rồi, không gửi được nữa!"), m_szPerformDepartmentKey);
		return;
	}
	//m_szSendDate = pMF->GetSysDateTime();
 	szSQL = m_hms_treat_movementTbl.GetInsertSQL(); 	
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		_msg(_T("Đã gửi bệnh nhân đi khám chuyên khoa tại khoa %s!"), m_szPerformDepartmentKey);
 	}
 	else
 	{
 	} 	
	OnSendToDepartmentLoadData();
	
} 

int CHMSTreatMovementDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSTreatMovementDialog::OnSendSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int ret = OnSaveHMSTreatMovementDialog();
	if(ret > 0)
	{
		CGuiDialog::OnOK();
	}

} 
int CHMSTreatMovementDialog::OnReturnDeptSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szDepts, szWhere ;
	int nTreatID = 0;
	//_msg(_T("Chào Lộc"));
	/*int nSel = m_wndSendToDepartment.GetCurSel();
	if(nSel < 0) 
	return;

	nTreatID = str2long(m_wndSendToDepartment.GetItemText(nSel, 0));*/
	
	for (int i = 0; i < m_wndSendToDepartment.GetItemCount(); i++)
	{
		if (m_wndSendToDepartment.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndSendToDepartment.GetItemText(i, 0));
		}
	}


	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and HTM_TREAT_MOVEMENT_ID IN(%s) "), szDepts);
	}
	else
	{
		szWhere.AppendFormat(_T(" and 0>1"), szDepts);
	}
	//_msg(_T("%s"), szDepts);
	 int ret = ShowMessageBox(_T("Bạn muốn kết thúc đợt điều trị kết hợp, OK?"),MB_YESNO);
		if(ret == IDNO)
		return 0;
		else
	{
	szSQL.Format(_T("UPDATE hms_treat_movement SET htm_status='T', htm_terminated_date=to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T("WHERE htm_docno=%ld and htm_refidx=%ld and htm_status='O' %s "),
		m_szTerminatedDate, m_nDocumentNo, pMF->m_nRefIndex, szWhere);
	int ret = pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if(ret > 0)
		{
			szSQL.Format(_T("UPDATE hms_treatment_record SET htr_ctdeptid='', htr_combinedtreat='N' ") \
				_T("WHERE htr_docno=%ld and htr_idx=%ld and htr_status='I' "),
				m_nDocumentNo, pMF->m_nRefIndex);
			pMF->ExecSQL(szSQL);
			OnSendToDepartmentLoadData();
			//CGuiDialog::OnOK();
		}
	}
    return 0;
} 
void CHMSTreatMovementDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CHMSTreatMovementDialog::OnAddHMSTreatMovementDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatMovementDialog::OnEditHMSTreatMovementDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatMovementDialog::OnDeleteHMSTreatMovementDialog(){
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
 		OnCancelHMSTreatMovementDialog();
 	}
	return 0;
}
int CHMSTreatMovementDialog::OnSaveHMSTreatMovementDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD)
	{
 		szSQL = m_hms_treat_movementTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT)
	{
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		szSQL = m_hms_treat_movementTbl.GetUpdateSQL(_T("htm_treat_movement_id, htm_docno, htm_createdby,htm_createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSTreatMovementDialogListLoadData();
		szSQL.Format(_T("UPDATE hms_treatment_record SET htr_ctdeptid='%s', htr_combinedtreat='Y' ") \
			_T("WHERE htr_docno=%ld and htr_idx=%ld and htr_status='I' "),
			m_szPerformDepartmentKey, m_nDocumentNo, m_nRefIdx);
		pMF->ExecSQL(szSQL);
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatMovementDialog::OnCancelHMSTreatMovementDialog(){
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
int CHMSTreatMovementDialog::OnHMSTreatMovementDialogListLoadData(){
	return 0;
}