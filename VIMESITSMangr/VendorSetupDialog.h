#ifndef VENDORSETUPDIALOG_H
#define VENDORSETUPDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CVendorSetupDialog : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndVendorIDLabel;
	CGuiTextCtrl	m_wndVendorID;
	CGuiLabel		m_wndVendorNameLabel;
	CGuiTextCtrl	m_wndVendorName;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndTelephoneLabel;
	CGuiTextCtrl	m_wndTelephone;
	CGuiLabel		m_wndVendorGroupLabel;
	CGuiComboBox	m_wndVendorGroup;
	CGuiLabel		m_wndBankAccountLabel;
	CGuiTextCtrl	m_wndBankAccount;
	CGuiLabel		m_wndFaxLabel;
	CGuiTextCtrl	m_wndFax;
	CGuiLabel		m_wndContactLabel;
	CGuiTextCtrl	m_wndContact;
	CGuiLabel		m_wndEmailLabel;
	CGuiTextCtrl	m_wndEmail;
	CGuiLabel		m_wndWebsiteLabel;
	CGuiTextCtrl	m_wndWebsite;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szVendorID;
	CString	m_szVendorName;
	CString	m_szAddress;
	CString	m_szTelephone;
	CString	m_szVendorGroupKey;
	CString	m_szBankAccount;
	CString	m_szFax;
	CString	m_szContact;
	CString	m_szEmail;
	CString	m_szWebsite;
	int m_nIndex;
	CDbfMap	m_fam_vendorTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnVendorIDChange(); 
	//void			OnVendorIDSetfocus(); 
	//void			OnVendorIDKillfocus(); 
	int			OnVendorIDCheckValue(); 
	//void			OnVendorNameChange(); 
	//void			OnVendorNameSetfocus(); 
	//void			OnVendorNameKillfocus(); 
	int			OnVendorNameCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnTelephoneChange(); 
	//void			OnTelephoneSetfocus(); 
	//void			OnTelephoneKillfocus(); 
	int			OnTelephoneCheckValue(); 
	void			OnVendorGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVendorGroupSelendok(); 
	//void			OnVendorGroupSetfocus(); 
	//void			OnVendorGroupKillfocus(); 
	long			OnVendorGroupLoadData(); 
	void			OnVendorGroupAddNew(); 
	//void			OnBankAccountChange(); 
	//void			OnBankAccountSetfocus(); 
	//void			OnBankAccountKillfocus(); 
	int			OnBankAccountCheckValue(); 
	//void			OnFaxChange(); 
	//void			OnFaxSetfocus(); 
	//void			OnFaxKillfocus(); 
	int			OnFaxCheckValue(); 
	//void			OnContactChange(); 
	//void			OnContactSetfocus(); 
	//void			OnContactKillfocus(); 
	int			OnContactCheckValue(); 
	//void			OnEmailChange(); 
	//void			OnEmailSetfocus(); 
	//void			OnEmailKillfocus(); 
	int			OnEmailCheckValue(); 
	//void			OnWebsiteChange(); 
	//void			OnWebsiteSetfocus(); 
	//void			OnWebsiteKillfocus(); 
	int			OnWebsiteCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	void			SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex);
	CVendorSetupDialog(CWnd *pParent);
	~CVendorSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddVendorSetupDialog(); 
	int OnEditVendorSetupDialog(); 
	int OnDeleteVendorSetupDialog(); 
	int OnSaveVendorSetupDialog(); 
	int OnCancelVendorSetupDialog(); 
	int OnVendorSetupDialogListLoadData(); 
};
#endif
