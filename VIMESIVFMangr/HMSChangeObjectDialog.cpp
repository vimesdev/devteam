#include "HMSChangeObjectDialog.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSChangeObjectDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnRegistrationDateChangeFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnRegistrationDateChange();
} */
/*static void _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnRegistrationDateSetfocus();} */ 
/*static void _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static void _OnExpiryDateChangeFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnExpiryDateChange();
} */
/*static void _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnExpiryDateSetfocus();} */ 
/*static void _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnExpiryDateCheckValue();
} 
static void _OnRegistrationPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSChangeObjectDialog* )pWnd)->OnRegistrationPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRegistrationPlaceSelendokFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnRegistrationPlaceSelendok();
}
/*static void _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
/*static void _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
static long _OnRegistrationPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnRegistrationPlaceLoadData();
}
/*static void _OnRegistrationPlaceAddNewFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnRegistrationPlaceAddNew();
}*/
/*static void _OnCompanyChangeFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnCompanyChange();
} */
/*static void _OnCompanySetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnCompanySetfocus();} */ 
/*static void _OnCompanyKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnCompanyKillfocus();
} */
static int _OnCompanyCheckValueFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnCompanyCheckValue();
} 

static int _OnHospitalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSChangeObjectDialog* )pWnd)->OnHospitalSelectChange(nOldItemSel, nNewItemSel);
} 
//static int _OnHospitalSelendokFnc(CWnd *pWnd){
	// return ((CHMSChangeObjectDialog *)pWnd)->OnHospitalSelendok();
//}
/*static int _OnHospitalSetfocusFnc(CWnd *pWnd){
	 return ((CHMSChangeObjectDialog *)pWnd)->OnHospitalKillfocus();
}*/
/*static int _OnHospitalKillfocusFnc(CWnd *pWnd){
	 return ((CHMSChangeObjectDialog *)pWnd)->OnHospitalKillfocus();
}*/
static int _OnHospitalLoadDataFnc(CWnd *pWnd){
	 return ((CHMSChangeObjectDialog *)pWnd)->OnHospitalLoadData();
}
/*static int _OnHospitalAddNewFnc(CWnd *pWnd){
	 return ((CHMSChangeObjectDialog *)pWnd)->OnHospitalAddNew();
}*/

/*static int _OnDiseaseChangeFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnDiseaseChange();
} */
/*static int _OnDiseaseSetfocusFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnDiseaseKillfocus();} */ 
/*static int _OnDiseaseKillfocusFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnDiseaseKillfocus();
} */
static int _OnDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnDiseaseCheckValue();
} 

