#include "HMSPermissionDialog.h"
#include "MainFrm.h"
#include "HMSSelectionListDialog.h"

static void _OnReceptionManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnReceptionManagementModuleSelect();
}
static void _OnHospitalFeeManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnHospitalFeeManagementModuleSelect();
}
static void _OnExaminationManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnExaminationManagementModuleSelect();
}
static void _OnPharmacyManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnPharmacyManagementModuleSelect();
}
static void _OnTreatmentManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnTreatmentManagementModuleSelect();
}
static void _OnPatientRecordManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnPatientRecordManagementModuleSelect();
}
static void _OnLabManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnLabManagementModuleSelect();
}
static void _OnFixedAssetModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnFixedAssetModuleSelect();
}
static void _OnPACSManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnPACSManagementModuleSelect();
}
static void _OnHumanResourceModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnHumanResourceModuleSelect();
}
static void _OnEndoscopyManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnEndoscopyManagementModuleSelect();
}
static void _OnClinicalRecordManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnClinicalRecordManagementModuleSelect();
}
static void _OnSurgeryManagementModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnSurgeryManagementModuleSelect();
}
static void _OnSystemSetupModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnSystemSetupModuleSelect();
}
static void _OnAdmissionRegistrationModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnAdmissionRegistrationModuleSelect();
}
static void _OnVisitPatientModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnVisitPatientModuleSelect();
}

/*static void _OnExaminationDeptChangeFnc(CWnd *pWnd){
	((CHMSPermissionDialog *)pWnd)->OnExaminationDeptChange();
} */
/*static void _OnExaminationDeptSetfocusFnc(CWnd *pWnd){
	((CHMSPermissionDialog *)pWnd)->OnExaminationDeptSetfocus();} */ 
/*static void _OnExaminationDeptKillfocusFnc(CWnd *pWnd){
	((CHMSPermissionDialog *)pWnd)->OnExaminationDeptKillfocus();
} */
static int _OnExaminationDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSPermissionDialog *)pWnd)->OnExaminationDeptCheckValue();
} 
/*static void _OnExaminationRoomChangeFnc(CWnd *pWnd){
	((CHMSPermissionDialog *)pWnd)->OnExaminationRoomChange();
} */
/*static void _OnExaminationRoomSetfocusFnc(CWnd *pWnd){
	((CHMSPermissionDialog *)pWnd)->OnExaminationRoomSetfocus();} */ 
/*static void _OnExaminationRoomKillfocusFnc(CWnd *pWnd){
	((CHMSPermissionDialog *)pWnd)->OnExaminationRoomKillfocus();
} */
static int _OnExaminationRoomCheckValueFnc(CWnd *pWnd){
	return ((CHMSPermissionDialog *)pWnd)->OnExaminationRoomCheckValue();
} 
static void _OnRoomSelectSelectFnc(CWnd *pWnd){
	CHMSPermissionDialog *pVw = (CHMSPermissionDialog *)pWnd;
	pVw->OnRoomSelectSelect();
} 
/*static void _OnObjectsChangeFnc(CWnd *pWnd){
	((CHMSPermissionDialog *)pWnd)->OnObjectsChange();
} */
/*static void _OnObjectsSetfocusFnc(CWnd *pWnd){
	((CHMSPermissionDialog *)pWnd)->OnObjectsSetfocus();} */ 
