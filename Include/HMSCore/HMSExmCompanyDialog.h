#ifndef HMSEXMCOMPANYDIALOG_H
#define HMSEXMCOMPANYDIALOG_H

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
class CHMSExmCompanyDialog : public CGuiDialog{
protected:
	int		m_nEmployees;
public:
	long			m_nCompanyId;
	CGuiGroupBox	m_wndCompanyInformation;
	CGuiLabel		m_wndIdLabel;
	CGuiTextCtrl	m_wndId;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndProvillLabel;
	CGuiComboBox	m_wndProvill;
	CGuiLabel		m_wndDistrictLabel;
	CGuiComboBox	m_wndDistrict;
	CGuiLabel		m_wndVillageLabel;
	CGuiComboBox	m_wndVillage;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndOfficePhoneLabel;
	CGuiTextCtrl	m_wndOfficePhone;
	CGuiLabel		m_wndMobilePhoneLabel;
	CGuiTextCtrl	m_wndMobilePhone;
	CGuiLabel		m_wndContactLabel;
	CGuiTextCtrl	m_wndContact;
	CGuiLabel		m_wndTaxcodeLabel;
	CGuiTextCtrl	m_wndTaxcode;
	CGuiLabel		m_wndAccountLabel;
	CGuiTextCtrl	m_wndAccount;
	CGuiCheckBox	m_wndIsActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szId;
	CString	m_szName;
	CString	m_szProvillKey;
	CString	m_szDistrictKey;
	CString	m_szVillageKey;
	CString	m_szAddress;
	CString	m_szOfficePhone;
	CString	m_szMobilePhone;
	CString	m_szContact;
	CString	m_szTaxcode;
	CString	m_szAccount;
	BOOL	m_bIsActive;
	CDbfMap	m_hms_exm_companyTbl;
	//void			OnIdChange(); 
	//void			OnIdSetfocus(); 
	//void			OnIdKillfocus(); 
	int			OnIdCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
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
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnOfficePhoneChange(); 
	//void			OnOfficePhoneSetfocus(); 
	//void			OnOfficePhoneKillfocus(); 
	int			OnOfficePhoneCheckValue(); 
	//void			OnMobilePhoneChange(); 
	//void			OnMobilePhoneSetfocus(); 
	//void			OnMobilePhoneKillfocus(); 
	int			OnMobilePhoneCheckValue(); 
	//void			OnContactChange(); 
	//void			OnContactSetfocus(); 
	//void			OnContactKillfocus(); 
	int			OnContactCheckValue(); 
	//void			OnTaxcodeChange(); 
	//void			OnTaxcodeSetfocus(); 
	//void			OnTaxcodeKillfocus(); 
	int			OnTaxcodeCheckValue(); 
	//void			OnAccountChange(); 
	//void			OnAccountSetfocus(); 
	//void			OnAccountKillfocus(); 
	int			OnAccountCheckValue(); 
	void			OnIsActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSExmCompanyDialog(CWnd *pParent, int nMode);
	~CHMSExmCompanyDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExmCompanyDialog(); 
	int OnEditHMSExmCompanyDialog(); 
	int OnDeleteHMSExmCompanyDialog(); 
	int OnSaveHMSExmCompanyDialog(); 
	int OnCancelHMSExmCompanyDialog(); 
	int OnHMSExmCompanyDialogListLoadData(); 
};
#endif
