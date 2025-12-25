#include "PartnerEmplDialog.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPartnerEmplDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnSexAddNew();
}*/
static void _OnProvillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPartnerEmplDialog* )pWnd)->OnProvillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillageSelendokFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnProvillageSelendok();
}
/*static void _OnProvillageSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnProvillageKillfocus();
}*/
/*static void _OnProvillageKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnProvillageKillfocus();
}*/
static long _OnProvillageLoadDataFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnProvillageLoadData();
}
/*static void _OnProvillageAddNewFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnProvillageAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPartnerEmplDialog* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPartnerEmplDialog* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnVillageAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnContactChangeFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnContactChange();
} */
/*static void _OnContactSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnContactSetfocus();} */ 
/*static void _OnContactKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnContactKillfocus();
} */
static int _OnContactCheckValueFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnContactCheckValue();
} 
/*static void _OnContactAddressChangeFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnContactAddressChange();
} */
/*static void _OnContactAddressSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnContactAddressSetfocus();} */ 
/*static void _OnContactAddressKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnContactAddressKillfocus();
} */
static int _OnContactAddressCheckValueFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnContactAddressCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPartnerEmplDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPartnerEmplDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPartnerEmplDialog *pVw = (CPartnerEmplDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPartnerEmplDialog *pVw = (CPartnerEmplDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPartnerEmplDialogFnc(CWnd *pWnd){
	 return ((CPartnerEmplDialog*)pWnd)->OnAddPartnerEmplDialog();
} 
static int _OnEditPartnerEmplDialogFnc(CWnd *pWnd){
	 return ((CPartnerEmplDialog*)pWnd)->OnEditPartnerEmplDialog();
} 
static int _OnDeletePartnerEmplDialogFnc(CWnd *pWnd){
	 return ((CPartnerEmplDialog*)pWnd)->OnDeletePartnerEmplDialog();
} 
static int _OnSavePartnerEmplDialogFnc(CWnd *pWnd){
	 return ((CPartnerEmplDialog*)pWnd)->OnSavePartnerEmplDialog();
} 
static int _OnCancelPartnerEmplDialogFnc(CWnd *pWnd){
	 return ((CPartnerEmplDialog*)pWnd)->OnCancelPartnerEmplDialog();
} 
CPartnerEmplDialog::CPartnerEmplDialog(){

	m_nDlgWidth = 465;
	m_nDlgHeight = 425;
	SetDefaultValues();
}
CPartnerEmplDialog::~CPartnerEmplDialog(){
}
void CPartnerEmplDialog::OnCreateComponents(){
	m_wndEmployeeProfile.Create(this, _T("Employee Profile"), 5, 5, 440, 390);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 130, 55);
	m_wndPatientNo.Create(this,135, 30, 255, 55); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 60, 130, 85);
	m_wndCode.Create(this,135, 60, 255, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 90, 130, 115);
	m_wndPatientName.Create(this,135, 90, 435, 115); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 10, 120, 130, 145);
	m_wndBirthDate.Create(this,135, 120, 255, 145); 
	m_wndSexLabel.Create(this, _T("Sex"), 10, 150, 130, 175);
	m_wndSex.Create(this,135, 150, 435, 175); 
	m_wndProvillageLabel.Create(this, _T("Provillage"), 10, 180, 130, 205);
	m_wndProvillage.Create(this,135, 180, 435, 205); 
	m_wndDistrictLabel.Create(this, _T("District"), 10, 210, 130, 235);
	m_wndDistrict.Create(this,135, 210, 435, 235); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 240, 130, 265);
	m_wndVillage.Create(this,135, 240, 435, 265); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 270, 130, 295);
	m_wndAddress.Create(this,135, 270, 435, 295); 
	m_wndContactLabel.Create(this, _T("Contact"), 10, 300, 130, 325);
	m_wndContact.Create(this,135, 300, 435, 325); 
	m_wndContactAddressLabel.Create(this, _T("Contact Address"), 10, 330, 130, 355);
	m_wndContactAddress.Create(this,135, 330, 435, 355); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 360, 130, 385);
	m_wndDescription.Create(this,135, 360, 435, 385); 
	m_wndSave.Create(this, _T("&Save"), 270, 395, 350, 420);
	m_wndClose.Create(this, _T("&Close"), 355, 395, 435, 420);

}
void CPartnerEmplDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(22);
	m_wndPatientNo.SetCheckValue(true);
	m_wndCode.SetLimitText(20);
	m_wndCode.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(35);
	m_wndProvillage.SetCheckValue(true);
	m_wndProvillage.LimitText(35);
	m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(35);
	m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(35);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndContact.SetLimitText(35);
	m_wndContact.SetCheckValue(true);
	m_wndContactAddress.SetLimitText(35);
	m_wndContactAddress.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(true);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProvillage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProvillage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDistrict.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVillage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_partner_emplTbl.SetTableName(_T("hms_partner_empl"));
	m_hms_partner_emplTbl.AddField(_T("HPE_CREATEDBY"), dfText, 20); 
	m_hms_partner_emplTbl.AddField(_T("HPE_CREATEDDATE"), dfDateTime); 
	m_hms_partner_emplTbl.AddField(_T("HPE_UPDATEDBY"), dfText, 20); 
	m_hms_partner_emplTbl.AddField(_T("HPE_UPDATEDDATE"), dfDateTime); 
	m_hms_partner_emplTbl.AddField(_T("HPE_PARTNER_EMPL_ID"), dfLong); 
	m_hms_partner_emplTbl.AddField(_T("HPE_PARTNER_ID"), dfText, 32); 
	m_hms_partner_emplTbl.AddField(_T("HPE_PATIENTNO"), dfLong); 
	m_hms_partner_emplTbl.AddField(_T("HPE_CODE"), dfText, 20); 
	m_hms_partner_emplTbl.AddField(_T("HPE_DESCRIPTION"), dfText, 254); 

}
void CPartnerEmplDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
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
	m_wndProvillage.SetEvent(WE_SELENDOK, _OnProvillageSelendokFnc);
	//m_wndProvillage.SetEvent(WE_SETFOCUS, _OnProvillageSetfocusFnc);
	//m_wndProvillage.SetEvent(WE_KILLFOCUS, _OnProvillageKillfocusFnc);
	m_wndProvillage.SetEvent(WE_SELCHANGE, _OnProvillageSelectChangeFnc);
	m_wndProvillage.SetEvent(WE_LOADDATA, _OnProvillageLoadDataFnc);
	//m_wndProvillage.SetEvent(WE_ADDNEW, _OnProvillageAddNewFnc);
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
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndContact.SetEvent(WE_CHANGE, _OnContactChangeFnc);
	//m_wndContact.SetEvent(WE_SETFOCUS, _OnContactSetfocusFnc);
	//m_wndContact.SetEvent(WE_KILLFOCUS, _OnContactKillfocusFnc);
	m_wndContact.SetEvent(WE_CHECKVALUE, _OnContactCheckValueFnc);
	//m_wndContactAddress.SetEvent(WE_CHANGE, _OnContactAddressChangeFnc);
	//m_wndContactAddress.SetEvent(WE_SETFOCUS, _OnContactAddressSetfocusFnc);
	//m_wndContactAddress.SetEvent(WE_KILLFOCUS, _OnContactAddressKillfocusFnc);
	m_wndContactAddress.SetEvent(WE_CHECKVALUE, _OnContactAddressCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPartnerEmplDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPartnerEmplDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePartnerEmplDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePartnerEmplDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPartnerEmplDialogFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPartnerEmplDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndProvillage.GetDlgCtrlID(), m_szProvillageKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndContact.GetDlgCtrlID(), m_szContact);
	DDX_Text(pDX, m_wndContactAddress.GetDlgCtrlID(), m_szContactAddress);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CPartnerEmplDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientNo")] =  m_nPatientNo;
	m_jData[_T("Code")] =  m_szCode;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("BirthDate")] =  m_szBirthDate;
	m_jData[_T("Sex")] =  m_szSexKey;
	m_jData[_T("Provillage")] =  m_szProvillageKey;
	m_jData[_T("District")] =  m_szDistrictKey;
	m_jData[_T("Village")] =  m_szVillageKey;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Contact")] =  m_szContact;
	m_jData[_T("ContactAddress")] =  m_szContactAddress;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("PatientNo")].GetValue(m_nPatientNo);
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("BirthDate")].GetValue(m_szBirthDate);
	m_jData[_T("Sex")].GetValue(m_szSexKey);
	m_jData[_T("Provillage")].GetValue(m_szProvillageKey);
	m_jData[_T("District")].GetValue(m_szDistrictKey);
	m_jData[_T("Village")].GetValue(m_szVillageKey);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Contact")].GetValue(m_szContact);
	m_jData[_T("ContactAddress")].GetValue(m_szContactAddress);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CPartnerEmplDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HPE_PATIENTNO"), m_nPatientNo);
	rs.GetValue(_T("HPE_CODE"), m_szCode);
	rs.GetValue(_T("HPE_DESCRIPTION"), m_szDescription);

}
void CPartnerEmplDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_partner_emplTbl.SetValue(_T("HPE_PATIENTNO"), m_nPatientNo);
	m_hms_partner_emplTbl.SetValue(_T("HPE_CODE"), m_szCode);
	m_hms_partner_emplTbl.SetValue(_T("HPE_DESCRIPTION"), m_szDescription);

}
void CPartnerEmplDialog::SetDefaultValues(){

	m_nPatientNo=0;
	m_szCode.Empty();
	m_szPatientName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szProvillageKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szAddress.Empty();
	m_szContact.Empty();
	m_szContactAddress.Empty();
	m_szDescription.Empty();

}
int CPartnerEmplDialog::SetMode(int nMode){
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
/*void CPartnerEmplDialog::OnPatientNoChange(){
	
} */
/*void CPartnerEmplDialog::OnPatientNoSetfocus(){
	
} */
/*void CPartnerEmplDialog::OnPatientNoKillfocus(){
	
} */
int CPartnerEmplDialog::OnPatientNoCheckValue(){
	return 0;
} 
/*void CPartnerEmplDialog::OnCodeChange(){
	
} */
/*void CPartnerEmplDialog::OnCodeSetfocus(){
	
} */
/*void CPartnerEmplDialog::OnCodeKillfocus(){
	
} */
int CPartnerEmplDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CPartnerEmplDialog::OnPatientNameChange(){
	
} */
/*void CPartnerEmplDialog::OnPatientNameSetfocus(){
	
} */
/*void CPartnerEmplDialog::OnPatientNameKillfocus(){
	
} */
int CPartnerEmplDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CPartnerEmplDialog::OnBirthDateChange(){
	
} */
/*void CPartnerEmplDialog::OnBirthDateSetfocus(){
	
} */
/*void CPartnerEmplDialog::OnBirthDateKillfocus(){
	
} */
int CPartnerEmplDialog::OnBirthDateCheckValue(){
	return 0;
} 
void CPartnerEmplDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPartnerEmplDialog::OnSexSelendok(){
	 
}
/*void CPartnerEmplDialog::OnSexSetfocus(){
	
}*/
/*void CPartnerEmplDialog::OnSexKillfocus(){
	
}*/
long CPartnerEmplDialog::OnSexLoadData(){
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
/*void CPartnerEmplDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPartnerEmplDialog::OnProvillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPartnerEmplDialog::OnProvillageSelendok(){
	 
}
/*void CPartnerEmplDialog::OnProvillageSetfocus(){
	
}*/
/*void CPartnerEmplDialog::OnProvillageKillfocus(){
	
}*/
long CPartnerEmplDialog::OnProvillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvillage.IsSearchKey() && !m_szProvillageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProvillageKey
};
	m_wndProvillage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvillage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPartnerEmplDialog::OnProvillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPartnerEmplDialog::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPartnerEmplDialog::OnDistrictSelendok(){
	 
}
/*void CPartnerEmplDialog::OnDistrictSetfocus(){
	
}*/
/*void CPartnerEmplDialog::OnDistrictKillfocus(){
	
}*/
long CPartnerEmplDialog::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDistrict.IsSearchKey() && !m_szDistrictKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDistrictKey
};
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPartnerEmplDialog::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPartnerEmplDialog::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPartnerEmplDialog::OnVillageSelendok(){
	 
}
/*void CPartnerEmplDialog::OnVillageSetfocus(){
	
}*/
/*void CPartnerEmplDialog::OnVillageKillfocus(){
	
}*/
long CPartnerEmplDialog::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVillage.IsSearchKey() && !m_szVillageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szVillageKey
};
	m_wndVillage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVillage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPartnerEmplDialog::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPartnerEmplDialog::OnAddressChange(){
	
} */
/*void CPartnerEmplDialog::OnAddressSetfocus(){
	
} */
/*void CPartnerEmplDialog::OnAddressKillfocus(){
	
} */
int CPartnerEmplDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CPartnerEmplDialog::OnContactChange(){
	
} */
/*void CPartnerEmplDialog::OnContactSetfocus(){
	
} */
/*void CPartnerEmplDialog::OnContactKillfocus(){
	
} */
int CPartnerEmplDialog::OnContactCheckValue(){
	return 0;
} 
/*void CPartnerEmplDialog::OnContactAddressChange(){
	
} */
/*void CPartnerEmplDialog::OnContactAddressSetfocus(){
	
} */
/*void CPartnerEmplDialog::OnContactAddressKillfocus(){
	
} */
int CPartnerEmplDialog::OnContactAddressCheckValue(){
	return 0;
} 
/*void CPartnerEmplDialog::OnDescriptionChange(){
	
} */
/*void CPartnerEmplDialog::OnDescriptionSetfocus(){
	
} */
/*void CPartnerEmplDialog::OnDescriptionKillfocus(){
	
} */
int CPartnerEmplDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CPartnerEmplDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPartnerEmplDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPartnerEmplDialog::OnAddPartnerEmplDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPartnerEmplDialog::OnEditPartnerEmplDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPartnerEmplDialog::OnDeletePartnerEmplDialog(){
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
 		OnCancelPartnerEmplDialog();
 	}
	return 0;
}
int CPartnerEmplDialog::OnSavePartnerEmplDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_partner_emplTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_partner_emplTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnPartnerEmplDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPartnerEmplDialog::OnCancelPartnerEmplDialog(){
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
int CPartnerEmplDialog::OnPartnerEmplDialogListLoadData(){
	return 0;
}
