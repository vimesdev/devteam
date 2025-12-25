#ifndef HMSPATIENTENCRYPTDIALOG_H
#define HMSPATIENTENCRYPTDIALOG_H

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
class AFX_EXT_CLASS CHMSPatientEncryptDialog : public CGuiDialog{
protected:
public:
	bool			m_bIsEncrypted;
	long			m_nPatientNo;
	CString			m_szCreatedBy;

	CGuiGroupBox	m_wndOriginalProfile;
	CGuiGroupBox	m_wndEncryptProfile;
	
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndEncryptNameLabel;
	CGuiTextCtrl	m_wndEncryptName;
	CGuiLabel		m_wndEncryptBirthDateLabel;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndGenderLabel;
	CGuiComboBox	m_wndGender;
	CGuiDateCtrl	m_wndEncryptBirthDate;
	CGuiLabel		m_wndEncryptGenderLabel;
	CGuiComboBox	m_wndEncryptGender;
	CGuiLabel		m_wndProvillLabel;
	CGuiComboBox	m_wndProvill;
	CGuiLabel		m_wndEncryptProvillLabel;
	CGuiComboBox	m_wndEncryptProvill;
	CGuiLabel		m_wndDistrictLabel;
	CGuiComboBox	m_wndDistrict;
	CGuiLabel		m_wndEncryptDistrictLabel;
	CGuiComboBox	m_wndEncryptDistrict;
	CGuiLabel		m_wndVillageLabel;
	CGuiComboBox	m_wndVillage;
	CGuiLabel		m_wndEncryptVillageLabel;
	CGuiComboBox	m_wndEncryptVillage;
	CGuiLabel		m_wndDetailAddressLabel;
	CGuiTextCtrl	m_wndDetailAddress;
	CGuiLabel		m_wndEncryptDetailAddressLabel;
	CGuiTextCtrl	m_wndEncryptDetailAddress;
	CGuiLabel		m_wndRankLabel;
	CGuiComboBox	m_wndRank;
	CGuiLabel		m_wndEncryptRankLabel;
	CGuiComboBox	m_wndEncryptRank;
	CGuiLabel		m_wndPositionLabel;
	CGuiComboBox	m_wndPosition;
	CGuiLabel		m_wndEncryptPostitionLabel;
	CGuiComboBox	m_wndEncryptPostition;
	CGuiLabel		m_wndWorkplaceLabel;
	CGuiTextCtrl	m_wndWorkplace;
	CGuiLabel		m_wndEncryptWorkplaceLabel;
	CGuiTextCtrl	m_wndEncryptWorkplace;
	CGuiButton		m_wndEncrypt;
	CGuiButton		m_wndDecrypt;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndSecurity;
	CString	m_szPatientName;
	CString	m_szEncryptName;
	CString	m_szBirthDate;
	CString	m_szGenderKey;
	CString	m_szEncryptBirthDate;
	CString	m_szEncryptGenderKey;
	CString	m_szProvillKey;
	CString	m_szEncryptProvillKey;
	CString	m_szDistrictKey;
	CString	m_szEncryptDistrictKey;
	CString	m_szVillageKey;
	CString	m_szEncryptVillageKey;
	CString	m_szDetailAddress;
	CString	m_szEncryptDetailAddress;
	CString	m_szRankKey;
	CString	m_szEncryptRankKey;
	CString	m_szPositionKey;
	CString	m_szEncryptPostitionKey;
	CString	m_szWorkplace;
	CString	m_szEncryptWorkplace;
	CString	m_szWorkplace_ID;
	CString	m_szEncryptWorkplace_ID;

