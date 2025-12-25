#ifndef HMSAPPROVALRECEIPTDIALOG_H
#define HMSAPPROVALRECEIPTDIALOG_H

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
class AFX_EXT_CLASS CHMSApprovalReceiptDialog : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndGeneralCost;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndReceiptDateLabel;
	CGuiDateCtrl	m_wndReceiptDate;
	CGuiLabel		m_wndStaffLabel;
	CGuiTextCtrl	m_wndStaff;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndPaymentMethodLabel;
	CGuiComboBox	m_wndPaymentMethod;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndTotalDepositLabel;
	CGuiNumberCtrl	m_wndTotalDeposit;
	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;
	CGuiLabel		m_wndPaymentLabel;
	CGuiNumberCtrl	m_wndPayment;
	CGuiLabel		m_wndRefundLabel;
	CGuiNumberCtrl	m_wndRefund;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintReceipt;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndInvoiceList;
	CGuiCheckBox	m_wndNotCreateOrderPaid;
	CString	m_szReceiptDate;
	CString	m_szStaff;
	long	m_nReceiptNo;
	long	m_nDocumentNo;
	long	m_nInvoiceNo;
	long	m_nDrugOrderNo;
	long	m_nbatch_id;
	long	m_nSaleOrderID;
	long	m_nDocumentNo2;

	CString	m_szPaymentMethodKey;
	CString		m_szDepartments;
	CString		m_szFeeType;
	CString		m_szStatus;
	CString		m_szDocStatus;
	CString		m_szReceiptDeptID;
	CString		m_szReasonKey;
	CString	m_szSerialNo;
	CString	m_szLocked;
	CString m_szIsRetailOrder;

	double	m_nTotalAmount;
	double	m_nTotalDeposit;
	double	m_nTotalDiscount;
	double	m_nTotalPayable;
	long	m_nPayment;
	double	m_nRefund;
	double	m_nTtlCost;

	BOOL	m_bNotIncDrug;
	int	m_nOperationFees;
	BOOL	m_bNotCreateOrderPaid;

	long			OnListLoadData();
	void			OnListSelectChange(int nOldItem, int nNewItem);
	void			OnListDblClick();
	int			OnListDeleteItem();
	//void			OnReceiptDateChange(); 
	//void			OnReceiptDateSetfocus(); 
	//void			OnReceiptDateKillfocus(); 
	int			OnReceiptDateCheckValue();
	//void			OnStaffChange(); 
	//void			OnStaffSetfocus(); 
	//void			OnStaffKillfocus(); 
	int			OnStaffCheckValue();
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue();
	void			OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnPaymentMethodSelendok();
	//void			OnPaymentMethodSetfocus(); 
	//void			OnPaymentMethodKillfocus(); 
	long			OnPaymentMethodLoadData();
	//void			OnPaymentMethodAddNew(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue();
	//void			OnTotalDepositChange(); 
	//void			OnTotalDepositSetfocus(); 
	//void			OnTotalDepositKillfocus(); 
	int			OnTotalDepositCheckValue();
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
	void			OnApprovalSelect();
	void			OnApprovalPacsSelect();
	void			OnApprovalHospitalFeeSelect();
	void			OnApprovalPMSelect();
	void			OnCancelSelect();
	void			OnPrintReceiptSelect();
	void			OnPrintPMReceiptSelect();
	void			OnCloseSelect();
	long			OnInvoiceListLoadData();
	void			OnInvoiceListSelectChange(int nOldItem, int nNewItem);
	void			OnInvoiceListDblClick();
	int				OnInvoiceListDeleteItem();
	void			OnNotCreateOrderPaidSelect();
	CHMSApprovalReceiptDialog(CWnd* pParent);
	~CHMSApprovalReceiptDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSApprovalReceiptDialog();
	int OnEditHMSApprovalReceiptDialog();
	int OnDeleteHMSApprovalReceiptDialog();
	int OnSaveHMSApprovalReceiptDialog();
	int OnCancelHMSApprovalReceiptDialog();
	int OnHMSApprovalReceiptDialogListLoadData();
};
#endif