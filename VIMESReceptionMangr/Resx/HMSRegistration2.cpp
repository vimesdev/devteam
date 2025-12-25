#include "HMSRegistration2.h"
#include "MainFrm.h"
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CHMSRegistration2*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSRegistration2*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSRegistration2*)pWnd)->OnRoomListDeleteItem();
} 
static long _OnExamListLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2*)pWnd)->OnExamListLoadData();
} 
static void _OnExamListDblClickFnc(CWnd *pWnd){
	((CHMSRegistration2*)pWnd)->OnExamListDblClick();
} 
static void _OnExamListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSRegistration2*)pWnd)->OnExamListSelectChange(nOldItem, nNewItem);
} 
static int _OnExamListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSRegistration2*)pWnd)->OnExamListDeleteItem();
} 
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnCardNoFindChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnCardNoFindChange();
} */
/*static void _OnCardNoFindSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnCardNoFindSetfocus();} */ 
/*static void _OnCardNoFindKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnCardNoFindKillfocus();
} */
static int _OnCardNoFindCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnCardNoFindCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration2* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration2* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnEthnicAddNew();
}*/
static void _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration2* )pWnd)->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOccupationSelendokFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnOccupationSelendok();
}
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnOccupationKillfocus();
}*/
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnOccupationKillfocus();
}*/
static long _OnOccupationLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnOccupationLoadData();
}
/*static void _OnOccupationAddNewFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnOccupationAddNew();
}*/
static void _OnAddressSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration2* )pWnd)->OnAddressSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAddressSelendokFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnAddressSelendok();
}
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnAddressKillfocus();
}*/
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnAddressKillfocus();
}*/
static long _OnAddressLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnAddressLoadData();
}
/*static void _OnAddressAddNewFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnAddressAddNew();
}*/
/*static void _OnDetailAddressChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnDetailAddressChange();
} */
/*static void _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnDetailAddressSetfocus();} */ 
/*static void _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnDetailAddressCheckValue();
} 
/*static void _OnWorkingPlaceChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnWorkingPlaceChange();
} */
/*static void _OnWorkingPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnWorkingPlaceSetfocus();} */ 
/*static void _OnWorkingPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnWorkingPlaceKillfocus();
} */
static int _OnWorkingPlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnWorkingPlaceCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnPhoneCheckValue();
} 
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration2* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnRankAddNew();
}*/
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration2* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPositionAddNew();
}*/
/*static void _OnContactAddressChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnContactAddressChange();
} */
/*static void _OnContactAddressSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnContactAddressSetfocus();} */ 
/*static void _OnContactAddressKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnContactAddressKillfocus();
} */
static int _OnContactAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnContactAddressCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration2* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCardNoButtonSelectFnc(CWnd *pWnd){
	CHMSRegistration2 *pVw = (CHMSRegistration2 *)pWnd;
	pVw->OnCardNoButtonSelect();
} 
static void _OnPatientStateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration2* )pWnd)->OnPatientStateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientStateSelendokFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPatientStateSelendok();
}
/*static void _OnPatientStateSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPatientStateKillfocus();
}*/
/*static void _OnPatientStateKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPatientStateKillfocus();
}*/
static long _OnPatientStateLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnPatientStateLoadData();
}
/*static void _OnPatientStateAddNewFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnPatientStateAddNew();
}*/
/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnExamDateCheckValue();
} 
/*static void _OnSheetNoChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnSheetNoChange();
} */
/*static void _OnSheetNoSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnSheetNoSetfocus();} */ 
/*static void _OnSheetNoKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnSheetNoKillfocus();
} */
static int _OnSheetNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnSheetNoCheckValue();
} 
static void _OnExamTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration2* )pWnd)->OnExamTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamTypeSelendokFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExamTypeSelendok();
}
/*static void _OnExamTypeSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExamTypeKillfocus();
}*/
/*static void _OnExamTypeKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExamTypeKillfocus();
}*/
static long _OnExamTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnExamTypeLoadData();
}
/*static void _OnExamTypeAddNewFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExamTypeAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRegistration2* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnRoomAddNew();
}*/
/*static void _OnHospitalChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnHospitalChange();
} */
/*static void _OnHospitalSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnHospitalSetfocus();} */ 
/*static void _OnHospitalKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnHospitalKillfocus();
} */
static int _OnHospitalCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnHospitalCheckValue();
} 
/*static void _OnDiseaseChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnDiseaseChange();
} */
/*static void _OnDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnDiseaseSetfocus();} */ 
/*static void _OnDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnDiseaseKillfocus();
} */
static int _OnDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnDiseaseCheckValue();
} 
/*static void _OnExaminePerWeekChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExaminePerWeekChange();
} */
/*static void _OnExaminePerWeekSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExaminePerWeekSetfocus();} */ 
/*static void _OnExaminePerWeekKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExaminePerWeekKillfocus();
} */
static int _OnExaminePerWeekCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnExaminePerWeekCheckValue();
} 
/*static void _OnExaminePerMonthChangeFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExaminePerMonthChange();
} */
/*static void _OnExaminePerMonthSetfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExaminePerMonthSetfocus();} */ 
/*static void _OnExaminePerMonthKillfocusFnc(CWnd *pWnd){
	((CHMSRegistration2 *)pWnd)->OnExaminePerMonthKillfocus();
} */
static int _OnExaminePerMonthCheckValueFnc(CWnd *pWnd){
	return ((CHMSRegistration2 *)pWnd)->OnExaminePerMonthCheckValue();
} 
static void _OnAppointReexamineSelectFnc(CWnd *pWnd){
	 ((CHMSRegistration2*)pWnd)->OnAppointReexamineSelect();
}
static void _OnAddNewSelectFnc(CWnd *pWnd){
	CHMSRegistration2 *pVw = (CHMSRegistration2 *)pWnd;
	pVw->OnAddNewSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSRegistration2 *pVw = (CHMSRegistration2 *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSRegistration2 *pVw = (CHMSRegistration2 *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSRegistration2 *pVw = (CHMSRegistration2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSRegistration2 *pVw = (CHMSRegistration2 *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSRegistration2 *pVw = (CHMSRegistration2 *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSRegistration2Fnc(CWnd *pWnd){
	 return ((CHMSRegistration2*)pWnd)->OnAddHMSRegistration2();
} 
static int _OnEditHMSRegistration2Fnc(CWnd *pWnd){
	 return ((CHMSRegistration2*)pWnd)->OnEditHMSRegistration2();
} 
static int _OnDeleteHMSRegistration2Fnc(CWnd *pWnd){
	 return ((CHMSRegistration2*)pWnd)->OnDeleteHMSRegistration2();
} 
static int _OnSaveHMSRegistration2Fnc(CWnd *pWnd){
	 return ((CHMSRegistration2*)pWnd)->OnSaveHMSRegistration2();
} 
static int _OnCancelHMSRegistration2Fnc(CWnd *pWnd){
	 return ((CHMSRegistration2*)pWnd)->OnCancelHMSRegistration2();
} 
CHMSRegistration2::CHMSRegistration2(){

	m_nDlgWidth = 1015;
	m_nDlgHeight = 665;
	SetDefaultValues();
}
CHMSRegistration2::~CHMSRegistration2(){
}
void CHMSRegistration2::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 5, 690, 270);
	m_wndPatientObject.Create(this, _T("Patient Object"), 5, 275, 690, 330);
	m_wndExaminationInformation.Create(this, _T("Examination Information"), 5, 335, 690, 420);
	m_wndTransferInformation.Create(this, _T("Transfer Information"), 5, 425, 690, 510);
	m_wndRoomsInformation.Create(this, _T("Rooms Information"), 695, 5, 1005, 510);
	m_wndExaminationList.Create(this, _T("Examination History"), 5, 515, 1005, 630);
	m_wndRoomList.Create(this,700, 30, 1000, 505); 
	m_wndExamList.Create(this,10, 540, 690, 625); 
	m_wndPatientNoLabel.Create(this, _T("PID"), 10, 30, 110, 55);
	m_wndPatientNo.Create(this,115, 30, 195, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 200, 30, 275, 55);
	m_wndDocumentNo.Create(this,280, 30, 360, 55); 
	m_wndCardNoFindLabel.Create(this, _T("Card"), 365, 30, 445, 55);
	m_wndCardNoFind.Create(this,450, 30, 685, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 360, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 365, 60, 445, 85);
	m_wndAge.Create(this,450, 60, 555, 85); 
	m_wndBirthDate.Create(this,560, 60, 635, 85); 
	m_wndSexLabel.Create(this, _T("Sex"), 10, 90, 110, 115);
	m_wndSex.Create(this,115, 90, 195, 115); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 200, 90, 275, 115);
	m_wndEthnic.Create(this,280, 90, 360, 115); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 365, 90, 445, 115);
	m_wndOccupation.Create(this,450, 90, 685, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 110, 145);
	m_wndAddress.Create(this,116, 120, 686, 145); 
	m_wndDetailAddressLabel.Create(this, _T("Detail Address"), 10, 150, 110, 175);
	m_wndDetailAddress.Create(this,115, 150, 685, 175); 
	m_wndWorkingPlaceLabel.Create(this, _T("Working Place"), 10, 180, 110, 205);
	m_wndWorkingPlace.Create(this,115, 180, 360, 205); 
	m_wndPhoneLabel.Create(this, _T("Tel"), 365, 180, 445, 205);
	m_wndPhone.Create(this,450, 180, 685, 205); 
	m_wndRankLabel.Create(this, _T("Rank"), 10, 210, 110, 235);
	m_wndRank.Create(this,115, 210, 360, 235); 
	m_wndPositionLabel.Create(this, _T("Position"), 365, 210, 445, 235);
	m_wndPosition.Create(this,450, 210, 685, 235); 
	m_wndContactAddressLabel.Create(this, _T("Contact Addr"), 10, 240, 110, 265);
	m_wndContactAddress.Create(this,115, 240, 685, 265); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 300, 110, 325);
	m_wndObject.Create(this,115, 300, 360, 325); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 365, 300, 445, 325);
	m_wndCardNo.Create(this,450, 301, 655, 326); 
	m_wndCardNoButton.Create(this, _T("..."), 660, 301, 685, 326);
	m_wndPatientStateLabel.Create(this, _T("Patient State"), 10, 360, 110, 385);
	m_wndPatientState.Create(this,115, 360, 360, 385); 
	m_wndExamDateLabel.Create(this, _T("Date"), 365, 360, 445, 385);
	m_wndExamDate.Create(this,450, 360, 530, 385); 
	m_wndSheetNoLabel.Create(this, _T("Sheet No"), 535, 360, 605, 385);
	m_wndSheetNo.Create(this,610, 360, 685, 385); 
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 10, 390, 110, 415);
	m_wndExamType.Create(this,115, 390, 360, 415); 
	m_wndRoomLabel.Create(this, _T("Room"), 365, 390, 445, 415);
	m_wndRoom.Create(this,450, 390, 685, 415); 
	m_wndHospitalLabel.Create(this, _T("Hospital"), 10, 450, 110, 475);
	m_wndHospital.Create(this,115, 450, 685, 475); 
	m_wndDiseaseLabel.Create(this, _T("Disease"), 10, 480, 110, 505);
	m_wndDisease.Create(this,115, 480, 685, 505); 
	m_wndExaminePerWeekLabel.Create(this, _T("Examine Per Week"), 720, 540, 910, 565);
	m_wndExaminePerWeek.Create(this,915, 540, 1000, 565); 
	m_wndExaminePerMonthLabel.Create(this, _T("Examine Per Month"), 720, 570, 910, 595);
	m_wndExaminePerMonth.Create(this,915, 570, 1000, 595); 
	m_wndAppointReexamine.Create(this, _T("Appoint Re-examine"), 720, 600, 910, 625);
	m_wndAddNew.Create(this, _T("&Add Patient"), 5, 635, 115, 660);
	m_wndEdit.Create(this, _T("&Edit"), 120, 635, 230, 660);
	m_wndDelete.Create(this, _T("Delete"), 235, 635, 345, 660);
	m_wndSave.Create(this, _T("&Save"), 350, 635, 460, 660);
	m_wndCancel.Create(this, _T("&Cancel"), 465, 635, 575, 660);
	m_wndPrint.Create(this, _T("&Print"), 580, 635, 690, 660);

}
void CHMSRegistration2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndCardNoFind.SetLimitText(1024);
	m_wndCardNoFind.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(1024);
	m_wndAge.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1024);
	m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(1024);
	m_wndOccupation.SetCheckValue(true);
	m_wndOccupation.LimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndAddress.LimitText(1024);
	m_wndDetailAddress.SetLimitText(1024);
	m_wndDetailAddress.SetCheckValue(true);
	m_wndWorkingPlace.SetLimitText(1024);
	m_wndWorkingPlace.SetCheckValue(true);
	m_wndPhone.SetLimitText(11);
	m_wndPhone.SetCheckValue(true);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(35);
	m_wndPosition.SetCheckValue(true);
	m_wndPosition.LimitText(35);
	m_wndContactAddress.SetLimitText(35);
	m_wndContactAddress.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndCardNo.SetLimitText(1024);
	m_wndCardNo.SetCheckValue(true);
	m_wndPatientState.SetCheckValue(true);
	m_wndPatientState.LimitText(1024);
	m_wndExamDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExamDate.SetCheckValue(true);
	m_wndSheetNo.SetLimitText(35);
	m_wndSheetNo.SetCheckValue(true);
	m_wndExamType.SetCheckValue(true);
	m_wndExamType.LimitText(1024);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndHospital.SetLimitText(1024);
	m_wndHospital.SetCheckValue(true);
	m_wndDisease.SetLimitText(1024);
	m_wndDisease.SetCheckValue(true);
	m_wndExaminePerWeek.SetLimitText(16);
	m_wndExaminePerWeek.SetCheckValue(true);
	m_wndExaminePerMonth.SetLimitText(16);
	m_wndExaminePerMonth.SetCheckValue(true);


	m_wndRoomList.InsertColumn(0, _T("Room"), CFMT_TEXT, 150);
	m_wndRoomList.InsertColumn(1, _T("Reg"), CFMT_NUMBER, 60);
	m_wndRoomList.InsertColumn(2, _T("Examed"), CFMT_NUMBER, 60);


	m_wndExamList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 80);
	m_wndExamList.InsertColumn(1, _T("Examination Date"), CFMT_DATE, 120);
	m_wndExamList.InsertColumn(2, _T("Examination Room"), CFMT_TEXT, 150);
	m_wndExamList.InsertColumn(3, _T("Sheet No"), CFMT_TEXT, 70);
	m_wndExamList.InsertColumn(4, _T("Doctor"), CFMT_TEXT, 120);
	m_wndExamList.InsertColumn(5, _T("Status"), CFMT_TEXT, 80);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndOccupation.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndOccupation.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndAddress.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAddress.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndRank.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPosition.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPatientState.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPatientState.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndExamType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExamType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("hmsp_createdby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hmsp_createddate"), dfText, 4); 
	m_hms_patientTbl.AddField(_T("hmsp_updatedby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hmsp_patientno"), dfInteger); 
	m_hms_patientTbl.AddField(_T("hmsp_patientid"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hmsp_surname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hmsp_midname"), dfText, 45); 
	m_hms_patientTbl.AddField(_T("hmsp_firstname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hmsp_birthdate"), dfDate); 
	m_hms_patientTbl.AddField(_T("hmsp_age"), dfText, 7); 
	m_hms_patientTbl.AddField(_T("hmsp_sex"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hmsp_nation"), dfInteger); 
	m_hms_patientTbl.AddField(_T("hmsp_sin"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hmsp_provid"), dfInteger); 
	m_hms_patientTbl.AddField(_T("hmsp_distid"), dfInteger); 
	m_hms_patientTbl.AddField(_T("hmsp_villid"), dfInteger); 
	m_hms_patientTbl.AddField(_T("hmsp_dtladdr"), dfText, 81); 
	m_hms_patientTbl.AddField(_T("hmsp_adocno"), dfInteger); 
	m_hms_patientTbl.AddField(_T("hmsp_status"), dfText, 1); 
	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hmsd_createdby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hmsd_createddate"), dfText, 4); 
	m_hms_docTbl.AddField(_T("hmsd_updatedby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hmsd_docno"), dfInteger); 
	m_hms_docTbl.AddField(_T("hmsd_patientno"), dfInteger); 
	m_hms_docTbl.AddField(_T("hmsd_status"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hmsd_workplace"), dfText, 81); 
	m_hms_docTbl.AddField(_T("hmsd_phone"), dfText, 13); 
	m_hms_docTbl.AddField(_T("hmsd_relative"), dfText, 65); 
	m_hms_docTbl.AddField(_T("hmsd_relation"), dfInteger); 
	m_hms_docTbl.AddField(_T("hmsd_reladdress"), dfText, 254); 
	m_hms_docTbl.AddField(_T("hmsd_relphone"), dfText, 13); 
	m_hms_docTbl.AddField(_T("hmsd_transflag"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hmsd_transplace"), dfText, 254); 
	m_hms_docTbl.AddField(_T("hmsd_transdiagn"), dfText, 254); 
	m_hms_docTbl.AddField(_T("hmsd_state"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hmsd_objectid"), dfInteger); 
	m_hms_docTbl.AddField(_T("hmsd_cardno"), dfText, 25); 
	m_hms_docTbl.AddField(_T("hmsd_cardidx"), dfInteger); 
	m_hms_docTbl.AddField(_T("hmsd_entrydate"), dfText, 4); 
	m_hms_docTbl.AddField(_T("hmsd_fdeptid"), dfText, 7); 
	m_hms_cardTbl.SetTableName(_T("hms_card"));
	m_hms_cardTbl.AddField(_T("hmsc_createdby"), dfText, 15); 
	m_hms_cardTbl.AddField(_T("hmsc_createddate"), dfText, 4); 
	m_hms_cardTbl.AddField(_T("hmsc_updatedby"), dfText, 15); 
	m_hms_cardTbl.AddField(_T("hmsc_cardno"), dfText, 25); 
	m_hms_cardTbl.AddField(_T("hmsc_patientno"), dfInteger); 
	m_hms_cardTbl.AddField(_T("hmsc_idx"), dfInteger); 
	m_hms_cardTbl.AddField(_T("hmsc_discount"), dfInteger); 
	m_hms_cardTbl.AddField(_T("hmsc_regdate"), dfDate); 
	m_hms_cardTbl.AddField(_T("hmsc_expdate"), dfDate); 
	m_hms_cardTbl.AddField(_T("hmsc_regplacecde"), dfText, 7); 
	m_hms_cardTbl.AddField(_T("hmsc_check"), dfText, 1); 
	m_hms_cardTbl.AddField(_T("hmsc_object"), dfText, 3); 
	m_hms_exmdocdtlTbl.SetTableName(_T("hms_exmdocdtl"));
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_createdby"), dfText, 15); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_createddate"), dfText, 4); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_updatedby"), dfText, 15); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_docno"), dfInteger); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_patientno"), dfInteger); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_deptid"), dfText, 7); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_wardid"), dfInteger); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_receptno"), dfInteger); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_receptidx"), dfInteger); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_entrydate"), dfText, 4); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_status"), dfText, 1); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_desc"), dfText, 254); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_conclude"), dfText, 254); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_doctor"), dfText, 15); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_type"), dfInteger); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_joable"), dfText, 1); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_isjo"), dfText, 1); 
	m_hms_exmdocdtlTbl.AddField(_T("hmsedd_feeidx"), dfInteger); 

}
void CHMSRegistration2::OnSetWindowEvents(){
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.AddEvent(1, _T("Delete"), _OnRoomListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExamList.SetEvent(WE_SELCHANGE, _OnExamListSelectChangeFnc);
	m_wndExamList.SetEvent(WE_LOADDATA, _OnExamListLoadDataFnc);
	m_wndExamList.SetEvent(WE_DBLCLICK, _OnExamListDblClickFnc);
	m_wndExamList.AddEvent(1, _T("Delete"), _OnExamListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndCardNoFind.SetEvent(WE_CHANGE, _OnCardNoFindChangeFnc);
	//m_wndCardNoFind.SetEvent(WE_SETFOCUS, _OnCardNoFindSetfocusFnc);
	//m_wndCardNoFind.SetEvent(WE_KILLFOCUS, _OnCardNoFindKillfocusFnc);
	m_wndCardNoFind.SetEvent(WE_CHECKVALUE, _OnCardNoFindCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	m_wndEthnic.SetEvent(WE_SELENDOK, _OnEthnicSelendokFnc);
	//m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
	//m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
	m_wndEthnic.SetEvent(WE_SELCHANGE, _OnEthnicSelectChangeFnc);
	m_wndEthnic.SetEvent(WE_LOADDATA, _OnEthnicLoadDataFnc);
	//m_wndEthnic.SetEvent(WE_ADDNEW, _OnEthnicAddNewFnc);
	m_wndOccupation.SetEvent(WE_SELENDOK, _OnOccupationSelendokFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_SELCHANGE, _OnOccupationSelectChangeFnc);
	m_wndOccupation.SetEvent(WE_LOADDATA, _OnOccupationLoadDataFnc);
	//m_wndOccupation.SetEvent(WE_ADDNEW, _OnOccupationAddNewFnc);
	m_wndAddress.SetEvent(WE_SELENDOK, _OnAddressSelendokFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_SELCHANGE, _OnAddressSelectChangeFnc);
	m_wndAddress.SetEvent(WE_LOADDATA, _OnAddressLoadDataFnc);
	//m_wndAddress.SetEvent(WE_ADDNEW, _OnAddressAddNewFnc);
	//m_wndDetailAddress.SetEvent(WE_CHANGE, _OnDetailAddressChangeFnc);
	//m_wndDetailAddress.SetEvent(WE_SETFOCUS, _OnDetailAddressSetfocusFnc);
	//m_wndDetailAddress.SetEvent(WE_KILLFOCUS, _OnDetailAddressKillfocusFnc);
	m_wndDetailAddress.SetEvent(WE_CHECKVALUE, _OnDetailAddressCheckValueFnc);
	//m_wndWorkingPlace.SetEvent(WE_CHANGE, _OnWorkingPlaceChangeFnc);
	//m_wndWorkingPlace.SetEvent(WE_SETFOCUS, _OnWorkingPlaceSetfocusFnc);
	//m_wndWorkingPlace.SetEvent(WE_KILLFOCUS, _OnWorkingPlaceKillfocusFnc);
	m_wndWorkingPlace.SetEvent(WE_CHECKVALUE, _OnWorkingPlaceCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	m_wndPosition.SetEvent(WE_SELENDOK, _OnPositionSelendokFnc);
	//m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
	//m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
	m_wndPosition.SetEvent(WE_SELCHANGE, _OnPositionSelectChangeFnc);
	m_wndPosition.SetEvent(WE_LOADDATA, _OnPositionLoadDataFnc);
	//m_wndPosition.SetEvent(WE_ADDNEW, _OnPositionAddNewFnc);
	//m_wndContactAddress.SetEvent(WE_CHANGE, _OnContactAddressChangeFnc);
	//m_wndContactAddress.SetEvent(WE_SETFOCUS, _OnContactAddressSetfocusFnc);
	//m_wndContactAddress.SetEvent(WE_KILLFOCUS, _OnContactAddressKillfocusFnc);
	m_wndContactAddress.SetEvent(WE_CHECKVALUE, _OnContactAddressCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndCardNoButton.SetEvent(WE_CLICK, _OnCardNoButtonSelectFnc);
	m_wndPatientState.SetEvent(WE_SELENDOK, _OnPatientStateSelendokFnc);
	//m_wndPatientState.SetEvent(WE_SETFOCUS, _OnPatientStateSetfocusFnc);
	//m_wndPatientState.SetEvent(WE_KILLFOCUS, _OnPatientStateKillfocusFnc);
	m_wndPatientState.SetEvent(WE_SELCHANGE, _OnPatientStateSelectChangeFnc);
	m_wndPatientState.SetEvent(WE_LOADDATA, _OnPatientStateLoadDataFnc);
	//m_wndPatientState.SetEvent(WE_ADDNEW, _OnPatientStateAddNewFnc);
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	//m_wndSheetNo.SetEvent(WE_CHANGE, _OnSheetNoChangeFnc);
	//m_wndSheetNo.SetEvent(WE_SETFOCUS, _OnSheetNoSetfocusFnc);
	//m_wndSheetNo.SetEvent(WE_KILLFOCUS, _OnSheetNoKillfocusFnc);
	m_wndSheetNo.SetEvent(WE_CHECKVALUE, _OnSheetNoCheckValueFnc);
	m_wndExamType.SetEvent(WE_SELENDOK, _OnExamTypeSelendokFnc);
	//m_wndExamType.SetEvent(WE_SETFOCUS, _OnExamTypeSetfocusFnc);
	//m_wndExamType.SetEvent(WE_KILLFOCUS, _OnExamTypeKillfocusFnc);
	m_wndExamType.SetEvent(WE_SELCHANGE, _OnExamTypeSelectChangeFnc);
	m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
	//m_wndExamType.SetEvent(WE_ADDNEW, _OnExamTypeAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	//m_wndHospital.SetEvent(WE_CHANGE, _OnHospitalChangeFnc);
	//m_wndHospital.SetEvent(WE_SETFOCUS, _OnHospitalSetfocusFnc);
	//m_wndHospital.SetEvent(WE_KILLFOCUS, _OnHospitalKillfocusFnc);
	m_wndHospital.SetEvent(WE_CHECKVALUE, _OnHospitalCheckValueFnc);
	//m_wndDisease.SetEvent(WE_CHANGE, _OnDiseaseChangeFnc);
	//m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
	//m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
	m_wndDisease.SetEvent(WE_CHECKVALUE, _OnDiseaseCheckValueFnc);
	//m_wndExaminePerWeek.SetEvent(WE_CHANGE, _OnExaminePerWeekChangeFnc);
	//m_wndExaminePerWeek.SetEvent(WE_SETFOCUS, _OnExaminePerWeekSetfocusFnc);
	//m_wndExaminePerWeek.SetEvent(WE_KILLFOCUS, _OnExaminePerWeekKillfocusFnc);
	m_wndExaminePerWeek.SetEvent(WE_CHECKVALUE, _OnExaminePerWeekCheckValueFnc);
	//m_wndExaminePerMonth.SetEvent(WE_CHANGE, _OnExaminePerMonthChangeFnc);
	//m_wndExaminePerMonth.SetEvent(WE_SETFOCUS, _OnExaminePerMonthSetfocusFnc);
	//m_wndExaminePerMonth.SetEvent(WE_KILLFOCUS, _OnExaminePerMonthKillfocusFnc);
	m_wndExaminePerMonth.SetEvent(WE_CHECKVALUE, _OnExaminePerMonthCheckValueFnc);
	m_wndAppointReexamine.SetEvent(WE_CLICK, _OnAppointReexamineSelectFnc);
	m_wndAddNew.SetEvent(WE_CLICK, _OnAddNewSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSRegistration2Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSRegistration2Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSRegistration2Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSRegistration2Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSRegistration2Fnc, 0, 'T', VK_CONTROL);

}
void CHMSRegistration2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndCardNoFind.GetDlgCtrlID(), m_szCardNoFind);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_TextEx(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupationKey);
	DDX_TextEx(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddressKey);
	DDX_Text(pDX, m_wndDetailAddress.GetDlgCtrlID(), m_szDetailAddress);
	DDX_Text(pDX, m_wndWorkingPlace.GetDlgCtrlID(), m_szWorkingPlace);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);
	DDX_Text(pDX, m_wndContactAddress.GetDlgCtrlID(), m_szContactAddress);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndPatientState.GetDlgCtrlID(), m_szPatientStateKey);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_Text(pDX, m_wndSheetNo.GetDlgCtrlID(), m_szSheetNo);
	DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Text(pDX, m_wndHospital.GetDlgCtrlID(), m_szHospital);
	DDX_Text(pDX, m_wndDisease.GetDlgCtrlID(), m_szDisease);
	DDX_Text(pDX, m_wndExaminePerWeek.GetDlgCtrlID(), m_nExaminePerWeek);
	DDX_Text(pDX, m_wndExaminePerMonth.GetDlgCtrlID(), m_nExaminePerMonth);
	DDX_Check(pDX, m_wndAppointReexamine.GetDlgCtrlID(), m_bAppointReexamine);

}
void CHMSRegistration2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSRegistration2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_patientTbl.SetValue(_T("hmsp_createdby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hmsp_createddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hmsp_updatedby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hmsd_createdby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hmsd_createddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hmsd_updatedby"), pMF->GetCurrentUser());
	m_hms_cardTbl.SetValue(_T("hmsc_createdby"), pMF->GetCurrentUser());
	m_hms_cardTbl.SetValue(_T("hmsc_createddate"), pMF->GetSysDateTime());
	m_hms_cardTbl.SetValue(_T("hmsc_updatedby"), pMF->GetCurrentUser());
	m_hms_exmdocdtlTbl.SetValue(_T("hmsedd_createdby"), pMF->GetCurrentUser());
	m_hms_exmdocdtlTbl.SetValue(_T("hmsedd_createddate"), pMF->GetSysDateTime());
	m_hms_exmdocdtlTbl.SetValue(_T("hmsedd_updatedby"), pMF->GetCurrentUser());

}
void CHMSRegistration2::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szCardNoFind.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szEthnicKey.Empty();
	m_szOccupationKey.Empty();
	m_szAddressKey.Empty();
	m_szDetailAddress.Empty();
	m_szWorkingPlace.Empty();
	m_szPhone.Empty();
	m_szRankKey.Empty();
	m_szPositionKey.Empty();
	m_szContactAddress.Empty();
	m_szObjectKey.Empty();
	m_szCardNo.Empty();
	m_szPatientStateKey.Empty();
	m_szExamDate.Empty();
	m_szSheetNo.Empty();
	m_szExamTypeKey.Empty();
	m_szRoomKey.Empty();
	m_szHospital.Empty();
	m_szDisease.Empty();
	m_nExaminePerWeek=0;
	m_nExaminePerMonth=0;
	m_bAppointReexamine=FALSE;

}
int CHMSRegistration2::SetMode(int nMode){
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
void CHMSRegistration2::OnRoomListDblClick(){
	
} 
void CHMSRegistration2::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRegistration2::OnRoomListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSRegistration2::OnRoomListLoadData(){
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
			rs.GetValue(_T("Examed")), NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSRegistration2::OnExamListDblClick(){
	
} 
void CHMSRegistration2::OnExamListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRegistration2::OnExamListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSRegistration2::OnExamListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndExamList.BeginLoad(); 
	m_wndExamList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamList.AddItems(
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("ExaminationDate")), 
			rs.GetValue(_T("ExaminationRoom")), 
			rs.GetValue(_T("SheetNo")), 
			rs.GetValue(_T("Doctor")), 
			rs.GetValue(_T("Status")), NULL);
		rs.MoveNext();
	}
	m_wndExamList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration2::OnPatientNoChange(){
	
} */
/*void CHMSRegistration2::OnPatientNoSetfocus(){
	
} */
/*void CHMSRegistration2::OnPatientNoKillfocus(){
	
} */
int CHMSRegistration2::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnDocumentNoChange(){
	
} */
/*void CHMSRegistration2::OnDocumentNoSetfocus(){
	
} */
/*void CHMSRegistration2::OnDocumentNoKillfocus(){
	
} */
int CHMSRegistration2::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnCardNoFindChange(){
	
} */
/*void CHMSRegistration2::OnCardNoFindSetfocus(){
	
} */
/*void CHMSRegistration2::OnCardNoFindKillfocus(){
	
} */
int CHMSRegistration2::OnCardNoFindCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnPatientNameChange(){
	
} */
/*void CHMSRegistration2::OnPatientNameSetfocus(){
	
} */
/*void CHMSRegistration2::OnPatientNameKillfocus(){
	
} */
int CHMSRegistration2::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnAgeChange(){
	
} */
/*void CHMSRegistration2::OnAgeSetfocus(){
	
} */
/*void CHMSRegistration2::OnAgeKillfocus(){
	
} */
int CHMSRegistration2::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnBirthDateChange(){
	
} */
/*void CHMSRegistration2::OnBirthDateSetfocus(){
	
} */
/*void CHMSRegistration2::OnBirthDateKillfocus(){
	
} */
int CHMSRegistration2::OnBirthDateCheckValue(){
	return 0;
} 
void CHMSRegistration2::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnSexSelendok(){
	 
}
/*void CHMSRegistration2::OnSexSetfocus(){
	
}*/
/*void CHMSRegistration2::OnSexKillfocus(){
	
}*/
long CHMSRegistration2::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
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
/*void CHMSRegistration2::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration2::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnEthnicSelendok(){
	 
}
/*void CHMSRegistration2::OnEthnicSetfocus(){
	
}*/
/*void CHMSRegistration2::OnEthnicKillfocus(){
	
}*/
long CHMSRegistration2::OnEthnicLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEthnic.IsSearchKey() && !m_szEthnicKey.IsEmpty()){
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
/*void CHMSRegistration2::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration2::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnOccupationSelendok(){
	 
}
/*void CHMSRegistration2::OnOccupationSetfocus(){
	
}*/
/*void CHMSRegistration2::OnOccupationKillfocus(){
	
}*/
long CHMSRegistration2::OnOccupationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOccupation.IsSearchKey() && !m_szOccupationKey.IsEmpty()){
	};
	m_wndOccupation.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOccupation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration2::OnOccupationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration2::OnAddressSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnAddressSelendok(){
	 
}
/*void CHMSRegistration2::OnAddressSetfocus(){
	
}*/
/*void CHMSRegistration2::OnAddressKillfocus(){
	
}*/
long CHMSRegistration2::OnAddressLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAddress.IsSearchKey() && !m_szAddressKey.IsEmpty()){
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
/*void CHMSRegistration2::OnAddressAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration2::OnDetailAddressChange(){
	
} */
/*void CHMSRegistration2::OnDetailAddressSetfocus(){
	
} */
/*void CHMSRegistration2::OnDetailAddressKillfocus(){
	
} */
int CHMSRegistration2::OnDetailAddressCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnWorkingPlaceChange(){
	
} */
/*void CHMSRegistration2::OnWorkingPlaceSetfocus(){
	
} */
/*void CHMSRegistration2::OnWorkingPlaceKillfocus(){
	
} */
int CHMSRegistration2::OnWorkingPlaceCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnPhoneChange(){
	
} */
/*void CHMSRegistration2::OnPhoneSetfocus(){
	
} */
/*void CHMSRegistration2::OnPhoneKillfocus(){
	
} */
int CHMSRegistration2::OnPhoneCheckValue(){
	return 0;
} 
void CHMSRegistration2::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnRankSelendok(){
	 
}
/*void CHMSRegistration2::OnRankSetfocus(){
	
}*/
/*void CHMSRegistration2::OnRankKillfocus(){
	
}*/
long CHMSRegistration2::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty()){
	};
	m_wndRank.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration2::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration2::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnPositionSelendok(){
	 
}
/*void CHMSRegistration2::OnPositionSetfocus(){
	
}*/
/*void CHMSRegistration2::OnPositionKillfocus(){
	
}*/
long CHMSRegistration2::OnPositionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPosition.IsSearchKey() && !m_szPositionKey.IsEmpty()){
	};
	m_wndPosition.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPosition.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration2::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration2::OnContactAddressChange(){
	
} */
/*void CHMSRegistration2::OnContactAddressSetfocus(){
	
} */
/*void CHMSRegistration2::OnContactAddressKillfocus(){
	
} */
int CHMSRegistration2::OnContactAddressCheckValue(){
	return 0;
} 
void CHMSRegistration2::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnObjectSelendok(){
	 
}
/*void CHMSRegistration2::OnObjectSetfocus(){
	
}*/
/*void CHMSRegistration2::OnObjectKillfocus(){
	
}*/
long CHMSRegistration2::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
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
/*void CHMSRegistration2::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration2::OnCardNoChange(){
	
} */
/*void CHMSRegistration2::OnCardNoSetfocus(){
	
} */
/*void CHMSRegistration2::OnCardNoKillfocus(){
	
} */
int CHMSRegistration2::OnCardNoCheckValue(){
	return 0;
} 
void CHMSRegistration2::OnCardNoButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnPatientStateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnPatientStateSelendok(){
	 
}
/*void CHMSRegistration2::OnPatientStateSetfocus(){
	
}*/
/*void CHMSRegistration2::OnPatientStateKillfocus(){
	
}*/
long CHMSRegistration2::OnPatientStateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientState.IsSearchKey() && !m_szPatientStateKey.IsEmpty()){
	};
	m_wndPatientState.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientState.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration2::OnPatientStateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration2::OnExamDateChange(){
	
} */
/*void CHMSRegistration2::OnExamDateSetfocus(){
	
} */
/*void CHMSRegistration2::OnExamDateKillfocus(){
	
} */
int CHMSRegistration2::OnExamDateCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnSheetNoChange(){
	
} */
/*void CHMSRegistration2::OnSheetNoSetfocus(){
	
} */
/*void CHMSRegistration2::OnSheetNoKillfocus(){
	
} */
int CHMSRegistration2::OnSheetNoCheckValue(){
	return 0;
} 
void CHMSRegistration2::OnExamTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnExamTypeSelendok(){
	 
}
/*void CHMSRegistration2::OnExamTypeSetfocus(){
	
}*/
/*void CHMSRegistration2::OnExamTypeKillfocus(){
	
}*/
long CHMSRegistration2::OnExamTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamType.IsSearchKey() && !m_szExamTypeKey.IsEmpty()){
	};
	m_wndExamType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSRegistration2::OnExamTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSRegistration2::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnRoomSelendok(){
	 
}
/*void CHMSRegistration2::OnRoomSetfocus(){
	
}*/
/*void CHMSRegistration2::OnRoomKillfocus(){
	
}*/
long CHMSRegistration2::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
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
/*void CHMSRegistration2::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSRegistration2::OnHospitalChange(){
	
} */
/*void CHMSRegistration2::OnHospitalSetfocus(){
	
} */
/*void CHMSRegistration2::OnHospitalKillfocus(){
	
} */
int CHMSRegistration2::OnHospitalCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnDiseaseChange(){
	
} */
/*void CHMSRegistration2::OnDiseaseSetfocus(){
	
} */
/*void CHMSRegistration2::OnDiseaseKillfocus(){
	
} */
int CHMSRegistration2::OnDiseaseCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnExaminePerWeekChange(){
	
} */
/*void CHMSRegistration2::OnExaminePerWeekSetfocus(){
	
} */
/*void CHMSRegistration2::OnExaminePerWeekKillfocus(){
	
} */
int CHMSRegistration2::OnExaminePerWeekCheckValue(){
	return 0;
} 
/*void CHMSRegistration2::OnExaminePerMonthChange(){
	
} */
/*void CHMSRegistration2::OnExaminePerMonthSetfocus(){
	
} */
/*void CHMSRegistration2::OnExaminePerMonthKillfocus(){
	
} */
int CHMSRegistration2::OnExaminePerMonthCheckValue(){
	return 0;
} 
	void CHMSRegistration2::OnAppointReexamineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSRegistration2::OnAddNewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSRegistration2::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSRegistration2::OnAddHMSRegistration2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSRegistration2::OnEditHMSRegistration2(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSRegistration2::OnDeleteHMSRegistration2(){
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
 		OnCancelHMSRegistration2(); 
 	}
	return 0;
}
int CHMSRegistration2::OnSaveHMSRegistration2(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_patientTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_patientTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSRegistration2ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSRegistration2::OnCancelHMSRegistration2(){
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
int CHMSRegistration2::OnHMSRegistration2ListLoadData(){
	return 0;
}
