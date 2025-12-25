#include "HMSDischarge.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "GuiDialog.h"
#include "HMSPatientDeathDialog.h"
#include "HMSReportForms/PrintForms.h"
#include "HMSUnTerminatedDialog.h"
#include "HMSAppointmentReTreatment.h"
#include "IVFAppointmentDialog.h"
#include "IVFAppointmentDialog2.h"

/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnEndDateCheckValue();
} 
static long _OnClosingDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSDischarge*)pWnd)->OnClosingDoctorLoadData();
}
static void _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDischarge* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResultSelendokFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnResultAddNew();
}*/
static void _OnICD10SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDischarge* )pWnd)->OnICD10SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICD10SelendokFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnICD10Selendok();
}
/*static void _OnICD10SetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnICD10Killfocus();
}*/
/*static void _OnICD10KillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnICD10Killfocus();
}*/
static long _OnICD10LoadDataFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnICD10LoadData();
}
static int _OnICD10CheckValueFnc(CWnd* pWnd){
	return ((CHMSDischarge *)pWnd)->OnICD10CheckValue();
}
/*static void _OnICD10AddNewFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnICD10AddNew();
}*/
/*static void _OnMainDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnMainDiseaseChange();
} */
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnMainDiseaseSetfocus();} */ 
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnMainDiseaseKillfocus();
} */
static int _OnMainDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnMainDiseaseCheckValue();
} 
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnTreatMethodChangeFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnTreatMethodChange();
} */
/*static void _OnTreatMethodSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnTreatMethodSetfocus();} */ 
/*static void _OnTreatMethodKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnTreatMethodKillfocus();
} */
static int _OnTreatMethodCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnTreatMethodCheckValue();
} 
/*static void _OnConclusionChangeFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnConclusionChange();
} */
/*static void _OnConclusionSetfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnConclusionSetfocus();} */ 
/*static void _OnConclusionKillfocusFnc(CWnd *pWnd){
	((CHMSDischarge *)pWnd)->OnConclusionKillfocus();
} */
static int _OnConclusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDischarge *)pWnd)->OnConclusionCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSDischarge *pVw = (CHMSDischarge *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDischarge *pVw = (CHMSDischarge *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDischarge *pVw = (CHMSDischarge *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDischarge *pVw = (CHMSDischarge *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCreateAppointmentSelectFnc(CWnd *pWnd){
	CHMSDischarge *pVw = (CHMSDischarge *)pWnd;
	pVw->OnCreateAppointmentSelect();
} 
static int _OnAddHMSDischargeFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnAddHMSDischarge();
} 
static int _OnEditHMSDischargeFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnEditHMSDischarge();
} 
static int _OnDeleteHMSDischargeFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnDeleteHMSDischarge();
} 
static int _OnSaveHMSDischargeFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnSaveHMSDischarge();
} 
static int _OnCancelHMSDischargeFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnCancelHMSDischarge();
} 
static int _OnUpdateDeathInformationFnc(CWnd *pWnd){
	 return ((CHMSDischarge*)pWnd)->OnUpdateDeathInformation();
} 

CHMSDischarge::CHMSDischarge(){

	m_nDlgWidth = 610;
	m_nDlgHeight = 560;
	SetDefaultValues();
}
CHMSDischarge::~CHMSDischarge(){
}
void CHMSDischarge::OnCreateComponents(){
	m_wndDischargeInformation.Create(this, _T("Discharge Information"), 5, 5, 600, 520);
	m_wndEndDateLabel.Create(this, _T("End Date"), 10, 30, 130, 55);
	m_wndEndDate.Create(this,135, 30, 260, 55); 
	m_wndClosingDoctorLabel.Create(this, _T("Closing Doctor"), 265, 30, 350, 55);
	m_wndClosingDoctor.Create(this,355, 30, 595, 55); 
	m_wndResultLabel.Create(this, _T("Result"), 10, 60, 130, 85);
	m_wndResult.Create(this,135, 60, 260, 85); 
	m_wndICD10Label.Create(this, _T("ICD10"), 265, 60, 350, 85);
	m_wndICD10.Create(this,355, 60, 595, 85); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 90, 130, 140);
	m_wndMainDisease.Create(this,135, 90, 595, 140, TRUE, FALSE, TRUE); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 145, 130, 195);
	m_wndRelationDisease.Create(this,135, 145, 595, 195, TRUE, FALSE, TRUE); 
	m_wndTreatMethodLabel.Create(this, _T("Treat Method"), 10, 200, 130, 275);
	m_wndTreatMethod.Create(this,135, 200, 595, 275, TRUE, FALSE, TRUE); 
	m_wndAdmissionStatusLabel.Create(this, _T("Admission Status"), 10, 280, 130, 355);
	m_wndAdmissionStatus.Create(this,135, 280, 595, 355, TRUE, FALSE, TRUE);	
	m_wndYKienDenGhiLabel.Create(this, _T("Y kien den ghi"), 10, 360, 130, 435);
	m_wndYKienDenGhi.Create(this,135, 360, 595, 435, TRUE, FALSE, TRUE); 
	m_wndConclusionLabel.Create(this, _T("Conclusion /Advice"), 10, 440, 130, 515);
	m_wndConclusion.Create(this,135, 440, 595, 515, TRUE, FALSE, TRUE); 
	m_wndUpdate.Create(this, _T("&Update"), 55, 525, 155, 550);
	m_wndSave.Create(this, _T("&Save"), 160, 525, 260, 550);
	m_wndCancel.Create(this, _T("&Cancel"), 265, 525, 365, 550);
	m_wndPrint.Create(this, _T("&Print"), 370, 525, 470, 550);
	m_wndCreateAppointment.Create(this, _T("Create Appointment"), 475, 525, 600, 550);
}
void CHMSDischarge::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndClosingDoctor.LimitText(35);
	m_wndClosingDoctor.SetCheckValue(true);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(81);
	m_wndICD10.SetCheckValue(true);
	m_wndICD10.LimitText(254);
	//m_wndICD10.SetRequirementLength(1);
	m_wndICD10.SetVisibleLines(15);
	m_wndMainDisease.SetLimitText(1024);
	m_wndMainDisease.SetCheckValue(true);
	m_wndRelationDisease.SetLimitText(254);
	m_wndAdmissionStatus.SetLimitText(254);