/*static void _OnObjectsKillfocusFnc(CWnd *pWnd){
	((CHMSPermissionDialog *)pWnd)->OnObjectsKillfocus();
} */
static void _OnFixedAssetManagerModuleSelectFnc(CWnd *pWnd){
	 ((CHMSPermissionDialog*)pWnd)->OnFixedAssetManagerModuleSelect();
}
static int _OnObjectsCheckValueFnc(CWnd *pWnd){
	return ((CHMSPermissionDialog *)pWnd)->OnObjectsCheckValue();
} 
static void _OnObjectSelectSelectFnc(CWnd *pWnd){
	CHMSPermissionDialog *pVw = (CHMSPermissionDialog *)pWnd;
	pVw->OnObjectSelectSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPermissionDialog *pVw = (CHMSPermissionDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPermissionDialog *pVw = (CHMSPermissionDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPermissionDialogFnc(CWnd *pWnd){
	 return ((CHMSPermissionDialog*)pWnd)->OnAddHMSPermissionDialog();
} 
static int _OnEditHMSPermissionDialogFnc(CWnd *pWnd){
	 return ((CHMSPermissionDialog*)pWnd)->OnEditHMSPermissionDialog();
} 
static int _OnDeleteHMSPermissionDialogFnc(CWnd *pWnd){
	 return ((CHMSPermissionDialog*)pWnd)->OnDeleteHMSPermissionDialog();
} 
static int _OnSaveHMSPermissionDialogFnc(CWnd *pWnd){
	 return ((CHMSPermissionDialog*)pWnd)->OnSaveHMSPermissionDialog();
} 
static int _OnCancelHMSPermissionDialogFnc(CWnd *pWnd){
	 return ((CHMSPermissionDialog*)pWnd)->OnCancelHMSPermissionDialog();
} 
CHMSPermissionDialog::CHMSPermissionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 555;
	m_nDlgHeight = 395;
	SetDefaultValues();
}
CHMSPermissionDialog::~CHMSPermissionDialog(){
}
void CHMSPermissionDialog::OnCreateComponents()
{
	/*m_wndPermissionInformation.Create(this, _T("Permission Information"), 5, 5, 545, 480);
	m_wndReceptionManagementModule.Create(this, _T("Reception Management Module"), 10, 30, 260, 55);
	m_wndHospitalFeeManagementModule.Create(this, _T("Hospital Fee Management Module"), 265, 30, 530, 55);
	m_wndExaminationManagementModule.Create(this, _T("Examination Management Module"), 10, 60, 260, 85);
	m_wndPharmacyManagementModule.Create(this, _T("Pharmacy Management Module"), 265, 60, 530, 85);
	m_wndTreatmentManagementModule.Create(this, _T("Treatment Management Module"), 10, 90, 260, 115);
	m_wndPatientRecordManagementModule.Create(this, _T("Patient Record Management Module"), 265, 90, 530, 115);
	m_wndLabManagementModule.Create(this, _T("Lab Management Module"), 10, 120, 260, 145);
	m_wndFixedAssetModule.Create(this, _T("Fixed Asset Module"), 265, 120, 530, 145);
	m_wndPACSManagementModule.Create(this, _T("PACS Management Module"), 10, 150, 260, 175);
	m_wndHumanResourceModule.Create(this, _T("Human Resource Module"), 265, 150, 530, 175);
	m_wndEndoscopyManagementModule.Create(this, _T("Endoscopy Management Module"), 10, 180, 260, 205);
	m_wndClinicalRecordManagementModule.Create(this, _T("Clinical Record Management Module"), 265, 180, 530, 205);
	m_wndSurgeryManagementModule.Create(this, _T("Surgery Management Module"), 10, 210, 260, 235);
	m_wndSystemSetupModule.Create(this, _T("System Setup Module"), 265, 210, 530, 235);
	m_wndAdmissionRegistrationModule.Create(this, _T("Admission Registration Module"), 10, 240, 260, 265);
	m_wndMaterialManagementModule.Create(this, _T("Material Management Module"), 265, 240, 530, 265);
	m_wndBloodBankModule.Create(this, _T("Blood Bank Module"), 10, 270, 260, 295);
	m_wndFixedAssetManagerModule.Create(this, _T("Fixed Asset Manager Module"), 265, 270, 530, 295);
	m_wndShowIpModule.Create(this, _T("Show IP Module"), 10, 300, 260, 325);
	m_wndSystemTrackerModule.Create(this, _T("System Tracker Module"), 265, 300, 530, 325);
	m_wndScienceResearchModule.Create(this, _T("Science Research Module"), 10, 330, 260, 355);
	m_wndMRAModule.Create(this, _T("MRA Module"), 265, 330, 530, 355);
	m_wndSurgeryManagementModuleII.Create(this, _T("Surgery Management Module II"), 10, 360, 260, 385);
	m_wndSurgeryReqMangr.Create(this, _T("Surgery Req Mangr"), 265, 360, 530, 385);
	m_wndExaminationDeptLabel.Create(this, _T("Examination Dept"), 10, 390, 140, 415);
	m_wndExaminationDept.Create(this,145, 390, 330, 415); 
	m_wndExaminationRoomLabel.Create(this, _T("Examination Room"), 10, 420, 140, 445);
	m_wndExaminationRoom.Create(this,145, 420, 510, 445); 
	m_wndRoomSelect.Create(this, _T("@"), 515, 420, 540, 445);
	m_wndObjectsLabel.Create(this, _T("Objects"), 10, 450, 140, 475);
	m_wndObjects.Create(this,145, 450, 510, 475); 
	m_wndObjectSelect.Create(this, _T("@"), 515, 450, 540, 475);
	m_wndApply.Create(this, _T("&Apply"), 390, 485, 465, 510);
	m_wndClose.Create(this, _T("&Close"), 470, 485, 545, 510);*/
	m_wndPermissionInformation.Create(this, _T("Permission Information"), 5, 5, 545, 541);
	m_wndReceptionManagementModule.Create(this, _T("Reception Management Module"), 10, 30, 260, 55);
	m_wndHospitalFeeManagementModule.Create(this, _T("Hospital Fee Management Module"), 265, 30, 530, 55);
	m_wndExaminationManagementModule.Create(this, _T("Examination Management Module"), 10, 60, 260, 85);
	m_wndPharmacyManagementModule.Create(this, _T("Pharmacy Management Module"), 265, 60, 530, 85);
	m_wndTreatmentManagementModule.Create(this, _T("Treatment Management Module"), 10, 90, 260, 115);
	m_wndPatientRecordManagementModule.Create(this, _T("Patient Record Management Module"), 265, 90, 530, 115);
	m_wndLabManagementModule.Create(this, _T("Lab Management Module"), 10, 120, 260, 145);
	m_wndFixedAssetModule.Create(this, _T("Fixed Asset Module"), 265, 120, 530, 145);
	m_wndPACSManagementModule.Create(this, _T("PACS Management Module"), 10, 150, 260, 175);
	m_wndHumanResourceModule.Create(this, _T("Human Resource Module"), 265, 150, 530, 175);
	m_wndEndoscopyManagementModule.Create(this, _T("Endoscopy Management Module"), 10, 180, 260, 205);
	m_wndClinicalRecordManagementModule.Create(this, _T("Clinical Record Management Module"), 265, 180, 530, 205);
	m_wndSurgeryManagementModule.Create(this, _T("Surgery Management Module"), 10, 210, 260, 235);
	m_wndSystemSetupModule.Create(this, _T("System Setup Module"), 265, 210, 530, 235);
	m_wndAdmissionRegistrationModule.Create(this, _T("Admission Registration Module"), 10, 240, 260, 265);
	m_wndMaterialManagementModule.Create(this, _T("Material Management Module"), 265, 240, 530, 265);
	m_wndBloodBankModule.Create(this, _T("Blood Bank Module"), 10, 270, 260, 295);
	m_wndFixedAssetManagerModule.Create(this, _T("Fixed Asset Manager Module"), 265, 270, 530, 295);
	m_wndShowIpModule.Create(this, _T("Show IP Module"), 10, 300, 260, 325);
	m_wndSystemTrackerModule.Create(this, _T("System Tracker Module"), 265, 300, 530, 325);
	m_wndScienceResearchModule.Create(this, _T("Science Research Module"), 10, 330, 260, 355);
	m_wndMRAModule.Create(this, _T("MRA Module"), 265, 330, 530, 355);
	m_wndSurgeryManagementModuleII.Create(this, _T("Surgery Management Module II"), 10, 360, 260, 385);
	m_wndSurgeryReqMangr.Create(this, _T("Surgery Req Mangr"), 265, 360, 530, 385);
	m_wndExaminationDeptLabel.Create(this, _T("Examination Dept"), 10, 421, 140, 446);
	m_wndExaminationDept.Create(this,145, 421, 330, 446); 
	m_wndExaminationRoomLabel.Create(this, _T("Examination Room"), 10, 451, 140, 476);
	m_wndExaminationRoom.Create(this,145, 451, 510, 476); 
	m_wndRoomSelect.Create(this, _T("@"), 515, 451, 540, 476);
	m_wndObjectsLabel.Create(this, _T("Objects"), 10, 481, 140, 506);
	m_wndObjects.Create(this,145, 481, 510, 506); 
	m_wndObjectSelect.Create(this, _T("@"), 515, 481, 540, 506);
	m_wndApply.Create(this, _T("&Apply"), 390, 516, 465, 541);
	m_wndClose.Create(this, _T("&Close"), 470, 516, 545, 541);
	m_wndVisitPatientModule.Create(this, _T("Visit Patient Module"), 10, 390, 260, 415);
	
}
void CHMSPermissionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndExaminationDept.SetLimitText(7);
	m_wndExaminationDept.SetCheckValue(true);
	m_wndExaminationRoom.SetLimitText(35);
	m_wndObjects.SetLimitText(35);
	m_wndExaminationRoom.SetReadOnly(true);
	m_wndObjects.SetReadOnly(true);
	m_sys_userTbl.SetTableName(_T("sys_user"));
	m_sys_userTbl.AddField(_T("su_userid"), dfText, 15);
	//m_sys_userTbl.AddField(_T("su_groupid"), dfText, 1);
	//m_sys_userTbl.AddField(_T("su_name"), dfText, 65);
	//m_sys_userTbl.AddField(_T("su_password"), dfText, 254);
	//m_sys_userTbl.AddField(_T("su_deptid"), dfText, 7);
	//m_sys_userTbl.AddField(_T("su_roomid"), dfLong);
	m_sys_userTbl.AddField(_T("su_hms_xdept"), dfText, 7);
	m_sys_userTbl.AddField(_T("su_hms_xroom"), dfText, 35);
	m_sys_userTbl.AddField(_T("su_hms_xobject"), dfText, 35);
	m_sys_userTbl.AddField(_T("su_hms_rmmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_emmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_tmmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_usmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_pamodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_prmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_esmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_hfmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_pmmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_opmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_crmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_sysmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_erp_famodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_erp_hrmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_erp_apmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_erp_armodule"), dfText, 1); 
	m_sys_userTbl.AddField(_T("su_erp_glmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_erp_pomodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_erp_somodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_erp_simodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_erp_bilmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_labmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_smmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_armodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_mamodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_bbmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_fammodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_sipmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_stmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_srmmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_mramodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_sm2module"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_srmodule"), dfText, 1);
	m_sys_userTbl.AddField(_T("su_hms_vpmmodule"), dfText, 1);
}

void CHMSPermissionDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReceptionManagementModule.SetEvent(WE_CLICK, _OnReceptionManagementModuleSelectFnc);
	m_wndHospitalFeeManagementModule.SetEvent(WE_CLICK, _OnHospitalFeeManagementModuleSelectFnc);
	m_wndExaminationManagementModule.SetEvent(WE_CLICK, _OnExaminationManagementModuleSelectFnc);
	m_wndPharmacyManagementModule.SetEvent(WE_CLICK, _OnPharmacyManagementModuleSelectFnc);
	m_wndTreatmentManagementModule.SetEvent(WE_CLICK, _OnTreatmentManagementModuleSelectFnc);
	m_wndPatientRecordManagementModule.SetEvent(WE_CLICK, _OnPatientRecordManagementModuleSelectFnc);
	m_wndLabManagementModule.SetEvent(WE_CLICK, _OnLabManagementModuleSelectFnc);
	m_wndFixedAssetModule.SetEvent(WE_CLICK, _OnFixedAssetModuleSelectFnc);
	m_wndPACSManagementModule.SetEvent(WE_CLICK, _OnPACSManagementModuleSelectFnc);
	m_wndHumanResourceModule.SetEvent(WE_CLICK, _OnHumanResourceModuleSelectFnc);
	m_wndEndoscopyManagementModule.SetEvent(WE_CLICK, _OnEndoscopyManagementModuleSelectFnc);
	m_wndClinicalRecordManagementModule.SetEvent(WE_CLICK, _OnClinicalRecordManagementModuleSelectFnc);
	m_wndSurgeryManagementModule.SetEvent(WE_CLICK, _OnSurgeryManagementModuleSelectFnc);
	m_wndSystemSetupModule.SetEvent(WE_CLICK, _OnSystemSetupModuleSelectFnc);
	m_wndAdmissionRegistrationModule.SetEvent(WE_CLICK, _OnAdmissionRegistrationModuleSelectFnc);
	m_wndVisitPatientModule.SetEvent(WE_CLICK, _OnVisitPatientModuleSelectFnc);
	//m_wndExaminationDept.SetEvent(WE_CHANGE, _OnExaminationDeptChangeFnc);
	//m_wndExaminationDept.SetEvent(WE_SETFOCUS, _OnExaminationDeptSetfocusFnc);
	//m_wndExaminationDept.SetEvent(WE_KILLFOCUS, _OnExaminationDeptKillfocusFnc);
	m_wndExaminationDept.SetEvent(WE_CHECKVALUE, _OnExaminationDeptCheckValueFnc);
	//m_wndExaminationRoom.SetEvent(WE_CHANGE, _OnExaminationRoomChangeFnc);
	//m_wndExaminationRoom.SetEvent(WE_SETFOCUS, _OnExaminationRoomSetfocusFnc);
	//m_wndExaminationRoom.SetEvent(WE_KILLFOCUS, _OnExaminationRoomKillfocusFnc);
	m_wndExaminationRoom.SetEvent(WE_CHECKVALUE, _OnExaminationRoomCheckValueFnc);
	m_wndFixedAssetManagerModule.SetEvent(WE_CLICK, _OnFixedAssetManagerModuleSelectFnc);
	m_wndRoomSelect.SetEvent(WE_CLICK, _OnRoomSelectSelectFnc);
	//m_wndObjects.SetEvent(WE_CHANGE, _OnObjectsChangeFnc);
	//m_wndObjects.SetEvent(WE_SETFOCUS, _OnObjectsSetfocusFnc);
	//m_wndObjects.SetEvent(WE_KILLFOCUS, _OnObjectsKillfocusFnc);
	m_wndObjects.SetEvent(WE_CHECKVALUE, _OnObjectsCheckValueFnc);
	m_wndObjectSelect.SetEvent(WE_CLICK, _OnObjectSelectSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();

}
void CHMSPermissionDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Check(pDX, m_wndReceptionManagementModule.GetDlgCtrlID(), m_bReceptionManagementModule);
	DDX_Check(pDX, m_wndHospitalFeeManagementModule.GetDlgCtrlID(), m_bHospitalFeeManagementModule);
	DDX_Check(pDX, m_wndExaminationManagementModule.GetDlgCtrlID(), m_bExaminationManagementModule);
	DDX_Check(pDX, m_wndPharmacyManagementModule.GetDlgCtrlID(), m_bPharmacyManagementModule);
	DDX_Check(pDX, m_wndTreatmentManagementModule.GetDlgCtrlID(), m_bTreatmentManagementModule);
	DDX_Check(pDX, m_wndPatientRecordManagementModule.GetDlgCtrlID(), m_bPatientRecordManagementModule);
	DDX_Check(pDX, m_wndLabManagementModule.GetDlgCtrlID(), m_bLabManagementModule);
	DDX_Check(pDX, m_wndFixedAssetModule.GetDlgCtrlID(), m_bFixedAssetModule);
	DDX_Check(pDX, m_wndPACSManagementModule.GetDlgCtrlID(), m_bPACSManagementModule);
	DDX_Check(pDX, m_wndHumanResourceModule.GetDlgCtrlID(), m_bHumanResourceModule);
	DDX_Check(pDX, m_wndEndoscopyManagementModule.GetDlgCtrlID(), m_bEndoscopyManagementModule);
	DDX_Check(pDX, m_wndClinicalRecordManagementModule.GetDlgCtrlID(), m_bClinicalRecordManagementModule);
	DDX_Check(pDX, m_wndSurgeryManagementModule.GetDlgCtrlID(), m_bSurgeryManagementModule);
	DDX_Check(pDX, m_wndSystemSetupModule.GetDlgCtrlID(), m_bSystemSetupModule);
	DDX_Check(pDX, m_wndAdmissionRegistrationModule.GetDlgCtrlID(), m_bAdmissionRegistrationModule);
	DDX_Check(pDX, m_wndMaterialManagementModule.GetDlgCtrlID(), m_bMaterialManagementModule);
	DDX_Check(pDX, m_wndBloodBankModule.GetDlgCtrlID(), m_bBloodBankModule);
	DDX_Check(pDX, m_wndFixedAssetManagerModule.GetDlgCtrlID(), m_bFixedAssetManagerModule);
	DDX_Check(pDX, m_wndShowIpModule.GetDlgCtrlID(), m_bShowIpModule);
	DDX_Check(pDX, m_wndSystemTrackerModule.GetDlgCtrlID(), m_bSystemTrackerModule);
	DDX_Check(pDX, m_wndScienceResearchModule.GetDlgCtrlID(), m_bScienceResearchModule);
	DDX_Check(pDX, m_wndMRAModule.GetDlgCtrlID(), m_bMRAModule);
	DDX_Text(pDX, m_wndExaminationDept.GetDlgCtrlID(), m_szExaminationDept);
	DDX_Text(pDX, m_wndExaminationRoom.GetDlgCtrlID(), m_szExaminationRoom);
	DDX_Text(pDX, m_wndObjects.GetDlgCtrlID(), m_szObjects);
	DDX_Check(pDX, m_wndSurgeryManagementModuleII.GetDlgCtrlID(), m_bSurgeryManagementModuleII);
	DDX_Check(pDX, m_wndSurgeryReqMangr.GetDlgCtrlID(), m_bSurgeryReqMangr);
	DDX_Check(pDX, m_wndVisitPatientModule.GetDlgCtrlID(), m_bVisitPatientModule);

}
void CHMSPermissionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_user WHERE lower(su_userid) = lower('%s') "), m_szUserID);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("su_hms_xdept"), m_szExaminationDept);
		rs.GetValue(_T("su_hms_xroom"), m_szExaminationRoom);
		rs.GetValue(_T("su_hms_xobject"), m_szObjects);
		rs.GetValue(_T("su_hms_rmmodule"), m_bReceptionManagementModule);
		rs.GetValue(_T("su_hms_emmodule"), m_bExaminationManagementModule);
		rs.GetValue(_T("su_hms_tmmodule"), m_bTreatmentManagementModule);
		rs.GetValue(_T("su_hms_labmodule"), m_bLabManagementModule);
		rs.GetValue(_T("su_hms_pamodule"), m_bPACSManagementModule);
		rs.GetValue(_T("su_hms_esmodule"), m_bEndoscopyManagementModule);
		rs.GetValue(_T("su_hms_smmodule"), m_bSurgeryManagementModule);
		rs.GetValue(_T("su_hms_hfmodule"), m_bHospitalFeeManagementModule);
		rs.GetValue(_T("su_hms_pmmodule"), m_bPharmacyManagementModule);
		rs.GetValue(_T("su_hms_prmodule"), m_bPatientRecordManagementModule);
		rs.GetValue(_T("su_hms_labmodule"), m_bClinicalRecordManagementModule);
		rs.GetValue(_T("su_hms_sysmodule"), m_bSystemSetupModule);
		rs.GetValue(_T("su_erp_famodule"), m_bFixedAssetModule);
		rs.GetValue(_T("su_erp_hrmodule"), m_bHumanResourceModule);
		rs.GetValue(_T("su_hms_armodule"), m_bAdmissionRegistrationModule);
		rs.GetValue(_T("su_hms_mamodule"), m_bMaterialManagementModule);
		rs.GetValue(_T("su_hms_bbmodule"), m_bBloodBankModule);
		rs.GetValue(_T("su_hms_fammodule"), m_bFixedAssetManagerModule);
		rs.GetValue(_T("su_hms_sipmodule"), m_bShowIpModule);
		rs.GetValue(_T("su_hms_stmodule"), m_bSystemTrackerModule);
		rs.GetValue(_T("su_hms_srmmodule"), m_bScienceResearchModule);
		rs.GetValue(_T("su_hms_mramodule"), m_bMRAModule);
		rs.GetValue(_T("su_hms_sm2module"), m_bSurgeryManagementModuleII);
		rs.GetValue(_T("su_hms_srmodule"), m_bSurgeryReqMangr);
		rs.GetValue(_T("su_hms_vpmmodule"), m_bVisitPatientModule);
	}
	SetMode(VM_EDIT);
}

void CHMSPermissionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_sys_userTbl.SetValue(_T("su_userid"), m_szUserID);
	m_sys_userTbl.SetValue(_T("su_hms_xdept"), m_szExaminationDept);
	m_sys_userTbl.SetValue(_T("su_hms_xroom"), m_szExaminationRoom);
	m_sys_userTbl.SetValue(_T("su_hms_xobject"), m_szObjects);
	m_sys_userTbl.SetValue(_T("su_hms_rmmodule"), m_bReceptionManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_emmodule"), m_bExaminationManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_tmmodule"), m_bTreatmentManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_labmodule"), m_bLabManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_pamodule"), m_bPACSManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_esmodule"), m_bEndoscopyManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_smmodule"), m_bSurgeryManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_hfmodule"), m_bHospitalFeeManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_pmmodule"), m_bPharmacyManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_prmodule"), m_bPatientRecordManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_labmodule"), m_bClinicalRecordManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_sysmodule"), m_bSystemSetupModule);
	m_sys_userTbl.SetValue(_T("su_erp_famodule"), m_bFixedAssetModule);
	m_sys_userTbl.SetValue(_T("su_erp_hrmodule"), m_bHumanResourceModule);
	m_sys_userTbl.SetValue(_T("su_hms_armodule"), m_bAdmissionRegistrationModule);
	m_sys_userTbl.SetValue(_T("su_hms_mamodule"), m_bMaterialManagementModule);
	m_sys_userTbl.SetValue(_T("su_hms_bbmodule"), m_bBloodBankModule);
	m_sys_userTbl.SetValue(_T("su_hms_fammodule"), m_bFixedAssetManagerModule);
	m_sys_userTbl.SetValue(_T("su_hms_sipmodule"), m_bShowIpModule);
	m_sys_userTbl.SetValue(_T("su_hms_stmodule"), m_bSystemTrackerModule);
	m_sys_userTbl.SetValue(_T("su_hms_srmmodule"), m_bScienceResearchModule);
	m_sys_userTbl.SetValue(_T("su_hms_mramodule"), m_bMRAModule);
	m_sys_userTbl.SetValue(_T("su_hms_sm2module"), m_bSurgeryManagementModuleII);
	m_sys_userTbl.SetValue(_T("su_hms_srmodule"), m_bSurgeryReqMangr);
	m_sys_userTbl.SetValue(_T("su_hms_vpmmodule"), m_bVisitPatientModule);
}

