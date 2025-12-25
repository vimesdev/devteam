#include "HMSSetPrivorityPatient.h"
#include "MainFrm.h"
/*static void _OnPatientnameChangeFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnPatientnameChange();
} */
/*static void _OnPatientnameSetfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnPatientnameSetfocus();} */ 
/*static void _OnPatientnameKillfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnPatientnameKillfocus();
} */
static int _OnPatientnameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetPrivorityPatient *)pWnd)->OnPatientnameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetPrivorityPatient *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetPrivorityPatient *)pWnd)->OnSexCheckValue();
} 
/*static void _OnDocnoChangeFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnDocnoChange();
} */
/*static void _OnDocnoSetfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnDocnoSetfocus();} */ 
/*static void _OnDocnoKillfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnDocnoKillfocus();
} */
static int _OnDocnoCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetPrivorityPatient *)pWnd)->OnDocnoCheckValue();
} 
/*static void _OnDepidChangeFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnDepidChange();
} */
/*static void _OnDepidSetfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnDepidSetfocus();} */ 
/*static void _OnDepidKillfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnDepidKillfocus();
} */
static int _OnDepidCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetPrivorityPatient *)pWnd)->OnDepidCheckValue();
} 
/*static void _OnInsuranceChangeFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnInsuranceChange();
} */
/*static void _OnInsuranceSetfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnInsuranceSetfocus();} */ 
/*static void _OnInsuranceKillfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnInsuranceKillfocus();
} */
static int _OnInsuranceCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetPrivorityPatient *)pWnd)->OnInsuranceCheckValue();
} 
/*static void _OnAdmitdateChangeFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnAdmitdateChange();
} */
/*static void _OnAdmitdateSetfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnAdmitdateSetfocus();} */ 
/*static void _OnAdmitdateKillfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnAdmitdateKillfocus();
} */
static int _OnAdmitdateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetPrivorityPatient *)pWnd)->OnAdmitdateCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetPrivorityPatient *)pWnd)->OnAddressCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSSetPrivorityPatient *pVw = (CHMSSetPrivorityPatient *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSetPrivorityPatient *pVw = (CHMSSetPrivorityPatient *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnDepositAmountChangeFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnDepositAmountChange();
} */
/*static void _OnDepositAmountSetfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnDepositAmountSetfocus();} */ 
/*static void _OnDepositAmountKillfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnDepositAmountKillfocus();
} */
static int _OnDepositAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetPrivorityPatient *)pWnd)->OnDepositAmountCheckValue();
} 
/*static void _OnTotalPatpaidChangeFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnTotalPatpaidChange();
} */
/*static void _OnTotalPatpaidSetfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnTotalPatpaidSetfocus();} */ 
/*static void _OnTotalPatpaidKillfocusFnc(CWnd *pWnd){
	((CHMSSetPrivorityPatient *)pWnd)->OnTotalPatpaidKillfocus();
} */
static int _OnTotalPatpaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetPrivorityPatient *)pWnd)->OnTotalPatpaidCheckValue();
} 
static void _OnPrioritySelectFnc(CWnd *pWnd){
	 ((CHMSSetPrivorityPatient*)pWnd)->OnPrioritySelect();
}
static int _OnAddHMSSetPrivorityPatientFnc(CWnd *pWnd){
	 return ((CHMSSetPrivorityPatient*)pWnd)->OnAddHMSSetPrivorityPatient();
} 
static int _OnEditHMSSetPrivorityPatientFnc(CWnd *pWnd){
	 return ((CHMSSetPrivorityPatient*)pWnd)->OnEditHMSSetPrivorityPatient();
} 
static int _OnDeleteHMSSetPrivorityPatientFnc(CWnd *pWnd){
	 return ((CHMSSetPrivorityPatient*)pWnd)->OnDeleteHMSSetPrivorityPatient();
} 
static int _OnSaveHMSSetPrivorityPatientFnc(CWnd *pWnd){
	 return ((CHMSSetPrivorityPatient*)pWnd)->OnSaveHMSSetPrivorityPatient();
} 
static int _OnCancelHMSSetPrivorityPatientFnc(CWnd *pWnd){
	 return ((CHMSSetPrivorityPatient*)pWnd)->OnCancelHMSSetPrivorityPatient();
} 
CHMSSetPrivorityPatient::CHMSSetPrivorityPatient(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 395;
	m_nDlgHeight = 425;
	SetDefaultValues();
}
CHMSSetPrivorityPatient::~CHMSSetPrivorityPatient(){
}
void CHMSSetPrivorityPatient::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 375, 360);
	m_wndPatientnameLabel.Create(this, _T("Patient Name"), 10, 60, 115, 85);
	m_wndPatientname.Create(this,120, 60, 370, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 115, 115);
	m_wndAge.Create(this,120, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 255, 115);
	m_wndSex.Create(this,260, 90, 370, 115); 
	m_wndDocnoLabel.Create(this, _T("Document No"), 10, 30, 115, 55);
	m_wndDocno.Create(this,120, 30, 220, 55); 
	m_wndDepidLabel.Create(this, _T("Dept"), 10, 180, 115, 206);
	m_wndDepid.Create(this,120, 180, 370, 205); 
	m_wndInsuranceLabel.Create(this, _T("Insurance"), 10, 210, 115, 235);
	m_wndInsurance.Create(this,120, 210, 370, 235); 
	m_wndAdmitdateLabel.Create(this, _T("Admitdate"), 10, 240, 115, 265);
	m_wndAdmitdate.Create(this,120, 240, 245, 265); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 115, 175);
	m_wndAddress.Create(this,120, 120, 370, 175); 
	m_wndApply.Create(this, _T("&Apply"), 190, 365, 280, 390);
	m_wndClose.Create(this, _T("&Close"), 285, 365, 375, 390);
	m_wndDepositAmountLabel.Create(this, _T("Deposit Amount"), 10, 270, 115, 295);
	m_wndDepositAmount.Create(this,120, 270, 245, 295); 
	m_wndTotalPatpaidLabel.Create(this, _T("Total Patpaid"), 10, 300, 115, 325);
	m_wndTotalPatpaid.Create(this,120, 300, 245, 325); 
	m_wndPriority.Create(this, _T("Priority"), 120, 330, 370, 355);

}
void CHMSSetPrivorityPatient::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientname.SetLimitText(15);
	m_wndPatientname.SetCheckValue(true);
	m_wndAge.SetMax(CDate(pMF->GetSysDate()));
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(1);
	m_wndSex.SetCheckValue(true);
	m_wndDocno.SetCheckValue(true);
	m_wndDepid.SetLimitText(7);
	m_wndDepid.SetCheckValue(true);
	m_wndInsurance.SetLimitText(35);
	m_wndInsurance.SetCheckValue(true);
	m_wndAdmitdate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitdate.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndDepositAmount.SetLimitText(16);
	m_wndDepositAmount.SetCheckValue(true);
	m_wndTotalPatpaid.SetLimitText(16);
	m_wndTotalPatpaid.SetCheckValue(true);
	

}
void CHMSSetPrivorityPatient::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientname.SetEvent(WE_CHANGE, _OnPatientnameChangeFnc);
	//m_wndPatientname.SetEvent(WE_SETFOCUS, _OnPatientnameSetfocusFnc);
	//m_wndPatientname.SetEvent(WE_KILLFOCUS, _OnPatientnameKillfocusFnc);
	m_wndPatientname.SetEvent(WE_CHECKVALUE, _OnPatientnameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndDocno.SetEvent(WE_CHANGE, _OnDocnoChangeFnc);
	//m_wndDocno.SetEvent(WE_SETFOCUS, _OnDocnoSetfocusFnc);
	//m_wndDocno.SetEvent(WE_KILLFOCUS, _OnDocnoKillfocusFnc);
	m_wndDocno.SetEvent(WE_CHECKVALUE, _OnDocnoCheckValueFnc);
	//m_wndDepid.SetEvent(WE_CHANGE, _OnDepidChangeFnc);
	//m_wndDepid.SetEvent(WE_SETFOCUS, _OnDepidSetfocusFnc);
	//m_wndDepid.SetEvent(WE_KILLFOCUS, _OnDepidKillfocusFnc);
	m_wndDepid.SetEvent(WE_CHECKVALUE, _OnDepidCheckValueFnc);
	//m_wndInsurance.SetEvent(WE_CHANGE, _OnInsuranceChangeFnc);
	//m_wndInsurance.SetEvent(WE_SETFOCUS, _OnInsuranceSetfocusFnc);
	//m_wndInsurance.SetEvent(WE_KILLFOCUS, _OnInsuranceKillfocusFnc);
	m_wndInsurance.SetEvent(WE_CHECKVALUE, _OnInsuranceCheckValueFnc);
	//m_wndAdmitdate.SetEvent(WE_CHANGE, _OnAdmitdateChangeFnc);
	//m_wndAdmitdate.SetEvent(WE_SETFOCUS, _OnAdmitdateSetfocusFnc);
	//m_wndAdmitdate.SetEvent(WE_KILLFOCUS, _OnAdmitdateKillfocusFnc);
	m_wndAdmitdate.SetEvent(WE_CHECKVALUE, _OnAdmitdateCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndDepositAmount.SetEvent(WE_CHANGE, _OnDepositAmountChangeFnc);
	//m_wndDepositAmount.SetEvent(WE_SETFOCUS, _OnDepositAmountSetfocusFnc);
	//m_wndDepositAmount.SetEvent(WE_KILLFOCUS, _OnDepositAmountKillfocusFnc);
	m_wndDepositAmount.SetEvent(WE_CHECKVALUE, _OnDepositAmountCheckValueFnc);
	//m_wndTotalPatpaid.SetEvent(WE_CHANGE, _OnTotalPatpaidChangeFnc);
	//m_wndTotalPatpaid.SetEvent(WE_SETFOCUS, _OnTotalPatpaidSetfocusFnc);
	//m_wndTotalPatpaid.SetEvent(WE_KILLFOCUS, _OnTotalPatpaidKillfocusFnc);
	m_wndTotalPatpaid.SetEvent(WE_CHECKVALUE, _OnTotalPatpaidCheckValueFnc);
	m_wndPriority.SetEvent(WE_CLICK, _OnPrioritySelectFnc);
	SetMode(VM_NONE);
	

}
void CHMSSetPrivorityPatient::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientname.GetDlgCtrlID(), m_szPatientname);
	DDX_TextEx(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndDocno.GetDlgCtrlID(), m_nDocno);
	DDX_Text(pDX, m_wndDepid.GetDlgCtrlID(), m_szDepid);
	DDX_Text(pDX, m_wndInsurance.GetDlgCtrlID(), m_szInsurance);
	DDX_TextEx(pDX, m_wndAdmitdate.GetDlgCtrlID(), m_szAdmitdate);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDepositAmount.GetDlgCtrlID(), m_nDepositAmount);
	DDX_Text(pDX, m_wndTotalPatpaid.GetDlgCtrlID(), m_nTotalPatpaid);
	DDX_Check(pDX, m_wndPriority.GetDlgCtrlID(), m_bPriority);

}
void CHMSSetPrivorityPatient::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT hcr_recordno as recordno,	hp_patientno as patientno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	sys_sel_getname('sys_ethnic', hp_ethnic) as ethnic, ") \
				_T(" 	sys_sel_getname('sys_occupation', hp_occupation) as occupation,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
				_T(" 	hd_object as objectid,") \
				_T(" 	hms_getobjectname(hd_object) as objectname,") \
				_T(" 	hd_cardno as cardno,") \
				_T(" 	hd_cardidx as cardidx,") \
				_T(" 	sys_sel_getname('hms_treatment_status', hcr_status) as status,") \
				_T(" 	get_username(hcr_treatdoctor) as doctor,") \
				_T("	trunc(hcr_admitdate) as admitdate, ") \
				_T(" 	case when hcr_admitdept is null then hd_priority else hcr_priority end AS priority,") \
				_T(" 	case when hcr_admitdept is null then HD_ADMITDEPT else hcr_admitdept end AS khoavao ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" WHERE hd_docno=%ld "), m_nDocno);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	CString tmpStr;

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), tmpStr);
		StringUpper(tmpStr, m_szPatientname);
		//rs.GetValue(_T("birthdate"), m_szBirthDate); 
		rs.GetValue(_T("yearofbirth"), m_szAge); 
		rs.GetValue(_T("sex"), m_szSex);		
		rs.GetValue(_T("address"), m_szAddress);				
		//rs.GetValue(_T("objectname"), m_szObject);
		rs.GetValue(_T("cardno"), m_szInsurance);		
		//rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("admitdate"), m_szAdmitdate);
		rs.GetValue(_T("priority"), m_bPriority);
		rs.GetValue(_T("khoavao"), m_szDepid);
	
		szSQL.Format(_T(" SELECT COALESCE(SUM(hfe_amount-hfe_patpaid), 0) as deposit") \
		_T(" FROM hms_fee_deposit") \
		_T(" WHERE hfe_docno = %ld") \
		_T(" AND hfe_status  ='P'") \
		_T(" AND hfe_class   = 'I'"), m_nDocno);
		rs.ExecSQL(szSQL);


		rs.GetValue(_T("deposit"), m_nDepositAmount);

		szSQL.Format(_T(" SELECT COALESCE(SUM(hfe_patdebt), 0) AS patdebt") \
		_T(" FROM hms_fee") \
		_T(" WHERE hfe_docno    = %ld"), m_nDocno);
		
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("patdebt"), m_nTotalPatpaid);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);


}
void CHMSSetPrivorityPatient::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_patientTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_firstname"), m_szPatientname);
	m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szAge);
	m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSex);
	m_hms_treatment_recordTbl.SetValue(_T("htr_createdby"), pMF->GetCurrentUser());
	m_hms_treatment_recordTbl.SetValue(_T("htr_createddate"), pMF->GetSysDateTime());
	m_hms_treatment_recordTbl.SetValue(_T("htr_updatedby"), pMF->GetCurrentUser());
	m_hms_treatment_recordTbl.SetValue(_T("htr_updateddate"), pMF->GetSysDateTime());
	m_hms_treatment_recordTbl.SetValue(_T("htr_docno"), m_nDocno);
	m_hms_treatment_recordTbl.SetValue(_T("htr_deptid"), m_szDepid);
	m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), m_szAdmitdate);

}
void CHMSSetPrivorityPatient::SetDefaultValues(){

	m_szPatientname.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_nDocno=0;
	m_szDepid.Empty();
	m_szInsurance.Empty();
	m_szAdmitdate.Empty();
	m_szAddress.Empty();
	m_nDepositAmount=0;
	m_nTotalPatpaid=0;
	m_bPriority=FALSE;

}
int CHMSSetPrivorityPatient::SetMode(int nMode){
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
		m_wndDocno.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSSetPrivorityPatient::OnPatientnameChange(){
	
} */
/*void CHMSSetPrivorityPatient::OnPatientnameSetfocus(){
	
} */
/*void CHMSSetPrivorityPatient::OnPatientnameKillfocus(){
	
} */
int CHMSSetPrivorityPatient::OnPatientnameCheckValue(){
	return 0;
} 
/*void CHMSSetPrivorityPatient::OnAgeChange(){
	
} */
/*void CHMSSetPrivorityPatient::OnAgeSetfocus(){
	
} */
/*void CHMSSetPrivorityPatient::OnAgeKillfocus(){
	
} */
int CHMSSetPrivorityPatient::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSSetPrivorityPatient::OnSexChange(){
	
} */
/*void CHMSSetPrivorityPatient::OnSexSetfocus(){
	
} */
/*void CHMSSetPrivorityPatient::OnSexKillfocus(){
	
} */
int CHMSSetPrivorityPatient::OnSexCheckValue(){
	return 0;
} 
/*void CHMSSetPrivorityPatient::OnDocnoChange(){
	
} */
/*void CHMSSetPrivorityPatient::OnDocnoSetfocus(){
	
} */
/*void CHMSSetPrivorityPatient::OnDocnoKillfocus(){
	
} */
int CHMSSetPrivorityPatient::OnDocnoCheckValue(){
	GetDataToScreen();
	return 0;
} 
/*void CHMSSetPrivorityPatient::OnDepidChange(){
	
} */
/*void CHMSSetPrivorityPatient::OnDepidSetfocus(){
	
} */
/*void CHMSSetPrivorityPatient::OnDepidKillfocus(){
	
} */
int CHMSSetPrivorityPatient::OnDepidCheckValue(){
	return 0;
} 
/*void CHMSSetPrivorityPatient::OnInsuranceChange(){
	
} */
/*void CHMSSetPrivorityPatient::OnInsuranceSetfocus(){
	
} */
/*void CHMSSetPrivorityPatient::OnInsuranceKillfocus(){
	
} */
int CHMSSetPrivorityPatient::OnInsuranceCheckValue(){
	return 0;
} 
/*void CHMSSetPrivorityPatient::OnAdmitdateChange(){
	
} */
/*void CHMSSetPrivorityPatient::OnAdmitdateSetfocus(){
	
} */
/*void CHMSSetPrivorityPatient::OnAdmitdateKillfocus(){
	
} */
int CHMSSetPrivorityPatient::OnAdmitdateCheckValue(){
	return 0;
} 
/*void CHMSSetPrivorityPatient::OnAddressChange(){
	
} */
/*void CHMSSetPrivorityPatient::OnAddressSetfocus(){
	
} */
/*void CHMSSetPrivorityPatient::OnAddressKillfocus(){
	
} */
int CHMSSetPrivorityPatient::OnAddressCheckValue(){
	return 0;
} 
void CHMSSetPrivorityPatient::OnApplySelect()
{
	//Đoạn này nếu có thời gian thì sửa lại theo treattime, update vào hms_clinical_record không chính xác được//
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int n = 0;
	UpdateData(true);
	if(!m_bPriority)
	{
		if(ShowMessageBox(_T("H\x1EE7y m\x1EE9\x63 \x1B0u ti\xEAn kh\xF4ng ph\x1EA3i \x111\xF3ng t\x1EA1m \x1EE9ng \x63ho \x62\x1EC7nh nh\xE2n(Y/N)"), MB_YESNO)== IDNO)
			return;
	}
	else
	{
		if(ShowMessageBox(_T("\x43huy\x1EC3n m\x1EE9\x63 \x1B0u ti\xEAn kh\xF4ng ph\x1EA3i \x111\xF3ng t\x1EA1m \x1EE9ng \x63ho \x62\x1EC7nh nh\xE2n(Y/N)"), MB_YESNO)== IDNO)
			return;
	}
	szSQL.Format(_T("select count(*) from hms_clinical_record WHERE hcr_docno=%ld"), m_nDocno);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	pMF->BeginTransaction();
	if (rs.GetIntValue() > 0)
		{
		szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_priority=%d, HCR_SETPRIORITYBY ='%s' WHERE hcr_docno=%ld"), m_bPriority, pMF->GetCurrentUser(), m_nDocno);
		}
	else
		{
	szSQL.Format(_T("UPDATE hms_doc SET HD_PRIORITY=%d, HD_SETPRIORITYBY ='%s' WHERE hd_docno=%ld "), m_bPriority, pMF->GetCurrentUser(), m_nDocno);
		}
	pMF->ExecSQL(szSQL);
	pMF->Commit();

	szSQL.Format(_T("select HD_PRIORITY from hms_doc WHERE hd_docno=%ld"), m_nDocno);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HD_PRIORITY"), n);
	if (n > 0)
	{
	szSQL.Format(_T("HMS_UPDATE_C11_P58(%ld)"), m_nDocno);
	pMF->ExecDML(szSQL);
	}
	//_msg(_T("%s"), szSQL);

} 
void CHMSSetPrivorityPatient::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
/*void CHMSSetPrivorityPatient::OnDepositAmountChange(){
	
} */
/*void CHMSSetPrivorityPatient::OnDepositAmountSetfocus(){
	
} */
/*void CHMSSetPrivorityPatient::OnDepositAmountKillfocus(){
	
} */
int CHMSSetPrivorityPatient::OnDepositAmountCheckValue(){
	return 0;
} 
/*void CHMSSetPrivorityPatient::OnTotalPatpaidChange(){
	
} */
/*void CHMSSetPrivorityPatient::OnTotalPatpaidSetfocus(){
	
} */
/*void CHMSSetPrivorityPatient::OnTotalPatpaidKillfocus(){
	
} */
int CHMSSetPrivorityPatient::OnTotalPatpaidCheckValue(){
	return 0;
} 
	void CHMSSetPrivorityPatient::OnPrioritySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSSetPrivorityPatient::OnAddHMSSetPrivorityPatient(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSetPrivorityPatient::OnEditHMSSetPrivorityPatient(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSetPrivorityPatient::OnDeleteHMSSetPrivorityPatient(){
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
 		OnCancelHMSSetPrivorityPatient();
 	}
	return 0;
}
int CHMSSetPrivorityPatient::OnSaveHMSSetPrivorityPatient(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_foodtravelsupportTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_foodtravelsupportTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSSetPrivorityPatientListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSetPrivorityPatient::OnCancelHMSSetPrivorityPatient(){
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
int CHMSSetPrivorityPatient::OnHMSSetPrivorityPatientListLoadData(){
	return 0;
}
