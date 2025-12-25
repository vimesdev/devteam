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
class CHMSPaymentReceiptDialog : public CGuiDialog{
protected:
public:
	BOOL	m_bAdvReceipt;
	long	m_nPID;
	long	m_nDocumentNo;
	long	m_nInvoiceNo;
	CString	m_szDepartments;
	bool	m_bRemission100;
	double	m_nAmount;

	CGuiGroupBox	m_wndGeneralCost;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndPatientPaidLabel;
	CGuiNumberCtrl	m_wndPatientPaid;
	CGuiLabel		m_wndReceiptDateLabel;
	CGuiDateTimeCtrl	m_wndReceiptDate;
	CGuiCheckBox	m_wndInsuranceUnpaidFilter;
	CGuiLabel		m_wndInsurancePaidLabel;
	CGuiNumberCtrl	m_wndInsurancePaid;
	CGuiLabel		m_wndDepositLabel;
	CGuiNumberCtrl	m_wndDeposit;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiCheckBox	m_wndAutoPrintDischarge;
	CGuiLabel		m_wndRemissionLabel;
	CGuiNumberCtrl	m_wndRemission;
	CGuiLabel		m_wndFreeLabel;
	CGuiNumberCtrl	m_wndFree;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiCheckBox	m_wndAutoPrintReceipt;
	CGuiLabel		m_wndDiffrencePaidLabel;
	CGuiNumberCtrl	m_wndDifferencePaid;
	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiButton		m_wndReasonButton;
	CGuiButton		m_wndPayment;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintReceipt;
	CGuiButton		m_wndPrintPaymentReceipt;
	CGuiButton		m_wndClose;
	double	m_nTotalCost;
	double	m_nPatientPaid;
	CString	m_szReceiptDate;
	double	m_nInsurancePaid;
	double	m_nDeposit;
	CString	m_szSerialNoKey;
	double	m_nRemission;
	double	m_nFree;
	long	m_nReceiptNo;
	long	m_nDifferencePaid;
	double	m_nTotalPayable;
	double	m_nRefund;
	CString	m_szReason;
	BOOL	m_bInsuranceUnpaidFilter;
	BOOL	m_bAutoPrintPaymentReceipt;
	BOOL	m_bAutoPrintReceipt;
	CString	m_szSerial;
	CString	m_szSerialNo;
	long	 m_nBookNo;


	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnTotalCostChange(); 
	//void			OnTotalCostSetfocus(); 
	//void			OnTotalCostKillfocus(); 
	int			OnTotalCostCheckValue(); 
	//void			OnPatientPaidChange(); 
	//void			OnPatientPaidSetfocus(); 
	//void			OnPatientPaidKillfocus(); 
	int			OnPatientPaidCheckValue(); 
	//void			OnReceiptDateChange(); 
	//void			OnReceiptDateSetfocus(); 
	//void			OnReceiptDateKillfocus(); 
	int			OnReceiptDateCheckValue(); 
	void			OnInsuranceUnpaidFilterSelect(); 
	//void			OnInsurancePaidChange(); 
	//void			OnInsurancePaidSetfocus(); 
	//void			OnInsurancePaidKillfocus(); 
	int			OnInsurancePaidCheckValue(); 
	//void			OnDepositChange(); 
	//void			OnDepositSetfocus(); 
	//void			OnDepositKillfocus(); 
	int			OnDepositCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	void			OnAutoPrintDischargeSelect(); 
	//void			OnRemissionChange(); 
	//void			OnRemissionSetfocus(); 
	//void			OnRemissionKillfocus(); 
	int			OnRemissionCheckValue(); 
	//void			OnFreeChange(); 
	//void			OnFreeSetfocus(); 
	//void			OnFreeKillfocus(); 
	int			OnFreeCheckValue(); 
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue(); 
	void			OnAutoPrintReceiptSelect(); 
	//void			OnDifferencePaidChange(); 
	//void			OnDifferencePaidSetfocus(); 
	//void			OnDifferencePaidKillfocus(); 
	int			OnDifferencePaidCheckValue(); 
	//void			OnTotalPayableChange(); 
	//void			OnTotalPayableSetfocus(); 
	//void			OnTotalPayableKillfocus(); 
	int			OnTotalPayableCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	void			OnReasonButtonSelect(); 
	void			OnPaymentSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintReceiptSelect(); 
	void			OnPrintPaymentReceiptSelect(); 
	void			OnCloseSelect(); 
	bool			OnReceiptFee(); 
	bool			OnReceiptFee2(); 
	int				OnInsuranceUnpaidItem();
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
	void RecalcTotal();
};
#endif