void CHMSPermissionDialog::SetDefaultValues(){

	m_bReceptionManagementModule=FALSE;
	m_bExaminationManagementModule=FALSE;
	m_bTreatmentManagementModule=FALSE;
	m_bLabManagementModule=FALSE;
	m_bPACSManagementModule=FALSE;
	m_bEndoscopyManagementModule=FALSE;
	m_bSurgeryManagementModule=FALSE;
	m_bHospitalFeeManagementModule=FALSE;
	m_bPharmacyManagementModule=FALSE;
	m_bPatientRecordManagementModule=FALSE;
	m_bFixedAssetModule=FALSE;
	m_bHumanResourceModule=FALSE;
	m_bClinicalRecordManagementModule=FALSE;
	m_bSystemSetupModule=FALSE;
	m_bMaterialManagementModule = FALSE;
	m_bFixedAssetManagerModule=FALSE;
	m_bShowIpModule = FALSE;
	m_bSystemTrackerModule = FALSE;
	m_bScienceResearchModule = FALSE;
	m_bMRAModule = FALSE;
	m_bSurgeryManagementModuleII=FALSE;
	m_bSurgeryReqMangr=FALSE;
	m_bVisitPatientModule=FALSE;
	m_szExaminationDept.Empty();
	m_szExaminationRoom.Empty();
	m_szObjects.Empty();

}

int CHMSPermissionDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
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

void CHMSPermissionDialog::OnReceptionManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnHospitalFeeManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnExaminationManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnPharmacyManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnTreatmentManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnPatientRecordManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnLabManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnFixedAssetModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnPACSManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnHumanResourceModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnEndoscopyManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnClinicalRecordManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnSurgeryManagementModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnSystemSetupModuleSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

	void CHMSPermissionDialog::OnAdmissionRegistrationModuleSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSPermissionDialog::OnFixedAssetManagerModuleSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void CHMSPermissionDialog::OnVisitPatientModuleSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPermissionDialog::OnExaminationDeptChange(){
	
} */
/*void CHMSPermissionDialog::OnExaminationDeptSetfocus(){
	
} */
/*void CHMSPermissionDialog::OnExaminationDeptKillfocus(){
	
} */
int CHMSPermissionDialog::OnExaminationDeptCheckValue(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	if(m_szExaminationDept == _T("ALL"))
		return 0;
	szSQL.Format(_T("SELECT count(*) FROM sys_dept WHERE sd_id='%s' "), m_szExaminationDept);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0)
		return -1;
	return 0;
}
 
/*void CHMSPermissionDialog::OnExaminationRoomChange(){
	
} */
/*void CHMSPermissionDialog::OnExaminationRoomSetfocus(){
	
} */
/*void CHMSPermissionDialog::OnExaminationRoomKillfocus(){
	
} */
int CHMSPermissionDialog::OnExaminationRoomCheckValue(){
	return 0;
}
 
