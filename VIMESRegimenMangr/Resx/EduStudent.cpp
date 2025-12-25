#include "EduStudent.h"
#include "MainFrm.h"
/*static void _OnClassIDChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnClassIDChange();
} */
/*static void _OnClassIDSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnClassIDSetfocus();} */ 
/*static void _OnClassIDKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnClassIDKillfocus();
} */
static int _OnClassIDCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnClassIDCheckValue();
} 
/*static void _OnStudentIDChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnStudentIDChange();
} */
/*static void _OnStudentIDSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnStudentIDSetfocus();} */ 
/*static void _OnStudentIDKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnStudentIDKillfocus();
} */
static int _OnStudentIDCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnStudentIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudent* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudent* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnEthnicAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnAddressCheckValue();
} 
static void _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudent* )pWnd)->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOccupationSelendokFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnOccupationSelendok();
}
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnOccupationKillfocus();
}*/
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnOccupationKillfocus();
}*/
static long _OnOccupationLoadDataFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnOccupationLoadData();
}
/*static void _OnOccupationAddNewFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnOccupationAddNew();
}*/
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudent* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnPositionAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudent* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnRankAddNew();
}*/
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnCardIDChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnCardIDChange();
} */
/*static void _OnCardIDSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnCardIDSetfocus();} */ 
/*static void _OnCardIDKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnCardIDKillfocus();
} */
static int _OnCardIDCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnCardIDCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnDateCheckValue();
} 
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnStartDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnEndDateCheckValue();
} 
static void _OnDeptIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudent* )pWnd)->OnDeptIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptIDSelendokFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDeptIDSelendok();
}
/*static void _OnDeptIDSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDeptIDKillfocus();
}*/
/*static void _OnDeptIDKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDeptIDKillfocus();
}*/
static long _OnDeptIDLoadDataFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnDeptIDLoadData();
}
/*static void _OnDeptIDAddNewFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDeptIDAddNew();
}*/
/*static void _OnTechniqueChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnTechniqueChange();
} */
/*static void _OnTechniqueSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnTechniqueSetfocus();} */ 
/*static void _OnTechniqueKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnTechniqueKillfocus();
} */
static int _OnTechniqueCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnTechniqueCheckValue();
} 
/*static void _OnCertificateChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnCertificateChange();
} */
/*static void _OnCertificateSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnCertificateSetfocus();} */ 
/*static void _OnCertificateKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnCertificateKillfocus();
} */
static int _OnCertificateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnCertificateCheckValue();
} 
/*static void _OnDecideChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDecideChange();
} */
/*static void _OnDecideSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDecideSetfocus();} */ 
/*static void _OnDecideKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDecideKillfocus();
} */
static int _OnDecideCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnDecideCheckValue();
} 
/*static void _OnDecideDateChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDecideDateChange();
} */
/*static void _OnDecideDateSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDecideDateSetfocus();} */ 
/*static void _OnDecideDateKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDecideDateKillfocus();
} */
static int _OnDecideDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnDecideDateCheckValue();
} 
/*static void _OnContentChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnContentChange();
} */
/*static void _OnContentSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnContentSetfocus();} */ 
/*static void _OnContentKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnContentKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnContentCheckValue();
} 
/*static void _OnProjectIDChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnProjectIDChange();
} */
/*static void _OnProjectIDSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnProjectIDSetfocus();} */ 
/*static void _OnProjectIDKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnProjectIDKillfocus();
} */
static int _OnProjectIDCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnProjectIDCheckValue();
} 
/*static void _OnPlacesIDChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnPlacesIDChange();
} */
/*static void _OnPlacesIDSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnPlacesIDSetfocus();} */ 
/*static void _OnPlacesIDKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnPlacesIDKillfocus();
} */
static int _OnPlacesIDCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnPlacesIDCheckValue();
} 
/*static void _OnCertificateReceiveChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnCertificateReceiveChange();
} */
/*static void _OnCertificateReceiveSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnCertificateReceiveSetfocus();} */ 
/*static void _OnCertificateReceiveKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnCertificateReceiveKillfocus();
} */
static int _OnCertificateReceiveCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnCertificateReceiveCheckValue();
} 
static void _OnDeptidReceiveSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudent* )pWnd)->OnDeptidReceiveSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptidReceiveSelendokFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDeptidReceiveSelendok();
}
/*static void _OnDeptidReceiveSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDeptidReceiveKillfocus();
}*/
/*static void _OnDeptidReceiveKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDeptidReceiveKillfocus();
}*/
static long _OnDeptidReceiveLoadDataFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnDeptidReceiveLoadData();
}
/*static void _OnDeptidReceiveAddNewFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnDeptidReceiveAddNew();
}*/
static void _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudent* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResultSelendokFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnResultAddNew();
}*/
static void _OnTypeIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudent* )pWnd)->OnTypeIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeIDSelendokFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnTypeIDSelendok();
}
/*static void _OnTypeIDSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnTypeIDKillfocus();
}*/
/*static void _OnTypeIDKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnTypeIDKillfocus();
}*/
static long _OnTypeIDLoadDataFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnTypeIDLoadData();
}
/*static void _OnTypeIDAddNewFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnTypeIDAddNew();
}*/
/*static void _OnWorkUnitChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnWorkUnitChange();
} */
/*static void _OnWorkUnitSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnWorkUnitSetfocus();} */ 
/*static void _OnWorkUnitKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnWorkUnitKillfocus();
} */
static int _OnWorkUnitCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnWorkUnitCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnNoteCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudent* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CEduStudent *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CEduStudent *)pWnd)->OnStatusAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CEduStudent *pVw = (CEduStudent *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEduStudent *pVw = (CEduStudent *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEduStudent *pVw = (CEduStudent *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEduStudent *pVw = (CEduStudent *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEduStudent *pVw = (CEduStudent *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEduStudent *pVw = (CEduStudent *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddEduStudentFnc(CWnd *pWnd){
	 return ((CEduStudent*)pWnd)->OnAddEduStudent();
} 
static int _OnEditEduStudentFnc(CWnd *pWnd){
	 return ((CEduStudent*)pWnd)->OnEditEduStudent();
} 
static int _OnDeleteEduStudentFnc(CWnd *pWnd){
	 return ((CEduStudent*)pWnd)->OnDeleteEduStudent();
} 
static int _OnSaveEduStudentFnc(CWnd *pWnd){
	 return ((CEduStudent*)pWnd)->OnSaveEduStudent();
} 
static int _OnCancelEduStudentFnc(CWnd *pWnd){
	 return ((CEduStudent*)pWnd)->OnCancelEduStudent();
} 
CEduStudent::CEduStudent(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEduStudent::~CEduStudent(){
}
void CEduStudent::OnCreateComponents(){
	m_wndGroupInformation.Create(this, _T("Information"), 5, 5, 700, 450);
	m_wndPicture.Create(this, _T(""), 469, 30, 695, 175);
	m_wndClassIDLabel.Create(this, _T("Class ID"), 240, 30, 350, 55);
	m_wndClassID.Create(this,125, 30, 235, 55); 
	m_wndStudentIDLabel.Create(this, _T("Student ID"), 10, 30, 120, 55);
	m_wndStudentID.Create(this,355, 30, 464, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 120, 85);
	m_wndName.Create(this,125, 60, 465, 85); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 10, 90, 120, 115);
	m_wndBirthDate.Create(this,125, 90, 235, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 240, 90, 350, 115);
	m_wndSex.Create(this,355, 90, 465, 115); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 10, 150, 120, 175);
	m_wndEthnic.Create(this,125, 150, 235, 175); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 120, 145);
	m_wndAddress.Create(this,125, 120, 465, 145); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 240, 150, 350, 175);
	m_wndOccupation.Create(this,355, 150, 465, 175); 
	m_wndPositionLabel.Create(this, _T("Position"), 240, 180, 350, 205);
	m_wndPosition.Create(this,355, 180, 465, 205); 
	m_wndRankLabel.Create(this, _T("Rank"), 10, 180, 120, 205);
	m_wndRank.Create(this,125, 180, 235, 205); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 470, 180, 580, 205);
	m_wndPhone.Create(this,585, 180, 695, 205); 
	m_wndCardIDLabel.Create(this, _T("Card ID"), 470, 270, 580, 295);
	m_wndCardID.Create(this,585, 270, 695, 295); 
	m_wndDateLabel.Create(this, _T("Date"), 10, 210, 120, 235);
	m_wndDate.Create(this,125, 210, 235, 235); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 240, 210, 350, 235);
	m_wndStartDate.Create(this,355, 210, 465, 235); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 470, 210, 580, 235);
	m_wndEndDate.Create(this,585, 210, 695, 235); 
	m_wndDeptIDLabel.Create(this, _T("Dept ID"), 10, 240, 120, 265);
	m_wndDeptID.Create(this,125, 240, 235, 265); 
	m_wndTechniqueLabel.Create(this, _T("Technique"), 240, 240, 350, 265);
	m_wndTechnique.Create(this,355, 240, 465, 265); 
	m_wndCertificateLabel.Create(this, _T("Certificate"), 470, 240, 580, 265);
	m_wndCertificate.Create(this,585, 240, 695, 265); 
	m_wndDecideLabel.Create(this, _T("Decide"), 10, 270, 120, 295);
	m_wndDecide.Create(this,125, 270, 235, 295); 
	m_wndDecideDateLabel.Create(this, _T("Decide date"), 240, 270, 350, 295);
	m_wndDecideDate.Create(this,355, 270, 465, 295); 
	m_wndContentLabel.Create(this, _T("Content"), 10, 300, 120, 325);
	m_wndContent.Create(this,125, 300, 695, 325); 
	m_wndProjectIDLabel.Create(this, _T("Project ID"), 10, 330, 120, 355);
	m_wndProjectID.Create(this,125, 330, 235, 355); 
	m_wndPlacesIDLabel.Create(this, _T("Places ID"), 240, 330, 350, 355);
	m_wndPlacesID.Create(this,355, 330, 465, 355); 
	m_wndCertificateReceiveLabel.Create(this, _T("Certificate receive"), 470, 330, 580, 355);
	m_wndCertificateReceive.Create(this,585, 330, 695, 355); 
	m_wndDeptidReceiveLabel.Create(this, _T("Deptid receive"), 10, 360, 120, 385);
	m_wndDeptidReceive.Create(this,125, 360, 235, 385); 
	m_wndResultLabel.Create(this, _T("Result"), 240, 360, 350, 385);
	m_wndResult.Create(this,355, 360, 465, 385); 
	m_wndTypeIDLabel.Create(this, _T("Type ID"), 470, 360, 580, 385);
	m_wndTypeID.Create(this,585, 360, 695, 385); 
	m_wndWorkUnitLabel.Create(this, _T("Work Unit"), 10, 390, 120, 415);
	m_wndWorkUnit.Create(this,125, 390, 465, 415); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 420, 120, 445);
	m_wndNote.Create(this,125, 420, 695, 445); 
	m_wndStatusLabel.Create(this, _T("Status"), 470, 390, 580, 415);
	m_wndStatus.Create(this,585, 390, 695, 415); 
	m_wndAdd.Create(this, _T("&Add"), 130, 455, 220, 480);
	m_wndSave.Create(this, _T("&Save"), 225, 455, 315, 480);
	m_wndEdit.Create(this, _T("&Edit"), 320, 455, 410, 480);
	m_wndDelete.Create(this, _T("&Delete"), 415, 455, 505, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 510, 455, 600, 480);
	m_wndPrint.Create(this, _T("&Print"), 605, 455, 695, 480);

}
void CEduStudent::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndClassID.SetLimitText(1024);
	m_wndClassID.SetCheckValue(true);
	m_wndStudentID.SetLimitText(1024);
	m_wndStudentID.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1024);
	m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(1024);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndOccupation.SetCheckValue(true);
	m_wndOccupation.LimitText(1024);
	m_wndPosition.SetCheckValue(true);
	m_wndPosition.LimitText(1024);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);
	m_wndPhone.SetLimitText(1024);
	m_wndPhone.SetCheckValue(true);
	m_wndCardID.SetLimitText(1024);
	m_wndCardID.SetCheckValue(true);
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndStartDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndStartDate.SetCheckValue(true);
	m_wndEndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndEndDate.SetCheckValue(true);
	m_wndDeptID.SetCheckValue(true);
	m_wndDeptID.LimitText(1024);
	m_wndTechnique.SetLimitText(1024);
	m_wndTechnique.SetCheckValue(true);
	m_wndCertificate.SetLimitText(1024);
	m_wndCertificate.SetCheckValue(true);
	m_wndDecide.SetLimitText(1024);
	m_wndDecide.SetCheckValue(true);
	m_wndDecideDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDecideDate.SetCheckValue(true);
	m_wndContent.SetLimitText(1024);
	m_wndContent.SetCheckValue(true);
	m_wndProjectID.SetLimitText(1024);
	m_wndProjectID.SetCheckValue(true);
	m_wndPlacesID.SetLimitText(1024);
	m_wndPlacesID.SetCheckValue(true);
	m_wndCertificateReceive.SetLimitText(1024);
	m_wndCertificateReceive.SetCheckValue(true);
	m_wndDeptidReceive.SetCheckValue(true);
	m_wndDeptidReceive.LimitText(1024);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(1024);
	m_wndTypeID.SetCheckValue(true);
	m_wndTypeID.LimitText(1024);
	m_wndWorkUnit.SetLimitText(1024);
	m_wndWorkUnit.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);





















}
void CEduStudent::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndClassID.SetEvent(WE_CHANGE, _OnClassIDChangeFnc);
	//m_wndClassID.SetEvent(WE_SETFOCUS, _OnClassIDSetfocusFnc);
	//m_wndClassID.SetEvent(WE_KILLFOCUS, _OnClassIDKillfocusFnc);
	m_wndClassID.SetEvent(WE_CHECKVALUE, _OnClassIDCheckValueFnc);
	//m_wndStudentID.SetEvent(WE_CHANGE, _OnStudentIDChangeFnc);
	//m_wndStudentID.SetEvent(WE_SETFOCUS, _OnStudentIDSetfocusFnc);
	//m_wndStudentID.SetEvent(WE_KILLFOCUS, _OnStudentIDKillfocusFnc);
	m_wndStudentID.SetEvent(WE_CHECKVALUE, _OnStudentIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
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
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndOccupation.SetEvent(WE_SELENDOK, _OnOccupationSelendokFnc);
	//m_wndOccupation.SetEvent(WE_SETFOCUS, _OnOccupationSetfocusFnc);
	//m_wndOccupation.SetEvent(WE_KILLFOCUS, _OnOccupationKillfocusFnc);
	m_wndOccupation.SetEvent(WE_SELCHANGE, _OnOccupationSelectChangeFnc);
	m_wndOccupation.SetEvent(WE_LOADDATA, _OnOccupationLoadDataFnc);
	//m_wndOccupation.SetEvent(WE_ADDNEW, _OnOccupationAddNewFnc);
	m_wndPosition.SetEvent(WE_SELENDOK, _OnPositionSelendokFnc);
	//m_wndPosition.SetEvent(WE_SETFOCUS, _OnPositionSetfocusFnc);
	//m_wndPosition.SetEvent(WE_KILLFOCUS, _OnPositionKillfocusFnc);
	m_wndPosition.SetEvent(WE_SELCHANGE, _OnPositionSelectChangeFnc);
	m_wndPosition.SetEvent(WE_LOADDATA, _OnPositionLoadDataFnc);
	//m_wndPosition.SetEvent(WE_ADDNEW, _OnPositionAddNewFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	//m_wndCardID.SetEvent(WE_CHANGE, _OnCardIDChangeFnc);
	//m_wndCardID.SetEvent(WE_SETFOCUS, _OnCardIDSetfocusFnc);
	//m_wndCardID.SetEvent(WE_KILLFOCUS, _OnCardIDKillfocusFnc);
	m_wndCardID.SetEvent(WE_CHECKVALUE, _OnCardIDCheckValueFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndStartDate.SetEvent(WE_CHANGE, _OnStartDateChangeFnc);
	//m_wndStartDate.SetEvent(WE_SETFOCUS, _OnStartDateSetfocusFnc);
	//m_wndStartDate.SetEvent(WE_KILLFOCUS, _OnStartDateKillfocusFnc);
	m_wndStartDate.SetEvent(WE_CHECKVALUE, _OnStartDateCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	m_wndDeptID.SetEvent(WE_SELENDOK, _OnDeptIDSelendokFnc);
	//m_wndDeptID.SetEvent(WE_SETFOCUS, _OnDeptIDSetfocusFnc);
	//m_wndDeptID.SetEvent(WE_KILLFOCUS, _OnDeptIDKillfocusFnc);
	m_wndDeptID.SetEvent(WE_SELCHANGE, _OnDeptIDSelectChangeFnc);
	m_wndDeptID.SetEvent(WE_LOADDATA, _OnDeptIDLoadDataFnc);
	//m_wndDeptID.SetEvent(WE_ADDNEW, _OnDeptIDAddNewFnc);
	//m_wndTechnique.SetEvent(WE_CHANGE, _OnTechniqueChangeFnc);
	//m_wndTechnique.SetEvent(WE_SETFOCUS, _OnTechniqueSetfocusFnc);
	//m_wndTechnique.SetEvent(WE_KILLFOCUS, _OnTechniqueKillfocusFnc);
	m_wndTechnique.SetEvent(WE_CHECKVALUE, _OnTechniqueCheckValueFnc);
	//m_wndCertificate.SetEvent(WE_CHANGE, _OnCertificateChangeFnc);
	//m_wndCertificate.SetEvent(WE_SETFOCUS, _OnCertificateSetfocusFnc);
	//m_wndCertificate.SetEvent(WE_KILLFOCUS, _OnCertificateKillfocusFnc);
	m_wndCertificate.SetEvent(WE_CHECKVALUE, _OnCertificateCheckValueFnc);
	//m_wndDecide.SetEvent(WE_CHANGE, _OnDecideChangeFnc);
	//m_wndDecide.SetEvent(WE_SETFOCUS, _OnDecideSetfocusFnc);
	//m_wndDecide.SetEvent(WE_KILLFOCUS, _OnDecideKillfocusFnc);
	m_wndDecide.SetEvent(WE_CHECKVALUE, _OnDecideCheckValueFnc);
	//m_wndDecideDate.SetEvent(WE_CHANGE, _OnDecideDateChangeFnc);
	//m_wndDecideDate.SetEvent(WE_SETFOCUS, _OnDecideDateSetfocusFnc);
	//m_wndDecideDate.SetEvent(WE_KILLFOCUS, _OnDecideDateKillfocusFnc);
	m_wndDecideDate.SetEvent(WE_CHECKVALUE, _OnDecideDateCheckValueFnc);
	//m_wndContent.SetEvent(WE_CHANGE, _OnContentChangeFnc);
	//m_wndContent.SetEvent(WE_SETFOCUS, _OnContentSetfocusFnc);
	//m_wndContent.SetEvent(WE_KILLFOCUS, _OnContentKillfocusFnc);
	m_wndContent.SetEvent(WE_CHECKVALUE, _OnContentCheckValueFnc);
	//m_wndProjectID.SetEvent(WE_CHANGE, _OnProjectIDChangeFnc);
	//m_wndProjectID.SetEvent(WE_SETFOCUS, _OnProjectIDSetfocusFnc);
	//m_wndProjectID.SetEvent(WE_KILLFOCUS, _OnProjectIDKillfocusFnc);
	m_wndProjectID.SetEvent(WE_CHECKVALUE, _OnProjectIDCheckValueFnc);
	//m_wndPlacesID.SetEvent(WE_CHANGE, _OnPlacesIDChangeFnc);
	//m_wndPlacesID.SetEvent(WE_SETFOCUS, _OnPlacesIDSetfocusFnc);
	//m_wndPlacesID.SetEvent(WE_KILLFOCUS, _OnPlacesIDKillfocusFnc);
	m_wndPlacesID.SetEvent(WE_CHECKVALUE, _OnPlacesIDCheckValueFnc);
	//m_wndCertificateReceive.SetEvent(WE_CHANGE, _OnCertificateReceiveChangeFnc);
	//m_wndCertificateReceive.SetEvent(WE_SETFOCUS, _OnCertificateReceiveSetfocusFnc);
	//m_wndCertificateReceive.SetEvent(WE_KILLFOCUS, _OnCertificateReceiveKillfocusFnc);
	m_wndCertificateReceive.SetEvent(WE_CHECKVALUE, _OnCertificateReceiveCheckValueFnc);
	m_wndDeptidReceive.SetEvent(WE_SELENDOK, _OnDeptidReceiveSelendokFnc);
	//m_wndDeptidReceive.SetEvent(WE_SETFOCUS, _OnDeptidReceiveSetfocusFnc);
	//m_wndDeptidReceive.SetEvent(WE_KILLFOCUS, _OnDeptidReceiveKillfocusFnc);
	m_wndDeptidReceive.SetEvent(WE_SELCHANGE, _OnDeptidReceiveSelectChangeFnc);
	m_wndDeptidReceive.SetEvent(WE_LOADDATA, _OnDeptidReceiveLoadDataFnc);
	//m_wndDeptidReceive.SetEvent(WE_ADDNEW, _OnDeptidReceiveAddNewFnc);
	m_wndResult.SetEvent(WE_SELENDOK, _OnResultSelendokFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_SELCHANGE, _OnResultSelectChangeFnc);
	m_wndResult.SetEvent(WE_LOADDATA, _OnResultLoadDataFnc);
	//m_wndResult.SetEvent(WE_ADDNEW, _OnResultAddNewFnc);
	m_wndTypeID.SetEvent(WE_SELENDOK, _OnTypeIDSelendokFnc);
	//m_wndTypeID.SetEvent(WE_SETFOCUS, _OnTypeIDSetfocusFnc);
	//m_wndTypeID.SetEvent(WE_KILLFOCUS, _OnTypeIDKillfocusFnc);
	m_wndTypeID.SetEvent(WE_SELCHANGE, _OnTypeIDSelectChangeFnc);
	m_wndTypeID.SetEvent(WE_LOADDATA, _OnTypeIDLoadDataFnc);
	//m_wndTypeID.SetEvent(WE_ADDNEW, _OnTypeIDAddNewFnc);
	//m_wndWorkUnit.SetEvent(WE_CHANGE, _OnWorkUnitChangeFnc);
	//m_wndWorkUnit.SetEvent(WE_SETFOCUS, _OnWorkUnitSetfocusFnc);
	//m_wndWorkUnit.SetEvent(WE_KILLFOCUS, _OnWorkUnitKillfocusFnc);
	m_wndWorkUnit.SetEvent(WE_CHECKVALUE, _OnWorkUnitCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	SetMode(VM_NONE);

}
void CEduStudent::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndClassID.GetDlgCtrlID(), m_nClassID);
	DDX_Text(pDX, m_wndStudentID.GetDlgCtrlID(), m_szStudentID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_TextEx(pDX, m_wndOccupation.GetDlgCtrlID(), m_szOccupationKey);
	DDX_TextEx(pDX, m_wndPosition.GetDlgCtrlID(), m_szPositionKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_Text(pDX, m_wndCardID.GetDlgCtrlID(), m_szCardID);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndStartDate.GetDlgCtrlID(), m_szStartDate);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_TextEx(pDX, m_wndDeptID.GetDlgCtrlID(), m_szDeptIDKey);
	DDX_Text(pDX, m_wndTechnique.GetDlgCtrlID(), m_szTechnique);
	DDX_Text(pDX, m_wndCertificate.GetDlgCtrlID(), m_szCertificate);
	DDX_Text(pDX, m_wndDecide.GetDlgCtrlID(), m_szDecide);
	DDX_TextEx(pDX, m_wndDecideDate.GetDlgCtrlID(), m_szDecideDate);
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_Text(pDX, m_wndProjectID.GetDlgCtrlID(), m_szProjectID);
	DDX_Text(pDX, m_wndPlacesID.GetDlgCtrlID(), m_szPlacesID);
	DDX_Text(pDX, m_wndCertificateReceive.GetDlgCtrlID(), m_szCertificateReceive);
	DDX_TextEx(pDX, m_wndDeptidReceive.GetDlgCtrlID(), m_szDeptidReceiveKey);
	DDX_TextEx(pDX, m_wndResult.GetDlgCtrlID(), m_szResultKey);
	DDX_TextEx(pDX, m_wndTypeID.GetDlgCtrlID(), m_szTypeIDKey);
	DDX_Text(pDX, m_wndWorkUnit.GetDlgCtrlID(), m_szWorkUnit);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void CEduStudent::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ClassID")] =  m_nClassID;
	m_jData[_T("StudentID")] =  m_szStudentID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("BirthDate")] =  m_szBirthDate;
	m_jData[_T("Sex")] =  m_szSexKey;
	m_jData[_T("Ethnic")] =  m_szEthnicKey;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Occupation")] =  m_szOccupationKey;
	m_jData[_T("Position")] =  m_szPositionKey;
	m_jData[_T("Rank")] =  m_szRankKey;
	m_jData[_T("Phone")] =  m_szPhone;
	m_jData[_T("CardID")] =  m_szCardID;
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("StartDate")] =  m_szStartDate;
	m_jData[_T("EndDate")] =  m_szEndDate;
	m_jData[_T("DeptID")] =  m_szDeptIDKey;
	m_jData[_T("Technique")] =  m_szTechnique;
	m_jData[_T("Certificate")] =  m_szCertificate;
	m_jData[_T("Decide")] =  m_szDecide;
	m_jData[_T("DecideDate")] =  m_szDecideDate;
	m_jData[_T("Content")] =  m_szContent;
	m_jData[_T("ProjectID")] =  m_szProjectID;
	m_jData[_T("PlacesID")] =  m_szPlacesID;
	m_jData[_T("CertificateReceive")] =  m_szCertificateReceive;
	m_jData[_T("DeptidReceive")] =  m_szDeptidReceiveKey;
	m_jData[_T("Result")] =  m_szResultKey;
	m_jData[_T("TypeID")] =  m_szTypeIDKey;
	m_jData[_T("WorkUnit")] =  m_szWorkUnit;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("Status")] =  m_szStatusKey;
	}
	else
	{
			
	m_jData[_T("ClassID")].GetValue(m_nClassID);
	m_jData[_T("StudentID")].GetValue(m_szStudentID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("BirthDate")].GetValue(m_szBirthDate);
	m_jData[_T("Sex")].GetValue(m_szSexKey);
	m_jData[_T("Ethnic")].GetValue(m_szEthnicKey);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Occupation")].GetValue(m_szOccupationKey);
	m_jData[_T("Position")].GetValue(m_szPositionKey);
	m_jData[_T("Rank")].GetValue(m_szRankKey);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	m_jData[_T("CardID")].GetValue(m_szCardID);
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("StartDate")].GetValue(m_szStartDate);
	m_jData[_T("EndDate")].GetValue(m_szEndDate);
	m_jData[_T("DeptID")].GetValue(m_szDeptIDKey);
	m_jData[_T("Technique")].GetValue(m_szTechnique);
	m_jData[_T("Certificate")].GetValue(m_szCertificate);
	m_jData[_T("Decide")].GetValue(m_szDecide);
	m_jData[_T("DecideDate")].GetValue(m_szDecideDate);
	m_jData[_T("Content")].GetValue(m_szContent);
	m_jData[_T("ProjectID")].GetValue(m_szProjectID);
	m_jData[_T("PlacesID")].GetValue(m_szPlacesID);
	m_jData[_T("CertificateReceive")].GetValue(m_szCertificateReceive);
	m_jData[_T("DeptidReceive")].GetValue(m_szDeptidReceiveKey);
	m_jData[_T("Result")].GetValue(m_szResultKey);
	m_jData[_T("TypeID")].GetValue(m_szTypeIDKey);
	m_jData[_T("WorkUnit")].GetValue(m_szWorkUnit);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	}

}
void CEduStudent::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEduStudent::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CEduStudent::SetDefaultValues(){

	m_nClassID=0;
	m_szStudentID.Empty();
	m_szName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szEthnicKey.Empty();
	m_szAddress.Empty();
	m_szOccupationKey.Empty();
	m_szPositionKey.Empty();
	m_szRankKey.Empty();
	m_szPhone.Empty();
	m_szCardID.Empty();
	m_szDate.Empty();
	m_szStartDate.Empty();
	m_szEndDate.Empty();
	m_szDeptIDKey.Empty();
	m_szTechnique.Empty();
	m_szCertificate.Empty();
	m_szDecide.Empty();
	m_szDecideDate.Empty();
	m_szContent.Empty();
	m_szProjectID.Empty();
	m_szPlacesID.Empty();
	m_szCertificateReceive.Empty();
	m_szDeptidReceiveKey.Empty();
	m_szResultKey.Empty();
	m_szTypeIDKey.Empty();
	m_szWorkUnit.Empty();
	m_szNote.Empty();
	m_szStatusKey.Empty();

}
int CEduStudent::SetMode(int nMode){
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
/*void CEduStudent::OnClassIDChange(){
	
} */
/*void CEduStudent::OnClassIDSetfocus(){
	
} */
/*void CEduStudent::OnClassIDKillfocus(){
	
} */
int CEduStudent::OnClassIDCheckValue(){
	return 0;
} 
/*void CEduStudent::OnStudentIDChange(){
	
} */
/*void CEduStudent::OnStudentIDSetfocus(){
	
} */
/*void CEduStudent::OnStudentIDKillfocus(){
	
} */
int CEduStudent::OnStudentIDCheckValue(){
	return 0;
} 
/*void CEduStudent::OnNameChange(){
	
} */
/*void CEduStudent::OnNameSetfocus(){
	
} */
/*void CEduStudent::OnNameKillfocus(){
	
} */
int CEduStudent::OnNameCheckValue(){
	return 0;
} 
/*void CEduStudent::OnBirthDateChange(){
	
} */
/*void CEduStudent::OnBirthDateSetfocus(){
	
} */
/*void CEduStudent::OnBirthDateKillfocus(){
	
} */
int CEduStudent::OnBirthDateCheckValue(){
	return 0;
} 
void CEduStudent::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnSexSelendok(){
	 
}
/*void CEduStudent::OnSexSetfocus(){
	
}*/
/*void CEduStudent::OnSexKillfocus(){
	
}*/
long CEduStudent::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSexKey
};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudent::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudent::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnEthnicSelendok(){
	 
}
/*void CEduStudent::OnEthnicSetfocus(){
	
}*/
/*void CEduStudent::OnEthnicKillfocus(){
	
}*/
long CEduStudent::OnEthnicLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEthnic.IsSearchKey() && !m_szEthnicKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szEthnicKey
};
	m_wndEthnic.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEthnic.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudent::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduStudent::OnAddressChange(){
	
} */
/*void CEduStudent::OnAddressSetfocus(){
	
} */
/*void CEduStudent::OnAddressKillfocus(){
	
} */
int CEduStudent::OnAddressCheckValue(){
	return 0;
} 
void CEduStudent::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnOccupationSelendok(){
	 
}
/*void CEduStudent::OnOccupationSetfocus(){
	
}*/
/*void CEduStudent::OnOccupationKillfocus(){
	
}*/
long CEduStudent::OnOccupationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOccupation.IsSearchKey() && !m_szOccupationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOccupationKey
};
	m_wndOccupation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOccupation.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudent::OnOccupationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudent::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnPositionSelendok(){
	 
}
/*void CEduStudent::OnPositionSetfocus(){
	
}*/
/*void CEduStudent::OnPositionKillfocus(){
	
}*/
long CEduStudent::OnPositionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPosition.IsSearchKey() && !m_szPositionKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPositionKey
};
	m_wndPosition.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPosition.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudent::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudent::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnRankSelendok(){
	 
}
/*void CEduStudent::OnRankSetfocus(){
	
}*/
/*void CEduStudent::OnRankKillfocus(){
	
}*/
long CEduStudent::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRankKey
};
	m_wndRank.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudent::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduStudent::OnPhoneChange(){
	
} */
/*void CEduStudent::OnPhoneSetfocus(){
	
} */
/*void CEduStudent::OnPhoneKillfocus(){
	
} */
int CEduStudent::OnPhoneCheckValue(){
	return 0;
} 
/*void CEduStudent::OnCardIDChange(){
	
} */
/*void CEduStudent::OnCardIDSetfocus(){
	
} */
/*void CEduStudent::OnCardIDKillfocus(){
	
} */
int CEduStudent::OnCardIDCheckValue(){
	return 0;
} 
/*void CEduStudent::OnDateChange(){
	
} */
/*void CEduStudent::OnDateSetfocus(){
	
} */
/*void CEduStudent::OnDateKillfocus(){
	
} */
int CEduStudent::OnDateCheckValue(){
	return 0;
} 
/*void CEduStudent::OnStartDateChange(){
	
} */
/*void CEduStudent::OnStartDateSetfocus(){
	
} */
/*void CEduStudent::OnStartDateKillfocus(){
	
} */
int CEduStudent::OnStartDateCheckValue(){
	return 0;
} 
/*void CEduStudent::OnEndDateChange(){
	
} */
/*void CEduStudent::OnEndDateSetfocus(){
	
} */
/*void CEduStudent::OnEndDateKillfocus(){
	
} */
int CEduStudent::OnEndDateCheckValue(){
	return 0;
} 
void CEduStudent::OnDeptIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnDeptIDSelendok(){
	 
}
/*void CEduStudent::OnDeptIDSetfocus(){
	
}*/
/*void CEduStudent::OnDeptIDKillfocus(){
	
}*/
long CEduStudent::OnDeptIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeptID.IsSearchKey() && !m_szDeptIDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptIDKey
};
	m_wndDeptID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptID.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudent::OnDeptIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduStudent::OnTechniqueChange(){
	
} */
/*void CEduStudent::OnTechniqueSetfocus(){
	
} */
/*void CEduStudent::OnTechniqueKillfocus(){
	
} */
int CEduStudent::OnTechniqueCheckValue(){
	return 0;
} 
/*void CEduStudent::OnCertificateChange(){
	
} */
/*void CEduStudent::OnCertificateSetfocus(){
	
} */
/*void CEduStudent::OnCertificateKillfocus(){
	
} */
int CEduStudent::OnCertificateCheckValue(){
	return 0;
} 
/*void CEduStudent::OnDecideChange(){
	
} */
/*void CEduStudent::OnDecideSetfocus(){
	
} */
/*void CEduStudent::OnDecideKillfocus(){
	
} */
int CEduStudent::OnDecideCheckValue(){
	return 0;
} 
/*void CEduStudent::OnDecideDateChange(){
	
} */
/*void CEduStudent::OnDecideDateSetfocus(){
	
} */
/*void CEduStudent::OnDecideDateKillfocus(){
	
} */
int CEduStudent::OnDecideDateCheckValue(){
	return 0;
} 
/*void CEduStudent::OnContentChange(){
	
} */
/*void CEduStudent::OnContentSetfocus(){
	
} */
/*void CEduStudent::OnContentKillfocus(){
	
} */
int CEduStudent::OnContentCheckValue(){
	return 0;
} 
/*void CEduStudent::OnProjectIDChange(){
	
} */
/*void CEduStudent::OnProjectIDSetfocus(){
	
} */
/*void CEduStudent::OnProjectIDKillfocus(){
	
} */
int CEduStudent::OnProjectIDCheckValue(){
	return 0;
} 
/*void CEduStudent::OnPlacesIDChange(){
	
} */
/*void CEduStudent::OnPlacesIDSetfocus(){
	
} */
/*void CEduStudent::OnPlacesIDKillfocus(){
	
} */
int CEduStudent::OnPlacesIDCheckValue(){
	return 0;
} 
/*void CEduStudent::OnCertificateReceiveChange(){
	
} */
/*void CEduStudent::OnCertificateReceiveSetfocus(){
	
} */
/*void CEduStudent::OnCertificateReceiveKillfocus(){
	
} */
int CEduStudent::OnCertificateReceiveCheckValue(){
	return 0;
} 
void CEduStudent::OnDeptidReceiveSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnDeptidReceiveSelendok(){
	 
}
/*void CEduStudent::OnDeptidReceiveSetfocus(){
	
}*/
/*void CEduStudent::OnDeptidReceiveKillfocus(){
	
}*/
long CEduStudent::OnDeptidReceiveLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDeptidReceive.IsSearchKey() && !m_szDeptidReceiveKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptidReceiveKey
};
	m_wndDeptidReceive.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptidReceive.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudent::OnDeptidReceiveAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudent::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnResultSelendok(){
	 
}
/*void CEduStudent::OnResultSetfocus(){
	
}*/
/*void CEduStudent::OnResultKillfocus(){
	
}*/
long CEduStudent::OnResultLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndResult.IsSearchKey() && !m_szResultKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szResultKey
};
	m_wndResult.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndResult.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudent::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudent::OnTypeIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnTypeIDSelendok(){
	 
}
/*void CEduStudent::OnTypeIDSetfocus(){
	
}*/
/*void CEduStudent::OnTypeIDKillfocus(){
	
}*/
long CEduStudent::OnTypeIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTypeID.IsSearchKey() && !m_szTypeIDKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeIDKey
};
	m_wndTypeID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeID.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudent::OnTypeIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduStudent::OnWorkUnitChange(){
	
} */
/*void CEduStudent::OnWorkUnitSetfocus(){
	
} */
/*void CEduStudent::OnWorkUnitKillfocus(){
	
} */
int CEduStudent::OnWorkUnitCheckValue(){
	return 0;
} 
/*void CEduStudent::OnNoteChange(){
	
} */
/*void CEduStudent::OnNoteSetfocus(){
	
} */
/*void CEduStudent::OnNoteKillfocus(){
	
} */
int CEduStudent::OnNoteCheckValue(){
	return 0;
} 
void CEduStudent::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnStatusSelendok(){
	 
}
/*void CEduStudent::OnStatusSetfocus(){
	
}*/
/*void CEduStudent::OnStatusKillfocus(){
	
}*/
long CEduStudent::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudent::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudent::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudent::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduStudent::OnAddEduStudent(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduStudent::OnEditEduStudent(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduStudent::OnDeleteEduStudent(){
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
 		OnCancelEduStudent();
 	}
	return 0;
}
int CEduStudent::OnSaveEduStudent(){
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
 		//OnEduStudentListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduStudent::OnCancelEduStudent(){
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
int CEduStudent::OnEduStudentListLoadData(){
	return 0;
}