//	m_wndRelationDisease.SetCheckValue(true);
	m_wndTreatMethod.SetLimitText(1024);
//	m_wndTreatMethod.SetCheckValue(true);
	m_wndConclusion.SetLimitText(512);
//	m_wndConclusion.SetCheckValue(true);


	m_wndResult.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndResult.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndClosingDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndClosingDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndICD10.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICD10.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

	m_hms_treatmentTbl.SetTableName(_T("hms_treatment_record"));
	m_hms_treatmentTbl.AddField(_T("htr_updateddate"), dfDateTime);
	m_hms_treatmentTbl.AddField(_T("htr_dischargedate"), dfDateTime);
	m_hms_treatmentTbl.AddField(_T("htr_mainicd"), dfText, 13);
	m_hms_treatmentTbl.AddField(_T("htr_maindisease"), dfText, 1024);	//Benh chinh
	m_hms_treatmentTbl.AddField(_T("htr_suggestion"), dfText, 1);	//Huong dieu tri: D: Discharge (Ra Vien), A: Admission(Nhap vien), T: Transfer(Chuyen vien), R: Re-examination(Hen Kham lai)
	m_hms_treatmentTbl.AddField(_T("htr_status"), dfText, 1);

	

	m_hms_clinicalTbl.SetTableName(_T("hms_clinical_record"));
	m_hms_clinicalTbl.AddField(_T("hcr_status"), dfText, 1);
	m_hms_clinicalTbl.AddField(_T("hcr_clindoctor"), dfText, 15);
	m_hms_clinicalTbl.AddField(_T("hcr_dischargedept"), dfText, 7);
	m_hms_clinicalTbl.AddField(_T("hcr_dischargedate"), dfDateTime);
	m_hms_clinicalTbl.AddField(_T("hcr_reason"), dfText, 254);
	m_hms_clinicalTbl.AddField(_T("hcr_result"), dfText, 1);
	m_hms_clinicalTbl.AddField(_T("hcr_suggestion"), dfText, 1);
	m_hms_clinicalTbl.AddField(_T("hcr_conclusion"), dfText, 512);
	m_hms_clinicalTbl.AddField(_T("hcr_mainicd"), dfText, 15);
	m_hms_clinicalTbl.AddField(_T("hcr_maindisease"), dfText, 1024);
	m_hms_clinicalTbl.AddField(_T("hcr_gmethod"), dfText, 1024);
	m_hms_clinicalTbl.AddField(_T("hcr_gsuggestion2"), dfText, 254);
	m_hms_clinicalTbl.AddField(_T("hcr_refidx"),  dfLong);
	m_hms_clinicalTbl.AddField(_T("hcr_reldisease"), dfText, 254);

	
}
void CHMSDischarge::OnSetWindowEvents(){
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	m_wndClosingDoctor.SetEvent(WE_LOADDATA, _OnClosingDoctorLoadDataFnc);
	m_wndResult.SetEvent(WE_SELENDOK, _OnResultSelendokFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_SELCHANGE, _OnResultSelectChangeFnc);
	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
	//m_wndResult.SetEvent(WE_ADDNEW, _OnResultAddNewFnc);
	m_wndICD10.SetEvent(WE_SELENDOK, _OnICD10SelendokFnc);
	//m_wndICD10.SetEvent(WE_SETFOCUS, _OnICD10SetfocusFnc);
	//m_wndICD10.SetEvent(WE_KILLFOCUS, _OnICD10KillfocusFnc);
	m_wndICD10.SetEvent(WE_SELCHANGE, _OnICD10SelectChangeFnc);
	m_wndICD10.SetEvent(WE_LOADDATA, _OnICD10LoadDataFnc);
	m_wndICD10.SetEvent(WE_CHECKVALUE, _OnICD10CheckValueFnc);
	//m_wndICD10.SetEvent(WE_ADDNEW, _OnICD10AddNewFnc);
	//m_wndMainDisease.SetEvent(WE_CHANGE, _OnMainDiseaseChangeFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_CHECKVALUE, _OnMainDiseaseCheckValueFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndTreatMethod.SetEvent(WE_CHANGE, _OnTreatMethodChangeFnc);
	//m_wndTreatMethod.SetEvent(WE_SETFOCUS, _OnTreatMethodSetfocusFnc);
	//m_wndTreatMethod.SetEvent(WE_KILLFOCUS, _OnTreatMethodKillfocusFnc);
	m_wndTreatMethod.SetEvent(WE_CHECKVALUE, _OnTreatMethodCheckValueFnc);
	//m_wndConclusion.SetEvent(WE_CHANGE, _OnConclusionChangeFnc);
	//m_wndConclusion.SetEvent(WE_SETFOCUS, _OnConclusionSetfocusFnc);
	//m_wndConclusion.SetEvent(WE_KILLFOCUS, _OnConclusionKillfocusFnc);
	m_wndConclusion.SetEvent(WE_CHECKVALUE, _OnConclusionCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndCreateAppointment.SetEvent(WE_CLICK, _OnCreateAppointmentSelectFnc);
	AddEvent(1, _T("Update Death Information"), _OnUpdateDeathInformationFnc);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDischargeFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDischargeFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDischargeFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDischargeFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDischargeFnc, 0, 'T', VK_CONTROL);
*/

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
//	if(GetMode() == VM_NONE)
//		return;
	GetDataToScreen();
}
void CHMSDischarge::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_TextEx(pDX, m_wndClosingDoctor.GetDlgCtrlID(), m_szClosingDoctorKey);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_TextEx(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10Key);
	DDX_Text(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDisease);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndTreatMethod.GetDlgCtrlID(), m_szTreatMethod);
	DDX_Text(pDX, m_wndConclusion.GetDlgCtrlID(), m_szConclusion);
	DDX_Text(pDX, m_wndAdmissionStatus.GetDlgCtrlID(), m_szAdmissionStatus);
	DDX_Text(pDX, m_wndYKienDenGhi.GetDlgCtrlID(), m_szYkiendenghi);


}
void CHMSDischarge::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, tmpStr;
	szSQL.Format(_T(" SELECT * ") \
				 _T(" FROM hms_clinical_record_hist ") \
				 _T(" WHERE hcr_docno = %ld") \
				 _T(" AND hcr_treattime = %d")
				 , pMF->m_nDocumentNo, pMF->m_nTreatTime);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		szSQL.Format(_T(" SELECT * ") \
					_T(" FROM hms_clinical_record ") \
					_T(" WHERE hcr_docno = %ld"), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
	}
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hcr_conclusion"), m_szConclusion);
		rs.GetValue(_T("hcr_clindoctor"), m_szClosingDoctorKey);
		rs.GetValue(_T("hcr_mainicd"), m_szICD10Key);
		rs.GetValue(_T("hcr_maindisease"), m_szMainDisease);
		rs.GetValue(_T("hcr_result"), m_szResultKey);
		rs.GetValue(_T("hcr_reason"), m_szAdmissionStatus);
		rs.GetValue(_T("hcr_status"), szStatus);
		rs.GetValue(_T("hcr_dischargedate"), m_szEndDate);
		rs.GetValue(_T("hcr_reldisease"), m_szRelationDisease);
		rs.GetValue(_T("hcr_gmethod"), m_szTreatMethod);
		rs.GetValue(_T("hcr_gsuggestion2"), m_szYkiendenghi);

		rs.GetValue(_T("hcr_discharge"), m_szDischarge);
		
		if(m_szMainDisease.IsEmpty())
		{
			rs.GetValue(_T("hcr_admitdisease"), m_szMainDisease);
		}
		m_szICD10Key.Trim();

	}
	/*comment phan nay lai ko hieu y do
	else
	{
		szSQL.Format(_T("SELECT * FROM hms_clinical_record WHERE hcr_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("hcr_conclusion"), m_szConclusion);
			//rs.GetValue(_T("hcr_clindoctor"), m_szClosingDoctorKey);
			rs.GetValue(_T("hcr_admiticd"), m_szICD10Key);
			rs.GetValue(_T("hcr_admitdisease"), m_szMainDisease);

			rs.GetValue(_T("hcr_result"), m_szResultKey);
			rs.GetValue(_T("hcr_reason"), m_szAdmissionStatus);
			rs.GetValue(_T("hcr_dischargedate"), m_szEndDate);
			rs.GetValue(_T("hcr_status"), szStatus);
			rs.GetValue(_T("hcr_reldisease"), m_szRelationDisease);
			rs.GetValue(_T("hcr_gmethod"), m_szTreatMethod);
			rs.GetValue(_T("hcr_gsuggestion2"), m_szYkiendenghi);
		}
	}
	*/

	//if (m_szEndDate.IsEmpty() && !pMF->IsOnceRollback(pMF->m_nDocumentNo))
	if (szStatus != _T("T") && m_szDischarge != _T("Y"))
	{
		CRecord rsx(&pMF->m_db);
		szSQL.Format(_T("select NVL(max(hb_enddate), systimestamp) from hms_bed where hb_docno = %ld "), pMF->m_nDocumentNo);
		rsx.ExecSQL(szSQL);
		if(!rsx.IsEOF())
		{
			m_szEndDate = rsx.GetStringValue();
		}
		else
			m_szEndDate = pMF->GetSysDateTime();
	}

	if(m_szMainDisease.IsEmpty())
		m_szMainDisease = pMF->m_szDiagnostic;
	m_szICD10Key.Trim();
	m_szMainDisease.Trim();
	m_szRelationDisease.Trim();
	m_szConclusion.Trim();
	m_szTreatMethod.Trim();
	m_szAdmissionStatus.Trim();
	SetMode(VM_VIEW);
	

}
void CHMSDischarge::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_treatmentTbl.SetValue(_T("htr_doctor"), pMF->m_szDoctor);
	m_hms_treatmentTbl.SetValue(_T("htr_status"), _T("T"));
	m_hms_treatmentTbl.SetValue(_T("htr_conclusion"), m_szConclusion);
	m_hms_treatmentTbl.SetValue(_T("htr_icd"), m_szICD10Key);
	m_hms_treatmentTbl.SetValue(_T("htr_diagnostic"), m_szMainDisease);
	m_hms_treatmentTbl.SetValue(_T("htr_reldisease"), m_szRelationDisease);
	m_hms_treatmentTbl.SetValue(_T("htr_suggestion"), _T("D"));
	m_hms_treatmentTbl.SetValue(_T("htr_result"), m_szResultKey);
	m_hms_treatmentTbl.SetValue(_T("htr_enddept"), pMF->m_szDept);
	m_hms_treatmentTbl.SetValue(_T("htr_enddate"), m_szEndDate);
	m_hms_treatmentTbl.SetValue(_T("hcr_gsuggestion2"), m_szYkiendenghi);
}
void CHMSDischarge::SetDefaultValues(){

	m_szEndDate.Empty();
	m_szClosingDoctorKey.Empty();
	m_szResultKey.Empty();
	m_szICD10Key.Empty();
	m_szMainDisease.Empty();
	m_szRelationDisease.Empty();
	m_szTreatMethod.Empty();
	m_szConclusion.Empty();
	m_szAdmissionStatus.Empty();
	m_bLogDischarged = false;

}
int CHMSDischarge::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
			m_wndClosingDoctor.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 1, 2, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		if(m_szDischarge == _T("Y"))
		{
			EnableControls(FALSE);
			if (nMode == VM_EDIT)
				if (pMF->CheckPermission(_T("20.02"))) EnableControls();
				else{
				m_wndClosingDoctor.EnableWindow(TRUE);
				m_wndICD10.EnableWindow(TRUE);
			}
		}
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSDischarge::OnEndDateChange(){
	
} */
/*void CHMSDischarge::OnEndDateSetfocus(){
	
} */
/*void CHMSDischarge::OnEndDateKillfocus(){
	
} */
int CHMSDischarge::OnEndDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	COleDateTime dt, adt, cdt;
	dt.ParseDateTime(m_szEndDate);
	adt.ParseDateTime(pMF->m_szEntryDate);
	cdt.ParseDateTime(pMF->GetSysDateTime());
	cdt += 5;
	if(dt < adt || dt > cdt )
		return -1;
	
	return 0;
} 

