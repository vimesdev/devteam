#include "HMSAppointmentReexamination.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "GuiDialog.h"
#include "ReportDocument.h"

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
	m_nDlgHeight = 200;
	SetDefaultValues();
}
CHMSAppointmentReexamination::~CHMSAppointmentReexamination(){
}
void CHMSAppointmentReexamination::OnCreateComponents(){
	m_wndAppointmentReexamination.Create(this, _T("Appointment Re-examine"), 5, 5, 600, 140);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 90, 55);
	m_wndDate.Create(this,95, 30, 185, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 190, 30, 190+80, 55);
	m_wndToDate.Create(this,285, 30, 285+90, 55); 

	m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 90, 85);
	m_wndNote.Create(this,95, 60, 595, 135, TRUE, FALSE, TRUE); 
	m_wndUpdate.Create(this, _T("&Update"), 285, 145, 360, 170);
	m_wndSave.Create(this, _T("&Save"), 365, 145, 440, 170);
	m_wndCancel.Create(this, _T("&Cancel"), 445, 145, 520, 170);
	m_wndPrint.Create(this, _T("&Print"), 525, 145, 600, 170);

}
void CHMSAppointmentReexamination::OnInitializeComponents(){
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
	m_hms_docTbl.AddField(_T("hd_suggestion"), dfText, 1);	//Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien), T: Transfer(Chuyen vien), R: Re-examination(Hen Kham lai)
	m_hms_docTbl.AddField(_T("hd_result"), dfText, 1);	//1: Khoi, 2: Do giam, 3: Khong thay doi, 4: Nang hon, 5: Tu vong
	m_hms_docTbl.AddField(_T("hd_doctor"), dfText, 15);
	m_hms_docTbl.AddField(_T("hd_indept"), dfText, 7);	//Khoa dieu tri
	m_hms_docTbl.AddField(_T("hd_tohosid"), dfText, 13);	//Benh vien chuyen toi
	m_hms_docTbl.AddField(_T("hd_outpatient"), dfText, 1);
	m_hms_docTbl.AddField(_T("hd_areceptidx"), dfInteger);

	m_hms_reexamTbl.SetTableName(_T("hms_reexam"));
	m_hms_reexamTbl.AddField(_T("hre_docno"), dfLong);
	m_hms_reexamTbl.AddField(_T("hre_date"), dfDate);
	m_hms_reexamTbl.AddField(_T("hre_doctor"), dfText, 15);
	m_hms_reexamTbl.AddField(_T("hre_note"), dfText, 254);
	m_hms_reexamTbl.AddField(_T("hre_todate"), dfDate);
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
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAppointmentReexaminationFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAppointmentReexaminationFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAppointmentReexaminationFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAppointmentReexaminationFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAppointmentReexaminationFnc, 0, 'T', VK_CONTROL);
*/
	GetDataToScreen();
}
void CHMSAppointmentReexamination::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSAppointmentReexamination::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_reexam WHERE hre_docno=%ld"), pMF->m_nDocumentNo);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hre_date"), m_szDate);
		rs.GetValue(_T("hre_todate"), m_szToDate);
		rs.GetValue(_T("hre_note"), m_szNote);
		
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
	if(m_szDate.IsEmpty())
		m_szDate = pMF->GetSysDate();
}
void CHMSAppointmentReexamination::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_docTbl.SetValue(_T("hd_status"), _T("P"));
	m_hms_docTbl.SetValue(_T("hd_doctor"), pMF->m_szDoctor);
	m_hms_docTbl.SetValue(_T("hd_suggestion"), _T("R"));
	m_hms_docTbl.SetValue(_T("hd_status"), _T("R"));
	m_hms_docTbl.SetValue(_T("hd_enddept"), pMF->m_szDept);
	m_hms_docTbl.SetValue(_T("hd_enddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_areceptidx"), pMF->m_nRefIndex);

	m_hms_reexamTbl.SetValue(_T("hre_docno"), pMF->m_nDocumentNo);
	m_hms_reexamTbl.SetValue(_T("hre_date"), m_szDate);
	m_hms_reexamTbl.SetValue(_T("hre_todate"), m_szToDate);
	m_hms_reexamTbl.SetValue(_T("hre_doctor"), pMF->m_szDoctor);
	m_hms_reexamTbl.SetValue(_T("hre_note"), m_szNote);

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
/*void CHMSAppointmentReexamination::OnDateChange(){
	
} */
/*void CHMSAppointmentReexamination::OnDateSetfocus(){
	
} */
/*void CHMSAppointmentReexamination::OnDateKillfocus(){
	
} */
int CHMSAppointmentReexamination::OnDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if(CompareDate(pMF->m_szEntryDate, m_szDate) > 0)
		return -1;
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
	OnEditHMSAppointmentReexamination();
} 
void CHMSAppointmentReexamination::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAppointmentReexamination();
} 
void CHMSAppointmentReexamination::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSAppointmentReexamination();
} 
void CHMSAppointmentReexamination::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	static CReport rpt;
	CString tmpStr;
	if(!rpt.Init(_T("Reports/HMS/HE_APPOINTMENTEXAMVOTE.RPT")) )
		return;
	tmpStr = pMF->m_CompanyInfo.sc_pname;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	tmpStr = pMF->m_CompanyInfo.sc_name;
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	//Page Header
	tmpStr = pMF->m_wndPatientDocument.m_szPatientName;
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), tmpStr);
	tmpStr = pMF->m_wndPatientDocument.m_szAge;
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	tmpStr = pMF->m_wndPatientDocument.m_szAddress;
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	tmpStr = pMF->m_wndPatientDocument.m_wndExamine.m_szConclusion;
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
	CDate dte;
	dte.ParseDate(m_szDate);
	rpt.GetReportHeader()->Format(_T("Date"), dte.GetDay(), dte.GetMonth(), dte.GetYear());
	rpt.GetReportHeader()->Format(_T("Room"), pMF->m_wndPatientDocument.m_wndExamine.m_nRoomID);
	if(!m_szToDate.IsEmpty() && CDate::IsValid(m_szToDate))
		dte.ParseDate(m_szToDate);
	rpt.GetReportHeader()->Format(_T("ToDate"), dte.GetDay(), dte.GetMonth(), dte.GetYear());

	dte.ParseDate(pMF->GetSysDate());
	rpt.GetReportHeader()->Format(_T("PrintDate"), dte.GetDay(), dte.GetMonth(), dte.GetYear());
	tmpStr = pMF->GetDoctorName(pMF->m_wndPatientDocument.m_wndExamine.m_szDoctorKey);
	rpt.GetReportHeader()->SetValue(_T("DoctorName"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Note"), m_szNote);
	//Report Detail
	//Page Footer
	//Report Footer
	rpt.PrintPreview();

} 
int CHMSAppointmentReexamination::OnAddHMSAppointmentReexamination(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSAppointmentReexamination::OnEditHMSAppointmentReexamination(){
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	if(pMF->IsPaidFees()){
		ShowMessageBox(_T("Patients paid fees. Do not allow reupdate."));
		return -1;
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status <>'A' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is created treatment record. Can not update it."), MB_OK);
		return -1;
	}

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
 	if(GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_wndDate.SetMin(CDate(pMF->m_szEntryDate.Left(10)));	
	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status <>'A' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient is created treatment record. Can not update it."), MB_OK);
		return -1;
	}

 	if(!IsValidateData()) 
 		return -1; 
 	CString szWhere; 
	szWhere.Format(_T(" WHERE hd_docno=%ld"), pMF->m_nDocumentNo);
	szSQL = m_hms_docTbl.GetUpdateSQL(_T("hd_docno"));
	szSQL += szWhere;
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		szSQL.Format(_T("UPDATE hms_exam SET he_status='T' WHERE he_docno=%ld AND he_receptidx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		pMF->ExecSQL(szSQL);
		
//		szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld AND htr_status='A' "), pMF->m_nDocumentNo);
//		pMF->ExecSQL(szSQL);

//		szSQL.Format(_T("DELETE FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status='A' "), pMF->m_nDocumentNo);
//		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_reexam WHERE hre_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("DELETE FROM hms_htdoc WHERE hhtd_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
		
		szSQL.Format(_T("DELETE FROM hms_outpatient WHERE hop_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

//		szSQL.Format(_T("DELETE FROM hms_treatment_dttd WHERE htd_docno=%ld"), pMF->m_nDocumentNo);
//		pMF->ExecSQL(szSQL);

		szSQL = m_hms_reexamTbl.GetInsertSQL(); 
		pMF->ExecSQL(szSQL);

 		SetMode(VM_VIEW); 
	//	((CGuiDialog *)	GetParent()->GetParent())->OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
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
 	return 0;
} 
int CHMSAppointmentReexamination::OnHMSAppointmentReexaminationListLoadData(){
	return 0;
}



CHMSAppointmentClinicalDialog::CHMSAppointmentClinicalDialog(CWnd *pParent):
	CGuiDialog(pParent)
	{

	}
CHMSAppointmentClinicalDialog::~CHMSAppointmentClinicalDialog()
{

}


void CHMSAppointmentClinicalDialog::OnCreateComponents()
{
	m_wndAppointment.Create(this);
}


void CHMSAppointmentClinicalDialog::OnInitializeComponents()
{
	
}

void CHMSAppointmentClinicalDialog::OnSetWindowEvents()
{

	m_wndAppointment.OnSetWindowEvents();
//	GetDataToScreen();
}



