#include "HMSReception.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnPatientNoChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPatientNoChange();
} */
/*static int _OnPatientNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPatientNoKillfocus();} */ 
/*static int _OnPatientNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPatientNoCheckValue();
} 
/*static int _OnDocumentNoChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnDocumentNoChange();
} */
/*static int _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnDocumentNoKillfocus();} */ 
/*static int _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnDocumentNoCheckValue();
} 
/*static int _OnReceptNoChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnReceptNoChange();
} */
/*static int _OnReceptNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnReceptNoKillfocus();} */ 
/*static int _OnReceptNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnReceptNoKillfocus();
} */
static int _OnReceptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnReceptNoCheckValue();
} 
/*static int _OnPatientNameChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPatientNameChange();
} */
/*static int _OnPatientNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPatientNameKillfocus();} */ 
/*static int _OnPatientNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPatientNameCheckValue();
} 
/*static int _OnAgeChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnAgeChange();
} */
/*static int _OnAgeSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnAgeKillfocus();} */ 
/*static int _OnAgeKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnAgeCheckValue();
} 
static int _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnSexSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnSexSelendok();
}
/*static int _OnSexSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnSexKillfocus();
}*/
/*static int _OnSexKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnSexKillfocus();
}*/
static int _OnSexLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnSexLoadData();
}
/*static int _OnSexAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnSexAddNew();
}*/
static int _OnAddressSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnAddressSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnAddressSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnAddressSelendok();
}
/*static int _OnAddressSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnAddressKillfocus();
}*/
/*static int _OnAddressKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnAddressKillfocus();
}*/
static int _OnAddressLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnAddressLoadData();
}
/*static int _OnAddressAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnAddressAddNew();
}*/
/*static int _OnAddressDetailChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnAddressDetailChange();
} */
/*static int _OnAddressDetailSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnAddressDetailKillfocus();} */ 
/*static int _OnAddressDetailKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnAddressDetailKillfocus();
} */
static int _OnAddressDetailCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnAddressDetailCheckValue();
} 
/*static int _OnWorkplaceChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnWorkplaceChange();
} */
/*static int _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnWorkplaceKillfocus();} */ 
/*static int _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnWorkplaceCheckValue();
} 
/*static int _OnCardNoChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnCardNoChange();
} */
/*static int _OnCardNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnCardNoKillfocus();} */ 
/*static int _OnCardNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnCardNoCheckValue();
} 
/*static int _OnDiscountChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnDiscountChange();
} */
/*static int _OnDiscountSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnDiscountKillfocus();} */ 
/*static int _OnDiscountKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnDiscountCheckValue();
} 
/*static int _OnRegistrationDateChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnRegistrationDateChange();
} */
/*static int _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnRegistrationDateKillfocus();} */ 
/*static int _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static int _OnExpiryDateChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnExpiryDateChange();
} */
/*static int _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnExpiryDateKillfocus();} */ 
/*static int _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnExpiryDateCheckValue();
} 
static int _OnRegistrationPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnRegistrationPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnRegistrationPlaceSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRegistrationPlaceSelendok();
}
/*static int _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
/*static int _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
static int _OnRegistrationPlaceLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRegistrationPlaceLoadData();
}
/*static int _OnRegistrationPlaceAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRegistrationPlaceAddNew();
}*/
static int _OnPolicySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnPolicySelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnPolicySelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnPolicySelendok();
}
/*static int _OnPolicySetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnPolicyKillfocus();
}*/
/*static int _OnPolicyKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnPolicyKillfocus();
}*/
static int _OnPolicyLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnPolicyLoadData();
}
/*static int _OnPolicyAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnPolicyAddNew();
}*/
static int _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnRoomSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRoomSelendok();
}
/*static int _OnRoomSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRoomKillfocus();
}*/
/*static int _OnRoomKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRoomKillfocus();
}*/
static int _OnRoomLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRoomLoadData();
}
/*static int _OnRoomAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRoomAddNew();
}*/
static int _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnTypeSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnTypeSelendok();
}
/*static int _OnTypeSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnTypeKillfocus();
}*/
/*static int _OnTypeKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnTypeKillfocus();
}*/
static int _OnTypeLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnTypeLoadData();
}
/*static int _OnTypeAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnTypeAddNew();
}*/
static int _OnHospitalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnHospitalSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnHospitalSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnHospitalSelendok();
}
/*static int _OnHospitalSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnHospitalKillfocus();
}*/
/*static int _OnHospitalKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnHospitalKillfocus();
}*/
static int _OnHospitalLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnHospitalLoadData();
}
/*static int _OnHospitalAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnHospitalAddNew();
}*/
static int _OnDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDiseaseSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnDiseaseSelendok();
}
/*static int _OnDiseaseSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnDiseaseKillfocus();
}*/
/*static int _OnDiseaseKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnDiseaseKillfocus();
}*/
static int _OnDiseaseLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnDiseaseLoadData();
}
/*static int _OnDiseaseAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnDiseaseAddNew();
}*/
static int _OnNationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnNationSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnNationSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnNationSelendok();
}
/*static int _OnNationSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnNationKillfocus();
}*/
/*static int _OnNationKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnNationKillfocus();
}*/
static int _OnNationLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnNationLoadData();
}
/*static int _OnNationAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnNationAddNew();
}*/
static int _OnNationalitySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnNationalitySelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnNationalitySelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnNationalitySelendok();
}
/*static int _OnNationalitySetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnNationalityKillfocus();
}*/
/*static int _OnNationalityKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnNationalityKillfocus();
}*/
static int _OnNationalityLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnNationalityLoadData();
}
/*static int _OnNationalityAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnNationalityAddNew();
}*/
/*static int _OnRelativeChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnRelativeChange();
} */
/*static int _OnRelativeSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnRelativeKillfocus();} */ 
/*static int _OnRelativeKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnRelativeKillfocus();
} */
static int _OnRelativeCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnRelativeCheckValue();
} 
static int _OnRelationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnRelationSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnRelationSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRelationSelendok();
}
/*static int _OnRelationSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRelationKillfocus();
}*/
/*static int _OnRelationKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRelationKillfocus();
}*/
static int _OnRelationLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRelationLoadData();
}
/*static int _OnRelationAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnRelationAddNew();
}*/
/*static int _OnContactAddressChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnContactAddressChange();
} */
/*static int _OnContactAddressSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnContactAddressKillfocus();} */ 
/*static int _OnContactAddressKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnContactAddressKillfocus();
} */
static int _OnContactAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnContactAddressCheckValue();
} 
/*static int _OnPhoneChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPhoneChange();
} */
/*static int _OnPhoneSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPhoneKillfocus();} */ 
/*static int _OnPhoneKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnPhoneCheckValue();
} 
/*static int _OnMobileChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnMobileChange();
} */
/*static int _OnMobileSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnMobileKillfocus();} */ 
/*static int _OnMobileKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnMobileKillfocus();
} */
static int _OnMobileCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnMobileCheckValue();
} 
/*static int _OnExamDateChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnExamDateChange();
} */
/*static int _OnExamDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnExamDateKillfocus();} */ 
/*static int _OnExamDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnExamDateCheckValue();
} 
static int _OnCardTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnCardTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnCardTypeSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnCardTypeSelendok();
}
/*static int _OnCardTypeSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnCardTypeKillfocus();
}*/
/*static int _OnCardTypeKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnCardTypeKillfocus();
}*/
static int _OnCardTypeLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnCardTypeLoadData();
}
/*static int _OnCardTypeAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnCardTypeAddNew();
}*/
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSReception *pVw = (CHMSReception *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSReception *pVw = (CHMSReception *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSReception *pVw = (CHMSReception *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSReception *pVw = (CHMSReception *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSReception* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnStatusSelendokFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnStatusSelendok();
}
/*static int _OnStatusSetfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnStatusKillfocus();
}*/
/*static int _OnStatusKillfocusFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnStatusKillfocus();
}*/
static int _OnStatusLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnStatusLoadData();
}
/*static int _OnStatusAddNewFnc(CWnd *pWnd){
	 return ((CHMSReception *)pWnd)->OnStatusAddNew();
}*/
/*static int _OnBirthDateChangeFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnBirthDateChange();
} */
/*static int _OnBirthDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnBirthDateKillfocus();} */ 
/*static int _OnBirthDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSReception *)pWnd)->OnBirthDateCheckValue();
} 
static int _OnRoomListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSReception*)pWnd)->OnRoomListLoadData();
} 
static int _OnRoomListDblClickFnc(CWnd *pWnd){
	 return ((CHMSReception*)pWnd)->OnRoomListDblClick();
} 
static int _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSReception*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSReception*)pWnd)->OnRoomListDeleteItem();
} 
static int _OnAddHMSReceptionFnc(CWnd *pWnd){
	 return ((CHMSReception*)pWnd)->OnAddHMSReception();
} 
static int _OnEditHMSReceptionFnc(CWnd *pWnd){
	 return ((CHMSReception*)pWnd)->OnEditHMSReception();
} 
static int _OnDeleteHMSReceptionFnc(CWnd *pWnd){
	 return ((CHMSReception*)pWnd)->OnDeleteHMSReception();
} 
static int _OnSaveHMSReceptionFnc(CWnd *pWnd){
	 return ((CHMSReception*)pWnd)->OnSaveHMSReception();
} 
static int _OnCancelHMSReceptionFnc(CWnd *pWnd){
	 return ((CHMSReception*)pWnd)->OnCancelHMSReception();
} 
CHMSReception::CHMSReception(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 541;
	SetDefaultValues();
}
CHMSReception::~CHMSReception(){
}
void CHMSReception::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 519, 266);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 9, 23, 94, 45);
	m_wndPatientNo.Create(this,99, 23, 169, 45); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 174, 23, 238, 45);
	m_wndDocumentNo.Create(this,243, 23, 313, 45); 
	m_wndReceptNoLabel.Create(this, _T("Recept No"), 318, 23, 378, 45);
	m_wndReceptNo.Create(this,383, 23, 441, 45); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 9, 50, 94, 72);
	m_wndPatientName.Create(this,99, 50, 313, 72); 
	m_wndAgeLabel.Create(this, _T("Age"), 318, 50, 378, 72);
	m_wndAge.Create(this,383, 50, 441, 72); 
	m_wndSexLabel.Create(this, _T("Sex"), 9, 77, 94, 99);
	m_wndSex.Create(this,99, 77, 169, 99); 
	m_wndAddressLabel.Create(this, _T("Address"), 9, 104, 94, 126);
	m_wndAddress.Create(this,99, 104, 515, 126); 
	m_wndAddressDetailLabel.Create(this, _T("Address Detail"), 9, 131, 94, 153);
	m_wndAddressDetail.Create(this,99, 131, 515, 153); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 9, 158, 94, 180);
	m_wndWorkplace.Create(this,99, 158, 515, 180); 
	m_wndPolicyInformation.Create(this, _T("Policy Information"), 5, 271, 519, 370);
	m_wndCardNoLabel.Create(this, _T("Card No"), 9, 316, 94, 338);
	m_wndCardNo.Create(this,99, 316, 263, 338); 
	m_wndDiscount.Create(this,487, 316, 516, 338); 
	m_wndRegistrationDateLabel.Create(this, _T("Expiry"), 268, 316, 332, 338);
	m_wndRegistrationDate.Create(this,337, 316, 407, 338); 
	m_wndExpiryDate.Create(this,412, 316, 482, 338); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 9, 343, 94, 365);
	m_wndRegistrationPlace.Create(this,99, 343, 515, 365); 
	m_wndPolicyLabel.Create(this, _T("Policy"), 9, 289, 94, 311);
	m_wndPolicy.Create(this,99, 289, 263, 311); 
	m_wndExaminationInformation.Create(this, _T("Examination Information"), 5, 375, 519, 447);
	m_wndRoomLabel.Create(this, _T("Room"), 9, 419, 94, 441);
	m_wndRoom.Create(this,99, 419, 263, 441); 
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 268, 419, 332, 441);
	m_wndType.Create(this,337, 419, 515, 441); 
	m_wndTransferInformation.Create(this, _T("Transfer Information"), 5, 452, 519, 523);
	m_wndHospitalLabel.Create(this, _T("Hospital"), 9, 470, 94, 492);
	m_wndHospital.Create(this,99, 470, 515, 492); 
	m_wndDiseaseLabel.Create(this, _T("Disease"), 9, 497, 94, 519);
	m_wndDisease.Create(this,99, 497, 515, 519); 
	m_wndNationLabel.Create(this, _T("Nation"), 174, 77, 238, 99);
	m_wndNation.Create(this,243, 77, 313, 99); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 318, 77, 378, 99);
	m_wndNationality.Create(this,383, 77, 515, 99); 
	m_wndRelativeLabel.Create(this, _T("Relative"), 9, 185, 94, 207);
	m_wndRelative.Create(this,99, 185, 263, 207); 
	m_wndRelationLabel.Create(this, _T("Relation"), 268, 185, 332, 207);
	m_wndRelation.Create(this,337, 185, 515, 207); 
	m_wndContactAddressLabel.Create(this, _T("Contact Address"), 9, 212, 94, 234);
	m_wndContactAddress.Create(this,99, 212, 515, 234); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 9, 239, 94, 261);
	m_wndPhone.Create(this,99, 239, 263, 261); 
	m_wndMobile.Create(this,337, 239, 515, 261); 
	m_wndExamDateLabel.Create(this, _T("Examination Date"), 9, 393, 94, 415);
	m_wndExamDate.Create(this,99, 393, 193, 415); 
	m_wndCardTypeLabel.Create(this, _T("Card Type"), 268, 289, 332, 311);
	m_wndCardType.Create(this,337, 289, 517, 311); 
	m_wndAdd.Create(this, _T("&Add"), 523, 498, 584, 520);
	m_wndEdit.Create(this, _T("&Edit"), 589, 498, 650, 520);
	m_wndDelete.Create(this, _T("&Delete"), 655, 498, 716, 520);
	m_wndSave.Create(this, _T("&Save"), 721, 498, 782, 520);
	m_wndMobileLabel.Create(this, _T("Mobile"), 268, 239, 332, 261);
	m_wndStatusLabel.Create(this, _T("Status"), 268, 394, 332, 414);
	m_wndStatus.Create(this,337, 394, 515, 414); 
	m_wndBirthDate.Create(this,446, 50, 515, 72); 
	m_wndRoomsInformation.Create(this, _T("Rooms Information"), 524, 5, 780, 494);
	m_wndRoomList.Create(this,528, 23, 778, 491); 

}
void CHMSReception::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetDataRequirement(TRUE);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetDataRequirement(TRUE);
	m_wndReceptNo.SetLimitText(1024);
	m_wndReceptNo.SetDataRequirement(TRUE);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetDataRequirement(TRUE);
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetDataRequirement(TRUE);
	m_wndSex.SetDataRequirement(TRUE);
	m_wndSex.LimitText(1024);
	m_wndAddress.SetDataRequirement(TRUE);
	m_wndAddress.LimitText(1024);
	m_wndAddressDetail.SetLimitText(1024);
	m_wndAddressDetail.SetDataRequirement(TRUE);
	m_wndWorkplace.SetLimitText(1024);
	m_wndWorkplace.SetDataRequirement(TRUE);
	m_wndCardNo.SetLimitText(1024);
	m_wndCardNo.SetDataRequirement(TRUE);
	m_wndDiscount.SetLimitText(1024);
	m_wndDiscount.SetDataRequirement(TRUE);
	m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetDataRequirement(TRUE);
	m_wndExpiryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetDataRequirement(TRUE);
	m_wndRegistrationPlace.SetDataRequirement(TRUE);
	m_wndRegistrationPlace.LimitText(1024);
	m_wndPolicy.SetDataRequirement(TRUE);
	m_wndPolicy.LimitText(1024);
	m_wndRoom.SetDataRequirement(TRUE);
	m_wndRoom.LimitText(1024);
	m_wndType.SetDataRequirement(TRUE);
	m_wndType.LimitText(1024);
	m_wndHospital.SetDataRequirement(TRUE);
	m_wndHospital.LimitText(1024);
	m_wndDisease.SetDataRequirement(TRUE);
	m_wndDisease.LimitText(1024);
	m_wndNation.SetDataRequirement(TRUE);
	m_wndNation.LimitText(1024);
	m_wndNationality.SetDataRequirement(TRUE);
	m_wndNationality.LimitText(1024);
	m_wndRelative.SetLimitText(1024);
	m_wndRelative.SetDataRequirement(TRUE);
	m_wndRelation.SetDataRequirement(TRUE);
	m_wndRelation.LimitText(1024);
	m_wndContactAddress.SetLimitText(1024);
	m_wndContactAddress.SetDataRequirement(TRUE);
	m_wndPhone.SetLimitText(1024);
	m_wndPhone.SetDataRequirement(TRUE);
	m_wndMobile.SetLimitText(1024);
	m_wndMobile.SetDataRequirement(TRUE);
	m_wndExamDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndExamDate.SetDataRequirement(TRUE);
	m_wndCardType.SetDataRequirement(TRUE);
	m_wndCardType.LimitText(1024);
	m_wndStatus.SetDataRequirement(TRUE);
	m_wndStatus.LimitText(1024);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetDataRequirement(TRUE);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndAddress.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAddress.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRegistrationPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRegistrationPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPolicy.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPolicy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndHospital.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndHospital.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNation.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndNation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNationality.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndNationality.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRelation.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRelation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCardType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndCardType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRoomList.InsertColumn(0, _T("Room"), CFMT_TEXT, 120);
	m_wndRoomList.InsertColumn(1, _T("Reg"), CFMT_NUMBER, 40);
	m_wndRoomList.InsertColumn(2, _T("Exam"), CFMT_NUMBER, 40);
	m_wndRoomList.InsertColumn(3, _T("Remain"), CFMT_NUMBER, 45);

}
void CHMSReception::OnSetWindowEvents(){
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
	m_wndRegistrationPlace.SetEvent(WE_SELENDOK, _OnRegistrationPlaceSelendokFnc);
	//m_wndRegistrationPlace.SetEvent(WE_SETFOCUS, _OnRegistrationPlaceSetfocusFnc);
	//m_wndRegistrationPlace.SetEvent(WE_KILLFOCUS, _OnRegistrationPlaceKillfocusFnc);
	m_wndRegistrationPlace.SetEvent(WE_SELCHANGE, _OnRegistrationPlaceSelectChangeFnc);
	m_wndRegistrationPlace.SetEvent(WE_LOADDATA, _OnRegistrationPlaceLoadDataFnc);
	//m_wndRegistrationPlace.SetEvent(WE_ADDNEW, _OnRegistrationPlaceAddNewFnc);
	m_wndPolicy.SetEvent(WE_SELENDOK, _OnPolicySelendokFnc);
	//m_wndPolicy.SetEvent(WE_SETFOCUS, _OnPolicySetfocusFnc);
	//m_wndPolicy.SetEvent(WE_KILLFOCUS, _OnPolicyKillfocusFnc);
	m_wndPolicy.SetEvent(WE_SELCHANGE, _OnPolicySelectChangeFnc);
	m_wndPolicy.SetEvent(WE_LOADDATA, _OnPolicyLoadDataFnc);
	//m_wndPolicy.SetEvent(WE_ADDNEW, _OnPolicyAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndHospital.SetEvent(WE_SELENDOK, _OnHospitalSelendokFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_SELCHANGE, _OnHospitalSelectChangeFnc);
	m_wndHospital.SetEvent(WE_LOADDATA, _OnHospitalLoadDataFnc);
	//m_wndHospital.SetEvent(WE_ADDNEW, _OnHospitalAddNewFnc);
	m_wndDisease.SetEvent(WE_SELENDOK, _OnDiseaseSelendokFnc);
	//m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
	//m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
	m_wndDisease.SetEvent(WE_SELCHANGE, _OnDiseaseSelectChangeFnc);
	m_wndDisease.SetEvent(WE_LOADDATA, _OnDiseaseLoadDataFnc);
	//m_wndDisease.SetEvent(WE_ADDNEW, _OnDiseaseAddNewFnc);
	m_wndNation.SetEvent(WE_SELENDOK, _OnNationSelendokFnc);
	//m_wndNation.SetEvent(WE_SETFOCUS, _OnNationSetfocusFnc);
	//m_wndNation.SetEvent(WE_KILLFOCUS, _OnNationKillfocusFnc);
	m_wndNation.SetEvent(WE_SELCHANGE, _OnNationSelectChangeFnc);
	m_wndNation.SetEvent(WE_LOADDATA, _OnNationLoadDataFnc);
	//m_wndNation.SetEvent(WE_ADDNEW, _OnNationAddNewFnc);
	m_wndNationality.SetEvent(WE_SELENDOK, _OnNationalitySelendokFnc);
	//m_wndNationality.SetEvent(WE_SETFOCUS, _OnNationalitySetfocusFnc);
	//m_wndNationality.SetEvent(WE_KILLFOCUS, _OnNationalityKillfocusFnc);
	m_wndNationality.SetEvent(WE_SELCHANGE, _OnNationalitySelectChangeFnc);
	m_wndNationality.SetEvent(WE_LOADDATA, _OnNationalityLoadDataFnc);
	//m_wndNationality.SetEvent(WE_ADDNEW, _OnNationalityAddNewFnc);
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
	//m_wndMobile.SetEvent(WE_CHANGE, _OnMobileChangeFnc);
	//m_wndMobile.SetEvent(WE_SETFOCUS, _OnMobileSetfocusFnc);
	//m_wndMobile.SetEvent(WE_KILLFOCUS, _OnMobileKillfocusFnc);
	m_wndMobile.SetEvent(WE_CHECKVALUE, _OnMobileCheckValueFnc);
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	m_wndCardType.SetEvent(WE_SELENDOK, _OnCardTypeSelendokFnc);
	//m_wndCardType.SetEvent(WE_SETFOCUS, _OnCardTypeSetfocusFnc);
	//m_wndCardType.SetEvent(WE_KILLFOCUS, _OnCardTypeKillfocusFnc);
	m_wndCardType.SetEvent(WE_SELCHANGE, _OnCardTypeSelectChangeFnc);
	m_wndCardType.SetEvent(WE_LOADDATA, _OnCardTypeLoadDataFnc);
	//m_wndCardType.SetEvent(WE_ADDNEW, _OnCardTypeAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	//m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.AddEvent(1, _T("Delete"), _OnRoomListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSReceptionFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSReceptionFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSReceptionFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSReceptionFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSReceptionFnc, 0, 'T', VK_CONTROL);

}
void CHMSReception::OnDoDataExchange(CDataExchange* pDX){
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
	DDX_TextEx(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlaceKey);
	DDX_TextEx(pDX, m_wndPolicy.GetDlgCtrlID(), m_szPolicyKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospitalKey);
	DDX_TextEx(pDX, m_wndDisease.GetDlgCtrlID(), m_szDiseaseKey);
	DDX_TextEx(pDX, m_wndNation.GetDlgCtrlID(), m_szNationKey);
	DDX_TextEx(pDX, m_wndNationality.GetDlgCtrlID(), m_szNationalityKey);
	DDX_Text(pDX, m_wndRelative.GetDlgCtrlID(), m_szRelative);
	DDX_TextEx(pDX, m_wndRelation.GetDlgCtrlID(), m_szRelationKey);
	DDX_Text(pDX, m_wndContactAddress.GetDlgCtrlID(), m_szContactAddress);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndMobile.GetDlgCtrlID(), m_szMobile);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_TextEx(pDX, m_wndCardType.GetDlgCtrlID(), m_szCardTypeKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);

}
void CHMSReception::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSReception::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSReception::SetDefaultValues(){

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
	m_szRegistrationPlaceKey.Empty();
	m_szPolicyKey.Empty();
	m_szRoomKey.Empty();
	m_szTypeKey.Empty();
	m_szHospitalKey.Empty();
	m_szDiseaseKey.Empty();
	m_szNationKey.Empty();
	m_szNationalityKey.Empty();
	m_szRelative.Empty();
	m_szRelationKey.Empty();
	m_szContactAddress.Empty();
	m_szPhone.Empty();
	m_szMobile.Empty();
	m_szExamDate.Empty();
	m_szCardTypeKey.Empty();
	m_szStatusKey.Empty();
	m_szBirthDate.Empty();

}
/*int CHMSReception::OnPatientNoChange(){
	return 0;
} */
/*int CHMSReception::OnPatientNoSetfocus(){
	return 0;
} */
/*int CHMSReception::OnPatientNoKillfocus(){
	return 0;
} */
int CHMSReception::OnPatientNoCheckValue(){
	return 0;
} 
/*int CHMSReception::OnDocumentNoChange(){
	return 0;
} */
/*int CHMSReception::OnDocumentNoSetfocus(){
	return 0;
} */
/*int CHMSReception::OnDocumentNoKillfocus(){
	return 0;
} */
int CHMSReception::OnDocumentNoCheckValue(){
	return 0;
} 
/*int CHMSReception::OnReceptNoChange(){
	return 0;
} */
/*int CHMSReception::OnReceptNoSetfocus(){
	return 0;
} */
/*int CHMSReception::OnReceptNoKillfocus(){
	return 0;
} */
int CHMSReception::OnReceptNoCheckValue(){
	return 0;
} 
/*int CHMSReception::OnPatientNameChange(){
	return 0;
} */
/*int CHMSReception::OnPatientNameSetfocus(){
	return 0;
} */
/*int CHMSReception::OnPatientNameKillfocus(){
	return 0;
} */
int CHMSReception::OnPatientNameCheckValue(){
	return 0;
} 
/*int CHMSReception::OnAgeChange(){
	return 0;
} */
/*int CHMSReception::OnAgeSetfocus(){
	return 0;
} */
/*int CHMSReception::OnAgeKillfocus(){
	return 0;
} */
int CHMSReception::OnAgeCheckValue(){
	return 0;
} 
int CHMSReception::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnSexSelendok(){
	 return 0;
}
/*int CHMSReception::OnSexSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnSexKillfocus(){
	 return 0;
}*/
int CHMSReception::OnSexLoadData(){
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
/*int CHMSReception::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSReception::OnAddressSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnAddressSelendok(){
	 return 0;
}
/*int CHMSReception::OnAddressSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnAddressKillfocus(){
	 return 0;
}*/
int CHMSReception::OnAddressLoadData(){
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
/*int CHMSReception::OnAddressAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSReception::OnAddressDetailChange(){
	return 0;
} */
/*int CHMSReception::OnAddressDetailSetfocus(){
	return 0;
} */
/*int CHMSReception::OnAddressDetailKillfocus(){
	return 0;
} */
int CHMSReception::OnAddressDetailCheckValue(){
	return 0;
} 
/*int CHMSReception::OnWorkplaceChange(){
	return 0;
} */
/*int CHMSReception::OnWorkplaceSetfocus(){
	return 0;
} */
/*int CHMSReception::OnWorkplaceKillfocus(){
	return 0;
} */
int CHMSReception::OnWorkplaceCheckValue(){
	return 0;
} 
/*int CHMSReception::OnCardNoChange(){
	return 0;
} */
/*int CHMSReception::OnCardNoSetfocus(){
	return 0;
} */
/*int CHMSReception::OnCardNoKillfocus(){
	return 0;
} */
int CHMSReception::OnCardNoCheckValue(){
	return 0;
} 
/*int CHMSReception::OnDiscountChange(){
	return 0;
} */
/*int CHMSReception::OnDiscountSetfocus(){
	return 0;
} */
/*int CHMSReception::OnDiscountKillfocus(){
	return 0;
} */
int CHMSReception::OnDiscountCheckValue(){
	return 0;
} 
/*int CHMSReception::OnRegistrationDateChange(){
	return 0;
} */
/*int CHMSReception::OnRegistrationDateSetfocus(){
	return 0;
} */
/*int CHMSReception::OnRegistrationDateKillfocus(){
	return 0;
} */
int CHMSReception::OnRegistrationDateCheckValue(){
	return 0;
} 
/*int CHMSReception::OnExpiryDateChange(){
	return 0;
} */
/*int CHMSReception::OnExpiryDateSetfocus(){
	return 0;
} */
/*int CHMSReception::OnExpiryDateKillfocus(){
	return 0;
} */
int CHMSReception::OnExpiryDateCheckValue(){
	return 0;
} 
int CHMSReception::OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnRegistrationPlaceSelendok(){
	 return 0;
}
/*int CHMSReception::OnRegistrationPlaceSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnRegistrationPlaceKillfocus(){
	 return 0;
}*/
int CHMSReception::OnRegistrationPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRegistrationPlace.IsSearchKey()){
	};
	m_wndRegistrationPlace.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRegistrationPlace.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSReception::OnRegistrationPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSReception::OnPolicySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnPolicySelendok(){
	 return 0;
}
/*int CHMSReception::OnPolicySetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnPolicyKillfocus(){
	 return 0;
}*/
int CHMSReception::OnPolicyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPolicy.IsSearchKey()){
	};
	m_wndPolicy.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPolicy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSReception::OnPolicyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSReception::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnRoomSelendok(){
	 return 0;
}
/*int CHMSReception::OnRoomSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnRoomKillfocus(){
	 return 0;
}*/
int CHMSReception::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey()){
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSReception::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSReception::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnTypeSelendok(){
	 return 0;
}
/*int CHMSReception::OnTypeSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnTypeKillfocus(){
	 return 0;
}*/
int CHMSReception::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSReception::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSReception::OnHospitalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnHospitalSelendok(){
	 return 0;
}
/*int CHMSReception::OnHospitalSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnHospitalKillfocus(){
	 return 0;
}*/
int CHMSReception::OnHospitalLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHospital.IsSearchKey()){
	};
	m_wndHospital.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHospital.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSReception::OnHospitalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSReception::OnDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnDiseaseSelendok(){
	 return 0;
}
/*int CHMSReception::OnDiseaseSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnDiseaseKillfocus(){
	 return 0;
}*/
int CHMSReception::OnDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDisease.IsSearchKey()){
	};
	m_wndDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSReception::OnDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSReception::OnNationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnNationSelendok(){
	 return 0;
}
/*int CHMSReception::OnNationSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnNationKillfocus(){
	 return 0;
}*/
int CHMSReception::OnNationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNation.IsSearchKey()){
	};
	m_wndNation.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSReception::OnNationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSReception::OnNationalitySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnNationalitySelendok(){
	 return 0;
}
/*int CHMSReception::OnNationalitySetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnNationalityKillfocus(){
	 return 0;
}*/
int CHMSReception::OnNationalityLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNationality.IsSearchKey()){
	};
	m_wndNationality.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNationality.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSReception::OnNationalityAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSReception::OnRelativeChange(){
	return 0;
} */
/*int CHMSReception::OnRelativeSetfocus(){
	return 0;
} */
/*int CHMSReception::OnRelativeKillfocus(){
	return 0;
} */
int CHMSReception::OnRelativeCheckValue(){
	return 0;
} 
int CHMSReception::OnRelationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnRelationSelendok(){
	 return 0;
}
/*int CHMSReception::OnRelationSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnRelationKillfocus(){
	 return 0;
}*/
int CHMSReception::OnRelationLoadData(){
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
/*int CHMSReception::OnRelationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSReception::OnContactAddressChange(){
	return 0;
} */
/*int CHMSReception::OnContactAddressSetfocus(){
	return 0;
} */
/*int CHMSReception::OnContactAddressKillfocus(){
	return 0;
} */
int CHMSReception::OnContactAddressCheckValue(){
	return 0;
} 
/*int CHMSReception::OnPhoneChange(){
	return 0;
} */
/*int CHMSReception::OnPhoneSetfocus(){
	return 0;
} */
/*int CHMSReception::OnPhoneKillfocus(){
	return 0;
} */
int CHMSReception::OnPhoneCheckValue(){
	return 0;
} 
/*int CHMSReception::OnMobileChange(){
	return 0;
} */
/*int CHMSReception::OnMobileSetfocus(){
	return 0;
} */
/*int CHMSReception::OnMobileKillfocus(){
	return 0;
} */
int CHMSReception::OnMobileCheckValue(){
	return 0;
} 
/*int CHMSReception::OnExamDateChange(){
	return 0;
} */
/*int CHMSReception::OnExamDateSetfocus(){
	return 0;
} */
/*int CHMSReception::OnExamDateKillfocus(){
	return 0;
} */
int CHMSReception::OnExamDateCheckValue(){
	return 0;
} 
int CHMSReception::OnCardTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnCardTypeSelendok(){
	 return 0;
}
/*int CHMSReception::OnCardTypeSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnCardTypeKillfocus(){
	 return 0;
}*/
int CHMSReception::OnCardTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCardType.IsSearchKey()){
	};
	m_wndCardType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCardType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSReception::OnCardTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSReception::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnStatusSelendok(){
	 return 0;
}
/*int CHMSReception::OnStatusSetfocus(){
	 return 0;
}*/
/*int CHMSReception::OnStatusKillfocus(){
	 return 0;
}*/
int CHMSReception::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey()){
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSReception::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSReception::OnBirthDateChange(){
	return 0;
} */
/*int CHMSReception::OnBirthDateSetfocus(){
	return 0;
} */
/*int CHMSReception::OnBirthDateKillfocus(){
	return 0;
} */
int CHMSReception::OnBirthDateCheckValue(){
	return 0;
} 
int CHMSReception::OnRoomListDblClick(){
	 return 0;
} 
int CHMSReception::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnRoomListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSReception::OnRoomListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	m_wndRoomList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("Room")), 
			rs.GetValue(_T("Reg")), 
			rs.GetValue(_T("Exam")), 
			rs.GetValue(_T("Remain")), NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSReception::OnAddHMSReception(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSReception"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSReception::OnEditHMSReception(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSReception"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSReception::OnDeleteHMSReception(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSReception(); 
 		OnHMSReceptionLoadData(); 
 	} */ return 0;
 } 
int CHMSReception::OnSaveHMSReception(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_vimes_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_vimes_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("HMSReception"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?N?NListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CHMSReception::OnCancelHMSReception(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	*/ 
 	return 0;
} 
