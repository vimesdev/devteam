#include "HMSRegisterTakeCardDialog.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnYobCheckValue();
} 
/*static void _OnGenderChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnGenderChange();
} */
/*static void _OnGenderSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnGenderSetfocus();} */ 
/*static void _OnGenderKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnGenderKillfocus();
} */
static int _OnGenderCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnGenderCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnAddressCheckValue();
} 
static void _OnCardTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnCardTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCardTypeSelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnCardTypeSelendok();
}
/*static void _OnCardTypeSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnCardTypeKillfocus();
}*/
/*static void _OnCardTypeKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnCardTypeKillfocus();
}*/
static long _OnCardTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnCardTypeLoadData();
}
/*static void _OnCardTypeAddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnCardTypeAddNew();
}*/
/*static void _OnBeginTimeChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnBeginTimeChange();
} */
/*static void _OnBeginTimeSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnBeginTimeSetfocus();} */ 
/*static void _OnBeginTimeKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnBeginTimeKillfocus();
} */
static int _OnBeginTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnBeginTimeCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnEndDateCheckValue();
} 
static void _OnUser1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnUser1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser1SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser1Selendok();
}
/*static void _OnUser1SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser1Killfocus();
}*/
/*static void _OnUser1KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser1Killfocus();
}*/
static long _OnUser1LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnUser1LoadData();
}
/*static void _OnUser1AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser1AddNew();
}*/
static void _OnEvaluate1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnEvaluate1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEvaluate1SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate1Selendok();
}
/*static void _OnEvaluate1SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate1Killfocus();
}*/
/*static void _OnEvaluate1KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate1Killfocus();
}*/
static long _OnEvaluate1LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate1LoadData();
}
/*static void _OnEvaluate1AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate1AddNew();
}*/
static void _OnUser2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnUser2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser2SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser2Selendok();
}
/*static void _OnUser2SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser2Killfocus();
}*/
/*static void _OnUser2KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser2Killfocus();
}*/
static long _OnUser2LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnUser2LoadData();
}
/*static void _OnUser2AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser2AddNew();
}*/
static void _OnEvaluateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnEvaluateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEvaluateSelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluateSelendok();
}
/*static void _OnEvaluateSetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluateKillfocus();
}*/
/*static void _OnEvaluateKillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluateKillfocus();
}*/
static long _OnEvaluateLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluateLoadData();
}
/*static void _OnEvaluateAddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluateAddNew();
}*/
static void _OnUser3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnUser3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser3SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser3Selendok();
}
/*static void _OnUser3SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser3Killfocus();
}*/
/*static void _OnUser3KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser3Killfocus();
}*/
static long _OnUser3LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnUser3LoadData();
}
/*static void _OnUser3AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser3AddNew();
}*/
static void _OnEvaluate3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnEvaluate3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEvaluate3SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate3Selendok();
}
/*static void _OnEvaluate3SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate3Killfocus();
}*/
/*static void _OnEvaluate3KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate3Killfocus();
}*/
static long _OnEvaluate3LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate3LoadData();
}
/*static void _OnEvaluate3AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate3AddNew();
}*/
static void _OnUser4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnUser4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser4SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser4Selendok();
}
/*static void _OnUser4SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser4Killfocus();
}*/
/*static void _OnUser4KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser4Killfocus();
}*/
static long _OnUser4LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnUser4LoadData();
}
/*static void _OnUser4AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser4AddNew();
}*/
static void _OnEvaluate4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnEvaluate4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEvaluate4SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate4Selendok();
}
/*static void _OnEvaluate4SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate4Killfocus();
}*/
/*static void _OnEvaluate4KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate4Killfocus();
}*/
static long _OnEvaluate4LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate4LoadData();
}
/*static void _OnEvaluate4AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate4AddNew();
}*/
static void _OnUser5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnUser5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser5SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser5Selendok();
}
/*static void _OnUser5SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser5Killfocus();
}*/
/*static void _OnUser5KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser5Killfocus();
}*/
static long _OnUser5LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnUser5LoadData();
}
/*static void _OnUser5AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnUser5AddNew();
}*/
static void _OnEvaluate5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegisterTakeCardDialog* )pWnd)->OnEvaluate5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEvaluate5SelendokFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate5Selendok();
}
/*static void _OnEvaluate5SetfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate5Killfocus();
}*/
/*static void _OnEvaluate5KillfocusFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate5Killfocus();
}*/
static long _OnEvaluate5LoadDataFnc(CWnd *pWnd){
	return ((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate5LoadData();
}
/*static void _OnEvaluate5AddNewFnc(CWnd *pWnd){
	((CHMSRegisterTakeCardDialog *)pWnd)->OnEvaluate5AddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSRegisterTakeCardDialog *pVw = (CHMSRegisterTakeCardDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSRegisterTakeCardDialog *pVw = (CHMSRegisterTakeCardDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSRegisterTakeCardDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterTakeCardDialog*)pWnd)->OnAddHMSRegisterTakeCardDialog();
} 
static int _OnEditHMSRegisterTakeCardDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterTakeCardDialog*)pWnd)->OnEditHMSRegisterTakeCardDialog();
} 
static int _OnDeleteHMSRegisterTakeCardDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterTakeCardDialog*)pWnd)->OnDeleteHMSRegisterTakeCardDialog();
} 
static int _OnSaveHMSRegisterTakeCardDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterTakeCardDialog*)pWnd)->OnSaveHMSRegisterTakeCardDialog();
} 
static int _OnCancelHMSRegisterTakeCardDialogFnc(CWnd *pWnd){
	 return ((CHMSRegisterTakeCardDialog*)pWnd)->OnCancelHMSRegisterTakeCardDialog();
} 
CHMSRegisterTakeCardDialog::CHMSRegisterTakeCardDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 490;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CHMSRegisterTakeCardDialog::~CHMSRegisterTakeCardDialog(){
}
void CHMSRegisterTakeCardDialog::OnCreateComponents(){
	m_wndPackageInformation.Create(this, _T("Package Information"), 5, 125, 480, 360);
	m_wndPatientName.Create(this,115, 30, 475, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 110, 55);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 480, 120);
	m_wndYobLabel.Create(this, _T("Yob"), 10, 60, 110, 85);
	m_wndYob.Create(this,115, 60, 239, 85); 
	m_wndGenderLabel.Create(this, _T("Gender"), 244, 60, 344, 85);
	m_wndGender.Create(this,349, 60, 475, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 110, 115);
	m_wndAddress.Create(this,115, 90, 475, 115); 
	m_wndCardTypeLabel.Create(this, _T("Sheet"), 10, 150, 110, 175);
	m_wndCardType.Create(this,115, 150, 240, 175); 
	m_wndBeginTimeLabel.Create(this, _T("Begin Time"), 10, 180, 110, 205);
	m_wndBeginTime.Create(this,115, 180, 240, 205); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 245, 180, 345, 205);
	m_wndEndDate.Create(this,350, 180, 475, 205); 
	m_wndUser1Label.Create(this, _T("User1"), 10, 210, 110, 235);
	m_wndUser1.Create(this,115, 210, 240, 235); 
	m_wndEvaluate1Label.Create(this, _T("Evaluate1"), 245, 210, 345, 235);
	m_wndEvaluate1.Create(this,350, 210, 475, 235); 
	m_wndUser2Label.Create(this, _T("User2"), 10, 240, 110, 265);
	m_wndUser2.Create(this,115, 240, 240, 265); 
	m_wndEvaluateLabel.Create(this, _T("Evaluate2"), 245, 240, 345, 265);
	m_wndEvaluate.Create(this,350, 240, 475, 265); 
	m_wndUser3Label.Create(this, _T("User3"), 10, 270, 110, 295);
	m_wndUser3.Create(this,115, 270, 240, 295); 
	m_wndEvaluate3Label.Create(this, _T("Evaluate3"), 245, 270, 345, 295);
	m_wndEvaluate3.Create(this,350, 270, 475, 295); 
	m_wndUser4Label.Create(this, _T("User4"), 10, 300, 110, 325);
	m_wndUser4.Create(this,115, 300, 240, 325); 
	m_wndEvaluate4Label.Create(this, _T("Evaluate4"), 245, 300, 345, 325);
	m_wndEvaluate4.Create(this,350, 300, 475, 325); 
	m_wndUser5Label.Create(this, _T("User5"), 10, 330, 110, 355);
	m_wndUser5.Create(this,115, 330, 240, 355); 
	m_wndEvaluate5Label.Create(this, _T("Evaluate5"), 245, 330, 345, 355);
	m_wndEvaluate5.Create(this,350, 330, 475, 355); 
	m_wndApply.Create(this, _T("&Apply"), 305, 365, 390, 390);
	m_wndClose.Create(this, _T("&Close"), 395, 365, 480, 390);

}
void CHMSRegisterTakeCardDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndYob.SetLimitText(1024);
	m_wndYob.SetCheckValue(true);
	m_wndGender.SetLimitText(1024);
	m_wndGender.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndCardType.SetCheckValue(true);
	m_wndCardType.LimitText(1024);
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
	m_wndEvaluate.SetCheckValue(true);
	m_wndEvaluate.LimitText(35);
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


	m_wndEvaluate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEvaluate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


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
void CHMSRegisterTakeCardDialog::OnSetWindowEvents(){
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
	m_wndCardType.SetEvent(WE_SELENDOK, _OnCardTypeSelendokFnc);
	//m_wndCardType.SetEvent(WE_SETFOCUS, _OnCardTypeSetfocusFnc);
	//m_wndCardType.SetEvent(WE_KILLFOCUS, _OnCardTypeKillfocusFnc);
	m_wndCardType.SetEvent(WE_SELCHANGE, _OnCardTypeSelectChangeFnc);
	m_wndCardType.SetEvent(WE_LOADDATA, _OnCardTypeLoadDataFnc);
	//m_wndCardType.SetEvent(WE_ADDNEW, _OnCardTypeAddNewFnc);
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
	m_wndEvaluate.SetEvent(WE_SELENDOK, _OnEvaluateSelendokFnc);
	//m_wndEvaluate.SetEvent(WE_SETFOCUS, _OnEvaluateSetfocusFnc);
	//m_wndEvaluate.SetEvent(WE_KILLFOCUS, _OnEvaluateKillfocusFnc);
	m_wndEvaluate.SetEvent(WE_SELCHANGE, _OnEvaluateSelectChangeFnc);
	m_wndEvaluate.SetEvent(WE_LOADDATA, _OnEvaluateLoadDataFnc);
	//m_wndEvaluate.SetEvent(WE_ADDNEW, _OnEvaluateAddNewFnc);
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
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSRegisterTakeCardDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_szYob);
	DDX_Text(pDX, m_wndGender.GetDlgCtrlID(), m_szGender);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_TextEx(pDX, m_wndCardType.GetDlgCtrlID(), m_szCardTypeKey);
	DDX_TextEx(pDX, m_wndBeginTime.GetDlgCtrlID(), m_szBeginTime);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_TextEx(pDX, m_wndUser1.GetDlgCtrlID(), m_szUser1Key);
	DDX_TextEx(pDX, m_wndEvaluate1.GetDlgCtrlID(), m_szEvaluate1Key);
	DDX_TextEx(pDX, m_wndUser2.GetDlgCtrlID(), m_szUser2Key);
	DDX_TextEx(pDX, m_wndEvaluate.GetDlgCtrlID(), m_szEvaluateKey);
	DDX_TextEx(pDX, m_wndUser3.GetDlgCtrlID(), m_szUser3Key);
	DDX_TextEx(pDX, m_wndEvaluate3.GetDlgCtrlID(), m_szEvaluate3Key);
	DDX_TextEx(pDX, m_wndUser4.GetDlgCtrlID(), m_szUser4Key);
	DDX_TextEx(pDX, m_wndEvaluate4.GetDlgCtrlID(), m_szEvaluate4Key);
	DDX_TextEx(pDX, m_wndUser5.GetDlgCtrlID(), m_szUser5Key);
	DDX_TextEx(pDX, m_wndEvaluate5.GetDlgCtrlID(), m_szEvaluate5Key);

}
void CHMSRegisterTakeCardDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Yob")] =  m_szYob;
	m_jData[_T("Gender")] =  m_szGender;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("CardType")] =  m_szCardTypeKey;
	m_jData[_T("BeginTime")] =  m_szBeginTime;
	m_jData[_T("EndDate")] =  m_szEndDate;
	m_jData[_T("User1")] =  m_szUser1Key;
	m_jData[_T("Evaluate1")] =  m_szEvaluate1Key;
	m_jData[_T("User2")] =  m_szUser2Key;
	m_jData[_T("Evaluate")] =  m_szEvaluateKey;
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
	m_jData[_T("CardType")].GetValue(m_szCardTypeKey);
	m_jData[_T("BeginTime")].GetValue(m_szBeginTime);
	m_jData[_T("EndDate")].GetValue(m_szEndDate);
	m_jData[_T("User1")].GetValue(m_szUser1Key);
	m_jData[_T("Evaluate1")].GetValue(m_szEvaluate1Key);
	m_jData[_T("User2")].GetValue(m_szUser2Key);
	m_jData[_T("Evaluate")].GetValue(m_szEvaluateKey);
	m_jData[_T("User3")].GetValue(m_szUser3Key);
	m_jData[_T("Evaluate3")].GetValue(m_szEvaluate3Key);
	m_jData[_T("User4")].GetValue(m_szUser4Key);
	m_jData[_T("Evaluate4")].GetValue(m_szEvaluate4Key);
	m_jData[_T("User5")].GetValue(m_szUser5Key);
	m_jData[_T("Evaluate5")].GetValue(m_szEvaluate5Key);
	}

}
void CHMSRegisterTakeCardDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSRegisterTakeCardDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSRegisterTakeCardDialog::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szGender.Empty();
	m_szAddress.Empty();
	m_szCardTypeKey.Empty();
	m_szBeginTime.Empty();
	m_szEndDate.Empty();
	m_szUser1Key.Empty();
	m_szEvaluate1Key.Empty();
	m_szUser2Key.Empty();
	m_szEvaluateKey.Empty();
	m_szUser3Key.Empty();
	m_szEvaluate3Key.Empty();
	m_szUser4Key.Empty();
	m_szEvaluate4Key.Empty();
	m_szUser5Key.Empty();
	m_szEvaluate5Key.Empty();

}
int CHMSRegisterTakeCardDialog::SetMode(int nMode){
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
/*void CHMSRegisterTakeCardDialog::OnPatientNameChange(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnPatientNameKillfocus(){
	
} */
int CHMSRegisterTakeCardDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSRegisterTakeCardDialog::OnYobChange(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnYobSetfocus(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnYobKillfocus(){
	
} */
int CHMSRegisterTakeCardDialog::OnYobCheckValue(){
	return 0;
} 
/*void CHMSRegisterTakeCardDialog::OnGenderChange(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnGenderSetfocus(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnGenderKillfocus(){
	
} */
int CHMSRegisterTakeCardDialog::OnGenderCheckValue(){
	return 0;
} 
/*void CHMSRegisterTakeCardDialog::OnAddressChange(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnAddressSetfocus(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnAddressKillfocus(){
	
} */
int CHMSRegisterTakeCardDialog::OnAddressCheckValue(){
	return 0;
} 
void CHMSRegisterTakeCardDialog::OnCardTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnCardTypeSelendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnCardTypeSetfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnCardTypeKillfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnCardTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCardType.IsSearchKey() && !m_szCardTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCardTypeKey
};
	m_wndCardType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCardType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCardDialog::OnCardTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegisterTakeCardDialog::OnBeginTimeChange(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnBeginTimeSetfocus(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnBeginTimeKillfocus(){
	
} */
int CHMSRegisterTakeCardDialog::OnBeginTimeCheckValue(){
	return 0;
} 
/*void CHMSRegisterTakeCardDialog::OnEndDateChange(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnEndDateSetfocus(){
	
} */
/*void CHMSRegisterTakeCardDialog::OnEndDateKillfocus(){
	
} */
int CHMSRegisterTakeCardDialog::OnEndDateCheckValue(){
	return 0;
} 
void CHMSRegisterTakeCardDialog::OnUser1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnUser1Selendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnUser1Setfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnUser1Killfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnUser1LoadData(){
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
/*void CHMSRegisterTakeCardDialog::OnUser1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCardDialog::OnEvaluate1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnEvaluate1Selendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnEvaluate1Setfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnEvaluate1Killfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnEvaluate1LoadData(){
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
/*void CHMSRegisterTakeCardDialog::OnEvaluate1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCardDialog::OnUser2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnUser2Selendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnUser2Setfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnUser2Killfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnUser2LoadData(){
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
/*void CHMSRegisterTakeCardDialog::OnUser2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCardDialog::OnEvaluateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnEvaluateSelendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnEvaluateSetfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnEvaluateKillfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnEvaluateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEvaluate.IsSearchKey() && !m_szEvaluateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szEvaluateKey
};
	m_wndEvaluate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEvaluate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegisterTakeCardDialog::OnEvaluateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCardDialog::OnUser3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnUser3Selendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnUser3Setfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnUser3Killfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnUser3LoadData(){
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
/*void CHMSRegisterTakeCardDialog::OnUser3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCardDialog::OnEvaluate3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnEvaluate3Selendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnEvaluate3Setfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnEvaluate3Killfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnEvaluate3LoadData(){
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
/*void CHMSRegisterTakeCardDialog::OnEvaluate3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCardDialog::OnUser4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnUser4Selendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnUser4Setfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnUser4Killfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnUser4LoadData(){
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
/*void CHMSRegisterTakeCardDialog::OnUser4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCardDialog::OnEvaluate4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnEvaluate4Selendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnEvaluate4Setfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnEvaluate4Killfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnEvaluate4LoadData(){
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
/*void CHMSRegisterTakeCardDialog::OnEvaluate4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCardDialog::OnUser5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnUser5Selendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnUser5Setfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnUser5Killfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnUser5LoadData(){
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
/*void CHMSRegisterTakeCardDialog::OnUser5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCardDialog::OnEvaluate5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnEvaluate5Selendok(){
	 
}
/*void CHMSRegisterTakeCardDialog::OnEvaluate5Setfocus(){
	
}*/
/*void CHMSRegisterTakeCardDialog::OnEvaluate5Killfocus(){
	
}*/
long CHMSRegisterTakeCardDialog::OnEvaluate5LoadData(){
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
/*void CHMSRegisterTakeCardDialog::OnEvaluate5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegisterTakeCardDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegisterTakeCardDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRegisterTakeCardDialog::OnAddHMSRegisterTakeCardDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSRegisterTakeCardDialog::OnEditHMSRegisterTakeCardDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSRegisterTakeCardDialog::OnDeleteHMSRegisterTakeCardDialog(){
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
 		OnCancelHMSRegisterTakeCardDialog();
 	}
	return 0;
}
int CHMSRegisterTakeCardDialog::OnSaveHMSRegisterTakeCardDialog(){
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
 		//OnHMSRegisterTakeCardDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSRegisterTakeCardDialog::OnCancelHMSRegisterTakeCardDialog(){
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
int CHMSRegisterTakeCardDialog::OnHMSRegisterTakeCardDialogListLoadData(){
	return 0;
}
