#include "HMSEmpInfoDlg.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnCardNoFindChangeFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnCardNoFindChange();
} */
/*static void _OnCardNoFindSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnCardNoFindSetfocus();} */ 
/*static void _OnCardNoFindKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnCardNoFindKillfocus();
} */
static int _OnCardNoFindCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnCardNoFindCheckValue();
} 
/*static void _OnPatientIDChangeFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPatientIDChange();
} */
/*static void _OnPatientIDSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPatientIDSetfocus();} */ 
/*static void _OnPatientIDKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPatientIDKillfocus();
} */
static int _OnPatientIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnPatientIDCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEmpInfoDlg* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEmpInfoDlg* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnEthnicAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEmpInfoDlg* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEmpInfoDlg* )pWnd)->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOccupationSelendokFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnOccupationSelendok();
}
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnOccupationKillfocus();
}*/
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnOccupationKillfocus();
}*/
static long _OnOccupationLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnOccupationLoadData();
}
/*static void _OnOccupationAddNewFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnOccupationAddNew();
}*/
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEmpInfoDlg* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnProvillAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEmpInfoDlg* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEmpInfoDlg* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnVillageAddNew();
}*/
/*static void _OnIDNoChangeFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnIDNoChange();
} */
/*static void _OnIDNoSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnIDNoSetfocus();} */ 
/*static void _OnIDNoKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnIDNoKillfocus();
} */
static int _OnIDNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnIDNoCheckValue();
} 
/*static void _OnWorkingPlaceChangeFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnWorkingPlaceChange();
} */
/*static void _OnWorkingPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnWorkingPlaceSetfocus();} */ 
/*static void _OnWorkingPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnWorkingPlaceKillfocus();
} */
static int _OnWorkingPlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnWorkingPlaceCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnPhoneCheckValue();
} 
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEmpInfoDlg* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnRankAddNew();
}*/
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEmpInfoDlg* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnPositionAddNew();
}*/
/*static void _OnContactAddressChangeFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnContactAddressChange();
} */
/*static void _OnContactAddressSetfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnContactAddressSetfocus();} */ 
/*static void _OnContactAddressKillfocusFnc(CWnd *pWnd){
	((CHMSEmpInfoDlg *)pWnd)->OnContactAddressKillfocus();
} */
static int _OnContactAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpInfoDlg *)pWnd)->OnContactAddressCheckValue();
} 
static void _OnWorkPlaceButtonSelectFnc(CWnd *pWnd){
	CHMSEmpInfoDlg *pVw = (CHMSEmpInfoDlg *)pWnd;
	pVw->OnWorkPlaceButtonSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSEmpInfoDlg *pVw = (CHMSEmpInfoDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSEmpInfoDlg *pVw = (CHMSEmpInfoDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnWorkingPlaceLabelSelectFnc(CWnd *pWnd){
	CHMSEmpInfoDlg *pVw = (CHMSEmpInfoDlg *)pWnd;
	pVw->OnWorkingPlaceLabelSelect();
}
static int _OnAddHMSEmpInfoDlgFnc(CWnd *pWnd){
	 return ((CHMSEmpInfoDlg*)pWnd)->OnAddHMSEmpInfoDlg();
} 
static int _OnEditHMSEmpInfoDlgFnc(CWnd *pWnd){
	 return ((CHMSEmpInfoDlg*)pWnd)->OnEditHMSEmpInfoDlg();
} 
static int _OnDeleteHMSEmpInfoDlgFnc(CWnd *pWnd){
	 return ((CHMSEmpInfoDlg*)pWnd)->OnDeleteHMSEmpInfoDlg();
} 
static int _OnSaveHMSEmpInfoDlgFnc(CWnd *pWnd){
	 return ((CHMSEmpInfoDlg*)pWnd)->OnSaveHMSEmpInfoDlg();
} 
static int _OnCancelHMSEmpInfoDlgFnc(CWnd *pWnd){
	 return ((CHMSEmpInfoDlg*)pWnd)->OnCancelHMSEmpInfoDlg();
} 
CHMSEmpInfoDlg::CHMSEmpInfoDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSEmpInfoDlg::~CHMSEmpInfoDlg(){
}
void CHMSEmpInfoDlg::OnCreateComponents(){
	m_wndProfiles.Create(this, _T("Profiles"), 5, 4, 710, 299);
	m_wndPatientNoLabel.Create(this, _T("PID"), 10, 30, 110, 55);
	m_wndPatientNo.Create(this,115, 30, 195, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 200, 30, 265, 55);
	m_wndDocumentNo.Create(this,270, 30, 360, 55); 
	m_wndCardNoFindLabel.Create(this, _T("Card"), 365, 30, 465, 55);
	m_wndCardNoFind.Create(this,470, 30, 705, 55); 
	m_wndPatientIDLabel.Create(this, _T("PatientID"), 10, 60, 110, 85);
	m_wndPatientID.Create(this,115, 60, 360, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 365, 60, 465, 85);
	m_wndPatientName.Create(this,470, 60, 705, 85); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 10, 90, 110, 115);
	m_wndBirthDate.Create(this,115, 90, 360, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 365, 90, 465, 115);
	m_wndSex.Create(this,470, 89, 550, 114); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 555, 89, 620, 114);
	m_wndEthnic.Create(this,625, 89, 705, 114); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 119, 110, 144);
	m_wndDepartment.Create(this,115, 119, 360, 144); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 365, 120, 465, 145);
	m_wndOccupation.Create(this,470, 120, 705, 145); 
	m_wndProvillLabel.Create(this, _T("Provill"), 10, 150, 110, 175);
	m_wndProvill.Create(this,115, 150, 360, 175); 
	m_wndDistrictLabel.Create(this, _T("District"), 365, 150, 465, 175);
	m_wndDistrict.Create(this,470, 150, 705, 175); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 180, 110, 205);
	m_wndVillage.Create(this,115, 180, 360, 205); 
	m_wndIDNoLabel.Create(this, _T("ID No"), 366, 180, 466, 205);
	m_wndIDNo.Create(this,470, 180, 705, 205); 
	m_wndWorkingPlaceLabel.Create(this, _T("Working Place"), 10, 210, 110, 235);
	m_wndWorkingPlace.Create(this,115, 210, 330, 235); 
	m_wndPhoneLabel.Create(this, _T("Telephone"), 366, 209, 466, 234);
	m_wndPhone.Create(this,470, 210, 705, 235); 
	m_wndRankLabel.Create(this, _T("Rank"), 10, 240, 110, 265);
	m_wndRank.Create(this,115, 240, 360, 265); 
	m_wndPositionLabel.Create(this, _T("Position"), 365, 240, 465, 265);
	m_wndPosition.Create(this,469, 240, 704, 265); 
	m_wndContactAddressLabel.Create(this, _T("Contact Addr"), 10, 270, 110, 295);
	m_wndContactAddress.Create(this,115, 270, 705, 295); 
	//m_wndWorkPlaceButton.Create(this, _T("@"), 335, 210, 360, 235);
	m_wndSave.Create(this, _T("&Save"), 545, 305, 625, 330);
	m_wndCancel.Create(this, _T("&Cancel"), 630, 305, 710, 330);

}
void CHMSEmpInfoDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(1024);
	//m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	//m_wndDocumentNo.SetCheckValue(true);
	m_wndCardNoFind.SetLimitText(1024);
	//m_wndCardNoFind.SetCheckValue(true);
	m_wndPatientID.SetLimitText(35);
	//m_wndPatientID.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1024);
	m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	//m_wndOccupation.SetCheckValue(true);
	m_wndOccupation.LimitText(1024);
	//m_wndProvill.SetCheckValue(true);
	m_wndProvill.LimitText(1024);
	//m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(1024);
	//m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(1024);
	m_wndIDNo.SetLimitText(1024);
	//m_wndIDNo.SetCheckValue(true);
	m_wndWorkingPlace.SetLimitText(1024);
	m_wndWorkingPlaceLabel.SetHyperlink(true);
	//m_wndWorkingPlace.SetCheckValue(true);
	m_wndPhone.SetLimitText(1024);
	//m_wndPhone.SetCheckValue(true);
	//m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);
	//m_wndPosition.SetCheckValue(true);
	m_wndPosition.LimitText(1024);
	m_wndContactAddress.SetLimitText(1024);
	//m_wndContactAddress.SetCheckValue(true);

	m_wndProvill.SetSearchStyle(SS_LIKE);
	m_wndProvill.LimitText(254);

	m_wndDistrict.SetSearchStyle(SS_LIKE);
	m_wndDistrict.LimitText(254);
	
	m_wndVillage.SetSearchStyle(SS_LIKE);
	m_wndVillage.LimitText(254);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);

	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndOccupation.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndOccupation.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndProvill.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProvill.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndProvill.InsertColumn(2, _T("srch"), CFMT_TEXT, 50);
	//m_wndProvill.SetColumnKey(2);
	//m_wndProvill.SetSearchEx(true);

	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndDistrict.InsertColumn(2, _T("srch"), CFMT_TEXT, 50);
	//m_wndDistrict.SetColumnKey(2);
	//m_wndDistrict.SetSearchEx(true);

	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndVillage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndVillage.InsertColumn(2, _T("srch"), CFMT_TEXT, 50);
	//m_wndVillage.SetColumnKey(2);
	//m_wndVillage.SetSearchEx(true);

	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndPosition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("hp_createdby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_createddate"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("hp_updatedby"), dfText, 15);
	m_hms_patientTbl.AddField(_T("hp_updateddate"), dfDateTime);
	m_hms_patientTbl.AddField(_T("hp_patientno"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_patientid"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_surname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_midname"), dfText, 45); 
	m_hms_patientTbl.AddField(_T("hp_firstname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_birthdate"), dfDate); 
	m_hms_patientTbl.AddField(_T("hp_sex"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hp_ethnic"), dfInteger); 
	m_hms_patientTbl.AddField(_T("hp_sin"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hp_provid"), dfInteger); 
	m_hms_patientTbl.AddField(_T("hp_distid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_villid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_dtladdr"), dfText, 128); 
	m_hms_patientTbl.AddField(_T("hp_occupation"), dfInteger);
	m_hms_patientTbl.AddField(_T("hp_department"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_workplace"), dfText, 128); 
	m_hms_patientTbl.AddField(_T("hp_workplaceid"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hp_status"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hp_rank"), dfInteger); 
	m_hms_patientTbl.AddField(_T("hp_position"), dfInteger);
	m_hms_patientTbl.AddField(_T("hp_type"), dfText, 15);

	//doc
	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_createdby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hd_createddate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_updatedby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hd_updateddate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_docno"), dfLong); 
	m_hms_docTbl.AddField(_T("hd_patientno"), dfLong); 
	m_hms_docTbl.AddField(_T("hd_status"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hd_telephone"), dfText, 30); 
	m_hms_docTbl.AddField(_T("hd_relative"), dfText, 65); 
	m_hms_docTbl.AddField(_T("hd_relation"), dfInteger); 
	m_hms_docTbl.AddField(_T("hd_contactaddr"), dfText, 254); 
	m_hms_docTbl.AddField(_T("hd_contacttel"), dfText, 30);
	m_hms_docTbl.AddField(_T("hd_object"), dfText, 3); 
	m_hms_docTbl.AddField(_T("hd_cardno"), dfText, 25); 
	m_hms_docTbl.AddField(_T("hd_cardidx"), dfInteger); 
	m_hms_docTbl.AddField(_T("hd_insregdate"), dfDate); 
	m_hms_docTbl.AddField(_T("hd_disrate"), dfInteger); 
	m_hms_docTbl.AddField(_T("hd_insline"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hd_admitstate"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hd_admitdate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_admitdept"), dfText, 7); 
	m_hms_docTbl.AddField(_T("hd_transplace"), dfText, 254); 
	m_hms_docTbl.AddField(_T("hd_transdiagn"), dfText, 245); 
	m_hms_docTbl.AddField(_T("hd_transplaceid"), dfText, 7); 
	m_hms_docTbl.AddField(_T("hd_xobject"), dfText, 1); 
	m_hms_docTbl.AddField(_T("hd_xcardno"), dfText, 25); 
	m_hms_docTbl.AddField(_T("hd_xissueplace"), dfText, 128); 	
	m_hms_docTbl.AddField(_T("hd_xissuedate"), dfDate); 
}
void CHMSEmpInfoDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndPatientID.SetEvent(WE_CHANGE, _OnPatientIDChangeFnc);
	//m_wndPatientID.SetEvent(WE_SETFOCUS, _OnPatientIDSetfocusFnc);
	//m_wndPatientID.SetEvent(WE_KILLFOCUS, _OnPatientIDKillfocusFnc);
	m_wndPatientID.SetEvent(WE_CHECKVALUE, _OnPatientIDCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndOccupation.SetEvent(WE_SELENDOK, _OnOccupationSelendokFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_SELCHANGE, _OnOccupationSelectChangeFnc);
	m_wndOccupation.SetEvent(WE_LOADDATA, _OnOccupationLoadDataFnc);
	//m_wndOccupation.SetEvent(WE_ADDNEW, _OnOccupationAddNewFnc);
	m_wndProvill.SetEvent(WE_SELENDOK, _OnProvillSelendokFnc);
	//m_wndProvill.SetEvent(WE_SETFOCUS, _OnProvillSetfocusFnc);
	//m_wndProvill.SetEvent(WE_KILLFOCUS, _OnProvillKillfocusFnc);
	m_wndProvill.SetEvent(WE_SELCHANGE, _OnProvillSelectChangeFnc);
	m_wndProvill.SetEvent(WE_LOADDATA, _OnProvillLoadDataFnc);
	//m_wndProvill.SetEvent(WE_ADDNEW, _OnProvillAddNewFnc);
	m_wndDistrict.SetEvent(WE_SELENDOK, _OnDistrictSelendokFnc);
	//m_wndDistrict.SetEvent(WE_SETFOCUS, _OnDistrictSetfocusFnc);
	//m_wndDistrict.SetEvent(WE_KILLFOCUS, _OnDistrictKillfocusFnc);
	m_wndDistrict.SetEvent(WE_SELCHANGE, _OnDistrictSelectChangeFnc);
	m_wndDistrict.SetEvent(WE_LOADDATA, _OnDistrictLoadDataFnc);
	//m_wndDistrict.SetEvent(WE_ADDNEW, _OnDistrictAddNewFnc);
	m_wndVillage.SetEvent(WE_SELENDOK, _OnVillageSelendokFnc);
	//m_wndVillage.SetEvent(WE_SETFOCUS, _OnVillageSetfocusFnc);
	//m_wndVillage.SetEvent(WE_KILLFOCUS, _OnVillageKillfocusFnc);
	m_wndVillage.SetEvent(WE_SELCHANGE, _OnVillageSelectChangeFnc);
	m_wndVillage.SetEvent(WE_LOADDATA, _OnVillageLoadDataFnc);
	//m_wndVillage.SetEvent(WE_ADDNEW, _OnVillageAddNewFnc);
	//m_wndIDNo.SetEvent(WE_CHANGE, _OnIDNoChangeFnc);
	//m_wndIDNo.SetEvent(WE_SETFOCUS, _OnIDNoSetfocusFnc);
	//m_wndIDNo.SetEvent(WE_KILLFOCUS, _OnIDNoKillfocusFnc);
	m_wndIDNo.SetEvent(WE_CHECKVALUE, _OnIDNoCheckValueFnc);
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
	m_wndWorkPlaceButton.SetEvent(WE_CLICK, _OnWorkPlaceButtonSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndWorkingPlaceLabel.SetEvent(WE_CLICK, _OnWorkingPlaceLabelSelectFnc);
	//SetMode(VM_ADD);
	if(GetMode() == VM_EDIT)
	{
		SetMode(VM_EDIT);
		GetDataToScreen();
	}

}
void CHMSEmpInfoDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndCardNoFind.GetDlgCtrlID(), m_szCardNoFind);
	DDX_Text(pDX, m_wndPatientID.GetDlgCtrlID(), m_szPatientID);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupationKey);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_Text(pDX, m_wndIDNo.GetDlgCtrlID(), m_szIDNo);
	DDX_Text(pDX, m_wndWorkingPlace.GetDlgCtrlID(), m_szWorkingPlace);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);
	DDX_Text(pDX, m_wndContactAddress.GetDlgCtrlID(), m_szContactAddress);

}
void CHMSEmpInfoDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hp_patientno, ") \
					_T("hp_patientid, hd_cardno, ") \
					_T("trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
					_T("hp_birthdate, ") \
					_T("hp_sex, ") \
					_T("hp_ethnic, ") \
					_T("hp_provid, ") \
					_T("hp_distid, ") \
					_T("hp_villid, ") \
					_T("hp_occupation, ") \
					_T("hp_department, ") \
					_T("hp_rank, ") \
					_T("hp_position, ") \
					_T("hp_dtladdr, ") \
					_T("hp_workplace, ") \
					_T("hp_workplaceid, ") \
					_T("hp_sin, hd_docno, hd_telephone ") \
					_T("FROM hms_patient ") \
					_T("LEFT JOIN hms_doc ON(hd_patientno = hp_patientno) ") \
					_T("WHERE hp_patientno=%ld"), m_nPatientNo);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		m_szPatientID = rs.GetValue(_T("hp_patientid"));
		m_nPatientNo = ToLong(rs.GetValue(_T("hp_patientno")));
		m_nDocumentNo = ToLong(rs.GetValue(_T("hd_docno")));
		m_szCardNoFind = rs.GetValue(_T("hd_cardno"));
		m_szPatientName = rs.GetValue(_T("pname"));
		m_szBirthDate = rs.GetValue(_T("hp_birthdate"));
		m_szSexKey = rs.GetValue(_T("hp_sex"));
		m_szEthnicKey = rs.GetValue(_T("hp_ethnic"));
		m_szProvillKey = rs.GetValue(_T("hp_provid"));
		m_szDistrictKey = rs.GetValue(_T("hp_distid"));
		m_szVillageKey = rs.GetValue(_T("hp_villid"));
		m_szOccupationKey = rs.GetValue(_T("hp_occupation"));
		m_szDepartmentKey = rs.GetValue(_T("hp_department"));
		m_szRankKey = rs.GetValue(_T("hp_rank"));
		m_szPositionKey = rs.GetValue(_T("hp_position"));
		m_szContactAddress = rs.GetValue(_T("hp_dtladdr"));
		m_szWorkingPlace = rs.GetValue(_T("hp_workplace"));
		m_szPhone = rs.GetValue(_T("hd_telephone"));
		m_szIDNo = rs.GetValue(_T("hp_sin"));
		
		UpdateData(FALSE);
	}
}
void CHMSEmpInfoDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSurName, szMidName, szFirstName, szSQL;

	SplitName(m_szPatientName, szSurName, szMidName, szFirstName);

	m_hms_patientTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());

	
	m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);
	m_hms_patientTbl.SetValue(_T("hp_patientid"), m_szPatientID);
	m_hms_patientTbl.SetValue(_T("hp_surname"), szSurName);
	m_hms_patientTbl.SetValue(_T("hp_midname"), szMidName); 
	m_hms_patientTbl.SetValue(_T("hp_firstname"), szFirstName); 
	m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szBirthDate); 

	m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSexKey); 
	m_hms_patientTbl.SetValue(_T("hp_ethnic"), m_szEthnicKey);
	m_hms_patientTbl.SetValue(_T("hp_sin"), m_szIDNo);
	m_hms_patientTbl.SetValue(_T("hp_provid"), m_szProvillKey); 
	m_hms_patientTbl.SetValue(_T("hp_distid"), m_szDistrictKey); 
	m_hms_patientTbl.SetValue(_T("hp_villid"), m_szVillageKey); 

	m_hms_patientTbl.SetValue(_T("hp_provid"), m_szProvillKey); 
	m_hms_patientTbl.SetValue(_T("hp_distid"), m_szDistrictKey); 
	m_hms_patientTbl.SetValue(_T("hp_villid"), m_szVillageKey); 

	m_hms_patientTbl.SetValue(_T("hp_dtladdr"), m_szContactAddress);
	m_hms_patientTbl.SetValue(_T("hp_status"), _T("A"));
	m_hms_patientTbl.SetValue(_T("hp_occupation"), m_szOccupationKey);
	m_hms_patientTbl.SetValue(_T("hp_department"), m_szDepartmentKey);

	m_hms_patientTbl.SetValue(_T("hp_workplace"), m_szWorkingPlace); 
	m_hms_patientTbl.SetValue(_T("hp_rank"), m_szRankKey); 
	m_hms_patientTbl.SetValue(_T("hp_position"), m_szPositionKey);
	m_hms_patientTbl.SetValue(_T("hp_type"), _T("E"));

	//add doc
	
	m_hms_docTbl.SetValue(_T("hd_createdby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hd_createddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_updatedby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hd_updateddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo); 
	m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo);
	m_hms_docTbl.SetValue(_T("hd_cardno"), m_szCardNoFind);
	m_hms_docTbl.SetValue(_T("hd_telephone"), m_szPhone);
}
void CHMSEmpInfoDlg::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szCardNoFind.Empty();
	m_szPatientID.Empty();
	m_szPatientName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szEthnicKey.Empty();
	m_szDepartmentKey.Empty();
	m_szOccupationKey.Empty();
	m_szProvillKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szIDNo.Empty();
	m_szWorkingPlace.Empty();
	m_szPhone.Empty();
	m_szRankKey.Empty();
	m_szPositionKey.Empty();
	m_szContactAddress.Empty();

}
int CHMSEmpInfoDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			SetDefaultValues();
			szSQL.Format(_T("hms_getnextpatientno()"));
			m_nPatientNo = str2long(pMF->ExecDML(szSQL));
			szSQL.Format(_T("hms_getnextdocno()"));
			m_nDocumentNo = str2long(pMF->ExecDML(szSQL));
			m_wndPatientNo.EnableWindow(FALSE);
			m_wndDocumentNo.EnableWindow(FALSE);
			m_wndPatientID.EnableWindow(FALSE);
 			break;
 		case VM_EDIT:
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndPatientNo.EnableWindow(FALSE);
			m_wndDocumentNo.EnableWindow(FALSE);
			//m_wndCardNoFind.EnableWindow(FALSE);
			//m_wndPatientID.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
			GetDataToScreen();
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
/*void CHMSEmpInfoDlg::OnPatientNoChange(){
	
} */
/*void CHMSEmpInfoDlg::OnPatientNoSetfocus(){
	
} */
/*void CHMSEmpInfoDlg::OnPatientNoKillfocus(){
	
} */
int CHMSEmpInfoDlg::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSEmpInfoDlg::OnDocumentNoChange(){
	
} */
/*void CHMSEmpInfoDlg::OnDocumentNoSetfocus(){
	
} */
/*void CHMSEmpInfoDlg::OnDocumentNoKillfocus(){
	
} */
int CHMSEmpInfoDlg::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSEmpInfoDlg::OnCardNoFindChange(){
	
} */
/*void CHMSEmpInfoDlg::OnCardNoFindSetfocus(){
	
} */
/*void CHMSEmpInfoDlg::OnCardNoFindKillfocus(){
	
} */
int CHMSEmpInfoDlg::OnCardNoFindCheckValue(){
	return 0;
} 
/*void CHMSEmpInfoDlg::OnPatientIDChange(){
	
} */
/*void CHMSEmpInfoDlg::OnPatientIDSetfocus(){
	
} */
/*void CHMSEmpInfoDlg::OnPatientIDKillfocus(){
	
} */
int CHMSEmpInfoDlg::OnPatientIDCheckValue(){
	return 0;
} 
/*void CHMSEmpInfoDlg::OnPatientNameChange(){
	
} */
/*void CHMSEmpInfoDlg::OnPatientNameSetfocus(){
	
} */
/*void CHMSEmpInfoDlg::OnPatientNameKillfocus(){
	
} */
int CHMSEmpInfoDlg::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSEmpInfoDlg::OnBirthDateChange(){
	
} */
/*void CHMSEmpInfoDlg::OnBirthDateSetfocus(){
	
} */
/*void CHMSEmpInfoDlg::OnBirthDateKillfocus(){
	
} */
int CHMSEmpInfoDlg::OnBirthDateCheckValue(){
	return 0;
} 
void CHMSEmpInfoDlg::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEmpInfoDlg::OnSexSelendok(){
	 
}
/*void CHMSEmpInfoDlg::OnSexSetfocus(){
	
}*/
/*void CHMSEmpInfoDlg::OnSexKillfocus(){
	
}*/
long CHMSEmpInfoDlg::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSexKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_sex' %s ORDER BY ss_code "), szWhere);
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
}
/*void CHMSEmpInfoDlg::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSEmpInfoDlg::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEmpInfoDlg::OnEthnicSelendok(){
	 
}
/*void CHMSEmpInfoDlg::OnEthnicSetfocus(){
	
}*/
/*void CHMSEmpInfoDlg::OnEthnicKillfocus(){
	
}*/
long CHMSEmpInfoDlg::OnEthnicLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEthnic.IsSearchKey() && !m_szEthnicKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szEthnicKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_ethnic' %s ORDER BY cast(ss_code as integer) "),szWhere);
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
}
/*void CHMSEmpInfoDlg::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSEmpInfoDlg::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEmpInfoDlg::OnDepartmentSelendok(){
	 
}
/*void CHMSEmpInfoDlg::OnDepartmentSetfocus(){
	
}*/
/*void CHMSEmpInfoDlg::OnDepartmentKillfocus(){
	
}*/
long CHMSEmpInfoDlg::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "),szWhere);

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSEmpInfoDlg::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSEmpInfoDlg::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEmpInfoDlg::OnOccupationSelendok(){
	 
}
/*void CHMSEmpInfoDlg::OnOccupationSetfocus(){
	
}*/
/*void CHMSEmpInfoDlg::OnOccupationKillfocus(){
	
}*/
long CHMSEmpInfoDlg::OnOccupationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOccupation.IsSearchKey() && !m_szOccupationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szOccupationKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_occupation' %s ORDER BY cast(ss_code as integer) "),szWhere);

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
}
/*void CHMSEmpInfoDlg::OnOccupationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSEmpInfoDlg::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szProvillScr = m_wndProvill.GetCurrent(0);
} 
void CHMSEmpInfoDlg::OnProvillSelendok(){

}
/*void CHMSEmpInfoDlg::OnProvillSetfocus(){
	
}*/
/*void CHMSEmpInfoDlg::OnProvillKillfocus(){
	
}*/
long CHMSEmpInfoDlg::OnProvillLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0;
	m_wndProvill.DeleteAllItems();
	szWhere.Empty();
	if(!m_szProvillKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sp_id=%ld "), ToLong(m_szProvillKey));
	}
	szSQL.Format(_T(" select sp_id, sp_name, sp_wrd from sys_prov where 1=1 %s "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvill.AddItems(
			rs.GetValue(_T("sp_id")), 
			rs.GetValue(_T("sp_name")),
			rs.GetValue(_T("sp_wrd")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSEmpInfoDlg::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSEmpInfoDlg::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szDistrictScr = m_wndDistrict.GetCurrent(0);
} 
void CHMSEmpInfoDlg::OnDistrictSelendok(){

}
/*void CHMSEmpInfoDlg::OnDistrictSetfocus(){
	
}*/
/*void CHMSEmpInfoDlg::OnDistrictKillfocus(){
	
}*/
long CHMSEmpInfoDlg::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0;
	m_wndDistrict.DeleteAllItems();
	szWhere.Empty();
	if(!m_szDistrictKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id=%ld "), ToLong(m_szDistrictKey));
	}
	szSQL.Format(_T(" select sd_id, sd_name, sd_wrd from sys_dist where sd_provid = '%s' %s "), m_szProvillKey, szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")),
			rs.GetValue(_T("sd_wrd")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSEmpInfoDlg::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSEmpInfoDlg::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szVillageScr = m_wndVillage.GetCurrent(0);
} 
void CHMSEmpInfoDlg::OnVillageSelendok(){
	 
}
/*void CHMSEmpInfoDlg::OnVillageSetfocus(){
	
}*/
/*void CHMSEmpInfoDlg::OnVillageKillfocus(){
	
}*/
long CHMSEmpInfoDlg::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0;
	m_wndVillage.DeleteAllItems();
	szWhere.Empty();
	if(!m_szVillageKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sv_id=%ld "), ToLong(m_szVillageKey));
	}
	
	szSQL.Format(_T(" select sv_id, sv_name, sv_wrd from sys_vill where sv_distid = '%s' %s "), m_szDistrictKey, szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndVillage.AddItems(
			rs.GetValue(_T("sv_id")), 
			rs.GetValue(_T("sv_name")),
			rs.GetValue(_T("sv_wrd")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSEmpInfoDlg::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSEmpInfoDlg::OnIDNoChange(){
	
} */
/*void CHMSEmpInfoDlg::OnIDNoSetfocus(){
	
} */
/*void CHMSEmpInfoDlg::OnIDNoKillfocus(){
	
} */
int CHMSEmpInfoDlg::OnIDNoCheckValue(){
	
	return 0;
} 
/*void CHMSEmpInfoDlg::OnWorkingPlaceChange(){
	
} */
/*void CHMSEmpInfoDlg::OnWorkingPlaceSetfocus(){
	
} */
/*void CHMSEmpInfoDlg::OnWorkingPlaceKillfocus(){
	
} */
int CHMSEmpInfoDlg::OnWorkingPlaceCheckValue(){
	return 0;
} 
/*void CHMSEmpInfoDlg::OnPhoneChange(){
	
} */
/*void CHMSEmpInfoDlg::OnPhoneSetfocus(){
	
} */
/*void CHMSEmpInfoDlg::OnPhoneKillfocus(){
	
} */
int CHMSEmpInfoDlg::OnPhoneCheckValue(){
	return 0;
} 
void CHMSEmpInfoDlg::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEmpInfoDlg::OnRankSelendok(){
	 
}
/*void CHMSEmpInfoDlg::OnRankSetfocus(){
	
}*/
/*void CHMSEmpInfoDlg::OnRankKillfocus(){
	
}*/
long CHMSEmpInfoDlg::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szRankKey);
	}
	m_wndRank.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_rank' %s ORDER BY cast(ss_code as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSEmpInfoDlg::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSEmpInfoDlg::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEmpInfoDlg::OnPositionSelendok(){
	 
}
/*void CHMSEmpInfoDlg::OnPositionSetfocus(){
	
}*/
/*void CHMSEmpInfoDlg::OnPositionKillfocus(){
	
}*/
long CHMSEmpInfoDlg::OnPositionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndPosition.IsSearchKey() && !m_szPositionKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s'"), m_szPositionKey);
	}
	m_wndPosition.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_position' %s ORDER BY cast(ss_code as integer) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPosition.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSEmpInfoDlg::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSEmpInfoDlg::OnContactAddressChange(){
	
} */
/*void CHMSEmpInfoDlg::OnContactAddressSetfocus(){
	
} */
/*void CHMSEmpInfoDlg::OnContactAddressKillfocus(){
	
} */
int CHMSEmpInfoDlg::OnContactAddressCheckValue(){
	return 0;
} 
void CHMSEmpInfoDlg::OnWorkPlaceButtonSelect(){
	//CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if (GetMode() == VM_VIEW || GetMode() == VM_NONE)
	//	return;
	//UpdateData(TRUE);
	//CHMSWorkingPlaceInfoDialog dlg(this);
	//CRecord rs(&pMF->m_db);
	//CString szSQL;
	//CString tmpStr;
	//if (ToLong(m_szWorkingPlaceKey) > 0)
	//	dlg.m_nID = ToLong(m_szWorkingPlaceKey);
	////dlg.m_szName = m_szWorkingPlace;
	//if (dlg.DoModal() == IDOK)
	//{
	//	m_szWorkingPlace = dlg.m_szName;
	//	tmpStr.Format(_T("%ld"), dlg.m_nID); 
	//	m_szWorkingPlaceKey = tmpStr;
	//	m_wndWorkingPlace.SetWindowText(m_szWorkingPlace);
	//}
	
}
void CHMSEmpInfoDlg::OnWorkingPlaceLabelSelect()
{
	 CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 CHMSWorkPlaceDlg dlg(this);
	 dlg.m_nPatientNo = m_nPatientNo;
	 dlg.DoModal();
}
void CHMSEmpInfoDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSEmpInfoDlg();
} 
void CHMSEmpInfoDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSEmpInfoDlg::OnAddHMSEmpInfoDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEmpInfoDlg::OnEditHMSEmpInfoDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEmpInfoDlg::OnDeleteHMSEmpInfoDlg(){
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
 		OnCancelHMSEmpInfoDlg();
 	}
	return 0;
}
int CHMSEmpInfoDlg::OnSaveHMSEmpInfoDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szSQL1;
	CString szWhere2;
	
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_patientTbl.GetInsertSQL();
		szSQL1 = m_hms_docTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE hp_patientno= %ld"), m_nPatientNo);
 		szSQL = m_hms_patientTbl.GetUpdateSQL(_T("hp_createdby, hp_createddate, hp_patientno"));
 		szSQL += szWhere;

		szWhere2.Format(_T(" WHERE hd_patientno = %ld AND hd_docno = %ld"), m_nPatientNo, m_nDocumentNo);
		szSQL1 = m_hms_docTbl.GetUpdateSQL(_T("hd_createdby, hd_createddate, hd_docno, hd_patientno"));
		szSQL1 += szWhere2;
 	}
	_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
	int ret1 = pMF->ExecSQL(szSQL1);
 	if(ret > 0)
 	{
 		
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSEmpInfoDlg::OnCancelHMSEmpInfoDlg(){
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
int CHMSEmpInfoDlg::OnHMSEmpInfoDlgListLoadData(){
	return 0;
}
