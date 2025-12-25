#ifndef HMSPAYMENTRECEIPTDIALOG_H
#define HMSPAYMENTRECEIPTDIALOG_H

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
#include "HMSBankPaymentInfoDialog.h"
class CHMSPaymentReceiptDialog : public CGuiDialog
{
protected:
	BANKPAYMENTINFO	m_bankPaymentInfo;
public:
	

	long	m_nDocumentNo;
	long	m_nInvoiceNo;
	CString		m_szDepartments;
	CString		m_szFeeType;
	CString		m_szStatus;
	CString		m_szDocStatus;
	CString	    m_szOrgID;
	CString		m_szMaSoThue;


	CGuiGroupBox	m_wndGeneralCost;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndReceiptDateLabel;
	CGuiDateCtrl	m_wndReceiptDate;
	CGuiLabel		m_wndStaffLabel;
	CGuiTextCtrl	m_wndStaff;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndReasonLabel;
	CGuiComboBox	m_wndReason;
	CGuiLabel		m_wndPaymentMethodLabel;
	CGuiComboBox	m_wndPaymentMethod;

	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndTotalDepositLabel;
	CGuiNumberCtrl	m_wndTotalDeposit;
	CGuiLabel		m_wndTotalDiscountLabel;
	CGuiNumberCtrl	m_wndTotalDiscount;
	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;
	CGuiLabel		m_wndPaymentLabel;
	CGuiNumberCtrl	m_wndPayment;
	CGuiLabel		m_wndRefundLabel;
	CGuiNumberCtrl	m_wndRefund;
	CGuiButton		m_wndCreateRefund;

	CGuiRadioButton	m_wndExamFees;
	CGuiRadioButton	m_wndParaclinicalFees;
	CGuiRadioButton	m_wndDrugFees;
	CGuiRadioButton	m_wndAllFees;
	CGuiCheckBox	m_wndNotIncDrug;
	CGuiRadioButton	m_wndOperationFees;
	CGuiCheckBox	m_wndApproveAllInvoiceno;
	CGuiCheckBox	m_wndOutPackageList;

	CGuiButton		m_wndApproval;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintReceipt;
	CGuiButton		m_wndClose;
	CString	m_szReceiptDate;
	CString	m_szStaff;
	CString	m_szSerialNo;
	CString	m_szLocked;
	long	m_nReceiptNo;
	int		m_nFeeType;
	CString	m_szReasonKey;
	CString	m_szPaymentMethodKey;
	double	m_nTotalAmount;
	double	m_nTotalDeposit;
	double	m_nTotalDiscount;
	double	m_nTotalPayable;
	long	m_nPayment;
	double	m_nRefund;
	double	m_nTtlCost;

	BOOL	m_bNotIncDrug;
	BOOL	m_bApproveAllInvoiceno;
	BOOL	m_bOutPackageList;
	int	m_nOperationFees;

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListReturnItem(); 
	//void			OnReceiptDateChange(); 
	//void			OnReceiptDateSetfocus(); 
	//void			OnReceiptDateKillfocus(); 
	int			OnReceiptDateCheckValue(); 
	//void			OnStaffChange(); 
	//void			OnStaffSetfocus(); 
	//void			OnStaffKillfocus(); 
	int			OnStaffCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue(); 
	void			OnReasonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReasonSelendok(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	long			OnReasonLoadData(); 
	void			OnReasonAddNew(); 
	void			OnPaymentMethodLabelSelect();
	void			OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentMethodSelendok(); 
	//void			OnPaymentMethodSetfocus(); 
	//void			OnPaymentMethodKillfocus(); 
	long			OnPaymentMethodLoadData(); 
	void			OnPaymentMethodAddNew(); 

	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	//void			OnTotalDepositChange(); 
	//void			OnTotalDepositSetfocus(); 
	//void			OnTotalDepositKillfocus(); 
	int			OnTotalDepositCheckValue(); 
	//void			OnTotalDiscountChange(); 
	//void			OnTotalDiscountSetfocus(); 
	//void			OnTotalDiscountKillfocus(); 
	int			OnTotalDiscountCheckValue(); 
	//void			OnTotalPayableChange(); 
	//void			OnTotalPayableSetfocus(); 
	//void			OnTotalPayableKillfocus(); 
	int			OnTotalPayableCheckValue(); 
	//void			OnPaymentChange(); 
	//void			OnPaymentSetfocus(); 
	//void			OnPaymentKillfocus(); 
	int			OnPaymentCheckValue(); 
	//void			OnRefundChange(); 
	//void			OnRefundSetfocus(); 
	//void			OnRefundKillfocus(); 
	int			OnRefundCheckValue(); 
	int			OnPrintElectronicInvoice();
	void			OnExamFeesSelect(); 
	void			OnParaclinicalFeesSelect(); 
	void			OnDrugFeesSelect(); 
	void			OnAllFeesSelect(); 
	void			OnNotIncDrugSelect();
	void			OnOperationFeesSelect();
	void			OnOutPackageListSelect(); 
	void			OnApprovalSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintReceiptSelect(); 
	void			OnCloseSelect(); 
	void			OnCreateRefundSelect();
	void			OnCreateRefundSelectEX();
	void	OnCreateDiscountVoucher();
	void	OnCreateRefundVoucher();
	void	OnCreateRefundVoucherEX();
	void	OnCreateRefundServicePkgSelect();
	void	OnCreateRefundServicePkgVoucher();
	void    OnChuyennguonngansachTTbenhnhancovid19Select();
	void	OnChuyennguonngansachTTbenhnhanquanchitietSelect();

	CHMSPaymentReceiptDialog(CWnd *pParent);
	~CHMSPaymentReceiptDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPaymentReceiptDialog(); 
	int OnEditHMSPaymentReceiptDialog(); 
	int OnDeleteHMSPaymentReceiptDialog(); 
	int OnSaveHMSPaymentReceiptDialog(); 
	int OnCancelHMSPaymentReceiptDialog(); 
	int OnHMSPaymentReceiptDialogListLoadData(); 
	void			OnApproveAllInvoicenoSelect();
	void	OnUnUploadtoInsGate();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
