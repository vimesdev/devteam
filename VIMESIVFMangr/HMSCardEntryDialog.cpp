#include "HMSCardEntryDialog.h"
#include "MainFrm.h"
#include "HMSCardInfoCheckIns.h"
#include "StringToken.h"
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

static int _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSCardEntryDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnObjectSelendokFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectSelendok();
}
/*static int _OnObjectSetfocusFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static int _OnObjectKillfocusFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectKillfocus();
}*/
static int _OnObjectLoadDataFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectLoadData();
}
/*static int _OnObjectAddNewFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnObjectAddNew();
}*/

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

static void  _OnRegistrationPlaceLabelClickFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceLabelClick();

} 

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

/*static int _OnHospitalChangeFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnHospitalChange();
} */
/*static int _OnHospitalSetfocusFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();} */ 
/*static int _OnHospitalKillfocusFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();
} */
//static int _OnHospitalCheckValueFnc(CWnd *pWnd){
//	return ((CHMSCardEntryDialog *)pWnd)->OnHospitalCheckValue();
//} 


static int _OnHospitalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSCardEntryDialog* )pWnd)->OnHospitalSelectChange(nOldItemSel, nNewItemSel);
} 
//static int _OnHospitalSelendokFnc(CWnd *pWnd){
	// return ((CHMSCardEntryDialog *)pWnd)->OnHospitalSelendok();
//}
/*static int _OnHospitalSetfocusFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();
}*/
/*static int _OnHospitalKillfocusFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnHospitalKillfocus();
}*/
static int _OnHospitalLoadDataFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnHospitalLoadData();
}
/*static int _OnHospitalAddNewFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog *)pWnd)->OnHospitalAddNew();
}*/

/*static int _OnDiseaseChangeFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiseaseChange();
} */
/*static int _OnDiseaseSetfocusFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiseaseKillfocus();} */ 
/*static int _OnDiseaseKillfocusFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiseaseKillfocus();
} */
static int _OnDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiseaseCheckValue();
} 

static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnEditSelect();
} 

static void _OnHemaSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnHemaSelect();
} 
static void _OnOffLineSelectFnc(CWnd *pWnd){
	 ((CHMSCardEntryDialog*)pWnd)->OnOffLineSelect();
}
static void _OnEmergencySelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnEmergencySelect();
}

static void _OnOver5YearSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnOver5YearSelect();
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
static void _OnCheckInsSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnCheckInsSelect();
}
static void _OnCheckInsSelect2Fnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnCheckInsSelect2();
} 
CHMSCardEntryDialog::CHMSCardEntryDialog(CWnd *pParent, int nMode, bool bEnableObj):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	SetDefaultValues();
	m_nDlgWidth = 400;
	m_nDlgHeight = 250;
	
	m_szxCardNo.Empty();
	m_szxObject.Empty();
	m_szxIssueDate.Empty();
	m_szxIssuePlace.Empty();
	m_bEnableObjectType = bEnableObj;
	
	m_bPassExpDate = false;
	m_bOffLine = FALSE;
	m_bEmergency = FALSE;
	m_nDisrate =0;
	m_bOver5Year = FALSE;
	m_bOver5YearOpt = FALSE;
}
CHMSCardEntryDialog::~CHMSCardEntryDialog(){
}
void CHMSCardEntryDialog::OnCreateComponents(){
	m_wndCardNumberInformation.Create(this, _T("Primary card information"), 5, 35, 460, 240);
	m_wndTransferInformation.Create(this, _T("TransferInformation"), 5, 425, 460, 510);
	m_wndSecondaryCardInformation.Create(this, _T("Additional card information"), 5, 245, 460, 420);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 5, 130, 30);
	m_wndPatientName.Create(this,135, 5, 455, 30); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 60, 130, 85);
	m_wndCardNo.Create(this,135, 60, 340, 85); 
	// CHeckins
	m_wndCheckIns.Create(this,_T("Check Ins"),345, 60, 455, 85); 

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
	m_wndOver5Year.Create(this, _T("Trên 5 năm"), 250, 210, 345, 235);
	m_wndOver5Year.ModifyStyle(WS_TABSTOP, 0);

	m_wndOver5YearOpt.Create(this, _T("Trên 5 năm(PTTT)"), 345, 210, 505, 235);
	m_wndOver5YearOpt.ModifyStyle(WS_TABSTOP, 0);

	m_wndCardNo2Label.Create(this, _T("Card No"), 10, 270, 130, 295);
	m_wndCardNo2.Create(this,135, 270, 340, 295); 

		// CHeckins
	m_wndCheckIns2.Create(this,_T("Check Ins"),345, 270, 455, 295);


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
	m_wndSave.Create(this, _T("&Apply"), 295, 515, 375, 540);
	m_wndClose.Create(this, _T("&Close"), 380, 515, 460, 540);
}
void CHMSCardEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szCardFormat;
	
	m_wndCardNo.SetLimitText(20);
	m_wndCardNo.SetTextColor(RGB(0, 0, 255));
	m_wndCardNo.SetCheckValue(true);
	m_wndCardNo.ModifyStyle(0, ES_UPPERCASE);
//	szCardFormat = pMF->m_wndRegistration.m_wndObject.GetCurrent(3);
//	m_wndCardNo.SetMask(szCardFormat);
	m_wndDiscount.SetLimitText(3);
	m_wndDiscount.SetReadOnly(true);