void CHMSPermissionDialog::OnRoomSelectSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE hrl_deptid='%s' ORDER BY id "), m_szExaminationDept);
    CHMSSelectionListDialog dlg(this);
	dlg.m_szSQL = szSQL;
	if(dlg.DoModal() == IDOK)
	{
		m_szExaminationRoom.Empty();
		for (int i = 0; i < dlg.m_arraySelection.GetCount(); i++)
		{
			CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[i];
			if(!m_szExaminationRoom.IsEmpty())
				m_szExaminationRoom += _T(",");
			m_szExaminationRoom.AppendFormat(_T("%s"), si.szID);
		}
		//MessageBox(_T("OK"));
		UpdateData(false);
	}
	
	
}
 
/*void CHMSPermissionDialog::OnObjectsChange(){
	
} */
/*void CHMSPermissionDialog::OnObjectsSetfocus(){
	
} */
/*void CHMSPermissionDialog::OnObjectsKillfocus(){
	
} */
int CHMSPermissionDialog::OnObjectsCheckValue(){
	return 0;
}
 
void CHMSPermissionDialog::OnObjectSelectSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object ORDER BY id "));
    CHMSSelectionListDialog dlg(this);
	dlg.m_szSQL = szSQL;
	if(dlg.DoModal() == IDOK){
		m_szObjects.Empty();
		for (int i =0; i < dlg.m_arraySelection.GetCount(); i++){
			CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[i];
			if(!m_szObjects.IsEmpty())
				m_szObjects += _T(",");
			m_szObjects.AppendFormat(_T("'%s'"), si.szID);
		}
		UpdateData(false);
	}

	
}
 
void CHMSPermissionDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveHMSPermissionDialog();
	
}
 
void CHMSPermissionDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancel();
}
 
int CHMSPermissionDialog::OnAddHMSPermissionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CHMSPermissionDialog::OnEditHMSPermissionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CHMSPermissionDialog::OnDeleteHMSPermissionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSPermissionDialog(); 
 	}
	return 0;
}

int CHMSPermissionDialog::OnSaveHMSPermissionDialog(){
 	if(GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	CString szWhere; 
	szWhere.Format(_T(" WHERE lower(su_userid)=lower('%s') "), m_szUserID); 
	szSQL = m_sys_userTbl.GetUpdateSQL(_T(" su_userid, su_groupid, su_name, su_password, su_deptid, su_roomid")); 
	szSQL += szWhere; 
	//_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret;  	
}

int CHMSPermissionDialog::OnCancelHMSPermissionDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
}
 
int CHMSPermissionDialog::OnHMSPermissionDialogListLoadData(){
	return 0;
}

