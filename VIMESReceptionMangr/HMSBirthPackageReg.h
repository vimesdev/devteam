#ifndef HMSBIRTHPACKAGEREG_H
#define HMSBIRTHPACKAGEREG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright © Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hoang Van Hay, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2012.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CHMSBirthPackageReg : public CGuiDialog{
protected:
	CDbfMap	m_tblHms_birth_package;
public:
	long	m_nCustomerId;
	CGuiGroupBox	m_wndSupporter;
	CGuiGroupBox	m_wndPersonalInfo;
	CGuiGroupBox	m_wndBirthInfo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiNumberCtrl	m_wndYob;
	CGuiLabel		m_wndProvillLabel;
	CGuiComboBox	m_wndProvill;
	CGuiLabel		m_wndDistrictLabel;
	CGuiComboBox	m_wndDistrict;
	CGuiLabel		m_wndVillageLabel;
	CGuiComboBox	m_wndVillage;
	CGuiLabel		m_wndTelephoneLabel;
	CGuiTextCtrl	m_wndTelephone;
	CGuiLabel		m_wndBirthTimesLabel;
	CGuiNumberCtrl	m_wndBirthTimes;
	CGuiLabel		m_wndExpectedDayLabel;
	CGuiDateCtrl	m_wndExpectedDay;
	CGuiLabel		m_wndFetusTimesLabel;
	CGuiNumberCtrl	m_wndFetusTimes;
	CGuiLabel		m_wndExpectedMethodLabel;
	CGuiComboBox	m_wndExpectedMethod;
	CGuiLabel		m_wndPhoneSupporterLabel;
	CGuiComboBox	m_wndPhoneSupporter;
	CGuiLabel		m_wndDirectSupporterLabel;
	CGuiComboBox	m_wndDirectSupporter;
	CGuiLabel		m_wndInfoSourceLabel;
	CGuiComboBox	m_wndInfoSource;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szPatientName;
	long	m_nYob;
	CString	m_szProvillKey;
	CString	m_szDistrictKey;
	CString	m_szVillageKey;
	CString	m_szTelephone;
	long	m_nBirthTimes;
	CString	m_szExpectedDay;
	long	m_nFetusTimes;
	CString	m_szExpectedMethodKey;
	CString	m_szPhoneSupporterKey;
	CString	m_szDirectSupporterKey;
	CString	m_szInfoSourceKey;
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYobChange(); 
	//void			OnYobSetfocus(); 
	//void			OnYobKillfocus(); 
	int			OnYobCheckValue(); 
	void			OnProvillSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvillSelendok(); 
	//void			OnProvillSetfocus(); 
	//void			OnProvillKillfocus(); 
	long			OnProvillLoadData(); 
	//void			OnProvillAddNew(); 
	void			OnDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistrictSelendok(); 
	//void			OnDistrictSetfocus(); 
	//void			OnDistrictKillfocus(); 
	long			OnDistrictLoadData(); 
	//void			OnDistrictAddNew(); 
	void			OnVillageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVillageSelendok(); 
	//void			OnVillageSetfocus(); 
	//void			OnVillageKillfocus(); 
	long			OnVillageLoadData(); 
	//void			OnVillageAddNew(); 
	//void			OnTelephoneChange(); 
	//void			OnTelephoneSetfocus(); 
	//void			OnTelephoneKillfocus(); 
	int			OnTelephoneCheckValue(); 
	//void			OnBirthTimesChange(); 
	//void			OnBirthTimesSetfocus(); 
	//void			OnBirthTimesKillfocus(); 
	int			OnBirthTimesCheckValue(); 
	//void			OnExpectedDayChange(); 
	//void			OnExpectedDaySetfocus(); 
	//void			OnExpectedDayKillfocus(); 
	int			OnExpectedDayCheckValue(); 
	//void			OnFetusTimesChange(); 
	//void			OnFetusTimesSetfocus(); 
	//void			OnFetusTimesKillfocus(); 
	int			OnFetusTimesCheckValue(); 
	void			OnExpectedMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExpectedMethodSelendok(); 
	//void			OnExpectedMethodSetfocus(); 
	//void			OnExpectedMethodKillfocus(); 
	long			OnExpectedMethodLoadData(); 
	//void			OnExpectedMethodAddNew(); 
	void			OnPhoneSupporterSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPhoneSupporterSelendok(); 
	//void			OnPhoneSupporterSetfocus(); 
	//void			OnPhoneSupporterKillfocus(); 
	long			OnPhoneSupporterLoadData(); 
	//void			OnPhoneSupporterAddNew(); 
	void			OnDirectSupporterSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDirectSupporterSelendok(); 
	//void			OnDirectSupporterSetfocus(); 
	//void			OnDirectSupporterKillfocus(); 
	long			OnDirectSupporterLoadData(); 
	//void			OnDirectSupporterAddNew(); 
	void			OnInfoSourceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnInfoSourceSelendok(); 
	//void			OnInfoSourceSetfocus(); 
	//void			OnInfoSourceKillfocus(); 
	long			OnInfoSourceLoadData(); 
	//void			OnInfoSourceAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSBirthPackageReg(CWnd *pParent);
	~CHMSBirthPackageReg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBirthPackageReg(); 
	int OnEditHMSBirthPackageReg(); 
	int OnDeleteHMSBirthPackageReg(); 
	int OnSaveHMSBirthPackageReg(); 
	int OnCancelHMSBirthPackageReg(); 
	int OnHMSBirthPackageRegListLoadData(); 
};
#endif
