#include "HMSAppointmentDialog.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAppointmentDateChangeFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnAppointmentDateChange();
} */
/*static void _OnAppointmentDateSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnAppointmentDateSetfocus();} */ 
/*static void _OnAppointmentDateKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnAppointmentDateKillfocus();
} */
static int _OnAppointmentDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentDialog *)pWnd)->OnAppointmentDateCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAppointmentDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSAppointmentDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSAppointmentDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSAppointmentDialog *pVw = (CHMSAppointmentDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAppointmentDialog *pVw = (CHMSAppointmentDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAppointmentDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentDialog*)pWnd)->OnAddHMSAppointmentDialog();
} 
static int _OnEditHMSAppointmentDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentDialog*)pWnd)->OnEditHMSAppointmentDialog();
} 
static int _OnDeleteHMSAppointmentDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentDialog*)pWnd)->OnDeleteHMSAppointmentDialog();
} 
static int _OnSaveHMSAppointmentDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentDialog*)pWnd)->OnSaveHMSAppointmentDialog();
} 
static int _OnCancelHMSAppointmentDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentDialog*)pWnd)->OnCancelHMSAppointmentDialog();
} 
CHMSAppointmentDialog::CHMSAppointmentDialog(){

	m_nDlgWidth = 365;
	m_nDlgHeight = 195;
	SetDefaultValues();
}
CHMSAppointmentDialog::~CHMSAppointmentDialog(){
}
void CHMSAppointmentDialog::OnCreateComponents(){
	m_wndAppointmentInformation.Create(this, _T("Appointment Information"), 5, 5, 338, 150);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 130, 55);
	m_wndDocumentNo.Create(this,135, 30, 255, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 130, 85);
	m_wndPatientName.Create(this,135, 60, 335, 85); 
	m_wndAppointmentDateLabel.Create(this, _T("Appointment Date"), 10, 90, 130, 115);
	m_wndAppointmentDate.Create(this,135, 90, 255, 115); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 120, 130, 145);
	m_wndRoom.Create(this,135, 120, 335, 145); 
	m_wndOK.Create(this, _T("&OK"), 175, 155, 255, 180);
	m_wndClose.Create(this, _T("&Close"), 260, 155, 340, 180);

}
void CHMSAppointmentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndAppointmentDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAppointmentDate.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSAppointmentDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAppointmentDate.SetEvent(WE_CHANGE, _OnAppointmentDateChangeFnc);
	//m_wndAppointmentDate.SetEvent(WE_SETFOCUS, _OnAppointmentDateSetfocusFnc);
	//m_wndAppointmentDate.SetEvent(WE_KILLFOCUS, _OnAppointmentDateKillfocusFnc);
	m_wndAppointmentDate.SetEvent(WE_CHECKVALUE, _OnAppointmentDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAppointmentDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAppointmentDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAppointmentDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAppointmentDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAppointmentDialogFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSAppointmentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndAppointmentDate.GetDlgCtrlID(), m_szAppointmentDate);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void CHMSAppointmentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAppointmentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAppointmentDialog::SetDefaultValues(){

	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szAppointmentDate.Empty();
	m_szRoomKey.Empty();

}
int CHMSAppointmentDialog::SetMode(int nMode){
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
/*void CHMSAppointmentDialog::OnDocumentNoChange(){
	
} */
/*void CHMSAppointmentDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSAppointmentDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSAppointmentDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSAppointmentDialog::OnPatientNameChange(){
	
} */
/*void CHMSAppointmentDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSAppointmentDialog::OnPatientNameKillfocus(){
	
} */
int CHMSAppointmentDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSAppointmentDialog::OnAppointmentDateChange(){
	
} */
/*void CHMSAppointmentDialog::OnAppointmentDateSetfocus(){
	
} */
/*void CHMSAppointmentDialog::OnAppointmentDateKillfocus(){
	
} */
int CHMSAppointmentDialog::OnAppointmentDateCheckValue(){
	return 0;
} 
void CHMSAppointmentDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAppointmentDialog::OnRoomSelendok(){
	 
}
/*void CHMSAppointmentDialog::OnRoomSetfocus(){
	
}*/
/*void CHMSAppointmentDialog::OnRoomKillfocus(){
	
}*/
long CHMSAppointmentDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRoomKey
};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAppointmentDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAppointmentDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAppointmentDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAppointmentDialog::OnAddHMSAppointmentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAppointmentDialog::OnEditHMSAppointmentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAppointmentDialog::OnDeleteHMSAppointmentDialog(){
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
 		OnCancelHMSAppointmentDialog();
 	}
	return 0;
}
int CHMSAppointmentDialog::OnSaveHMSAppointmentDialog(){
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
 		//OnHMSAppointmentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAppointmentDialog::OnCancelHMSAppointmentDialog(){
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
int CHMSAppointmentDialog::OnHMSAppointmentDialogListLoadData(){
	return 0;
}
