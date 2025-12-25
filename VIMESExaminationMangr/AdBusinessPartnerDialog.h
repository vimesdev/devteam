#ifndef ADBUSINESSPARTNERDIALOG_H
#define ADBUSINESSPARTNERDIALOG_H

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
class CAdBusinessPartnerDialog : public CGuiDialog{
protected:
	CString m_szOldName;
	CString m_szOldStatus;
public:
	CGuiGroupBox	m_wndBankAccountInformation;
	CGuiLabel		m_wndPartnerTypeLabel;
	CGuiComboBox	m_wndPartnerType;
	CGuiLabel		m_wndPartnerCategoryLabel;
	CGuiGroupBox	m_wndBusinessPartnerInformation;
	CGuiComboBox	m_wndPartnerCategory;
	CGuiLabel		m_wndPartnerIDLabel;
	CGuiTextCtrl	m_wndPartnerID;
	CGuiLabel		m_wndVATRegistrationNumberLabel;
	CGuiTextCtrl	m_wndVATRegistrationNumber;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndTelephoneLabel;
	CGuiTextCtrl	m_wndTelephone;
	CGuiLabel		m_wndFaxLabel;
	CGuiTextCtrl	m_wndFax;
	CGuiLabel		m_wndEmailLabel;
	CGuiTextCtrl	m_wndEmail;
	CGuiLabel		m_wndWebsiteLabel;
	CGuiTextCtrl	m_wndWebsite;
	CGuiLabel		m_wndCitasCodeLabel;
	CGuiTextCtrl	m_wndCitasCode;
	CGuiLabel		m_wndAccountHolderLabel;
	CGuiTextCtrl	m_wndAccountHolder;
	CGuiLabel		m_wndFinancialCodeLabel;
	CGuiTextCtrl	m_wndFinancialCode;
	CGuiLabel		m_wndFinancialCode2Label;
	CGuiTextCtrl	m_wndFinancialCode2;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndAccountNumberLabel;
	CGuiTextCtrl	m_wndAccountNumber;
	CGuiLabel		m_wndBankNameLabel;
	CGuiComboBox	m_wndBankName;
	CGuiLabel		m_wndBranchLabel;
	CGuiTextCtrl	m_wndBranch;
	CGuiLabel		m_wndContractNoLabel;
	CGuiTextCtrl	m_wndContractNo;
	CGuiCheckBox	m_wndIsActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szPartnerTypeKey;
	CString	m_szPartnerCategoryKey;
	CString	m_szPartnerID;
	CString	m_szVATRegistrationNumber;
	CString	m_szName;
	CString	m_szAddress;
	CString	m_szTelephone;
	CString	m_szFax;
	CString	m_szEmail;
	CString	m_szWebsite;
	CString	m_szFinancialCode;
	CString	m_szFinancialCode2;
	CString	m_szCitasCode;
	CString m_szAccountHolder;
	CString	m_szDescription;
	CString	m_szAccountNumber;
	CString	m_szBankNameKey;
	CString	m_szBranch;
	CString m_szContractNo;
	BOOL	m_bIsActive;
	CDbfMap	m_ad_partnerTbl;

	void			OnPartnerTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPartnerTypeSelendok(); 
	//void			OnPartnerTypeSetfocus(); 
	//void			OnPartnerTypeKillfocus(); 
	long			OnPartnerTypeLoadData(); 
	//void			OnPartnerTypeAddNew(); 
	void			OnPartnerCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPartnerCategorySelendok(); 
	//void			OnPartnerCategorySetfocus(); 
	//void			OnPartnerCategoryKillfocus(); 
	long			OnPartnerCategoryLoadData(); 
	//void			OnPartnerCategoryAddNew(); 
	//void			OnPartnerIDChange(); 
	//void			OnPartnerIDSetfocus(); 
	//void			OnPartnerIDKillfocus(); 
	int			OnPartnerIDCheckValue(); 
	//void			OnVATRegistrationNumberChange(); 
	//void			OnVATRegistrationNumberSetfocus(); 
	//void			OnVATRegistrationNumberKillfocus(); 
	int			OnVATRegistrationNumberCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnTelephoneChange(); 
	//void			OnTelephoneSetfocus(); 
	//void			OnTelephoneKillfocus(); 
	int			OnTelephoneCheckValue(); 
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
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnAccountNumberChange(); 
	//void			OnAccountNumberSetfocus(); 
	//void			OnAccountNumberKillfocus(); 
	int			OnAccountNumberCheckValue(); 
	void			OnBankNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBankNameSelendok(); 
	//void			OnBankNameSetfocus(); 
	//void			OnBankNameKillfocus(); 
	long			OnBankNameLoadData(); 
	//void			OnBankNameAddNew(); 
	//void			OnBranchChange(); 
	//void			OnBranchSetfocus(); 
	//void			OnBranchKillfocus(); 
	int			OnBranchCheckValue(); 
	void			OnIsActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CAdBusinessPartnerDialog(CWnd *pParent, int nMode);
	~CAdBusinessPartnerDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdBusinessPartnerDialog(); 
	int OnEditAdBusinessPartnerDialog(); 
	int OnDeleteAdBusinessPartnerDialog(); 
	int OnSaveAdBusinessPartnerDialog(); 
	int OnCancelAdBusinessPartnerDialog(); 
	int OnAdBusinessPartnerDialogListLoadData(); 
};
#endif
