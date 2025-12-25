#include "HMSAppointmentReexamination.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSAppointmentReexamination *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReexamination *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReexamination *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentReexamination *)pWnd)->OnDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSAppointmentReexamination *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReexamination *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentReexamination *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentReexamination *)pWnd)->OnNoteCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSAppointmentReexamination *pVw = (CHMSAppointmentReexamination *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAppointmentReexamination *pVw = (CHMSAppointmentReexamination *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAppointmentReexamination *pVw = (CHMSAppointmentReexamination *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAppointmentReexamination *pVw = (CHMSAppointmentReexamination *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSAppointmentReexaminationFnc(CWnd *pWnd){
	 return ((CHMSAppointmentReexamination*)pWnd)->OnAddHMSAppointmentReexamination();
} 
static int _OnEditHMSAppointmentReexaminationFnc(CWnd *pWnd){
	 return ((CHMSAppointmentReexamination*)pWnd)->OnEditHMSAppointmentReexamination();
} 
static int _OnDeleteHMSAppointmentReexaminationFnc(CWnd *pWnd){
	 return ((CHMSAppointmentReexamination*)pWnd)->OnDeleteHMSAppointmentReexamination();
} 
static int _OnSaveHMSAppointmentReexaminationFnc(CWnd *pWnd){
	 return ((CHMSAppointmentReexamination*)pWnd)->OnSaveHMSAppointmentReexamination();
} 
static int _OnCancelHMSAppointmentReexaminationFnc(CWnd *pWnd){
	 return ((CHMSAppointmentReexamination*)pWnd)->OnCancelHMSAppointmentReexamination();
} 
CHMSAppointmentReexamination::CHMSAppointmentReexamination(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSAppointmentReexamination::~CHMSAppointmentReexamination(){
}
void CHMSAppointmentReexamination::OnCreateComponents(){
	m_wndAppointmentReexamination.Create(this, _T("Appointment Re-examination"), 5, 5, 600, 140);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 90, 55);
	m_wndDate.Create(this,95, 30, 185, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 90, 85);
	m_wndNote.Create(this,95, 60, 595, 135); 
	m_wndUpdate.Create(this, _T("&Update"), 285, 145, 360, 170);
	m_wndSave.Create(this, _T("&Save"), 365, 145, 440, 170);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 145, 520, 170);
	m_wndPrint.Create(this, _T("&Print"), 525, 145, 600, 170);

}
void CHMSAppointmentReexamination::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);

}
void CHMSAppointmentReexamination::OnSetWindowEvents(){
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAppointmentReexaminationFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAppointmentReexaminationFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAppointmentReexaminationFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAppointmentReexaminationFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAppointmentReexaminationFnc, 0, 'T', VK_CONTROL);

}
void CHMSAppointmentReexamination::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSAppointmentReexamination::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAppointmentReexamination::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAppointmentReexamination::SetDefaultValues(){

	m_szDate.Empty();
	m_szNote.Empty();

}
int CHMSAppointmentReexamination::SetMode(int nMode){ 
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
/*void CHMSAppointmentReexamination::OnDateChange(){
	
} */
/*void CHMSAppointmentReexamination::OnDateSetfocus(){
	
} */
/*void CHMSAppointmentReexamination::OnDateKillfocus(){
	
} */
int CHMSAppointmentReexamination::OnDateCheckValue(){
	return 0;
} 
/*void CHMSAppointmentReexamination::OnNoteChange(){
	
} */
/*void CHMSAppointmentReexamination::OnNoteSetfocus(){
	
} */
/*void CHMSAppointmentReexamination::OnNoteKillfocus(){
	
} */
int CHMSAppointmentReexamination::OnNoteCheckValue(){
	return 0;
} 
void CHMSAppointmentReexamination::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAppointmentReexamination::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAppointmentReexamination::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAppointmentReexamination::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAppointmentReexamination::OnAddHMSAppointmentReexamination(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSAppointmentReexamination"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSAppointmentReexamination::OnEditHMSAppointmentReexamination(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSAppointmentReexamination"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSAppointmentReexamination::OnDeleteHMSAppointmentReexamination(){
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
 		OnCancelHMSAppointmentReexamination(); 
 	}
return 0;
 } 
int CHMSAppointmentReexamination::OnSaveHMSAppointmentReexamination(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnHMSAppointmentReexaminationListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSAppointmentReexamination::OnCancelHMSAppointmentReexamination(){
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
int CHMSAppointmentReexamination::OnHMSAppointmentReexaminationListLoadData(){
	return 0;
}
