#include "EMRecordDocument.h"
#include "MainFrm.h"
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnNameCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRecordDocument* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRecordDocument* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnSexAddNew();
}*/
static void _OnProvinceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRecordDocument* )pWnd)->OnProvinceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvinceSelendokFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnProvinceSelendok();
}
/*static void _OnProvinceSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnProvinceKillfocus();
}*/
/*static void _OnProvinceKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnProvinceKillfocus();
}*/
static long _OnProvinceLoadDataFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnProvinceLoadData();
}
/*static void _OnProvinceAddNewFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnProvinceAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRecordDocument* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRecordDocument* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnVillageAddNew();
}*/
/*static void _OnDetailAddressChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDetailAddressChange();
} */
/*static void _OnDetailAddressSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDetailAddressSetfocus();} */ 
/*static void _OnDetailAddressKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnDetailAddressKillfocus();
} */
static int _OnDetailAddressCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnDetailAddressCheckValue();
} 
/*static void _OnWorkplaceChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnWorkplaceChange();
} */
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnWorkplaceSetfocus();} */ 
/*static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnWorkplaceKillfocus();
} */
static int _OnWorkplaceCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnWorkplaceCheckValue();
} 
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRecordDocument* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRankAddNew();
}*/
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRecordDocument* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnPositionAddNew();
}*/
/*static void _OnWorkAddressChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnWorkAddressChange();
} */
/*static void _OnWorkAddressSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnWorkAddressSetfocus();} */ 
/*static void _OnWorkAddressKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnWorkAddressKillfocus();
} */
static int _OnWorkAddressCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnWorkAddressCheckValue();
} 
/*static void _OnTransferDiagnosticChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnTransferDiagnosticChange();
} */
/*static void _OnTransferDiagnosticSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnTransferDiagnosticSetfocus();} */ 
/*static void _OnTransferDiagnosticKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnTransferDiagnosticKillfocus();
} */
static int _OnTransferDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnTransferDiagnosticCheckValue();
} 
/*static void _OnRelativeChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelativeChange();
} */
/*static void _OnRelativeSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelativeSetfocus();} */ 
/*static void _OnRelativeKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelativeKillfocus();
} */
static int _OnRelativeCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnRelativeCheckValue();
} 
static void _OnRelationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRecordDocument* )pWnd)->OnRelationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRelationSelendokFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelationSelendok();
}
/*static void _OnRelationSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelationKillfocus();
}*/
/*static void _OnRelationKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelationKillfocus();
}*/
static long _OnRelationLoadDataFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnRelationLoadData();
}
/*static void _OnRelationAddNewFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelationAddNew();
}*/
/*static void _OnRelPhoneChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelPhoneChange();
} */
/*static void _OnRelPhoneSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelPhoneSetfocus();} */ 
/*static void _OnRelPhoneKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelPhoneKillfocus();
} */
static int _OnRelPhoneCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnRelPhoneCheckValue();
} 
/*static void _OnRelAddressChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelAddressChange();
} */
/*static void _OnRelAddressSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelAddressSetfocus();} */ 
/*static void _OnRelAddressKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnRelAddressKillfocus();
} */
static int _OnRelAddressCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnRelAddressCheckValue();
} 
/*static void _OnFoodModeChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnFoodModeChange();
} */
/*static void _OnFoodModeSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnFoodModeSetfocus();} */ 
/*static void _OnFoodModeKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnFoodModeKillfocus();
} */
static int _OnFoodModeCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnFoodModeCheckValue();
} 
/*static void _OnNumInwardChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnNumInwardChange();
} */
/*static void _OnNumInwardSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnNumInwardSetfocus();} */ 
/*static void _OnNumInwardKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnNumInwardKillfocus();
} */
static int _OnNumInwardCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnNumInwardCheckValue();
} 
/*static void _OnInwardTimeChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnInwardTimeChange();
} */
/*static void _OnInwardTimeSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnInwardTimeSetfocus();} */ 
/*static void _OnInwardTimeKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnInwardTimeKillfocus();
} */
static int _OnInwardTimeCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnInwardTimeCheckValue();
} 
/*static void _OnInwardDateChangeFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnInwardDateChange();
} */
/*static void _OnInwardDateSetfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnInwardDateSetfocus();} */ 
/*static void _OnInwardDateKillfocusFnc(CWnd *pWnd){
	((CEMRecordDocument *)pWnd)->OnInwardDateKillfocus();
} */
static int _OnInwardDateCheckValueFnc(CWnd *pWnd){
	return ((CEMRecordDocument *)pWnd)->OnInwardDateCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CEMRecordDocument *pVw = (CEMRecordDocument *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEMRecordDocument *pVw = (CEMRecordDocument *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMRecordDocument *pVw = (CEMRecordDocument *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEMRecordDocument*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEMRecordDocument*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMRecordDocument*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEMRecordDocument*)pWnd)->OnListDeleteItem();
} 
static int _OnAddEMRecordDocumentFnc(CWnd *pWnd){
	 return ((CEMRecordDocument*)pWnd)->OnAddEMRecordDocument();
} 
static int _OnEditEMRecordDocumentFnc(CWnd *pWnd){
	 return ((CEMRecordDocument*)pWnd)->OnEditEMRecordDocument();
} 
static int _OnDeleteEMRecordDocumentFnc(CWnd *pWnd){
	 return ((CEMRecordDocument*)pWnd)->OnDeleteEMRecordDocument();
} 
static int _OnSaveEMRecordDocumentFnc(CWnd *pWnd){
	 return ((CEMRecordDocument*)pWnd)->OnSaveEMRecordDocument();
} 
static int _OnCancelEMRecordDocumentFnc(CWnd *pWnd){
	 return ((CEMRecordDocument*)pWnd)->OnCancelEMRecordDocument();
} 
CEMRecordDocument::CEMRecordDocument(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CEMRecordDocument::~CEMRecordDocument(){
}
void CEMRecordDocument::OnCreateComponents(){
	m_wndPatientList.Create(this, _T("Patient List"), 5, 5, 795, 264);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 270, 795, 565);
	m_wndDocNoLabel.Create(this, _T("Doc No"), 10, 30, 90, 55);
	m_wndDocNo.Create(this,95, 30, 175, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 180, 30, 260, 55);
	m_wndName.Create(this,265, 30, 345, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 350, 30, 430, 55);
	m_wndDepartment.Create(this,435, 30, 635, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 295, 110, 320);
	m_wndPatientName.Create(this,115, 295, 450, 320); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 455, 295, 535, 320);
	m_wndBirthDate.Create(this,540, 295, 620, 320); 
	m_wndSexLabel.Create(this, _T("Sex"), 625, 295, 705, 320);
	m_wndSex.Create(this,710, 295, 790, 320); 
	m_wndProvinceLabel.Create(this, _T("Province"), 10, 325, 110, 350);
	m_wndProvince.Create(this,115, 325, 280, 350); 
	m_wndDistrictLabel.Create(this, _T("District"), 285, 325, 365, 350);
	m_wndDistrict.Create(this,370, 325, 535, 350); 
	m_wndVillageLabel.Create(this, _T("Village"), 540, 325, 620, 350);
	m_wndVillage.Create(this,625, 325, 790, 350); 
	m_wndDetailAddressLabel.Create(this, _T("Detail Address"), 10, 355, 110, 380);
	m_wndDetailAddress.Create(this,115, 355, 790, 380); 
	m_wndWorkplaceLabel.Create(this, _T("Workplace"), 10, 385, 110, 410);
	m_wndWorkplace.Create(this,115, 385, 280, 410); 
	m_wndRankLabel.Create(this, _T("Rank"), 285, 385, 365, 411);
	m_wndRank.Create(this,370, 385, 535, 410); 
	m_wndPositionLabel.Create(this, _T("Position"), 540, 385, 620, 410);
	m_wndPosition.Create(this,625, 385, 790, 410); 
	m_wndWorkAddressLabel.Create(this, _T("Work Address"), 10, 415, 110, 440);
	m_wndWorkAddress.Create(this,115, 415, 790, 440); 
	m_wndTransferDiagnosticLabel.Create(this, _T("Transfer Diagnostic"), 10, 445, 110, 470);
	m_wndTransferDiagnostic.Create(this,115, 445, 790, 470); 
	m_wndRelativeLabel.Create(this, _T("Relative"), 10, 475, 110, 500);
	m_wndRelative.Create(this,115, 475, 450, 500); 
	m_wndRelationLabel.Create(this, _T("Relation"), 455, 475, 535, 500);
	m_wndRelation.Create(this,540, 475, 790, 500); 
	m_wndRelPhoneLabel.Create(this, _T("Rel Phone"), 10, 505, 110, 530);
	m_wndRelPhone.Create(this,115, 505, 280, 530); 
	m_wndRelAddressLabel.Create(this, _T("Rel Address"), 285, 505, 365, 530);
	m_wndRelAddress.Create(this,370, 505, 790, 530); 
	m_wndFoodModeLabel.Create(this, _T("Food Mode"), 10, 535, 110, 560);
	m_wndFoodMode.Create(this,115, 535, 280, 560); 
	m_wndNumInwardLabel.Create(this, _T("Num Inward"), 285, 535, 365, 560);
	m_wndNumInward.Create(this,370, 535, 450, 560); 
	m_wndInwardTimeLabel.Create(this, _T("Inward Time"), 455, 535, 535, 560);
	m_wndInwardTime.Create(this,540, 535, 620, 560); 
	m_wndInwardDateLabel.Create(this, _T("Inward Date"), 625, 535, 705, 560);
	m_wndInwardDate.Create(this,710, 535, 790, 560); 
	m_wndUpdate.Create(this, _T("&Update"), 560, 570, 635, 595);
	m_wndSave.Create(this, _T("&Save"), 640, 570, 715, 595);
	m_wndPrint.Create(this, _T("&Print"), 720, 570, 795, 595);
	m_wndList.Create(this,10, 60, 790, 261); 

}
void CEMRecordDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDocNo.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1);
	m_wndProvince.SetCheckValue(true);
	m_wndProvince.LimitText(35);
	m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(35);
	m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(35);
	m_wndDetailAddress.SetLimitText(254);
	m_wndDetailAddress.SetCheckValue(true);
	m_wndWorkplace.SetLimitText(35);
	m_wndWorkplace.SetCheckValue(true);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(35);
	m_wndPosition.SetCheckValue(true);
	m_wndPosition.LimitText(35);
	m_wndWorkAddress.SetLimitText(254);
	m_wndWorkAddress.SetCheckValue(true);
	m_wndTransferDiagnostic.SetLimitText(254);
	m_wndTransferDiagnostic.SetCheckValue(true);
	m_wndRelative.SetLimitText(65);
	m_wndRelative.SetCheckValue(true);
	m_wndRelation.SetCheckValue(true);
	m_wndRelation.LimitText(65);
	m_wndRelPhone.SetLimitText(11);
	m_wndRelPhone.SetCheckValue(true);
	m_wndRelAddress.SetLimitText(254);
	m_wndRelAddress.SetCheckValue(true);
	m_wndFoodMode.SetLimitText(35);
	m_wndFoodMode.SetCheckValue(true);
	m_wndNumInward.SetCheckValue(true);
	m_wndInwardTime.SetCheckValue(true);
	m_wndInwardDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInwardDate.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndSex.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSex.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndProvince.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvince.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistrict.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndVillage.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndRank.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRank.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndPosition.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPosition.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);




	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Doc No"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 35);
	m_wndList.InsertColumn(4, _T("Workplace"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Transfer Diagnostic"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(6, _T("Num Inward"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(7, _T("Inward Time"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(8, _T("Inward Date"), CFMT_DATE, 80);
	m_wndList.InsertColumn(9, _T("Food Mode"), CFMT_TEXT, 80);
	m_hms_xdocTbl.SetTableName(_T("hms_xdoc"));
	m_hms_xdocTbl.AddField(_T("hd_docno"), dfLong); 
	m_hms_xdocTbl.AddField(_T("hd_disease"), dfText, 512); 
	m_hms_xdocTbl.AddField(_T("hd_trdisease"), dfText, 254); 
	m_hms_xdocTbl.AddField(_T("hd_traddress"), dfText, 254); 
	m_hms_xdocTbl.AddField(_T("hd_relative"), dfText, 65); 
	m_hms_xdocTbl.AddField(_T("hd_relation"), dfText, 65); 
	m_hms_xdocTbl.AddField(_T("hd_reladdress"), dfText, 254); 
	m_hms_xdocTbl.AddField(_T("hd_relphone"), dfText, 11); 
	m_hms_xdocTbl.AddField(_T("hd_numinward"), dfLong); 
	m_hms_xdocTbl.AddField(_T("hd_inwardtime"), dfLong); 
	m_hms_xdocTbl.AddField(_T("hd_inwarddate"), dfDate); 
	m_hms_xdocTbl.AddField(_T("hd_foodmode"), dfText, 35); 
	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("hp_patientno"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_patientid"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_surname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_midname"), dfText, 45); 
	m_hms_patientTbl.AddField(_T("hp_firstname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_birthdate"), dfDate); 
	m_hms_patientTbl.AddField(_T("hp_sex"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hp_ethnic"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_religion"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_sin"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hp_provid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_distid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_villid"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_dtladdr"), dfText, 254); 
	m_hms_patientTbl.AddField(_T("hp_occupation"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_workplaceid"), dfText, 13); 
	m_hms_patientTbl.AddField(_T("hp_workplace"), dfText, 254); 
	m_hms_patientTbl.AddField(_T("hp_rank"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_position"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_status"), dfText, 1); 
	m_hms_patientTbl.AddField(_T("hp_type"), dfText, 1); 

}
void CEMRecordDocument::OnSetWindowEvents(){
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
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
	m_wndProvince.SetEvent(WE_SELENDOK, _OnProvinceSelendokFnc);
	//m_wndProvince.SetEvent(WE_SETFOCUS, _OnProvinceSetfocusFnc);
	//m_wndProvince.SetEvent(WE_KILLFOCUS, _OnProvinceKillfocusFnc);
	m_wndProvince.SetEvent(WE_SELCHANGE, _OnProvinceSelectChangeFnc);
	m_wndProvince.SetEvent(WE_LOADDATA, _OnProvinceLoadDataFnc);
	//m_wndProvince.SetEvent(WE_ADDNEW, _OnProvinceAddNewFnc);
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
	//m_wndDetailAddress.SetEvent(WE_CHANGE, _OnDetailAddressChangeFnc);
	//m_wndDetailAddress.SetEvent(WE_SETFOCUS, _OnDetailAddressSetfocusFnc);
	//m_wndDetailAddress.SetEvent(WE_KILLFOCUS, _OnDetailAddressKillfocusFnc);
	m_wndDetailAddress.SetEvent(WE_CHECKVALUE, _OnDetailAddressCheckValueFnc);
	//m_wndWorkplace.SetEvent(WE_CHANGE, _OnWorkplaceChangeFnc);
	//m_wndWorkplace.SetEvent(WE_SETFOCUS, _OnWorkplaceSetfocusFnc);
	//m_wndWorkplace.SetEvent(WE_KILLFOCUS, _OnWorkplaceKillfocusFnc);
	m_wndWorkplace.SetEvent(WE_CHECKVALUE, _OnWorkplaceCheckValueFnc);
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
	//m_wndWorkAddress.SetEvent(WE_CHANGE, _OnWorkAddressChangeFnc);
	//m_wndWorkAddress.SetEvent(WE_SETFOCUS, _OnWorkAddressSetfocusFnc);
	//m_wndWorkAddress.SetEvent(WE_KILLFOCUS, _OnWorkAddressKillfocusFnc);
	m_wndWorkAddress.SetEvent(WE_CHECKVALUE, _OnWorkAddressCheckValueFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_CHANGE, _OnTransferDiagnosticChangeFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_SETFOCUS, _OnTransferDiagnosticSetfocusFnc);
	//m_wndTransferDiagnostic.SetEvent(WE_KILLFOCUS, _OnTransferDiagnosticKillfocusFnc);
	m_wndTransferDiagnostic.SetEvent(WE_CHECKVALUE, _OnTransferDiagnosticCheckValueFnc);
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
	//m_wndRelPhone.SetEvent(WE_CHANGE, _OnRelPhoneChangeFnc);
	//m_wndRelPhone.SetEvent(WE_SETFOCUS, _OnRelPhoneSetfocusFnc);
	//m_wndRelPhone.SetEvent(WE_KILLFOCUS, _OnRelPhoneKillfocusFnc);
	m_wndRelPhone.SetEvent(WE_CHECKVALUE, _OnRelPhoneCheckValueFnc);
	//m_wndRelAddress.SetEvent(WE_CHANGE, _OnRelAddressChangeFnc);
	//m_wndRelAddress.SetEvent(WE_SETFOCUS, _OnRelAddressSetfocusFnc);
	//m_wndRelAddress.SetEvent(WE_KILLFOCUS, _OnRelAddressKillfocusFnc);
	m_wndRelAddress.SetEvent(WE_CHECKVALUE, _OnRelAddressCheckValueFnc);
	//m_wndFoodMode.SetEvent(WE_CHANGE, _OnFoodModeChangeFnc);
	//m_wndFoodMode.SetEvent(WE_SETFOCUS, _OnFoodModeSetfocusFnc);
	//m_wndFoodMode.SetEvent(WE_KILLFOCUS, _OnFoodModeKillfocusFnc);
	m_wndFoodMode.SetEvent(WE_CHECKVALUE, _OnFoodModeCheckValueFnc);
	//m_wndNumInward.SetEvent(WE_CHANGE, _OnNumInwardChangeFnc);
	//m_wndNumInward.SetEvent(WE_SETFOCUS, _OnNumInwardSetfocusFnc);
	//m_wndNumInward.SetEvent(WE_KILLFOCUS, _OnNumInwardKillfocusFnc);
	m_wndNumInward.SetEvent(WE_CHECKVALUE, _OnNumInwardCheckValueFnc);
	//m_wndInwardTime.SetEvent(WE_CHANGE, _OnInwardTimeChangeFnc);
	//m_wndInwardTime.SetEvent(WE_SETFOCUS, _OnInwardTimeSetfocusFnc);
	//m_wndInwardTime.SetEvent(WE_KILLFOCUS, _OnInwardTimeKillfocusFnc);
	m_wndInwardTime.SetEvent(WE_CHECKVALUE, _OnInwardTimeCheckValueFnc);
	//m_wndInwardDate.SetEvent(WE_CHANGE, _OnInwardDateChangeFnc);
	//m_wndInwardDate.SetEvent(WE_SETFOCUS, _OnInwardDateSetfocusFnc);
	//m_wndInwardDate.SetEvent(WE_KILLFOCUS, _OnInwardDateKillfocusFnc);
	m_wndInwardDate.SetEvent(WE_CHECKVALUE, _OnInwardDateCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

}
void CEMRecordDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndProvince.GetDlgCtrlID(), m_szProvinceKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_Text(pDX, m_wndDetailAddress.GetDlgCtrlID(), m_szDetailAddress);
	DDX_Text(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplace);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);
	DDX_Text(pDX, m_wndWorkAddress.GetDlgCtrlID(), m_szWorkAddress);
	DDX_Text(pDX, m_wndTransferDiagnostic.GetDlgCtrlID(), m_szTransferDiagnostic);
	DDX_Text(pDX, m_wndRelative.GetDlgCtrlID(), m_szRelative);
	DDX_TextEx(pDX, m_wndRelation.GetDlgCtrlID(), m_szRelationKey);
	DDX_Text(pDX, m_wndRelPhone.GetDlgCtrlID(), m_szRelPhone);
	DDX_Text(pDX, m_wndRelAddress.GetDlgCtrlID(), m_szRelAddress);
	DDX_Text(pDX, m_wndFoodMode.GetDlgCtrlID(), m_szFoodMode);
	DDX_Text(pDX, m_wndNumInward.GetDlgCtrlID(), m_nNumInward);
	DDX_Text(pDX, m_wndInwardTime.GetDlgCtrlID(), m_nInwardTime);
	DDX_TextEx(pDX, m_wndInwardDate.GetDlgCtrlID(), m_szInwardDate);

}
void CEMRecordDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT *	FROM hms_patient " ) \
								_T("LEFT JOIN hms_doc ON (hp_patientno = hd_docno) ") \
								_T("LEFT JOIN hms_xdoc ON (hd_no = hd_docno)"));
	if (m_nDocNo > 0)
		szSQL.AppendFormat(_T(" WHERE hd_docno = %d"), m_nDocNo);
_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_docno"), m_nDocNo);
	rs.GetValue(_T("hd_trdisease"), m_szTransferDiagnostic);
	rs.GetValue(_T("hd_traddress"), m_szWorkAddress);
	rs.GetValue(_T("hd_relative"), m_szRelative);
	rs.GetValue(_T("hd_relation"), m_szRelationKey);
	rs.GetValue(_T("hd_reladdress"), m_szRelAddress);
	rs.GetValue(_T("hd_relphone"), m_szRelPhone);
	rs.GetValue(_T("hd_numinward"), m_nNumInward);
	rs.GetValue(_T("hd_inwardtime"), m_nInwardTime);
	rs.GetValue(_T("hd_inwarddate"), m_szInwardDate);
	rs.GetValue(_T("hd_foodmode"), m_szFoodMode);
	rs.GetValue(_T("hp_birthdate"), m_szBirthDate);
	rs.GetValue(_T("hp_sex"), m_szSexKey);
	rs.GetValue(_T("hp_dtladdr"), m_szDetailAddress);
	rs.GetValue(_T("hd_rank"), m_szRankKey);
	rs.GetValue(_T("hd_position"), m_szPositionKey);
	
}
void CEMRecordDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_xdocTbl.SetValue(_T("hd_docno"), m_nDocNo);
	m_hms_xdocTbl.SetValue(_T("hd_trdisease"), m_szTransferDiagnostic);
	m_hms_xdocTbl.SetValue(_T("hd_traddress"), m_szWorkAddress);
	m_hms_xdocTbl.SetValue(_T("hd_relative"), m_szRelative);
	m_hms_xdocTbl.SetValue(_T("hd_relation"), m_szRelationKey);
	m_hms_xdocTbl.SetValue(_T("hd_reladdress"), m_szRelAddress);
	m_hms_xdocTbl.SetValue(_T("hd_relphone"), m_szRelPhone);
	m_hms_xdocTbl.SetValue(_T("hd_numinward"), m_nNumInward);
	m_hms_xdocTbl.SetValue(_T("hd_inwardtime"), m_nInwardTime);
	m_hms_xdocTbl.SetValue(_T("hd_inwarddate"), m_szInwardDate);
	m_hms_xdocTbl.SetValue(_T("hd_foodmode"), m_szFoodMode);
	m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szBirthDate);
	m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSexKey);
	m_hms_patientTbl.SetValue(_T("hp_dtladdr"), m_szDetailAddress);

}
void CEMRecordDocument::SetDefaultValues(){

	m_nDocNo=0;
	m_szName.Empty();
	m_szDepartmentKey.Empty();
	m_szPatientName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szProvinceKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szDetailAddress.Empty();
	m_szWorkplace.Empty();
	m_szRankKey.Empty();
	m_szPositionKey.Empty();
	m_szWorkAddress.Empty();
	m_szTransferDiagnostic.Empty();
	m_szRelative.Empty();
	m_szRelationKey.Empty();
	m_szRelPhone.Empty();
	m_szRelAddress.Empty();
	m_szFoodMode.Empty();
	m_nNumInward=0;
	m_nInwardTime=0;
	m_szInwardDate.Empty();

}
int CEMRecordDocument::SetMode(int nMode){
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
/*void CEMRecordDocument::OnDocNoChange(){
	
} */
/*void CEMRecordDocument::OnDocNoSetfocus(){
	
} */
/*void CEMRecordDocument::OnDocNoKillfocus(){
	
} */
int CEMRecordDocument::OnDocNoCheckValue(){
	if (m_nDocNo<0)
		return -1;
	GetDataToScreen();
	OnListLoadData();
	return 0;
} 
/*void CEMRecordDocument::OnNameChange(){
	
} */
/*void CEMRecordDocument::OnNameSetfocus(){
	
} */
/*void CEMRecordDocument::OnNameKillfocus(){
	
} */
int CEMRecordDocument::OnNameCheckValue(){
	return 0;
} 
void CEMRecordDocument::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnDepartmentSelendok(){
	 
}
/*void CEMRecordDocument::OnDepartmentSetfocus(){
	
}*/
/*void CEMRecordDocument::OnDepartmentKillfocus(){
	
}*/
long CEMRecordDocument::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as desc FROM sys_dept"));
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMRecordDocument::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMRecordDocument::OnPatientNameChange(){
	
} */
/*void CEMRecordDocument::OnPatientNameSetfocus(){
	
} */
/*void CEMRecordDocument::OnPatientNameKillfocus(){
	
} */
int CEMRecordDocument::OnPatientNameCheckValue(){
	return 0;
} 
/*void CEMRecordDocument::OnBirthDateChange(){
	
} */
/*void CEMRecordDocument::OnBirthDateSetfocus(){
	
} */
/*void CEMRecordDocument::OnBirthDateKillfocus(){
	
} */
int CEMRecordDocument::OnBirthDateCheckValue(){
	return 0;
} 
void CEMRecordDocument::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnSexSelendok(){
	 
}
/*void CEMRecordDocument::OnSexSetfocus(){
	
}*/
/*void CEMRecordDocument::OnSexKillfocus(){
	
}*/
long CEMRecordDocument::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szSQL.Format(_T("SELECT ss_code as id,ss_desc as desc FROM sys_sel WHERE ss_id = 'sys_sex'"));
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
	};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(rs.GetValue(_T("id")), 
						rs.GetValue(_T("desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMRecordDocument::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEMRecordDocument::OnProvinceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnProvinceSelendok(){
	 
}
/*void CEMRecordDocument::OnProvinceSetfocus(){
	
}*/
/*void CEMRecordDocument::OnProvinceKillfocus(){
	
}*/
long CEMRecordDocument::OnProvinceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szSQL.Format(_T("SELECT prov_id as id,prov_nme as desc FROM chc_prov"));
	if(m_wndProvince.IsSearchKey() && !m_szProvinceKey.IsEmpty()){
	};
	m_wndProvince.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvince.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMRecordDocument::OnProvinceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEMRecordDocument::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnDistrictSelendok(){
	 
}
/*void CEMRecordDocument::OnDistrictSetfocus(){
	
}*/
/*void CEMRecordDocument::OnDistrictKillfocus(){
	
}*/
long CEMRecordDocument::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (!m_szProvinceKey.IsEmpty())
		szSQL.Format(_T("SELECT dist_id as id,dist_nme as desc FROM chc_dist WHERE dist_provid = '%s'"), m_szProvinceKey);
	if(m_wndDistrict.IsSearchKey() && !m_szDistrictKey.IsEmpty()){
	};
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMRecordDocument::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEMRecordDocument::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnVillageSelendok(){
	 
}
/*void CEMRecordDocument::OnVillageSetfocus(){
	
}*/
/*void CEMRecordDocument::OnVillageKillfocus(){
	
}*/
long CEMRecordDocument::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (!m_szDistrictKey.IsEmpty())
		szSQL.Format(_T("SELECT vill_id as id, vill_nme as desc FROM chc_vill WHERE vill_provid = '%s' AND vill_distid = '%s'"), m_szProvinceKey, m_szDistrictKey);
	if(m_wndVillage.IsSearchKey() && !m_szVillageKey.IsEmpty()){
	};
	m_wndVillage.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVillage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMRecordDocument::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMRecordDocument::OnDetailAddressChange(){
	
} */
/*void CEMRecordDocument::OnDetailAddressSetfocus(){
	
} */
/*void CEMRecordDocument::OnDetailAddressKillfocus(){
	
} */
int CEMRecordDocument::OnDetailAddressCheckValue(){
	return 0;
} 
/*void CEMRecordDocument::OnWorkplaceChange(){
	
} */
/*void CEMRecordDocument::OnWorkplaceSetfocus(){
	
} */
/*void CEMRecordDocument::OnWorkplaceKillfocus(){
	
} */
int CEMRecordDocument::OnWorkplaceCheckValue(){
	return 0;
} 
void CEMRecordDocument::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnRankSelendok(){
	 
}
/*void CEMRecordDocument::OnRankSetfocus(){
	
}*/
/*void CEMRecordDocument::OnRankKillfocus(){
	
}*/
long CEMRecordDocument::OnRankLoadData(){
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
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMRecordDocument::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEMRecordDocument::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnPositionSelendok(){
	 
}
/*void CEMRecordDocument::OnPositionSetfocus(){
	
}*/
/*void CEMRecordDocument::OnPositionKillfocus(){
	
}*/
long CEMRecordDocument::OnPositionLoadData(){
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
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMRecordDocument::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMRecordDocument::OnWorkAddressChange(){
	
} */
/*void CEMRecordDocument::OnWorkAddressSetfocus(){
	
} */
/*void CEMRecordDocument::OnWorkAddressKillfocus(){
	
} */
int CEMRecordDocument::OnWorkAddressCheckValue(){
	return 0;
} 
/*void CEMRecordDocument::OnTransferDiagnosticChange(){
	
} */
/*void CEMRecordDocument::OnTransferDiagnosticSetfocus(){
	
} */
/*void CEMRecordDocument::OnTransferDiagnosticKillfocus(){
	
} */
int CEMRecordDocument::OnTransferDiagnosticCheckValue(){
	return 0;
} 
/*void CEMRecordDocument::OnRelativeChange(){
	
} */
/*void CEMRecordDocument::OnRelativeSetfocus(){
	
} */
/*void CEMRecordDocument::OnRelativeKillfocus(){
	
} */
int CEMRecordDocument::OnRelativeCheckValue(){
	return 0;
} 
void CEMRecordDocument::OnRelationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnRelationSelendok(){
	 
}
/*void CEMRecordDocument::OnRelationSetfocus(){
	
}*/
/*void CEMRecordDocument::OnRelationKillfocus(){
	
}*/
long CEMRecordDocument::OnRelationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRelation.IsSearchKey() && !m_szRelationKey.IsEmpty()){
	};
	m_wndRelation.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRelation.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMRecordDocument::OnRelationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMRecordDocument::OnRelPhoneChange(){
	
} */
/*void CEMRecordDocument::OnRelPhoneSetfocus(){
	
} */
/*void CEMRecordDocument::OnRelPhoneKillfocus(){
	
} */
int CEMRecordDocument::OnRelPhoneCheckValue(){
	return 0;
} 
/*void CEMRecordDocument::OnRelAddressChange(){
	
} */
/*void CEMRecordDocument::OnRelAddressSetfocus(){
	
} */
/*void CEMRecordDocument::OnRelAddressKillfocus(){
	
} */
int CEMRecordDocument::OnRelAddressCheckValue(){
	return 0;
} 
/*void CEMRecordDocument::OnFoodModeChange(){
	
} */
/*void CEMRecordDocument::OnFoodModeSetfocus(){
	
} */
/*void CEMRecordDocument::OnFoodModeKillfocus(){
	
} */
int CEMRecordDocument::OnFoodModeCheckValue(){
	return 0;
} 
/*void CEMRecordDocument::OnNumInwardChange(){
	
} */
/*void CEMRecordDocument::OnNumInwardSetfocus(){
	
} */
/*void CEMRecordDocument::OnNumInwardKillfocus(){
	
} */
int CEMRecordDocument::OnNumInwardCheckValue(){
	return 0;
} 
/*void CEMRecordDocument::OnInwardTimeChange(){
	
} */
/*void CEMRecordDocument::OnInwardTimeSetfocus(){
	
} */
/*void CEMRecordDocument::OnInwardTimeKillfocus(){
	
} */
int CEMRecordDocument::OnInwardTimeCheckValue(){
	return 0;
} 
/*void CEMRecordDocument::OnInwardDateChange(){
	
} */
/*void CEMRecordDocument::OnInwardDateSetfocus(){
	
} */
/*void CEMRecordDocument::OnInwardDateKillfocus(){
	
} */
int CEMRecordDocument::OnInwardDateCheckValue(){
	return 0;
} 
void CEMRecordDocument::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRecordDocument::OnListDblClick(){
	
} 
void CEMRecordDocument::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEMRecordDocument::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEMRecordDocument::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	// tim theo sohs (neu nhap sohs)
	if (m_nDocNo>0)
		szWhere.Format(_T(" and  hd_docno = %d"), m_nDocNo);
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Birth")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("Workplace")), 
			rs.GetValue(_T("TransferDiagnostic")), 
			rs.GetValue(_T("NumInward")), 
			rs.GetValue(_T("InwardTime")), 
			rs.GetValue(_T("InwardDate")), 
			rs.GetValue(_T("FoodMode")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CEMRecordDocument::OnAddEMRecordDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CEMRecordDocument::OnEditEMRecordDocument(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMRecordDocument::OnDeleteEMRecordDocument(){
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
 		OnCancelEMRecordDocument(); 
 	}
	return 0;
}
int CEMRecordDocument::OnSaveEMRecordDocument(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_xdocTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_xdocTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnEMRecordDocumentListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CEMRecordDocument::OnCancelEMRecordDocument(){
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
int CEMRecordDocument::OnEMRecordDocumentListLoadData(){
	return 0;
}
CString CEMRecordDocument::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ") \
						_T(" trim(hp_surname||' '||hp_midname||' '||hp_fstname) as name, ") \
						_T(" date_part('year', hp_birthdte) as yob, hp_sex, ") \
						_T(" (select sel_oth from rsde_sel where sel_zone='hms' and sel_sector='rank' and cast(sel_line as integer)=hd_rank) as rank, ") \
						_T(" hd_position, hp_employer, ") \
						_T(" hms_getvnaddr(hp_vnaddrcde),  hd_relative, hd_relation, hd_reladdress, hd_relphone, ") \
						_T(" hd_trdisease, ") \
						_T(" (select icd_desc from chc_icd10 where icd_10=hd_lasticd) as icd10, ") \
						_T(" hd_disease, ") \
						_T(" date(hd_dte) as examdte, ") \
						_T(" (selct hmsfl_name from hms_faclist where hmsfl_facid=hd_sifacidx) as facname, ") \
						_T(" hd_numinward, hd_inwardtime, hd_foodmode, ") \
						_T(" (select hpo_desc from hms_patientobj where hpo_idx=hd_policy) as policydesc, ") \
						_T(" (select hi_no from hms_insurance where hi_patno=hd_patno and hi_idx=hd_insuranceidx) as cardno ") \
					_T(" FROM hms_patient ") \
					_T(" LEFT JOIN hms_doc ON(hd_patno=hp_patientno) ") \
					_T(" LEFT JOIN hms_xdoc ON(hd_no=hd_docno) ") \
					_T(" WHERE hp_patientno=%ld AND hd_suggest ='D' and hd_sifacidx > 0 "), m_nDocNo);
_fmsg(_T("%s"), szSQL);
	return szSQL;
}
