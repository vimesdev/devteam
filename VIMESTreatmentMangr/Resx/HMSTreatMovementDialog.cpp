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
static void _OnReturnDeptSelectFnc(CWnd *pWnd){
	CHMSTreatMovementDialog *pVw = (CHMSTreatMovementDialog *)pWnd;
	pVw->OnReturnDeptSelect();
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
CHMSTreatMovementDialog::CHMSTreatMovementDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 515;
	m_nDlgHeight = 265;
	SetDefaultValues();
}
CHMSTreatMovementDialog::~CHMSTreatMovementDialog(){
}
void CHMSTreatMovementDialog::OnCreateComponents(){
	m_wndDepartmentMovementInformation.Create(this, _T("Department Movement Information"), 5, 5, 505, 230);
	m_wndSendDepartmentLabel.Create(this, _T("Send Department"), 10, 30, 135, 55);
	m_wndSendDepartment.Create(this,140, 30, 500, 55); 
	m_wndPerformDepartmentLabel.Create(this, _T("Perform Department"), 10, 60, 135, 85);
	m_wndPerformDepartment.Create(this,140, 60, 500, 85); 
	m_wndSendDateLabel.Create(this, _T("Send Date"), 10, 90, 135, 115);
	m_wndSendDate.Create(this,140, 90, 265, 115); 
	m_wndTerminatedDateLabel.Create(this, _T("Terminated Date"), 270, 90, 370, 115);
	m_wndTerminatedDate.Create(this,375, 90, 500, 115); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 120, 135, 145);
	m_wndNote.Create(this,140, 120, 501, 225); 
	m_wndSend.Create(this, _T("&Send"), 225, 235, 315, 260);
	m_wndReturnDept.Create(this, _T("&Return Dept"), 320, 235, 410, 260);
	m_wndClose.Create(this, _T("&Close"), 415, 235, 505, 260);

}
void CHMSTreatMovementDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSendDepartment.SetLimitText(35);
	m_wndSendDepartment.SetCheckValue(true);
	m_wndPerformDepartment.SetCheckValue(true);
	m_wndPerformDepartment.LimitText(35);
	m_wndSendDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndSendDate.SetCheckValue(true);
	m_wndTerminatedDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTerminatedDate.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);


	m_wndPerformDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPerformDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_treat_movementTbl.SetTableName(_T("hms_treat_movement"));
	m_hms_treat_movementTbl.AddField(_T("HTM_TREAT_MOVEMENT_ID"), dfLong); 
	m_hms_treat_movementTbl.AddField(_T("HTM_CREATEDBY"), dfText, 20); 
	m_hms_treat_movementTbl.AddField(_T("HTM_CREATEDDATE"), dfDateTime); 
	m_hms_treat_movementTbl.AddField(_T("HTM_UPDATEDBY"), dfText, 20); 
	m_hms_treat_movementTbl.AddField(_T("HTM_UPDATEDDATE"), dfDateTime); 
	m_hms_treat_movementTbl.AddField(_T("HTM_DOCNO"), dfLong); 
	m_hms_treat_movementTbl.AddField(_T("HTM_REFIDX"), dfLong); 
	m_hms_treat_movementTbl.AddField(_T("HTM_SEND_DEPTID"), dfText, 7); 
	m_hms_treat_movementTbl.AddField(_T("HTM_PERFORM_DEPTID"), dfText, 7); 
	m_hms_treat_movementTbl.AddField(_T("HTM_SEND_DATE"), dfDateTime); 
	m_hms_treat_movementTbl.AddField(_T("HTM_PERFORM_DATE"), dfDateTime); 
	m_hms_treat_movementTbl.AddField(_T("HTM_NOTE"), dfText, 254); 

}
void CHMSTreatMovementDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSendDepartment.SetEvent(WE_CHANGE, _OnSendDepartmentChangeFnc);
	//m_wndSendDepartment.SetEvent(WE_SETFOCUS, _OnSendDepartmentSetfocusFnc);
	//m_wndSendDepartment.SetEvent(WE_KILLFOCUS, _OnSendDepartmentKillfocusFnc);
	m_wndSendDepartment.SetEvent(WE_CHECKVALUE, _OnSendDepartmentCheckValueFnc);
	m_wndPerformDepartment.SetEvent(WE_SELENDOK, _OnPerformDepartmentSelendokFnc);
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
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndReturnDept.SetEvent(WE_CLICK, _OnReturnDeptSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSTreatMovementDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSendDepartment.GetDlgCtrlID(), m_szSendDepartment);
	DDX_TextEx(pDX, m_wndPerformDepartment.GetDlgCtrlID(), m_szPerformDepartmentKey);
	DDX_TextEx(pDX, m_wndSendDate.GetDlgCtrlID(), m_szSendDate);
	DDX_TextEx(pDX, m_wndTerminatedDate.GetDlgCtrlID(), m_szTerminatedDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSTreatMovementDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatMovementDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

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
/*void CHMSTreatMovementDialog::OnSendDepartmentChange(){
	
} */
/*void CHMSTreatMovementDialog::OnSendDepartmentSetfocus(){
	
} */
/*void CHMSTreatMovementDialog::OnSendDepartmentKillfocus(){
	
} */
int CHMSTreatMovementDialog::OnSendDepartmentCheckValue(){
	return 0;
} 
void CHMSTreatMovementDialog::OnPerformDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatMovementDialog::OnPerformDepartmentSelendok(){
	 
}
/*void CHMSTreatMovementDialog::OnPerformDepartmentSetfocus(){
	
}*/
/*void CHMSTreatMovementDialog::OnPerformDepartmentKillfocus(){
	
}*/
long CHMSTreatMovementDialog::OnPerformDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDepartment.IsSearchKey() && !m_szPerformDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPerformDepartmentKey
};
	m_wndPerformDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
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
int CHMSTreatMovementDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSTreatMovementDialog::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatMovementDialog::OnReturnDeptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatMovementDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_treat_movementTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_treat_movementTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSTreatMovementDialogListLoadData();
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