//	m_wndDiscount.SetCheckValue(true);
	//m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
	//m_wndExpiryDate.SetMin(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndRegistrationPlaceLabel.SetHyperlink(true);
	
	m_wndRegistrationPlace.LimitText(128);
	m_wndPatientName.SetReadOnly(true);
	m_wndCode.SetLimitText(3);
	m_wndCode.SetReadOnly(true);
	m_wndDisrate.SetReadOnly(true);
	m_wndOffLine.ModifyStyle(WS_TABSTOP, 0);
	
	m_wndHospital.SetCheckValue(true);
	m_wndDisease.SetCheckValue(true);

	m_wndRegistrationPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndRegistrationPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndHospital.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndHospital.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndRegistrationPlace2.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndRegistrationPlace2.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_hms_cardTbl.SetTableName(_T("hms_card"));
	m_hms_cardTbl.AddField(_T("hc_updatedby"), dfText, 15); 
	m_hms_cardTbl.AddField(_T("hc_updateddate"), dfDateTime); 
	m_hms_cardTbl.AddField(_T("hc_patientno"), dfLong); 
	m_hms_cardTbl.AddField(_T("hc_docno"), dfLong); 
	m_hms_cardTbl.AddField(_T("hc_cardno"), dfText, 25); 
	m_hms_cardTbl.AddField(_T("hc_idx"), dfInteger); 
	m_hms_cardTbl.AddField(_T("hc_regdate"), dfDate); 
	m_hms_cardTbl.AddField(_T("hc_expdate"), dfDate); 
	m_hms_cardTbl.AddField(_T("hc_regcode"), dfText, 11); 
	m_hms_cardTbl.AddField(_T("hc_company"), dfText, 254); 
	m_hms_cardTbl.AddField(_T("hc_code"), dfText, 3); 
	m_hms_cardTbl.AddField(_T("hc_discount"), dfInteger); 
	m_hms_cardTbl.AddField(_T("hc_line"), dfInteger); 	
	m_hms_cardTbl.AddField(_T("hc_groupid"), dfInteger);

	m_hms_docTbl.SetTableName(_T("hms_doc"));	
	m_hms_docTbl.AddField(_T("hd_cardno"), dfText, 25); 	
	m_hms_docTbl.AddField(_T("hd_insregdate"), dfDate);
	m_hms_docTbl.AddField(_T("hd_disrate"), dfInteger); 
	m_hms_docTbl.AddField(_T("hd_insline"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hd_emergency"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hd_transplace"), dfText, 245); 
	m_hms_docTbl.AddField(_T("hd_transdiagn"), dfText, 245); 
	m_hms_docTbl.AddField(_T("hd_transplaceid"), dfText, 7); 
	m_hms_docTbl.AddField(_T("hd_over5year"), dfText, 1); 

	m_wndCardNo2.ModifyStyle(0, ES_UPPERCASE);
	m_wndCardNo2.SetLimitText(20);
	

}
void CHMSCardEntryDialog::OnSetWindowEvents(){
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
//	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
//	m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	//m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	//m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
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
	m_wndRegistrationPlaceLabel.SetEvent(WE_CLICK, _OnRegistrationPlaceLabelClickFnc);
	//m_wndCompany.SetEvent(WE_CHANGE, _OnCompanyChangeFnc);
	//m_wndCompany.SetEvent(WE_SETFOCUS, _OnCompanySetfocusFnc);
	//m_wndCompany.SetEvent(WE_KILLFOCUS, _OnCompanyKillfocusFnc);
	m_wndCompany.SetEvent(WE_CHECKVALUE, _OnCompanyCheckValueFnc);
	m_wndOffLine.SetEvent(WE_CLICK, _OnOffLineSelectFnc);
	m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
	m_wndOver5Year.SetEvent(WE_CLICK, _OnOver5YearSelectFnc);
	

	//m_wndHospital.SetEvent(WE_CHANGE, _OnHospitalChangeFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	//m_wndHospital.SetEvent(WE_CHECKVALUE, _OnHospitalCheckValueFnc);
	
	//m_wndHospital.SetEvent(WE_SELENDOK, _OnHospitalSelendokFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_SELCHANGE, _OnHospitalSelectChangeFnc);
	m_wndHospital.SetEvent(WE_LOADDATA, _OnHospitalLoadDataFnc);
	//m_wndHospital.SetEvent(WE_ADDNEW, _OnHospitalAddNewFnc);

	//m_wndDisease.SetEvent(WE_CHANGE, _OnDiseaseChangeFnc);
	//m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
	//m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
	m_wndDisease.SetEvent(WE_CHECKVALUE, _OnDiseaseCheckValueFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if(pMF->m_CompanyInfo.sc_provid == 603 && m_szCardNo.Find(_T("HN"))!= -1)
	//{
	//	m_wndHemaFlag.SetEvent(WE_CLICK, _OnHemaSelectFnc);
	//}
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndCheckIns.SetEvent(WE_CLICK, _OnCheckInsSelectFnc);
	m_wndCheckIns2.SetEvent(WE_CLICK, _OnCheckInsSelect2Fnc);

	CString szCaption;
	if(m_bEnableObjectType)
	{
		m_wndPatientName.ShowWindow(SW_HIDE);
		//m_wndObject.ShowWindow(SW_SHOW);
		//m_wndObject.SetReadOnly(true);
		TranslateString(_T("Add new card"), szCaption);
	}
	else
	{
		m_wndPatientName.ShowWindow(SW_SHOW);
		/*m_wndObject.ShowWindow(SW_HIDE);
		m_wndObject.SetReadOnly(false);*/
		TranslateString(_T("Edit card information"), szCaption);
	}
	SetWindowText(szCaption);

	m_szCompany = m_szWorkPlace;
	if(m_nPatientNo > 0)
	{
		GetDataToScreen();
	}


	m_bEditEmergency = false;
//	if(pMF->CheckPermission(_T("01.19")))
	{
		m_bEditEmergency = true;
	}

	//Quyen cho phep sua ngay het han the BHYT
	if(pMF->CheckPermission(_T("01.18")))
	{
		m_bPassExpDate = true;
	}
	RecalcPercent();
	
	
	SetMode(GetMode());
	m_insCheckin.Laythongtinketnoi();
	

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
	DDX_Check(pDX, m_wndOver5Year.GetDlgCtrlID(), m_bOver5Year);
	DDX_Check(pDX, m_wndOver5YearOpt.GetDlgCtrlID(), m_bOver5YearOpt);


	DDX_Check(pDX, m_wndCardNo2Label.GetDlgCtrlID(), m_bCardNo2Label);
	DDX_Text(pDX, m_wndCardNo2.GetDlgCtrlID(), m_szCardNo2);
	DDX_Text(pDX, m_wndCode2.GetDlgCtrlID(), m_szCode2);
	DDX_Text(pDX, m_wndDiscount2.GetDlgCtrlID(), m_nDiscount2);
	DDX_TextEx(pDX, m_wndRegDate2.GetDlgCtrlID(), m_szRegDate2);
	DDX_TextEx(pDX, m_wndExpDate2.GetDlgCtrlID(), m_szExpDate2);
	DDX_TextEx(pDX, m_wndRegistrationPlace2.GetDlgCtrlID(), m_szRegistrationPlace2Key);
	DDX_Text(pDX, m_wndCompany2.GetDlgCtrlID(), m_szCompany2);

	DDX_TextEx(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospital);
	DDX_Text(pDX, m_wndDisease.GetDlgCtrlID(), m_szDisease);
}
void CHMSCardEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_bEnableObjectType)
		return;

	szSQL.Format(_T(" SELECT hc_cardno, hc_idx, TO_DATE(hc_regdate) as hc_regdate, TO_DATE(hc_expdate) as hc_expdate, hc_regcode, hc_company, hc_code, hc_discount, hc_groupid,") \
				 _T(" hd_object obj_id, get_patientname(hd_docno) patient_name, hp_birthdate") \
				 _T(" FROM hms_card  ") \
				 _T(" LEFT JOIN hms_doc ON (hd_patientno = hc_patientno AND hc_idx = hd_cardidx) ") \
				 _T(" LEFT JOIN hms_patient ON (hp_patientno = hd_patientno) ") \
				 _T(" WHERE hd_patientno=%ld AND hd_docno =  %ld"), m_nPatientNo, pMF->m_nDocumentNo);

	rs.ExecSQL(szSQL);
	/*if(rs.IsEOF())
	{
		szSQL.Format(_T(" SELECT hc_cardno, hd_cardidx, TO_DATE(hc_regdate) as hc_regdate, TO_DATE(hc_expdate) as hc_expdate, hc_regcode, hc_company, hc_code, hc_discount, hc_groupid,") \
					 _T(" hd_object obj_id, get_patientname(hd_docno) patient_name") \
					 _T(" FROM hms_card LEFT JOIN hms_doc ON (hd_patientno = hc_patientno AND hc_idx = hd_cardidx) WHERE hc_patientno=%ld and hc_isprimary='Y' "), m_nPatientNo);
		rs.ExecSQL(szSQL);
	}*/
