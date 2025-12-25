#include "HMSTreatmentExamine.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentExamine* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnExamineChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnExamineChange();
} */
/*static void _OnExamineSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnExamineSetfocus();} */ 
/*static void _OnExamineKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnExamineKillfocus();
} */
static int _OnExamineCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnExamineCheckValue();
} 
/*static void _OnPulseChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnPulseChange();
} */
/*static void _OnPulseSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnPulseSetfocus();} */ 
/*static void _OnPulseKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnPulseKillfocus();
} */
static int _OnPulseCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnPulseCheckValue();
} 
/*static void _OnTemperatureChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnTemperatureChange();
} */
/*static void _OnTemperatureSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnTemperatureSetfocus();} */ 
/*static void _OnTemperatureKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnTemperatureKillfocus();
} */
static int _OnTemperatureCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnTemperatureCheckValue();
} 
/*static void _OnBloodPressureChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnBloodPressureChange();
} */
/*static void _OnBloodPressureSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnBloodPressureSetfocus();} */ 
/*static void _OnBloodPressureKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnBloodPressureKillfocus();
} */
static int _OnBloodPressureCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnBloodPressureCheckValue();
} 
/*static void _OnBloodPressurexChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnBloodPressurexChange();
} */
/*static void _OnBloodPressurexSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnBloodPressurexSetfocus();} */ 
/*static void _OnBloodPressurexKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnBloodPressurexKillfocus();
} */
static int _OnBloodPressurexCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnBloodPressurexCheckValue();
} 
/*static void _OnBreathingIntervalChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnBreathingIntervalChange();
} */
/*static void _OnBreathingIntervalSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnBreathingIntervalSetfocus();} */ 
/*static void _OnBreathingIntervalKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnBreathingIntervalKillfocus();
} */
static int _OnBreathingIntervalCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnBreathingIntervalCheckValue();
} 
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnWeightCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamine *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnHeightCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSTreatmentExamine *pVw = (CHMSTreatmentExamine *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSTreatmentExamine *pVw = (CHMSTreatmentExamine *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSTreatmentExamine *pVw = (CHMSTreatmentExamine *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentExamine *pVw = (CHMSTreatmentExamine *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTreatmentExamine *pVw = (CHMSTreatmentExamine *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSTreatmentExamine *pVw = (CHMSTreatmentExamine *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnExamineListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine*)pWnd)->OnExamineListLoadData();
} 
static void _OnExamineListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentExamine*)pWnd)->OnExamineListDblClick();
} 
static void _OnExamineListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentExamine*)pWnd)->OnExamineListSelectChange(nOldItem, nNewItem);
} 
static int _OnExamineListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamine*)pWnd)->OnExamineListDeleteItem();
} 
static int _OnAddHMSTreatmentExamineFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamine*)pWnd)->OnAddHMSTreatmentExamine();
} 
static int _OnEditHMSTreatmentExamineFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamine*)pWnd)->OnEditHMSTreatmentExamine();
} 
static int _OnDeleteHMSTreatmentExamineFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamine*)pWnd)->OnDeleteHMSTreatmentExamine();
} 
static int _OnSaveHMSTreatmentExamineFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamine*)pWnd)->OnSaveHMSTreatmentExamine();
} 
static int _OnCancelHMSTreatmentExamineFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamine*)pWnd)->OnCancelHMSTreatmentExamine();
} 
static int _OnCertificateofphysicaleyeclinicFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamine *)pWnd)->OnCertificateofphysicaleyeclinic();
}

