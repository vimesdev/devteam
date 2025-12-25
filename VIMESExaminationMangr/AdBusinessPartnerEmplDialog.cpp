#include "AdBusinessPartnerEmplDialog.h"
#include "AdBusinessPartnerListDialog.h"

#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerEmplDialog* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnSexAddNew();
}*/
static void _OnProvillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerEmplDialog* )pWnd)->OnProvillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillageSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnProvillageSelendok();
}
/*static void _OnProvillageSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnProvillageKillfocus();
}*/
/*static void _OnProvillageKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnProvillageKillfocus();
}*/
static long _OnProvillageLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnProvillageLoadData();
}
/*static void _OnProvillageAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnProvillageAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerEmplDialog* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdBusinessPartnerEmplDialog* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnVillageAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnContactChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnContactChange();
} */
/*static void _OnContactSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnContactSetfocus();} */ 
/*static void _OnContactKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnContactKillfocus();
} */
static int _OnContactCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnContactCheckValue();
} 
/*static void _OnContactAddressChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnContactAddressChange();
} */
/*static void _OnContactAddressSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnContactAddressSetfocus();} */ 
/*static void _OnContactAddressKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnContactAddressKillfocus();
} */
static int _OnContactAddressCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnContactAddressCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerEmplDialog *pVw = (CAdBusinessPartnerEmplDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerEmplDialog *pVw = (CAdBusinessPartnerEmplDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdBusinessPartnerEmplDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplDialog*)pWnd)->OnAddAdBusinessPartnerEmplDialog();
} 
static int _OnEditAdBusinessPartnerEmplDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplDialog*)pWnd)->OnEditAdBusinessPartnerEmplDialog();
} 
static int _OnDeleteAdBusinessPartnerEmplDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplDialog*)pWnd)->OnDeleteAdBusinessPartnerEmplDialog();
} 
static int _OnSaveAdBusinessPartnerEmplDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplDialog*)pWnd)->OnSaveAdBusinessPartnerEmplDialog();
} 
static int _OnCancelAdBusinessPartnerEmplDialogFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplDialog*)pWnd)->OnCancelAdBusinessPartnerEmplDialog();
} 