//_msg(_T("%s"), szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hc_cardno"),  m_szCardNo);
		rs.GetValue(_T("hc_idx"),  m_nCardIdx);
		rs.GetValue(_T("hc_regdate"), m_szRegistrationDate); 
		rs.GetValue(_T("hc_expdate"), m_szExpiryDate); 
		rs.GetValue(_T("hc_regcode"), m_szRegistrationPlaceKey); 
		rs.GetValue(_T("hc_company"), m_szCompany); 
		rs.GetValue(_T("hc_code"), m_szCode); 
		rs.GetValue(_T("hc_discount"), m_nCardDiscount); 
		rs.GetValue(_T("hc_groupid"), m_nGroupID); 
		rs.GetValue(_T("patient_name"), m_szPatientName);
		rs.GetValue(_T("obj_id"), m_szObjectKey);
		rs.GetValue(_T("hp_birthdate"),m_szBirthDate);
		
		m_szCompany.Trim();
		if(m_szCompany.IsEmpty())
			m_szCompany = m_szWorkPlace;
		
		m_nDiscount = m_nCardDiscount;
		
		szSQL.Format(_T("SELECT hd_emergency, hd_disrate,hd_transdiagn, hd_transplaceid, hd_insline, ho_type as objecttype, hd_over5year, hd_xcardidx ") \
		_T("FROM hms_doc ") \
		_T("LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		CString tmpStr, szOfline, szEmergency;
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hd_emergency"), szEmergency);
			rs.GetValue(_T("hd_disrate"), m_nDisrate);
			rs.GetValue(_T("hd_insline"), szOfline);
			rs.GetValue(_T("objecttype"), m_szObjectType);
			rs.GetValue(_T("hd_transdiagn"), m_szDisease);
			rs.GetValue(_T("hd_transplaceid"), m_szHospital);
			rs.GetValue(_T("hd_over5year"), tmpStr);

			m_bOver5Year = FALSE;
			m_bOver5YearOpt = FALSE;
			if(tmpStr == _T("Y"))
				m_bOver5Year = TRUE;
			if(tmpStr == _T("O"))
				m_bOver5YearOpt = TRUE;

			rs.GetValue(_T("hd_xcardidx"), m_nxCardIdx);


			if(m_szPatientName.IsEmpty())
				m_szPatientName = pMF->m_wndPatientDocument.m_szPatientName;

			if(szOfline == _T("Y"))
				m_bOffLine = TRUE;
			else
				m_bOffLine = FALSE;

			if(szEmergency == _T("Y"))
				m_bEmergency = TRUE;
			else
				m_bEmergency = FALSE;					
		}

		int nPercent = m_nCardDiscount;
		if(m_bOver5Year)
		{
			nPercent = 100;
		}
		if(m_bEmergency)
		{
			m_nDisrate = nPercent;
		}
		else
		{
			if(m_bOffLine)
				m_nDisrate = nPercent*pMF->m_nInsOffLinePayment/100;
		}
		
		m_szxCardNo = m_szCardNo;
		m_bOffLineOld = m_bOffLine;
		m_szRegistrationDateOld = m_szRegistrationDate;
		m_szExpiryDateOld = m_szExpiryDate;



		szSQL.Format(_T(" SELECT * FROM hms_card  WHERE hc_patientno=%ld and hc_idx=%ld"), m_nPatientNo, m_nxCardIdx);

		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			m_bCardNo2Label = TRUE;
			rs.GetValue(_T("hc_cardno"), m_szCardNo2);
			rs.GetValue(_T("hc_discount"), m_nDiscount2);
			rs.GetValue(_T("hc_code"), m_szCode2);
			rs.GetValue(_T("hc_regcode"), m_szRegistrationPlace2Key);
			rs.GetValue(_T("hc_regdate"), m_szRegDate2);
			rs.GetValue(_T("hc_expdate"), m_szExpDate2);
			rs.GetValue(_T("hc_company"), m_szCompany2);
		}
		else
		{
			m_bCardNo2Label = FALSE;
		}
		UpdateData(false);
	}
	


}
void CHMSCardEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_cardTbl.SetValue(_T("hc_updatedby"), pMF->GetCurrentUser()); 
	m_hms_cardTbl.SetValue(_T("hc_updateddate"), pMF->GetSysDateTime()); 
	m_hms_cardTbl.SetValue(_T("hc_patientno"),  pMF->m_nPatientNo);
	m_hms_cardTbl.SetValue(_T("hc_cardno"),  m_szCardNo);
	m_hms_cardTbl.SetValue(_T("hc_idx"),  m_nIndex); 
	m_hms_cardTbl.SetValue(_T("hc_regdate"), m_szRegistrationDate); 
	m_hms_cardTbl.SetValue(_T("hc_expdate"), m_szExpiryDate); 
	m_hms_cardTbl.SetValue(_T("hc_regcode"), m_szRegistrationPlaceKey); 	
	m_hms_cardTbl.SetValue(_T("hc_company"), m_szCompany); 
	m_hms_cardTbl.SetValue(_T("hc_code"), m_szCode); 
	m_hms_cardTbl.SetValue(_T("hc_discount"), m_nDiscount); 
	m_hms_cardTbl.SetValue(_T("hc_groupid"), m_nGroupID);
	CString tmpStr;
	tmpStr = _T("N");
	if(m_bOver5Year)
		tmpStr = _T("Y");
	else if(m_bOver5YearOpt)
		tmpStr = _T("O");
	m_hms_cardTbl.SetValue(_T("hc_over5year"), tmpStr); 


	m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNo);	
	m_hms_docTbl.SetValue(_T("hd_insregdate"), m_szRegistrationDate);
	m_hms_docTbl.SetValue(_T("hd_disrate"), m_nDisrate);
	m_hms_docTbl.SetValue(_T("hd_insline"), m_bOffLine?_T("Y"):_T("N"));	
	m_hms_docTbl.SetValue(_T("hd_emergency"), m_bEmergency?_T("Y"):_T("N"));
	m_hms_docTbl.SetValue(_T("hd_transplace"), m_wndHospital.GetCurrent(1)); 
	m_hms_docTbl.SetValue(_T("hd_transplaceid"), m_szHospital); 
	m_hms_docTbl.SetValue(_T("hd_transdiagn"), m_szDisease); 

//	CString tmpStr;
	tmpStr = _T("N");
	if(m_bOver5Year)
		tmpStr = _T("Y");
	else if(m_bOver5YearOpt)
		tmpStr = _T("O");

	m_hms_docTbl.SetValue(_T("hd_over5year"), tmpStr);

}
void CHMSCardEntryDialog::SetDefaultValues()
{

	m_szPatientName.Empty();
	m_szCardNo.Empty();
	m_szCode.Empty();
	m_nDiscount=0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlaceKey.Empty();
	m_szCompany.Empty();
	m_bOffLine = FALSE;
	m_bEmergency = FALSE;
	m_nIndex =0;
	//m_szObjectKey = _T("2");
	m_bCardNo2Label=FALSE;
	m_szCardNo2.Empty();
	m_szCode2.Empty();
	m_nDiscount2 = 0;
	m_szRegDate2.Empty();
	m_szExpDate2.Empty();
	m_szRegistrationPlace2Key.Empty();
	m_szCompany2.Empty();

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
			EnableButtons(TRUE, 0, 1,  -1); 
			/*m_szRegistrationDate = pMF->m_szInsRegDate;
			m_szExpiryDate = pMF->m_szInsExpDate;*/
			break; 
 		case VM_EDIT: 
			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,  -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1);
			m_wndOffLine.EnableWindow(FALSE);
			m_wndEmergency.EnableWindow(FALSE);
			m_wndCardNo2Label.EnableWindow(FALSE);
			m_wndSave.ShowWindow(SW_HIDE);
			m_wndUpdate.ShowWindow(SW_HIDE);
 			break; 
 		}; 


		if(!m_bEditEmergency)
		{
			m_wndEmergency.EnableWindow(FALSE);
		}
		else
		{
			m_wndOffLine.EnableWindow(FALSE);
		}
		if(m_bOffLine){
			m_wndHospital.EnableWindow(FALSE);
			m_wndDisease.EnableWindow(FALSE);
		}

		m_wndUpdate.ShowWindow(SW_HIDE);
		m_wndSave.EnableWindow(TRUE);
		m_wndClose.EnableWindow(TRUE);
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