static void _OnOffLineSelectFnc(CWnd *pWnd){
	 ((CHMSChangeObjectDialog*)pWnd)->OnOffLineSelect();
}
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CHMSChangeObjectDialog*)pWnd)->OnEmergencySelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSChangeObjectDialog *pVw = (CHMSChangeObjectDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSChangeObjectDialog *pVw = (CHMSChangeObjectDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnObjectCurrentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSChangeObjectDialog* )pWnd)->OnObjectCurrentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectCurrentSelendokFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectCurrentSelendok();
}
/*static void _OnObjectCurrentSetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectCurrentKillfocus();
}*/
/*static void _OnObjectCurrentKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectCurrentKillfocus();
}*/
static long _OnObjectCurrentLoadDataFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnObjectCurrentLoadData();
}
/*static void _OnObjectCurrentAddNewFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectCurrentAddNew();
}*/
static void _OnObjectNewSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSChangeObjectDialog* )pWnd)->OnObjectNewSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectNewSelendokFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectNewSelendok();
}
/*static void _OnObjectNewSetfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectNewKillfocus();
}*/
/*static void _OnObjectNewKillfocusFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectNewKillfocus();
}*/
static long _OnObjectNewLoadDataFnc(CWnd *pWnd){
	return ((CHMSChangeObjectDialog *)pWnd)->OnObjectNewLoadData();
}
/*static void _OnObjectNewAddNewFnc(CWnd *pWnd){
	((CHMSChangeObjectDialog *)pWnd)->OnObjectNewAddNew();
}*/
static int _OnAddHMSChangeObjectDialogFnc(CWnd *pWnd){
	 return ((CHMSChangeObjectDialog*)pWnd)->OnAddHMSChangeObjectDialog();
} 
static int _OnEditHMSChangeObjectDialogFnc(CWnd *pWnd){
	 return ((CHMSChangeObjectDialog*)pWnd)->OnEditHMSChangeObjectDialog();
} 
static int _OnDeleteHMSChangeObjectDialogFnc(CWnd *pWnd){
	 return ((CHMSChangeObjectDialog*)pWnd)->OnDeleteHMSChangeObjectDialog();
} 
static int _OnSaveHMSChangeObjectDialogFnc(CWnd *pWnd){
	 return ((CHMSChangeObjectDialog*)pWnd)->OnSaveHMSChangeObjectDialog();
} 
static int _OnCancelHMSChangeObjectDialogFnc(CWnd *pWnd){
	 return ((CHMSChangeObjectDialog*)pWnd)->OnCancelHMSChangeObjectDialog();
} 
CHMSChangeObjectDialog::CHMSChangeObjectDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSChangeObjectDialog::~CHMSChangeObjectDialog(){
}
void CHMSChangeObjectDialog::OnCreateComponents(){
	m_wndCardNumberInformation.Create(this, _T("Card Number Information"), 5, 95, 460, 300);
	m_wndObjectInformation.Create(this, _T("Object Information"), 5, 5, 460, 90);
	m_wndTransferInformation.Create(this, _T("Transfer Information"), 5, 305, 460, 390);
	m_wndObjectCurrentLabel.Create(this, _T("Object Current"), 10, 30, 130, 55);
	m_wndObjectCurrent.Create(this,135, 30, 455, 55); 
	m_wndObjectNewLabel.Create(this, _T("Object New"), 10, 60, 130, 85);
	m_wndObjectNew.Create(this,135, 60, 455, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 120, 130, 145);
	m_wndPatientName.Create(this,135, 120, 455, 145); 
	//m_wndObject.Create(this,135, 120, 455, 145); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 150, 130, 175);
	m_wndCardNo.Create(this,135, 150, 455, 175); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 180, 130, 205);
	m_wndCode.Create(this,135, 180, 245, 205); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 250, 180, 340, 205);
	m_wndDiscount.Create(this,345, 180, 420, 205); 
	m_wndPercentLabel.Create(this, _T("%"), 425, 180, 455, 205);
	m_wndRegistrationDateLabel.Create(this, _T("Registration Date"), 10, 210, 130, 235);
	m_wndRegistrationDate.Create(this,135, 210, 245, 235); 
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 250, 210, 340, 235);
	m_wndExpiryDate.Create(this,345, 210, 455, 235); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 10, 240, 130, 265);
	m_wndRegistrationPlace.Create(this,135, 240, 455, 265); 
	m_wndCompanyLabel.Create(this, _T("Company"), 10, 270, 130, 295);
	m_wndCompany.Create(this,135, 270, 455, 295); 	
	m_wndHospitalLabel.Create(this, _T("Hospital"), 10, 330, 130, 355);
	m_wndHospital.Create(this,135, 330, 455, 355); 
	m_wndDiseaseLabel.Create(this, _T("Disease"), 10, 360, 130, 385);
	m_wndDisease.Create(this,135, 360, 455, 385); 
	m_wndOffLine.Create(this, _T("Out Line"), 10, 395, 130, 420);
	m_wndEmergency.Create(this, _T("Emergency"), 135, 395, 255, 420);
	m_wndSave.Create(this, _T("&Ok"), 295, 395, 375, 420);
	m_wndClose.Create(this, _T("&Close"), 380, 395, 460, 420);

}
void CHMSChangeObjectDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	//m_wndObject.SetCheckValue(true);
	//m_wndObject.LimitText(1024);
	m_wndObjectNew.SetCheckValue(true);

	m_wndCardNo.SetLimitText(20);
	m_wndCardNo.SetTextColor(RGB(0, 0, 255));
	m_wndCardNo.SetCheckValue(true);
	m_wndCardNo.ModifyStyle(0, ES_UPPERCASE);

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
//	m_wndExpiryDate.SetMin(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndRegistrationPlaceLabel.SetHyperlink(true);
	
	m_wndRegistrationPlace.LimitText(128);
	m_wndPatientName.SetReadOnly(true);
	m_wndCode.SetLimitText(3);
	m_wndCode.SetReadOnly(true);

	//m_wndHospital.SetCheckValue(true);
	//m_wndDisease.SetCheckValue(true);

	m_wndPatientName.SetReadOnly(true);;
	m_wndDiscount.SetReadOnly(true);	
	m_wndObjectCurrent.SetReadOnly(true);
	m_wndCode.SetReadOnly(true);

	m_wndHospital.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndHospital.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndObjectCurrent.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndObjectCurrent.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndObjectCurrent.InsertColumn(2, _T("Has Card"), CFMT_TEXT, 0);
	m_wndObjectCurrent.InsertColumn(3, _T("type"), CFMT_TEXT, 0);
	m_wndObjectCurrent.InsertColumn(4, _T("discount"), CFMT_NUMBER, 0);

	m_wndObjectNew.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndObjectNew.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndObjectNew.InsertColumn(2, _T("Has Card"), CFMT_TEXT, 0);
	m_wndObjectNew.InsertColumn(3, _T("type"), CFMT_TEXT, 0);
	m_wndObjectNew.InsertColumn(4, _T("discount"), CFMT_NUMBER, 0);

	m_wndOffLine.ModifyStyle(WS_TABSTOP, 0);
	m_wndRegistrationPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndRegistrationPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	//hms_doc: Thong tin tung dot kham cua benh nhan
	m_hms_docTbl.SetTableName(_T("hms_doc"));	
	m_hms_docTbl.AddField(_T("hd_object"), dfText, 3); 
	m_hms_docTbl.AddField(_T("hd_cardno"), dfText, 25); 
	m_hms_docTbl.AddField(_T("hd_cardidx"), dfLong); 
	m_hms_docTbl.AddField(_T("hd_insregdate"), dfDate); 
	m_hms_docTbl.AddField(_T("hd_disrate"), dfInteger); 
	m_hms_docTbl.AddField(_T("hd_insline"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hd_emergency"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hd_transplace"), dfText, 254); 
	m_hms_docTbl.AddField(_T("hd_transdiagn"), dfText, 245); 
	m_hms_docTbl.AddField(_T("hd_transplaceid"), dfText, 7); 
	

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
	

}
void CHMSChangeObjectDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
//	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndObjectCurrent.SetEvent(WE_SELENDOK, _OnObjectCurrentSelendokFnc);
	//m_wndObjectCurrent.SetEvent(WE_SETFOCUS, _OnObjectCurrentSetfocusFnc);
	//m_wndObjectCurrent.SetEvent(WE_KILLFOCUS, _OnObjectCurrentKillfocusFnc);
	m_wndObjectCurrent.SetEvent(WE_SELCHANGE, _OnObjectCurrentSelectChangeFnc);
	m_wndObjectCurrent.SetEvent(WE_LOADDATA, _OnObjectCurrentLoadDataFnc);
	//m_wndObjectCurrent.SetEvent(WE_ADDNEW, _OnObjectCurrentAddNewFnc);
	m_wndObjectNew.SetEvent(WE_SELENDOK, _OnObjectNewSelendokFnc);
	//m_wndObjectNew.SetEvent(WE_SETFOCUS, _OnObjectNewSetfocusFnc);
	//m_wndObjectNew.SetEvent(WE_KILLFOCUS, _OnObjectNewKillfocusFnc);
	m_wndObjectNew.SetEvent(WE_SELCHANGE, _OnObjectNewSelectChangeFnc);
	m_wndObjectNew.SetEvent(WE_LOADDATA, _OnObjectNewLoadDataFnc);
	//m_wndObjectNew.SetEvent(WE_ADDNEW, _OnObjectNewAddNewFnc);

	//	m_wndHospital.SetEvent(WE_SELENDOK, _OnHospitalSelendokFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_SELCHANGE, _OnHospitalSelectChangeFnc);
	m_wndHospital.SetEvent(WE_LOADDATA, _OnHospitalLoadDataFnc);
	//m_wndHospital.SetEvent(WE_ADDNEW, _OnHospitalAddNewFnc);

	//m_wndDisease.SetEvent(WE_CHANGE, _OnDiseaseChangeFnc);
	//m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
	//m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
	m_wndDisease.SetEvent(WE_CHECKVALUE, _OnDiseaseCheckValueFnc);


	SetMode(VM_NONE);
	GetDataToScreen();

}
void CHMSChangeObjectDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
//	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_TextEx(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlaceKey);
	DDX_Text(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompany);
	DDX_Check(pDX, m_wndOffLine.GetDlgCtrlID(), m_bOffLine);
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);
	DDX_TextEx(pDX, m_wndObjectCurrent.GetDlgCtrlID(), m_szObjectCurrentKey);
	DDX_TextEx(pDX, m_wndObjectNew.GetDlgCtrlID(), m_szObjectNewKey);
	DDX_TextEx(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospital);
	DDX_Text(pDX, m_wndDisease.GetDlgCtrlID(), m_szDisease);
}
void CHMSChangeObjectDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT hc_cardno, hc_regdate, hc_expdate, hc_regcode, hc_company, hc_code, hc_discount, hc_groupid,") \
				 _T(" hd_object obj_id, get_patientname(hd_docno) patient_name") \
				 _T(" FROM hms_card LEFT JOIN hms_doc ON (hd_patientno = hc_patientno AND hc_idx = hd_cardidx) WHERE hc_patientno=%ld AND hc_idx=%d"), pMF->m_nPatientNo, m_nIndex);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		szSQL.Format(_T(" SELECT hc_cardno, hc_regdate, hc_expdate, hc_regcode, hc_company, hc_code, hc_discount, hc_groupid,") \
					 _T(" hd_object obj_id, get_patientname(hd_docno) patient_name") \
					 _T(" FROM hms_card LEFT JOIN hms_doc ON (hd_patientno = hc_patientno AND hc_idx = hd_cardidx) WHERE hc_patientno=%ld "), pMF->m_nPatientNo);
		rs.ExecSQL(szSQL);
	}
	if(!rs.IsEOF()){
		rs.GetValue(_T("hc_cardno"),  m_szCardNo);
		rs.GetValue(_T("hc_regdate"), m_szRegistrationDate); 
		rs.GetValue(_T("hc_expdate"), m_szExpiryDate); 
		rs.GetValue(_T("hc_regcode"), m_szRegistrationPlaceKey); 
		rs.GetValue(_T("hc_company"), m_szCompany); 
		rs.GetValue(_T("hc_code"), m_szCode); 
		rs.GetValue(_T("hc_discount"), m_nCardDiscount); 
		rs.GetValue(_T("hc_groupid"), m_nGroupID); 
		rs.GetValue(_T("patient_name"), m_szPatientName);
		rs.GetValue(_T("obj_id"), m_szObjectKey);
		m_szOldCardNo = m_szCardNo;

//Kiem tra neu co hoa don thu phi thi khong cho phep sua the nua
		/*szSQL.Format(_T("SELECT count(*) FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_cardidx=%ld and hfi_type ='P' "), pMF->m_nDocumentNo, m_nIndex);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			m_wndCardNo.EnableWindow(false);
			m_wndOffLine.EnableWindow(false);
		}*/

		m_szCompany.Trim();
		if(m_szCompany.IsEmpty())
			m_szCompany = m_szWorkPlace;
		
		m_nDiscount = m_nCardDiscount;

		szSQL.Format(_T("SELECT hd_emergency, hd_disrate, hd_transdiagn, hd_transplaceid,hd_insline, ho_type as objecttype ") \
		_T("FROM hms_doc ") \
		_T("LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("WHERE hd_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		CString tmpStr, szOfline;
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hd_emergency"), tmpStr);
			rs.GetValue(_T("hd_disrate"), m_nDisrate);
			rs.GetValue(_T("hd_insline"), szOfline);
			rs.GetValue(_T("objecttype"), m_szObjectType);
			rs.GetValue(_T("hd_transdiagn"), m_szDisease);
			rs.GetValue(_T("hd_transplaceid"), m_szHospital);

			if(szOfline == _T("Y"))
				m_bOffLine = TRUE;
			else
				m_bOffLine = FALSE;

			if(tmpStr == _T("Y"))
				m_bEmergency = TRUE;
			else
				m_bEmergency = FALSE;					
		}

		if(m_bEmergency)
		{
			m_nDiscount = m_nCardDiscount;
		}
		else
		{
			if(m_bOffLine)
				m_nDiscount = m_nCardDiscount*pMF->m_nInsOffLinePayment/100;
		}

		UpdateData(false);
	}

}
void CHMSChangeObjectDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_cardTbl.SetValue(_T("hc_updatedby"), pMF->GetCurrentUser()); 
	m_hms_cardTbl.SetValue(_T("hc_updateddate"), pMF->GetSysDateTime()); 
	m_hms_cardTbl.SetValue(_T("hc_patientno"),  pMF->m_nPatientNo);
	m_hms_cardTbl.SetValue(_T("hc_cardno"),  m_szCardNo);
	m_hms_cardTbl.SetValue(_T("hc_idx"),  m_nCardIdx); 
	m_hms_cardTbl.SetValue(_T("hc_regdate"), m_szRegistrationDate); 
	m_hms_cardTbl.SetValue(_T("hc_expdate"), m_szExpiryDate); 
	m_hms_cardTbl.SetValue(_T("hc_regcode"), m_szRegistrationPlaceKey); 	
	m_hms_cardTbl.SetValue(_T("hc_company"), m_szCompany); 
	m_hms_cardTbl.SetValue(_T("hc_code"), m_szCode); 
	m_hms_cardTbl.SetValue(_T("hc_discount"), m_nDiscount); 
	m_hms_cardTbl.SetValue(_T("hc_groupid"), m_nGroupID); 


	m_hms_docTbl.SetValue(_T("hd_object"), m_szObjectNewKey);
	m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNo);
	m_hms_docTbl.SetValue(_T("hd_cardidx"), m_nCardIdx);
	m_hms_docTbl.SetValue(_T("hd_insregdate"), m_szRegistrationDate);
	m_hms_docTbl.SetValue(_T("hd_disrate"), m_nDisrate);
	m_hms_docTbl.SetValue(_T("hd_insline"), m_szOffLine);	
	m_hms_docTbl.SetValue(_T("hd_emergency"), m_szEmergency);
	m_hms_docTbl.SetValue(_T("hd_transplace"), m_wndHospital.GetCurrent(1)); 
	m_hms_docTbl.SetValue(_T("hd_transplaceid"), m_szHospital); 
	m_hms_docTbl.SetValue(_T("hd_transdiagn"), m_szDisease); 
	


}
void CHMSChangeObjectDialog::SetDefaultValues(){
	m_szPatientName.Empty();
	m_szObjectKey.Empty();
	m_szCardNo.Empty();
	m_szCode.Empty();
	m_nDiscount=0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlaceKey.Empty();
	m_szCompany.Empty();
	m_bOffLine=FALSE;
	m_bEmergency=FALSE;
	//m_szObjectCurrentKey.Empty();
	//m_szObjectNewKey.Empty();
	m_szHasCard.Empty();
	m_nCardIdx = 0;
	m_nIndex =0;
	m_nDisrate=0;
}
int CHMSChangeObjectDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);			
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndObjectNew.EnableWindow(TRUE);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);			
			m_wndObjectNew.EnableWindow(TRUE);			
 			SetDefaultValues();
 			break;
 		};		

		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSChangeObjectDialog::OnPatientNameChange(){
	
} */
/*void CHMSChangeObjectDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSChangeObjectDialog::OnPatientNameKillfocus(){
	
} */
int CHMSChangeObjectDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSChangeObjectDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSChangeObjectDialog::OnObjectSelendok(){
	 
}
/*void CHMSChangeObjectDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSChangeObjectDialog::OnObjectKillfocus(){
	
}*/
long CHMSChangeObjectDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSChangeObjectDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSChangeObjectDialog::OnCardNoChange(){
	
} */
/*void CHMSChangeObjectDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSChangeObjectDialog::OnCardNoKillfocus(){
	
} */
int CHMSChangeObjectDialog::OnCardNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	if(m_szCardNo.IsEmpty()){
		m_wndCardNo.SetFocus();
		return 0;
	}
	/*if(m_szCardNo.IsEmpty()){
		m_wndCardNo.EnableWindow(false);
		m_wndDiscount.EnableWindow(false);
		m_wndRegistrationDate.EnableWindow(false);
		m_wndExpiryDate.EnableWindow(false);
		m_wndRegistrationPlace.EnableWindow(false);
		m_wndPatientName.EnableWindow(false);
		m_wndCode.EnableWindow(false);
		m_wndCardNo.SetToolTipMessage(_T(""));
		m_wndOffLine.EnableWindow(false);
		m_wndEmergency.EnableWindow(false);
		SetDefaultValues();
		return 0;
	}*/

	m_szObjectType = m_wndObjectNew.GetCurrent(3);;	
	int nRet = ParseCard(m_szObjectType,  m_szCardNo, m_szCode, m_nDiscount, m_nGroupID);
	
	m_nCardDiscount =  m_nDiscount;

	if(nRet < 0){
		m_wndCardNo.SetToolTipMessage(_T("Invalid Card Number"));
		return -1;
	}

	if(!m_szCardNo.IsEmpty() && m_szCardNo.GetLength() > 15){
		if(m_szCardNo.Right(5) != _T("01014"))
		{			
			m_wndHospital.EnableWindow(true);
			m_wndDisease.EnableWindow(true);
			m_wndOffLine.EnableWindow(true);
		}
		else
		{	
			m_wndHospital.EnableWindow(false);
			m_wndDisease.EnableWindow(false);
			m_wndOffLine.EnableWindow(false);			
		}
	}

	if(m_bEmergency)
	{
		m_nDisrate = m_nDiscount;
	}
	else
	{
		if(m_bOffLine)
			m_nDisrate = m_nDiscount*pMF->m_nInsOffLinePayment/100;
	}

	UpdateData(false);
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_card WHERE hc_cardno = '%s' AND hc_active='Y'"), m_szCardNo);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		long nPatientNo;
		rs.GetValue(_T("hc_patientno"), nPatientNo);
		if(nPatientNo != pMF->m_nPatientNo)
		{
			szSQL.Format(_T("SELECT max(hd_docno) as docno FROM hms_doc WHERE hd_patientno=%ld AND upper(hd_cardno)=upper('%s')"), nPatientNo, m_szCardNo);
			rss.ExecSQL(szSQL);
			long nDocNo;
			
			rss.GetValue(_T("docno"), nDocNo);
			
			CString szMsg;
			TranslateString(_T("This card is using by other patient.[%ld], [%ld]"),tmpStr);
			szMsg.Format(tmpStr, nPatientNo, nDocNo);
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
	
	return 0;
} 
/*void CHMSChangeObjectDialog::OnCodeChange(){
	
} */
/*void CHMSChangeObjectDialog::OnCodeSetfocus(){
	
} */
/*void CHMSChangeObjectDialog::OnCodeKillfocus(){
	
} */
int CHMSChangeObjectDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CHMSChangeObjectDialog::OnDiscountChange(){
	
} */
/*void CHMSChangeObjectDialog::OnDiscountSetfocus(){
	
} */
/*void CHMSChangeObjectDialog::OnDiscountKillfocus(){
	
} */
int CHMSChangeObjectDialog::OnDiscountCheckValue(){
	return 0;
} 
/*void CHMSChangeObjectDialog::OnRegistrationDateChange(){
	
} */
/*void CHMSChangeObjectDialog::OnRegistrationDateSetfocus(){
	
} */
/*void CHMSChangeObjectDialog::OnRegistrationDateKillfocus(){
	
} */
int CHMSChangeObjectDialog::OnRegistrationDateCheckValue(){	
    	return 0;
} 
/*void CHMSChangeObjectDialog::OnExpiryDateChange(){
	
} */
/*void CHMSChangeObjectDialog::OnExpiryDateSetfocus(){
	
} */
/*void CHMSChangeObjectDialog::OnExpiryDateKillfocus(){
	
} */
int CHMSChangeObjectDialog::OnExpiryDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(CompareDate(m_szExpiryDate, pMF->GetSysDate()) <= 0)
		return -1;
	return 0;
} 
void CHMSChangeObjectDialog::OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSChangeObjectDialog::OnRegistrationPlaceSelendok(){
	 
}
/*void CHMSChangeObjectDialog::OnRegistrationPlaceSetfocus(){
	
}*/
/*void CHMSChangeObjectDialog::OnRegistrationPlaceKillfocus(){
	
}*/
long CHMSChangeObjectDialog::OnRegistrationPlaceLoadData(){
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
/*void CHMSChangeObjectDialog::OnRegistrationPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSChangeObjectDialog::OnCompanyChange(){
	
} */
/*void CHMSChangeObjectDialog::OnCompanySetfocus(){
	
} */
/*void CHMSChangeObjectDialog::OnCompanyKillfocus(){
	
} */
int CHMSChangeObjectDialog::OnCompanyCheckValue(){
	return 0;
} 
void CHMSChangeObjectDialog::OnOffLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_bOffLine = !m_bOffLine;

	if(!m_bOffLine){
		m_wndHospital.EnableWindow(TRUE);
		m_wndDisease.EnableWindow(TRUE);
	}
	else
	{
		m_wndHospital.SetCheckValue(FALSE);
		m_wndDisease.SetCheckValue(FALSE);
		m_wndHospital.SetCheckValue(FALSE);
		m_wndDisease.SetCheckValue(FALSE);
		m_wndHospital.EnableWindow(FALSE);
		m_wndDisease.EnableWindow(FALSE);
	}
	
	m_nDisrate = m_nDiscount = m_nCardDiscount;	

	if(m_bEmergency)
	{
		m_nDisrate = m_nDiscount = m_nCardDiscount;

	}
	else
	{
		if(m_bOffLine)
			m_nDisrate = m_nDiscount = m_nCardDiscount*pMF->m_nInsOffLinePayment/100;		
	}	

	UpdateData(FALSE);
}
void CHMSChangeObjectDialog::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_bEmergency = !m_bEmergency;
	
	m_nDisrate = m_nDiscount = m_nCardDiscount;
	if(m_bEmergency)
	{
		m_nDisrate = m_nDiscount;
	}
	else
	{
		m_nDisrate = m_nDiscount = m_nCardDiscount*pMF->m_nInsOffLinePayment/100;
	}
	
	UpdateData(FALSE);
	
}
void CHMSChangeObjectDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
 	CString szSQL, szWhere; 
	CRecord rs(&pMF->m_db);
	
	if(!IsValidateData()) 
	{
 		return ; 
	}

	// Kiem tra neu benh nhan co the ko phai dang ky tai benh vien ma cho dung tuyen thi bat buoc phai nhap thong tin chuyen vien
	if(!m_bOffLine)
	{
		if(!m_szCardNo.IsEmpty() && m_szCardNo.GetLength() > 15){
			if(m_szCardNo.Right(5) != _T("01014") && m_szHospital.IsEmpty())
			{		
				ShowMessageBox(_T("Benh nhan BHYT chuyen tuyen. Phai nhap thong tin benh vien chuyen di."), MB_OK);				
				m_wndHospital.SetCheckValue(true);
				m_wndDisease.SetCheckValue(true);
				m_wndHospital.EnableWindow(true);
				m_wndDisease.EnableWindow(true);
				m_wndHospital.SetFocus();		
				return ;
			}
		}
	}

	//Kiem tra doi tuong co the BHYT thi them vao.
	pMF->BeginTransaction();
	if(m_szHasCard == _T("Y") && !m_szCardNo.IsEmpty())
	{
		m_hms_cardTbl.SetValue(_T("hc_cardno"), m_szCardNo);
		m_hms_cardTbl.SetValue(_T("hc_docno"), pMF->m_nDocumentNo);
		szSQL.Format(_T("HMS_CARD_UPDATE(%s) "), m_hms_cardTbl.FormatSQL());

		
		m_nCardIdx = str2long(pMF->ExecDML(szSQL));
		
		if(m_nCardIdx <= 0)
		{
			pMF->Rollback();
			ShowMessageBox(_T("Cannot add new card."), MB_OK);
			return ;
		}
	}

	
	m_szOffLine = m_bOffLine?_T("Y"):_T("N");
	m_szEmergency = m_bEmergency?_T("Y"):_T("N");	
	m_nDisrate = m_nDiscount;

	// Neu tich trai tuyen va khong tich Cap cuu
	if(m_szOffLine == _T("Y") && pMF->m_nInsOffLinePayment > 0 && m_szEmergency != _T("Y"))
		m_nDisrate = pMF->m_nInsOffLinePayment*m_nDiscount/100;

	m_hms_docTbl.SetValue(_T("hd_object"), m_szObjectNewKey);
	m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNo);
	m_hms_docTbl.SetValue(_T("hd_cardidx"), m_nCardIdx);
	m_hms_docTbl.SetValue(_T("hd_insregdate"), m_szRegistrationDate);
	m_hms_docTbl.SetValue(_T("hd_disrate"), m_nDisrate);
	m_hms_docTbl.SetValue(_T("hd_insline"), m_szOffLine);	
	m_hms_docTbl.SetValue(_T("hd_emergency"), m_szEmergency);	
	

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
	
	if(m_szCardNo.IsEmpty()){
//Kiem tra neu the cu thi xoa di
		szSQL.Format(_T("SELECT count(*) FROM hms_doc WHERE hd_patientno=%ld and upper(hd_cardno)=upper('%s') and hd_docno<>%ld "), pMF->m_nPatientNo, m_szOldCardNo, pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <= 0){
			szSQL.Format(_T("DELETE FROM hms_card WHERE hc_patientno=%ld and hc_cardno='%s' "), pMF->m_nPatientNo, m_szOldCardNo);
			pMF->ExecSQL(szSQL);
		}
	}
	
	CString szEvent, szDesc;
	szEvent.Format(_T("Edit Patient Information"));
	if (m_szObjectCurrentKey != m_szObjectNewKey)
	{
		//doi tuong ko co the chuyen thanh bao hiem
		szDesc.Format(_T("[%ld, %s,%s]->[%s, %s]"), pMF->m_nDocumentNo, m_szPatientName, m_szObjectCurrentKey, m_szObjectNewKey, m_szCardNo);
		//doi tuong co the chuyen thanh dich vu	
		pMF->SystemLog(szEvent, szDesc);
	}

	OnOK();
} 
int CHMSChangeObjectDialog::ParseCard(CString szObject, CString szCardNo, CString& szRetCode, int& nInsDiscount, int& nGroupID)
{	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd(); 	
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
//_fmsg(_T("\r\n:%s"), szSQL);
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
			//_tprintf(_T("\r\n:%c"), szCardFormat[i]);
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

/*int CHMSChangeObjectDialog::OnHospitalChange(){
	return 0;
} */
/*int CHMSChangeObjectDialog::OnHospitalSetfocus(){
	return 0;
} */
/*int CHMSChangeObjectDialog::OnHospitalKillfocus(){
	return 0;
} */
//int CHMSChangeObjectDialog::OnHospitalCheckValue(){
//	return 0;
//} 


int CHMSChangeObjectDialog::OnHospitalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSChangeObjectDialog::OnHospitalSelendok(){
	 return 0;
}
/*int CHMSChangeObjectDialog::OnHospitalSetfocus(){
	 return 0;
}*/
/*int CHMSChangeObjectDialog::OnHospitalKillfocus(){
	 return 0;
}*/
int CHMSChangeObjectDialog::OnHospitalLoadData(){
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
/*int CHMSChangeObjectDialog::OnHospitalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */

/*int CHMSChangeObjectDialog::OnDiseaseChange(){
	return 0;
} */
/*int CHMSChangeObjectDialog::OnDiseaseSetfocus(){
	return 0;
} */
/*int CHMSChangeObjectDialog::OnDiseaseKillfocus(){
	return 0;
} */
int CHMSChangeObjectDialog::OnDiseaseCheckValue(){
	return 0;
} 


void CHMSChangeObjectDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CDialog::OnCancel();
} 
void CHMSChangeObjectDialog::OnObjectCurrentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSChangeObjectDialog::OnObjectCurrentSelendok(){
	 
}
/*void CHMSChangeObjectDialog::OnObjectCurrentSetfocus(){
	
}*/
/*void CHMSChangeObjectDialog::OnObjectCurrentKillfocus(){
	
}*/
long CHMSChangeObjectDialog::OnObjectCurrentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	
	if(m_wndObjectCurrent.IsSearchKey() && !m_szObjectCurrentKey.IsEmpty()){
		szWhere.Format(_T(" AND ho_id='%s' "), m_szObjectCurrentKey);
	};
	/*if(!pMF->m_UserInfo.su_hms_xobject.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), pMF->m_UserInfo.su_hms_xobject);*/

	szSQL.Format(_T("SELECT * FROM hms_object WHERE ho_active='Y' %s ORDER BY cast(ho_id as integer)"), szWhere);
	m_wndObjectCurrent.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectCurrent.AddItems(
			rs.GetValue(_T("ho_id")), 
			rs.GetValue(_T("ho_desc")), 
			rs.GetValue(_T("ho_hascard")), 
			rs.GetValue(_T("ho_type")), 
			rs.GetValue(_T("ho_discount")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSChangeObjectDialog::OnObjectCurrentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSChangeObjectDialog::OnObjectNewSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSChangeObjectDialog::OnObjectNewSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	UpdateData(true);
	m_szHasCard = m_wndObjectNew.GetCurrent(2);
	if(m_szHasCard == _T("Y")){
		if (m_szCardNo.IsEmpty())
		{			
			CString szSQL;
			CRecord rs(&pMF->m_db);
			szSQL.Format(_T("SELECT hc_cardno, MAX(hc_idx) as hc_idx FROM hms_card WHERE hc_patientno=%ld GROUP BY hc_cardno "), pMF->m_nPatientNo);
			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("hc_cardno"), m_szCardNo);
				rs.GetValue(_T("hc_idx"), m_nCardIdx);				
			}
			else
				m_nCardIdx = 0;
		}
		SetMode(VM_EDIT);
		
	}
	else
		SetMode(VM_NONE);
	UpdateData(false);
}
/*void CHMSChangeObjectDialog::OnObjectNewSetfocus(){
	
}*/
/*void CHMSChangeObjectDialog::OnObjectNewKillfocus(){
	
}*/
long CHMSChangeObjectDialog::OnObjectNewLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	
	if(m_wndObjectNew.IsSearchKey() && !m_szObjectNewKey.IsEmpty()){
		szWhere.Format(_T(" AND ho_id='%s' "), m_szObjectNewKey);
	};
	/*if(!pMF->m_UserInfo.su_hms_xobject.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id in(%s) "), pMF->m_UserInfo.su_hms_xobject);*/

	szSQL.Format(_T("SELECT * FROM hms_object WHERE ho_active='Y' AND ho_id <> '%s' %s ORDER BY CAST(ho_id as INTEGER)"),  m_szObjectCurrentKey, szWhere);
_tprintf(_T("\r\n%s"), szSQL);
	m_wndObjectNew.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectNew.AddItems(
			rs.GetValue(_T("ho_id")), 
			rs.GetValue(_T("ho_desc")), 
			rs.GetValue(_T("ho_hascard")), 
			rs.GetValue(_T("ho_type")), 
			rs.GetValue(_T("ho_discount")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSChangeObjectDialog::OnObjectNewAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSChangeObjectDialog::OnAddHMSChangeObjectDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSChangeObjectDialog::OnEditHMSChangeObjectDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSChangeObjectDialog::OnDeleteHMSChangeObjectDialog(){
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
 		OnCancelHMSChangeObjectDialog();
 	}
	return 0;
}
int CHMSChangeObjectDialog::OnSaveHMSChangeObjectDialog(){
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
 		//OnHMSChangeObjectDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSChangeObjectDialog::OnCancelHMSChangeObjectDialog(){
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
int CHMSChangeObjectDialog::OnHMSChangeObjectDialogListLoadData(){
	return 0;
}