static CAdBusinessPartnerEmplList* _partnerEmplList = NULL;
CAdBusinessPartnerEmplDialog::CAdBusinessPartnerEmplDialog(CWnd *pParent, int nMode, CString szPartnerId): CGuiDialog(pParent)
{
	_partnerEmplList = (CAdBusinessPartnerEmplList*) pParent;
	CGuiDialog::SetMode(nMode);
	m_szPartnerId = szPartnerId;
	m_nDlgWidth = 465;
	m_nDlgHeight = 425;
	SetDefaultValues();

}
CAdBusinessPartnerEmplDialog::~CAdBusinessPartnerEmplDialog(){
}
void CAdBusinessPartnerEmplDialog::OnCreateComponents(){
	m_wndEmployeeProfile.Create(this, _T("Employee Profile"), 5, 5, 440, 330);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 130, 55);
	m_wndPatientNo.Create(this,135, 30, 255, 55); 
	m_wndCodeLabel.Create(this, _T("Code"), 260, 30, 330, 55);
	m_wndCode.Create(this,335, 30, 435, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 130, 85);
	m_wndPatientName.Create(this,135, 60, 435, 85); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 10, 90, 130, 115);
	m_wndBirthDate.Create(this,135, 90, 255, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 260, 90, 330, 115);
	m_wndSex.Create(this,335, 90, 435, 115); 
	m_wndProvillageLabel.Create(this, _T("Provillage"), 10, 120, 130, 145);
	m_wndProvillage.Create(this,135, 120, 435, 145); 
	m_wndDistrictLabel.Create(this, _T("District"), 10, 150, 130, 175);
	m_wndDistrict.Create(this,135, 150, 435, 175); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 180, 130, 205);
	m_wndVillage.Create(this,135, 180, 435, 205); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 210, 130, 235);
	m_wndAddress.Create(this,135, 210, 435, 235); 
	m_wndContactLabel.Create(this, _T("Contact"), 10, 240, 130, 265);
	m_wndContact.Create(this,135, 240, 435, 265); 
	m_wndContactAddressLabel.Create(this, _T("Contact Address"), 10, 270, 130, 295);
	m_wndContactAddress.Create(this,135, 270, 435, 295); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 300, 130, 325);
	m_wndDescription.Create(this,135, 300, 435, 325); 
	m_wndSave.Create(this, _T("&Save"), 275, 335, 355, 360);
	m_wndClose.Create(this, _T("&Close"), 360, 335, 440, 360);


}
void CAdBusinessPartnerEmplDialog::OnInitializeComponents(){
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
	m_wndDistrict.SetCheckValue(false);
	m_wndDistrict.LimitText(35);
	m_wndVillage.SetCheckValue(false);
	m_wndVillage.LimitText(35);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(false);
	m_wndContact.SetLimitText(64);
	m_wndContact.SetCheckValue(false);
	m_wndContactAddress.SetLimitText(254);
	m_wndContactAddress.SetCheckValue(false);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(false);


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
	m_hms_partner_emplTbl.AddField(_T("HPE_FIRSTNAME"), dfText, 15); 
	m_hms_partner_emplTbl.AddField(_T("HPE_MIDNAME"), dfText, 45); 
	m_hms_partner_emplTbl.AddField(_T("HPE_LASTNAME"), dfText, 15); 
	m_hms_partner_emplTbl.AddField(_T("HPE_BIRTHDATE"), dfDate); 
	m_hms_partner_emplTbl.AddField(_T("HPE_SEX"), dfText, 1); 
	m_hms_partner_emplTbl.AddField(_T("HPE_PROVID"), dfLong); 
	m_hms_partner_emplTbl.AddField(_T("HPE_DISTID"), dfLong); 
	m_hms_partner_emplTbl.AddField(_T("HPE_VILLID"), dfLong); 
	m_hms_partner_emplTbl.AddField(_T("HPE_ADDRESS"), dfText, 254); 
	m_hms_partner_emplTbl.AddField(_T("HPE_PHONE"), dfText, 64); 
	m_hms_partner_emplTbl.AddField(_T("HPE_CONTACT_ADDRESS"), dfText, 254); 
	m_hms_partner_emplTbl.AddField(_T("HPE_DESCRIPTION"), dfText, 254); 

	m_wndPatientNo.SetReadOnly(true);
	
}
void CAdBusinessPartnerEmplDialog::OnSetWindowEvents(){
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

	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);

}
void CAdBusinessPartnerEmplDialog::OnDoDataExchange(CDataExchange* pDX){
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
void CAdBusinessPartnerEmplDialog::UpdateJson(BOOL bSave){
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
void CAdBusinessPartnerEmplDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM HMS_PARTNER_EMPL WHERE HPE_PARTNER_EMPL_ID=%ld"), m_nPartnerEmplId);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		CString szFirstName, szMidName, szLastName;

		rs.GetValue(_T("HPE_PARTNER_ID"), m_szPID); 
		rs.GetValue(_T("HPE_PATIENTNO"), m_nPatientNo); 
		rs.GetValue(_T("HPE_CODE"), m_szCode); 
		rs.GetValue(_T("HPE_FIRSTNAME"), szFirstName); 
		rs.GetValue(_T("HPE_MIDNAME"), szMidName); 
		rs.GetValue(_T("HPE_LASTNAME"), szLastName); 
		rs.GetValue(_T("HPE_BIRTHDATE"), m_szBirthDate); 
		rs.GetValue(_T("HPE_SEX"), m_szSexKey); 
		rs.GetValue(_T("HPE_PROVID"), m_szProvillageKey); 
		rs.GetValue(_T("HPE_DISTID"), m_szDistrictKey); 
		rs.GetValue(_T("HPE_VILLID"), m_szVillageKey); 
		rs.GetValue(_T("HPE_ADDRESS"), m_szAddress); 
		rs.GetValue(_T("HPE_PHONE"), m_szContact); 
		rs.GetValue(_T("HPE_CONTACT_ADDRESS"), m_szContactAddress); 
		rs.GetValue(_T("HPE_DESCRIPTION"), m_szDescription); 

	}

}
void CAdBusinessPartnerEmplDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFirstName, szMidName, szLastName;

	SplitName(m_szPatientName, szLastName, szMidName, szFirstName);
	
	m_hms_partner_emplTbl.SetValue(_T("HPE_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_partner_emplTbl.SetValue(_T("HPE_CREATEDDATE"), pMF->GetSysDateTime());
	m_hms_partner_emplTbl.SetValue(_T("HPE_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_partner_emplTbl.SetValue(_T("HPE_UPDATEDDATE"), pMF->GetSysDateTime());
	m_hms_partner_emplTbl.SetValue(_T("HPE_PARTNER_EMPL_ID"), m_nPartnerEmplId); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_PARTNER_ID"), m_szPartnerId); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_PATIENTNO"), m_nPatientNo);
	m_hms_partner_emplTbl.SetValue(_T("HPE_CODE"), m_szCode); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_FIRSTNAME"), szFirstName); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_MIDNAME"), szMidName); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_LASTNAME"), szLastName); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_BIRTHDATE"), m_szBirthDate); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_SEX"), m_szSexKey); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_PROVID"), m_szProvillageKey); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_DISTID"), m_szDistrictKey); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_VILLID"), m_szVillageKey); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_ADDRESS"), m_szAddress); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_PHONE"), m_szContact); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_CONTACT_ADDRESS"), m_szContactAddress); 
	m_hms_partner_emplTbl.SetValue(_T("HPE_DESCRIPTION"), m_szDescription); 



}
void CAdBusinessPartnerEmplDialog::SetDefaultValues(){

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
int CAdBusinessPartnerEmplDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
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
/*void CAdBusinessPartnerEmplDialog::OnPatientNoChange(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnPatientNoSetfocus(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnPatientNoKillfocus(){
	
} */
int CAdBusinessPartnerEmplDialog::OnPatientNoCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerEmplDialog::OnCodeChange(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnCodeSetfocus(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnCodeKillfocus(){
	
} */
int CAdBusinessPartnerEmplDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerEmplDialog::OnPatientNameChange(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnPatientNameSetfocus(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnPatientNameKillfocus(){
	
} */
int CAdBusinessPartnerEmplDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerEmplDialog::OnBirthDateChange(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnBirthDateSetfocus(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnBirthDateKillfocus(){
	
} */
int CAdBusinessPartnerEmplDialog::OnBirthDateCheckValue(){
	return 0;
} 
void CAdBusinessPartnerEmplDialog::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerEmplDialog::OnSexSelendok(){
	 
}
/*void CAdBusinessPartnerEmplDialog::OnSexSetfocus(){
	
}*/
/*void CAdBusinessPartnerEmplDialog::OnSexKillfocus(){
	
}*/
long CAdBusinessPartnerEmplDialog::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSexList(&m_wndSex, m_szSexKey);
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
/*void CAdBusinessPartnerEmplDialog::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerEmplDialog::OnProvillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerEmplDialog::OnProvillageSelendok(){
	 
}
/*void CAdBusinessPartnerEmplDialog::OnProvillageSetfocus(){
	
}*/
/*void CAdBusinessPartnerEmplDialog::OnProvillageKillfocus(){
	
}*/
long CAdBusinessPartnerEmplDialog::OnProvillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadProvillList(&m_wndProvillage, m_szProvillageKey);
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
/*void CAdBusinessPartnerEmplDialog::OnProvillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerEmplDialog::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerEmplDialog::OnDistrictSelendok(){
	 
}
/*void CAdBusinessPartnerEmplDialog::OnDistrictSetfocus(){
	
}*/
/*void CAdBusinessPartnerEmplDialog::OnDistrictKillfocus(){
	
}*/
long CAdBusinessPartnerEmplDialog::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDistrictList(&m_wndDistrict, m_szProvillageKey, m_szDistrictKey);
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
/*void CAdBusinessPartnerEmplDialog::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdBusinessPartnerEmplDialog::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdBusinessPartnerEmplDialog::OnVillageSelendok(){
	 
}
/*void CAdBusinessPartnerEmplDialog::OnVillageSetfocus(){
	
}*/
/*void CAdBusinessPartnerEmplDialog::OnVillageKillfocus(){
	
}*/
long CAdBusinessPartnerEmplDialog::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadVillageList(&m_wndVillage, m_szProvillageKey, m_szDistrictKey, m_szVillageKey);
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
/*void CAdBusinessPartnerEmplDialog::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdBusinessPartnerEmplDialog::OnAddressChange(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnAddressSetfocus(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnAddressKillfocus(){
	
} */
int CAdBusinessPartnerEmplDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerEmplDialog::OnContactChange(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnContactSetfocus(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnContactKillfocus(){
	
} */
int CAdBusinessPartnerEmplDialog::OnContactCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerEmplDialog::OnContactAddressChange(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnContactAddressSetfocus(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnContactAddressKillfocus(){
	
} */
int CAdBusinessPartnerEmplDialog::OnContactAddressCheckValue(){
	return 0;
} 
/*void CAdBusinessPartnerEmplDialog::OnDescriptionChange(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnDescriptionSetfocus(){
	
} */
/*void CAdBusinessPartnerEmplDialog::OnDescriptionKillfocus(){
	
} */
int CAdBusinessPartnerEmplDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CAdBusinessPartnerEmplDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveAdBusinessPartnerEmplDialog();
} 
void CAdBusinessPartnerEmplDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdBusinessPartnerEmplDialog::OnAddAdBusinessPartnerEmplDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerEmplDialog::OnEditAdBusinessPartnerEmplDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerEmplDialog::OnDeleteAdBusinessPartnerEmplDialog(){
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
 		OnCancelAdBusinessPartnerEmplDialog();
 	}
	return 0;
}
int CAdBusinessPartnerEmplDialog::OnSaveAdBusinessPartnerEmplDialog(){

 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;

 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
/*
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_partner_emplTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE HPE_PARTNER_EMPL_ID=%ld"), m_nPartnerEmplId);
 		szSQL = m_hms_partner_emplTbl.GetUpdateSQL(_T("hpe_createdby,hpe_createddate"));
 		szSQL += szWhere;
 	}
*/
	if(GetMode() == VM_ADD)
		szSQL.Format(_T("HMS_PARTNER_EMPL_CREATE(%s) "), m_hms_partner_emplTbl.FormatSQL());
	else
		szSQL.Format(_T("HMS_PARTNER_EMPL_EDIT(%s) "), m_hms_partner_emplTbl.FormatSQL());
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		if(_partnerEmplList)
			_partnerEmplList->OnListLoadData();
 		SetMode(VM_ADD);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerEmplDialog::OnCancelAdBusinessPartnerEmplDialog(){
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
int CAdBusinessPartnerEmplDialog::OnAdBusinessPartnerEmplDialogListLoadData(){
	return 0;
}