/*void CHMSCardEntryDialog::OnDisrateChange(){
	
} */
/*void CHMSCardEntryDialog::OnDisrateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnDisrateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnDisrateCheckValue(){
	return 0;
} 

int CHMSCardEntryDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//UpdateData(TRUE);
	return 0;
} 
int CHMSCardEntryDialog::OnObjectSelendok()
{
	return 0;
}
/*int CHMSCardEntryDialog::OnObjectSetfocus(){
	 return 0;
}*/
/*int CHMSCardEntryDialog::OnObjectKillfocus(){
	 return 0;
}*/
int CHMSCardEntryDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//CRecord rs(&pMF->m_db);
	//CString szSQL, szWhere, tmpStr;
	//szWhere.Empty();
	//if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	//	szWhere.Format(_T(" AND ho_id='%s' "), m_szObjectKey);
	//};
	//if(!pMF->m_UserInfo.su_hms_xobject.IsEmpty())
	//	szWhere.AppendFormat(_T(" AND ho_id in(%s) "), pMF->m_UserInfo.su_hms_xobject);
	//if(GetMode() != VM_ADD)
	//	szWhere.AppendFormat(_T(" and ho_type='%s' "), m_szObjectType);

	//szSQL.Format(_T("SELECT * FROM hms_object WHERE ho_active='Y' and ho_hascard='Y' %s ORDER BY ho_id "), szWhere);


	//m_wndObject.DeleteAllItems(); 
	//int nCount = 0;
	//int nSel = 0;
	//nCount = rs.ExecSQL(szSQL);
	//while(!rs.IsEOF()){ 
	//	
	//	if(m_szObjectKey.IsEmpty())
	//		rs.GetValue(_T("ho_id"), m_szObjectKey);
	//	rs.GetValue(_T("ho_type"), tmpStr);
	//	if(tmpStr == m_szObjectType)
	//	   nSel = nCount;
	//	
	//	m_wndObject.AddItems(
	//		rs.GetValue(_T("ho_id")), 
	//		rs.GetValue(_T("ho_desc")), 
	//		rs.GetValue(_T("ho_hascard")), 
	//		rs.GetValue(_T("ho_type")), 
	//		rs.GetValue(_T("ho_discount")), 
	//		NULL);
	//	rs.MoveNext();
	//	nCount++;
	//}
	//m_wndObject.SetCurSel(nSel);
	return 0;
}
/*int CHMSCardEntryDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */

/*void CHMSCardEntryDialog::OnCardNoChange(){
	
} */
/*void CHMSCardEntryDialog::OnCardNoSetfocus(){
	
} */
/*
void CHMSCardEntryDialog::OnCardNoKillfocus(){
	m_szRegistrationPlaceKey = m_szCardNo.Right(5);	
} 
*/
int CHMSCardEntryDialog::OnCardNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	UpdateData(true);	
	if(m_szCardNo.IsEmpty()){
		m_wndCardNo.EnableWindow(false);
		m_wndDiscount.EnableWindow(false);
		m_wndRegistrationDate.EnableWindow(false);
		m_wndExpiryDate.EnableWindow(false);
		m_wndRegistrationPlace.EnableWindow(false);
		m_wndPatientName.EnableWindow(false);
		m_wndCode.EnableWindow(false);
		m_wndCardNo.SetToolTipMessage(_T(""));
		return 0;
	}

	int nRet = ParseCard(m_szObjectType,  m_szCardNo, m_szCode, m_nDiscount, m_nGroupID);
	if(nRet < 0){
		m_wndCardNo.SetToolTipMessage(_T("Invalid Card Number"));
		return -1;
	}

	if(m_bEmergency)
	{
		m_nDisrate = m_nDiscount = m_nCardDiscount;
	}
	else
	{
		if(m_bOffLine)
			m_nDisrate = m_nCardDiscount*pMF->m_nInsOffLinePayment/100;
	}

	UpdateData(false);
	CRecord rs(&pMF->m_db);		
	
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_card WHERE hc_cardno='%s' AND hc_active='Y'"), m_szCardNo);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		long nPatientNo;
		rs.GetValue(_T("hc_patientno"), nPatientNo);
		if(nPatientNo != m_nPatientNo)
		{
			CString szMsg;
			TranslateString(_T("This card is using by other patient.[%ld]"),tmpStr);
			szMsg.Format(tmpStr, nPatientNo);
			m_wndCardNo.SetToolTipMessage(szMsg);
			return -1;
		}
	}
	szSQL.Format(_T("SELECT count(*) FROM hms_hospital WHERE hh_id='%s' "), m_szCardNo.Right(5));
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		m_szRegistrationPlaceKey = m_szCardNo.Right(5);
		UpdateData(false);
	}
	else
		m_szRegistrationPlaceKey.Empty();

	RecalcPercent();
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
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if(m_bPassExpDate)
		return 0;	
	
	if(!m_bCardNo2Label && CompareDate(m_szExpiryDate, pMF->GetSysDate()) < 0)
		return -1;
	
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
long CHMSCardEntryDialog::OnRegistrationPlaceLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	return pMF->LoadHospitalList(&m_wndRegistrationPlace, m_szRegistrationPlaceKey);

	if(m_wndRegistrationPlace.IsSearchKey() && !m_szRegistrationPlaceKey.IsEmpty() )
	{
		szWhere.Format(_T("WHERE trim(hh_id)=trim('%s') "), m_szRegistrationPlaceKey);
	}
	szSQL.Format(_T("SELECT hh_id as id, hh_name||'-'||(select sp_name from sys_prov where sp_id=hh_provid) as name FROM hms_hospital %s ORDER BY hh_id"), szWhere);

	m_wndRegistrationPlace.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRegistrationPlace.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
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


void CHMSCardEntryDialog::OnCardNo2LabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	EnableSecondaryCard(m_bCardNo2Label);
	if(m_bCardNo2Label)
	{
		m_szCardNo2 = m_szCardNo;
		if(m_szCompany2.IsEmpty())
		{
			m_szCompany2 = m_szCompany;
		}
		if(m_szRegistrationPlace2Key.IsEmpty())
		{
			m_szRegistrationPlace2Key = m_szRegistrationPlaceKey;
		}
	}
	else
	{
		m_szCardNo2.Empty();
	}
	UpdateData(FALSE);
	m_wndCardNo2.SetSel(0, m_wndCardNo2.GetWindowTextLength());
}
/*void CHMSCardEntryDialog::OnCardNo2Change(){
	
} */
/*void CHMSCardEntryDialog::OnCardNo2Setfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCardNo2Killfocus(){
	
} */
int CHMSCardEntryDialog::OnCardNo2CheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	UpdateData(true);	
	if(m_szCardNo2.IsEmpty()){
		m_wndCardNo2.EnableWindow(false);
		m_wndDiscount2.EnableWindow(false);
		m_wndRegDate2.EnableWindow(false);
		m_wndExpDate2.EnableWindow(false);
		m_wndRegistrationPlace2.EnableWindow(false);
		m_wndCode2.EnableWindow(false);
		m_wndCardNo2.SetToolTipMessage(_T(""));
		m_nGroupID2 = 0;
		m_szCardNo2.Empty();
		m_szCode2.Empty();
		m_nDiscount2=0;
		return 0;
	}

	int nRet = ParseCard(m_szObjectType,  m_szCardNo2, m_szCode2, m_nDiscount2, m_nGroupID2);

	if(nRet < 0){
		m_wndCardNo2.SetToolTipMessage(_T("Invalid Card Number"));
		return -1;
	}
	UpdateData(false);
	CRecord rs(&pMF->m_db);		
	
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_card WHERE hc_cardno = '%s' "), m_szCardNo2);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		long nPatientNo;
		rs.GetValue(_T("hc_patientno"), nPatientNo);
		if(nPatientNo != m_nPatientNo)
		{
			CString szMsg;
			TranslateString(_T("This card is using by other patient.[%ld]"),tmpStr);
			szMsg.Format(tmpStr, nPatientNo);
			m_wndCardNo2.SetToolTipMessage(szMsg);
			return -1;
		}
	}
	szSQL.Format(_T("SELECT count(*) FROM hms_hospital WHERE hh_id='%s' "), m_szCardNo2.Right(5));
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		m_szRegistrationPlace2Key = m_szCardNo2.Right(5);
		UpdateData(false);
	}
	else
		m_szRegistrationPlace2Key.Empty();
	return 0;

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

	return pMF->LoadHospitalList(&m_wndRegistrationPlace2, m_szRegistrationPlace2Key);

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
	CString szSQL;
	CDbfMap cardTbl;
