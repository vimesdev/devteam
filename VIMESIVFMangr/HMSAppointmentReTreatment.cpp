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
CHMSAppointmentReTreatment::CHMSAppointmentReTreatment(CWnd* pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSAppointmentReTreatment::~CHMSAppointmentReTreatment(){
}
void CHMSAppointmentReTreatment::OnCreateComponents(){
	m_wndAppointmentReTreatment.Create(this, _T("Appointment Re-examine"), 5, 5, 600, 140);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 90, 55);
	m_wndDate.Create(this,95, 30, 185, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 90, 85);
	m_wndNote.Create(this,95, 60, 595, 135, TRUE, FALSE, TRUE); 
	m_wndUpdate.Create(this, _T("&Update"), 285, 145, 360, 170);
	m_wndSave.Create(this, _T("&Save"), 365, 145, 440, 170);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 145, 520, 170);
	m_wndPrint.Create(this, _T("&Print"), 525, 145, 600, 170);

}
void CHMSAppointmentReTreatment::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
}
void CHMSAppointmentReTreatment::OnSetWindowEvents(){
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

}
void CHMSAppointmentReTreatment::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_reexam WHERE hre_docno=%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hre_date"), m_szDate);
		rs.GetValue(_T("hre_note"), m_szNote);
		
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
	if(m_szDate.IsEmpty())
		m_szDate = pMF->GetSysDate();
}
void CHMSAppointmentReTreatment::GetScreenToData(){
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

}
void CHMSAppointmentReTreatment::SetDefaultValues(){

	m_szDate.Empty();
	m_szNote.Empty();

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
/*void CHMSAppointmentReTreatment::OnNoteChange(){
	
} */
/*void CHMSAppointmentReTreatment::OnNoteSetfocus(){
	
} */
/*void CHMSAppointmentReTreatment::OnNoteKillfocus(){
	
} */
int CHMSAppointmentReTreatment::OnNoteCheckValue(){
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
void CHMSAppointmentReTreatment::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CPrintForms printer;
	printer.TM_OnPrintAppointmentSheet(pMF->m_nDocumentNo, pMF->m_szDept, true);
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
 	if(!IsValidateData()) 
 		return -1; 
 	CString szSQL; 
	int ret = 0;
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
