#ifndef HMSPAYMENTINVOICEDIALOG2_H
#define HMSPAYMENTINVOICEDIALOG2_H

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
class CHMSPaymentInvoiceDialog2 : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGeneralCost;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndInsurancePaidLabel;
	CGuiNumberCtrl	m_wndInsurancePaid;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscountPaid;
	CGuiLabel		m_wndAdvanceLabel;
	CGuiNumberCtrl	m_wndAdvance;
	CGuiCheckBox	m_wndAdvPayment;
	CGuiLabel		m_wndPayableLabel;
	CGuiNumberCtrl	m_wndPayable;
	CGuiLabel		m_wndRefundLabel;
	CGuiNumberCtrl	m_wndRefund;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndInvoiceNoLabel;
	CGuiNumberCtrl	m_wndInvoiceNo;
	CGuiLabel		m_wndInvoiceDateLabel;
	CGuiDateCtrl	m_wndInvoiceDate;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiComboBox	m_wndDescription;
	CGuiButton		m_wndPayment;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndDifferencePaidFilter;
	CGuiCheckBox	m_wndPrintDischargePayment;
	long	m_nTotalCost;
	long	m_nInsurancePaid;
	long	m_nDiscountPaid;
	long	m_nAdvance;
	BOOL	m_bAdvPayment;
	long	m_nPayable;
	long	m_nRefund;
	CString	m_szSerialNo;
	long	m_nInvoiceNo;
	CString	m_szInvoiceDate;
	CString	m_szDescriptionKey;
	BOOL	m_bDifferencePaidFilter;
	BOOL	m_bPrintDischargePayment;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnTotalCostChange(); 
	//void			OnTotalCostSetfocus(); 
	//void			OnTotalCostKillfocus(); 
	int			OnTotalCostCheckValue(); 
	//void			OnInsurancePaidChange(); 
	//void			OnInsurancePaidSetfocus(); 
	//void			OnInsurancePaidKillfocus(); 
	int			OnInsurancePaidCheckValue(); 
	//void			OnDiscountPaidChange(); 
	//void			OnDiscountPaidSetfocus(); 
	//void			OnDiscountPaidKillfocus(); 
	int			OnDiscountPaidCheckValue(); 
	//void			OnAdvanceChange(); 
	//void			OnAdvanceSetfocus(); 
	//void			OnAdvanceKillfocus(); 
	int			OnAdvanceCheckValue(); 
	void			OnAdvPaymentSelect(); 
	//void			OnPayableChange(); 
	//void			OnPayableSetfocus(); 
	//void			OnPayableKillfocus(); 
	int			OnPayableCheckValue(); 
	//void			OnRefundChange(); 
	//void			OnRefundSetfocus(); 
	//void			OnRefundKillfocus(); 
	int			OnRefundCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue(); 
	//void			OnInvoiceDateChange(); 
	//void			OnInvoiceDateSetfocus(); 
	//void			OnInvoiceDateKillfocus(); 
	int			OnInvoiceDateCheckValue(); 
	void			OnDescriptionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDescriptionSelendok(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	long			OnDescriptionLoadData(); 
	void			OnDescriptionAddNew(); 
	void			OnPaymentSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	void			OnDifferencePaidFilterSelect(); 
	void			OnPrintDischargePaymentSelect(); 
	CHMSPaymentInvoiceDialog2(CWnd *pParent);
	~CHMSPaymentInvoiceDialog2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPaymentInvoiceDialog2(); 
	int OnEditHMSPaymentInvoiceDialog2(); 
	int OnDeleteHMSPaymentInvoiceDialog2(); 
	int OnSaveHMSPaymentInvoiceDialog2(); 
	int OnCancelHMSPaymentInvoiceDialog2(); 
	int OnHMSPaymentInvoiceDialog2ListLoadData(); 
};
#endif