return;
	if(!IsValidateData()) 
 		return; 

	cardTbl.SetTableName(_T("hms_card"));
	cardTbl.AddField(_T("hc_updatedby"), dfText, 15); 
	cardTbl.AddField(_T("hc_patientno"), dfLong); 
	cardTbl.AddField(_T("hc_docno"), dfLong); 
	cardTbl.AddField(_T("hc_cardno"), dfText, 25); 
	cardTbl.AddField(_T("hc_regdate"), dfDate); 
	cardTbl.AddField(_T("hc_expdate"), dfDate); 
	cardTbl.AddField(_T("hc_regcode"), dfText, 11); 
	cardTbl.AddField(_T("hc_company"), dfText, 254); 
	cardTbl.AddField(_T("hc_code"), dfText, 3); 
	cardTbl.AddField(_T("hc_discount"), dfInteger); 
	cardTbl.AddField(_T("hc_groupid"), dfInteger);
	
	cardTbl.SetValue(_T("hc_updatedby"), pMF->GetCurrentUser());
	cardTbl.SetValue(_T("hc_patientno"), pMF->m_nPatientNo);
	cardTbl.SetValue(_T("hc_docno"), pMF->m_nDocumentNo);
	cardTbl.SetValue(_T("hc_cardno"), m_szCardNo2);
	cardTbl.SetValue(_T("hc_regdate"), m_szRegDate2);
	cardTbl.SetValue(_T("hc_expdate"), m_szExpDate2);
	cardTbl.SetValue(_T("hc_regcode"), m_szRegistrationPlace2Key);
	cardTbl.SetValue(_T("hc_company"), m_szCompany2);
	cardTbl.SetValue(_T("hc_code"), m_szCode2);
	cardTbl.SetValue(_T("hc_discount"), m_nDiscount2);
	cardTbl.SetValue(_T("hc_groupid"), m_nGroupID2);
	szSQL.Format(_T("HMS_CARD_ADDSECONDARY(%s) "), cardTbl.FormatSQL());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Cannot add secondary card"));
		return;
	}
	CGuiDialog::OnOK();


} 

/*int CHMSCardEntryDialog::OnHospitalChange(){
	return 0;
} */
/*int CHMSCardEntryDialog::OnHospitalSetfocus(){
	return 0;
} */
/*int CHMSCardEntryDialog::OnHospitalKillfocus(){
	return 0;
} */
//int CHMSCardEntryDialog::OnHospitalCheckValue(){
//	return 0;
//} 


int CHMSCardEntryDialog::OnHospitalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSCardEntryDialog::OnHospitalSelendok(){
	 return 0;
}
/*int CHMSCardEntryDialog::OnHospitalSetfocus(){
	 return 0;
}*/
/*int CHMSCardEntryDialog::OnHospitalKillfocus(){
	 return 0;
}*/
int CHMSCardEntryDialog::OnHospitalLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHospital.IsSearchKey() && ToInt(m_szHospital) > 0)
	{
		szWhere.Format(_T(" AND hh_id='%s' "), m_szHospital);
	}

	szSQL.Format(_T("SELECT hh_id as id, hh_name||' - '||sys_getprovillname(hh_provid) as name ") \
		_T("FROM hms_hospital ") \
		_T("WHERE hh_isactive = 'Y' AND hh_isactive2 = 'Y' %s ORDER BY hh_id "), 
		szWhere);
  
	m_wndHospital.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHospital.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
	//return pMF->LoadHospitalList(&m_wndHospital, m_szHospital);
}
/*int CHMSCardEntryDialog::OnHospitalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */

/*int CHMSCardEntryDialog::OnDiseaseChange(){
	return 0;
} */
/*int CHMSCardEntryDialog::OnDiseaseSetfocus(){
	return 0;
} */
/*int CHMSCardEntryDialog::OnDiseaseKillfocus(){
	return 0;
} */
int CHMSCardEntryDialog::OnDiseaseCheckValue(){
	return 0;
} 

void CHMSCardEntryDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
#include "HMSAdditionCardDialog.h"

void CHMSCardEntryDialog::OnHemaSelect()
{
	CHMSAdditionCardDialog dlg(this);
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK)
	{
		m_szxCardNo = dlg.m_szCardNo;
		m_szxIssueDate = dlg.m_szIssueDate;
		m_szxIssuePlace = dlg.m_szIssuePlace;
		m_szxObject = dlg.m_szxObject;
	}
}
void CHMSCardEntryDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;


	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép sửa thông tin thẻ"));	
		return;
	}


	RecalcPercent();

	if(!IsValidateData())
		return;
	CDbfMap	cardTbl;

	cardTbl.AddField(_T("hd_updatedby"), dfText, 15); 
	cardTbl.AddField(_T("hd_patientno"), dfLong); 
	cardTbl.AddField(_T("hd_docno"), dfLong); 
	cardTbl.AddField(_T("hd_insline"), dfText, 1);
	cardTbl.AddField(_T("hd_emergency"), dfText, 1);
	cardTbl.AddField(_T("hd_over5year"), dfText, 1);
	//Thong tin the 1
	cardTbl.AddField(_T("hc_cardno"), dfText, 25); 
	cardTbl.AddField(_T("hc_cardidx"), dfLong); 
	cardTbl.AddField(_T("hc_regdate"), dfDate); 
	cardTbl.AddField(_T("hc_expdate"), dfDate); 
	cardTbl.AddField(_T("hc_regcode"), dfText, 11); 
	cardTbl.AddField(_T("hc_company"), dfText, 254); 
	cardTbl.AddField(_T("hc_code"), dfText, 3); 
	cardTbl.AddField(_T("hc_discount"), dfInteger); 
	cardTbl.AddField(_T("hc_groupid"), dfLong);
	//THong tin the 2
	cardTbl.AddField(_T("hc_xcardno"), dfText, 25); 
	cardTbl.AddField(_T("hc_xcardidx"), dfLong); 
	cardTbl.AddField(_T("hc_xregdate"), dfDate); 
	cardTbl.AddField(_T("hc_xexpdate"), dfDate); 
	cardTbl.AddField(_T("hc_xregcode"), dfText, 11); 
	cardTbl.AddField(_T("hc_xcompany"), dfText, 254); 
	cardTbl.AddField(_T("hc_xcode"), dfText, 3); 
	cardTbl.AddField(_T("hc_xdiscount"), dfInteger); 
	cardTbl.AddField(_T("hc_xgroupid"), dfLong);

	
	cardTbl.SetValue(_T("hd_updatedby"), pMF->GetCurrentUser());
	cardTbl.SetValue(_T("hd_patientno"), pMF->m_nPatientNo);
	cardTbl.SetValue(_T("hd_docno"), pMF->m_nDocumentNo);
	//hms_doc
	cardTbl.SetValue(_T("hd_insline"), m_bOffLine?_T("Y"):_T("N"));
	cardTbl.SetValue(_T("hd_emergency"), m_bEmergency?_T("Y"):_T("N"));	

	CString tmpStr;
	tmpStr = _T("N");
	if(m_bOver5Year)
		tmpStr = _T("Y");
	else if(m_bOver5YearOpt)
		tmpStr = _T("O");
	cardTbl.SetValue(_T("hd_over5year"), tmpStr);	


	cardTbl.SetValue(_T("hc_cardno"), m_szCardNo);
	cardTbl.SetValue(_T("hc_cardidx"), m_nCardIdx);
	cardTbl.SetValue(_T("hc_regdate"), m_szRegistrationDate);
	cardTbl.SetValue(_T("hc_expdate"), m_szExpiryDate);
	cardTbl.SetValue(_T("hc_regcode"), m_szRegistrationPlaceKey);
	cardTbl.SetValue(_T("hc_company"), m_szCompany);
	cardTbl.SetValue(_T("hc_code"), m_szCode);
	cardTbl.SetValue(_T("hc_discount"), m_nDiscount);
	if(m_nGroupID < 0)
		m_nGroupID = 0;
	cardTbl.SetValue(_T("hc_groupid"), m_nGroupID);