long CHMSDischarge::OnClosingDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND su_groupid = 'D'"));
	return pMF->LoadDoctorList(&m_wndClosingDoctor, m_szClosingDoctorKey, pMF->GetCurrentDepartmentID(), szFilter);
}

void CHMSDischarge::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischarge::OnResultSelendok(){
	 
}
/*void CHMSDischarge::OnResultSetfocus(){
	
}*/
/*void CHMSDischarge::OnResultKillfocus(){
	
}*/
long CHMSDischarge::OnResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndResult, _T("ivf_result"), m_szResultKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResult.IsSearchKey() && !m_szResultKey.IsEmpty()){
	};
	m_wndResult.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResult.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDischarge::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDischarge::OnICD10SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDischarge::OnICD10Selendok(){
	UpdateData(true);
	m_szMainDisease = m_wndICD10.GetCurrent(1);
	UpdateData(false);
	 
}
/*void CHMSDischarge::OnICD10Setfocus(){
	
}*/
/*void CHMSDischarge::OnICD10Killfocus(){
	
}*/
long CHMSDischarge::OnICD10LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//return pMF->LoadICD(&m_wndICD10, m_szICD10Key);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD10.IsSearchKey() && !m_szICD10Key.IsEmpty()){
		szWhere.Format(_T(" AND trim(hi_icd)=trim('%s') "), m_szICD10Key);
	};
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd WHERE 1=1 %s  ORDER BY hi_icd "), szWhere);

	m_wndICD10.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD10.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}

