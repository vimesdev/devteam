#ifndef APORDERINVOICE_H
#define APORDERINVOICE_H

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
class CPurchaseOrderInvoice : public CGuiView{
protected:
public:
	CGuiLabel		m_wndPaymentMethodLabel;
	CGuiComboBox	m_wndPaymentMethod;
	CGuiLabel		m_wndPaymentTermsLabel;
	CGuiComboBox	m_wndPaymentTerms;
	CGuiLabel		m_wndDueDateLabel;
	CGuiDateCtrl	m_wndDueDate;
	CGuiLabel		m_wndNumberOfPaymentsLabel;
	CGuiNumberCtrl	m_wndNumberOfPayments;
	CGuiLabel		m_wndPaymentDiscountLabel;
	CGuiNumberCtrl	m_wndPaymentDiscount;
	CGuiLabel		m_wndExpectedAmountLabel;
	CGuiNumberCtrl	m_wndExpectedAmount;
	CGuiLabel		m_wndPaidLabel;
	CGuiNumberCtrl	m_wndPaid;
	CGuiLabel		m_wndOutstandingLabel;
	CGuiTextCtrl	m_wndOutstanding;
	CString	m_szPaymentMethodKey;
	CString	m_szPaymentTermsKey;
	CString	m_szDueDate;
	long	m_nNumberOfPayments;
	long	m_nPaymentDiscount;
	long	m_nExpectedAmount;
	long	m_nPaid;
	CString	m_szOutstanding;
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
	//void			OnNumberOfPaymentsChange(); 
	//void			OnNumberOfPaymentsSetfocus(); 
	//void			OnNumberOfPaymentsKillfocus(); 
	int			OnNumberOfPaymentsCheckValue(); 
	//void			OnPaymentDiscountChange(); 
	//void			OnPaymentDiscountSetfocus(); 
	//void			OnPaymentDiscountKillfocus(); 
	int			OnPaymentDiscountCheckValue(); 
	//void			OnExpectedAmountChange(); 
	//void			OnExpectedAmountSetfocus(); 
	//void			OnExpectedAmountKillfocus(); 
	int			OnExpectedAmountCheckValue(); 
	//void			OnPaidChange(); 
	//void			OnPaidSetfocus(); 
	//void			OnPaidKillfocus(); 
	int			OnPaidCheckValue(); 
	//void			OnOutstandingChange(); 
	//void			OnOutstandingSetfocus(); 
	//void			OnOutstandingKillfocus(); 
	int			OnOutstandingCheckValue(); 
	CPurchaseOrderInvoice();
	~CPurchaseOrderInvoice();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseOrderInvoice(); 
	int OnEditPurchaseOrderInvoice(); 
	int OnDeletePurchaseOrderInvoice(); 
	int OnSavePurchaseOrderInvoice(); 
	int OnCancelPurchaseOrderInvoice(); 
	int OnPurchaseOrderInvoiceListLoadData(); 
};
#endif
