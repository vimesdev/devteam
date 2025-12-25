#ifndef HMSPaymentInvoiceDialog2_H
#define HMSPaymentInvoiceDialog2_H

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
	long	m_nDocumentNo;
	long	m_nInvoiceNo;
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
	CGuiLabel		m_wndPatientPaidLabel;
	CGuiNumberCtrl	m_wndPatientPaid;
	CGuiLabel		m_wndUnpaidLabel;
	CGuiNumberCtrl	m_wndUnpaid;
	CGuiLabel		m_wndPayableLabel;
	CGuiNumberCtrl	m_wndPayable;
	CGuiLabel		m_wndRefundLabel;
	CGuiNumberCtrl	m_wndRefund;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiComboBox	m_wndSerialNo;
	CGuiLabel		m_wndRecvNoLabel;
	CGuiNumberCtrl	m_wndRecvNo;
	CGuiLabel		m_wndReceiveDateLabel;
	CGuiDateCtrl	m_wndReceiveDate;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiComboBox	m_wndDescription;
	CGuiCheckBox	m_wndOnlyDifferencePaid;
	CGuiCheckBox	m_wndPrintDischargePayment;

	CGuiButton		m_wndPayment;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	double	m_nTotalCost;
	double	m_nInsurancePaid;
	double	m_nDiscountPaid;
	double	m_nAdvance;
	BOOL	m_bAdvPayment;
	double	m_nPatientPaid;
	double	m_nUnpaid;
	double	m_nPayable;
	double	m_nRefund;
	CString	m_szSerial;
	CString	m_szSerialNo;
	long	 m_nBookNo;
	long	m_nRecvNo;
	CString	m_szReceiveDate;
	CString	m_szDescriptionKey;
	CString	m_szDepartments;
	BOOL	m_bOnlyDifferencePaid;
	BOOL	m_bPrintDischargePayment;

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnInsuranceUnpaidItem(); 
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
	//void			OnPatientPaidChange(); 
	//void			OnPatientPaidSetfocus(); 
	//void			OnPatientPaidKillfocus(); 
	int			OnPatientPaidCheckValue(); 
	//void			OnUnpaidChange(); 
	//void			OnUnpaidSetfocus(); 
	//void			OnUnpaidKillfocus(); 
	int			OnUnpaidCheckValue(); 
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
	int			OnSerialNoLoadData(); 
	void		OnSerialNoSelendok(); 
	int			OnSerialNoCheckValue(); 
	//void			OnRecvNoChange(); 
	//void			OnRecvNoSetfocus(); 
	//void			OnRecvNoKillfocus(); 
	int			OnRecvNoCheckValue(); 
	//void			OnReceiveDateChange(); 
	//void			OnReceiveDateSetfocus(); 
	//void			OnReceiveDateKillfocus(); 
	int			OnReceiveDateCheckValue(); 
	void			OnDescriptionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDescriptionSelendok(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	long			OnDescriptionLoadData(); 
	void			OnDescriptionAddNew(); 
	void			OnOnlyDifferencePaidSelect(); 
	void			OnPrintDischargePaymentSelect(); 
	void			OnPaymentSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	bool			OnPaymentFee(); 
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
	void RecalcTotal();
};
#endif