int CHMSDischarge::OnICD10CheckValue(){
	return 0;
}

/*void CHMSDischarge::OnICD10AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDischarge::OnMainDiseaseChange(){
	
} */
/*void CHMSDischarge::OnMainDiseaseSetfocus(){
	
} */
/*void CHMSDischarge::OnMainDiseaseKillfocus(){
	
} */
int CHMSDischarge::OnMainDiseaseCheckValue(){
	return 0;
} 
/*void CHMSDischarge::OnRelationDiseaseChange(){
	
} */
/*void CHMSDischarge::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSDischarge::OnRelationDiseaseKillfocus(){
	
} */
int CHMSDischarge::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSDischarge::OnTreatMethodChange(){
	
} */
/*void CHMSDischarge::OnTreatMethodSetfocus(){
	
} */
/*void CHMSDischarge::OnTreatMethodKillfocus(){
	
} */
int CHMSDischarge::OnTreatMethodCheckValue(){
	return 0;
} 
/*void CHMSDischarge::OnConclusionChange(){
	
} */
/*void CHMSDischarge::OnConclusionSetfocus(){
	
} */
/*void CHMSDischarge::OnConclusionKillfocus(){
	
} */
int CHMSDischarge::OnConclusionCheckValue(){
	return 0;
} 
void CHMSDischarge::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*CHMSUnTerminatedDialog termdlg(this);
	termdlg.m_nDocumentNo = pMF->m_nDocumentNo;
	termdlg.DoModal();
	if(termdlg.m_bCheckReturn)
	{
		return;
	}*/


	OnEditHMSDischarge();
	
} 
void CHMSDischarge::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDischarge();
} 
void CHMSDischarge::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSDischarge();
} 
void CHMSDischarge::OnPrintSelect(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    CReport rpt;
	CPrintForms printer;
	CGuiMenu menu(this);
	CRect rect;
	int nPos;	
	menu.CreatePopupMenu();
	CString tmpStr;
    CString szFileTitle = _T("HMS_DISCHARGESHEET1");
    CString szRPTName, szFilePath;

	TranslateString(_T("In phiếu ra viện (1 tờ)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
    menu.AppendMenu(MF_BYPOSITION, 4, _T("In phiếu ra viện (2 tờ)"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	/*
	TranslateString(_T("In phiếu hẹn"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	*/
	TranslateString(_T("In phiếu điều trị ngoại trú"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	m_wndPrint.GetWindowRect(&rect);
	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN, rect.right, rect.top, this);
	
	switch (nPos)
    {
    case 1:
        pMF->PrintDischargeSheet(pMF->m_nDocumentNo, pMF->m_nRefIndex);
        break;
    case 2:
    {
        // CHMSAppointmentReTreatment dlg(this);
        CIVFAppointmentDialog dlg(this);
        dlg.m_nDocumentNo = pMF->m_nDocumentNo;
        dlg.SetMode(VM_ADD);
        dlg.DoModal();
    }
    // printer.TM_OnPrintAppointmentSheet(pMF->m_nDocumentNo, pMF->m_szDept,
    // true);
    break;
    case 4:

        szFileTitle += _T(".RPT");
        szFilePath.Format(_T("Reports\\HMS\\%s"), szFileTitle);

        if (!rpt.Init(szFilePath))
        {
            _debug(L"Load report: %s", szFilePath);
            return;
        }

        pMF->OnPostGenDocX(&rpt, _T("giayravien"), pMF->m_nDocumentNo,
                           pMF->m_nRefIndex, szFileTitle, _T(""), _T(""));

        break;
    }
} 
int CHMSDischarge::OnAddHMSDischarge(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSDischarge::OnEditHMSDischarge(){

 //	if(GetMode() != VM_VIEW) 
 //		return -1; 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(!pMF->m_wndPatientDocument.OnCheckTerminateDocument(pMF->m_nDocumentNo))
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return -1;
	}

	//if(pMF->IsPaidFees()){
	//	ShowMessageBox(_T("Patients paid hospital fees. Do not allow reupdate."));
	//	return -1;
	//}

	/*szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx>%d AND htr_status in('I','T') "), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("This patient has been treated by other department. Can not update it."), MB_OK);
		return -1;
	}*/

	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "), pMF->m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	
	if(rs.GetIntValue() > 0 && pMF->m_szOutpatient == _T("N"))
	{
		ShowMessageBox(_T("Bệnh nhân đang điều trị tại khoa khác. Không cho phép kết thúc hồ sơ."), MB_OK);
		return -1;
	}

	CString szAcceptedFee, szStatus;

	szSQL.Format(_T("SELECT htr_status, htrf_acceptedfee FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("htr_status"), szStatus);
			
	rs.GetValue(_T("htrf_acceptedfee"), szAcceptedFee);

	if(szAcceptedFee == _T("A") || szAcceptedFee == _T("P") || szAcceptedFee == _T("Y"))
	{
		ShowMessageBox(_T("Bệnh nhân đã được xác nhận chi phí hoặc thanh toán viện phí."));
		return -1;
	}

//16/07/2019 hayhv: them chuc nang kiem tra khoa cuoi cung moi duoc ket thuc ra vien
	szSQL.Format(_T("SELECT max(htr_idx) as max_idx FROM hms_treatment_record WHERE htr_docno=%ld and htr_status='T' "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	int nMaxIdx;
	rs.GetValue(_T("max_idx"), nMaxIdx);
			

	if(nMaxIdx > pMF->m_nRefIndex)
	{
		ShowMessageBox(_T("Không phải điều trị cuối cùng.Không cho phép kết thúc hồ sơ ra viện"));
		return -1;
	}



	szSQL.Format(_T(" SELECT mt_orderno, product_name ") \
_T(" FROM hms_ipharmaorderline_r") \
_T(" LEFT JOIN m_transaction") \
_T(" ON(hpolr_retorder_id > 0 and hpolr_retorder_id= mt_transaction_id)") \
_T(" LEFT JOIN m_productitem_view") \
_T(" ON(product_item_id       = hpolr_product_item_id)") \
_T(" WHERE hpolr_docno        = %ld") \
_T(" AND NVL(mt_status, 'O') <> 'A' order by mt_orderno, product_name "), pMF->m_nDocumentNo);
	
	rs.ExecSQL(szSQL);
	
	if(rs.GetRecordCount() > 0)
	{
		CString szMsg, szOrderNo;
		szMsg.Format(_T("Đang tồn tại thuốc hoặc vật tư chưa trả lại"));
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("mt_orderno"), szOrderNo);
			if(!szOrderNo.IsEmpty())
			{
				szMsg.AppendFormat(_T("\r\n[%s]: %s"),
					szOrderNo,
					rs.GetValue(_T("product_name")));
			}
			else
				szMsg.AppendFormat(_T("\r\n%s"),
					rs.GetValue(_T("product_name")));

			rs.MoveNext();
		}
		ShowMessageBox(szMsg, MB_OK);
		return -1;
	}

	
//	CString szSQL;
	szSQL.Format(_T("HMS_CLINICAL_CHECKBFTERM(%ld, %d) "), pMF->m_nDocumentNo, pMF->GetTreatTime());
	int nCount = str2int(pMF->ExecDML(szSQL));
	
	if(nCount > 0 )
	{
		CHMSUnTerminatedDialog termdlg(this);
		termdlg.m_nDocumentNo = pMF->m_nDocumentNo;
		if(termdlg.DoModal() == IDOK)
		{
				
		}
		else
		{
			SetMode(VM_VIEW);
		}
	}
	
	szSQL.Format(_T("SELECT count(*) FROM hms_term_warning WHERE htw_docno=%ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if(nCount > 0)
	{

		return 0;
	}
	
	
 	SetMode(VM_EDIT);
	return 0; 
} 
int CHMSDischarge::OnDeleteHMSDischarge(){
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
 		OnCancelHMSDischarge(); 
 	}
	return 0;
 } 
int CHMSDischarge::OnSaveHMSDischarge(){
 	if(GetMode() != VM_EDIT) 
 		return -1; 


	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus, szFunctionCall;	
	
	
	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_docno=%ld AND htr_deptid<>'%s' AND htr_status='I' "), pMF->m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	
	if(rs.GetIntValue() > 0 && pMF->m_szOutpatient == _T("N"))
	{
		ShowMessageBox(_T("This patient has been treated by other department. Can not update it."), MB_OK);
		return -1;
	}
 	if(!IsValidateData()) 
 		return -1; 
	m_szMainDisease.Trim();
	m_szRelationDisease.Trim();
	m_szConclusion.Trim();
	m_szTreatMethod.Trim();
	m_szAdmissionStatus.Trim();

	//Cap nhat lai ho so dieu tri
//Cap nhat lai ho so dieu tri cua khoa
	/*
	Khong hieu sao cho nay lai kiem tra the
	szStatus= _T("T");
	if(pMF->m_szOutpatient == _T("Y")){
		szSQL.Format(_T("SELECT max(htr_idx) FROM hms_treatment_record WHERE htr_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(pMF->m_nRefIndex != rs.GetIntValue())
			szStatus= _T("I");
	}
	*/
	szStatus = _T("T");

	//if(pMF->IsOnceRollback(pMF->m_nDocumentNo))
	CString szWhere;
	szWhere.Format(_T(" WHERE hcr_docno=%ld"), pMF->m_nDocumentNo);
	m_hms_clinicalTbl.Open(&pMF->m_db, szWhere);
	m_hms_clinicalTbl.SetValue(_T("hcr_status"), szStatus);
	m_hms_clinicalTbl.SetValue(_T("hcr_clindoctor"), m_szClosingDoctorKey);
	m_hms_clinicalTbl.SetValue(_T("hcr_dischargedept"), pMF->m_szDept);
	m_hms_clinicalTbl.SetValue(_T("hcr_dischargedate"), m_szEndDate);
	m_hms_clinicalTbl.SetValue(_T("hcr_reason"), m_szAdmissionStatus);
	m_hms_clinicalTbl.SetValue(_T("hcr_result"), m_szResultKey);
	m_hms_clinicalTbl.SetValue(_T("hcr_suggestion"), _T("T"));
	m_hms_clinicalTbl.SetValue(_T("hcr_conclusion"), m_szConclusion);
	m_hms_clinicalTbl.SetValue(_T("hcr_mainicd"), m_szICD10Key);
	m_hms_clinicalTbl.SetValue(_T("hcr_maindisease"), m_szMainDisease);
	m_hms_clinicalTbl.SetValue(_T("hcr_gmethod"), m_szTreatMethod);
	m_hms_clinicalTbl.SetValue(_T("hcr_gsuggestion2"), m_szYkiendenghi);
	m_hms_clinicalTbl.SetValue(_T("hcr_refidx"), pMF->m_nRefIndex);
	m_hms_clinicalTbl.SetValue(_T("hcr_reldisease"), m_szRelationDisease);
	
	CString szExceptions;
	szExceptions.Empty();
	if (m_szDischarge == _T("Y"))
	{
		szExceptions = _T("hcr_dischargedate");
		
		/*
		szSQL.Format(_T("UPDATE hms_clinical_record ") \
		_T(" SET hcr_status='%s', ") \
		_T(" hcr_clindoctor='%s',") \
		_T(" hcr_dischargedept='%s', ") \
		_T(" hcr_reason='%s', ") \
		_T(" hcr_result='%s', ") \
		_T(" hcr_suggestion='T', ") \
		_T(" hcr_conclusion='%s', ") \
		_T(" hcr_mainicd='%s', ") \
		_T(" hcr_maindisease='%s', ") \
		_T(" hcr_gmethod='%s', ") \
		_T(" hcr_gsuggestion2='%s', ") \
		_T(" hcr_refidx=%d, ") \
		_T(" hcr_reldisease='%s' ")
		_T(" WHERE hcr_docno=%ld "),
			szStatus,
			m_szClosingDoctorKey,
			pMF->m_szDept, 
			m_szAdmissionStatus,
			m_szResultKey, 
			m_szConclusion,
			m_szICD10Key,
			m_szMainDisease,
			m_szTreatMethod,
			m_szYkiendenghi,
			pMF->m_nRefIndex,
			m_szRelationDisease,
			pMF->m_nDocumentNo);
*/
	}
	else
	{
		
		/*
	szSQL.Format(_T("UPDATE hms_clinical_record ") \
		_T(" SET hcr_status='%s', ") \
		_T(" hcr_clindoctor='%s',") \
		_T(" hcr_dischargedate= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), ") 
		_T(" hcr_dischargedept='%s', ") \
		_T(" hcr_reason='%s', ") \
		_T(" hcr_result='%s', ") \
		_T(" hcr_suggestion='T', ") \
		_T(" hcr_conclusion='%s', ") \
		_T(" hcr_mainicd='%s', ") \
		_T(" hcr_maindisease='%s', ") \
		_T(" hcr_gmethod='%s', ") \
		_T(" hcr_gsuggestion2='%s', ") \
		_T(" hcr_refidx=%d, ") \
		_T(" hcr_reldisease='%s' ")
		_T(" WHERE hcr_docno=%ld "), 
			szStatus,
			m_szClosingDoctorKey,
			m_szEndDate, 
			pMF->m_szDept, 
			m_szAdmissionStatus,
			m_szResultKey, 
			m_szConclusion,
			m_szICD10Key,
			m_szMainDisease,
			m_szTreatMethod,
			m_szYkiendenghi,
			pMF->m_nRefIndex,
			m_szRelationDisease,
			pMF->m_nDocumentNo);
*/
       }

	szSQL.Format(_T("%s"), m_hms_clinicalTbl.GetUpdateSQL(szExceptions));
	szSQL.AppendFormat(_T("WHERE hcr_docno=%ld "),  pMF->m_nDocumentNo);
	
	szSQL.Format(_T("%s WHERE hcr_docno=%ld "), m_hms_clinicalTbl.GetUpdateSQL(), pMF->m_nDocumentNo);
_debug(_T("%s"), szSQL);
	szSQL.Format(_T("hms_clinical_record_update(%ld, %d, q'$%s$')")
				, pMF->m_nDocumentNo, pMF->m_nTreatTime, pMF->DbfMap2Json(&m_hms_clinicalTbl));
 _fmsg(_T("%s"), szSQL);
 	//int ret = pMF->ExecSQL(szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0) 
 	{ 

		//if(pMF->IsOnceRollback(pMF->m_nDocumentNo))
		szExceptions.Empty();
		if (m_szDischarge == _T("Y"))
		{
			szExceptions = _T("htr_dischargedate");
			/*
			szSQL.Format(_T("UPDATE hms_treatment_record ") \
			_T(" SET htr_updateddate=systimestamp,  htr_status='T', ") \
			_T(" htr_dischargedate= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), ") 
			_T(" htr_mainicd='%s', ") \
			_T(" htr_maindisease='%s', ") \
			_T(" htr_suggestion='T' ") \
			_T(" WHERE htr_docno=%ld AND htr_idx=%d AND htr_status in('I','T') "),
				m_szEndDate,
				m_szICD10Key,
				m_szMainDisease,
				pMF->m_nDocumentNo,
				pMF->m_nRefIndex);
			*/
		}
		else
		{
			/*
			szSQL.Format(_T("UPDATE hms_treatment_record ") \
			_T(" SET htr_updateddate=systimestamp,  htr_status='T', ") \
			_T(" htr_dischargedate= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), ") 
			_T(" htr_mainicd='%s', ") \
			_T(" htr_maindisease='%s', ") \
			_T(" htr_suggestion='T' ") \
			_T(" WHERE htr_docno=%ld AND htr_idx=%d AND htr_status in('I','T') "),
				m_szEndDate,
				m_szICD10Key,
				m_szMainDisease,
				pMF->m_nDocumentNo,
				pMF->m_nRefIndex);
			*/
		}
		szWhere.Format(_T("WHERE htr_docno=%ld AND htr_idx=%d AND htr_status in('I','T')"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		m_hms_treatmentTbl.Open(&pMF->m_db, szWhere);
		m_hms_treatmentTbl.SetValue(_T("htr_updateddate"), pMF->GetSysDateTime());
		m_hms_treatmentTbl.SetValue(_T("htr_dischargedate"), m_szEndDate);
		m_hms_treatmentTbl.SetValue(_T("htr_mainicd"), m_szICD10Key);
		m_hms_treatmentTbl.SetValue(_T("htr_maindisease"), m_szMainDisease);
		m_hms_treatmentTbl.SetValue(_T("htr_suggestion"), _T("T"));
		m_hms_treatmentTbl.SetValue(_T("htr_status"), szStatus);
		szSQL.Format(_T("%s %s"), m_hms_treatmentTbl.GetUpdateSQL(szExceptions), szWhere);
		pMF->ExecSQL(szSQL);


		szSQL.Format(_T("DELETE FROM hms_treatment_record WHERE htr_docno=%ld AND htr_status='A' "), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);

		//Vi benh nhan ra vien nen ko de record luu cac thong tin chuyen vien.
		szSQL.Format(_T("DELETE FROM hms_htdoc WHERE hhtd_docno=%ld"), pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
 		SetMode(VM_VIEW);
		OnUpdateDeathInformation();

		pMF->m_wndPatientDocument.LoadData(pMF->m_nPatientNo, pMF->m_nDocumentNo, pMF->m_nRefIndex);
 	} 
 	else 
 	{ 
 	} 

 	return ret; 
}
int CHMSDischarge::OnCancelHMSDischarge(){
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
int CHMSDischarge::OnHMSDischargeListLoadData(){
	return 0;
}


int CHMSDischarge::OnUpdateDeathInformation(){
	//return 0;
	if(m_szResultKey == _T("5") || m_szResultKey == _T("6"))
	{
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CHMSPatientDeathDialog dlg(this);
		dlg.m_nPatientNo = pMF->m_wndPatientDocument.m_nPatientNo;
		dlg.m_szDieState = m_szResultKey;
		dlg.DoModal();
	}
	return 0;
}

void CHMSDischarge::OnCreateAppointmentSelect()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CRect rect;
	m_wndCreateAppointment.GetWindowRect(&rect);
	CString szItemStr;
	szItemStr.Format(_T("Hẹn ngày|Hẹn thời điểm"));
	int nMenuId = pMF->CreatePopupMenu(&menu, &rect, szItemStr);
	if (nMenuId == 1)
	{
		CIVFAppointmentDialog dlg(this);
		dlg.m_nDocumentNo = pMF->m_nDocumentNo;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}
	if (nMenuId == 2)
	{
		CIVFAppointmentDialog2 dlg(this);
		dlg.m_nDocumentNo = pMF->m_nDocumentNo;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}		
}