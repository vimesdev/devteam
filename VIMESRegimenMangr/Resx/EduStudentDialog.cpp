#include "EduStudentDialog.h"
#include "MainFrm.h"
/*static void _OnClassIDChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnClassIDChange();
} */
/*static void _OnClassIDSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnClassIDSetfocus();} */ 
/*static void _OnClassIDKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnClassIDKillfocus();
} */
static int _OnClassIDCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnClassIDCheckValue();
} 
/*static void _OnStudentIDChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnStudentIDChange();
} */
/*static void _OnStudentIDSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnStudentIDSetfocus();} */ 
/*static void _OnStudentIDKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnStudentIDKillfocus();
} */
static int _OnStudentIDCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnStudentIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentDialog* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnEthnicAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnAddressCheckValue();
} 
static void _OnOccupationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentDialog* )pWnd)->OnOccupationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOccupationSelendokFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnOccupationSelendok();
}
/*static void _OnOccupationSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnOccupationKillfocus();
}*/
/*static void _OnOccupationKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnOccupationKillfocus();
}*/
static long _OnOccupationLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnOccupationLoadData();
}
/*static void _OnOccupationAddNewFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnOccupationAddNew();
}*/
static void _OnPositionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentDialog* )pWnd)->OnPositionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPositionSelendokFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnPositionSelendok();
}
/*static void _OnPositionSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnPositionKillfocus();
}*/
/*static void _OnPositionKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnPositionKillfocus();
}*/
static long _OnPositionLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnPositionLoadData();
}
/*static void _OnPositionAddNewFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnPositionAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentDialog* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnRankAddNew();
}*/
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnPhoneCheckValue();
} 
/*static void _OnCardIDChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnCardIDChange();
} */
/*static void _OnCardIDSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnCardIDSetfocus();} */ 
/*static void _OnCardIDKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnCardIDKillfocus();
} */
static int _OnCardIDCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnCardIDCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnStartDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnEndDateCheckValue();
} 
static void _OnDeptIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentDialog* )pWnd)->OnDeptIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptIDSelendokFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDeptIDSelendok();
}
/*static void _OnDeptIDSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDeptIDKillfocus();
}*/
/*static void _OnDeptIDKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDeptIDKillfocus();
}*/
static long _OnDeptIDLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnDeptIDLoadData();
}
/*static void _OnDeptIDAddNewFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDeptIDAddNew();
}*/
/*static void _OnTechniqueChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnTechniqueChange();
} */
/*static void _OnTechniqueSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnTechniqueSetfocus();} */ 
/*static void _OnTechniqueKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnTechniqueKillfocus();
} */
static int _OnTechniqueCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnTechniqueCheckValue();
} 
/*static void _OnCertificateChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnCertificateChange();
} */
/*static void _OnCertificateSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnCertificateSetfocus();} */ 
/*static void _OnCertificateKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnCertificateKillfocus();
} */
static int _OnCertificateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnCertificateCheckValue();
} 
/*static void _OnDecideChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDecideChange();
} */
/*static void _OnDecideSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDecideSetfocus();} */ 
/*static void _OnDecideKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDecideKillfocus();
} */
static int _OnDecideCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnDecideCheckValue();
} 
/*static void _OnDecideDateChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDecideDateChange();
} */
/*static void _OnDecideDateSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDecideDateSetfocus();} */ 
/*static void _OnDecideDateKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDecideDateKillfocus();
} */
static int _OnDecideDateCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnDecideDateCheckValue();
} 
/*static void _OnContentChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnContentChange();
} */
/*static void _OnContentSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnContentSetfocus();} */ 
/*static void _OnContentKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnContentKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnContentCheckValue();
} 
/*static void _OnProjectIDChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnProjectIDChange();
} */
/*static void _OnProjectIDSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnProjectIDSetfocus();} */ 
/*static void _OnProjectIDKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnProjectIDKillfocus();
} */
static int _OnProjectIDCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnProjectIDCheckValue();
} 
/*static void _OnPlacesIDChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnPlacesIDChange();
} */
/*static void _OnPlacesIDSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnPlacesIDSetfocus();} */ 
/*static void _OnPlacesIDKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnPlacesIDKillfocus();
} */
static int _OnPlacesIDCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnPlacesIDCheckValue();
} 
/*static void _OnCertificateReceiveChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnCertificateReceiveChange();
} */
/*static void _OnCertificateReceiveSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnCertificateReceiveSetfocus();} */ 
/*static void _OnCertificateReceiveKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnCertificateReceiveKillfocus();
} */
static int _OnCertificateReceiveCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnCertificateReceiveCheckValue();
} 
static void _OnDeptidReceiveSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentDialog* )pWnd)->OnDeptidReceiveSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptidReceiveSelendokFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDeptidReceiveSelendok();
}
/*static void _OnDeptidReceiveSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDeptidReceiveKillfocus();
}*/
/*static void _OnDeptidReceiveKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDeptidReceiveKillfocus();
}*/
static long _OnDeptidReceiveLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnDeptidReceiveLoadData();
}
/*static void _OnDeptidReceiveAddNewFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnDeptidReceiveAddNew();
}*/
static void _OnResultSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentDialog* )pWnd)->OnResultSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnResultSelendokFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnResultSelendok();
}
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnResultKillfocus();
}*/
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnResultKillfocus();
}*/
static long _OnResultLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnResultLoadData();
}
/*static void _OnResultAddNewFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnResultAddNew();
}*/
static void _OnTypeIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentDialog* )pWnd)->OnTypeIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeIDSelendokFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnTypeIDSelendok();
}
/*static void _OnTypeIDSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnTypeIDKillfocus();
}*/
/*static void _OnTypeIDKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnTypeIDKillfocus();
}*/
static long _OnTypeIDLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnTypeIDLoadData();
}
/*static void _OnTypeIDAddNewFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnTypeIDAddNew();
}*/
/*static void _OnWorkUnitChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnWorkUnitChange();
} */
/*static void _OnWorkUnitSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnWorkUnitSetfocus();} */ 
/*static void _OnWorkUnitKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnWorkUnitKillfocus();
} */
static int _OnWorkUnitCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnWorkUnitCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEduStudentDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CEduStudentDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CEduStudentDialog *)pWnd)->OnStatusAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CEduStudentDialog *pVw = (CEduStudentDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CEduStudentDialog *pVw = (CEduStudentDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CEduStudentDialog *pVw = (CEduStudentDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CEduStudentDialog *pVw = (CEduStudentDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CEduStudentDialog *pVw = (CEduStudentDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEduStudentDialog *pVw = (CEduStudentDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddEduStudentDialogFnc(CWnd *pWnd){
	 return ((CEduStudentDialog*)pWnd)->OnAddEduStudentDialog();
} 
static int _OnEditEduStudentDialogFnc(CWnd *pWnd){
	 return ((CEduStudentDialog*)pWnd)->OnEditEduStudentDialog();
} 
static int _OnDeleteEduStudentDialogFnc(CWnd *pWnd){
	 return ((CEduStudentDialog*)pWnd)->OnDeleteEduStudentDialog();
} 
static int _OnSaveEduStudentDialogFnc(CWnd *pWnd){
	 return ((CEduStudentDialog*)pWnd)->OnSaveEduStudentDialog();
} 
static int _OnCancelEduStudentDialogFnc(CWnd *pWnd){
	 return ((CEduStudentDialog*)pWnd)->OnCancelEduStudentDialog();
} 
CEduStudentDialog::CEduStudentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 673;
	SetDefaultValues();
}
CEduStudentDialog::~CEduStudentDialog(){
}
void CEduStudentDialog::OnCreateComponents(){
	m_wndGroupInformation.Create(this, _T("Information"), 5, 5, 670, 450);
	m_wndPicture.Create(this, _T("Picture"), 450, 30, 550, 145);
	m_wndClassIDLabel.Create(this, _T("Class ID"), 10, 30, 110, 55);
	m_wndClassID.Create(this,115, 30, 215, 55); 
	m_wndStudentIDLabel.Create(this, _T("Student ID"), 220, 30, 320, 55);
	m_wndStudentID.Create(this,325, 30, 445, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 110, 85);
	m_wndName.Create(this,115, 60, 445, 85); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 10, 90, 110, 115);
	m_wndBirthDate.Create(this,115, 90, 225, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 230, 90, 330, 115);
	m_wndSex.Create(this,335, 90, 445, 115); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 10, 150, 110, 175);
	m_wndEthnic.Create(this,115, 150, 225, 175); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 110, 145);
	m_wndAddress.Create(this,115, 120, 445, 145); 
	m_wndOccupationLabel.Create(this, _T("Occupation"), 230, 150, 330, 175);
	m_wndOccupation.Create(this,335, 150, 445, 175); 
	m_wndPositionLabel.Create(this, _T("Position"), 450, 150, 550, 175);
	m_wndPosition.Create(this,555, 150, 665, 175); 
	m_wndRankLabel.Create(this, _T("Rank"), 10, 180, 110, 205);
	m_wndRank.Create(this,115, 180, 225, 205); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 230, 180, 330, 205);
	m_wndPhone.Create(this,335, 180, 445, 205); 
	m_wndCardIDLabel.Create(this, _T("Card ID"), 450, 180, 550, 205);
	m_wndCardID.Create(this,555, 180, 665, 205); 
	m_wndDateLabel.Create(this, _T("Date"), 10, 210, 110, 235);
	m_wndDate.Create(this,115, 210, 225, 235); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 230, 210, 330, 235);
	m_wndStartDate.Create(this,335, 210, 445, 235); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 450, 210, 550, 235);
	m_wndEndDate.Create(this,555, 210, 665, 235); 
	m_wndDeptIDLabel.Create(this, _T("Dept ID"), 10, 240, 110, 265);
	m_wndDeptID.Create(this,115, 240, 225, 265); 
	m_wndTechniqueLabel.Create(this, _T("Technique"), 230, 240, 330, 265);
	m_wndTechnique.Create(this,335, 240, 445, 265); 
	m_wndCertificateLabel.Create(this, _T("Certificate"), 450, 240, 550, 265);
	m_wndCertificate.Create(this,555, 240, 665, 265); 
	m_wndDecideLabel.Create(this, _T("Decide"), 10, 270, 110, 295);
	m_wndDecide.Create(this,115, 270, 225, 295); 
	m_wndDecideDateLabel.Create(this, _T("Decide date"), 230, 270, 330, 295);
	m_wndDecideDate.Create(this,335, 270, 445, 295); 
	m_wndContentLabel.Create(this, _T("Content"), 10, 300, 110, 325);
	m_wndContent.Create(this,115, 300, 665, 325); 
	m_wndProjectIDLabel.Create(this, _T("Project ID"), 10, 330, 110, 355);
	m_wndProjectID.Create(this,115, 330, 225, 355); 
	m_wndPlacesIDLabel.Create(this, _T("Places ID"), 230, 330, 330, 355);
	m_wndPlacesID.Create(this,335, 330, 445, 355); 
	m_wndCertificateReceiveLabel.Create(this, _T("Certificate receive"), 450, 330, 550, 355);
	m_wndCertificateReceive.Create(this,555, 330, 665, 355); 
	m_wndDeptidReceiveLabel.Create(this, _T("Deptid receive"), 10, 360, 110, 385);
	m_wndDeptidReceive.Create(this,115, 360, 225, 385); 
	m_wndResultLabel.Create(this, _T("Result"), 230, 360, 330, 385);
	m_wndResult.Create(this,335, 360, 445, 385); 
	m_wndTypeIDLabel.Create(this, _T("Type ID"), 450, 360, 550, 385);
	m_wndTypeID.Create(this,555, 360, 665, 385); 
	m_wndWorkUnitLabel.Create(this, _T("Work Unit"), 10, 390, 110, 415);
	m_wndWorkUnit.Create(this,115, 390, 445, 415); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 420, 110, 445);
	m_wndNote.Create(this,115, 420, 665, 445); 
	m_wndStatusLabel.Create(this, _T("Status"), 450, 390, 550, 415);
	m_wndStatus.Create(this,555, 390, 665, 415); 
	m_wndAdd.Create(this, _T("&Add"), 105, 455, 195, 480);
	m_wndSave.Create(this, _T("&Save"), 200, 455, 290, 480);
	m_wndEdit.Create(this, _T("&Edit"), 295, 455, 385, 480);
	m_wndDelete.Create(this, _T("&Delete"), 390, 455, 480, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 485, 455, 575, 480);
	m_wndPrint.Create(this, _T("&Print"), 580, 455, 670, 480);

}
void CEduStudentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndClassID.SetLimitText(4);
	m_wndClassID.SetCheckValue(true);
	m_wndStudentID.SetLimitText(15);
	m_wndStudentID.SetCheckValue(true);
	m_wndName.SetLimitText(15);
	m_wndName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(3);
	m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(4);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(true);
	m_wndOccupation.SetCheckValue(true);
	m_wndOccupation.LimitText(4);
	m_wndPosition.SetCheckValue(true);
	m_wndPosition.LimitText(4);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(4);
	m_wndPhone.SetLimitText(12);
	m_wndPhone.SetCheckValue(true);
	m_wndCardID.SetLimitText(25);
	m_wndCardID.SetCheckValue(true);
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndStartDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndStartDate.SetCheckValue(true);
	m_wndEndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndEndDate.SetCheckValue(true);
	m_wndDeptID.SetCheckValue(true);
	m_wndDeptID.LimitText(7);
	m_wndTechnique.SetLimitText(1);
	m_wndTechnique.SetCheckValue(true);
	m_wndCertificate.SetLimitText(15);
	m_wndCertificate.SetCheckValue(true);
	m_wndDecide.SetLimitText(15);
	m_wndDecide.SetCheckValue(true);
	m_wndDecideDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDecideDate.SetCheckValue(true);
	m_wndContent.SetLimitText(115);
	m_wndContent.SetCheckValue(true);
	m_wndProjectID.SetLimitText(5);
	m_wndProjectID.SetCheckValue(true);
	m_wndPlacesID.SetLimitText(5);
	m_wndPlacesID.SetCheckValue(true);
	m_wndCertificateReceive.SetLimitText(115);
	m_wndCertificateReceive.SetCheckValue(true);
	m_wndDeptidReceive.SetCheckValue(true);
	m_wndDeptidReceive.LimitText(7);
	m_wndResult.SetCheckValue(true);
	m_wndResult.LimitText(1);
	m_wndTypeID.SetCheckValue(true);
	m_wndTypeID.LimitText(2);
	m_wndWorkUnit.SetLimitText(2);
	m_wndWorkUnit.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndOccupation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOccupation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPosition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPosition.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDeptID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDeptID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDeptidReceive.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDeptidReceive.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndResult.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndResult.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTypeID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTypeID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_edu_studentTbl.SetTableName(_T("edu_student"));
	m_edu_studentTbl.AddField(_T("es_id"), dfLong); 
	m_edu_studentTbl.AddField(_T("es_createdby"), dfText, 15); 
	m_edu_studentTbl.AddField(_T("es_createddate"), dfDateTime); 
	m_edu_studentTbl.AddField(_T("es_updatedby"), dfText, 15); 
	m_edu_studentTbl.AddField(_T("es_updateddate"), dfDateTime); 
	m_edu_studentTbl.AddField(_T("es_class_id"), dfLong); 
	m_edu_studentTbl.AddField(_T("es_student_id"), dfText, 15); 
	m_edu_studentTbl.AddField(_T("es_surname"), dfText, 15); 
	m_edu_studentTbl.AddField(_T("es_midname"), dfText, 45); 
	m_edu_studentTbl.AddField(_T("es_firstname"), dfText, 15); 
	m_edu_studentTbl.AddField(_T("es_birthdate"), dfDate); 
	m_edu_studentTbl.AddField(_T("es_sex"), dfText, 3); 
	m_edu_studentTbl.AddField(_T("es_ethnic"), dfLong); 
	m_edu_studentTbl.AddField(_T("es_address"), dfText, 254); 
	m_edu_studentTbl.AddField(_T("es_occupation"), dfLong); 
	m_edu_studentTbl.AddField(_T("es_position"), dfLong); 
	m_edu_studentTbl.AddField(_T("es_rank"), dfLong); 
	m_edu_studentTbl.AddField(_T("es_phone"), dfText, 12); 
	m_edu_studentTbl.AddField(_T("es_cardid"), dfText, 25); 
	m_edu_studentTbl.AddField(_T("es_date"), dfDate); 
	m_edu_studentTbl.AddField(_T("es_startdate"), dfDate); 
	m_edu_studentTbl.AddField(_T("es_enddate"), dfDate); 
	m_edu_studentTbl.AddField(_T("es_deptid"), dfText, 7); 
	m_edu_studentTbl.AddField(_T("es_technique"), dfText, 1); 
	m_edu_studentTbl.AddField(_T("es_certificate"), dfText, 15); 
	m_edu_studentTbl.AddField(_T("es_decide"), dfText, 15); 
	m_edu_studentTbl.AddField(_T("es_decidedate"), dfDate); 
	m_edu_studentTbl.AddField(_T("es_content"), dfText, 115); 
	m_edu_studentTbl.AddField(_T("es_projectid"), dfText, 5); 
	m_edu_studentTbl.AddField(_T("es_places_id"), dfText, 5); 
	m_edu_studentTbl.AddField(_T("es_certificate_receive"), dfText, 115); 
	m_edu_studentTbl.AddField(_T("es_deptid_receive"), dfText, 7); 
	m_edu_studentTbl.AddField(_T("es_result"), dfText, 1); 
	m_edu_studentTbl.AddField(_T("es_typeid"), dfText, 2); 
	m_edu_studentTbl.AddField(_T("es_workunit"), dfText, 2); 
	m_edu_studentTbl.AddField(_T("es_note"), dfText, 254); 
	m_edu_studentTbl.AddField(_T("es_status"), dfText, 1); 

}
void CEduStudentDialog::OnSetWindowEvents(){
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
void CEduStudentDialog::OnDoDataExchange(CDataExchange* pDX){
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
void CEduStudentDialog::UpdateJson(BOOL bSave){
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
void CEduStudentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("es_class_id"), m_nClassID);
	rs.GetValue(_T("es_student_id"), m_szStudentID);
	rs.GetValue(_T("es_surname"), m_szName);
	rs.GetValue(_T("es_birthdate"), m_szBirthDate);
	rs.GetValue(_T("es_sex"), m_szSexKey);
	rs.GetValue(_T("es_ethnic"), m_szEthnicKey);
	rs.GetValue(_T("es_address"), m_szAddress);
	rs.GetValue(_T("es_occupation"), m_szOccupationKey);
	rs.GetValue(_T("es_position"), m_szPositionKey);
	rs.GetValue(_T("es_rank"), m_szRankKey);
	rs.GetValue(_T("es_phone"), m_szPhone);
	rs.GetValue(_T("es_cardid"), m_szCardID);
	rs.GetValue(_T("es_date"), m_szDate);
	rs.GetValue(_T("es_startdate"), m_szStartDate);
	rs.GetValue(_T("es_enddate"), m_szEndDate);
	rs.GetValue(_T("es_deptid"), m_szDeptIDKey);
	rs.GetValue(_T("es_technique"), m_szTechnique);
	rs.GetValue(_T("es_certificate"), m_szCertificate);
	rs.GetValue(_T("es_decide"), m_szDecide);
	rs.GetValue(_T("es_decidedate"), m_szDecideDate);
	rs.GetValue(_T("es_content"), m_szContent);
	rs.GetValue(_T("es_projectid"), m_szProjectID);
	rs.GetValue(_T("es_places_id"), m_szPlacesID);
	rs.GetValue(_T("es_certificate_receive"), m_szCertificateReceive);
	rs.GetValue(_T("es_deptid_receive"), m_szDeptidReceiveKey);
	rs.GetValue(_T("es_result"), m_szResultKey);
	rs.GetValue(_T("es_typeid"), m_szTypeIDKey);
	rs.GetValue(_T("es_workunit"), m_szWorkUnit);
	rs.GetValue(_T("es_note"), m_szNote);
	rs.GetValue(_T("es_status"), m_szStatusKey);

}
void CEduStudentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_studentTbl.SetValue(_T("es_createdby"), pMF->GetCurrentUser());
	m_edu_studentTbl.SetValue(_T("es_createddate"), pMF->GetSysDateTime());
	m_edu_studentTbl.SetValue(_T("es_updatedby"), pMF->GetCurrentUser());
	m_edu_studentTbl.SetValue(_T("es_updateddate"), pMF->GetSysDateTime());
	m_edu_studentTbl.SetValue(_T("es_class_id"), m_nClassID);
	m_edu_studentTbl.SetValue(_T("es_student_id"), m_szStudentID);
	m_edu_studentTbl.SetValue(_T("es_surname"), m_szName);
	m_edu_studentTbl.SetValue(_T("es_birthdate"), m_szBirthDate);
	m_edu_studentTbl.SetValue(_T("es_sex"), m_szSexKey);
	m_edu_studentTbl.SetValue(_T("es_ethnic"), m_szEthnicKey);
	m_edu_studentTbl.SetValue(_T("es_address"), m_szAddress);
	m_edu_studentTbl.SetValue(_T("es_occupation"), m_szOccupationKey);
	m_edu_studentTbl.SetValue(_T("es_position"), m_szPositionKey);
	m_edu_studentTbl.SetValue(_T("es_rank"), m_szRankKey);
	m_edu_studentTbl.SetValue(_T("es_phone"), m_szPhone);
	m_edu_studentTbl.SetValue(_T("es_cardid"), m_szCardID);
	m_edu_studentTbl.SetValue(_T("es_date"), m_szDate);
	m_edu_studentTbl.SetValue(_T("es_startdate"), m_szStartDate);
	m_edu_studentTbl.SetValue(_T("es_enddate"), m_szEndDate);
	m_edu_studentTbl.SetValue(_T("es_deptid"), m_szDeptIDKey);
	m_edu_studentTbl.SetValue(_T("es_technique"), m_szTechnique);
	m_edu_studentTbl.SetValue(_T("es_certificate"), m_szCertificate);
	m_edu_studentTbl.SetValue(_T("es_decide"), m_szDecide);
	m_edu_studentTbl.SetValue(_T("es_decidedate"), m_szDecideDate);
	m_edu_studentTbl.SetValue(_T("es_content"), m_szContent);
	m_edu_studentTbl.SetValue(_T("es_projectid"), m_szProjectID);
	m_edu_studentTbl.SetValue(_T("es_places_id"), m_szPlacesID);
	m_edu_studentTbl.SetValue(_T("es_certificate_receive"), m_szCertificateReceive);
	m_edu_studentTbl.SetValue(_T("es_deptid_receive"), m_szDeptidReceiveKey);
	m_edu_studentTbl.SetValue(_T("es_result"), m_szResultKey);
	m_edu_studentTbl.SetValue(_T("es_typeid"), m_szTypeIDKey);
	m_edu_studentTbl.SetValue(_T("es_workunit"), m_szWorkUnit);
	m_edu_studentTbl.SetValue(_T("es_note"), m_szNote);
	m_edu_studentTbl.SetValue(_T("es_status"), m_szStatusKey);

}
void CEduStudentDialog::SetDefaultValues(){

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
int CEduStudentDialog::SetMode(int nMode){
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
/*void CEduStudentDialog::OnClassIDChange(){
	
} */
/*void CEduStudentDialog::OnClassIDSetfocus(){
	
} */
/*void CEduStudentDialog::OnClassIDKillfocus(){
	
} */
int CEduStudentDialog::OnClassIDCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnStudentIDChange(){
	
} */
/*void CEduStudentDialog::OnStudentIDSetfocus(){
	
} */
/*void CEduStudentDialog::OnStudentIDKillfocus(){
	
} */
int CEduStudentDialog::OnStudentIDCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnNameChange(){
	
} */
/*void CEduStudentDialog::OnNameSetfocus(){
	
} */
/*void CEduStudentDialog::OnNameKillfocus(){
	
} */
int CEduStudentDialog::OnNameCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnBirthDateChange(){
	
} */
/*void CEduStudentDialog::OnBirthDateSetfocus(){
	
} */
/*void CEduStudentDialog::OnBirthDateKillfocus(){
	
} */
int CEduStudentDialog::OnBirthDateCheckValue(){
	return 0;
} 
void CEduStudentDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnSexSelendok(){
	 
}
/*void CEduStudentDialog::OnSexSetfocus(){
	
}*/
/*void CEduStudentDialog::OnSexKillfocus(){
	
}*/
long CEduStudentDialog::OnSexLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudentDialog::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnEthnicSelendok(){
	 
}
/*void CEduStudentDialog::OnEthnicSetfocus(){
	
}*/
/*void CEduStudentDialog::OnEthnicKillfocus(){
	
}*/
long CEduStudentDialog::OnEthnicLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentDialog::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduStudentDialog::OnAddressChange(){
	
} */
/*void CEduStudentDialog::OnAddressSetfocus(){
	
} */
/*void CEduStudentDialog::OnAddressKillfocus(){
	
} */
int CEduStudentDialog::OnAddressCheckValue(){
	return 0;
} 
void CEduStudentDialog::OnOccupationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnOccupationSelendok(){
	 
}
/*void CEduStudentDialog::OnOccupationSetfocus(){
	
}*/
/*void CEduStudentDialog::OnOccupationKillfocus(){
	
}*/
long CEduStudentDialog::OnOccupationLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentDialog::OnOccupationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudentDialog::OnPositionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnPositionSelendok(){
	 
}
/*void CEduStudentDialog::OnPositionSetfocus(){
	
}*/
/*void CEduStudentDialog::OnPositionKillfocus(){
	
}*/
long CEduStudentDialog::OnPositionLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentDialog::OnPositionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudentDialog::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnRankSelendok(){
	 
}
/*void CEduStudentDialog::OnRankSetfocus(){
	
}*/
/*void CEduStudentDialog::OnRankKillfocus(){
	
}*/
long CEduStudentDialog::OnRankLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentDialog::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduStudentDialog::OnPhoneChange(){
	
} */
/*void CEduStudentDialog::OnPhoneSetfocus(){
	
} */
/*void CEduStudentDialog::OnPhoneKillfocus(){
	
} */
int CEduStudentDialog::OnPhoneCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnCardIDChange(){
	
} */
/*void CEduStudentDialog::OnCardIDSetfocus(){
	
} */
/*void CEduStudentDialog::OnCardIDKillfocus(){
	
} */
int CEduStudentDialog::OnCardIDCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnDateChange(){
	
} */
/*void CEduStudentDialog::OnDateSetfocus(){
	
} */
/*void CEduStudentDialog::OnDateKillfocus(){
	
} */
int CEduStudentDialog::OnDateCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnStartDateChange(){
	
} */
/*void CEduStudentDialog::OnStartDateSetfocus(){
	
} */
/*void CEduStudentDialog::OnStartDateKillfocus(){
	
} */
int CEduStudentDialog::OnStartDateCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnEndDateChange(){
	
} */
/*void CEduStudentDialog::OnEndDateSetfocus(){
	
} */
/*void CEduStudentDialog::OnEndDateKillfocus(){
	
} */
int CEduStudentDialog::OnEndDateCheckValue(){
	return 0;
} 
void CEduStudentDialog::OnDeptIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnDeptIDSelendok(){
	 
}
/*void CEduStudentDialog::OnDeptIDSetfocus(){
	
}*/
/*void CEduStudentDialog::OnDeptIDKillfocus(){
	
}*/
long CEduStudentDialog::OnDeptIDLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentDialog::OnDeptIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduStudentDialog::OnTechniqueChange(){
	
} */
/*void CEduStudentDialog::OnTechniqueSetfocus(){
	
} */
/*void CEduStudentDialog::OnTechniqueKillfocus(){
	
} */
int CEduStudentDialog::OnTechniqueCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnCertificateChange(){
	
} */
/*void CEduStudentDialog::OnCertificateSetfocus(){
	
} */
/*void CEduStudentDialog::OnCertificateKillfocus(){
	
} */
int CEduStudentDialog::OnCertificateCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnDecideChange(){
	
} */
/*void CEduStudentDialog::OnDecideSetfocus(){
	
} */
/*void CEduStudentDialog::OnDecideKillfocus(){
	
} */
int CEduStudentDialog::OnDecideCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnDecideDateChange(){
	
} */
/*void CEduStudentDialog::OnDecideDateSetfocus(){
	
} */
/*void CEduStudentDialog::OnDecideDateKillfocus(){
	
} */
int CEduStudentDialog::OnDecideDateCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnContentChange(){
	
} */
/*void CEduStudentDialog::OnContentSetfocus(){
	
} */
/*void CEduStudentDialog::OnContentKillfocus(){
	
} */
int CEduStudentDialog::OnContentCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnProjectIDChange(){
	
} */
/*void CEduStudentDialog::OnProjectIDSetfocus(){
	
} */
/*void CEduStudentDialog::OnProjectIDKillfocus(){
	
} */
int CEduStudentDialog::OnProjectIDCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnPlacesIDChange(){
	
} */
/*void CEduStudentDialog::OnPlacesIDSetfocus(){
	
} */
/*void CEduStudentDialog::OnPlacesIDKillfocus(){
	
} */
int CEduStudentDialog::OnPlacesIDCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnCertificateReceiveChange(){
	
} */
/*void CEduStudentDialog::OnCertificateReceiveSetfocus(){
	
} */
/*void CEduStudentDialog::OnCertificateReceiveKillfocus(){
	
} */
int CEduStudentDialog::OnCertificateReceiveCheckValue(){
	return 0;
} 
void CEduStudentDialog::OnDeptidReceiveSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnDeptidReceiveSelendok(){
	 
}
/*void CEduStudentDialog::OnDeptidReceiveSetfocus(){
	
}*/
/*void CEduStudentDialog::OnDeptidReceiveKillfocus(){
	
}*/
long CEduStudentDialog::OnDeptidReceiveLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentDialog::OnDeptidReceiveAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudentDialog::OnResultSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnResultSelendok(){
	 
}
/*void CEduStudentDialog::OnResultSetfocus(){
	
}*/
/*void CEduStudentDialog::OnResultKillfocus(){
	
}*/
long CEduStudentDialog::OnResultLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentDialog::OnResultAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudentDialog::OnTypeIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnTypeIDSelendok(){
	 
}
/*void CEduStudentDialog::OnTypeIDSetfocus(){
	
}*/
/*void CEduStudentDialog::OnTypeIDKillfocus(){
	
}*/
long CEduStudentDialog::OnTypeIDLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentDialog::OnTypeIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEduStudentDialog::OnWorkUnitChange(){
	
} */
/*void CEduStudentDialog::OnWorkUnitSetfocus(){
	
} */
/*void CEduStudentDialog::OnWorkUnitKillfocus(){
	
} */
int CEduStudentDialog::OnWorkUnitCheckValue(){
	return 0;
} 
/*void CEduStudentDialog::OnNoteChange(){
	
} */
/*void CEduStudentDialog::OnNoteSetfocus(){
	
} */
/*void CEduStudentDialog::OnNoteKillfocus(){
	
} */
int CEduStudentDialog::OnNoteCheckValue(){
	return 0;
} 
void CEduStudentDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnStatusSelendok(){
	 
}
/*void CEduStudentDialog::OnStatusSetfocus(){
	
}*/
/*void CEduStudentDialog::OnStatusKillfocus(){
	
}*/
long CEduStudentDialog::OnStatusLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEduStudentDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEduStudentDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEduStudentDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEduStudentDialog::OnAddEduStudentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEduStudentDialog::OnEditEduStudentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEduStudentDialog::OnDeleteEduStudentDialog(){
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
 		OnCancelEduStudentDialog();
 	}
	return 0;
}
int CEduStudentDialog::OnSaveEduStudentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_edu_studentTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_edu_studentTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnEduStudentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEduStudentDialog::OnCancelEduStudentDialog(){
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
int CEduStudentDialog::OnEduStudentDialogListLoadData(){
	return 0;
}
