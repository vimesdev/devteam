#ifndef APINVOICEEXTRA_H
#define APINVOICEEXTRA_H

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
class CPurchaseInvoiceExtra : public CGuiView{
protected:
public:
	CGuiLabel		m_wndPaymentMethodLabel;
	CGuiComboBox	m_wndPaymentMethod;
	CGuiLabel		m_wndPaymentTermsLabel;
	CGuiComboBox	m_wndPaymentTerms;
	CGuiLabel		m_wndDueDateLabel;
	CGuiGroupBox	m_wndPaymentInfo;
	CGuiGroupBox	m_wndDeliveryInfo;
	CGuiDateCtrl	m_wndDueDate;
	CGuiLabel		m_wndBillToLabel;
	CGuiTextCtrl	m_wndBillTo;
	CGuiLabel		m_wndDeliveryMethodLabel;
	CGuiComboBox	m_wndDeliveryMethod;
	CGuiLabel		m_wndDeliveryTermsLabel;
	CGuiComboBox	m_wndDeliveryTerms;
	CGuiLabel		m_wndDeliveryDateLabel;
	CGuiDateCtrl	m_wndDeliveryDate;
	CGuiLabel		m_wndDeliveryAddressLabel;
	CGuiTextCtrl	m_wndDeliveryAddress;
	CString	m_szPaymentMethodKey;
	CString	m_szPaymentTermsKey;
	CString	m_szDueDate;
	CString	m_szBillTo;
	CString	m_szDeliveryMethodKey;
	CString	m_szDeliveryTermsKey;
	CString	m_szDeliveryDate;
	CString	m_szDeliveryAddress;
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
	//void			OnDueDateChange(); 
	//void			OnDueDateSetfocus(); 
	//void			OnDueDateKillfocus(); 
	int			OnDueDateCheckValue(); 
	//void			OnBillToChange(); 
	//void			OnBillToSetfocus(); 
	//void			OnBillToKillfocus(); 
	int			OnBillToCheckValue(); 
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
	//void			OnDeliveryDateChange(); 
	//void			OnDeliveryDateSetfocus(); 
	//void			OnDeliveryDateKillfocus(); 
	int			OnDeliveryDateCheckValue(); 
	//void			OnDeliveryAddressChange(); 
	//void			OnDeliveryAddressSetfocus(); 
	//void			OnDeliveryAddressKillfocus(); 
	int			OnDeliveryAddressCheckValue(); 
	CPurchaseInvoiceExtra();
	~CPurchaseInvoiceExtra();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseInvoiceExtra(); 
	int OnEditPurchaseInvoiceExtra(); 
	int OnDeletePurchaseInvoiceExtra(); 
	int OnSavePurchaseInvoiceExtra(); 
	int OnCancelPurchaseInvoiceExtra(); 
	int OnPurchaseInvoiceExtraListLoadData(); 
};
#endif