//
	cardTbl.SetValue(_T("hc_xcardno"), m_szCardNo2);
	cardTbl.SetValue(_T("hc_xcardidx"), m_nxCardIdx);
	cardTbl.SetValue(_T("hc_xregdate"), m_szRegDate2);
	cardTbl.SetValue(_T("hc_xexpdate"), m_szExpDate2);
	cardTbl.SetValue(_T("hc_xregcode"), m_szRegistrationPlace2Key);
	cardTbl.SetValue(_T("hc_xcompany"), m_szCompany2);
	cardTbl.SetValue(_T("hc_xcode"), m_szCode2);
	cardTbl.SetValue(_T("hc_xdiscount"), m_nDiscount2);
	if(m_nGroupID2 < 0)
		m_nGroupID2 = 0;
	cardTbl.SetValue(_T("hc_xgroupid"), m_nGroupID2);

	szSQL.Format(_T("HMS_CARD_UPDATE_V2(%s) "), cardTbl.FormatSQL());

	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0) {
		pMF->Rollback();
		ShowMessageBox(_T("Không cập nhật được thông tin thẻ"), MB_OK);
		return;
	}

/*
	m_szRegistrationPlace = m_wndRegistrationPlace.GetCurrent(1);
	m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNo);
	m_hms_docTbl.SetValue(_T("hd_cardidx"), m_nIndex);
	m_hms_docTbl.SetValue(_T("hd_insregdate"), m_szRegistrationDate);
	m_hms_docTbl.SetValue(_T("hd_disrate"), m_nDisrate);
	m_hms_docTbl.SetValue(_T("hd_insline"), m_bOffLine?_T("Y"):_T("N"));
	m_hms_docTbl.SetValue(_T("hd_emergency"), m_bEmergency?_T("Y"):_T("N"));	
	m_hms_docTbl.SetValue(_T("hd_over5year"), m_bOver5Year?_T("Y"):_T("N"));	
	

	//Cap nhat thong tin ho so kham va dieu tri
	szWhere.Format(_T(" WHERE hd_docno=%ld "), pMF->m_nDocumentNo); 

 	szSQL = m_hms_docTbl.GetUpdateSQL(_T("hd_docno,hd_patientno")); 
 	szSQL += szWhere; 
_tprintf(_T("%s"), szSQL);

	int ret = pMF->ExecSQL(szSQL); 	
	if(ret <= 0) {
		pMF->Rollback();
		ShowMessageBox(_T("Can not update document information"), MB_OK);
		return;
	}
*/	

	/*
	CString szEvent, szDesc;
	if(m_szxCardNo != m_szCardNo)
	{
		szEvent.Format(_T("Edit Card Information"));		
		szDesc.Format(_T("[%ld, %s,%s]->[%s, %s], UserID[%s]"), pMF->m_nDocumentNo, m_szPatientName, m_szxCardNo, m_szCardNo, pMF->GetCurrentUser());		
		pMF->SystemLog(szEvent, szDesc);
	}
	
	if(m_bOffLine != m_bOffLineOld)
	{
		CString tmpStr, szOffLine;
		szOffLine = m_bOffLine?_T("Y"):_T("N");
		tmpStr = m_bOffLineOld?_T("Y"):_T("N");

		szEvent.Format(_T("Edit Offline"));		
		szDesc.Format(_T("[%ld, %s]->[%s => %s], UserID[%s]"), pMF->m_nDocumentNo, m_szPatientName, tmpStr, szOffLine, pMF->GetCurrentUser());		
		pMF->SystemLog(szEvent, szDesc);
	}

	if(m_szRegistrationDate.Left(10) != m_szRegistrationDateOld.Left(10))
	{
		szEvent.Format(_T("Edit Registration Date"));		
		szDesc.Format(_T("[%ld, %s, %s]->[%s => %s], UserID[%s]"), pMF->m_nDocumentNo, m_szPatientName, m_szCardNo, m_szRegistrationDateOld.Left(10), m_szRegistrationDate.Left(10), pMF->GetCurrentUser());		
		pMF->SystemLog(szEvent, szDesc);
	}

	if(m_szExpiryDate.Left(10) != m_szExpiryDateOld.Left(10))
	{
		szEvent.Format(_T("Edit Expiry Date"));		
		szDesc.Format(_T("[%ld, %s, %s]->[%s => %s], UserID[%s]"), pMF->m_nDocumentNo, m_szPatientName, m_szCardNo, m_szExpiryDateOld.Left(10), m_szExpiryDate.Left(10), pMF->GetCurrentUser());		
		pMF->SystemLog(szEvent, szDesc);
	}
	*/
	CGuiDialog::OnOK();
} 
void CHMSCardEntryDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CHMSCardEntryDialog::OnAddHMSCardEntryDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSCardEntryDialog::OnEditHMSCardEntryDialog()
{
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
	return 0;
 	if(GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	if(!IsValidateData()) 
 		return -1; 
 	
	if (m_szCardNo.IsEmpty())
		return -1;




 	CString szSQL; 
	CString szWhere; 
	if(m_nIndex == 0){
		szSQL.Format(_T("SELECT hd_cardidx FROM hms_doc WHERE hd_docno=%ld and hd_cardno='%s'"),  pMF->m_nDocumentNo, m_szCardNo  );
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("hd_cardidx"), m_nIndex);
	}
	
	if(m_nIndex > 0)
	{
		szWhere.Format(_T(" WHERE hc_patientno=%ld and hc_idx=%d "), m_nPatientNo, m_nIndex); 
 		szSQL = m_hms_cardTbl.GetUpdateSQL(_T("hc_createdby,hc_createddate,hc_patientno,hc_idx,hc_docno")); 
 		szSQL += szWhere;		
 		int ret = pMF->ExecSQL(szSQL); 
_fmsg(_T("%s"), szSQL);
 		if(ret > 0) 
 		{			
			CString szOver5Year = _T("N");
			if(m_bOver5Year)
				szOver5Year = _T("Y");

			szSQL.Format(_T("UPDATE hms_doc SET hd_emergency='%s', hd_insline='%s', hd_disrate=%d, hd_over5year='%s' ") \
				_T("WHERE hd_docno=%ld "), 
				m_bEmergency?_T("Y"):_T("N"), m_bOffLine?_T("Y"):_T("N"),m_nDisrate, szOver5Year, pMF->m_nDocumentNo);
		
			pMF->ExecSQL(szSQL);
			SetMode(VM_VIEW);
 		} 
		return ret; 
	}

	return 1;
 	

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

/*
int	CHMSCardEntryDialog::ParseCard(CString szObject, CString szCardNo, CString &szCode, int &nDiscount){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szCardFormat, szCondition, szCode, szInsCode;
	bool bIsFound = false;
	int nDiscount=0;
	UpdateData(true);
//	if(GetMode() == VM_ADD)
//		szSQL.Format(_T("SELECT * FROM hms_object_line WHERE length(hol_cardfmt)=%d "), szCardNo.GetLength());
//	else
	szSQL.Format(_T("SELECT * FROM hms_object_line WHERE hol_type='%s' AND length(hol_cardfmt)=%d "), m_szObject, szCardNo.GetLength());
//_fmsg(_T("%s"), szSQL);
	int ret = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("hol_cardfmt"), szCardFormat);
		rs.GetValue(_T("hol_condition"), szCondition);
		rs.GetValue(_T("hol_code"), szInsCode);
		rs.GetValue(_T("hol_discount"), nDiscount);
		bool bValid = true;
		szCode.Empty();
		for (int i =0; i < szCardFormat.GetLength(); i++){
			if(szCardFormat[i] == _T('$') && _istalnum(szCardNo[i])==0 ){
				bValid = false;
				break;
			}
			else if(szCardFormat[i] == _T('A') && _istalpha(szCardNo[i])==0 ){
				bValid = false;
				break;
			}
			else if(szCardFormat[i] == _T('#') && _istdigit(szCardNo[i])==0 ){

				bValid = false;
				break;
			}
			if(szCondition[i] == _T('C')){
				szCode += szCardNo[i];
			}
		}

		if(szCode != szInsCode){
			bValid = false;
		}
		if(bValid)
		{
			bIsFound = true;
			break;
		}

		rs.MoveNext();
		
	}

	if(bIsFound)
	{
		m_szCode = szInsCode;
		m_nDiscount = nDiscount;
		UpdateData(false);
		return 1;
	}
	return -1;
}

*/
#include "HMSHospitalDialog.h"
#include "HMSHospitals.h"
void CHMSCardEntryDialog::OnRegistrationPlaceLabelClick()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(!pMF->CheckPermission(_T("01.15")))
	{
			ShowMessageBox(_T("Permission Denined."), 0);
			return;
	}

	CHMSHospitalListSetupDialog dlg(this);
	dlg.m_szID = m_szCardNo.Right(5);
	if (dlg.DoModal() == IDOK)
	{
		m_szRegistrationPlaceKey = dlg.m_szID;
		OnRegistrationPlaceLoadData();
		m_wndCompany.SetFocus();		
		UpdateData(false);
	}
}

