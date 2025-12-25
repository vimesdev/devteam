#ifndef ADBUSINESSPARTNERDETAIL_H
#define ADBUSINESSPARTNERDETAIL_H

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
class CAdBusinessPartnerDetail : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndBankAccountInformation;
	CGuiLabel		m_wndDebitLimitLabel;
	CGuiNumberCtrl	m_wndDebitLimit;
	CGuiLabel		m_wndDeadLineLabel;
	CGuiGroupBox	m_wndTerms;
	CGuiNumberCtrl	m_wndDeadLine;
	CGuiLabel		m_wndDeliveryMethodLabel;
	CGuiComboBox	m_wndDeliveryMethod;
	CGuiLabel		m_wndDeliveryTermsLabel;
	CGuiComboBox	m_wndDeliveryTerms;
	CGuiLabel		m_wndPaymentMethodLabel;
	CGuiComboBox	m_wndPaymentMethod;
	CGuiLabel		m_wndPaymentTermsLabel;
	CGuiComboBox	m_wndPaymentTerms;

	long	m_nDebitLimit;
	long	m_nDeadLine;
	CString	m_szPartnerID;
	CString	m_szDeliveryMethodKey;
	CString	m_szDeliveryTermsKey;
	CString	m_szPaymentMethodKey;
	CString	m_szPaymentTermsKey;
	CString	m_szAccountName;
	CString	m_szAccountNumber;
	CString	m_szBranch;
	CDbfMap	m_ad_partnerTbl;
	//void			OnDebitLimitChange(); 
	//void			OnDebitLimitSetfocus(); 
	//void			OnDebitLimitKillfocus(); 
	int			OnDebitLimitCheckValue(); 
	//void			OnDeadLineChange(); 
	//void			OnDeadLineSetfocus(); 
	//void			OnDeadLineKillfocus(); 
	int			OnDeadLineCheckValue(); 
	void			OnDeliveryMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeliveryMethodSelendok(); 
	//void			OnDeliveryMethodSetfocus(); 
	//void			OnDeliveryMethodKillfocus(); 
	long			OnDeliveryMethodLoadData(); 
	//void			OnDeliveryMethodAddNew(); 
	void			OnDeliveryTermsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeliveryTermsSelendok(); 
	//void			OnDeliveryTermsSetfocus(); 
	//void			OnDeliveryTermsKillfocus(); 
	long			OnDeliveryTermsLoadData(); 
	//void			OnDeliveryTermsAddNew(); 
	void			OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentMethodSelendok(); 
	//void			OnPaymentMethodSetfocus(); 
	//void			OnPaymentMethodKillfocus(); 
	long			OnPaymentMethodLoadData(); 
	//void			OnPaymentMethodAddNew(); 
	void			OnPaymentTermsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentTermsSelendok(); 
	//void			OnPaymentTermsSetfocus(); 
	//void			OnPaymentTermsKillfocus(); 
	long			OnPaymentTermsLoadData(); 
	//void			OnPaymentTermsAddNew(); 
	//void			OnAccountNameChange(); 
	//void			OnAccountNameSetfocus(); 
	//void			OnAccountNameKillfocus(); 

	CAdBusinessPartnerDetail();
	~CAdBusinessPartnerDetail();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdBusinessPartnerDetail(); 
	int OnEditAdBusinessPartnerDetail(); 
	int OnDeleteAdBusinessPartnerDetail(); 
	int OnSaveAdBusinessPartnerDetail(); 
	int OnCancelAdBusinessPartnerDetail(); 
	int OnAdBusinessPartnerDetailListLoadData(); 
};
#endif
