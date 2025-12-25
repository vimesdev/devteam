#ifndef ADCOMPANYINFORMATION_H
#define ADCOMPANYINFORMATION_H

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
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CAdCompanyInformation : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndCommunication;
	CGuiGroupBox	m_wndCompanyInformation;
	CGuiGroupBox	m_wndBankInformation;
	CGuiLabel		m_wndCompanyIDLabel;
	CGuiTextCtrl	m_wndCompanyID;
	CGuiLabel		m_wndAbbreviatedNameLabel;
	CGuiTextCtrl	m_wndAbbreviatedName;
	CGuiLabel		m_wndCompanyNameLabel;
	CGuiTextCtrl	m_wndCompanyName;
	CGuiLabel		m_wndEnglishNameLabel;
	CGuiTextCtrl	m_wndEnglishName;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndAddress2Label;
	CGuiTextCtrl	m_wndAddress2;
	CGuiLabel		m_wndProvinceLabel;
	CGuiComboBox	m_wndProvince;
	CGuiLabel		m_wndDistrictLabel;
	CGuiComboBox	m_wndDistrict;
	CGuiLabel		m_wndVATRegistrationNoLabel;
	CGuiTextCtrl	m_wndVATRegistrationNo;
	CGuiLabel		m_wndLogoLabel;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndFaxLabel;
	CGuiTextCtrl	m_wndFax;
	CGuiLabel		m_wndEmailLabel;
	CGuiTextCtrl	m_wndEmail;
	CGuiLabel		m_wndWebsiteLabel;
	CGuiTextCtrl	m_wndWebsite;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiListCtrl	m_wndBankList;
	CString	m_szCompanyID;
	CString	m_szAbbreviatedName;
	CString	m_szCompanyName;
	CString	m_szEnglishName;
	CString	m_szAddress;
	CString	m_szAddress2;
	CString	m_szProvinceKey;
	CString	m_szDistrictKey;
	CString	m_szVATRegistrationNo;
	CString	m_szPhone;
	CString	m_szFax;
	CString	m_szEmail;
	CString	m_szWebsite;
	CDbfMap	m_ad_companyTbl;
	//void			OnCompanyIDChange(); 
	//void			OnCompanyIDSetfocus(); 
	//void			OnCompanyIDKillfocus(); 
	int			OnCompanyIDCheckValue(); 
	//void			OnAbbreviatedNameChange(); 
	//void			OnAbbreviatedNameSetfocus(); 
	//void			OnAbbreviatedNameKillfocus(); 
	int			OnAbbreviatedNameCheckValue(); 
	//void			OnCompanyNameChange(); 
	//void			OnCompanyNameSetfocus(); 
	//void			OnCompanyNameKillfocus(); 
	int			OnCompanyNameCheckValue(); 
	//void			OnEnglishNameChange(); 
	//void			OnEnglishNameSetfocus(); 
	//void			OnEnglishNameKillfocus(); 
	int			OnEnglishNameCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnAddress2Change(); 
	//void			OnAddress2Setfocus(); 
	//void			OnAddress2Killfocus(); 
	int			OnAddress2CheckValue(); 
	void			OnProvinceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvinceSelendok(); 
	//void			OnProvinceSetfocus(); 
	//void			OnProvinceKillfocus(); 
	long			OnProvinceLoadData(); 
	//void			OnProvinceAddNew(); 
	void			OnDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistrictSelendok(); 
	//void			OnDistrictSetfocus(); 
	//void			OnDistrictKillfocus(); 
	long			OnDistrictLoadData(); 
	//void			OnDistrictAddNew(); 
	//void			OnVATRegistrationNoChange(); 
	//void			OnVATRegistrationNoSetfocus(); 
	//void			OnVATRegistrationNoKillfocus(); 
	int			OnVATRegistrationNoCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnFaxChange(); 
	//void			OnFaxSetfocus(); 
	//void			OnFaxKillfocus(); 
	int			OnFaxCheckValue(); 
	//void			OnEmailChange(); 
	//void			OnEmailSetfocus(); 
	//void			OnEmailKillfocus(); 
	int			OnEmailCheckValue(); 
	//void			OnWebsiteChange(); 
	//void			OnWebsiteSetfocus(); 
	//void			OnWebsiteKillfocus(); 
	int			OnWebsiteCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	long			OnBankListLoadData(); 
	void			OnBankListSelectChange(int nOldItem, int nNewItem); 
	void			OnBankListDblClick(); 
	int			OnBankListAddItem(); 
	int			OnBankListDeleteItem(); 
	CAdCompanyInformation();
	~CAdCompanyInformation();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdCompanyInformation(); 
	int OnEditAdCompanyInformation(); 
	int OnDeleteAdCompanyInformation(); 
	int OnSaveAdCompanyInformation(); 
	int OnCancelAdCompanyInformation(); 
	int OnAdCompanyInformationListLoadData(); 
};
#endif
