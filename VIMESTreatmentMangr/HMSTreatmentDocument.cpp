#include "HMSTreatmentDocument.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnPatientNoChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPatientNoChange();
} */
/*static int _OnPatientNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPatientNoKillfocus();} */ 
/*static int _OnPatientNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPatientNoCheckValue();
} 
/*static int _OnDocumentNoChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDocumentNoChange();
} */
/*static int _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDocumentNoKillfocus();} */ 
/*static int _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDocumentNoCheckValue();
} 
/*static int _OnReceptNoChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnReceptNoChange();
} */
/*static int _OnReceptNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnReceptNoKillfocus();} */ 
/*static int _OnReceptNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnReceptNoKillfocus();
} */
static int _OnReceptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnReceptNoCheckValue();
} 
/*static int _OnPatientNameChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPatientNameChange();
} */
/*static int _OnPatientNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPatientNameKillfocus();} */ 
/*static int _OnPatientNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPatientNameCheckValue();
} 
/*static int _OnAgeChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnAgeChange();
} */
/*static int _OnAgeSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnAgeKillfocus();} */ 
/*static int _OnAgeKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnAgeCheckValue();
} 
static int _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSTreatmentDocument* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnSexSelendokFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnSexSelendok();
}
/*static int _OnSexSetfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnSexKillfocus();
}*/
/*static int _OnSexKillfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnSexKillfocus();
}*/
static int _OnSexLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnSexLoadData();
}
/*static int _OnSexAddNewFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnSexAddNew();
}*/
static int _OnAddressSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSTreatmentDocument* )pWnd)->OnAddressSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnAddressSelendokFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnAddressSelendok();
}
/*static int _OnAddressSetfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnAddressKillfocus();
}*/
/*static int _OnAddressKillfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnAddressKillfocus();
}*/
static int _OnAddressLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnAddressLoadData();
}
/*static int _OnAddressAddNewFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnAddressAddNew();
}*/
/*static int _OnAddressDetailChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnAddressDetailChange();
} */
/*static int _OnAddressDetailSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnAddressDetailKillfocus();} */ 
/*static int _OnAddressDetailKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnAddressDetailKillfocus();
} */
static int _OnAddressDetailCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnAddressDetailCheckValue();
} 
/*static int _OnWorkplaceChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnWorkplaceChange();
} */
/*static int _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnWorkplaceKillfocus();} */ 
/*static int _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnWorkplaceCheckValue();
} 
/*static int _OnCardNoChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnCardNoChange();
} */
/*static int _OnCardNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnCardNoKillfocus();} */ 
/*static int _OnCardNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnCardNoCheckValue();
} 
/*static int _OnDiscountChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDiscountChange();
} */
/*static int _OnDiscountSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDiscountKillfocus();} */ 
/*static int _OnDiscountKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDiscountCheckValue();
} 
/*static int _OnRegistrationDateChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRegistrationDateChange();
} */
/*static int _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRegistrationDateKillfocus();} */ 
/*static int _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static int _OnExpiryDateChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnExpiryDateChange();
} */
/*static int _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnExpiryDateKillfocus();} */ 
/*static int _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnExpiryDateCheckValue();
} 
/*static int _OnRegistrationPlaceChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRegistrationPlaceChange();
} */
/*static int _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRegistrationPlaceKillfocus();} */ 
/*static int _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRegistrationPlaceKillfocus();
} */
static int _OnRegistrationPlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRegistrationPlaceCheckValue();
} 
static int _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSTreatmentDocument* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnObjectSelendokFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnObjectSelendok();
}
/*static int _OnObjectSetfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnObjectKillfocus();
}*/
/*static int _OnObjectKillfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnObjectKillfocus();
}*/
static int _OnObjectLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnObjectLoadData();
}
/*static int _OnObjectAddNewFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnObjectAddNew();
}*/
/*static int _OnHospitalChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnHospitalChange();
} */
/*static int _OnHospitalSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnHospitalKillfocus();} */ 
/*static int _OnHospitalKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnHospitalKillfocus();
} */
static int _OnHospitalCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnHospitalCheckValue();
} 
/*static int _OnDiseaseChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDiseaseChange();
} */
/*static int _OnDiseaseSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDiseaseKillfocus();} */ 
/*static int _OnDiseaseKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDiseaseKillfocus();
} */
static int _OnDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnDiseaseCheckValue();
} 
static int _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSTreatmentDocument* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnEthnicSelendokFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnEthnicSelendok();
}
/*static int _OnEthnicSetfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnEthnicKillfocus();
}*/
/*static int _OnEthnicKillfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnEthnicKillfocus();
}*/
static int _OnEthnicLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnEthnicLoadData();
}
/*static int _OnEthnicAddNewFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnEthnicAddNew();
}*/
static int _OnEthnicalitySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSTreatmentDocument* )pWnd)->OnEthnicalitySelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnEthnicalitySelendokFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnEthnicalitySelendok();
}
/*static int _OnEthnicalitySetfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnEthnicalityKillfocus();
}*/
/*static int _OnEthnicalityKillfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnEthnicalityKillfocus();
}*/
static int _OnEthnicalityLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnEthnicalityLoadData();
}
/*static int _OnEthnicalityAddNewFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnEthnicalityAddNew();
}*/
/*static int _OnRelativeChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRelativeChange();
} */
/*static int _OnRelativeSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRelativeKillfocus();} */ 
/*static int _OnRelativeKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRelativeKillfocus();
} */
static int _OnRelativeCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnRelativeCheckValue();
} 
static int _OnRelationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSTreatmentDocument* )pWnd)->OnRelationSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnRelationSelendokFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnRelationSelendok();
}
/*static int _OnRelationSetfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnRelationKillfocus();
}*/
/*static int _OnRelationKillfocusFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnRelationKillfocus();
}*/
static int _OnRelationLoadDataFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnRelationLoadData();
}
/*static int _OnRelationAddNewFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument *)pWnd)->OnRelationAddNew();
}*/
/*static int _OnContactAddressChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnContactAddressChange();
} */
/*static int _OnContactAddressSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnContactAddressKillfocus();} */ 
/*static int _OnContactAddressKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnContactAddressKillfocus();
} */
static int _OnContactAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnContactAddressCheckValue();
} 
/*static int _OnPhoneChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPhoneChange();
} */
/*static int _OnPhoneSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPhoneKillfocus();} */ 
/*static int _OnPhoneKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnPhoneCheckValue();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSTreatmentDocument *pVw = (CHMSTreatmentDocument *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentDocument *pVw = (CHMSTreatmentDocument *)pWnd;
	return pVw->OnSaveSelect();
} 
/*static int _OnBirthDateChangeFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnBirthDateChange();
} */
/*static int _OnBirthDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnBirthDateKillfocus();} */ 
/*static int _OnBirthDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentDocument *)pWnd)->OnBirthDateCheckValue();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTreatmentDocument *pVw = (CHMSTreatmentDocument *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSTreatmentDocumentFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument*)pWnd)->OnAddHMSTreatmentDocument();
} 
static int _OnEditHMSTreatmentDocumentFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument*)pWnd)->OnEditHMSTreatmentDocument();
} 
static int _OnDeleteHMSTreatmentDocumentFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument*)pWnd)->OnDeleteHMSTreatmentDocument();
} 
static int _OnSaveHMSTreatmentDocumentFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument*)pWnd)->OnSaveHMSTreatmentDocument();
} 
static int _OnCancelHMSTreatmentDocumentFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDocument*)pWnd)->OnCancelHMSTreatmentDocument();
} 
CHMSTreatmentDocument::CHMSTreatmentDocument(){

	m_nDlgWidth = 540;
	m_nDlgHeight = 480;
	SetDefaultValues();
}
CHMSTreatmentDocument::~CHMSTreatmentDocument(){
}
void CHMSTreatmentDocument::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 519, 268);
	m_wndCardInformation.Create(this, _T("Card Information"), 5, 273, 519, 347);
	m_wndTransferInformation.Create(this, _T("Transfer Information"), 5, 352, 519, 426);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 8, 25, 93, 47);
	m_wndPatientNo.Create(this,98, 25, 168, 47); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 173, 25, 237, 47);
	m_wndDocumentNo.Create(this,242, 25, 312, 47); 
	m_wndReceptNoLabel.Create(this, _T("Recept No"), 317, 25, 377, 47);
	m_wndReceptNo.Create(this,382, 25, 440, 47); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 9, 52, 94, 74);
	m_wndPatientName.Create(this,99, 52, 313, 74); 
	m_wndAgeLabel.Create(this, _T("Age"), 318, 52, 378, 74);
	m_wndAge.Create(this,383, 52, 441, 74); 
	m_wndSexLabel.Create(this, _T("Sex"), 9, 79, 94, 101);
	m_wndSex.Create(this,99, 79, 169, 101); 
	m_wndAddressLabel.Create(this, _T("Address"), 9, 106, 94, 128);
	m_wndAddress.Create(this,99, 106, 515, 128); 
	m_wndAddressDetailLabel.Create(this, _T("Address Detail"), 9, 133, 94, 155);
	m_wndAddressDetail.Create(this,99, 133, 515, 155); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 9, 160, 94, 182);
	m_wndWorkplace.Create(this,99, 160, 515, 182); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 9, 293, 94, 315);
	m_wndCardNo.Create(this,99, 293, 263, 315); 
	m_wndDiscount.Create(this,487, 293, 516, 315); 
	m_wndRegistrationDateLabel.Create(this, _T("Expiry"), 268, 293, 332, 315);
	m_wndRegistrationDate.Create(this,337, 293, 407, 315); 
	m_wndExpiryDate.Create(this,412, 293, 482, 315); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 9, 320, 94, 342);
	m_wndRegistrationPlace.Create(this,99, 320, 515, 342); 
	m_wndObjectLabel.Create(this, _T("Object"), 268, 241, 332, 263);
	m_wndObject.Create(this,337, 241, 515, 263); 
	m_wndHospitalLabel.Create(this, _T("Hospital"), 9, 372, 94, 394);
	m_wndHospital.Create(this,99, 372, 515, 394); 
	m_wndDiseaseLabel.Create(this, _T("Disease"), 9, 399, 94, 421);
	m_wndDisease.Create(this,99, 399, 515, 421); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 174, 79, 238, 101);
	m_wndEthnic.Create(this,243, 79, 313, 101); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 318, 79, 378, 101);
	m_wndEthnicality.Create(this,383, 79, 515, 101); 
	m_wndRelativeLabel.Create(this, _T("Relative"), 9, 187, 94, 209);
	m_wndRelative.Create(this,100, 187, 264, 209); 
	m_wndRelationLabel.Create(this, _T("Relation"), 268, 187, 332, 209);
	m_wndRelation.Create(this,337, 187, 515, 209); 
	m_wndContactAddressLabel.Create(this, _T("Contact Address"), 9, 214, 94, 236);
	m_wndContactAddress.Create(this,99, 214, 515, 236); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 9, 241, 94, 263);
	m_wndPhone.Create(this,99, 241, 263, 263); 
	m_wndEdit.Create(this, _T("&Edit"), 311, 431, 375, 453);
	m_wndSave.Create(this, _T("&Save"), 380, 431, 444, 453);
	m_wndBirthDate.Create(this,446, 52, 515, 74); 
	m_wndCancel.Create(this, _T("&Cancel"), 449, 431, 519, 453);

}
void CHMSTreatmentDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndReceptNo.SetLimitText(1024);
	m_wndReceptNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndAddress.LimitText(1024);
	m_wndAddressDetail.SetLimitText(1024);
	m_wndAddressDetail.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(1024);
	m_wndWorkplace.SetCheckValue(true);
	m_wndCardNo.SetLimitText(1024);
	m_wndCardNo.SetCheckValue(true);
	m_wndDiscount.SetLimitText(1024);
	m_wndDiscount.SetCheckValue(true);
	m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
	m_wndExpiryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetLimitText(1024);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndHospital.SetLimitText(254);
	m_wndHospital.SetCheckValue(true);
	m_wndDisease.SetLimitText(254);
	m_wndDisease.SetCheckValue(true);
	m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(1024);
	m_wndEthnicality.SetCheckValue(true);
	m_wndEthnicality.LimitText(1024);
	m_wndRelative.SetLimitText(1024);
	m_wndRelative.SetCheckValue(true);
	m_wndRelation.SetCheckValue(true);
	m_wndRelation.LimitText(1024);
	m_wndContactAddress.SetLimitText(1024);
	m_wndContactAddress.SetCheckValue(true);
	m_wndPhone.SetLimitText(1024);
	m_wndPhone.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndAddress.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAddress.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEthnicality.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndEthnicality.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRelation.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRelation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSTreatmentDocument::OnSetWindowEvents(){
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndReceptNo.SetEvent(WE_CHANGE, _OnReceptNoChangeFnc);
	//m_wndReceptNo.SetEvent(WE_SETFOCUS, _OnReceptNoSetfocusFnc);
	//m_wndReceptNo.SetEvent(WE_KILLFOCUS, _OnReceptNoKillfocusFnc);
	m_wndReceptNo.SetEvent(WE_CHECKVALUE, _OnReceptNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	m_wndAddress.SetEvent(WE_SELENDOK, _OnAddressSelendokFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_SELCHANGE, _OnAddressSelectChangeFnc);
	m_wndAddress.SetEvent(WE_LOADDATA, _OnAddressLoadDataFnc);
	//m_wndAddress.SetEvent(WE_ADDNEW, _OnAddressAddNewFnc);
	//m_wndAddressDetail.SetEvent(WE_CHANGE, _OnAddressDetailChangeFnc);
	//m_wndAddressDetail.SetEvent(WE_SETFOCUS, _OnAddressDetailSetfocusFnc);
	//m_wndAddressDetail.SetEvent(WE_KILLFOCUS, _OnAddressDetailKillfocusFnc);
	m_wndAddressDetail.SetEvent(WE_CHECKVALUE, _OnAddressDetailCheckValueFnc);
	//m_wndWorkplace.SetEvent(WE_CHANGE, _OnWorkplaceChangeFnc);
	//m_wndWorkplace.SetEvent(WE_SETFOCUS, _OnWorkplaceSetfocusFnc);
	//m_wndWorkplace.SetEvent(WE_KILLFOCUS, _OnWorkplaceKillfocusFnc);
	m_wndWorkplace.SetEvent(WE_CHECKVALUE, _OnWorkplaceCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
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
	//m_wndRegistrationPlace.SetEvent(WE_CHANGE, _OnRegistrationPlaceChangeFnc);
	//m_wndRegistrationPlace.SetEvent(WE_SETFOCUS, _OnRegistrationPlaceSetfocusFnc);
	//m_wndRegistrationPlace.SetEvent(WE_KILLFOCUS, _OnRegistrationPlaceKillfocusFnc);
	m_wndRegistrationPlace.SetEvent(WE_CHECKVALUE, _OnRegistrationPlaceCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndHospital.SetEvent(WE_CHANGE, _OnHospitalChangeFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_CHECKVALUE, _OnHospitalCheckValueFnc);
	//m_wndDisease.SetEvent(WE_CHANGE, _OnDiseaseChangeFnc);
	//m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
	//m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
	m_wndDisease.SetEvent(WE_CHECKVALUE, _OnDiseaseCheckValueFnc);
	m_wndEthnic.SetEvent(WE_SELENDOK, _OnEthnicSelendokFnc);
	//m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
	//m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
	m_wndEthnic.SetEvent(WE_SELCHANGE, _OnEthnicSelectChangeFnc);
	m_wndEthnic.SetEvent(WE_LOADDATA, _OnEthnicLoadDataFnc);
	//m_wndEthnic.SetEvent(WE_ADDNEW, _OnEthnicAddNewFnc);
	m_wndEthnicality.SetEvent(WE_SELENDOK, _OnEthnicalitySelendokFnc);
	//m_wndEthnicality.SetEvent(WE_SETFOCUS, _OnEthnicalitySetfocusFnc);
	//m_wndEthnicality.SetEvent(WE_KILLFOCUS, _OnEthnicalityKillfocusFnc);
	m_wndEthnicality.SetEvent(WE_SELCHANGE, _OnEthnicalitySelectChangeFnc);
	m_wndEthnicality.SetEvent(WE_LOADDATA, _OnEthnicalityLoadDataFnc);
	//m_wndEthnicality.SetEvent(WE_ADDNEW, _OnEthnicalityAddNewFnc);
	//m_wndRelative.SetEvent(WE_CHANGE, _OnRelativeChangeFnc);
	//m_wndRelative.SetEvent(WE_SETFOCUS, _OnRelativeSetfocusFnc);
	//m_wndRelative.SetEvent(WE_KILLFOCUS, _OnRelativeKillfocusFnc);
	m_wndRelative.SetEvent(WE_CHECKVALUE, _OnRelativeCheckValueFnc);
	m_wndRelation.SetEvent(WE_SELENDOK, _OnRelationSelendokFnc);
	//m_wndRelation.SetEvent(WE_SETFOCUS, _OnRelationSetfocusFnc);
	//m_wndRelation.SetEvent(WE_KILLFOCUS, _OnRelationKillfocusFnc);
	m_wndRelation.SetEvent(WE_SELCHANGE, _OnRelationSelectChangeFnc);
	m_wndRelation.SetEvent(WE_LOADDATA, _OnRelationLoadDataFnc);
	//m_wndRelation.SetEvent(WE_ADDNEW, _OnRelationAddNewFnc);
	//m_wndContactAddress.SetEvent(WE_CHANGE, _OnContactAddressChangeFnc);
	//m_wndContactAddress.SetEvent(WE_SETFOCUS, _OnContactAddressSetfocusFnc);
	//m_wndContactAddress.SetEvent(WE_KILLFOCUS, _OnContactAddressKillfocusFnc);
	m_wndContactAddress.SetEvent(WE_CHECKVALUE, _OnContactAddressCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	//m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatmentDocumentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatmentDocumentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatmentDocumentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatmentDocumentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatmentDocumentFnc, 0, 'T', VK_CONTROL);

}
void CHMSTreatmentDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndReceptNo.GetDlgCtrlID(), m_szReceptNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddressKey);
	DDX_Text(pDX, m_wndAddressDetail.GetDlgCtrlID(), m_szAddressDetail);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_Text(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlace);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospital);
	DDX_Text(pDX, m_wndDisease.GetDlgCtrlID(), m_szDisease);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_TextEx(pDX, m_wndEthnicality.GetDlgCtrlID(), m_szEthnicalityKey);
	DDX_Text(pDX, m_wndRelative.GetDlgCtrlID(), m_szRelative);
	DDX_TextEx(pDX, m_wndRelation.GetDlgCtrlID(), m_szRelationKey);
	DDX_Text(pDX, m_wndContactAddress.GetDlgCtrlID(), m_szContactAddress);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);

}
void CHMSTreatmentDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentDocument::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szReceptNo.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSexKey.Empty();
	m_szAddressKey.Empty();
	m_szAddressDetail.Empty();
	m_szWorkplace.Empty();
	m_szCardNo.Empty();
	m_nDiscount=0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlace.Empty();
	m_szObjectKey.Empty();
	m_szHospital.Empty();
	m_szDisease.Empty();
	m_szEthnicKey.Empty();
	m_szEthnicalityKey.Empty();
	m_szRelative.Empty();
	m_szRelationKey.Empty();
	m_szContactAddress.Empty();
	m_szPhone.Empty();
	m_szBirthDate.Empty();

}
int CHMSTreatmentDocument::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		//CGuiView::SetMode(nMode); 
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
/*int CHMSTreatmentDocument::OnPatientNoChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnPatientNoSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnPatientNoKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnPatientNoCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnDocumentNoChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnDocumentNoSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnDocumentNoKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnDocumentNoCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnReceptNoChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnReceptNoSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnReceptNoKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnReceptNoCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnPatientNameChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnPatientNameSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnPatientNameKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnPatientNameCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnAgeChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnAgeSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnAgeKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnAgeCheckValue(){
	return 0;
} 
int CHMSTreatmentDocument::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentDocument::OnSexSelendok(){
	 return 0;
}
/*int CHMSTreatmentDocument::OnSexSetfocus(){
	 return 0;
}*/
/*int CHMSTreatmentDocument::OnSexKillfocus(){
	 return 0;
}*/
int CHMSTreatmentDocument::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey()){
	};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSTreatmentDocument::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSTreatmentDocument::OnAddressSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentDocument::OnAddressSelendok(){
	 return 0;
}
/*int CHMSTreatmentDocument::OnAddressSetfocus(){
	 return 0;
}*/
/*int CHMSTreatmentDocument::OnAddressKillfocus(){
	 return 0;
}*/
int CHMSTreatmentDocument::OnAddressLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAddress.IsSearchKey()){
	};
	m_wndAddress.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAddress.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSTreatmentDocument::OnAddressAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSTreatmentDocument::OnAddressDetailChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnAddressDetailSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnAddressDetailKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnAddressDetailCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnWorkplaceChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnWorkplaceSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnWorkplaceKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnWorkplaceCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnCardNoChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnCardNoSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnCardNoKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnCardNoCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnDiscountChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnDiscountSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnDiscountKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnDiscountCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnRegistrationDateChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnRegistrationDateSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnRegistrationDateKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnRegistrationDateCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnExpiryDateChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnExpiryDateSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnExpiryDateKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnExpiryDateCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnRegistrationPlaceChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnRegistrationPlaceSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnRegistrationPlaceKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnRegistrationPlaceCheckValue(){
	return 0;
} 
int CHMSTreatmentDocument::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentDocument::OnObjectSelendok(){
	 return 0;
}
/*int CHMSTreatmentDocument::OnObjectSetfocus(){
	 return 0;
}*/
/*int CHMSTreatmentDocument::OnObjectKillfocus(){
	 return 0;
}*/
int CHMSTreatmentDocument::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey()){
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSTreatmentDocument::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSTreatmentDocument::OnHospitalChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnHospitalSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnHospitalKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnHospitalCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnDiseaseChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnDiseaseSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnDiseaseKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnDiseaseCheckValue(){
	return 0;
} 
int CHMSTreatmentDocument::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentDocument::OnEthnicSelendok(){
	 return 0;
}
/*int CHMSTreatmentDocument::OnEthnicSetfocus(){
	 return 0;
}*/
/*int CHMSTreatmentDocument::OnEthnicKillfocus(){
	 return 0;
}*/
int CHMSTreatmentDocument::OnEthnicLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEthnic.IsSearchKey()){
	};
	m_wndEthnic.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEthnic.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSTreatmentDocument::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSTreatmentDocument::OnEthnicalitySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentDocument::OnEthnicalitySelendok(){
	 return 0;
}
/*int CHMSTreatmentDocument::OnEthnicalitySetfocus(){
	 return 0;
}*/
/*int CHMSTreatmentDocument::OnEthnicalityKillfocus(){
	 return 0;
}*/
int CHMSTreatmentDocument::OnEthnicalityLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEthnicality.IsSearchKey()){
	};
	m_wndEthnicality.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEthnicality.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSTreatmentDocument::OnEthnicalityAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSTreatmentDocument::OnRelativeChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnRelativeSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnRelativeKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnRelativeCheckValue(){
	return 0;
} 
int CHMSTreatmentDocument::OnRelationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentDocument::OnRelationSelendok(){
	 return 0;
}
/*int CHMSTreatmentDocument::OnRelationSetfocus(){
	 return 0;
}*/
/*int CHMSTreatmentDocument::OnRelationKillfocus(){
	 return 0;
}*/
int CHMSTreatmentDocument::OnRelationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRelation.IsSearchKey()){
	};
	m_wndRelation.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRelation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSTreatmentDocument::OnRelationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSTreatmentDocument::OnContactAddressChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnContactAddressSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnContactAddressKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnContactAddressCheckValue(){
	return 0;
} 
/*int CHMSTreatmentDocument::OnPhoneChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnPhoneSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnPhoneKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnPhoneCheckValue(){
	return 0;
} 
int CHMSTreatmentDocument::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentDocument::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
/*int CHMSTreatmentDocument::OnBirthDateChange(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnBirthDateSetfocus(){
	return 0;
} */
/*int CHMSTreatmentDocument::OnBirthDateKillfocus(){
	return 0;
} */
int CHMSTreatmentDocument::OnBirthDateCheckValue(){
	return 0;
} 
int CHMSTreatmentDocument::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSTreatmentDocument::OnAddHMSTreatmentDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSTreatmentDocument"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSTreatmentDocument::OnEditHMSTreatmentDocument(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSTreatmentDocument"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSTreatmentDocument::OnDeleteHMSTreatmentDocument(){
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
 		OnCancelHMSTreatmentDocument(); 
 	}
return 0;
 } 
int CHMSTreatmentDocument::OnSaveHMSTreatmentDocument(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
// 		szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSTreatmentDocumentListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSTreatmentDocument::OnCancelHMSTreatmentDocument(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSTreatmentDocument::OnHMSTreatmentDocumentListLoadData(){
	return 0;
}
