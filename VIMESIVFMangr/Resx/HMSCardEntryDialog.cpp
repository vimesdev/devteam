#include "HMSCardEntryDialog.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnDisrateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDisrateChange();
} */
/*static void _OnDisrateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDisrateSetfocus();} */ 
/*static void _OnDisrateKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDisrateKillfocus();
} */
static int _OnDisrateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDisrateCheckValue();
} 
/*static void _OnRegistrationDateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateChange();
} */
/*static void _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateSetfocus();} */ 
/*static void _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static void _OnExpiryDateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateChange();
} */
/*static void _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateSetfocus();} */ 
/*static void _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnExpiryDateCheckValue();
} 
static void _OnRegistrationPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCardEntryDialog* )pWnd)->OnRegistrationPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRegistrationPlaceSelendokFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceSelendok();
}
/*static void _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
/*static void _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
static long _OnRegistrationPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceLoadData();
}
/*static void _OnRegistrationPlaceAddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceAddNew();
}*/
/*static void _OnCompanyChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanyChange();
} */
/*static void _OnCompanySetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanySetfocus();} */ 
/*static void _OnCompanyKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanyKillfocus();
} */
static int _OnCompanyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCompanyCheckValue();
} 
static void _OnOffLineSelectFnc(CWnd *pWnd){
	 ((CHMSCardEntryDialog*)pWnd)->OnOffLineSelect();
}
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CHMSCardEntryDialog*)pWnd)->OnEmergencySelect();
}
static void _OnCardNo2LabelSelectFnc(CWnd *pWnd){
	 ((CHMSCardEntryDialog*)pWnd)->OnCardNo2LabelSelect();
}
/*static void _OnCardNo2ChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNo2Change();
} */
/*static void _OnCardNo2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNo2Setfocus();} */ 
/*static void _OnCardNo2KillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNo2Killfocus();
} */
static int _OnCardNo2CheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCardNo2CheckValue();
} 
/*static void _OnCode2ChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCode2Change();
} */
/*static void _OnCode2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCode2Setfocus();} */ 
/*static void _OnCode2KillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCode2Killfocus();
} */
static int _OnCode2CheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCode2CheckValue();
} 
/*static void _OnDiscount2ChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscount2Change();
} */
/*static void _OnDiscount2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscount2Setfocus();} */ 
/*static void _OnDiscount2KillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscount2Killfocus();
} */
static int _OnDiscount2CheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiscount2CheckValue();
} 
/*static void _OnRegDate2ChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegDate2Change();
} */
/*static void _OnRegDate2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegDate2Setfocus();} */ 
/*static void _OnRegDate2KillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegDate2Killfocus();
} */
static int _OnRegDate2CheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnRegDate2CheckValue();
} 
/*static void _OnExpDate2ChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpDate2Change();
} */
/*static void _OnExpDate2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpDate2Setfocus();} */ 
/*static void _OnExpDate2KillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpDate2Killfocus();
} */
static int _OnExpDate2CheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnExpDate2CheckValue();
} 
static void _OnRegistrationPlace2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCardEntryDialog* )pWnd)->OnRegistrationPlace2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRegistrationPlace2SelendokFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlace2Selendok();
}
/*static void _OnRegistrationPlace2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlace2Killfocus();
}*/
/*static void _OnRegistrationPlace2KillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlace2Killfocus();
}*/
static long _OnRegistrationPlace2LoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlace2LoadData();
}
/*static void _OnRegistrationPlace2AddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlace2AddNew();
}*/
/*static void _OnCompany2ChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompany2Change();
} */
/*static void _OnCompany2SetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompany2Setfocus();} */ 
/*static void _OnCompany2KillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompany2Killfocus();
} */
static int _OnCompany2CheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCompany2CheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnHospitalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCardEntryDialog* )pWnd)->OnHospitalSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHospitalSelendokFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnHospitalSelendok();
}
/*static void _OnHospitalSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();
}*/
/*static void _OnHospitalKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();
}*/
static long _OnHospitalLoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnHospitalLoadData();
}
/*static void _OnHospitalAddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnHospitalAddNew();
}*/
/*static void _OnDiseaseChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiseaseChange();
} */
/*static void _OnDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiseaseSetfocus();} */ 
/*static void _OnDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiseaseKillfocus();
} */
static int _OnDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiseaseCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnAddHMSCardEntryDialog();
} 
static int _OnEditHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnEditHMSCardEntryDialog();
} 
static int _OnDeleteHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnDeleteHMSCardEntryDialog();
} 
static int _OnSaveHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnSaveHMSCardEntryDialog();
} 
static int _OnCancelHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnCancelHMSCardEntryDialog();
} 
CHMSCardEntryDialog::CHMSCardEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCardEntryDialog::~CHMSCardEntryDialog(){
}
void CHMSCardEntryDialog::OnCreateComponents(){
	m_wndCardNumberInformation.Create(this, _T("Primary card information"), 5, 35, 460, 240);
	m_wndTransferInformation.Create(this, _T("TransferInformation"), 5, 425, 460, 510);
	m_wndSecondaryCardInformation.Create(this, _T("Secondary card information"), 5, 245, 460, 420);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 5, 130, 30);
	m_wndPatientName.Create(this,135, 5, 455, 30); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 60, 130, 85);
	m_wndCardNo.Create(this,135, 60, 455, 85); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 90, 130, 115);
	m_wndCode.Create(this,135, 90, 185, 115); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 250, 90, 340, 115);
	m_wndDiscount.Create(this,190, 90, 245, 115); 
	m_wndDisrate.Create(this,345, 90, 420, 115); 
	m_wndPercentLabel.Create(this, _T("%"), 425, 90, 455, 115);
	m_wndRegistrationDateLabel.Create(this, _T("Registration Date"), 10, 120, 130, 145);
	m_wndRegistrationDate.Create(this,135, 120, 245, 145); 
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 250, 120, 340, 145);
	m_wndExpiryDate.Create(this,345, 120, 455, 145); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 10, 150, 130, 175);
	m_wndRegistrationPlace.Create(this,135, 150, 455, 175); 
	m_wndCompanyLabel.Create(this, _T("Company"), 10, 180, 130, 205);
	m_wndCompany.Create(this,135, 180, 455, 205); 
	m_wndOffLine.Create(this, _T("Out Line"), 10, 210, 130, 235);
	m_wndEmergency.Create(this, _T("Emergency"), 135, 210, 245, 235);
	m_wndCardNo2Label.Create(this, _T("Card No"), 10, 270, 130, 295);
	m_wndCardNo2.Create(this,135, 270, 340, 295); 
	m_wndCode2Label.Create(this, _T("Code"), 10, 300, 130, 325);
	m_wndCode2.Create(this,135, 300, 245, 325); 
	m_wndDiscount2Label.Create(this, _T("Discount"), 250, 300, 340, 325);
	m_wndDiscount2.Create(this,345, 300, 455, 325); 
	m_wndRegDate2Label.Create(this, _T("Registration Date"), 10, 330, 130, 355);
	m_wndRegDate2.Create(this,135, 330, 245, 355); 
	m_wndExpDate2Label.Create(this, _T("Expiry Date"), 250, 330, 340, 355);
	m_wndExpDate2.Create(this,345, 330, 455, 355); 
	m_wndRegistrationPlace2Label.Create(this, _T("Registration Place"), 10, 360, 130, 385);
	m_wndRegistrationPlace2.Create(this,135, 360, 455, 385); 
	m_wndCompany2Label.Create(this, _T("Company"), 10, 390, 130, 415);
	m_wndCompany2.Create(this,135, 390, 455, 415); 
	m_wndUpdate.Create(this, _T("Update"), 345, 270, 455, 295);
	m_wndHospitalLabel.Create(this, _T("Hospital"), 10, 450, 130, 475);
	m_wndHospital.Create(this,135, 450, 455, 475); 
	m_wndDiseaseLabel.Create(this, _T("Disease"), 10, 480, 130, 505);
	m_wndDisease.Create(this,135, 480, 455, 505); 
	m_wndSave.Create(this, _T("&Ok"), 295, 515, 375, 540);
	m_wndClose.Create(this, _T("&Close"), 380, 515, 460, 540);

}
void CHMSCardEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndCardNo.SetLimitText(1024);
	m_wndCardNo.SetCheckValue(true);
	m_wndCode.SetLimitText(1024);
	m_wndCode.SetCheckValue(true);
	m_wndDiscount.SetLimitText(1024);
	m_wndDiscount.SetCheckValue(true);
	m_wndDisrate.SetLimitText(1024);
	m_wndDisrate.SetCheckValue(true);
	m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
	m_wndExpiryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndRegistrationPlace.LimitText(1024);
	m_wndCompany.SetLimitText(1024);
	m_wndCompany.SetCheckValue(true);
	m_wndCardNo2.SetLimitText(35);
	m_wndCardNo2.SetCheckValue(true);
	m_wndCode2.SetLimitText(35);
	m_wndCode2.SetCheckValue(true);
	m_wndDiscount2.SetLimitText(35);
	m_wndDiscount2.SetCheckValue(true);
	m_wndRegDate2.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegDate2.SetCheckValue(true);
	m_wndExpDate2.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpDate2.SetCheckValue(true);
	m_wndRegistrationPlace2.SetCheckValue(true);
	m_wndRegistrationPlace2.LimitText(35);
	m_wndCompany2.SetLimitText(35);
	m_wndCompany2.SetCheckValue(true);
	m_wndHospital.SetCheckValue(true);
	m_wndHospital.LimitText(1024);
	m_wndDisease.SetLimitText(1024);
	m_wndDisease.SetCheckValue(true);




	m_wndRegistrationPlace2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRegistrationPlace2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



}
void CHMSCardEntryDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	//m_wndDisrate.SetEvent(WE_CHANGE, _OnDisrateChangeFnc);
	//m_wndDisrate.SetEvent(WE_SETFOCUS, _OnDisrateSetfocusFnc);
	//m_wndDisrate.SetEvent(WE_KILLFOCUS, _OnDisrateKillfocusFnc);
	m_wndDisrate.SetEvent(WE_CHECKVALUE, _OnDisrateCheckValueFnc);
	//m_wndRegistrationDate.SetEvent(WE_CHANGE, _OnRegistrationDateChangeFnc);
	//m_wndRegistrationDate.SetEvent(WE_SETFOCUS, _OnRegistrationDateSetfocusFnc);
	//m_wndRegistrationDate.SetEvent(WE_KILLFOCUS, _OnRegistrationDateKillfocusFnc);
	m_wndRegistrationDate.SetEvent(WE_CHECKVALUE, _OnRegistrationDateCheckValueFnc);
	//m_wndExpiryDate.SetEvent(WE_CHANGE, _OnExpiryDateChangeFnc);
	//m_wndExpiryDate.SetEvent(WE_SETFOCUS, _OnExpiryDateSetfocusFnc);
	//m_wndExpiryDate.SetEvent(WE_KILLFOCUS, _OnExpiryDateKillfocusFnc);
	m_wndExpiryDate.SetEvent(WE_CHECKVALUE, _OnExpiryDateCheckValueFnc);
	m_wndRegistrationPlace.SetEvent(WE_SELENDOK, _OnRegistrationPlaceSelendokFnc);
	//m_wndRegistrationPlace.SetEvent(WE_SETFOCUS, _OnRegistrationPlaceSetfocusFnc);
	//m_wndRegistrationPlace.SetEvent(WE_KILLFOCUS, _OnRegistrationPlaceKillfocusFnc);
	m_wndRegistrationPlace.SetEvent(WE_SELCHANGE, _OnRegistrationPlaceSelectChangeFnc);
	m_wndRegistrationPlace.SetEvent(WE_LOADDATA, _OnRegistrationPlaceLoadDataFnc);
	//m_wndRegistrationPlace.SetEvent(WE_ADDNEW, _OnRegistrationPlaceAddNewFnc);
	//m_wndCompany.SetEvent(WE_CHANGE, _OnCompanyChangeFnc);
	//m_wndCompany.SetEvent(WE_SETFOCUS, _OnCompanySetfocusFnc);
	//m_wndCompany.SetEvent(WE_KILLFOCUS, _OnCompanyKillfocusFnc);
	m_wndCompany.SetEvent(WE_CHECKVALUE, _OnCompanyCheckValueFnc);
	m_wndOffLine.SetEvent(WE_CLICK, _OnOffLineSelectFnc);
	m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
	m_wndCardNo2Label.SetEvent(WE_CLICK, _OnCardNo2LabelSelectFnc);
	//m_wndCardNo2.SetEvent(WE_CHANGE, _OnCardNo2ChangeFnc);
	//m_wndCardNo2.SetEvent(WE_SETFOCUS, _OnCardNo2SetfocusFnc);
	//m_wndCardNo2.SetEvent(WE_KILLFOCUS, _OnCardNo2KillfocusFnc);
	m_wndCardNo2.SetEvent(WE_CHECKVALUE, _OnCardNo2CheckValueFnc);
	//m_wndCode2.SetEvent(WE_CHANGE, _OnCode2ChangeFnc);
	//m_wndCode2.SetEvent(WE_SETFOCUS, _OnCode2SetfocusFnc);
	//m_wndCode2.SetEvent(WE_KILLFOCUS, _OnCode2KillfocusFnc);
	m_wndCode2.SetEvent(WE_CHECKVALUE, _OnCode2CheckValueFnc);
	//m_wndDiscount2.SetEvent(WE_CHANGE, _OnDiscount2ChangeFnc);
	//m_wndDiscount2.SetEvent(WE_SETFOCUS, _OnDiscount2SetfocusFnc);
	//m_wndDiscount2.SetEvent(WE_KILLFOCUS, _OnDiscount2KillfocusFnc);
	m_wndDiscount2.SetEvent(WE_CHECKVALUE, _OnDiscount2CheckValueFnc);
	//m_wndRegDate2.SetEvent(WE_CHANGE, _OnRegDate2ChangeFnc);
	//m_wndRegDate2.SetEvent(WE_SETFOCUS, _OnRegDate2SetfocusFnc);
	//m_wndRegDate2.SetEvent(WE_KILLFOCUS, _OnRegDate2KillfocusFnc);
	m_wndRegDate2.SetEvent(WE_CHECKVALUE, _OnRegDate2CheckValueFnc);
	//m_wndExpDate2.SetEvent(WE_CHANGE, _OnExpDate2ChangeFnc);
	//m_wndExpDate2.SetEvent(WE_SETFOCUS, _OnExpDate2SetfocusFnc);
	//m_wndExpDate2.SetEvent(WE_KILLFOCUS, _OnExpDate2KillfocusFnc);
	m_wndExpDate2.SetEvent(WE_CHECKVALUE, _OnExpDate2CheckValueFnc);
	m_wndRegistrationPlace2.SetEvent(WE_SELENDOK, _OnRegistrationPlace2SelendokFnc);
	//m_wndRegistrationPlace2.SetEvent(WE_SETFOCUS, _OnRegistrationPlace2SetfocusFnc);
	//m_wndRegistrationPlace2.SetEvent(WE_KILLFOCUS, _OnRegistrationPlace2KillfocusFnc);
	m_wndRegistrationPlace2.SetEvent(WE_SELCHANGE, _OnRegistrationPlace2SelectChangeFnc);
	m_wndRegistrationPlace2.SetEvent(WE_LOADDATA, _OnRegistrationPlace2LoadDataFnc);
	//m_wndRegistrationPlace2.SetEvent(WE_ADDNEW, _OnRegistrationPlace2AddNewFnc);
	//m_wndCompany2.SetEvent(WE_CHANGE, _OnCompany2ChangeFnc);
	//m_wndCompany2.SetEvent(WE_SETFOCUS, _OnCompany2SetfocusFnc);
	//m_wndCompany2.SetEvent(WE_KILLFOCUS, _OnCompany2KillfocusFnc);
	m_wndCompany2.SetEvent(WE_CHECKVALUE, _OnCompany2CheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndHospital.SetEvent(WE_SELENDOK, _OnHospitalSelendokFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_SELCHANGE, _OnHospitalSelectChangeFnc);
	m_wndHospital.SetEvent(WE_LOADDATA, _OnHospitalLoadDataFnc);
	//m_wndHospital.SetEvent(WE_ADDNEW, _OnHospitalAddNewFnc);
	//m_wndDisease.SetEvent(WE_CHANGE, _OnDiseaseChangeFnc);
	//m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
	//m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
	m_wndDisease.SetEvent(WE_CHECKVALUE, _OnDiseaseCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSCardEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_Text(pDX, m_wndDisrate.GetDlgCtrlID(), m_nDisrate);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_TextEx(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlaceKey);
	DDX_Text(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompany);
	DDX_Check(pDX, m_wndOffLine.GetDlgCtrlID(), m_bOffLine);
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);
	DDX_Check(pDX, m_wndCardNo2Label.GetDlgCtrlID(), m_bCardNo2Label);
	DDX_Text(pDX, m_wndCardNo2.GetDlgCtrlID(), m_szCardNo2);
	DDX_Text(pDX, m_wndCode2.GetDlgCtrlID(), m_szCode2);
	DDX_Text(pDX, m_wndDiscount2.GetDlgCtrlID(), m_szDiscount2);
	DDX_TextEx(pDX, m_wndRegDate2.GetDlgCtrlID(), m_szRegDate2);
	DDX_TextEx(pDX, m_wndExpDate2.GetDlgCtrlID(), m_szExpDate2);
	DDX_TextEx(pDX, m_wndRegistrationPlace2.GetDlgCtrlID(), m_szRegistrationPlace2Key);
	DDX_Text(pDX, m_wndCompany2.GetDlgCtrlID(), m_szCompany2);
	DDX_TextEx(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospitalKey);
	DDX_Text(pDX, m_wndDisease.GetDlgCtrlID(), m_szDisease);

}
void CHMSCardEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCardEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCardEntryDialog::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szCardNo.Empty();
	m_szCode.Empty();
	m_nDiscount=0;
	m_nDisrate=0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlaceKey.Empty();
	m_szCompany.Empty();
	m_bOffLine=FALSE;
	m_bEmergency=FALSE;
	m_bCardNo2Label=FALSE;
	m_szCardNo2.Empty();
	m_szCode2.Empty();
	m_szDiscount2.Empty();
	m_szRegDate2.Empty();
	m_szExpDate2.Empty();
	m_szRegistrationPlace2Key.Empty();
	m_szCompany2.Empty();
	m_szHospitalKey.Empty();
	m_szDisease.Empty();

}
int CHMSCardEntryDialog::SetMode(int nMode){
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
/*void CHMSCardEntryDialog::OnPatientNameChange(){
	
} */
/*void CHMSCardEntryDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnPatientNameKillfocus(){
	
} */
int CHMSCardEntryDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnCardNoChange(){
	
} */
/*void CHMSCardEntryDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCardNoKillfocus(){
	
} */
int CHMSCardEntryDialog::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnCodeChange(){
	
} */
/*void CHMSCardEntryDialog::OnCodeSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCodeKillfocus(){
	
} */
int CHMSCardEntryDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnDiscountChange(){
	
} */
/*void CHMSCardEntryDialog::OnDiscountSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnDiscountKillfocus(){
	
} */
int CHMSCardEntryDialog::OnDiscountCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnDisrateChange(){
	
} */
/*void CHMSCardEntryDialog::OnDisrateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnDisrateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnDisrateCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnRegistrationDateChange(){
	
} */
/*void CHMSCardEntryDialog::OnRegistrationDateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnRegistrationDateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnRegistrationDateCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnExpiryDateChange(){
	
} */
/*void CHMSCardEntryDialog::OnExpiryDateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnExpiryDateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnExpiryDateCheckValue(){
	return 0;
} 
void CHMSCardEntryDialog::OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnRegistrationPlaceSelendok(){
	 
}
/*void CHMSCardEntryDialog::OnRegistrationPlaceSetfocus(){
	
}*/
/*void CHMSCardEntryDialog::OnRegistrationPlaceKillfocus(){
	
}*/
long CHMSCardEntryDialog::OnRegistrationPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRegistrationPlace.IsSearchKey() && !m_szRegistrationPlaceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRegistrationPlaceKey
};
	m_wndRegistrationPlace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRegistrationPlace.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCardEntryDialog::OnRegistrationPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCardEntryDialog::OnCompanyChange(){
	
} */
/*void CHMSCardEntryDialog::OnCompanySetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCompanyKillfocus(){
	
} */
int CHMSCardEntryDialog::OnCompanyCheckValue(){
	return 0;
} 
	void CHMSCardEntryDialog::OnOffLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSCardEntryDialog::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSCardEntryDialog::OnCardNo2LabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSCardEntryDialog::OnCardNo2Change(){
	
} */
/*void CHMSCardEntryDialog::OnCardNo2Setfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCardNo2Killfocus(){
	
} */
int CHMSCardEntryDialog::OnCardNo2CheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnCode2Change(){
	
} */
/*void CHMSCardEntryDialog::OnCode2Setfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCode2Killfocus(){
	
} */
int CHMSCardEntryDialog::OnCode2CheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnDiscount2Change(){
	
} */
/*void CHMSCardEntryDialog::OnDiscount2Setfocus(){
	
} */
/*void CHMSCardEntryDialog::OnDiscount2Killfocus(){
	
} */
int CHMSCardEntryDialog::OnDiscount2CheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnRegDate2Change(){
	
} */
/*void CHMSCardEntryDialog::OnRegDate2Setfocus(){
	
} */
/*void CHMSCardEntryDialog::OnRegDate2Killfocus(){
	
} */
int CHMSCardEntryDialog::OnRegDate2CheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnExpDate2Change(){
	
} */
/*void CHMSCardEntryDialog::OnExpDate2Setfocus(){
	
} */
/*void CHMSCardEntryDialog::OnExpDate2Killfocus(){
	
} */
int CHMSCardEntryDialog::OnExpDate2CheckValue(){
	return 0;
} 
void CHMSCardEntryDialog::OnRegistrationPlace2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnRegistrationPlace2Selendok(){
	 
}
/*void CHMSCardEntryDialog::OnRegistrationPlace2Setfocus(){
	
}*/
/*void CHMSCardEntryDialog::OnRegistrationPlace2Killfocus(){
	
}*/
long CHMSCardEntryDialog::OnRegistrationPlace2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRegistrationPlace2.IsSearchKey() && !m_szRegistrationPlace2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRegistrationPlace2Key
};
	m_wndRegistrationPlace2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRegistrationPlace2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCardEntryDialog::OnRegistrationPlace2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCardEntryDialog::OnCompany2Change(){
	
} */
/*void CHMSCardEntryDialog::OnCompany2Setfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCompany2Killfocus(){
	
} */
int CHMSCardEntryDialog::OnCompany2CheckValue(){
	return 0;
} 
void CHMSCardEntryDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnHospitalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnHospitalSelendok(){
	 
}
/*void CHMSCardEntryDialog::OnHospitalSetfocus(){
	
}*/
/*void CHMSCardEntryDialog::OnHospitalKillfocus(){
	
}*/
long CHMSCardEntryDialog::OnHospitalLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHospital.IsSearchKey() && !m_szHospitalKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szHospitalKey
};
	m_wndHospital.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHospital.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCardEntryDialog::OnHospitalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCardEntryDialog::OnDiseaseChange(){
	
} */
/*void CHMSCardEntryDialog::OnDiseaseSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnDiseaseKillfocus(){
	
} */
int CHMSCardEntryDialog::OnDiseaseCheckValue(){
	return 0;
} 
void CHMSCardEntryDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCardEntryDialog::OnAddHMSCardEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCardEntryDialog::OnEditHMSCardEntryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCardEntryDialog::OnDeleteHMSCardEntryDialog(){
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
 		OnCancelHMSCardEntryDialog();
 	}
	return 0;
}
int CHMSCardEntryDialog::OnSaveHMSCardEntryDialog(){
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
 		//OnHMSCardEntryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCardEntryDialog::OnCancelHMSCardEntryDialog(){
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
int CHMSCardEntryDialog::OnHMSCardEntryDialogListLoadData(){
	return 0;
}