	CDbfMap	m_hms_patient_encryptTbl;
	CDbfMap	m_hms_patientTbl;


	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnEncryptNameChange(); 
	//void			OnEncryptNameSetfocus(); 
	//void			OnEncryptNameKillfocus(); 
	int			OnEncryptNameCheckValue(); 
	//void			OnBirthDateChange(); 
	//void			OnBirthDateSetfocus(); 
	//void			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	void			OnGenderSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGenderSelendok(); 
	//void			OnGenderSetfocus(); 
	//void			OnGenderKillfocus(); 
	long			OnGenderLoadData(); 
	//void			OnGenderAddNew(); 
	//void			OnEncryptBirthDateChange(); 
	//void			OnEncryptBirthDateSetfocus(); 
	//void			OnEncryptBirthDateKillfocus(); 
	int			OnEncryptBirthDateCheckValue(); 
	void			OnEncryptGenderSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEncryptGenderSelendok(); 
	//void			OnEncryptGenderSetfocus(); 
	//void			OnEncryptGenderKillfocus(); 
	long			OnEncryptGenderLoadData(); 
	//void			OnEncryptGenderAddNew(); 
	void			OnProvillSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvillSelendok(); 
	//void			OnProvillSetfocus(); 
	//void			OnProvillKillfocus(); 
	long			OnProvillLoadData(); 
	//void			OnProvillAddNew(); 
	void			OnEncryptProvillSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEncryptProvillSelendok(); 
	//void			OnEncryptProvillSetfocus(); 
	//void			OnEncryptProvillKillfocus(); 
	long			OnEncryptProvillLoadData(); 
	//void			OnEncryptProvillAddNew(); 
	void			OnDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistrictSelendok(); 
	//void			OnDistrictSetfocus(); 
	//void			OnDistrictKillfocus(); 
	long			OnDistrictLoadData(); 
	//void			OnDistrictAddNew(); 
	void			OnEncryptDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEncryptDistrictSelendok(); 
	//void			OnEncryptDistrictSetfocus(); 
	//void			OnEncryptDistrictKillfocus(); 
	long			OnEncryptDistrictLoadData(); 
	//void			OnEncryptDistrictAddNew(); 
	void			OnVillageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVillageSelendok(); 
	//void			OnVillageSetfocus(); 
	//void			OnVillageKillfocus(); 
	long			OnVillageLoadData(); 
	//void			OnVillageAddNew(); 
	void			OnEncryptVillageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEncryptVillageSelendok(); 
	//void			OnEncryptVillageSetfocus(); 
	//void			OnEncryptVillageKillfocus(); 
	long			OnEncryptVillageLoadData(); 
	//void			OnEncryptVillageAddNew(); 
	//void			OnDetailAddressChange(); 
	//void			OnDetailAddressSetfocus(); 
	//void			OnDetailAddressKillfocus(); 
	int			OnDetailAddressCheckValue(); 
	//void			OnEncryptDetailAddressChange(); 
	//void			OnEncryptDetailAddressSetfocus(); 
	//void			OnEncryptDetailAddressKillfocus(); 
	int			OnEncryptDetailAddressCheckValue(); 
	void			OnRankSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRankSelendok(); 
	//void			OnRankSetfocus(); 
	//void			OnRankKillfocus(); 
	long			OnRankLoadData(); 
	//void			OnRankAddNew(); 
	void			OnEncryptRankSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEncryptRankSelendok(); 
	//void			OnEncryptRankSetfocus(); 
	//void			OnEncryptRankKillfocus(); 
	long			OnEncryptRankLoadData(); 
	//void			OnEncryptRankAddNew(); 
	void			OnPositionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPositionSelendok(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	long			OnPositionLoadData(); 
	//void			OnPositionAddNew(); 
	void			OnEncryptPostitionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEncryptPostitionSelendok(); 
	//void			OnEncryptPostitionSetfocus(); 
	//void			OnEncryptPostitionKillfocus(); 
	long			OnEncryptPostitionLoadData(); 
	//void			OnEncryptPostitionAddNew(); 
	//void			OnWorkplaceChange(); 
	//void			OnWorkplaceSetfocus(); 
	//void			OnWorkplaceKillfocus(); 
	int			OnWorkplaceCheckValue(); 
	//void			OnEncryptWorkplaceChange(); 
	//void			OnEncryptWorkplaceSetfocus(); 
	//void			OnEncryptWorkplaceKillfocus(); 
	int			OnEncryptWorkplaceCheckValue(); 
	void			OnEncryptSelect(); 
	void			OnDecryptSelect(); 
	void			OnCloseSelect(); 
	void			OnSecuritySelect(); 
	CHMSPatientEncryptDialog(CWnd *pParent, long nPatientNo, int nMode);
	~CHMSPatientEncryptDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientEncryptDialog(); 
	int OnEditHMSPatientEncryptDialog(); 
	int OnDeleteHMSPatientEncryptDialog(); 
	int OnSaveHMSPatientEncryptDialog(); 
	int OnCancelHMSPatientEncryptDialog(); 
	int OnHMSPatientEncryptDialogListLoadData(); 
};
#endif