void CHMSCardEntryDialog::OnOffLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_bOffLine = !m_bOffLine;

	m_nDisrate = m_nDiscount = m_nCardDiscount;
	
	if(!m_bOffLine){
		m_wndHospital.EnableWindow(TRUE);
		m_wndDisease.EnableWindow(TRUE);
	}
	else
	{
		m_wndHospital.EnableWindow(FALSE);
		m_wndDisease.EnableWindow(FALSE);
	}

	if(m_bEmergency)
	{
		m_nDisrate = m_nCardDiscount;		
	}
	else
	{
		if(m_bOffLine)
			m_nDisrate = m_nCardDiscount*pMF->m_nInsOffLinePayment/100;
	}

	UpdateData(FALSE);
	
	RecalcPercent();
}

void CHMSCardEntryDialog::OnEmergencySelect()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	if(!m_bEditEmergency)
	{
		return;
	}
	m_bEmergency = !m_bEmergency;
	m_nDisrate = m_nDiscount = m_nCardDiscount;

	if(m_bEmergency)
	{
		m_nDisrate = m_nCardDiscount;
	}
	else
	{
		m_nDisrate = m_nCardDiscount*pMF->m_nInsOffLinePayment/100;
	}

	UpdateData(FALSE);

	RecalcPercent();
}


void CHMSCardEntryDialog::OnOver5YearSelect()
{
	RecalcPercent();
}
int CHMSCardEntryDialog::ParseCard(CString szObject, CString szCardNo, CString& szRetCode, int& nInsDiscount, int& nGroupID)
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szCardFormat, szCondition, szCode, szInsCode, szType;
	bool bIsFound = false;
	int nDiscount=0;
	nGroupID = 0;
	UpdateData(true);
	
	if(szObject.IsEmpty())
		szSQL.Format(_T("SELECT * FROM hms_object_line WHERE length(hol_cardfmt)=%d ORDER BY hol_type,hol_cardfmt, length(hol_code) DESC "), szCardNo.GetLength());
	else
		szSQL.Format(_T("SELECT * FROM hms_object_line WHERE hol_type='%s' AND length(hol_cardfmt)=%d ORDER BY hol_type,hol_cardfmt, length(hol_code) DESC "), szObject, szCardNo.GetLength());

	int ret = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){
		rs.GetValue(_T("hol_cardfmt"), szCardFormat);
		rs.GetValue(_T("hol_condition"), szCondition);
		rs.GetValue(_T("hol_code"), szInsCode);
		rs.GetValue(_T("hol_type"), szType);
		rs.GetValue(_T("hol_discount"), nDiscount);
		rs.GetValue(_T("hol_group"), nGroupID);
		bool bValid = true;
		szCode.Empty();
		for (int i =0; i < szCardFormat.GetLength(); i++)
		{
			if(szCardFormat[i] == _T('$') && _istalnum(szCardNo[i])==0 ){
				bValid = false;
				break;
			}
			else if(szCardFormat[i] == _T('A') && _istalpha(szCardNo[i])==0 ){
				bValid = false;
				break;
			}
			else if(szCardFormat[i] == _T('#') && _istdigit(szCardNo[i])==0 ){
				bValid = false;
				break;
			}
			if(szCondition[i] == _T('C')){
				szCode += szCardNo[i];
			}
		}
		
		if(szCode != szInsCode){
			bValid = false;
		}
		if(bValid)
		{
			bIsFound = true;
			break;
		}

		rs.MoveNext();
		
	}

	if(bIsFound)
	{
		if(szObject.IsEmpty())
		{
			szRetCode = szType;
		}
		else
			szRetCode = szInsCode;
		
		nInsDiscount = nDiscount;
		return 1;
	}
	return -1;
}



void CHMSCardEntryDialog::EnableSecondaryCard(BOOL bEnable)
{
	
	m_wndCardNo2.EnableWindow(bEnable);
	m_wndRegDate2.EnableWindow(bEnable);
	m_wndExpDate2.EnableWindow(bEnable);
	m_wndRegistrationPlace2.EnableWindow(bEnable);
	m_wndCompany2.EnableWindow(bEnable);
	m_wndUpdate.EnableWindow(bEnable);
	m_wndCardNo2.SetCheckValue(bEnable);
	m_wndRegDate2.SetCheckValue(bEnable);
	m_wndExpDate2.SetCheckValue(bEnable);
	m_wndRegistrationPlace2.SetCheckValue(bEnable);
	m_wndCompany2.SetCheckValue(FALSE);
	//m_wndSave.EnableWindow(!bEnable);

}


