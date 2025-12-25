#ifndef FABANKSTATEMENTGENERALVIEW_H
#define FABANKSTATEMENTGENERALVIEW_H

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
class CFABankStatementGeneralView : public CGuiView{
protected:
public:
	CString		m_szDocType;

	CGuiGroupBox	m_wndVoucherInformation;
	CGuiGroupBox	m_wndOwnerBankInformation;
	CGuiGroupBox	m_wndPartnerBankInformation;
	CGuiLabel		m_wndVoucherNoLabel;
	CGuiTextCtrl	m_wndVoucherNo;
	CGuiLabel		m_wndVoucherDateLabel;
	CGuiDateCtrl	m_wndVoucherDate;
	CGuiLabel		m_wndAccountingDateLabel;
	CGuiDateCtrl	m_wndAccountingDate;
	CGuiLabel		m_wndDocumentLabel;
	CGuiTextCtrl	m_wndDocument;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiTextCtrl	m_wndObjectName;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPartnerBankAccountLabel;
	CGuiTextCtrl	m_wndPartnerBankAccount;
	CGuiTextCtrl	m_wndPartnerBankName;
	CGuiLabel		m_wndOwnerBankAccountLabel;
	CGuiComboBox	m_wndOwnerBankAccount;
	CGuiTextCtrl	m_wndOwnerBankName;

	CGuiLabel		m_wndOwnerBank2AccountLabel;
	CGuiComboBox	m_wndOwnerBank2Account;
	CGuiTextCtrl	m_wndOwnerBank2Name;


	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CString	m_szVoucherNo;
	CString	m_szVoucherDate;
	CString	m_szAccountingDate;
	CString	m_szDocument;
	CString	m_szObjectKey;
	CString	m_szObjectName;
	CString	m_szAddress;
	CString	m_szPartnerBankAccount;
	CString	m_szPartnerBankName;
	CString	m_szOwnerBankAccount;
	CString	m_szOwnerBankName;
	CString	m_szOwnerBank2Account;
	CString	m_szOwnerBank2Name;

	CString	m_szReason;
	CString	m_szIDCard;
	CString	m_szIssueDate;
	CString	m_szIssuePlace;
	//
	//void			OnVoucherNoChange(); 
	//void			OnVoucherNoSetfocus(); 
	//void			OnVoucherNoKillfocus(); 
	int			OnVoucherNoCheckValue(); 
	//void			OnVoucherDateChange(); 
	//void			OnVoucherDateSetfocus(); 
	//void			OnVoucherDateKillfocus(); 
	int			OnVoucherDateCheckValue(); 
	//void			OnAccountingDateChange(); 
	//void			OnAccountingDateSetfocus(); 
	//void			OnAccountingDateKillfocus(); 
	int			OnAccountingDateCheckValue(); 
	//void			OnDocumentChange(); 
	//void			OnDocumentSetfocus(); 
	//void			OnDocumentKillfocus(); 
	int			OnDocumentCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	//void			OnObjectNameChange(); 
	//void			OnObjectNameSetfocus(); 
	//void			OnObjectNameKillfocus(); 
	int			OnObjectNameCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnPartnerBankAccountChange(); 
	//void			OnPartnerBankAccountSetfocus(); 
	//void			OnPartnerBankAccountKillfocus(); 
	int			OnPartnerBankAccountCheckValue(); 
	//void			OnPartnerBankNameChange(); 
	//void			OnPartnerBankNameSetfocus(); 
	//void			OnPartnerBankNameKillfocus(); 
	int			OnPartnerBankNameCheckValue(); 
	void			OnOwnerBankAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOwnerBankAccountSelendok(); 
	//void			OnOwnerBankAccountSetfocus(); 
	//void			OnOwnerBankAccountKillfocus(); 
	long			OnOwnerBankAccountLoadData(); 
	//void			OnOwnerBankAccountAddNew(); 
	//void			OnOwnerBankNameChange(); 
	//void			OnOwnerBankNameSetfocus(); 
	//void			OnOwnerBankNameKillfocus(); 
	int			OnOwnerBankNameCheckValue(); 
	
	
	void			OnOwnerBank2AccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOwnerBank2AccountSelendok(); 
	//void			OnOwnerBank2AccountSetfocus(); 
	//void			OnOwnerBank2AccountKillfocus(); 
	long			OnOwnerBank2AccountLoadData(); 
	//void			OnOwnerBank2AccountAddNew(); 
	//void			OnOwnerBank2NameChange(); 
	//void			OnOwnerBank2NameSetfocus(); 
	//void			OnOwnerBank2NameKillfocus(); 
	int			OnOwnerBank2NameCheckValue(); 

	
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	void		OnAddObjectClick();

	CFABankStatementGeneralView();
	~CFABankStatementGeneralView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFABankStatementGeneralView(); 
	int OnEditFABankStatementGeneralView(); 
	int OnDeleteFABankStatementGeneralView(); 
	int OnSaveFABankStatementGeneralView(); 
	int OnCancelFABankStatementGeneralView(); 
	int OnFABankStatementGeneralViewListLoadData(); 

	
	void	GetData(CRecord* rs);
	void	SetData(CDbfMap* dbf);

};
#endif