CHMSTreatmentExamine::CHMSTreatmentExamine(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CHMSTreatmentExamine::~CHMSTreatmentExamine(){
}
void CHMSTreatmentExamine::OnCreateComponents(){
	m_wndExaminationInformation.Create(this, _T("Examination Information"), 5, 5, 615, 190);
	m_wndExaminationList.Create(this, _T("Examination Sheet List"), 5, 225, 615, 570);
	m_wndDateLabel.Create(this, _T("Exam Date"), 10, 30, 130, 55);
	m_wndDate.Create(this,135, 30, 255, 55); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 260, 30, 340, 55);
	m_wndDoctor.Create(this,345, 30, 610, 55); 
	m_wndDescLabel.Create(this, _T("\x44i\x1EC5n \x62i\x1EBFn \x63\x1EE7\x61 \x62\x1EC7nh"), 10, 60, 130, 85);
	m_wndDesc.Create(this,135, 60, 610, 125, TRUE, FALSE, TRUE); 
	m_wndPulseLabel.Create(this, _T("Pulse"), 10, 130, 130, 155);
	m_wndPulse.Create(this,135, 130, 185, 155); 
	m_wndTemperatureLabel.Create(this, _T("Temperature"), 190, 130, 290, 155);
	m_wndTemperature.Create(this,295, 130, 345, 155); 
	m_wndBloodPressureLabel.Create(this, _T("Blood Pressure"), 350, 130, 450, 155);
	m_wndBloodPressure.Create(this,455, 130, 505, 155); 
	m_wndBloodPressurex.Create(this,510, 130, 560, 155); 
	m_wndBreathingIntervalLabel.Create(this, _T("Breathing Interval"), 10, 160, 130, 185);
	m_wndBreathingInterval.Create(this,135, 160, 185, 185); 
	m_wndWeightLabel.Create(this, _T("Weight"), 190, 160, 290, 185);
	m_wndWeight.Create(this,295, 160, 345, 185); 
	m_wndHeightLabel.Create(this, _T("Height"), 350, 160, 450, 185);
	m_wndHeight.Create(this,455, 160, 505, 185); 
	m_wndAdd.Create(this, _T("&Add"), 110, 195, 190, 220);
	m_wndEdit.Create(this, _T("&Edit"), 195, 195, 275, 220);
	m_wndDelete.Create(this, _T("&Delete"), 280, 195, 360, 220);
	m_wndSave.Create(this, _T("&Save"), 365, 195, 445, 220);
	m_wndCancel.Create(this, _T("&Cancel"), 450, 195, 530, 220);
	m_wndPrint.Create(this, _T("&Print"), 535, 195, 615, 220);
	m_wndExamineList.Create(this,10, 250, 610, 565); 
}
void CHMSTreatmentExamine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szDate =pMF->GetSysDateTime();
	m_wndDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndDesc.SetLimitText(512);
	m_wndDesc.SetCheckValue(true);
	m_wndPulse.SetLimitText(3);
	m_wndPulse.SetCheckValue(true);
	m_wndTemperature.SetLimitText(4);
	m_wndTemperature.SetCheckValue(true);
	m_wndBloodPressure.SetLimitText(5);
	m_wndBloodPressure.SetCheckValue(true);
	m_wndBloodPressurex.SetLimitText(5);
	m_wndBloodPressurex.SetCheckValue(true);
	m_wndBreathingInterval.SetLimitText(3);
	m_wndBreathingInterval.SetCheckValue(true);
	m_wndWeight.SetLimitText(3);
	m_wndWeight.SetCheckValue(true);
	m_wndHeight.SetLimitText(3);
	m_wndHeight.SetCheckValue(true);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndExamineList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 50);
	m_wndExamineList.InsertColumn(1, _T("Exam Date"), CFMT_DATETIME, 120);
	m_wndExamineList.InsertColumn(2, _T("Doctor"), CFMT_TEXT, 150);
	m_wndExamineList.InsertColumn(3, _T("Desc"), CFMT_TEXT, 250);
	m_wndExamineList.InsertColumn(4, _T(""), CFMT_NUMBER, 0);
	m_wndExamineList.InsertColumn(5, _T(""), CFMT_MONEY, 0);
	m_wndExamineList.InsertColumn(6, _T(""), CFMT_NUMBER, 0);
	m_wndExamineList.InsertColumn(7, _T(""), CFMT_NUMBER, 0);
	m_wndExamineList.InsertColumn(8, _T(""), CFMT_NUMBER, 0);
	m_wndExamineList.InsertColumn(9, _T(""), CFMT_NUMBER, 0);
	m_wndExamineList.InsertColumn(10, _T(""), CFMT_NUMBER, 0);
	m_wndExamineList.InsertColumn(11, _T(""), CFMT_NUMBER, 0);
	

	m_hms_siexamTbl.SetTableName(_T("hms_siexam"));
	m_hms_siexamTbl.AddField(_T("hsie_createdby"), dfText, 15); 
	m_hms_siexamTbl.AddField(_T("hsie_createddate"), dfDateTime); 
	m_hms_siexamTbl.AddField(_T("hsie_updatedby"), dfText, 15); 
	m_hms_siexamTbl.AddField(_T("hsie_updateddate"), dfDateTime); 
	m_hms_siexamTbl.AddField(_T("hsie_patientno"), dfLong); 
	m_hms_siexamTbl.AddField(_T("hsie_docno"), dfLong); 
	m_hms_siexamTbl.AddField(_T("hsie_refidx"), dfInteger);	
	m_hms_siexamTbl.AddField(_T("hsie_deptid"), dfText, 7); 
	m_hms_siexamTbl.AddField(_T("hsie_roomid"), dfInteger); 
	m_hms_siexamTbl.AddField(_T("hsie_date"), dfDateTime); 
	m_hms_siexamTbl.AddField(_T("hsie_doctor"), dfText, 15); 
	m_hms_siexamTbl.AddField(_T("hsie_nurse"), dfText, 15); 
	m_hms_siexamTbl.AddField(_T("hsie_desc"), dfText, 512); 
	m_hms_siexamTbl.AddField(_T("hsie_pulse"), dfDouble); 
	m_hms_siexamTbl.AddField(_T("hsie_temperature"), dfDouble); 
	m_hms_siexamTbl.AddField(_T("hsie_bloodpressure"), dfInteger); 
	m_hms_siexamTbl.AddField(_T("hsie_bloodpressurex"), dfInteger); 
	m_hms_siexamTbl.AddField(_T("hsie_breathinterval"),dfDouble);
	m_hms_siexamTbl.AddField(_T("hsie_weight"), dfDouble); 
	m_hms_siexamTbl.AddField(_T("hsie_height"), dfDouble); 
	
}
void CHMSTreatmentExamine::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	//	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	//m_wndExamine.SetEvent(WE_CHANGE, _OnExamineChangeFnc);
	//m_wndExamine.SetEvent(WE_SETFOCUS, _OnExamineSetfocusFnc);
	//m_wndExamine.SetEvent(WE_KILLFOCUS, _OnExamineKillfocusFnc);
	m_wndDesc.SetEvent(WE_CHECKVALUE, _OnExamineCheckValueFnc);
	//m_wndPulse.SetEvent(WE_CHANGE, _OnPulseChangeFnc);
	//m_wndPulse.SetEvent(WE_SETFOCUS, _OnPulseSetfocusFnc);
	//m_wndPulse.SetEvent(WE_KILLFOCUS, _OnPulseKillfocusFnc);
	m_wndPulse.SetEvent(WE_CHECKVALUE, _OnPulseCheckValueFnc);
	//m_wndTemperature.SetEvent(WE_CHANGE, _OnTemperatureChangeFnc);
	//m_wndTemperature.SetEvent(WE_SETFOCUS, _OnTemperatureSetfocusFnc);
	//m_wndTemperature.SetEvent(WE_KILLFOCUS, _OnTemperatureKillfocusFnc);
	m_wndTemperature.SetEvent(WE_CHECKVALUE, _OnTemperatureCheckValueFnc);
	//m_wndBloodPressure.SetEvent(WE_CHANGE, _OnBloodPressureChangeFnc);
	//m_wndBloodPressure.SetEvent(WE_SETFOCUS, _OnBloodPressureSetfocusFnc);
	//m_wndBloodPressure.SetEvent(WE_KILLFOCUS, _OnBloodPressureKillfocusFnc);
	m_wndBloodPressure.SetEvent(WE_CHECKVALUE, _OnBloodPressureCheckValueFnc);
	//m_wndBloodPressurex.SetEvent(WE_CHANGE, _OnBloodPressurexChangeFnc);
	//m_wndBloodPressurex.SetEvent(WE_SETFOCUS, _OnBloodPressurexSetfocusFnc);
	//m_wndBloodPressurex.SetEvent(WE_KILLFOCUS, _OnBloodPressurexKillfocusFnc);
	m_wndBloodPressurex.SetEvent(WE_CHECKVALUE, _OnBloodPressurexCheckValueFnc);
	//m_wndBreathingInterval.SetEvent(WE_CHANGE, _OnBreathingIntervalChangeFnc);
	//m_wndBreathingInterval.SetEvent(WE_SETFOCUS, _OnBreathingIntervalSetfocusFnc);
	//m_wndBreathingInterval.SetEvent(WE_KILLFOCUS, _OnBreathingIntervalKillfocusFnc);
	m_wndBreathingInterval.SetEvent(WE_CHECKVALUE, _OnBreathingIntervalCheckValueFnc);
	//m_wndWeight.SetEvent(WE_CHANGE, _OnWeightChangeFnc);
	//m_wndWeight.SetEvent(WE_SETFOCUS, _OnWeightSetfocusFnc);
	//m_wndWeight.SetEvent(WE_KILLFOCUS, _OnWeightKillfocusFnc);
	m_wndWeight.SetEvent(WE_CHECKVALUE, _OnWeightCheckValueFnc);
	//m_wndHeight.SetEvent(WE_CHANGE, _OnHeightChangeFnc);
	//m_wndHeight.SetEvent(WE_SETFOCUS, _OnHeightSetfocusFnc);
	//m_wndHeight.SetEvent(WE_KILLFOCUS, _OnHeightKillfocusFnc);
	m_wndHeight.SetEvent(WE_CHECKVALUE, _OnHeightCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExamineList.SetEvent(WE_SELCHANGE, _OnExamineListSelectChangeFnc);
	m_wndExamineList.SetEvent(WE_LOADDATA, _OnExamineListLoadDataFnc);
	m_wndExamineList.SetEvent(WE_DBLCLICK, _OnExamineListDblClickFnc);
	m_wndExamineList.SetWindowText(_T("Treatment Vote"));
	m_wndExamineList.AddEvent(1, _T("Delete"), _OnExamineListDeleteItemFnc, 0, VK_DELETE, 0);

	AddEvent(1, _T("Certificate Of Physical Eye Clinice"), _OnCertificateofphysicaleyeclinicFnc);
/*
	
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatmentExamineFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatmentExamineFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatmentExamineFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatmentExamineFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatmentExamineFnc, 0, 'T', VK_CONTROL);
*/
	OnExamineListLoadData();
	SetMode(VM_NONE);

}
void CHMSTreatmentExamine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndDesc.GetDlgCtrlID(), m_szDesc);
	DDX_Text(pDX, m_wndPulse.GetDlgCtrlID(), m_nPulse);
	DDX_Text(pDX, m_wndTemperature.GetDlgCtrlID(), m_nTemperature);
	DDX_Text(pDX, m_wndBloodPressure.GetDlgCtrlID(), m_nBloodPressure);
	DDX_Text(pDX, m_wndBloodPressurex.GetDlgCtrlID(), m_nBloodPressurex);
	DDX_Text(pDX, m_wndBreathingInterval.GetDlgCtrlID(), m_nBreathingInterval);
	DDX_Text(pDX, m_wndWeight.GetDlgCtrlID(), m_nWeight);
	DDX_Text(pDX, m_wndHeight.GetDlgCtrlID(), m_nHeight);

}
void CHMSTreatmentExamine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_siexam where hsie_docno = %ld and hsie_idx = %d "), pMF->m_nDocumentNo, m_Idx);	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){		
		rs.GetValue(_T("hsie_date")),
		rs.GetValue(_T("hsie_Doctor"), m_szDoctorKey);
		rs.GetValue(_T("hsie_desc"), m_szDesc);
		rs.GetValue(_T("hsie_pulse"), m_nPulse);
		rs.GetValue(_T("hsie_temperature"), m_nTemperature),
		rs.GetValue(_T("hsie_bloodpressure"), m_nBloodPressure);
		rs.GetValue(_T("hsie_bloodpressurex"), m_nBloodPressurex);
		rs.GetValue(_T("hsie_breathinterval"), m_nBreathingInterval);
		rs.GetValue(_T("hsie_weight"), m_nWeight);
		rs.GetValue(_T("hsie_height"), m_nHeight);
		rs.GetValue(_T("hsie_idx"));
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSTreatmentExamine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_siexamTbl.SetValue(_T("hsie_createdby"), pMF->GetCurrentUser());
	m_hms_siexamTbl.SetValue(_T("hsie_createddate"), pMF->GetSysDateTime());
	m_hms_siexamTbl.SetValue(_T("hsie_updatedby"), pMF->GetCurrentUser());
	m_hms_siexamTbl.SetValue(_T("hsie_updateddate"), pMF->GetSysDateTime());
	m_hms_siexamTbl.SetValue(_T("hsie_patientno"), pMF->m_nPatientNo);
	m_hms_siexamTbl.SetValue(_T("hsie_docno"), pMF->m_nDocumentNo);
	m_hms_siexamTbl.SetValue(_T("hsie_doctor"), m_szDoctorKey);
	m_hms_siexamTbl.SetValue(_T("hsie_deptid"), pMF->m_szDept);
	m_hms_siexamTbl.SetValue(_T("hsie_refidx"), pMF->m_nRefIndex);
	m_hms_siexamTbl.SetValue(_T("hsie_date"),m_szDate);
	m_hms_siexamTbl.SetValue(_T("hsie_pulse"), m_nPulse);
	m_hms_siexamTbl.SetValue(_T("hsie_desc"), m_szDesc);
	m_hms_siexamTbl.SetValue(_T("hsie_temperature"), m_nTemperature);
	m_hms_siexamTbl.SetValue(_T("hsie_bloodpressure"), m_nBloodPressure);
	m_hms_siexamTbl.SetValue(_T("hsie_bloodpressurex"), m_nBloodPressurex);
	m_hms_siexamTbl.SetValue(_T("hsie_breathinterval"), m_nBreathingInterval);
	m_hms_siexamTbl.SetValue(_T("hsie_weight"), m_nWeight);
	m_hms_siexamTbl.SetValue(_T("hsie_height"), m_nHeight);

}
void CHMSTreatmentExamine::SetDefaultValues(){					
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	m_szDoctorKey.Empty();		
	m_szDesc.Empty();
	m_nPulse=0;	
	m_nTemperature=0.00;
	m_nBloodPressure=0;
	m_nBloodPressurex=0;
	m_nBreathingInterval=0;
	m_nWeight=0;
	m_nHeight=0;

}
int CHMSTreatmentExamine::SetMode(int nMode){
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
			m_szDoctorKey = pMF->m_szDoctor;
			if(m_szDoctorKey.IsEmpty())
				m_wndDoctor.SetFocus();
			else
				m_wndDesc.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndDesc.SetFocus();
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
/*void CHMSTreatmentExamine::OnDateChange(){
	
} */
/*void CHMSTreatmentExamine::OnDateSetfocus(){
	
} */
/*void CHMSTreatmentExamine::OnDateKillfocus(){
	
} */
int CHMSTreatmentExamine::OnDateCheckValue(){
	return 0;
} 
void CHMSTreatmentExamine::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentExamine::OnDoctorSelendok(){
	 
}
/*void CHMSTreatmentExamine::OnDoctorSetfocus(){
	
}*/
/*void CHMSTreatmentExamine::OnDoctorKillfocus(){
	
}*/
long CHMSTreatmentExamine::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and su_groupid in('D','P') "));
	pMF->LoadDoctorList(&m_wndDoctor, m_szDoctorKey, pMF->m_szDept, szFilter);
	
	return 0;
}
/*void CHMSTreatmentExamine::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentExamine::OnExamineChange(){
	
} */
/*void CHMSTreatmentExamine::OnExamineSetfocus(){
	
} */
/*void CHMSTreatmentExamine::OnExamineKillfocus(){
	
} */
int CHMSTreatmentExamine::OnExamineCheckValue(){
	return 0;
} 
/*void CHMSTreatmentExamine::OnPulseChange(){
	
} */
/*void CHMSTreatmentExamine::OnPulseSetfocus(){
	
} */
/*void CHMSTreatmentExamine::OnPulseKillfocus(){
	
} */
int CHMSTreatmentExamine::OnPulseCheckValue(){
	return 0;
} 
/*void CHMSTreatmentExamine::OnTemperatureChange(){
	
} */
/*void CHMSTreatmentExamine::OnTemperatureSetfocus(){
	
} */
/*void CHMSTreatmentExamine::OnTemperatureKillfocus(){
	
} */
int CHMSTreatmentExamine::OnTemperatureCheckValue(){
	return 0;
} 
/*void CHMSTreatmentExamine::OnBloodPressureChange(){
	
} */
/*void CHMSTreatmentExamine::OnBloodPressureSetfocus(){
	
} */
/*void CHMSTreatmentExamine::OnBloodPressureKillfocus(){
	
} */
int CHMSTreatmentExamine::OnBloodPressureCheckValue(){
	return 0;
} 
/*void CHMSTreatmentExamine::OnBloodPressurexChange(){
	
} */
/*void CHMSTreatmentExamine::OnBloodPressurexSetfocus(){
	
} */
/*void CHMSTreatmentExamine::OnBloodPressurexKillfocus(){
	
} */
int CHMSTreatmentExamine::OnBloodPressurexCheckValue(){
	return 0;
} 
/*void CHMSTreatmentExamine::OnBreathingIntervalChange(){
	
} */
/*void CHMSTreatmentExamine::OnBreathingIntervalSetfocus(){
	
} */
/*void CHMSTreatmentExamine::OnBreathingIntervalKillfocus(){
	
} */
int CHMSTreatmentExamine::OnBreathingIntervalCheckValue(){
	return 0;
} 
/*void CHMSTreatmentExamine::OnWeightChange(){
	
} */
/*void CHMSTreatmentExamine::OnWeightSetfocus(){
	
} */
/*void CHMSTreatmentExamine::OnWeightKillfocus(){
	
} */
int CHMSTreatmentExamine::OnWeightCheckValue(){
	return 0;
} 
/*void CHMSTreatmentExamine::OnHeightChange(){
	
} */
/*void CHMSTreatmentExamine::OnHeightSetfocus(){
	
} */
/*void CHMSTreatmentExamine::OnHeightKillfocus(){
	
} */
int CHMSTreatmentExamine::OnHeightCheckValue(){
	return 0;
} 
void CHMSTreatmentExamine::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSTreatmentExamine();
	
} 
void CHMSTreatmentExamine::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSTreatmentExamine();	
} 
void CHMSTreatmentExamine::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSTreatmentExamine();	
} 
void CHMSTreatmentExamine::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSTreatmentExamine();	
} 
void CHMSTreatmentExamine::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSTreatmentExamine();
} 
void CHMSTreatmentExamine::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CReport rpt;
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	long nDocumentNo;

	if(!rpt.Init(_T("Reports/HMS/ITREAT_TODIEUTRI.RPT")) )
		return;
	
	szSQL.Format(_T(" SELECT hd_docno AS fdocno,") \
_T("   trim(hp_surname") \
_T("   || ' '") \
_T("   || hp_midname") \
_T("   || ' '") \
_T("   || hp_firstname)                                    AS fname,") \
_T("   sys_sel_getname('sys_sex', hp_sex)                  AS fsex,") \
_T("   hms_getage( trunc_date(hd_admitdate), hp_birthdate) AS fage,") \
_T("   hms_getaddress(hp_provid, hp_distid,hp_villid)      AS faddress,") \
_T("   htr_deptid                                          AS fdeptid, ") \
_T(" htr_maindisease as fDiagnostic ") \
_T(" FROM hms_treatment_record ,") \
_T("   hms_doc ,") \
_T("   hms_patient") \
_T(" WHERE htr_docno  = hd_docno") \
_T(" AND hd_patientno = hp_patientno") \
_T(" AND htr_docno    = %ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	//Report Header
	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rs.GetValue(_T("fdocno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocNo"), tmpStr);
	rs.GetValue(_T("bookno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BookNo"), tmpStr);
	CString szSerialNo;
	rs.GetValue(_T("fname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), tmpStr);
	rs.GetValue(_T("fage"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("fsex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("faddress"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);	
	
	rs.GetValue(_T("fdeptid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);	


	rs.GetValue(_T("fdiagnostic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("diagnostic"), tmpStr);	


	CString szDate;
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	szDate = rpt.GetReportHeader()->GetValue(_T("SheetNumber"));
	tmpStr.Format(szDate, 1);
	rpt.GetReportHeader()->SetValue(_T("SheetNumber"), tmpStr);
	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(0); 

	CString szIdxs=_T("0");
	for (int i= 0; i < m_wndExamineList.GetItemCount(); i++)
	{
		if(m_wndExamineList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
		{
			szIdxs.AppendFormat(_T(",%s"), m_wndExamineList.GetItemText(i, 11));
		}
	}
	szSQL.Format(_T("SELECT TO_CHAR(hsie_date,'HH24:MI DD/MM/YYYY') as fdate, hsie_desc as fdesc ") \
		_T("FROM hms_siexam ") \
		_T("WHERE hsie_docno=%ld and hsie_idx in(%s) "), pMF->m_nDocumentNo, szIdxs);

	rs.ExecSQL(szSQL);
	while (!rs.IsEOF()){
		rptDetail=rpt.AddDetail();
		rs.GetValue(_T("fdate"), tmpStr);
		rptDetail->SetValue(_T("1"),tmpStr);
		rs.GetValue(_T("fdesc"), tmpStr);
		rptDetail->SetValue(_T("2"),tmpStr);	
//		rs.GetValue(_T("fdesc"), tmpStr);
//		rptDetail->SetValue(_T("3"),tmpStr);
		rs.MoveNext();
	}

	//Page Footer
	//Report Footer
//	rpt.Print();

	tmpStr.Format(szDate, 2);
	rpt.GetReportHeader()->SetValue(_T("SheetNumber"), tmpStr);

	rpt.PrintPreview();
	//rpt.Print(true);	
	
} 
void CHMSTreatmentExamine::OnExamineListDblClick(){
	
} 
void CHMSTreatmentExamine::OnExamineListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	int sel =m_wndExamineList.GetCurSel();
	if (sel < 0) return ;
	
	/*m_szDate=m_wndExamineList.GetItemText(sel,1);
	tmpStr.Format(_T("%s"), m_wndExamineList.GetItemText(sel,2));	
	m_szDoctorKey=tmpStr;
	m_szDesc=m_wndExamineList.GetItemText(sel,3);
	m_nPulse= ToLong(m_wndExamineList.GetItemText(sel,4));
	m_nTemperature=ToFloat(m_wndExamineList.GetItemText(sel,5));
	m_nBloodPressure=ToLong(m_wndExamineList.GetItemText(sel,6));
	m_nBloodPressurex=ToLong(m_wndExamineList.GetItemText(sel,7));
	m_nBreathingInterval=ToLong(m_wndExamineList.GetItemText(sel,8));
	m_nWeight=ToLong(m_wndExamineList.GetItemText(sel,9));
	m_nHeight=ToLong(m_wndExamineList.GetItemText(sel,10));*/
	m_Idx=ToLong(m_wndExamineList.GetItemText(sel, 11));
	
	GetDataToScreen();
	
	//UpdateData(false);	
} 
int CHMSTreatmentExamine::OnExamineListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSTreatmentExamine();
	 return 0;
} 
long CHMSTreatmentExamine::OnExamineListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsDate(&pMF->m_db);
	CString szSQL, szSQL1;
	
	m_wndExamineList.BeginLoad(); 
	int nCount = 0, nIdx=0;		
	
	CString szNewDate, szOldDate, tmpStr;

	szSQL.Format(_T(" SELECT hsie_idx, hsie_date, hsie_doctor, hsie_desc, hsie_pulse, hsie_temperature, hsie_bloodpressure, hsie_bloodpressurex, \
    hsie_breathinterval, hsie_weight, hsie_height FROM hms_siexam WHERE hsie_docno=%ld ORDER BY hsie_date "), pMF->m_nDocumentNo);
	nCount = rs.ExecSQL(szSQL);

		while(!rs.IsEOF()){ 
			nIdx++;
			rs.GetValue(_T("treat_date"), tmpStr);
			szNewDate=tmpStr.Left(10);
			if(szNewDate != szOldDate){
			 int nItem = m_wndExamineList.AddItems(
					_T(""),
					CDate::Convert(szNewDate,yyyymmdd,ddmmyyyy) ,NULL);
			 m_wndExamineList.MergeCell(nItem, 1, nItem, 10, DT_LEFT|DT_VCENTER|DT_SINGLELINE,true);
			 szOldDate=szNewDate;
			 nIdx=1;
			}
			tmpStr.Format(_T("%d"),nIdx);
			m_wndExamineList.AddItems(
				tmpStr, 
				rs.GetValue(_T("hsie_date")),
				rs.GetValue(_T("hsie_Doctor")),
				rs.GetValue(_T("hsie_desc")),
				rs.GetValue(_T("hsie_pulse")),
				rs.GetValue(_T("hsie_temperature")),
				rs.GetValue(_T("hsie_bloodpressure")),
				rs.GetValue(_T("hsie_bloodpressurex")),
				rs.GetValue(_T("hsie_breathinterval")),
				rs.GetValue(_T("hsie_weight")),
				rs.GetValue(_T("hsie_height")),
				rs.GetValue(_T("hsie_idx")),
				NULL);
			rs.MoveNext();			
		}		
	
	m_wndExamineList.EndLoad(); 
	return nCount;

	return 0;
}
int CHMSTreatmentExamine::OnAddHMSTreatmentExamine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	
	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;

	}

	if(!pMF->CheckPermission(_T("04.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->m_wndPatientDocument.m_nDocumentNo > 0) 
		SetMode(VM_ADD);

	return 0; 
}
int CHMSTreatmentExamine::OnEditHMSTreatmentExamine(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;

	}

	if(!pMF->CheckPermission(_T("04.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Can not manipulate with current status."));
		return 0;
	}
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentExamine::OnDeleteHMSTreatmentExamine(){
 	int nSel = m_wndExamineList.GetCurSel();
	if(nSel < 0)
		return 0;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 

	if(pMF->IsDocumentReadOnly())
	{
		ShowMessageBox(_T("Cannot process with current status"));
		return 0;

	}

	if(!pMF->CheckPermission(_T("04.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM hms_siexam WHERE  hsie_idx =%ld"), m_Idx ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		
		m_wndExamineList.DeleteItem(nSel);
 	}
	
	return 0;
}
int CHMSTreatmentExamine::OnSaveHMSTreatmentExamine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_siexamTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hsie_docno=%ld and hsie_idx =%ld"), pMF->m_nDocumentNo, m_Idx); 
 		szSQL = m_hms_siexamTbl.GetUpdateSQL(_T("hsie_createdby,hsie_createddate,hsie_patientno, hsie_docno, hsie_refidx, hsie_idx")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSTreatmentExamineListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
	OnExamineListLoadData();
 	return ret; 
 	return 0; 
}
int CHMSTreatmentExamine::OnCancelHMSTreatmentExamine(){
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
int CHMSTreatmentExamine::OnHMSTreatmentExamineListLoadData(){
	return 0;
}
void CHMSTreatmentExamine::RefreshData(){
	OnExamineListLoadData();
	SetMode(VM_NONE);
}

#include "ExamSpecialistEye.h"
int CHMSTreatmentExamine::OnCertificateofphysicaleyeclinic(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if (pMF->m_nDocumentNo > 0)
	{
		CExamSpecialistEye dlg(this);
		dlg.DoModal();
	}
	return 0;
}

void CHMSTreatmentExamine::OnResizeLayout()
{
	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100,&m_wndExaminationList,&m_wndExamineList,NULL);
	AddLayoutControls(WS_RESIZEX, 0, 0, 100, 0,&m_wndExaminationInformation,NULL);


}