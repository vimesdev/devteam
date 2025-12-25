#include "HMSRegisterTakeCarePackageDialog.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnYobCheckValue();
} 
/*static void _OnGenderChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnGenderChange();
} */
/*static void _OnGenderSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnGenderSetfocus();} */ 
/*static void _OnGenderKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnGenderKillfocus();
} */
static int _OnGenderCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnGenderCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnAddressCheckValue();
} 
static void _OnShiftSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnShiftSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnShiftSelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnShiftSelendok();
}
/*static void _OnShiftSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnShiftKillfocus();
}*/
/*static void _OnShiftKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnShiftKillfocus();
}*/
static long _OnShiftLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnShiftLoadData();
}
/*static void _OnShiftAddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnShiftAddNew();
}*/
/*static void _OnBeginTimeChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnBeginTimeChange();
} */
/*static void _OnBeginTimeSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnBeginTimeSetfocus();} */ 
/*static void _OnBeginTimeKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnBeginTimeKillfocus();
} */
static int _OnBeginTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnBeginTimeCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEndDateCheckValue();
} 
static void _OnUser1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnUser1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser1SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser1Selendok();
}
/*static void _OnUser1SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser1Killfocus();
}*/
/*static void _OnUser1KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser1Killfocus();
}*/
static long _OnUser1LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser1LoadData();
}
/*static void _OnUser1AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser1AddNew();
}*/
static void _OnEvaluate1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnEvaluate1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEvaluate1SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate1Selendok();
}
/*static void _OnEvaluate1SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate1Killfocus();
}*/
/*static void _OnEvaluate1KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate1Killfocus();
}*/
static long _OnEvaluate1LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate1LoadData();
}
/*static void _OnEvaluate1AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate1AddNew();
}*/
static void _OnUser2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnUser2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser2SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser2Selendok();
}
/*static void _OnUser2SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser2Killfocus();
}*/
/*static void _OnUser2KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser2Killfocus();
}*/
static long _OnUser2LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser2LoadData();
}
/*static void _OnUser2AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser2AddNew();
}*/
static void _OnEvaluate2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnEvaluate2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEvaluate2SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate2Selendok();
}
/*static void _OnEvaluate2SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate2Killfocus();
}*/
/*static void _OnEvaluate2KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate2Killfocus();
}*/
static long _OnEvaluate2LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate2LoadData();
}
/*static void _OnEvaluate2AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate2AddNew();
}*/
static void _OnUser3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnUser3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser3SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser3Selendok();
}
/*static void _OnUser3SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser3Killfocus();
}*/
/*static void _OnUser3KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser3Killfocus();
}*/
static long _OnUser3LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser3LoadData();
}
/*static void _OnUser3AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser3AddNew();
}*/
static void _OnEvaluate3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnEvaluate3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEvaluate3SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate3Selendok();
}
/*static void _OnEvaluate3SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate3Killfocus();
}*/
/*static void _OnEvaluate3KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate3Killfocus();
}*/
static long _OnEvaluate3LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate3LoadData();
}
/*static void _OnEvaluate3AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate3AddNew();
}*/
static void _OnUser4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnUser4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser4SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser4Selendok();
}
/*static void _OnUser4SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser4Killfocus();
}*/
/*static void _OnUser4KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser4Killfocus();
}*/
static long _OnUser4LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser4LoadData();
}
/*static void _OnUser4AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser4AddNew();
}*/
static void _OnEvaluate4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnEvaluate4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEvaluate4SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate4Selendok();
}
/*static void _OnEvaluate4SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate4Killfocus();
}*/
/*static void _OnEvaluate4KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate4Killfocus();
}*/
static long _OnEvaluate4LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate4LoadData();
}
/*static void _OnEvaluate4AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate4AddNew();
}*/
static void _OnUser5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnUser5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser5SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser5Selendok();
}
/*static void _OnUser5SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser5Killfocus();
}*/
/*static void _OnUser5KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser5Killfocus();
}*/
static long _OnUser5LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser5LoadData();
}
/*static void _OnUser5AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnUser5AddNew();
}*/
static void _OnEvaluate5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCarePackageDialog* )pWnd)->OnEvaluate5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEvaluate5SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate5Selendok();
}
/*static void _OnEvaluate5SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate5Killfocus();
}*/
/*static void _OnEvaluate5KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate5Killfocus();
}*/
static long _OnEvaluate5LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate5LoadData();
}
/*static void _OnEvaluate5AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCarePackageDialog *)pWnd)->OnEvaluate5AddNew();
}*/
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSRegisterTakeCarePackageDialog *pVw = (CHMSRegisterTakeCarePackageDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnTerminateSelectFnc(CWnd *pWnd){
	CHMSRegisterTakeCarePackageDialog *pVw = (CHMSRegisterTakeCarePackageDialog *)pWnd;
	pVw->OnTerminateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSRegisterTakeCarePackageDialog *pVw = (CHMSRegisterTakeCarePackageDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSRegisterTakeCarePackageDialog *pVw = (CHMSRegisterTakeCarePackageDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSRegisterTakeCarePackageDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterTakeCarePackageDialog*)pWnd)->OnAddHMSRegisterTakeCarePackageDialog();
} 
static int _OnEditHMSRegisterTakeCarePackageDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterTakeCarePackageDialog*)pWnd)->OnEditHMSRegisterTakeCarePackageDialog();
} 
static int _OnDeleteHMSRegisterTakeCarePackageDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterTakeCarePackageDialog*)pWnd)->OnDeleteHMSRegisterTakeCarePackageDialog();
} 
static int _OnSaveHMSRegisterTakeCarePackageDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterTakeCarePackageDialog*)pWnd)->OnSaveHMSRegisterTakeCarePackageDialog();
} 
static int _OnCancelHMSRegisterTakeCarePackageDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterTakeCarePackageDialog*)pWnd)->OnCancelHMSRegisterTakeCarePackageDialog();
} 
CHMSRegisterTakeCarePackageDialog::CHMSRegisterTakeCarePackageDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 565;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CHMSRegisterTakeCarePackageDialog::~CHMSRegisterTakeCarePackageDialog(){
}
void CHMSRegisterTakeCarePackageDialog::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 550, 120);
	m_wndPackageInformation.Create(this, _T("Package Information"), 4, 125, 549, 360);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 110, 55);
	m_wndPatientName.Create(this,115, 29, 545, 54); 
	m_wndYobLabel.Create(this, _T("Yob"), 10, 59, 110, 84);
	m_wndYob.Create(this,115, 59, 275, 84); 
	m_wndGenderLabel.Create(this, _T("Gender"), 280, 59, 380, 84);
	m_wndGender.Create(this,385, 59, 545, 84); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 89, 110, 114);
	m_wndAddress.Create(this,115, 89, 545, 114); 
	m_wndShiftLabel.Create(this, _T("Shift"), 11, 149, 111, 174);
	m_wndShift.Create(this,115, 150, 275, 175); 
	m_wndBeginTimeLabel.Create(this, _T("Begin Time"), 10, 180, 110, 205);
	m_wndBeginTime.Create(this,115, 180, 275, 205); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 280, 180, 380, 205);
	m_wndEndDate.Create(this,385, 180, 545, 205); 
	m_wndUser1Label.Create(this, _T("User1"), 10, 210, 110, 235);
	m_wndUser1.Create(this,115, 210, 275, 235); 
	m_wndEvaluate1Label.Create(this, _T("Evaluate1"), 280, 210, 380, 235);
	m_wndEvaluate1.Create(this,385, 210, 545, 235); 
	m_wndUser2Label.Create(this, _T("User2"), 10, 240, 110, 265);
	m_wndUser2.Create(this,115, 240, 275, 265); 
	m_wndEvaluate2Label.Create(this, _T("Evaluate2"), 280, 240, 380, 265);
	m_wndEvaluate2.Create(this,385, 240, 545, 265); 
	m_wndUser3Label.Create(this, _T("User3"), 10, 270, 110, 295);
	m_wndUser3.Create(this,115, 270, 275, 295); 
	m_wndEvaluate3Label.Create(this, _T("Evaluate3"), 280, 270, 380, 295);
	m_wndEvaluate3.Create(this,385, 270, 545, 295); 
	m_wndUser4Label.Create(this, _T("User4"), 10, 300, 110, 325);
	m_wndUser4.Create(this,115, 300, 275, 325); 
	m_wndEvaluate4Label.Create(this, _T("Evaluate4"), 280, 300, 380, 325);
	m_wndEvaluate4.Create(this,385, 300, 545, 325); 
	m_wndUser5Label.Create(this, _T("User5"), 10, 330, 110, 355);
	m_wndUser5.Create(this,115, 330, 275, 355); 
	m_wndEvaluate5Label.Create(this, _T("Evaluate5"), 280, 330, 380, 355);
	m_wndEvaluate5.Create(this,385, 330, 545, 355); 
	m_wndUpdate.Create(this, _T("Update"), 195, 365, 280, 390);
	m_wndTerminate.Create(this, _T("Terminate"), 285, 365, 370, 390);
	m_wndSave.Create(this, _T("&Save"), 375, 365, 460, 390);
	m_wndClose.Create(this, _T("&Close"), 465, 365, 550, 390);

}
void CHMSRegisterTakeCarePackageDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndYob.SetLimitText(1024);
	m_wndYob.SetCheckValue(true);
	m_wndGender.SetLimitText(1024);
	m_wndGender.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndShift.SetCheckValue(true);
	m_wndShift.LimitText(1024);
	m_wndBeginTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndBeginTime.SetCheckValue(true);
	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndUser1.SetCheckValue(true);
	m_wndUser1.LimitText(35);
	m_wndEvaluate1.SetCheckValue(true);
	m_wndEvaluate1.LimitText(35);
	m_wndUser2.SetCheckValue(true);
	m_wndUser2.LimitText(35);
	m_wndEvaluate2.SetCheckValue(true);
	m_wndEvaluate2.LimitText(35);
	m_wndUser3.SetCheckValue(true);
	m_wndUser3.LimitText(35);
	m_wndEvaluate3.SetCheckValue(true);
	m_wndEvaluate3.LimitText(35);
	m_wndUser4.SetCheckValue(true);
	m_wndUser4.LimitText(35);
	m_wndEvaluate4.SetCheckValue(true);
	m_wndEvaluate4.LimitText(35);
	m_wndUser5.SetCheckValue(true);
	m_wndUser5.LimitText(35);
	m_wndEvaluate5.SetCheckValue(true);
	m_wndEvaluate5.LimitText(35);




	m_wndUser1.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser1.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEvaluate1.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEvaluate1.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUser2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEvaluate2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEvaluate2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUser3.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser3.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEvaluate3.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEvaluate3.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUser4.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser4.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEvaluate4.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEvaluate4.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUser5.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser5.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEvaluate5.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEvaluate5.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSRegisterTakeCarePackageDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndYob.SetEvent(WE_CHANGE, _OnYobChangeFnc);
	//m_wndYob.SetEvent(WE_SETFOCUS, _OnYobSetfocusFnc);
	//m_wndYob.SetEvent(WE_KILLFOCUS, _OnYobKillfocusFnc);
	m_wndYob.SetEvent(WE_CHECKVALUE, _OnYobCheckValueFnc);
	//m_wndGender.SetEvent(WE_CHANGE, _OnGenderChangeFnc);
	//m_wndGender.SetEvent(WE_SETFOCUS, _OnGenderSetfocusFnc);
	//m_wndGender.SetEvent(WE_KILLFOCUS, _OnGenderKillfocusFnc);
	m_wndGender.SetEvent(WE_CHECKVALUE, _OnGenderCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndShift.SetEvent(WE_SELENDOK, _OnShiftSelendokFnc);
	//m_wndShift.SetEvent(WE_SETFOCUS, _OnShiftSetfocusFnc);
	//m_wndShift.SetEvent(WE_KILLFOCUS, _OnShiftKillfocusFnc);
	m_wndShift.SetEvent(WE_SELCHANGE, _OnShiftSelectChangeFnc);
	m_wndShift.SetEvent(WE_LOADDATA, _OnShiftLoadDataFnc);
	//m_wndShift.SetEvent(WE_ADDNEW, _OnShiftAddNewFnc);
	//m_wndBeginTime.SetEvent(WE_CHANGE, _OnBeginTimeChangeFnc);
	//m_wndBeginTime.SetEvent(WE_SETFOCUS, _OnBeginTimeSetfocusFnc);
	//m_wndBeginTime.SetEvent(WE_KILLFOCUS, _OnBeginTimeKillfocusFnc);
	m_wndBeginTime.SetEvent(WE_CHECKVALUE, _OnBeginTimeCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	m_wndUser1.SetEvent(WE_SELENDOK, _OnUser1SelendokFnc);
	//m_wndUser1.SetEvent(WE_SETFOCUS, _OnUser1SetfocusFnc);
	//m_wndUser1.SetEvent(WE_KILLFOCUS, _OnUser1KillfocusFnc);
	m_wndUser1.SetEvent(WE_SELCHANGE, _OnUser1SelectChangeFnc);
	m_wndUser1.SetEvent(WE_LOADDATA, _OnUser1LoadDataFnc);
	//m_wndUser1.SetEvent(WE_ADDNEW, _OnUser1AddNewFnc);
	m_wndEvaluate1.SetEvent(WE_SELENDOK, _OnEvaluate1SelendokFnc);
	//m_wndEvaluate1.SetEvent(WE_SETFOCUS, _OnEvaluate1SetfocusFnc);
	//m_wndEvaluate1.SetEvent(WE_KILLFOCUS, _OnEvaluate1KillfocusFnc);
	m_wndEvaluate1.SetEvent(WE_SELCHANGE, _OnEvaluate1SelectChangeFnc);
	m_wndEvaluate1.SetEvent(WE_LOADDATA, _OnEvaluate1LoadDataFnc);
	//m_wndEvaluate1.SetEvent(WE_ADDNEW, _OnEvaluate1AddNewFnc);
	m_wndUser2.SetEvent(WE_SELENDOK, _OnUser2SelendokFnc);
	//m_wndUser2.SetEvent(WE_SETFOCUS, _OnUser2SetfocusFnc);
	//m_wndUser2.SetEvent(WE_KILLFOCUS, _OnUser2KillfocusFnc);
	m_wndUser2.SetEvent(WE_SELCHANGE, _OnUser2SelectChangeFnc);
	m_wndUser2.SetEvent(WE_LOADDATA, _OnUser2LoadDataFnc);
	//m_wndUser2.SetEvent(WE_ADDNEW, _OnUser2AddNewFnc);
	m_wndEvaluate2.SetEvent(WE_SELENDOK, _OnEvaluate2SelendokFnc);
	//m_wndEvaluate2.SetEvent(WE_SETFOCUS, _OnEvaluate2SetfocusFnc);
	//m_wndEvaluate2.SetEvent(WE_KILLFOCUS, _OnEvaluate2KillfocusFnc);
	m_wndEvaluate2.SetEvent(WE_SELCHANGE, _OnEvaluate2SelectChangeFnc);
	m_wndEvaluate2.SetEvent(WE_LOADDATA, _OnEvaluate2LoadDataFnc);
	//m_wndEvaluate2.SetEvent(WE_ADDNEW, _OnEvaluate2AddNewFnc);
	m_wndUser3.SetEvent(WE_SELENDOK, _OnUser3SelendokFnc);
	//m_wndUser3.SetEvent(WE_SETFOCUS, _OnUser3SetfocusFnc);
	//m_wndUser3.SetEvent(WE_KILLFOCUS, _OnUser3KillfocusFnc);
	m_wndUser3.SetEvent(WE_SELCHANGE, _OnUser3SelectChangeFnc);
	m_wndUser3.SetEvent(WE_LOADDATA, _OnUser3LoadDataFnc);
	//m_wndUser3.SetEvent(WE_ADDNEW, _OnUser3AddNewFnc);
	m_wndEvaluate3.SetEvent(WE_SELENDOK, _OnEvaluate3SelendokFnc);
	//m_wndEvaluate3.SetEvent(WE_SETFOCUS, _OnEvaluate3SetfocusFnc);
	//m_wndEvaluate3.SetEvent(WE_KILLFOCUS, _OnEvaluate3KillfocusFnc);
	m_wndEvaluate3.SetEvent(WE_SELCHANGE, _OnEvaluate3SelectChangeFnc);
	m_wndEvaluate3.SetEvent(WE_LOADDATA, _OnEvaluate3LoadDataFnc);
	//m_wndEvaluate3.SetEvent(WE_ADDNEW, _OnEvaluate3AddNewFnc);
	m_wndUser4.SetEvent(WE_SELENDOK, _OnUser4SelendokFnc);
	//m_wndUser4.SetEvent(WE_SETFOCUS, _OnUser4SetfocusFnc);
	//m_wndUser4.SetEvent(WE_KILLFOCUS, _OnUser4KillfocusFnc);
	m_wndUser4.SetEvent(WE_SELCHANGE, _OnUser4SelectChangeFnc);
	m_wndUser4.SetEvent(WE_LOADDATA, _OnUser4LoadDataFnc);
	//m_wndUser4.SetEvent(WE_ADDNEW, _OnUser4AddNewFnc);
	m_wndEvaluate4.SetEvent(WE_SELENDOK, _OnEvaluate4SelendokFnc);
	//m_wndEvaluate4.SetEvent(WE_SETFOCUS, _OnEvaluate4SetfocusFnc);
	//m_wndEvaluate4.SetEvent(WE_KILLFOCUS, _OnEvaluate4KillfocusFnc);
	m_wndEvaluate4.SetEvent(WE_SELCHANGE, _OnEvaluate4SelectChangeFnc);
	m_wndEvaluate4.SetEvent(WE_LOADDATA, _OnEvaluate4LoadDataFnc);
	//m_wndEvaluate4.SetEvent(WE_ADDNEW, _OnEvaluate4AddNewFnc);
	m_wndUser5.SetEvent(WE_SELENDOK, _OnUser5SelendokFnc);
	//m_wndUser5.SetEvent(WE_SETFOCUS, _OnUser5SetfocusFnc);
	//m_wndUser5.SetEvent(WE_KILLFOCUS, _OnUser5KillfocusFnc);
	m_wndUser5.SetEvent(WE_SELCHANGE, _OnUser5SelectChangeFnc);
	m_wndUser5.SetEvent(WE_LOADDATA, _OnUser5LoadDataFnc);
	//m_wndUser5.SetEvent(WE_ADDNEW, _OnUser5AddNewFnc);
	m_wndEvaluate5.SetEvent(WE_SELENDOK, _OnEvaluate5SelendokFnc);
	//m_wndEvaluate5.SetEvent(WE_SETFOCUS, _OnEvaluate5SetfocusFnc);
	//m_wndEvaluate5.SetEvent(WE_KILLFOCUS, _OnEvaluate5KillfocusFnc);
	m_wndEvaluate5.SetEvent(WE_SELCHANGE, _OnEvaluate5SelectChangeFnc);
	m_wndEvaluate5.SetEvent(WE_LOADDATA, _OnEvaluate5LoadDataFnc);
	//m_wndEvaluate5.SetEvent(WE_ADDNEW, _OnEvaluate5AddNewFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSRegisterTakeCarePackageDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_szYob);
	DDX_Text(pDX, m_wndGender.GetDlgCtrlID(), m_szGender);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_TextEx(pDX, m_wndShift.GetDlgCtrlID(), m_szShiftKey);
	DDX_TextEx(pDX, m_wndBeginTime.GetDlgCtrlID(), m_szBeginTime);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_TextEx(pDX, m_wndUser1.GetDlgCtrlID(), m_szUser1Key);
	DDX_TextEx(pDX, m_wndEvaluate1.GetDlgCtrlID(), m_szEvaluate1Key);
	DDX_TextEx(pDX, m_wndUser2.GetDlgCtrlID(), m_szUser2Key);
	DDX_TextEx(pDX, m_wndEvaluate2.GetDlgCtrlID(), m_szEvaluate2Key);
	DDX_TextEx(pDX, m_wndUser3.GetDlgCtrlID(), m_szUser3Key);
	DDX_TextEx(pDX, m_wndEvaluate3.GetDlgCtrlID(), m_szEvaluate3Key);
	DDX_TextEx(pDX, m_wndUser4.GetDlgCtrlID(), m_szUser4Key);
	DDX_TextEx(pDX, m_wndEvaluate4.GetDlgCtrlID(), m_szEvaluate4Key);
	DDX_TextEx(pDX, m_wndUser5.GetDlgCtrlID(), m_szUser5Key);
	DDX_TextEx(pDX, m_wndEvaluate5.GetDlgCtrlID(), m_szEvaluate5Key);

}
void CHMSRegisterTakeCarePackageDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Yob")] =  m_szYob;
	m_jData[_T("Gender")] =  m_szGender;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Shift")] =  m_szShiftKey;
	m_jData[_T("BeginTime")] =  m_szBeginTime;
	m_jData[_T("EndDate")] =  m_szEndDate;
	m_jData[_T("User1")] =  m_szUser1Key;
	m_jData[_T("Evaluate1")] =  m_szEvaluate1Key;
	m_jData[_T("User2")] =  m_szUser2Key;
	m_jData[_T("Evaluate2")] =  m_szEvaluate2Key;
	m_jData[_T("User3")] =  m_szUser3Key;
	m_jData[_T("Evaluate3")] =  m_szEvaluate3Key;
	m_jData[_T("User4")] =  m_szUser4Key;
	m_jData[_T("Evaluate4")] =  m_szEvaluate4Key;
	m_jData[_T("User5")] =  m_szUser5Key;
	m_jData[_T("Evaluate5")] =  m_szEvaluate5Key;
	}
	else
	{
			
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Yob")].GetValue(m_szYob);
	m_jData[_T("Gender")].GetValue(m_szGender);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Shift")].GetValue(m_szShiftKey);
	m_jData[_T("BeginTime")].GetValue(m_szBeginTime);
	m_jData[_T("EndDate")].GetValue(m_szEndDate);
	m_jData[_T("User1")].GetValue(m_szUser1Key);
	m_jData[_T("Evaluate1")].GetValue(m_szEvaluate1Key);
	m_jData[_T("User2")].GetValue(m_szUser2Key);
	m_jData[_T("Evaluate2")].GetValue(m_szEvaluate2Key);
	m_jData[_T("User3")].GetValue(m_szUser3Key);
	m_jData[_T("Evaluate3")].GetValue(m_szEvaluate3Key);
	m_jData[_T("User4")].GetValue(m_szUser4Key);
	m_jData[_T("Evaluate4")].GetValue(m_szEvaluate4Key);
	m_jData[_T("User5")].GetValue(m_szUser5Key);
	m_jData[_T("Evaluate5")].GetValue(m_szEvaluate5Key);
	}

}
void CHMSRegisterTakeCarePackageDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSRegisterTakeCarePackageDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSRegisterTakeCarePackageDialog::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szGender.Empty();
	m_szAddress.Empty();
	m_szShiftKey.Empty();
	m_szBeginTime.Empty();
	m_szEndDate.Empty();
	m_szUser1Key.Empty();
	m_szEvaluate1Key.Empty();
	m_szUser2Key.Empty();
	m_szEvaluate2Key.Empty();
	m_szUser3Key.Empty();
	m_szEvaluate3Key.Empty();
	m_szUser4Key.Empty();
	m_szEvaluate4Key.Empty();
	m_szUser5Key.Empty();
	m_szEvaluate5Key.Empty();

}
int CHMSRegisterTakeCarePackageDialog::SetMode(int nMode){
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
/*void CHMSRegisterTakeCarePackageDialog::OnPatientNameChange(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnPatientNameKillfocus(){
	
} */
int CHMSRegisterTakeCarePackageDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSRegisterTakeCarePackageDialog::OnYobChange(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnYobSetfocus(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnYobKillfocus(){
	
} */
int CHMSRegisterTakeCarePackageDialog::OnYobCheckValue(){
	return 0;
} 
/*void CHMSRegisterTakeCarePackageDialog::OnGenderChange(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnGenderSetfocus(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnGenderKillfocus(){
	
} */
int CHMSRegisterTakeCarePackageDialog::OnGenderCheckValue(){
	return 0;
} 
/*void CHMSRegisterTakeCarePackageDialog::OnAddressChange(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnAddressSetfocus(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnAddressKillfocus(){
	
} */
int CHMSRegisterTakeCarePackageDialog::OnAddressCheckValue(){
	return 0;
} 
void CHMSRegisterTakeCarePackageDialog::OnShiftSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnShiftSelendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnShiftSetfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnShiftKillfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnShiftLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndShift.IsSearchKey() && !m_szShiftKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szShiftKey
};
	m_wndShift.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndShift.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnShiftAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnBeginTimeChange(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnBeginTimeSetfocus(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnBeginTimeKillfocus(){
	
} */
int CHMSRegisterTakeCarePackageDialog::OnBeginTimeCheckValue(){
	return 0;
} 
/*void CHMSRegisterTakeCarePackageDialog::OnEndDateChange(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnEndDateSetfocus(){
	
} */
/*void CHMSRegisterTakeCarePackageDialog::OnEndDateKillfocus(){
	
} */
int CHMSRegisterTakeCarePackageDialog::OnEndDateCheckValue(){
	return 0;
} 
void CHMSRegisterTakeCarePackageDialog::OnUser1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnUser1Selendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnUser1Setfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnUser1Killfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnUser1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser1.IsSearchKey() && !m_szUser1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser1Key
};
	m_wndUser1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnUser1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCarePackageDialog::OnEvaluate1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnEvaluate1Selendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate1Setfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate1Killfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnEvaluate1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEvaluate1.IsSearchKey() && !m_szEvaluate1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szEvaluate1Key
};
	m_wndEvaluate1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEvaluate1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCarePackageDialog::OnUser2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnUser2Selendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnUser2Setfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnUser2Killfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnUser2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser2.IsSearchKey() && !m_szUser2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser2Key
};
	m_wndUser2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnUser2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCarePackageDialog::OnEvaluate2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnEvaluate2Selendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate2Setfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate2Killfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnEvaluate2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEvaluate2.IsSearchKey() && !m_szEvaluate2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szEvaluate2Key
};
	m_wndEvaluate2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEvaluate2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCarePackageDialog::OnUser3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnUser3Selendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnUser3Setfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnUser3Killfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnUser3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser3.IsSearchKey() && !m_szUser3Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser3Key
};
	m_wndUser3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnUser3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCarePackageDialog::OnEvaluate3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnEvaluate3Selendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate3Setfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate3Killfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnEvaluate3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEvaluate3.IsSearchKey() && !m_szEvaluate3Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szEvaluate3Key
};
	m_wndEvaluate3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEvaluate3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCarePackageDialog::OnUser4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnUser4Selendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnUser4Setfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnUser4Killfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnUser4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser4.IsSearchKey() && !m_szUser4Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser4Key
};
	m_wndUser4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnUser4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCarePackageDialog::OnEvaluate4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnEvaluate4Selendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate4Setfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate4Killfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnEvaluate4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEvaluate4.IsSearchKey() && !m_szEvaluate4Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szEvaluate4Key
};
	m_wndEvaluate4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEvaluate4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCarePackageDialog::OnUser5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnUser5Selendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnUser5Setfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnUser5Killfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnUser5LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser5.IsSearchKey() && !m_szUser5Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser5Key
};
	m_wndUser5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnUser5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCarePackageDialog::OnEvaluate5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnEvaluate5Selendok(){
	 
}
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate5Setfocus(){
	
}*/
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate5Killfocus(){
	
}*/
long CHMSRegisterTakeCarePackageDialog::OnEvaluate5LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEvaluate5.IsSearchKey() && !m_szEvaluate5Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szEvaluate5Key
};
	m_wndEvaluate5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEvaluate5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCarePackageDialog::OnEvaluate5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCarePackageDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnTerminateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCarePackageDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRegisterTakeCarePackageDialog::OnAddHMSRegisterTakeCarePackageDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSRegisterTakeCarePackageDialog::OnEditHMSRegisterTakeCarePackageDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSRegisterTakeCarePackageDialog::OnDeleteHMSRegisterTakeCarePackageDialog(){
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
 		OnCancelHMSRegisterTakeCarePackageDialog();
 	}
	return 0;
}
int CHMSRegisterTakeCarePackageDialog::OnSaveHMSRegisterTakeCarePackageDialog(){
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
 		//OnHMSRegisterTakeCarePackageDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSRegisterTakeCarePackageDialog::OnCancelHMSRegisterTakeCarePackageDialog(){
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
int CHMSRegisterTakeCarePackageDialog::OnHMSRegisterTakeCarePackageDialogListLoadData(){
	return 0;
}