void CHMSCardEntryDialog::RecalcPercent()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(TRUE);
	int nPercent = m_nCardDiscount;

	if(m_bOver5Year)
	{
		nPercent = 100;
	}
	if(m_bEmergency)
	{
			m_nDisrate = nPercent;
	}
	else
	{
		if(m_bOffLine)
			m_nDisrate = nPercent*pMF->m_nInsOffLinePayment/100;
		else
			m_nDisrate = nPercent;
	}
	UpdateData(FALSE);
}
void CHMSCardEntryDialog::OnCheckInsSelect()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

	UpdateData(true);

	if(m_szCardNo.IsEmpty())
		return ;

	int nCount= OnCardNoCheckValue();
	

	CString szJsonData,szData;
	JSONVALUE jRequest, jResponse,jRCard_info;
	JSONVALUE j,jj;
	std::wstring json_string;	

	jRCard_info["maThe"] = m_szCardNo.Left(15);	
	jRCard_info["hoTen"] = m_szPatientName;
	_tprintf(_T("%s"),m_szBirthDate);
	if (!m_szBirthDate.IsEmpty())
	{
		jRCard_info["ngaySinh"] = m_szBirthDate.Left(4);
	}
	else
	{
		jRCard_info["ngaySinh"] = _T("1752");
	}
	std::wstring jStr;
	jRCard_info.ToString(jStr);
	szJsonData.Format(_T("%s"), jStr.c_str());

	
	bool res = m_insCheckin.NhanLichSuKCB2018(szJsonData, &jResponse);
	if (!res)
	{
		AfxMessageBox(_T("NhanLichSuKCB2018 error!"));
		return;
	}
	
	CHMSCardInfoCheckIns dlg(this);

	jResponse.ToString(jStr);		
	szData.Format(_T("%s"), jStr.c_str());
	CString tmpStr, tmpStr1;

	j= jResponse.At(_T("maKetQua"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	int nMaloi=ToInt(tmpStr);

		j= jResponse.At(_T("ghiChu"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szNOI_DUNG=tmpStr;
		szData.Format(_T("N\x1ED9i \x64ung: %s"),tmpStr);
		CStringToken tk(tmpStr, _T("!"));
		if(tk.GetSize() > 0)
		{
			tk.GetAt(0,tmpStr);
			dlg.m_szCanhbao=tmpStr;

		}

		j= jResponse.At(_T("hoTen"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szHO_TEN=tmpStr;
		szData.AppendFormat(_T("\r\nH\x1ECD t\xEAn: %s"),tmpStr);

		j= jResponse.At(_T("ngayDu5Nam"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		CString szdateover5year;
		szdateover5year=tmpStr;
		//szdateover5year.Replace(_T("/"),_T("-"));
		//m_szFromDate=CDate::Convert(szdateover5year, ddmmyyyy, yyyymmdd);
		dlg.m_szNgayDu5nam=m_szFromDate;


		j= jResponse.At(_T("ngaySinh"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szNGAY_SINH=tmpStr;

		szData.AppendFormat(_T("\r\nNg\xE0y sinh: %s"),tmpStr);


		j= jResponse.At(_T("gioiTinh"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		tmpStr.Trim();
//		m_szSexKey = tmpStr== _T("Nam")?_T("M"):_T("F");
		dlg.m_szGIOI_TINH=tmpStr;
		szData.AppendFormat(_T("\r\nGi\x1EDBi t\xEDnh: %s"),tmpStr);


		j= jResponse.At(_T("diaChi"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		tmpStr.Trim();
		//m_szCompany=tmpStr;
		dlg.m_szDIA_CHI=tmpStr;
		szData.AppendFormat(_T("\r\n\x110\x1ECB\x61 \x63h\x1EC9: %s"),tmpStr);

		j= jResponse.At(_T("maDKBD"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		tmpStr.Trim();
		//m_szRegistrationPlaceKey=tmpStr;
		dlg.m_szMADKBD=tmpStr;
		szData.AppendFormat(_T("\r\nM\xE3 \x110K\x42\x110: %s"),tmpStr);

		
		j= jResponse.At(_T("gtTheTu"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		CString szregdate;
		szregdate=tmpStr;
		szregdate.Replace(_T("/"),_T("-"));
		//m_szRegistrationDate=CDate::Convert(szregdate, ddmmyyyy, yyyymmdd);
		szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"),tmpStr);
		dlg.m_szTU_NGAY1=tmpStr;


		j= jResponse.At(_T("gtTheDen"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		CString szexpdate;
		szexpdate=tmpStr;
		dlg.m_szDEN_NGAY1=tmpStr;
		//m_szExpiryDate=CDate::Convert(szexpdate, ddmmyyyy, yyyymmdd);
		szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"),tmpStr);


		j= jResponse.At(_T("maKV"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szMA_KV=tmpStr;
		szData.AppendFormat(_T("\r\nM\xE3 KV: %s"),tmpStr);


		j= jResponse.At(_T("maTheCu"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szTHE_CU=tmpStr;
		szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB \x63\x169: %s"),tmpStr);

		j= jResponse.At(_T("maTheMoi"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szTHE_MOI=tmpStr;
		szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB m\x1EDBi: %s"),tmpStr);


		
		j= jResponse.At(_T("gtTheTuMoi"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szTU_NGAY2=tmpStr;
		szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"),tmpStr);


		j= jResponse.At(_T("gtTheDenMoi"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szDEN_NGAY2=tmpStr;
		szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"),tmpStr);

		j= jResponse.At(_T("dsLichSuKCB2018"));
		dlg.m_json = j;
	if(nMaloi==0 && GetMode()== VM_ADD)
	{
		//ShowMessageBox(szData);
		dlg.DoModal();
	//	UpdateData(false);

	}else
	{
		//ShowMessageBox(szData);
		dlg.DoModal();
	}

}

void CHMSCardEntryDialog::OnCheckInsSelect2()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

	UpdateData(true);

	if(m_szCardNo.IsEmpty())
		return ;

	int nCount= OnCardNoCheckValue();
	

	CString szJsonData,szData;
	JSONVALUE jRequest, jResponse,jRCard_info;
	JSONVALUE j,jj;
	std::wstring json_string;	

	jRCard_info["maThe"] = m_szCardNo2.Left(15);	
	jRCard_info["hoTen"] = m_szPatientName;
	_tprintf(_T("%s"),m_szBirthDate);
	if (!m_szBirthDate.IsEmpty())
	{
		jRCard_info["ngaySinh"] = m_szBirthDate.Left(4);
	}
	else
	{
		jRCard_info["ngaySinh"] = _T("1752");
	}
	std::wstring jStr;
	jRCard_info.ToString(jStr);
	szJsonData.Format(_T("%s"), jStr.c_str());

	CHMSCardInfoCheckIns dlg(this);
	bool res = m_insCheckin.NhanLichSuKCB2018(szJsonData, &jResponse);
	if (!res)
	{
		AfxMessageBox(_T("NhanLichSuKCB2018 error!"));
		return;
	}
	jResponse.ToString(jStr);		
	szData.Format(_T("%s"), jStr.c_str());
	CString tmpStr, tmpStr1;

	j= jResponse.At(_T("maKetQua"));
	j.ToString(json_string);
	tmpStr.Format(_T("%s"), json_string.c_str());
	int nMaloi=ToInt(tmpStr);

		j= jResponse.At(_T("ghiChu"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szNOI_DUNG=tmpStr;
		szData.Format(_T("N\x1ED9i \x64ung: %s"),tmpStr);
		CStringToken tk(tmpStr, _T("!"));
		if(tk.GetSize() > 0)
		{
			tk.GetAt(0,tmpStr);
			dlg.m_szCanhbao=tmpStr;

		}

		j= jResponse.At(_T("hoTen"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szHO_TEN=tmpStr;
		szData.AppendFormat(_T("\r\nH\x1ECD t\xEAn: %s"),tmpStr);


		j= jResponse.At(_T("ngaySinh"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szNGAY_SINH=tmpStr;
		szData.AppendFormat(_T("\r\nNg\xE0y sinh: %s"),tmpStr);


		j= jResponse.At(_T("gioiTinh"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		tmpStr.Trim();
//		m_szSexKey = tmpStr== _T("Nam")?_T("M"):_T("F");
		dlg.m_szGIOI_TINH=tmpStr;
		szData.AppendFormat(_T("\r\nGi\x1EDBi t\xEDnh: %s"),tmpStr);


		j= jResponse.At(_T("diaChi"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		tmpStr.Trim();
		//m_szCompany2=tmpStr;
		dlg.m_szDIA_CHI=tmpStr;
		szData.AppendFormat(_T("\r\n\x110\x1ECB\x61 \x63h\x1EC9: %s"),tmpStr);

		j= jResponse.At(_T("maDKBD"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		tmpStr.Trim();
		//m_szRegistrationPlaceKey=tmpStr;
		dlg.m_szMADKBD=tmpStr;
		szData.AppendFormat(_T("\r\nM\xE3 \x110K\x42\x110: %s"),tmpStr);

		
		j= jResponse.At(_T("gtTheTu"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		CString szregdate;
		szregdate=tmpStr;
		dlg.m_szTU_NGAY1=tmpStr;
		//szregdate.Replace(_T("/"),_T("-"));
		//m_szRegistrationDate=CDate::Convert(szregdate, ddmmyyyy, yyyymmdd);
		szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"),tmpStr);


		j= jResponse.At(_T("gtTheDen"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		CString szexpdate;
		szexpdate=tmpStr;
		dlg.m_szDEN_NGAY1=tmpStr;
		//m_szExpiryDate=CDate::Convert(szexpdate, ddmmyyyy, yyyymmdd);
		szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"),tmpStr);


		j= jResponse.At(_T("maKV"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szMA_KV=tmpStr;
		szData.AppendFormat(_T("\r\nM\xE3 KV: %s"),tmpStr);


		j= jResponse.At(_T("maTheCu"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szTHE_CU=tmpStr;
		szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB \x63\x169: %s"),tmpStr);

		j= jResponse.At(_T("maTheMoi"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szTHE_MOI=tmpStr;
		szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB m\x1EDBi: %s"),tmpStr);


		
		j= jResponse.At(_T("gtTheTuMoi"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szTU_NGAY2=tmpStr;
		szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"),tmpStr);


		j= jResponse.At(_T("gtTheDenMoi"));
		j.ToString(json_string);
		tmpStr.Format(_T("%s"), json_string.c_str());
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		dlg.m_szDEN_NGAY2=tmpStr;
		szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"),tmpStr);
		j= jResponse.At(_T("dsLichSuKCB2018"));
		dlg.m_json= j;
	if(nMaloi==0 && GetMode()== VM_ADD)
	{
		dlg.DoModal();
		//ShowMessageBox(szData);
		//UpdateData(false);

	}else
	{
		dlg.DoModal();
		//ShowMessageBox(szData);
	}

}